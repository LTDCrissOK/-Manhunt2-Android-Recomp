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

// Function: sub_002AC6B0
// Address: 0x2ac6b0 - 0x2ac6d0
void sub_002AC6B0_0x2ac6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC6B0_0x2ac6b0");
#endif

    ctx->pc = 0x2ac6b0u;

    // 0x2ac6b0: 0x240300b0  addiu       $v1, $zero, 0xB0
    ctx->pc = 0x2ac6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x2ac6b4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2ac6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2ac6b8: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2ac6b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ac6bc: 0x24422508  addiu       $v0, $v0, 0x2508
    ctx->pc = 0x2ac6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9480));
    // 0x2ac6c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ac6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ac6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC6C4u;
        // 0x2ac6c8: 0x908200ec  lbu         $v0, 0xEC($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC6CCu;
    // 0x2ac6cc: 0x0  nop
    ctx->pc = 0x2ac6ccu;
    // NOP
    ctx->pc = 0x2ac6d0u;
}
