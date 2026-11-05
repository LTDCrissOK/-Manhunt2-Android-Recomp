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

// Function: sub_003A0770
// Address: 0x3a0770 - 0x3a07d8
void sub_003A0770_0x3a0770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0770_0x3a0770");
#endif

    switch (ctx->pc) {
        case 0x3a0794u: goto label_3a0794;
        case 0x3a07a8u: goto label_3a07a8;
        case 0x3a07b8u: goto label_3a07b8;
        default: break;
    }

    ctx->pc = 0x3a0770u;

    // 0x3a0770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a0770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a0774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a0774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a0778: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a0778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a077c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a077cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a0780: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3a0780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0784: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a0784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a0788: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3a0788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3a078c: 0xc0e82f8  jal         func_3A0BE0
    ctx->pc = 0x3A078Cu;
    SET_GPR_U32(ctx, 31, 0x3A0794u);
    ctx->pc = 0x3A0790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A078Cu;
    // 0x3a0790: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0BE0u, 0x3A078Cu, 0x3A0794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0794u;
label_3a0794:
    // 0x3a0794: 0x5840000b  blezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A0794u;
    {
        const bool branch_taken_0x3a0794 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3a0794) {
            ctx->pc = 0x3A0798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0794u;
            // 0x3a0798: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A07C4u;
            goto label_3a07c4;
        }
    }
    ctx->pc = 0x3A079Cu;
    // 0x3a079c: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x3a079cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x3a07a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a07a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a07a4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3a07a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a07a8:
    // 0x3a07a8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3a07a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3a07ac: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3a07acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3a07b0: 0xc0e7278  jal         func_39C9E0
    ctx->pc = 0x3A07B0u;
    SET_GPR_U32(ctx, 31, 0x3A07B8u);
    ctx->pc = 0x3A07B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A07B0u;
    // 0x3a07b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C9E0u, 0x3A07B0u, 0x3A07B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A07B8u;
label_3a07b8:
    // 0x3a07b8: 0x5600fffb  bnel        $s0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A07B8u;
    {
        const bool branch_taken_0x3a07b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a07b8) {
            ctx->pc = 0x3A07BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A07B8u;
            // 0x3a07bc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A07A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a07a8;
        }
    }
    ctx->pc = 0x3A07C0u;
    // 0x3a07c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a07c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a07c4:
    // 0x3a07c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a07c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a07c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a07c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a07cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a07ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a07d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A07D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A07D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A07D0u;
        // 0x3a07d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A07D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A07D8u;
}
