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

// Function: sub_003A4658
// Address: 0x3a4658 - 0x3a4800
void sub_003A4658_0x3a4658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4658_0x3a4658");
#endif

    switch (ctx->pc) {
        case 0x3a46b8u: goto label_3a46b8;
        case 0x3a46e8u: goto label_3a46e8;
        case 0x3a4748u: goto label_3a4748;
        case 0x3a4768u: goto label_3a4768;
        case 0x3a4778u: goto label_3a4778;
        case 0x3a4798u: goto label_3a4798;
        case 0x3a47a0u: goto label_3a47a0;
        case 0x3a47a8u: goto label_3a47a8;
        case 0x3a47b0u: goto label_3a47b0;
        case 0x3a47b8u: goto label_3a47b8;
        default: break;
    }

    ctx->pc = 0x3a4658u;

    // 0x3a4658: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a4658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a465c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a465cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a4660: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a4660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4664: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a4664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a4668: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3a4668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a466c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a466cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a4670: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3a4670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4674: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a4674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a4678: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A4678u;
    {
        const bool branch_taken_0x3a4678 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4678u;
        // 0x3a467c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4678) {
            ctx->pc = 0x3A4690u;
            goto label_3a4690;
        }
    }
    ctx->pc = 0x3A4680u;
    // 0x3a4680: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a4680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a4684: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3A4684u;
    {
        const bool branch_taken_0x3a4684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4684u;
        // 0x3a4688: 0x24a5d8c8  addiu       $a1, $a1, -0x2738 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4684) {
            ctx->pc = 0x3A46B0u;
            goto label_3a46b0;
        }
    }
    ctx->pc = 0x3A468Cu;
    // 0x3a468c: 0x0  nop
    ctx->pc = 0x3a468cu;
    // NOP
label_3a4690:
    // 0x3a4690: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4690u;
    {
        const bool branch_taken_0x3a4690 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x3A4694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4690u;
        // 0x3a4694: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4690) {
            ctx->pc = 0x3A46A0u;
            goto label_3a46a0;
        }
    }
    ctx->pc = 0x3A4698u;
    // 0x3a4698: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A4698u;
    {
        const bool branch_taken_0x3a4698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4698u;
        // 0x3a469c: 0x24a5d8e0  addiu       $a1, $a1, -0x2720 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4698) {
            ctx->pc = 0x3A46B0u;
            goto label_3a46b0;
        }
    }
    ctx->pc = 0x3A46A0u;
label_3a46a0:
    // 0x3a46a0: 0x56200007  bnel        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A46A0u;
    {
        const bool branch_taken_0x3a46a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a46a0) {
            ctx->pc = 0x3A46A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A46A0u;
            // 0x3a46a4: 0x82030002  lb          $v1, 0x2($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A46C0u;
            goto label_3a46c0;
        }
    }
    ctx->pc = 0x3A46A8u;
    // 0x3a46a8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a46a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a46ac: 0x24a5d900  addiu       $a1, $a1, -0x2700
    ctx->pc = 0x3a46acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957312));
label_3a46b0:
    // 0x3a46b0: 0xc0e8ff0  jal         func_3A3FC0
    ctx->pc = 0x3A46B0u;
    SET_GPR_U32(ctx, 31, 0x3A46B8u);
    ctx->pc = 0x3A3FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3FC0u, 0x3A46B0u, 0x3A46B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A46B8u;
label_3a46b8:
    // 0x3a46b8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x3A46B8u;
    {
        const bool branch_taken_0x3a46b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A46BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A46B8u;
        // 0x3a46bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a46b8) {
            ctx->pc = 0x3A47E0u;
            goto label_3a47e0;
        }
    }
    ctx->pc = 0x3A46C0u;
