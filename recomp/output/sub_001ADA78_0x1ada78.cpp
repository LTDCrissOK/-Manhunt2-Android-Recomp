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

// Function: sub_001ADA78
// Address: 0x1ada78 - 0x1adaa0
void sub_001ADA78_0x1ada78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADA78_0x1ada78");
#endif

    ctx->pc = 0x1ada78u;

    // 0x1ada78: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x1ada78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1ada7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ada7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ada80: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1ada80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ada84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ada84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ada88: 0x2442f86e  addiu       $v0, $v0, -0x792
    ctx->pc = 0x1ada88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965358));
    // 0x1ada8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA8Cu;
        // 0x1ada90: 0x2c420002  sltiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADA8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADA94u;
    // 0x1ada94: 0x0  nop
    ctx->pc = 0x1ada94u;
    // NOP
    // 0x1ada98: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1ada98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1ada9c: 0x0  nop
    ctx->pc = 0x1ada9cu;
    // NOP
    ctx->pc = 0x1adaa0u;
}
