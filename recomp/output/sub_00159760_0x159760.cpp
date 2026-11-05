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

// Function: sub_00159760
// Address: 0x159760 - 0x159940
void sub_00159760_0x159760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159760_0x159760");
#endif

    switch (ctx->pc) {
        case 0x1597b8u: goto label_1597b8;
        case 0x159820u: goto label_159820;
        case 0x15987cu: goto label_15987c;
        case 0x1598f4u: goto label_1598f4;
        case 0x1598fcu: goto label_1598fc;
        case 0x15990cu: goto label_15990c;
        default: break;
    }

    ctx->pc = 0x159760u;

    // 0x159760: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x159760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x159764: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x159764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x159768: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x159768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x15976c: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x15976cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x159770: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x159770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x159774: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x159774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159778: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x159778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x15977c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x15977cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x159780: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x159780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x159784: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x159784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x159788: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x159788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x15978c: 0x24e78738  addiu       $a3, $a3, -0x78C8
    ctx->pc = 0x15978cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936376));
    // 0x159790: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x159790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x159794: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x159794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x159798: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x159798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x15979c: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x15979cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x1597a0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1597a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1597a4: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1597a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1597a8: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x1597a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x1597ac: 0x8e0602e4  lw          $a2, 0x2E4($s0)
    ctx->pc = 0x1597acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x1597b0: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x1597B0u;
    SET_GPR_U32(ctx, 31, 0x1597B8u);
    ctx->pc = 0x1597B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1597B0u;
    // 0x1597b4: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x1597B0u, 0x1597B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1597B8u;
label_1597b8:
    // 0x1597b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1597b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1597bc: 0x12600053  beqz        $s3, . + 4 + (0x53 << 2)
    ctx->pc = 0x1597BCu;
    {
        const bool branch_taken_0x1597bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1597C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597BCu;
        // 0x1597c0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597bc) {
            ctx->pc = 0x15990Cu;
            goto label_15990c;
        }
    }
    ctx->pc = 0x1597C4u;
    // 0x1597c4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1597c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1597c8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1597C8u;
    {
        const bool branch_taken_0x1597c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1597CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597C8u;
        // 0x1597cc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597c8) {
            ctx->pc = 0x1597E8u;
            goto label_1597e8;
        }
    }
    ctx->pc = 0x1597D0u;
    // 0x1597d0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1597d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1597d4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1597D4u;
    {
        const bool branch_taken_0x1597d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1597D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597D4u;
        // 0x1597d8: 0x28420002  slti        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597d4) {
            ctx->pc = 0x1597E4u;
            goto label_1597e4;
        }
    }
    ctx->pc = 0x1597DCu;
    // 0x1597dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1597DCu;
    {
        const bool branch_taken_0x1597dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1597dc) {
            ctx->pc = 0x1597E8u;
            goto label_1597e8;
        }
    }
    ctx->pc = 0x1597E4u;
label_1597e4:
    // 0x1597e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1597e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1597e8:
    // 0x1597e8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1597E8u;
    {
        const bool branch_taken_0x1597e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1597ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597E8u;
        // 0x1597ec: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597e8) {
            ctx->pc = 0x1597F8u;
            goto label_1597f8;
        }
    }
    ctx->pc = 0x1597F0u;
    // 0x1597f0: 0x8e770010  lw          $s7, 0x10($s3)
    ctx->pc = 0x1597f0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1597f4: 0x17900a  movz        $s2, $zero, $s7
    ctx->pc = 0x1597f4u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_1597f8:
    // 0x1597f8: 0x12400038  beqz        $s2, . + 4 + (0x38 << 2)
    ctx->pc = 0x1597F8u;
    {
        const bool branch_taken_0x1597f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1597FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597F8u;
        // 0x1597fc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597f8) {
            ctx->pc = 0x1598DCu;
            goto label_1598dc;
        }
    }
    ctx->pc = 0x159800u;
    // 0x159800: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x159800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x159804: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x159804u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159808: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x159808u;
    {
        const bool branch_taken_0x159808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159808u;
        // 0x15980c: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159808) {
            ctx->pc = 0x1598D0u;
            goto label_1598d0;
        }
    }
    ctx->pc = 0x159810u;
    // 0x159810: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x159810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x159814: 0x24559c14  addiu       $s5, $v0, -0x63EC
    ctx->pc = 0x159814u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x159818: 0x26befefc  addiu       $fp, $s5, -0x104
    ctx->pc = 0x159818u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967036));
    // 0x15981c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15981cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_159820:
    // 0x159820: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x159820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x159824: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x159824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x159828: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x159828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15982c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x15982Cu;
    {
        const bool branch_taken_0x15982c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15982Cu;
        // 0x159830: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15982c) {
            ctx->pc = 0x1598B0u;
            goto label_1598b0;
        }
    }
    ctx->pc = 0x159834u;
    // 0x159834: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x159834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x159838: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x159838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x15983c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x15983cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x159840: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x159840u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x159844: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x159844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x159848: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x159848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15984c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x15984cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x159850: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x159850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159854: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x159854u;
    {
        const bool branch_taken_0x159854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159854) {
            ctx->pc = 0x159858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159854u;
            // 0x159858: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159864u;
            goto label_159864;
        }
    }
    ctx->pc = 0x15985Cu;
    // 0x15985c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15985Cu;
    {
        const bool branch_taken_0x15985c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15985Cu;
        // 0x159860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15985c) {
            ctx->pc = 0x15986Cu;
            goto label_15986c;
        }
    }
    ctx->pc = 0x159864u;
