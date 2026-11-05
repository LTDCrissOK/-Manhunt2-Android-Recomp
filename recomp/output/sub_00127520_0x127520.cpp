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

// Function: sub_00127520
// Address: 0x127520 - 0x1278e0
void sub_00127520_0x127520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127520_0x127520");
#endif

    switch (ctx->pc) {
        case 0x127560u: goto label_127560;
        case 0x1275a8u: goto label_1275a8;
        case 0x1275c0u: goto label_1275c0;
        case 0x1275f8u: goto label_1275f8;
        case 0x127604u: goto label_127604;
        case 0x127648u: goto label_127648;
        case 0x127670u: goto label_127670;
        case 0x1276acu: goto label_1276ac;
        case 0x127700u: goto label_127700;
        case 0x127708u: goto label_127708;
        case 0x127770u: goto label_127770;
        case 0x127790u: goto label_127790;
        case 0x1277c4u: goto label_1277c4;
        case 0x1277d8u: goto label_1277d8;
        case 0x127830u: goto label_127830;
        case 0x12785cu: goto label_12785c;
        case 0x127878u: goto label_127878;
        case 0x127884u: goto label_127884;
        case 0x1278a8u: goto label_1278a8;
        default: break;
    }

    ctx->pc = 0x127520u;

    // 0x127520: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x127520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x127524: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x127524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x127528: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x127528u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12752c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12752cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x127530: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x127530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x127534: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x127534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x127538: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x127538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12753c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x12753cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127540: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x127540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x127544: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x127544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x127548: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x127548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12754c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x12754cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x127550: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x127550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x127554: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x127554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x127558: 0xc047860  jal         func_11E180
    ctx->pc = 0x127558u;
    SET_GPR_U32(ctx, 31, 0x127560u);
    ctx->pc = 0x12755Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127558u;
    // 0x12755c: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E180u, 0x127558u, 0x127560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127560u;
label_127560:
    // 0x127560: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x127560u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127564: 0x12a00010  beqz        $s5, . + 4 + (0x10 << 2)
    ctx->pc = 0x127564u;
    {
        const bool branch_taken_0x127564 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x127568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127564u;
        // 0x127568: 0x26a2fffa  addiu       $v0, $s5, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127564) {
            ctx->pc = 0x1275A8u;
            goto label_1275a8;
        }
    }
    ctx->pc = 0x12756Cu;
    // 0x12756c: 0x8e24036c  lw          $a0, 0x36C($s1)
    ctx->pc = 0x12756cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
    // 0x127570: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x127570u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x127574: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x127574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x127578: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x127578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x12757c: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12757Cu;
    {
        const bool branch_taken_0x12757c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x127580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12757Cu;
        // 0x127580: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12757c) {
            ctx->pc = 0x127594u;
            goto label_127594;
        }
    }
    ctx->pc = 0x127584u;
    // 0x127584: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x127584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x127588: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x127588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x12758c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x12758Cu;
    {
        const bool branch_taken_0x12758c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x12758c) {
            ctx->pc = 0x127598u;
            goto label_127598;
        }
    }
    ctx->pc = 0x127594u;
label_127594:
    // 0x127594: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x127594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127598:
    // 0x127598: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x127598u;
    {
        const bool branch_taken_0x127598 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127598u;
        // 0x12759c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127598) {
            ctx->pc = 0x1275B0u;
            goto label_1275b0;
        }
    }
    ctx->pc = 0x1275A0u;
    // 0x1275a0: 0xc049abe  jal         func_126AF8
    ctx->pc = 0x1275A0u;
    SET_GPR_U32(ctx, 31, 0x1275A8u);
    ctx->pc = 0x1275A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1275A0u;
    // 0x1275a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126AF8u, 0x1275A0u, 0x1275A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1275A8u;
label_1275a8:
    // 0x1275a8: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x1275A8u;
    {
        const bool branch_taken_0x1275a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1275ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1275A8u;
        // 0x1275ac: 0xae200fe0  sw          $zero, 0xFE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4064), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1275a8) {
            ctx->pc = 0x1278B4u;
            goto label_1278b4;
        }
    }
    ctx->pc = 0x1275B0u;
