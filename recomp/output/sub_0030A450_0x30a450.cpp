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

// Function: sub_0030A450
// Address: 0x30a450 - 0x30a478
void sub_0030A450_0x30a450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A450_0x30a450");
#endif

    switch (ctx->pc) {
        case 0x30a460u: goto label_30a460;
        case 0x30a468u: goto label_30a468;
        default: break;
    }

    ctx->pc = 0x30a450u;

    // 0x30a450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30a450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30a454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30a454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30a458: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x30A458u;
    SET_GPR_U32(ctx, 31, 0x30A460u);
    ctx->pc = 0x30A45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A458u;
    // 0x30a45c: 0x240401a0  addiu       $a0, $zero, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x30A458u, 0x30A460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A460u;
label_30a460:
    // 0x30a460: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x30A460u;
    SET_GPR_U32(ctx, 31, 0x30A468u);
    ctx->pc = 0x30A464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A460u;
    // 0x30a464: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x30A460u, 0x30A468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A468u;
label_30a468:
    // 0x30a468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30a468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a46c: 0x3e00008  jr          $ra
    ctx->pc = 0x30A46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A46Cu;
        // 0x30a470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A474u;
    // 0x30a474: 0x0  nop
    ctx->pc = 0x30a474u;
    // NOP
    ctx->pc = 0x30a478u;
}
