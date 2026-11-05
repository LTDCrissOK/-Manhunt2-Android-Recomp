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

// Function: sub_00104600
// Address: 0x104600 - 0x104658
void sub_00104600_0x104600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104600_0x104600");
#endif

    ctx->pc = 0x104600u;

    // 0x104600: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x104600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x104604: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x104604u;
    {
        const bool branch_taken_0x104604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104604u;
        // 0x104608: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104604) {
            ctx->pc = 0x10463Cu;
            goto label_10463c;
        }
    }
    ctx->pc = 0x10460Cu;
    // 0x10460c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10460Cu;
    {
        const bool branch_taken_0x10460c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10460Cu;
        // 0x104610: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10460c) {
            ctx->pc = 0x104618u;
            goto label_104618;
        }
    }
    ctx->pc = 0x104614u;
    // 0x104614: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x104614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_104618:
    // 0x104618: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x104618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10461c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10461Cu;
    {
        const bool branch_taken_0x10461c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10461Cu;
        // 0x104620: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10461c) {
            ctx->pc = 0x104628u;
            goto label_104628;
        }
    }
    ctx->pc = 0x104624u;
    // 0x104624: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x104624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_104628:
    // 0x104628: 0x54a30004  bnel        $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x104628u;
    {
        const bool branch_taken_0x104628 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x104628) {
            ctx->pc = 0x10462Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104628u;
            // 0x10462c: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10463Cu;
            goto label_10463c;
        }
    }
    ctx->pc = 0x104630u;
    // 0x104630: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x104630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x104634: 0x3e00008  jr          $ra
    ctx->pc = 0x104634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104634u;
        // 0x104638: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10463Cu;
label_10463c:
    // 0x10463c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10463Cu;
    {
        const bool branch_taken_0x10463c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10463c) {
            ctx->pc = 0x10464Cu;
            goto label_10464c;
        }
    }
    ctx->pc = 0x104644u;
    // 0x104644: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x104644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x104648: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x104648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_10464c:
    // 0x10464c: 0x3e00008  jr          $ra
    ctx->pc = 0x10464Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10464Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104654u;
    // 0x104654: 0x0  nop
    ctx->pc = 0x104654u;
    // NOP
    ctx->pc = 0x104658u;
}
