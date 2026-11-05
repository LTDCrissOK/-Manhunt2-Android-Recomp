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

// Function: sub_0035CDF0
// Address: 0x35cdf0 - 0x35ce10
void sub_0035CDF0_0x35cdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035CDF0_0x35cdf0");
#endif

    ctx->pc = 0x35cdf0u;

    // 0x35cdf0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x35cdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x35cdf4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x35cdf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cdf8: 0x2463caf0  addiu       $v1, $v1, -0x3510
    ctx->pc = 0x35cdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953712));
    // 0x35cdfc: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x35cdfcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x35ce00: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x35ce00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x35ce04: 0x3e00008  jr          $ra
    ctx->pc = 0x35CE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CE04u;
        // 0x35ce08: 0xa4800006  sh          $zero, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CE0Cu;
    // 0x35ce0c: 0x0  nop
    ctx->pc = 0x35ce0cu;
    // NOP
    ctx->pc = 0x35ce10u;
}
