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

// Function: sub_002B37F0
// Address: 0x2b37f0 - 0x2b3818
void sub_002B37F0_0x2b37f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B37F0_0x2b37f0");
#endif

    ctx->pc = 0x2b37f0u;

    // 0x2b37f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b37f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b37f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b37f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b37f8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2b37f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2b37fc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2b37fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2b3800: 0xac800c00  sw          $zero, 0xC00($a0)
    ctx->pc = 0x2b3800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3072), GPR_U32(ctx, 0));
    // 0x2b3804: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2b3804u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2b3808: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2b3808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2b380c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2b380cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2b3810: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3810u;
        // 0x2b3814: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3818u;
}