label_1275b0:
    // 0x1275b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1275b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1275b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1275b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275b8: 0xc049b26  jal         func_126C98
    ctx->pc = 0x1275B8u;
    SET_GPR_U32(ctx, 31, 0x1275C0u);
    ctx->pc = 0x1275BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1275B8u;
    // 0x1275bc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126C98u, 0x1275B8u, 0x1275C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1275C0u;
label_1275c0:
    // 0x1275c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1275c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275c4: 0x2402080d  addiu       $v0, $zero, 0x80D
    ctx->pc = 0x1275c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    // 0x1275c8: 0x56020006  bnel        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1275C8u;
    {
        const bool branch_taken_0x1275c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1275c8) {
            ctx->pc = 0x1275CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1275C8u;
            // 0x1275cc: 0x8e22041c  lw          $v0, 0x41C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1052)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1275E4u;
            goto label_1275e4;
        }
    }
    ctx->pc = 0x1275D0u;
    // 0x1275d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1275d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1275d4: 0x104000b8  beqz        $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x1275D4u;
    {
        const bool branch_taken_0x1275d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1275D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1275D4u;
        // 0x1275d8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1275d4) {
            ctx->pc = 0x1278B8u;
            goto label_1278b8;
        }
    }
    ctx->pc = 0x1275DCu;
    // 0x1275dc: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x1275DCu;
    {
        const bool branch_taken_0x1275dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1275E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1275DCu;
        // 0x1275e0: 0xae200fe0  sw          $zero, 0xFE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4064), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1275dc) {
            ctx->pc = 0x1278B8u;
            goto label_1278b8;
        }
    }
    ctx->pc = 0x1275E4u;
label_1275e4:
    // 0x1275e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1275e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275e8: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x1275e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x1275ec: 0xae20041c  sw          $zero, 0x41C($s1)
    ctx->pc = 0x1275ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 0));
    // 0x1275f0: 0xc069880  jal         func_1A6200
    ctx->pc = 0x1275F0u;
    SET_GPR_U32(ctx, 31, 0x1275F8u);
    ctx->pc = 0x1275F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1275F0u;
    // 0x1275f4: 0xae220420  sw          $v0, 0x420($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1056), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6200u, 0x1275F0u, 0x1275F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1275F8u;
label_1275f8:
    // 0x1275f8: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x1275f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x1275fc: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x1275FCu;
    SET_GPR_U32(ctx, 31, 0x127604u);
    ctx->pc = 0x127600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1275FCu;
    // 0x127600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x1275FCu, 0x127604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127604u;
label_127604:
    // 0x127604: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x127604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x127608: 0x8e260334  lw          $a2, 0x334($s1)
    ctx->pc = 0x127608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x12760c: 0x2642018  mult        $a0, $s3, $a0
    ctx->pc = 0x12760cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x127610: 0x26830454  addiu       $v1, $s4, 0x454
    ctx->pc = 0x127610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1108));
    // 0x127614: 0x8cc20150  lw          $v0, 0x150($a2)
    ctx->pc = 0x127614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
    // 0x127618: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x127618u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12761c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12761cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127620: 0x2442fff7  addiu       $v0, $v0, -0x9
    ctx->pc = 0x127620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967287));
    // 0x127624: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x127624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x127628: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x127628u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x12762c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x12762Cu;
    {
        const bool branch_taken_0x12762c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12762Cu;
        // 0x127630: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12762c) {
            ctx->pc = 0x127678u;
            goto label_127678;
        }
    }
    ctx->pc = 0x127634u;
    // 0x127634: 0x8cc201e4  lw          $v0, 0x1E4($a2)
    ctx->pc = 0x127634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
    // 0x127638: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x127638u;
    {
        const bool branch_taken_0x127638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127638u;
        // 0x12763c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127638) {
            ctx->pc = 0x127664u;
            goto label_127664;
        }
    }
    ctx->pc = 0x127640u;
    // 0x127640: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x127640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127644: 0x248301ec  addiu       $v1, $a0, 0x1EC
    ctx->pc = 0x127644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 492));
