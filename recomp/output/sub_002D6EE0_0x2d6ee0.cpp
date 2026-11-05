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

// Function: sub_002D6EE0
// Address: 0x2d6ee0 - 0x2d6f00
void sub_002D6EE0_0x2d6ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6EE0_0x2d6ee0");
#endif

    ctx->pc = 0x2d6ee0u;

    // 0x2d6ee0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D6EE0u;
    {
        const bool branch_taken_0x2d6ee0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2D6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6EE0u;
        // 0x2d6ee4: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6ee0) {
            ctx->pc = 0x2D6EF8u;
            goto label_2d6ef8;
        }
    }
    ctx->pc = 0x2D6EE8u;
    // 0x2d6ee8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d6ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6eec: 0xa23018  mult        $a2, $a1, $v0
    ctx->pc = 0x2d6eecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2d6ef0: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x2d6ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2d6ef4: 0xa0430025  sb          $v1, 0x25($v0)
    ctx->pc = 0x2d6ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 37), (uint8_t)GPR_U32(ctx, 3));
label_2d6ef8:
    // 0x2d6ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6F00u;
}
