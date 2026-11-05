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

// Function: sub_001367A8
// Address: 0x1367a8 - 0x1367c0
void sub_001367A8_0x1367a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001367A8_0x1367a8");
#endif

    ctx->pc = 0x1367a8u;

    // 0x1367a8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1367a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1367ac: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1367acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1367b0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1367b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1367b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1367B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1367B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367B4u;
        // 0x1367b8: 0x8ca20030  lw          $v0, 0x30($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1367B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1367BCu;
    // 0x1367bc: 0x0  nop
    ctx->pc = 0x1367bcu;
    // NOP
    ctx->pc = 0x1367c0u;
}
