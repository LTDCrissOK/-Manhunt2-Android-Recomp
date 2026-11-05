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

// Function: sub_002D2B60
// Address: 0x2d2b60 - 0x2d2b90
void sub_002D2B60_0x2d2b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2B60_0x2d2b60");
#endif

    ctx->pc = 0x2d2b60u;

    // 0x2d2b60: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2d2b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2d2b64: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2d2b64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2d2b68: 0x24423d88  addiu       $v0, $v0, 0x3D88
    ctx->pc = 0x2d2b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15752));
    // 0x2d2b6c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2d2b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d2b70: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x2d2b70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x2d2b74: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d2b74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2b78: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2d2b78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2d2b7c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2d2b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2d2b80: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2d2b80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2d2b84: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2B84u;
        // 0x2d2b88: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2B8Cu;
    // 0x2d2b8c: 0x0  nop
    ctx->pc = 0x2d2b8cu;
    // NOP
    ctx->pc = 0x2d2b90u;
}
