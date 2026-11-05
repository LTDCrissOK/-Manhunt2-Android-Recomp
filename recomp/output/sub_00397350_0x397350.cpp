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

// Function: sub_00397350
// Address: 0x397350 - 0x3973f0
void sub_00397350_0x397350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397350_0x397350");
#endif

    switch (ctx->pc) {
        case 0x397378u: goto label_397378;
        case 0x397380u: goto label_397380;
        case 0x397388u: goto label_397388;
        case 0x397390u: goto label_397390;
        case 0x397398u: goto label_397398;
        case 0x3973b0u: goto label_3973b0;
        case 0x3973bcu: goto label_3973bc;
        case 0x3973c8u: goto label_3973c8;
        default: break;
    }

    ctx->pc = 0x397350u;

    // 0x397350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x397350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x397354: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x397354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x397358: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x397358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39735c: 0x246318c4  addiu       $v1, $v1, 0x18C4
    ctx->pc = 0x39735cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6340));
    // 0x397360: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x397360u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4018C4u));
    // 0x397364: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x397364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x397368: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x397368u;
    {
        const bool branch_taken_0x397368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397368u;
        // 0x39736c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397368) {
            ctx->pc = 0x3973D8u;
            goto label_3973d8;
        }
    }
    ctx->pc = 0x397370u;
    // 0x397370: 0xc0e5cc0  jal         func_397300
    ctx->pc = 0x397370u;
    SET_GPR_U32(ctx, 31, 0x397378u);
    ctx->pc = 0x397300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397300u, 0x397370u, 0x397378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397378u;
label_397378:
    // 0x397378: 0xc0e5cfc  jal         func_3973F0
    ctx->pc = 0x397378u;
    SET_GPR_U32(ctx, 31, 0x397380u);
    ctx->pc = 0x3973F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3973F0u, 0x397378u, 0x397380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397380u;
label_397380:
    // 0x397380: 0xc0e5d64  jal         func_397590
    ctx->pc = 0x397380u;
    SET_GPR_U32(ctx, 31, 0x397388u);
    ctx->pc = 0x397590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397590u, 0x397380u, 0x397388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397388u;
label_397388:
    // 0x397388: 0xc0e5d30  jal         func_3974C0
    ctx->pc = 0x397388u;
    SET_GPR_U32(ctx, 31, 0x397390u);
    ctx->pc = 0x3974C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3974C0u, 0x397388u, 0x397390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397390u;
label_397390:
    // 0x397390: 0xc0e5db2  jal         func_3976C8
    ctx->pc = 0x397390u;
    SET_GPR_U32(ctx, 31, 0x397398u);
    ctx->pc = 0x3976C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3976C8u, 0x397390u, 0x397398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397398u;
label_397398:
    // 0x397398: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x397398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x39739c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x39739cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3973a0: 0x24421968  addiu       $v0, $v0, 0x1968
    ctx->pc = 0x3973a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6504));
    // 0x3973a4: 0x8c6591f8  lw          $a1, -0x6E08($v1)
    ctx->pc = 0x3973a4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4091F8u));
    // 0x3973a8: 0xc0f260c  jal         func_3C9830
    ctx->pc = 0x3973A8u;
    SET_GPR_U32(ctx, 31, 0x3973B0u);
    ctx->pc = 0x3973ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3973A8u;
    // 0x3973ac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9830u, 0x3973A8u, 0x3973B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3973B0u;
label_3973b0:
    // 0x3973b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3973b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3973b4: 0xc0eb3e0  jal         func_3ACF80
    ctx->pc = 0x3973B4u;
    SET_GPR_U32(ctx, 31, 0x3973BCu);
    ctx->pc = 0x3973B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3973B4u;
    // 0x3973b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACF80u, 0x3973B4u, 0x3973BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3973BCu;
label_3973bc:
    // 0x3973bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3973bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3973c0: 0xc0eb3e6  jal         func_3ACF98
    ctx->pc = 0x3973C0u;
    SET_GPR_U32(ctx, 31, 0x3973C8u);
    ctx->pc = 0x3973C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3973C0u;
    // 0x3973c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACF98u, 0x3973C0u, 0x3973C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3973C8u;
label_3973c8:
    // 0x3973c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3973c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3973cc: 0x80eb48a  j           func_3AD228
    ctx->pc = 0x3973CCu;
    ctx->pc = 0x3973D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3973CCu;
    // 0x3973d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD228u;
    sub_003AD228_0x3ad228(rdram, ctx, runtime); return;
    ctx->pc = 0x3973D4u;
    // 0x3973d4: 0x0  nop
    ctx->pc = 0x3973d4u;
    // NOP
label_3973d8:
    // 0x3973d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3973d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3973dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3973DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3973E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3973DCu;
        // 0x3973e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3973DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3973E4u;
    // 0x3973e4: 0x0  nop
    ctx->pc = 0x3973e4u;
    // NOP
    // 0x3973e8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3973e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3973ec: 0x0  nop
    ctx->pc = 0x3973ecu;
    // NOP
    ctx->pc = 0x3973f0u;
}
