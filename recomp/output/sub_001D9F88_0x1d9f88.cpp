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

// Function: sub_001D9F88
// Address: 0x1d9f88 - 0x1d9fc8
void sub_001D9F88_0x1d9f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9F88_0x1d9f88");
#endif

    switch (ctx->pc) {
        case 0x1d9fb4u: goto label_1d9fb4;
        default: break;
    }

    ctx->pc = 0x1d9f88u;

    // 0x1d9f88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9f8c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1d9f8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9f90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d9f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d9f94: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1d9f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1d9f98: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x1d9f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1d9f9c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9F9Cu;
    {
        const bool branch_taken_0x1d9f9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F9Cu;
        // 0x1d9fa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9f9c) {
            ctx->pc = 0x1D9FB8u;
            goto label_1d9fb8;
        }
    }
    ctx->pc = 0x1D9FA4u;
    // 0x1d9fa4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1d9fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1d9fa8: 0x8c660018  lw          $a2, 0x18($v1)
    ctx->pc = 0x1d9fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1d9fac: 0xc07ab70  jal         func_1EADC0
    ctx->pc = 0x1D9FACu;
    SET_GPR_U32(ctx, 31, 0x1D9FB4u);
    ctx->pc = 0x1D9FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9FACu;
    // 0x1d9fb0: 0x8c450018  lw          $a1, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EADC0u, 0x1D9FACu, 0x1D9FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9FB4u;
label_1d9fb4:
    // 0x1d9fb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d9fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9fb8:
    // 0x1d9fb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9FBCu;
        // 0x1d9fc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9FC4u;
    // 0x1d9fc4: 0x0  nop
    ctx->pc = 0x1d9fc4u;
    // NOP
    ctx->pc = 0x1d9fc8u;
}
