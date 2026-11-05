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

// Function: sub_003DC608
// Address: 0x3dc608 - 0x3dc620
void sub_003DC608_0x3dc608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC608_0x3dc608");
#endif

    ctx->pc = 0x3dc608u;

    // 0x3dc608: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3dc608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dc60c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3dc60cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3dc610: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x3dc610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x3dc614: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC614u;
        // 0x3dc618: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC61Cu;
    // 0x3dc61c: 0x0  nop
    ctx->pc = 0x3dc61cu;
    // NOP
    ctx->pc = 0x3dc620u;
}
