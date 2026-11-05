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

// Function: sub_00116368
// Address: 0x116368 - 0x1163a0
void sub_00116368_0x116368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116368_0x116368");
#endif

    switch (ctx->pc) {
        case 0x116378u: goto label_116378;
        case 0x116388u: goto label_116388;
        default: break;
    }

    ctx->pc = 0x116368u;

    // 0x116368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x116368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11636c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11636cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x116370: 0xc08951c  jal         func_225470
    ctx->pc = 0x116370u;
    SET_GPR_U32(ctx, 31, 0x116378u);
    ctx->pc = 0x116374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116370u;
    // 0x116374: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225470u, 0x116370u, 0x116378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116378u;
label_116378:
    // 0x116378: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x116378u;
    {
        const bool branch_taken_0x116378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116378) {
            ctx->pc = 0x11637Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116378u;
            // 0x11637c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116390u;
            goto label_116390;
        }
    }
    ctx->pc = 0x116380u;
    // 0x116380: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x116380u;
    SET_GPR_U32(ctx, 31, 0x116388u);
    ctx->pc = 0x116384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116380u;
    // 0x116384: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x116380u, 0x116388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116388u;
label_116388:
    // 0x116388: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x116388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x11638c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x11638cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_116390:
    // 0x116390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x116390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116394: 0x3e00008  jr          $ra
    ctx->pc = 0x116394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116394u;
        // 0x116398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11639Cu;
    // 0x11639c: 0x0  nop
    ctx->pc = 0x11639cu;
    // NOP
    ctx->pc = 0x1163a0u;
}
