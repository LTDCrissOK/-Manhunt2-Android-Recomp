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

// Function: sub_00118590
// Address: 0x118590 - 0x1185c8
void sub_00118590_0x118590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118590_0x118590");
#endif

    ctx->pc = 0x118590u;

    // 0x118590: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x118590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x118594: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x118594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x118598: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x118598u;
    {
        const bool branch_taken_0x118598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118598u;
        // 0x11859c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118598) {
            ctx->pc = 0x1185B4u;
            goto label_1185b4;
        }
    }
    ctx->pc = 0x1185A0u;
    // 0x1185a0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1185A0u;
    {
        const bool branch_taken_0x1185a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1185a0) {
            ctx->pc = 0x1185BCu;
            goto label_1185bc;
        }
    }
    ctx->pc = 0x1185A8u;
    // 0x1185a8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1185a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1185ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1185ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1185B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1185ACu;
        // 0x1185b0: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1185ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1185B4u;
label_1185b4:
    // 0x1185b4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1185b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1185b8: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x1185b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
label_1185bc:
    // 0x1185bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1185BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1185BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1185C4u;
    // 0x1185c4: 0x0  nop
    ctx->pc = 0x1185c4u;
    // NOP
    ctx->pc = 0x1185c8u;
}
