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

// Function: sub_0017D790
// Address: 0x17d790 - 0x17d7b8
void sub_0017D790_0x17d790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D790_0x17d790");
#endif

    ctx->pc = 0x17d790u;

    // 0x17d790: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17d790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17d794: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x17d794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17d798: 0xac820070  sw          $v0, 0x70($a0)
    ctx->pc = 0x17d798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
    // 0x17d79c: 0xac830074  sw          $v1, 0x74($a0)
    ctx->pc = 0x17d79cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 3));
    // 0x17d7a0: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x17d7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x17d7a4: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x17d7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x17d7a8: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x17d7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x17d7ac: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x17d7acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x17d7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x17D7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D7B0u;
        // 0x17d7b4: 0xac80007c  sw          $zero, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D7B8u;
}
