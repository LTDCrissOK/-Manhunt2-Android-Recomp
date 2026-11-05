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

// Function: sub_00113360
// Address: 0x113360 - 0x113378
void sub_00113360_0x113360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113360_0x113360");
#endif

    ctx->pc = 0x113360u;

    // 0x113360: 0xac800130  sw          $zero, 0x130($a0)
    ctx->pc = 0x113360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 0));
    // 0x113364: 0xac800134  sw          $zero, 0x134($a0)
    ctx->pc = 0x113364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 0));
    // 0x113368: 0x7c800140  sq          $zero, 0x140($a0)
    ctx->pc = 0x113368u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 320), GPR_VEC(ctx, 0));
    // 0x11336c: 0x3e00008  jr          $ra
    ctx->pc = 0x11336Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11336Cu;
        // 0x113370: 0xa0800150  sb          $zero, 0x150($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 336), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11336Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113374u;
    // 0x113374: 0x0  nop
    ctx->pc = 0x113374u;
    // NOP
    ctx->pc = 0x113378u;
}
