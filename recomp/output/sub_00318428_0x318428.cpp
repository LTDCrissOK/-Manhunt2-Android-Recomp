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

// Function: sub_00318428
// Address: 0x318428 - 0x318468
void sub_00318428_0x318428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318428_0x318428");
#endif

    switch (ctx->pc) {
        case 0x318438u: goto label_318438;
        case 0x31844cu: goto label_31844c;
        case 0x318454u: goto label_318454;
        case 0x31845cu: goto label_31845c;
        default: break;
    }

    ctx->pc = 0x318428u;

    // 0x318428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x318428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31842c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31842cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x318430: 0xc0db0ea  jal         func_36C3A8
    ctx->pc = 0x318430u;
    SET_GPR_U32(ctx, 31, 0x318438u);
    ctx->pc = 0x318434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318430u;
    // 0x318434: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x318430u, 0x318438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318438u;
label_318438:
    // 0x318438: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x318438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31843c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x31843cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x318440: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x318440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x318444: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x318444u;
    SET_GPR_U32(ctx, 31, 0x31844Cu);
    ctx->pc = 0x318448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318444u;
    // 0x318448: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x318444u, 0x31844Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31844Cu;
label_31844c:
    // 0x31844c: 0xc0b6a00  jal         func_2DA800
    ctx->pc = 0x31844Cu;
    SET_GPR_U32(ctx, 31, 0x318454u);
    ctx->pc = 0x2DA800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA800u, 0x31844Cu, 0x318454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318454u;
label_318454:
    // 0x318454: 0xc0db0ea  jal         func_36C3A8
    ctx->pc = 0x318454u;
    SET_GPR_U32(ctx, 31, 0x31845Cu);
    ctx->pc = 0x318458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318454u;
    // 0x318458: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x318454u, 0x31845Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31845Cu;
label_31845c:
    // 0x31845c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31845cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x318460: 0x3e00008  jr          $ra
    ctx->pc = 0x318460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318460u;
        // 0x318464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318468u;
}
