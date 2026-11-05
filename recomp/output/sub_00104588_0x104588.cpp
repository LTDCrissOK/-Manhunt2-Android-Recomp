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

// Function: sub_00104588
// Address: 0x104588 - 0x104600
void sub_00104588_0x104588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104588_0x104588");
#endif

    ctx->pc = 0x104588u;

    // 0x104588: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x104588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10458c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x10458Cu;
    {
        const bool branch_taken_0x10458c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10458Cu;
        // 0x104590: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10458c) {
            ctx->pc = 0x1045D0u;
            goto label_1045d0;
        }
    }
    ctx->pc = 0x104594u;
    // 0x104594: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x104594u;
    {
        const bool branch_taken_0x104594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104594u;
        // 0x104598: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104594) {
            ctx->pc = 0x1045A0u;
            goto label_1045a0;
        }
    }
    ctx->pc = 0x10459Cu;
    // 0x10459c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x10459cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1045a0:
    // 0x1045a0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1045a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1045a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1045A4u;
    {
        const bool branch_taken_0x1045a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1045A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045A4u;
        // 0x1045a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1045a4) {
            ctx->pc = 0x1045B0u;
            goto label_1045b0;
        }
    }
    ctx->pc = 0x1045ACu;
    // 0x1045ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1045acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1045b0:
    // 0x1045b0: 0x54a30007  bnel        $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1045B0u;
    {
        const bool branch_taken_0x1045b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1045b0) {
            ctx->pc = 0x1045B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1045B0u;
            // 0x1045b4: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1045D0u;
            goto label_1045d0;
        }
    }
    ctx->pc = 0x1045B8u;
    // 0x1045b8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1045b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1045bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1045bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045c0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1045C0u;
    {
        const bool branch_taken_0x1045c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1045C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045C0u;
        // 0x1045c4: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1045c0) {
            ctx->pc = 0x1045F8u;
            goto label_1045f8;
        }
    }
    ctx->pc = 0x1045C8u;
    // 0x1045c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1045C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1045CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045C8u;
        // 0x1045cc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1045C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1045D0u;
label_1045d0:
    // 0x1045d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1045d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045d4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1045D4u;
    {
        const bool branch_taken_0x1045d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1045D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045D4u;
        // 0x1045d8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1045d4) {
            ctx->pc = 0x1045E0u;
            goto label_1045e0;
        }
    }
    ctx->pc = 0x1045DCu;
    // 0x1045dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1045dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1045e0:
    // 0x1045e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1045E0u;
    {
        const bool branch_taken_0x1045e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1045e0) {
            ctx->pc = 0x1045F0u;
            goto label_1045f0;
        }
    }
    ctx->pc = 0x1045E8u;
    // 0x1045e8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1045e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1045ec: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1045ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1045f0:
    // 0x1045f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1045F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1045F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045F0u;
        // 0x1045f4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1045F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1045F8u;
label_1045f8:
    // 0x1045f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1045F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1045F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104600u;
}
