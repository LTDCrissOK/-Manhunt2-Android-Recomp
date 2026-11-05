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

// Function: sub_00177700
// Address: 0x177700 - 0x177730
void sub_00177700_0x177700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177700_0x177700");
#endif

    switch (ctx->pc) {
        case 0x177714u: goto label_177714;
        case 0x177720u: goto label_177720;
        default: break;
    }

    ctx->pc = 0x177700u;

    // 0x177700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177708: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x177708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17770c: 0xc05e128  jal         func_1784A0
    ctx->pc = 0x17770Cu;
    SET_GPR_U32(ctx, 31, 0x177714u);
    ctx->pc = 0x177710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17770Cu;
    // 0x177710: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1784A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1784A0u, 0x17770Cu, 0x177714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177714u;
label_177714:
    // 0x177714: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x177714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177718: 0xc05e452  jal         func_179148
    ctx->pc = 0x177718u;
    SET_GPR_U32(ctx, 31, 0x177720u);
    ctx->pc = 0x17771Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177718u;
    // 0x17771c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179148u, 0x177718u, 0x177720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177720u;
label_177720:
    // 0x177720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177724: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x177724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177728: 0x3e00008  jr          $ra
    ctx->pc = 0x177728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177728u;
        // 0x17772c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177730u;
}