label_127648:
    // 0x127648: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x127648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12764c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12764Cu;
    {
        const bool branch_taken_0x12764c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12764Cu;
        // 0x127650: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12764c) {
            ctx->pc = 0x127664u;
            goto label_127664;
        }
    }
    ctx->pc = 0x127654u;
    // 0x127654: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x127654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x127658: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x127658u;
    {
        const bool branch_taken_0x127658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127658u;
        // 0x12765c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127658) {
            ctx->pc = 0x127648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127648;
        }
    }
    ctx->pc = 0x127660u;
    // 0x127660: 0x8cc201e8  lw          $v0, 0x1E8($a2)
    ctx->pc = 0x127660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_127664:
    // 0x127664: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x127664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x127668: 0xc0696ec  jal         func_1A5BB0
    ctx->pc = 0x127668u;
    SET_GPR_U32(ctx, 31, 0x127670u);
    ctx->pc = 0x12766Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127668u;
    // 0x12766c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5BB0u, 0x127668u, 0x127670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127670u;
label_127670:
    // 0x127670: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x127670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x127674: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x127674u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_127678:
    // 0x127678: 0x5640003f  bnel        $s2, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x127678u;
    {
        const bool branch_taken_0x127678 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x127678) {
            ctx->pc = 0x12767Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127678u;
            // 0x12767c: 0x8e270334  lw          $a3, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127778u;
            goto label_127778;
        }
    }
    ctx->pc = 0x127680u;
    // 0x127680: 0x10a0008c  beqz        $a1, . + 4 + (0x8C << 2)
    ctx->pc = 0x127680u;
    {
        const bool branch_taken_0x127680 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x127684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127680u;
        // 0x127684: 0x24100014  addiu       $s0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127680) {
            ctx->pc = 0x1278B4u;
            goto label_1278b4;
        }
    }
    ctx->pc = 0x127688u;
    // 0x127688: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x127688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12768c: 0x2708018  mult        $s0, $s3, $s0
    ctx->pc = 0x12768cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x127690: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x127690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127694: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x127694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127698: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x127698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12769c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12769cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1276a0: 0x2d01021  addu        $v0, $s6, $s0
    ctx->pc = 0x1276a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x1276a4: 0xc049e4a  jal         func_127928
    ctx->pc = 0x1276A4u;
    SET_GPR_U32(ctx, 31, 0x1276ACu);
    ctx->pc = 0x1276A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1276A4u;
    // 0x1276a8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127928u, 0x1276A4u, 0x1276ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1276ACu;
label_1276ac:
    // 0x1276ac: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x1276acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1276b0: 0x92030448  lbu         $v1, 0x448($s0)
    ctx->pc = 0x1276b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1096)));
    // 0x1276b4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1276b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1276b8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1276B8u;
    {
        const bool branch_taken_0x1276b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1276BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276B8u;
        // 0x1276bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276b8) {
            ctx->pc = 0x1276F8u;
            goto label_1276f8;
        }
    }
    ctx->pc = 0x1276C0u;
    // 0x1276c0: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x1276c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1276c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1276C4u;
    {
        const bool branch_taken_0x1276c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1276C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276C4u;
        // 0x1276c8: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276c4) {
            ctx->pc = 0x1276E4u;
            goto label_1276e4;
        }
    }
    ctx->pc = 0x1276CCu;
    // 0x1276cc: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1276CCu;
    {
        const bool branch_taken_0x1276cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1276cc) {
            ctx->pc = 0x1276D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1276CCu;
            // 0x1276d0: 0xde221020  ld          $v0, 0x1020($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127720u;
            goto label_127720;
        }
    }
    ctx->pc = 0x1276D4u;
    // 0x1276d4: 0x4620012  bltzl       $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1276D4u;
    {
        const bool branch_taken_0x1276d4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1276d4) {
            ctx->pc = 0x1276D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1276D4u;
            // 0x1276d8: 0xde221020  ld          $v0, 0x1020($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127720u;
            goto label_127720;
        }
    }
    ctx->pc = 0x1276DCu;
    // 0x1276dc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1276DCu;
    {
        const bool branch_taken_0x1276dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1276E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276DCu;
        // 0x1276e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276dc) {
            ctx->pc = 0x12771Cu;
            goto label_12771c;
        }
    }
    ctx->pc = 0x1276E4u;
label_1276e4:
    // 0x1276e4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1276e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1276e8: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1276E8u;
    {
        const bool branch_taken_0x1276e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1276e8) {
            ctx->pc = 0x1276ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1276E8u;
            // 0x1276ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127718u;
            goto label_127718;
        }
    }
    ctx->pc = 0x1276F0u;
    // 0x1276f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1276F0u;
    {
        const bool branch_taken_0x1276f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1276F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276F0u;
        // 0x1276f4: 0xde221020  ld          $v0, 0x1020($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276f0) {
            ctx->pc = 0x127720u;
            goto label_127720;
        }
    }
    ctx->pc = 0x1276F8u;
