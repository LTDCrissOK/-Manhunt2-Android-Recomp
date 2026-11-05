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

// Function: sub_002B2718
// Address: 0x2b2718 - 0x2b2768
void sub_002B2718_0x2b2718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2718_0x2b2718");
#endif

    switch (ctx->pc) {
        case 0x2b2730u: goto label_2b2730;
        default: break;
    }

    ctx->pc = 0x2b2718u;

    // 0x2b2718: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b2718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b271c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B271Cu;
    {
        const bool branch_taken_0x2b271c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B271Cu;
        // 0x2b2720: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b271c) {
            ctx->pc = 0x2B2760u;
            goto label_2b2760;
        }
    }
    ctx->pc = 0x2B2724u;
    // 0x2b2724: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2b2724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b2728: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2b2728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b272c: 0x0  nop
    ctx->pc = 0x2b272cu;
    // NOP
label_2b2730:
    // 0x2b2730: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b2730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b2734: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B2734u;
    {
        const bool branch_taken_0x2b2734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2734) {
            ctx->pc = 0x2B2738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2734u;
            // 0x2b2738: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2754u;
            goto label_2b2754;
        }
    }
    ctx->pc = 0x2B273Cu;
    // 0x2b273c: 0x8c4200b8  lw          $v0, 0xB8($v0)
    ctx->pc = 0x2b273cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x2b2740: 0x8c430220  lw          $v1, 0x220($v0)
    ctx->pc = 0x2b2740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 544)));
    // 0x2b2744: 0x54650003  bnel        $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2744u;
    {
        const bool branch_taken_0x2b2744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2b2744) {
            ctx->pc = 0x2B2748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2744u;
            // 0x2b2748: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2754u;
            goto label_2b2754;
        }
    }
    ctx->pc = 0x2B274Cu;
    // 0x2b274c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B274Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B274Cu;
        // 0x2b2750: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B274Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2754u;
label_2b2754:
    // 0x2b2754: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x2b2754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2b2758: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2B2758u;
    {
        const bool branch_taken_0x2b2758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2758u;
        // 0x2b275c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2758) {
            ctx->pc = 0x2B2730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b2730;
        }
    }
    ctx->pc = 0x2B2760u;
label_2b2760:
    // 0x2b2760: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2760u;
        // 0x2b2764: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2768u;
}
