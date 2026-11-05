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

// Function: sub_001C0748
// Address: 0x1c0748 - 0x1c0768
void sub_001C0748_0x1c0748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0748_0x1c0748");
#endif

    ctx->pc = 0x1c0748u;

    // 0x1c0748: 0x8c8204bc  lw          $v0, 0x4BC($a0)
    ctx->pc = 0x1c0748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1212)));
    // 0x1c074c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C074Cu;
    {
        const bool branch_taken_0x1c074c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c074c) {
            ctx->pc = 0x1C0750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C074Cu;
            // 0x1c0750: 0x8c4200bc  lw          $v0, 0xBC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C075Cu;
            goto label_1c075c;
        }
    }
    ctx->pc = 0x1C0754u;
    // 0x1c0754: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0754u;
        // 0x1c0758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C075Cu;
label_1c075c:
    // 0x1c075c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1c075cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1c0760: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0760u;
        // 0x1c0764: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0768u;
}
