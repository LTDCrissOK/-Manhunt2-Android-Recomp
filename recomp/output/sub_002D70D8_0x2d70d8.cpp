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

// Function: sub_002D70D8
// Address: 0x2d70d8 - 0x2d7100
void sub_002D70D8_0x2d70d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D70D8_0x2d70d8");
#endif

    ctx->pc = 0x2d70d8u;

    // 0x2d70d8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d70d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2d70dc: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2d70dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2d70e0: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x2d70e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2d70e4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2d70e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2d70e8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2d70e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2d70ec: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d70ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d70f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D70F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D70F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D70F0u;
        // 0x2d70f4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D70F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D70F8u;
    // 0x2d70f8: 0xa0800014  sb          $zero, 0x14($a0)
    ctx->pc = 0x2d70f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d70fc: 0x0  nop
    ctx->pc = 0x2d70fcu;
    // NOP
    ctx->pc = 0x2d7100u;
}
