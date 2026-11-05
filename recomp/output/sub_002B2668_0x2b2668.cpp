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

// Function: sub_002B2668
// Address: 0x2b2668 - 0x2b26c8
void sub_002B2668_0x2b2668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2668_0x2b2668");
#endif

    switch (ctx->pc) {
        case 0x2b2678u: goto label_2b2678;
        default: break;
    }

    ctx->pc = 0x2b2668u;

    // 0x2b2668: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b2668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b266c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B266Cu;
    {
        const bool branch_taken_0x2b266c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B266Cu;
        // 0x2b2670: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b266c) {
            ctx->pc = 0x2B26C0u;
            goto label_2b26c0;
        }
    }
    ctx->pc = 0x2B2674u;
    // 0x2b2674: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2b2674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2b2678:
    // 0x2b2678: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x2b2678u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2b267c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2b267cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2b2680: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b2680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b2684: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2B2684u;
    {
        const bool branch_taken_0x2b2684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2684) {
            ctx->pc = 0x2B2688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2684u;
            // 0x2b2688: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B26B0u;
            goto label_2b26b0;
        }
    }
    ctx->pc = 0x2B268Cu;
    // 0x2b268c: 0x8c4200b8  lw          $v0, 0xB8($v0)
    ctx->pc = 0x2b268cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x2b2690: 0x8c430220  lw          $v1, 0x220($v0)
    ctx->pc = 0x2b2690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 544)));
    // 0x2b2694: 0x54650006  bnel        $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B2694u;
    {
        const bool branch_taken_0x2b2694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2b2694) {
            ctx->pc = 0x2B2698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2694u;
            // 0x2b2698: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B26B0u;
            goto label_2b26b0;
        }
    }
    ctx->pc = 0x2B269Cu;
    // 0x2b269c: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x2b269cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x2b26a0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2b26a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b26a4: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2b26a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2b26a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B26A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B26ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26A8u;
        // 0x2b26ac: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B26A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B26B0u;
label_2b26b0:
    // 0x2b26b0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2b26b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2b26b4: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x2b26b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b26b8: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2B26B8u;
    {
        const bool branch_taken_0x2b26b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b26b8) {
            ctx->pc = 0x2B26BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B26B8u;
            // 0x2b26bc: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b2678;
        }
    }
    ctx->pc = 0x2B26C0u;
label_2b26c0:
    // 0x2b26c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B26C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B26C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26C0u;
        // 0x2b26c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B26C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B26C8u;
}
