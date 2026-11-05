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

// Function: sub_003DB360
// Address: 0x3db360 - 0x3db388
void sub_003DB360_0x3db360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB360_0x3db360");
#endif

    switch (ctx->pc) {
        case 0x3db370u: goto label_3db370;
        case 0x3db378u: goto label_3db378;
        default: break;
    }

    ctx->pc = 0x3db360u;

    // 0x3db360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db368: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DB368u;
    SET_GPR_U32(ctx, 31, 0x3DB370u);
    ctx->pc = 0x3DB36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB368u;
    // 0x3db36c: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DB368u, 0x3DB370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB370u;
label_3db370:
    // 0x3db370: 0xc04cd96  jal         func_133658
    ctx->pc = 0x3DB370u;
    SET_GPR_U32(ctx, 31, 0x3DB378u);
    ctx->pc = 0x3DB374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB370u;
    // 0x3db374: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133658u, 0x3DB370u, 0x3DB378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB378u;
label_3db378:
    // 0x3db378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db37c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB37Cu;
        // 0x3db380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB384u;
    // 0x3db384: 0x0  nop
    ctx->pc = 0x3db384u;
    // NOP
    ctx->pc = 0x3db388u;
}
