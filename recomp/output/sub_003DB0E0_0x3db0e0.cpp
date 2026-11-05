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

// Function: sub_003DB0E0
// Address: 0x3db0e0 - 0x3db108
void sub_003DB0E0_0x3db0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB0E0_0x3db0e0");
#endif

    switch (ctx->pc) {
        case 0x3db0f0u: goto label_3db0f0;
        case 0x3db0f8u: goto label_3db0f8;
        default: break;
    }

    ctx->pc = 0x3db0e0u;

    // 0x3db0e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db0e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db0e8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DB0E8u;
    SET_GPR_U32(ctx, 31, 0x3DB0F0u);
    ctx->pc = 0x3DB0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB0E8u;
    // 0x3db0ec: 0x240408b0  addiu       $a0, $zero, 0x8B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DB0E8u, 0x3DB0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB0F0u;
label_3db0f0:
    // 0x3db0f0: 0xc058122  jal         func_160488
    ctx->pc = 0x3DB0F0u;
    SET_GPR_U32(ctx, 31, 0x3DB0F8u);
    ctx->pc = 0x3DB0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB0F0u;
    // 0x3db0f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160488u, 0x3DB0F0u, 0x3DB0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB0F8u;
label_3db0f8:
    // 0x3db0f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB0FCu;
        // 0x3db100: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB0FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB104u;
    // 0x3db104: 0x0  nop
    ctx->pc = 0x3db104u;
    // NOP
    ctx->pc = 0x3db108u;
}
