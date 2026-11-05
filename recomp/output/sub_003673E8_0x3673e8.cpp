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

// Function: sub_003673E8
// Address: 0x3673e8 - 0x367410
void sub_003673E8_0x3673e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003673E8_0x3673e8");
#endif

    ctx->pc = 0x3673e8u;

    // 0x3673e8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3673e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3673ec: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3673ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3673f0: 0x24421ed8  addiu       $v0, $v0, 0x1ED8
    ctx->pc = 0x3673f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7896));
    // 0x3673f4: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x3673f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3673f8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3673f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3673fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3673fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x367400: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x367400u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x367404: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x367404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x367408: 0x3e00008  jr          $ra
    ctx->pc = 0x367408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367408u;
        // 0x36740c: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367410u;
}
