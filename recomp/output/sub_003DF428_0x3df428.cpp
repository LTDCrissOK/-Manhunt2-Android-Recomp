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

// Function: sub_003DF428
// Address: 0x3df428 - 0x3df440
void sub_003DF428_0x3df428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF428_0x3df428");
#endif

    ctx->pc = 0x3df428u;

    // 0x3df428: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x3df428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3df42c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3df42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3df430: 0xac80761c  sw          $zero, 0x761C($a0)
    ctx->pc = 0x3df430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 30236), GPR_U32(ctx, 0));
    // 0x3df434: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF434u;
        // 0x3df438: 0xac807618  sw          $zero, 0x7618($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 30232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF43Cu;
    // 0x3df43c: 0x0  nop
    ctx->pc = 0x3df43cu;
    // NOP
    ctx->pc = 0x3df440u;
}