label_159864:
    // 0x159864: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x159864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159868: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x159868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15986c:
    // 0x15986c: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x15986Cu;
    {
        const bool branch_taken_0x15986c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x159870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15986Cu;
        // 0x159870: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15986c) {
            ctx->pc = 0x1598B0u;
            goto label_1598b0;
        }
    }
    ctx->pc = 0x159874u;
    // 0x159874: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x159874u;
    SET_GPR_U32(ctx, 31, 0x15987Cu);
    ctx->pc = 0x159878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159874u;
    // 0x159878: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x159874u, 0x15987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15987Cu;
label_15987c:
    // 0x15987c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x15987cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159880: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x159880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x159884: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x159884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x159888: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x159888u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15988c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15988cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x159890: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x159890u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x159894: 0xc60002f0  lwc1        $f0, 0x2F0($s0)
    ctx->pc = 0x159894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159898: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x159898u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15989c: 0x0  nop
    ctx->pc = 0x15989cu;
    // NOP
    // 0x1598a0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1598A0u;
    {
        const bool branch_taken_0x1598a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1598A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598A0u;
        // 0x1598a4: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598a0) {
            ctx->pc = 0x1598B4u;
            goto label_1598b4;
        }
    }
    ctx->pc = 0x1598A8u;
    // 0x1598a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1598A8u;
    {
        const bool branch_taken_0x1598a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1598ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598A8u;
        // 0x1598ac: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598a8) {
            ctx->pc = 0x1598D0u;
            goto label_1598d0;
        }
    }
    ctx->pc = 0x1598B0u;
label_1598b0:
    // 0x1598b0: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1598b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1598b4:
    // 0x1598b4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1598b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1598b8: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x1598b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1598bc: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1598BCu;
    {
        const bool branch_taken_0x1598bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1598bc) {
            ctx->pc = 0x1598C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1598BCu;
            // 0x1598c0: 0x16900a  movz        $s2, $zero, $s6 (Delay Slot)
            if (GPR_U64(ctx, 22) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1598D4u;
            goto label_1598d4;
        }
    }
    ctx->pc = 0x1598C4u;
    // 0x1598c4: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x1598c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x1598c8: 0x5682ffd5  bnel        $s4, $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1598C8u;
    {
        const bool branch_taken_0x1598c8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1598c8) {
            ctx->pc = 0x1598CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1598C8u;
            // 0x1598cc: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159820;
        }
    }
    ctx->pc = 0x1598D0u;
label_1598d0:
    // 0x1598d0: 0x16900a  movz        $s2, $zero, $s6
    ctx->pc = 0x1598d0u;
    if (GPR_U64(ctx, 22) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_1598d4:
    // 0x1598d4: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1598D4u;
    {
        const bool branch_taken_0x1598d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1598d4) {
            ctx->pc = 0x1598F4u;
            goto label_1598f4;
        }
    }
    ctx->pc = 0x1598DCu;
label_1598dc:
    // 0x1598dc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1598dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1598e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1598e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1598e4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1598e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1598e8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1598e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1598ec: 0xc04f1b6  jal         func_13C6D8
    ctx->pc = 0x1598ECu;
    SET_GPR_U32(ctx, 31, 0x1598F4u);
    ctx->pc = 0x1598F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1598ECu;
    // 0x1598f0: 0x8c450228  lw          $a1, 0x228($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C6D8u, 0x1598ECu, 0x1598F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1598F4u;
label_1598f4:
    // 0x1598f4: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x1598F4u;
    SET_GPR_U32(ctx, 31, 0x1598FCu);
    ctx->pc = 0x1598F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1598F4u;
    // 0x1598f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x1598F4u, 0x1598FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1598FCu;
label_1598fc:
    // 0x1598fc: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1598fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x159900: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x159900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159904: 0xc042128  jal         func_1084A0
    ctx->pc = 0x159904u;
    SET_GPR_U32(ctx, 31, 0x15990Cu);
    ctx->pc = 0x159908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159904u;
    // 0x159908: 0x24448758  addiu       $a0, $v0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x159904u, 0x15990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15990Cu;
label_15990c:
    // 0x15990c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x15990cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159910: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x159910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x159914: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x159914u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159918: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x159918u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15991c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x15991cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159920: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x159920u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159924: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x159924u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159928: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x159928u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15992c: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x15992cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x159930: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x159930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x159934: 0x3e00008  jr          $ra
    ctx->pc = 0x159934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159934u;
        // 0x159938: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15993Cu;
    // 0x15993c: 0x0  nop
    ctx->pc = 0x15993cu;
    // NOP
    ctx->pc = 0x159940u;
}
