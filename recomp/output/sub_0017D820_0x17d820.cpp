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

// Function: sub_0017D820
// Address: 0x17d820 - 0x17d838
void sub_0017D820_0x17d820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D820_0x17d820");
#endif

    ctx->pc = 0x17d820u;

    // 0x17d820: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17d820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17d824: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x17d824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17d828: 0xac8200cc  sw          $v0, 0xCC($a0)
    ctx->pc = 0x17d828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 2));
    // 0x17d82c: 0xac8300d0  sw          $v1, 0xD0($a0)
    ctx->pc = 0x17d82cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
    // 0x17d830: 0x3e00008  jr          $ra
    ctx->pc = 0x17D830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D830u;
        // 0x17d834: 0xac8000d4  sw          $zero, 0xD4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D838u;
}
