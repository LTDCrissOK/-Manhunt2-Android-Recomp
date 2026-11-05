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

// Function: sub_002AC780
// Address: 0x2ac780 - 0x2ac798
void sub_002AC780_0x2ac780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC780_0x2ac780");
#endif

    ctx->pc = 0x2ac780u;

    // 0x2ac780: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2ac780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2ac784: 0x8c62259c  lw          $v0, 0x259C($v1)
    ctx->pc = 0x2ac784u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C259Cu));
    // 0x2ac788: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x2ac788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x2ac78c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC78Cu;
        // 0x2ac790: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC794u;
    // 0x2ac794: 0x0  nop
    ctx->pc = 0x2ac794u;
    // NOP
    ctx->pc = 0x2ac798u;
}
