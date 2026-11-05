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

// Function: sub_0020AC58
// Address: 0x20ac58 - 0x20ac78
void sub_0020AC58_0x20ac58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AC58_0x20ac58");
#endif

    ctx->pc = 0x20ac58u;

    // 0x20ac58: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x20ac58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x20ac5c: 0x8c6294a0  lw          $v0, -0x6B60($v1)
    ctx->pc = 0x20ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F94A0u));
    // 0x20ac60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20ac64: 0xac6294a0  sw          $v0, -0x6B60($v1)
    ctx->pc = 0x20ac64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F94A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F94A0u, _value); } while (0);
    // 0x20ac68: 0xf  sync
    ctx->pc = 0x20ac68u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x20ac6c: 0x42000038  ei
    ctx->pc = 0x20ac6cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x20ac70: 0x3e00008  jr          $ra
    ctx->pc = 0x20AC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC70u;
        // 0x20ac74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AC78u;
}
