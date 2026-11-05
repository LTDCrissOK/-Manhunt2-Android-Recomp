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

// Function: sub_003A5688
// Address: 0x3a5688 - 0x3a56a8
void sub_003A5688_0x3a5688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5688_0x3a5688");
#endif

    ctx->pc = 0x3a5688u;

    // 0x3a5688: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a5688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a568c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a568cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a5690: 0x24423790  addiu       $v0, $v0, 0x3790
    ctx->pc = 0x3a5690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14224));
    // 0x3a5694: 0xac673794  sw          $a3, 0x3794($v1)
    ctx->pc = 0x3a5694u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x413794u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x413794u, _value); } while (0);
    // 0x3a5698: 0xa0460002  sb          $a2, 0x2($v0)
    ctx->pc = 0x3a5698u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x413792u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x413792u, _value); } while (0);
    // 0x3a569c: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x3a569cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x413790u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x413790u, _value); } while (0);
    // 0x3a56a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A56A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A56A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A56A0u;
        // 0x3a56a4: 0xa0450001  sb          $a1, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A56A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A56A8u;
}
