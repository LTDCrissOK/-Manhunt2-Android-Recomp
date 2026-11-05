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

// Function: sub_001F9938
// Address: 0x1f9938 - 0x1f9950
void sub_001F9938_0x1f9938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9938_0x1f9938");
#endif

    ctx->pc = 0x1f9938u;

    // 0x1f9938: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1f9938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1f993c: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x1f993cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1f9940: 0x384200e0  xori        $v0, $v0, 0xE0
    ctx->pc = 0x1f9940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)224);
    // 0x1f9944: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9944u;
        // 0x1f9948: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F994Cu;
    // 0x1f994c: 0x0  nop
    ctx->pc = 0x1f994cu;
    // NOP
    ctx->pc = 0x1f9950u;
}
