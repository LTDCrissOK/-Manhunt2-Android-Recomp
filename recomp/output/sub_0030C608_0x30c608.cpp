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

// Function: sub_0030C608
// Address: 0x30c608 - 0x30c630
void sub_0030C608_0x30c608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C608_0x30c608");
#endif

    ctx->pc = 0x30c608u;

    // 0x30c608: 0x24830014  addiu       $v1, $a0, 0x14
    ctx->pc = 0x30c608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x30c60c: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x30c60cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x30c610: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x30c610u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x30c614: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x30c614u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x30c618: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x30c618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x30c61c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x30c61cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x30c620: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x30c620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x30c624: 0x3e00008  jr          $ra
    ctx->pc = 0x30C624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C624u;
        // 0x30c628: 0xaca40010  sw          $a0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C62Cu;
    // 0x30c62c: 0x0  nop
    ctx->pc = 0x30c62cu;
    // NOP
    ctx->pc = 0x30c630u;
}
