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

// Function: sub_00272828
// Address: 0x272828 - 0x272858
void sub_00272828_0x272828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272828_0x272828");
#endif

    ctx->pc = 0x272828u;

    // 0x272828: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x272828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x27282c: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27282Cu;
    {
        const bool branch_taken_0x27282c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x27282c) {
            ctx->pc = 0x272850u;
            goto label_272850;
        }
    }
    ctx->pc = 0x272834u;
    // 0x272834: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x272834u;
    {
        const bool branch_taken_0x272834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272834u;
        // 0x272838: 0x3c03004b  lui         $v1, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272834) {
            ctx->pc = 0x272850u;
            goto label_272850;
        }
    }
    ctx->pc = 0x27283Cu;
    // 0x27283c: 0x24624778  addiu       $v0, $v1, 0x4778
    ctx->pc = 0x27283cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 18296));
    // 0x272840: 0xac604778  sw          $zero, 0x4778($v1)
    ctx->pc = 0x272840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18296), GPR_U32(ctx, 0));
    // 0x272844: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x272844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x272848: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x272848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27284c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27284cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_272850:
    // 0x272850: 0x3e00008  jr          $ra
    ctx->pc = 0x272850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272858u;
}
