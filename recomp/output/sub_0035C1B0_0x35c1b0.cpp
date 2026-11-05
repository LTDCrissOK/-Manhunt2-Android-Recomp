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

// Function: sub_0035C1B0
// Address: 0x35c1b0 - 0x35c1d0
void sub_0035C1B0_0x35c1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C1B0_0x35c1b0");
#endif

    ctx->pc = 0x35c1b0u;

    // 0x35c1b0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x35c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x35c1b4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x35c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x35c1b8: 0xac40cae4  sw          $zero, -0x351C($v0)
    ctx->pc = 0x35c1b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FCAE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCAE4u, _value); } while (0);
    // 0x35c1bc: 0xac60cae8  sw          $zero, -0x3518($v1)
    ctx->pc = 0x35c1bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FCAE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCAE8u, _value); } while (0);
    // 0x35c1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x35C1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C1C0u;
        // 0x35c1c4: 0xac8005e0  sw          $zero, 0x5E0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C1C8u;
    // 0x35c1c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x35c1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35c1cc: 0x0  nop
    ctx->pc = 0x35c1ccu;
    // NOP
    ctx->pc = 0x35c1d0u;
}
