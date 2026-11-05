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

// Function: sub_00134B58
// Address: 0x134b58 - 0x134b88
void sub_00134B58_0x134b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134B58_0x134b58");
#endif

    ctx->pc = 0x134b58u;

    // 0x134b58: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x134b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x134b5c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x134B5Cu;
    {
        const bool branch_taken_0x134b5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x134b5c) {
            ctx->pc = 0x134B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134B5Cu;
            // 0x134b60: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134B6Cu;
            goto label_134b6c;
        }
    }
    ctx->pc = 0x134B64u;
    // 0x134b64: 0x3e00008  jr          $ra
    ctx->pc = 0x134B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B64u;
        // 0x134b68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134B6Cu;
label_134b6c:
    // 0x134b6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134B6Cu;
    {
        const bool branch_taken_0x134b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134b6c) {
            ctx->pc = 0x134B80u;
            goto label_134b80;
        }
    }
    ctx->pc = 0x134B74u;
    // 0x134b74: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x134b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x134b78: 0x3e00008  jr          $ra
    ctx->pc = 0x134B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B78u;
        // 0x134b7c: 0x2102a  slt         $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134B80u;
label_134b80:
    // 0x134b80: 0x3e00008  jr          $ra
    ctx->pc = 0x134B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B80u;
        // 0x134b84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134B88u;
}
