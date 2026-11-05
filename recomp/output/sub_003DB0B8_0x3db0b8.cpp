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

// Function: sub_003DB0B8
// Address: 0x3db0b8 - 0x3db0e0
void sub_003DB0B8_0x3db0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB0B8_0x3db0b8");
#endif

    switch (ctx->pc) {
        case 0x3db0c8u: goto label_3db0c8;
        case 0x3db0d0u: goto label_3db0d0;
        default: break;
    }

    ctx->pc = 0x3db0b8u;

    // 0x3db0b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db0bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db0c0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DB0C0u;
    SET_GPR_U32(ctx, 31, 0x3DB0C8u);
    ctx->pc = 0x3DB0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB0C0u;
    // 0x3db0c4: 0x24040b80  addiu       $a0, $zero, 0xB80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DB0C0u, 0x3DB0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB0C8u;
label_3db0c8:
    // 0x3db0c8: 0xc0566c4  jal         func_159B10
    ctx->pc = 0x3DB0C8u;
    SET_GPR_U32(ctx, 31, 0x3DB0D0u);
    ctx->pc = 0x3DB0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB0C8u;
    // 0x3db0cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159B10u, 0x3DB0C8u, 0x3DB0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB0D0u;
label_3db0d0:
    // 0x3db0d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB0D4u;
        // 0x3db0d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB0DCu;
    // 0x3db0dc: 0x0  nop
    ctx->pc = 0x3db0dcu;
    // NOP
    ctx->pc = 0x3db0e0u;
}
