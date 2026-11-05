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

// Function: sub_002FC8A0
// Address: 0x2fc8a0 - 0x2fc8b8
void sub_002FC8A0_0x2fc8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC8A0_0x2fc8a0");
#endif

    ctx->pc = 0x2fc8a0u;

    // 0x2fc8a0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fc8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fc8a4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2fc8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2fc8a8: 0x2442b918  addiu       $v0, $v0, -0x46E8
    ctx->pc = 0x2fc8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949144));
    // 0x2fc8ac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2fc8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2fc8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC8B0u;
        // 0x2fc8b4: 0x90820004  lbu         $v0, 0x4($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC8B8u;
}
