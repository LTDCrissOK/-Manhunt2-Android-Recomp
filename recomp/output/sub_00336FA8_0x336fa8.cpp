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

// Function: sub_00336FA8
// Address: 0x336fa8 - 0x336fd8
void sub_00336FA8_0x336fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336FA8_0x336fa8");
#endif

    switch (ctx->pc) {
        case 0x336fc4u: goto label_336fc4;
        default: break;
    }

    ctx->pc = 0x336fa8u;

    // 0x336fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x336fac: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x336FACu;
    {
        const bool branch_taken_0x336fac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x336FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336FACu;
        // 0x336fb0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336fac) {
            ctx->pc = 0x336FBCu;
            goto label_336fbc;
        }
    }
    ctx->pc = 0x336FB4u;
    // 0x336fb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x336FB4u;
    {
        const bool branch_taken_0x336fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336FB4u;
        // 0x336fb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336fb4) {
            ctx->pc = 0x336FC8u;
            goto label_336fc8;
        }
    }
    ctx->pc = 0x336FBCu;
label_336fbc:
    // 0x336fbc: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x336FBCu;
    SET_GPR_U32(ctx, 31, 0x336FC4u);
    ctx->pc = 0x336FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336FBCu;
    // 0x336fc0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x336FBCu, 0x336FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336FC4u;
label_336fc4:
    // 0x336fc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x336fc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_336fc8:
    // 0x336fc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x336FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336FCCu;
        // 0x336fd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336FD4u;
    // 0x336fd4: 0x0  nop
    ctx->pc = 0x336fd4u;
    // NOP
    ctx->pc = 0x336fd8u;
}
