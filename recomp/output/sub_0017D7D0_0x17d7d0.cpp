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

// Function: sub_0017D7D0
// Address: 0x17d7d0 - 0x17d7f8
void sub_0017D7D0_0x17d7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D7D0_0x17d7d0");
#endif

    ctx->pc = 0x17d7d0u;

    // 0x17d7d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17d7d4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x17d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17d7d8: 0xac82009c  sw          $v0, 0x9C($a0)
    ctx->pc = 0x17d7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 2));
    // 0x17d7dc: 0xac8300a0  sw          $v1, 0xA0($a0)
    ctx->pc = 0x17d7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 3));
    // 0x17d7e0: 0xac8000ac  sw          $zero, 0xAC($a0)
    ctx->pc = 0x17d7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
    // 0x17d7e4: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x17d7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x17d7e8: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x17d7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x17d7ec: 0xac8000a4  sw          $zero, 0xA4($a0)
    ctx->pc = 0x17d7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
    // 0x17d7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x17D7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D7F0u;
        // 0x17d7f4: 0xac8000a8  sw          $zero, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D7F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D7F8u;
}