label_3a46c0:
    // 0x3a46c0: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x3a46c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a46c4: 0x10730046  beq         $v1, $s3, . + 4 + (0x46 << 2)
    ctx->pc = 0x3A46C4u;
    {
        const bool branch_taken_0x3a46c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x3A46C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A46C4u;
        // 0x3a46c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a46c4) {
            ctx->pc = 0x3A47E0u;
            goto label_3a47e0;
        }
    }
    ctx->pc = 0x3A46CCu;
    // 0x3a46cc: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A46CCu;
    {
        const bool branch_taken_0x3a46cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A46D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A46CCu;
        // 0x3a46d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a46cc) {
            ctx->pc = 0x3A46E0u;
            goto label_3a46e0;
        }
    }
    ctx->pc = 0x3A46D4u;
    // 0x3a46d4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x3A46D4u;
    {
        const bool branch_taken_0x3a46d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A46D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A46D4u;
        // 0x3a46d8: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a46d4) {
            ctx->pc = 0x3A47E0u;
            goto label_3a47e0;
        }
    }
    ctx->pc = 0x3A46DCu;
    // 0x3a46dc: 0x0  nop
    ctx->pc = 0x3a46dcu;
    // NOP
label_3a46e0:
    // 0x3a46e0: 0xc0e89f0  jal         func_3A27C0
    ctx->pc = 0x3A46E0u;
    SET_GPR_U32(ctx, 31, 0x3A46E8u);
    ctx->pc = 0x3A27C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A27C0u, 0x3A46E0u, 0x3A46E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A46E8u;
label_3a46e8:
    // 0x3a46e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a46e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a46ec: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x3A46ECu;
    {
        const bool branch_taken_0x3a46ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A46F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A46ECu;
        // 0x3a46f0: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a46ec) {
            ctx->pc = 0x3A47E0u;
            goto label_3a47e0;
        }
    }
    ctx->pc = 0x3A46F4u;
    // 0x3a46f4: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x3a46f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x3a46f8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3a46f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3a46fc: 0x24c63790  addiu       $a2, $a2, 0x3790
    ctx->pc = 0x3a46fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14224));
    // 0x3a4700: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3a4700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3a4704: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x3a4704u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x413790u));
    // 0x3a4708: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3a4708u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a470c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3a470cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a4710: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a4710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4714: 0xa2050044  sb          $a1, 0x44($s0)
    ctx->pc = 0x3a4714u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 5));
    // 0x3a4718: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x3a4718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3a471c: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x3a471cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x3a4720: 0x90c80001  lbu         $t0, 0x1($a2)
    ctx->pc = 0x3a4720u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3a4724: 0x72ac0  sll         $a1, $a3, 11
    ctx->pc = 0x3a4724u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x3a4728: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x3a4728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3a472c: 0xa2080045  sb          $t0, 0x45($s0)
    ctx->pc = 0x3a472cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 8));
    // 0x3a4730: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3a4730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3a4734: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x3a4734u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3a4738: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x3a4738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x3a473c: 0xa2020046  sb          $v0, 0x46($s0)
    ctx->pc = 0x3a473cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 70), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a4740: 0xc0f28c4  jal         func_3CA310
    ctx->pc = 0x3A4740u;
    SET_GPR_U32(ctx, 31, 0x3A4748u);
    ctx->pc = 0x3A4744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4740u;
    // 0x3a4744: 0xae110018  sw          $s1, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA310u, 0x3A4740u, 0x3A4748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4748u;
label_3a4748:
    // 0x3a4748: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3a4748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3a474c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3a474cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3a4750: 0x26080044  addiu       $t0, $s0, 0x44
    ctx->pc = 0x3a4750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x3a4754: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3a4754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3a4758: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x3a4758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3a475c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x3a475cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3a4760: 0xc0e8a3a  jal         func_3A28E8
    ctx->pc = 0x3A4760u;
    SET_GPR_U32(ctx, 31, 0x3A4768u);
    ctx->pc = 0x3A4764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4760u;
    // 0x3a4764: 0x8e070018  lw          $a3, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A28E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A28E8u, 0x3A4760u, 0x3A4768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4768u;
