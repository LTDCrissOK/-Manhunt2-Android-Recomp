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

// Function: sub_002141B0
// Address: 0x2141b0 - 0x2141c8
void sub_002141B0_0x2141b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002141B0_0x2141b0");
#endif

    ctx->pc = 0x2141b0u;

    // 0x2141b0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2141b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2141b4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2141b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2141b8: 0xac4094c0  sw          $zero, -0x6B40($v0)
    ctx->pc = 0x2141b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F94C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F94C0u, _value); } while (0);
    // 0x2141bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2141BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2141C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2141BCu;
        // 0x2141c0: 0xac6094c4  sw          $zero, -0x6B3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294939844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2141BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2141C4u;
    // 0x2141c4: 0x0  nop
    ctx->pc = 0x2141c4u;
    // NOP
    ctx->pc = 0x2141c8u;
}
