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

// Function: sub_00275660
// Address: 0x275660 - 0x275678
void sub_00275660_0x275660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275660_0x275660");
#endif

    ctx->pc = 0x275660u;

    // 0x275660: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x275660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x275664: 0x24439e00  addiu       $v1, $v0, -0x6200
    ctx->pc = 0x275664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942208));
    // 0x275668: 0xa0449e00  sb          $a0, -0x6200($v0)
    ctx->pc = 0x275668u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3F9E00u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F9E00u, _value); } while (0);
    // 0x27566c: 0xa0660002  sb          $a2, 0x2($v1)
    ctx->pc = 0x27566cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3F9E02u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F9E02u, _value); } while (0);
    // 0x275670: 0x3e00008  jr          $ra
    ctx->pc = 0x275670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275670u;
        // 0x275674: 0xa0650001  sb          $a1, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275678u;
}
