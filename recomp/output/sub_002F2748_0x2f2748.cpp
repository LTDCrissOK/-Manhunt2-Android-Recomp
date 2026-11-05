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

// Function: sub_002F2748
// Address: 0x2f2748 - 0x2f27b0
void sub_002F2748_0x2f2748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2748_0x2f2748");
#endif

    switch (ctx->pc) {
        case 0x2f2780u: goto label_2f2780;
        case 0x2f27a0u: goto label_2f27a0;
        default: break;
    }

    ctx->pc = 0x2f2748u;

    // 0x2f2748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f2748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f274c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2f274cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2f2750: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f2750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f2754: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f2754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f2758: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f2758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f275c: 0x8e020418  lw          $v0, 0x418($s0)
    ctx->pc = 0x2f275cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x2f2760: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F2760u;
    {
        const bool branch_taken_0x2f2760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2760u;
        // 0x2f2764: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2760) {
            ctx->pc = 0x2F276Cu;
            goto label_2f276c;
        }
    }
    ctx->pc = 0x2F2768u;
    // 0x2f2768: 0x8e0411e4  lw          $a0, 0x11E4($s0)
    ctx->pc = 0x2f2768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4580)));
label_2f276c:
    // 0x2f276c: 0x5480000d  bnel        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2F276Cu;
    {
        const bool branch_taken_0x2f276c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f276c) {
            ctx->pc = 0x2F2770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F276Cu;
            // 0x2f2770: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F27A4u;
            goto label_2f27a4;
        }
    }
    ctx->pc = 0x2F2774u;
    // 0x2f2774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2778: 0xc08fc7c  jal         func_23F1F0
    ctx->pc = 0x2F2778u;
    SET_GPR_U32(ctx, 31, 0x2F2780u);
    ctx->pc = 0x2F277Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2778u;
    // 0x2f277c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F1F0u, 0x2F2778u, 0x2F2780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2780u;
label_2f2780:
    // 0x2f2780: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F2780u;
    {
        const bool branch_taken_0x2f2780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2780) {
            ctx->pc = 0x2F2784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2780u;
            // 0x2f2784: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F27A4u;
            goto label_2f27a4;
        }
    }
    ctx->pc = 0x2F2788u;
    // 0x2f2788: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x2f2788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x2f278c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x2f278cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2f2790: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2790u;
    {
        const bool branch_taken_0x2f2790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f2790) {
            ctx->pc = 0x2F2794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2790u;
            // 0x2f2794: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F27A4u;
            goto label_2f27a4;
        }
    }
    ctx->pc = 0x2F2798u;
    // 0x2f2798: 0xc092aa2  jal         func_24AA88
    ctx->pc = 0x2F2798u;
    SET_GPR_U32(ctx, 31, 0x2F27A0u);
    ctx->pc = 0x2F279Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2798u;
    // 0x2f279c: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AA88u, 0x2F2798u, 0x2F27A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F27A0u;
label_2f27a0:
    // 0x2f27a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f27a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f27a4:
    // 0x2f27a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f27a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f27a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F27A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F27ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F27A8u;
        // 0x2f27ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F27A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F27B0u;
}
