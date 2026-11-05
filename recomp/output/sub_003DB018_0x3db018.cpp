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

// Function: sub_003DB018
// Address: 0x3db018 - 0x3db040
void sub_003DB018_0x3db018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB018_0x3db018");
#endif

    switch (ctx->pc) {
        case 0x3db028u: goto label_3db028;
        case 0x3db030u: goto label_3db030;
        default: break;
    }

    ctx->pc = 0x3db018u;

    // 0x3db018: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db01c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db020: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DB020u;
    SET_GPR_U32(ctx, 31, 0x3DB028u);
    ctx->pc = 0x3DB024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB020u;
    // 0x3db024: 0x24040550  addiu       $a0, $zero, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DB020u, 0x3DB028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB028u;
label_3db028:
    // 0x3db028: 0xc0556cc  jal         func_155B30
    ctx->pc = 0x3DB028u;
    SET_GPR_U32(ctx, 31, 0x3DB030u);
    ctx->pc = 0x3DB02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB028u;
    // 0x3db02c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B30u, 0x3DB028u, 0x3DB030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB030u;
label_3db030:
    // 0x3db030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db034: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB034u;
        // 0x3db038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB03Cu;
    // 0x3db03c: 0x0  nop
    ctx->pc = 0x3db03cu;
    // NOP
    ctx->pc = 0x3db040u;
}