label_1276f8:
    // 0x1276f8: 0xc095368  jal         func_254DA0
    ctx->pc = 0x1276F8u;
    SET_GPR_U32(ctx, 31, 0x127700u);
    ctx->pc = 0x1276FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1276F8u;
    // 0x1276fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x1276F8u, 0x127700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127700u;
label_127700:
    // 0x127700: 0xc0414a2  jal         func_105288
    ctx->pc = 0x127700u;
    SET_GPR_U32(ctx, 31, 0x127708u);
    ctx->pc = 0x127704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127700u;
    // 0x127704: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105288u, 0x127700u, 0x127708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127708u;
label_127708:
    // 0x127708: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x127708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12770c: 0x242200a  movz        $a0, $s2, $v0
    ctx->pc = 0x12770cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 18));
    // 0x127710: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x127710u;
    {
        const bool branch_taken_0x127710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127710u;
        // 0x127714: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127710) {
            ctx->pc = 0x12771Cu;
            goto label_12771c;
        }
    }
    ctx->pc = 0x127718u;
label_127718:
    // 0x127718: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x127718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12771c:
    // 0x12771c: 0xde221020  ld          $v0, 0x1020($s1)
    ctx->pc = 0x12771cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
label_127720:
    // 0x127720: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x127720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x127724: 0x3c04bfff  lui         $a0, 0xBFFF
    ctx->pc = 0x127724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49151 << 16));
    // 0x127728: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x127728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x12772c: 0x42378  dsll        $a0, $a0, 13
    ctx->pc = 0x12772cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 13);
    // 0x127730: 0x34841fff  ori         $a0, $a0, 0x1FFF
    ctx->pc = 0x127730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8191);
    // 0x127734: 0x31afc  dsll32      $v1, $v1, 11
    ctx->pc = 0x127734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 11));
    // 0x127738: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x127738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x12773c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12773cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x127740: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x127740u;
    {
        const bool branch_taken_0x127740 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x127744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127740u;
        // 0x127744: 0xfe221020  sd          $v0, 0x1020($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 4128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127740) {
            ctx->pc = 0x127750u;
            goto label_127750;
        }
    }
    ctx->pc = 0x127748u;
    // 0x127748: 0x8e220ff0  lw          $v0, 0xFF0($s1)
    ctx->pc = 0x127748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
    // 0x12774c: 0xac400220  sw          $zero, 0x220($v0)
    ctx->pc = 0x12774cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 0));
label_127750:
    // 0x127750: 0x26e29a08  addiu       $v0, $s7, -0x65F8
    ctx->pc = 0x127750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941192));
    // 0x127754: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x127754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x127758: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x127758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12775c: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x12775cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x127760: 0x10800055  beqz        $a0, . + 4 + (0x55 << 2)
    ctx->pc = 0x127760u;
    {
        const bool branch_taken_0x127760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x127764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127760u;
        // 0x127764: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127760) {
            ctx->pc = 0x1278B8u;
            goto label_1278b8;
        }
    }
    ctx->pc = 0x127768u;
    // 0x127768: 0xc043df4  jal         func_10F7D0
    ctx->pc = 0x127768u;
    SET_GPR_U32(ctx, 31, 0x127770u);
    ctx->pc = 0x12776Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127768u;
    // 0x12776c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7D0u, 0x127768u, 0x127770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127770u;
label_127770:
    // 0x127770: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x127770u;
    {
        const bool branch_taken_0x127770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127770u;
        // 0x127774: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127770) {
            ctx->pc = 0x1278B8u;
            goto label_1278b8;
        }
    }
    ctx->pc = 0x127778u;
label_127778:
    // 0x127778: 0x8ce201e4  lw          $v0, 0x1E4($a3)
    ctx->pc = 0x127778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
    // 0x12777c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12777Cu;
    {
        const bool branch_taken_0x12777c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12777Cu;
        // 0x127780: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12777c) {
            ctx->pc = 0x1277B0u;
            goto label_1277b0;
        }
    }
    ctx->pc = 0x127784u;
    // 0x127784: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x127784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127788: 0x248301ec  addiu       $v1, $a0, 0x1EC
    ctx->pc = 0x127788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 492));
    // 0x12778c: 0x0  nop
    ctx->pc = 0x12778cu;
    // NOP