label_3a4768:
    // 0x3a4768: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A4768u;
    {
        const bool branch_taken_0x3a4768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4768) {
            ctx->pc = 0x3A476Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4768u;
            // 0x3a476c: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4780u;
            goto label_3a4780;
        }
    }
    ctx->pc = 0x3A4770u;
    // 0x3a4770: 0xc0e8a12  jal         func_3A2848
    ctx->pc = 0x3A4770u;
    SET_GPR_U32(ctx, 31, 0x3A4778u);
    ctx->pc = 0x3A4774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4770u;
    // 0x3a4774: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2848u, 0x3A4770u, 0x3A4778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4778u;
label_3a4778:
    // 0x3a4778: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3A4778u;
    {
        const bool branch_taken_0x3a4778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4778u;
        // 0x3a477c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4778) {
            ctx->pc = 0x3A47E0u;
            goto label_3a47e0;
        }
    }
    ctx->pc = 0x3A4780u;
label_3a4780:
    // 0x3a4780: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a4780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a4784: 0x8c513794  lw          $s1, 0x3794($v0)
    ctx->pc = 0x3a4784u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14228)));
    // 0x3a4788: 0x56230013  bnel        $s1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3A4788u;
    {
        const bool branch_taken_0x3a4788 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a4788) {
            ctx->pc = 0x3A478Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4788u;
            // 0x3a478c: 0xa2130002  sb          $s3, 0x2($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A47D8u;
            goto label_3a47d8;
        }
    }
    ctx->pc = 0x3A4790u;
    // 0x3a4790: 0xc0ee156  jal         func_3B8558
    ctx->pc = 0x3A4790u;
    SET_GPR_U32(ctx, 31, 0x3A4798u);
    ctx->pc = 0x3A4794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4790u;
    // 0x3a4794: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8558u, 0x3A4790u, 0x3A4798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4798u;
label_3a4798:
    // 0x3a4798: 0xc0e8cea  jal         func_3A33A8
    ctx->pc = 0x3A4798u;
    SET_GPR_U32(ctx, 31, 0x3A47A0u);
    ctx->pc = 0x3A33A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A33A8u, 0x3A4798u, 0x3A47A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A47A0u;
label_3a47a0:
    // 0x3a47a0: 0xc0e8ca4  jal         func_3A3290
    ctx->pc = 0x3A47A0u;
    SET_GPR_U32(ctx, 31, 0x3A47A8u);
    ctx->pc = 0x3A3290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3290u, 0x3A47A0u, 0x3A47A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A47A8u;
label_3a47a8:
    // 0x3a47a8: 0xc0e8b04  jal         func_3A2C10
    ctx->pc = 0x3A47A8u;
    SET_GPR_U32(ctx, 31, 0x3A47B0u);
    ctx->pc = 0x3A47ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A47A8u;
    // 0x3a47ac: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C10u, 0x3A47A8u, 0x3A47B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A47B0u;
label_3a47b0:
    // 0x3a47b0: 0xc0e8a12  jal         func_3A2848
    ctx->pc = 0x3A47B0u;
    SET_GPR_U32(ctx, 31, 0x3A47B8u);
    ctx->pc = 0x3A47B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A47B0u;
    // 0x3a47b4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2848u, 0x3A47B0u, 0x3A47B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A47B8u;
label_3a47b8:
    // 0x3a47b8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3a47b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x3a47bc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3a47bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3a47c0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3a47c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3a47c4: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x3a47c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    // 0x3a47c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a47c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a47cc: 0xa2110002  sb          $s1, 0x2($s0)
    ctx->pc = 0x3a47ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
    // 0x3a47d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A47D0u;
    {
        const bool branch_taken_0x3a47d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A47D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A47D0u;
        // 0x3a47d4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a47d0) {
            ctx->pc = 0x3A47DCu;
            goto label_3a47dc;
        }
    }
    ctx->pc = 0x3A47D8u;
label_3a47d8:
    // 0x3a47d8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3a47d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3a47dc:
    // 0x3a47dc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3a47dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a47e0:
    // 0x3a47e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a47e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a47e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a47e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a47e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a47e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a47ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a47ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a47f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a47f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a47f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A47F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A47F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A47F4u;
        // 0x3a47f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A47F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A47FCu;
    // 0x3a47fc: 0x0  nop
    ctx->pc = 0x3a47fcu;
    // NOP
    ctx->pc = 0x3a4800u;
}
