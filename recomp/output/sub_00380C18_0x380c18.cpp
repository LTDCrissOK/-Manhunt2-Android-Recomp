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

// Function: sub_00380C18
// Address: 0x380c18 - 0x380c50
void sub_00380C18_0x380c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380C18_0x380c18");
#endif

    ctx->pc = 0x380c18u;

    // 0x380c18: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x380c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x380c1c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x380c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x380c20: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x380c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x380c24: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x380c24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
    // 0x380c28: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x380c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x380c2c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x380c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x380c30: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x380c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x380c34: 0x3e00008  jr          $ra
    ctx->pc = 0x380C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380C34u;
        // 0x380c38: 0xac86001c  sw          $a2, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380C3Cu;
    // 0x380c3c: 0x0  nop
    ctx->pc = 0x380c3cu;
    // NOP
    // 0x380c40: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x380c40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x380c44: 0x0  nop
    ctx->pc = 0x380c44u;
    // NOP
    // 0x380c48: 0xac86004c  sw          $a2, 0x4C($a0)
    ctx->pc = 0x380c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 6));
    // 0x380c4c: 0x0  nop
    ctx->pc = 0x380c4cu;
    // NOP
    ctx->pc = 0x380c50u;
}