label_127790:
    // 0x127790: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x127790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127794: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x127794u;
    {
        const bool branch_taken_0x127794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127794) {
            ctx->pc = 0x127798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127794u;
            // 0x127798: 0x8c8301e4  lw          $v1, 0x1E4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1277B4u;
            goto label_1277b4;
        }
    }
    ctx->pc = 0x12779Cu;
    // 0x12779c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x12779cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1277a0: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x1277a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1277a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1277A4u;
    {
        const bool branch_taken_0x1277a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1277A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277A4u;
        // 0x1277a8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277a4) {
            ctx->pc = 0x127790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127790;
        }
    }
    ctx->pc = 0x1277ACu;
    // 0x1277ac: 0x8ce201e8  lw          $v0, 0x1E8($a3)
    ctx->pc = 0x1277acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_1277b0:
    // 0x1277b0: 0x8c8301e4  lw          $v1, 0x1E4($a0)
    ctx->pc = 0x1277b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
label_1277b4:
    // 0x1277b4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1277B4u;
    {
        const bool branch_taken_0x1277b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1277B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277B4u;
        // 0x1277b8: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277b4) {
            ctx->pc = 0x1277CCu;
            goto label_1277cc;
        }
    }
    ctx->pc = 0x1277BCu;
    // 0x1277bc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1277BCu;
    {
        const bool branch_taken_0x1277bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1277C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277BCu;
        // 0x1277c0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277bc) {
            ctx->pc = 0x1277F4u;
            goto label_1277f4;
        }
    }
    ctx->pc = 0x1277C4u;
label_1277c4:
    // 0x1277c4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1277C4u;
    {
        const bool branch_taken_0x1277c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1277C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277C4u;
        // 0x1277c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277c4) {
            ctx->pc = 0x1277F4u;
            goto label_1277f4;
        }
    }
    ctx->pc = 0x1277CCu;
label_1277cc:
    // 0x1277cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1277ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1277d0: 0x248301ec  addiu       $v1, $a0, 0x1EC
    ctx->pc = 0x1277d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 492));
    // 0x1277d4: 0x0  nop
    ctx->pc = 0x1277d4u;
    // NOP
label_1277d8:
    // 0x1277d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1277d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1277dc: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1277DCu;
    {
        const bool branch_taken_0x1277dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1277E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277DCu;
        // 0x1277e0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277dc) {
            ctx->pc = 0x1277C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1277c4;
        }
    }
    ctx->pc = 0x1277E4u;
    // 0x1277e4: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x1277e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1277e8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1277E8u;
    {
        const bool branch_taken_0x1277e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1277ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277E8u;
        // 0x1277ec: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277e8) {
            ctx->pc = 0x1277D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1277d8;
        }
    }
    ctx->pc = 0x1277F0u;
    // 0x1277f0: 0x8c8401e8  lw          $a0, 0x1E8($a0)
    ctx->pc = 0x1277f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 488)));
label_1277f4:
    // 0x1277f4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1277f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1277f8: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1277f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1277fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1277fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x127800: 0x0  nop
    ctx->pc = 0x127800u;
    // NOP
    // 0x127804: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x127804u;
    {
        const bool branch_taken_0x127804 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x127808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127804u;
        // 0x127808: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127804) {
            ctx->pc = 0x12783Cu;
            goto label_12783c;
        }
    }
    ctx->pc = 0x12780Cu;
    // 0x12780c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x12780Cu;
    {
        const bool branch_taken_0x12780c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x127810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12780Cu;
        // 0x127810: 0x26e29a08  addiu       $v0, $s7, -0x65F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12780c) {
            ctx->pc = 0x127838u;
            goto label_127838;
        }
    }
    ctx->pc = 0x127814u;
    // 0x127814: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x127814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x127818: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x127818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12781c: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x12781cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x127820: 0x10800025  beqz        $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x127820u;
    {
        const bool branch_taken_0x127820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x127824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127820u;
        // 0x127824: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127820) {
            ctx->pc = 0x1278B8u;
            goto label_1278b8;
        }
    }
    ctx->pc = 0x127828u;
    // 0x127828: 0xc043e16  jal         func_10F858
    ctx->pc = 0x127828u;
    SET_GPR_U32(ctx, 31, 0x127830u);
    ctx->pc = 0x10F858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F858u, 0x127828u, 0x127830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127830u;
