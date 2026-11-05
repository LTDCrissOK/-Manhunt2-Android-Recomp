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

// Function: sub_003808E8
// Address: 0x3808e8 - 0x380938
void sub_003808E8_0x3808e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003808E8_0x3808e8");
#endif

    switch (ctx->pc) {
        case 0x380908u: goto label_380908;
        case 0x380910u: goto label_380910;
        default: break;
    }

    ctx->pc = 0x3808e8u;

    // 0x3808e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3808e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3808ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3808ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3808f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3808f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3808f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3808f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3808f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3808f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3808fc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3808fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x380900: 0xc0e028c  jal         func_380A30
    ctx->pc = 0x380900u;
    SET_GPR_U32(ctx, 31, 0x380908u);
    ctx->pc = 0x380904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380900u;
    // 0x380904: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380A30u, 0x380900u, 0x380908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380908u;
label_380908:
    // 0x380908: 0xc0e02b0  jal         func_380AC0
    ctx->pc = 0x380908u;
    SET_GPR_U32(ctx, 31, 0x380910u);
    ctx->pc = 0x38090Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380908u;
    // 0x38090c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380AC0u, 0x380908u, 0x380910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380910u;
label_380910:
    // 0x380910: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x380910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380914: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x380914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x380918: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x380918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x38091c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x38091cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x380920: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x380920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x380924: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x380924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380928: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x380928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x38092c: 0x3e00008  jr          $ra
    ctx->pc = 0x38092Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38092Cu;
        // 0x380930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38092Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380934u;
    // 0x380934: 0x0  nop
    ctx->pc = 0x380934u;
    // NOP
    ctx->pc = 0x380938u;
}
