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

// Function: sub_003A4800
// Address: 0x3a4800 - 0x3a48e8
void sub_003A4800_0x3a4800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4800_0x3a4800");
#endif

    switch (ctx->pc) {
        case 0x3a4874u: goto label_3a4874;
        case 0x3a4880u: goto label_3a4880;
        case 0x3a4888u: goto label_3a4888;
        case 0x3a4890u: goto label_3a4890;
        case 0x3a4898u: goto label_3a4898;
        case 0x3a48bcu: goto label_3a48bc;
        default: break;
    }

    ctx->pc = 0x3a4800u;

    // 0x3a4800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a4800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a4804: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a4804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a4808: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a4808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a480c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a480cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a4810: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a4810u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4814: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a4814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a4818: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a4818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a481c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3a481cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3a4820: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A4820u;
    {
        const bool branch_taken_0x3a4820 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4820u;
        // 0x3a4824: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4820) {
            ctx->pc = 0x3A4850u;
            goto label_3a4850;
        }
    }
    ctx->pc = 0x3A4828u;
    // 0x3a4828: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a4828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a482c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a482cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4830: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a4830u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a4834: 0x24a5d8c8  addiu       $a1, $a1, -0x2738
    ctx->pc = 0x3a4834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957256));
    // 0x3a4838: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a4838u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a483c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a483cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a4840: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3a4840u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a4844: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3a4844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3a4848: 0x80e8ff0  j           func_3A3FC0
    ctx->pc = 0x3A4848u;
    ctx->pc = 0x3A484Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4848u;
    // 0x3a484c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3FC0u;
    sub_003A3FC0_0x3a3fc0(rdram, ctx, runtime); return;
    ctx->pc = 0x3A4850u;
label_3a4850:
    // 0x3a4850: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x3a4850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a4854: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3a4854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a4858: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x3A4858u;
    {
        const bool branch_taken_0x3a4858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4858) {
            ctx->pc = 0x3A485Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4858u;
            // 0x3a485c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A48C8u;
            goto label_3a48c8;
        }
    }
    ctx->pc = 0x3A4860u;
    // 0x3a4860: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3a4860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3a4864: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4864u;
    {
        const bool branch_taken_0x3a4864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4864u;
        // 0x3a4868: 0x3c110009  lui         $s1, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)9 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4864) {
            ctx->pc = 0x3A4874u;
            goto label_3a4874;
        }
    }
    ctx->pc = 0x3A486Cu;
    // 0x3a486c: 0xc0e8b4a  jal         func_3A2D28
    ctx->pc = 0x3A486Cu;
    SET_GPR_U32(ctx, 31, 0x3A4874u);
    ctx->pc = 0x3A2D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D28u, 0x3A486Cu, 0x3A4874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4874u;
label_3a4874:
    // 0x3a4874: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x3a4874u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a4878: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x3a4878u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x3a487c: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x3a487cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
label_3a4880:
    // 0x3a4880: 0xc0e8ca4  jal         func_3A3290
    ctx->pc = 0x3A4880u;
    SET_GPR_U32(ctx, 31, 0x3A4888u);
    ctx->pc = 0x3A3290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3290u, 0x3A4880u, 0x3A4888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4888u;
label_3a4888:
    // 0x3a4888: 0xc0e9044  jal         func_3A4110
    ctx->pc = 0x3A4888u;
    SET_GPR_U32(ctx, 31, 0x3A4890u);
    ctx->pc = 0x3A4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4110u, 0x3A4888u, 0x3A4890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4890u;
label_3a4890:
    // 0x3a4890: 0xc0e923a  jal         func_3A48E8
    ctx->pc = 0x3A4890u;
    SET_GPR_U32(ctx, 31, 0x3A4898u);
    ctx->pc = 0x3A4894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4890u;
    // 0x3a4894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A48E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A48E8u, 0x3A4890u, 0x3A4898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4898u;
label_3a4898:
    // 0x3a4898: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x3a4898u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a489c: 0x54730008  bnel        $v1, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A489Cu;
    {
        const bool branch_taken_0x3a489c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x3a489c) {
            ctx->pc = 0x3A48A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A489Cu;
            // 0x3a48a0: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A48C0u;
            goto label_3a48c0;
        }
    }
    ctx->pc = 0x3A48A4u;
    // 0x3a48a4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3a48a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3a48a8: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x3a48a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3a48ac: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3A48ACu;
    {
        const bool branch_taken_0x3a48ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a48ac) {
            ctx->pc = 0x3A4880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4880;
        }
    }
    ctx->pc = 0x3A48B4u;
    // 0x3a48b4: 0xc0e5ebe  jal         func_397AF8
    ctx->pc = 0x3A48B4u;
    SET_GPR_U32(ctx, 31, 0x3A48BCu);
    ctx->pc = 0x3A48B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A48B4u;
    // 0x3a48b8: 0x2684d928  addiu       $a0, $s4, -0x26D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A48B4u, 0x3A48BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A48BCu;
label_3a48bc:
    // 0x3a48bc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3a48bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_3a48c0:
    // 0x3a48c0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a48c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a48c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a48c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a48c8:
    // 0x3a48c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a48c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a48cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a48ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a48d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a48d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a48d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3a48d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a48d8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3a48d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3a48dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A48DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A48E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A48DCu;
        // 0x3a48e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A48DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A48E4u;
    // 0x3a48e4: 0x0  nop
    ctx->pc = 0x3a48e4u;
    // NOP
    ctx->pc = 0x3a48e8u;
}
