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

// Function: sub_00104658
// Address: 0x104658 - 0x1046b0
void sub_00104658_0x104658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104658_0x104658");
#endif

    ctx->pc = 0x104658u;

    // 0x104658: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x104658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10465c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10465Cu;
    {
        const bool branch_taken_0x10465c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10465Cu;
        // 0x104660: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10465c) {
            ctx->pc = 0x104694u;
            goto label_104694;
        }
    }
    ctx->pc = 0x104664u;
    // 0x104664: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x104664u;
    {
        const bool branch_taken_0x104664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104664u;
        // 0x104668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104664) {
            ctx->pc = 0x104670u;
            goto label_104670;
        }
    }
    ctx->pc = 0x10466Cu;
    // 0x10466c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x10466cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_104670:
    // 0x104670: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x104670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x104674: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x104674u;
    {
        const bool branch_taken_0x104674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104674u;
        // 0x104678: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104674) {
            ctx->pc = 0x104680u;
            goto label_104680;
        }
    }
    ctx->pc = 0x10467Cu;
    // 0x10467c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10467cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_104680:
    // 0x104680: 0x54a30004  bnel        $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x104680u;
    {
        const bool branch_taken_0x104680 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x104680) {
            ctx->pc = 0x104684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104680u;
            // 0x104684: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104694u;
            goto label_104694;
        }
    }
    ctx->pc = 0x104688u;
    // 0x104688: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x104688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10468c: 0x3e00008  jr          $ra
    ctx->pc = 0x10468Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10468Cu;
        // 0x104690: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10468Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104694u;
label_104694:
    // 0x104694: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104694u;
    {
        const bool branch_taken_0x104694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104694) {
            ctx->pc = 0x1046A4u;
            goto label_1046a4;
        }
    }
    ctx->pc = 0x10469Cu;
    // 0x10469c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x10469cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1046a0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1046a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1046a4:
    // 0x1046a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1046A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1046A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1046ACu;
    // 0x1046ac: 0x0  nop
    ctx->pc = 0x1046acu;
    // NOP
    ctx->pc = 0x1046b0u;
}
