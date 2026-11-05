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

// Function: sub_0025FF58
// Address: 0x25ff58 - 0x25ff88
void sub_0025FF58_0x25ff58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FF58_0x25ff58");
#endif

    ctx->pc = 0x25ff58u;

    // 0x25ff58: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x25FF58u;
    {
        const bool branch_taken_0x25ff58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF58u;
        // 0x25ff5c: 0x3c020006  lui         $v0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ff58) {
            ctx->pc = 0x25FF7Cu;
            goto label_25ff7c;
        }
    }
    ctx->pc = 0x25FF60u;
    // 0x25ff60: 0x8cc300bc  lw          $v1, 0xBC($a2)
    ctx->pc = 0x25ff60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
    // 0x25ff64: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x25ff64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x25ff68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x25ff68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25ff6c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25FF6Cu;
    {
        const bool branch_taken_0x25ff6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25ff6c) {
            ctx->pc = 0x25FF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25FF6Cu;
            // 0x25ff70: 0xac800240  sw          $zero, 0x240($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 576), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25FF80u;
            goto label_25ff80;
        }
    }
    ctx->pc = 0x25FF74u;
    // 0x25ff74: 0x3e00008  jr          $ra
    ctx->pc = 0x25FF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF74u;
        // 0x25ff78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FF7Cu;
label_25ff7c:
    // 0x25ff7c: 0xac800240  sw          $zero, 0x240($a0)
    ctx->pc = 0x25ff7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 576), GPR_U32(ctx, 0));
label_25ff80:
    // 0x25ff80: 0x3e00008  jr          $ra
    ctx->pc = 0x25FF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF80u;
        // 0x25ff84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FF88u;
}
