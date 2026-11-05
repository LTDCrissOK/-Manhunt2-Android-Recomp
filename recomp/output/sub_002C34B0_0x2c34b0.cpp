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

// Function: sub_002C34B0
// Address: 0x2c34b0 - 0x2c34d8
void sub_002C34B0_0x2c34b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C34B0_0x2c34b0");
#endif

    ctx->pc = 0x2c34b0u;

    // 0x2c34b0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2c34b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2c34b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c34b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c34b8: 0x24423d40  addiu       $v0, $v0, 0x3D40
    ctx->pc = 0x2c34b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15680));
    // 0x2c34bc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2c34bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2c34c0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2c34c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2c34c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c34c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c34c8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2c34c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2c34cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C34CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C34D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C34CCu;
        // 0x2c34d0: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C34CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C34D4u;
    // 0x2c34d4: 0x0  nop
    ctx->pc = 0x2c34d4u;
    // NOP
    ctx->pc = 0x2c34d8u;
}
