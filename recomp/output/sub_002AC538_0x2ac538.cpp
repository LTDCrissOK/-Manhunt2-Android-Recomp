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

// Function: sub_002AC538
// Address: 0x2ac538 - 0x2ac558
void sub_002AC538_0x2ac538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC538_0x2ac538");
#endif

    ctx->pc = 0x2ac538u;

    // 0x2ac538: 0x240300b0  addiu       $v1, $zero, 0xB0
    ctx->pc = 0x2ac538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x2ac53c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2ac53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2ac540: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2ac540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ac544: 0x24422508  addiu       $v0, $v0, 0x2508
    ctx->pc = 0x2ac544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9480));
    // 0x2ac548: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ac548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ac54c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC54Cu;
        // 0x2ac550: 0x8c8200f0  lw          $v0, 0xF0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC554u;
    // 0x2ac554: 0x0  nop
    ctx->pc = 0x2ac554u;
    // NOP
    ctx->pc = 0x2ac558u;
}
