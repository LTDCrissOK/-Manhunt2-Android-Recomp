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

// Function: sub_003CDE70
// Address: 0x3cde70 - 0x3cdea0
void sub_003CDE70_0x3cde70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CDE70_0x3cde70");
#endif

    switch (ctx->pc) {
        case 0x3cde80u: goto label_3cde80;
        case 0x3cde8cu: goto label_3cde8c;
        default: break;
    }

    ctx->pc = 0x3cde70u;

    // 0x3cde70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3cde70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3cde74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3cde74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3cde78: 0xc0f3786  jal         func_3CDE18
    ctx->pc = 0x3CDE78u;
    SET_GPR_U32(ctx, 31, 0x3CDE80u);
    ctx->pc = 0x3CDE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CDE18u, 0x3CDE78u, 0x3CDE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDE80u;
label_3cde80:
    // 0x3cde80: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3cde80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3cde84: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x3CDE84u;
    SET_GPR_U32(ctx, 31, 0x3CDE8Cu);
    ctx->pc = 0x3CDE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDE84u;
    // 0x3cde88: 0x8c44d694  lw          $a0, -0x296C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956692)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x3CDE84u, 0x3CDE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDE8Cu;
label_3cde8c:
    // 0x3cde8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3cde8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cde90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3cde90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cde94: 0x3e00008  jr          $ra
    ctx->pc = 0x3CDE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CDE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDE94u;
        // 0x3cde98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CDE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CDE9Cu;
    // 0x3cde9c: 0x0  nop
    ctx->pc = 0x3cde9cu;
    // NOP
    ctx->pc = 0x3cdea0u;
}
