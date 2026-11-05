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

// Function: sub_0017D7F8
// Address: 0x17d7f8 - 0x17d820
void sub_0017D7F8_0x17d7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D7F8_0x17d7f8");
#endif

    ctx->pc = 0x17d7f8u;

    // 0x17d7f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17d7fc: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x17d7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17d800: 0xac8200b4  sw          $v0, 0xB4($a0)
    ctx->pc = 0x17d800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 2));
    // 0x17d804: 0xac8300b8  sw          $v1, 0xB8($a0)
    ctx->pc = 0x17d804u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 3));
    // 0x17d808: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x17d808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
    // 0x17d80c: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x17d80cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
    // 0x17d810: 0xac8000bc  sw          $zero, 0xBC($a0)
    ctx->pc = 0x17d810u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 0));
    // 0x17d814: 0x3e00008  jr          $ra
    ctx->pc = 0x17D814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D814u;
        // 0x17d818: 0xac8000c0  sw          $zero, 0xC0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D81Cu;
    // 0x17d81c: 0x0  nop
    ctx->pc = 0x17d81cu;
    // NOP
    ctx->pc = 0x17d820u;
}
