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

// Function: sub_0011B360
// Address: 0x11b360 - 0x11b388
void sub_0011B360_0x11b360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B360_0x11b360");
#endif

    ctx->pc = 0x11b360u;

    // 0x11b360: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x11b360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x11b364: 0xac80123c  sw          $zero, 0x123C($a0)
    ctx->pc = 0x11b364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4668), GPR_U32(ctx, 0));
    // 0x11b368: 0xac821220  sw          $v0, 0x1220($a0)
    ctx->pc = 0x11b368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4640), GPR_U32(ctx, 2));
    // 0x11b36c: 0xac801224  sw          $zero, 0x1224($a0)
    ctx->pc = 0x11b36cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4644), GPR_U32(ctx, 0));
    // 0x11b370: 0xac801228  sw          $zero, 0x1228($a0)
    ctx->pc = 0x11b370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4648), GPR_U32(ctx, 0));
    // 0x11b374: 0xac80122c  sw          $zero, 0x122C($a0)
    ctx->pc = 0x11b374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4652), GPR_U32(ctx, 0));
    // 0x11b378: 0xac801230  sw          $zero, 0x1230($a0)
    ctx->pc = 0x11b378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4656), GPR_U32(ctx, 0));
    // 0x11b37c: 0xac801234  sw          $zero, 0x1234($a0)
    ctx->pc = 0x11b37cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4660), GPR_U32(ctx, 0));
    // 0x11b380: 0x3e00008  jr          $ra
    ctx->pc = 0x11B380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B380u;
        // 0x11b384: 0xac801238  sw          $zero, 0x1238($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4664), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B388u;
}
