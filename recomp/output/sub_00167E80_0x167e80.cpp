#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00167E80
// Address: 0x167e80 - 0x167ec8
void sub_00167E80_0x167e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167E80_0x167e80");
#endif

    switch (ctx->pc) {
        case 0x167e94u: goto label_167e94;
        case 0x167eb4u: goto label_167eb4;
        default: break;
    }

    ctx->pc = 0x167e80u;

    // 0x167e80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x167e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x167e84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x167e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x167e88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x167e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x167e8c: 0xc04ef70  jal         func_13BDC0
    ctx->pc = 0x167E8Cu;
    SET_GPR_U32(ctx, 31, 0x167E94u);
    ctx->pc = 0x167E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167E8Cu;
    // 0x167e90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BDC0u, 0x167E8Cu, 0x167E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167E94u;
label_167e94:
    // 0x167e94: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x167e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x167e98: 0xae000330  sw          $zero, 0x330($s0)
    ctx->pc = 0x167e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 0));
    // 0x167e9c: 0x24630dc8  addiu       $v1, $v1, 0xDC8
    ctx->pc = 0x167e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3528));
    // 0x167ea0: 0xae000340  sw          $zero, 0x340($s0)
    ctx->pc = 0x167ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 0));
    // 0x167ea4: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x167ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x167ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167eac: 0xc05a0a6  jal         func_168298
    ctx->pc = 0x167EACu;
    SET_GPR_U32(ctx, 31, 0x167EB4u);
    ctx->pc = 0x167EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167EACu;
    // 0x167eb0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168298u, 0x167EACu, 0x167EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167EB4u;
label_167eb4:
    // 0x167eb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x167eb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167eb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x167eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x167ebc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x167ebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x167EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EC0u;
        // 0x167ec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167EC8u;
}