label_127830:
    // 0x127830: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x127830u;
    {
        const bool branch_taken_0x127830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127830u;
        // 0x127834: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127830) {
            ctx->pc = 0x1278B8u;
            goto label_1278b8;
        }
    }
    ctx->pc = 0x127838u;
label_127838:
    // 0x127838: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x127838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_12783c:
    // 0x12783c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x12783cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x127840: 0x2629018  mult        $s2, $s3, $v0
    ctx->pc = 0x127840u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x127844: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x127844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127848: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x127848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12784c: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x12784cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x127850: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x127850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x127854: 0xc049ada  jal         func_126B68
    ctx->pc = 0x127854u;
    SET_GPR_U32(ctx, 31, 0x12785Cu);
    ctx->pc = 0x127858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127854u;
    // 0x127858: 0x8c50044c  lw          $s0, 0x44C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126B68u, 0x127854u, 0x12785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12785Cu;
label_12785c:
    // 0x12785c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x12785Cu;
    {
        const bool branch_taken_0x12785c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12785Cu;
        // 0x127860: 0x2d21021  addu        $v0, $s6, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12785c) {
            ctx->pc = 0x1278B0u;
            goto label_1278b0;
        }
    }
    ctx->pc = 0x127864u;
    // 0x127864: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x127864u;
    {
        const bool branch_taken_0x127864 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x127868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127864u;
        // 0x127868: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127864) {
            ctx->pc = 0x127878u;
            goto label_127878;
        }
    }
    ctx->pc = 0x12786Cu;
    // 0x12786c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12786cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127870: 0xc04b2a6  jal         func_12CA98
    ctx->pc = 0x127870u;
    SET_GPR_U32(ctx, 31, 0x127878u);
    ctx->pc = 0x127874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127870u;
    // 0x127874: 0x2484b530  addiu       $a0, $a0, -0x4AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CA98u, 0x127870u, 0x127878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127878u;
label_127878:
    // 0x127878: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x127878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12787c: 0xc049abe  jal         func_126AF8
    ctx->pc = 0x12787Cu;
    SET_GPR_U32(ctx, 31, 0x127884u);
    ctx->pc = 0x127880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12787Cu;
    // 0x127880: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126AF8u, 0x12787Cu, 0x127884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127884u;
label_127884:
    // 0x127884: 0xae200fe0  sw          $zero, 0xFE0($s1)
    ctx->pc = 0x127884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4064), GPR_U32(ctx, 0));
    // 0x127888: 0x26e29a08  addiu       $v0, $s7, -0x65F8
    ctx->pc = 0x127888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941192));
    // 0x12788c: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x12788cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x127890: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x127890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127894: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x127894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x127898: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x127898u;
    {
        const bool branch_taken_0x127898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127898u;
        // 0x12789c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127898) {
            ctx->pc = 0x1278B8u;
            goto label_1278b8;
        }
    }
    ctx->pc = 0x1278A0u;
    // 0x1278a0: 0xc043df4  jal         func_10F7D0
    ctx->pc = 0x1278A0u;
    SET_GPR_U32(ctx, 31, 0x1278A8u);
    ctx->pc = 0x1278A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1278A0u;
    // 0x1278a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7D0u, 0x1278A0u, 0x1278A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1278A8u;
label_1278a8:
    // 0x1278a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1278A8u;
    {
        const bool branch_taken_0x1278a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1278ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278A8u;
        // 0x1278ac: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1278a8) {
            ctx->pc = 0x1278B8u;
            goto label_1278b8;
        }
    }
    ctx->pc = 0x1278B0u;
label_1278b0:
    // 0x1278b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1278b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1278b4:
    // 0x1278b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1278b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1278b8:
    // 0x1278b8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1278b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1278bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1278bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1278c0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1278c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1278c4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1278c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1278c8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1278c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1278cc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1278ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1278d0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1278d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1278d4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1278d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1278d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1278D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1278DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278D8u;
        // 0x1278dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1278D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1278E0u;
}
