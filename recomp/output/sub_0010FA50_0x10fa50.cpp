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

// Function: sub_0010FA50
// Address: 0x10fa50 - 0x10faa0
void sub_0010FA50_0x10fa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FA50_0x10fa50");
#endif

    ctx->pc = 0x10fa50u;

    // 0x10fa50: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x10fa50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10fa54: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x10fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x10fa58: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x10fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x10fa5c: 0xac850210  sw          $a1, 0x210($a0)
    ctx->pc = 0x10fa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 528), GPR_U32(ctx, 5));
    // 0x10fa60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10fa64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10fa68: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x10fa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x10fa6c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10FA6Cu;
    {
        const bool branch_taken_0x10fa6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fa6c) {
            ctx->pc = 0x10FA94u;
            goto label_10fa94;
        }
    }
    ctx->pc = 0x10FA74u;
    // 0x10fa74: 0x8c430fec  lw          $v1, 0xFEC($v0)
    ctx->pc = 0x10fa74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4076)));
    // 0x10fa78: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10FA78u;
    {
        const bool branch_taken_0x10fa78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fa78) {
            ctx->pc = 0x10FA94u;
            goto label_10fa94;
        }
    }
    ctx->pc = 0x10FA80u;
    // 0x10fa80: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FA80u;
    {
        const bool branch_taken_0x10fa80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fa80) {
            ctx->pc = 0x10FA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10FA80u;
            // 0x10fa84: 0xac600040  sw          $zero, 0x40($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10FA94u;
            goto label_10fa94;
        }
    }
    ctx->pc = 0x10FA88u;
    // 0x10fa88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10fa8c: 0x3e00008  jr          $ra
    ctx->pc = 0x10FA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA8Cu;
        // 0x10fa90: 0xac620040  sw          $v0, 0x40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FA8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FA94u;
label_10fa94:
    // 0x10fa94: 0x3e00008  jr          $ra
    ctx->pc = 0x10FA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FA9Cu;
    // 0x10fa9c: 0x0  nop
    ctx->pc = 0x10fa9cu;
    // NOP
    ctx->pc = 0x10faa0u;
}
