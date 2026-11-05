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

// Function: sub_0013C6A0
// Address: 0x13c6a0 - 0x13c6b8
void sub_0013C6A0_0x13c6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C6A0_0x13c6a0");
#endif

    ctx->pc = 0x13c6a0u;

    // 0x13c6a0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x13c6a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13c6a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c6a8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x13c6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x13c6ac: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x13c6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13c6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x13C6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C6B0u;
        // 0x13c6b4: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C6B8u;
}
