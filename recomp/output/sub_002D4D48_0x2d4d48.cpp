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

// Function: sub_002D4D48
// Address: 0x2d4d48 - 0x2d4d78
void sub_002D4D48_0x2d4d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4D48_0x2d4d48");
#endif

    ctx->pc = 0x2d4d48u;

    // 0x2d4d48: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2d4d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2d4d4c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d4d4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4d50: 0x24633dd8  addiu       $v1, $v1, 0x3DD8
    ctx->pc = 0x2d4d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15832));
    // 0x2d4d54: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2d4d54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2d4d58: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x2d4d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x2d4d5c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2d4d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2d4d60: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2d4d60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2d4d64: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2d4d64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2d4d68: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2d4d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2d4d6c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2d4d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2d4d70: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4D70u;
        // 0x2d4d74: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4D78u;
}
