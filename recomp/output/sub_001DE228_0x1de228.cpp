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

// Function: sub_001DE228
// Address: 0x1de228 - 0x1de278
void sub_001DE228_0x1de228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE228_0x1de228");
#endif

    switch (ctx->pc) {
        case 0x1de244u: goto label_1de244;
        case 0x1de260u: goto label_1de260;
        default: break;
    }

    ctx->pc = 0x1de228u;

    // 0x1de228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de22c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de230: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de234: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de238: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1de238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1de23c: 0xc07a248  jal         func_1E8920
    ctx->pc = 0x1DE23Cu;
    SET_GPR_U32(ctx, 31, 0x1DE244u);
    ctx->pc = 0x1DE240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE23Cu;
    // 0x1de240: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8920u, 0x1DE23Cu, 0x1DE244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE244u;
label_1de244:
    // 0x1de244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de248: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1de248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de24c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1de24cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de250: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1de250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de254: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1de254u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de258: 0xc0778e6  jal         func_1DE398
    ctx->pc = 0x1DE258u;
    SET_GPR_U32(ctx, 31, 0x1DE260u);
    ctx->pc = 0x1DE25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE258u;
    // 0x1de25c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE398u, 0x1DE258u, 0x1DE260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE260u;
label_1de260:
    // 0x1de260: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de264: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de268: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de26c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE26Cu;
        // 0x1de270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE274u;
    // 0x1de274: 0x0  nop
    ctx->pc = 0x1de274u;
    // NOP
    ctx->pc = 0x1de278u;
}
