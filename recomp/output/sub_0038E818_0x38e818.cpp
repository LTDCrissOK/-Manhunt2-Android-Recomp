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

// Function: sub_0038E818
// Address: 0x38e818 - 0x38e958
void sub_0038E818_0x38e818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E818_0x38e818");
#endif

    switch (ctx->pc) {
        case 0x38e868u: goto label_38e868;
        case 0x38e8a4u: goto label_38e8a4;
        case 0x38e8c0u: goto label_38e8c0;
        case 0x38e8ecu: goto label_38e8ec;
        default: break;
    }

    ctx->pc = 0x38e818u;

    // 0x38e818: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x38e818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x38e81c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x38e81cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x38e820: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38e820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38e824: 0x34c62010  ori         $a2, $a2, 0x2010
    ctx->pc = 0x38e824u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8208);
    // 0x38e828: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38e828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38e82c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38e82cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e830: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x38e830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x38e834: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x38e834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38e838: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x38e838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x38e83c: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x38e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x38e840: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x38e840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x38e844: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x38e844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x38e848: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38e848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38e84c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x38e84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x38e850: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x38e850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x38e854: 0xae300858  sw          $s0, 0x858($s1)
    ctx->pc = 0x38e854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2136), GPR_U32(ctx, 16));
    // 0x38e858: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x38e858u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x38e85c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x38e85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x38e860: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38E860u;
    SET_GPR_U32(ctx, 31, 0x38E868u);
    ctx->pc = 0x38E864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E860u;
    // 0x38e864: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38E860u, 0x38E868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E868u;
label_38e868:
    // 0x38e868: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x38e868u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e86c: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x38e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x38e870: 0x121442  srl         $v0, $s2, 17
    ctx->pc = 0x38e870u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x38e874: 0x30750fff  andi        $s5, $v1, 0xFFF
    ctx->pc = 0x38e874u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x38e878: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x38e878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x38e87c: 0x122342  srl         $a0, $s2, 13
    ctx->pc = 0x38e87cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 13));
    // 0x38e880: 0x121bc2  srl         $v1, $s2, 15
    ctx->pc = 0x38e880u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 15));
    // 0x38e884: 0x30940003  andi        $s4, $a0, 0x3
    ctx->pc = 0x38e884u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x38e888: 0x30730003  andi        $s3, $v1, 0x3
    ctx->pc = 0x38e888u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x38e88c: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38E88Cu;
    {
        const bool branch_taken_0x38e88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x38E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E88Cu;
        // 0x38e890: 0xae220150  sw          $v0, 0x150($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e88c) {
            ctx->pc = 0x38E8A4u;
            goto label_38e8a4;
        }
    }
    ctx->pc = 0x38E894u;
    // 0x38e894: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x38e894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x38e898: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38e898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e89c: 0xc0e28f8  jal         func_38A3E0
    ctx->pc = 0x38E89Cu;
    SET_GPR_U32(ctx, 31, 0x38E8A4u);
    ctx->pc = 0x38E8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E89Cu;
    // 0x38e8a0: 0x24a59620  addiu       $a1, $a1, -0x69E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3E0u, 0x38E89Cu, 0x38E8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E8A4u;
label_38e8a4:
    // 0x38e8a4: 0x1214c2  srl         $v0, $s2, 19
    ctx->pc = 0x38e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 19));
    // 0x38e8a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38e8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e8ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38e8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x38e8b0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x38e8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x38e8b4: 0xae22014c  sw          $v0, 0x14C($s1)
    ctx->pc = 0x38e8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 2));
    // 0x38e8b8: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38E8B8u;
    SET_GPR_U32(ctx, 31, 0x38E8C0u);
    ctx->pc = 0x38E8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E8B8u;
    // 0x38e8bc: 0x128502  srl         $s0, $s2, 20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38E8B8u, 0x38E8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E8C0u;
label_38e8c0:
    // 0x38e8c0: 0x29202  srl         $s2, $v0, 8
    ctx->pc = 0x38e8c0u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x38e8c4: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x38e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x38e8c8: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x38E8C8u;
    {
        const bool branch_taken_0x38e8c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x38E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E8C8u;
        // 0x38e8cc: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e8c8) {
            ctx->pc = 0x38E8ECu;
            goto label_38e8ec;
        }
    }
    ctx->pc = 0x38E8D0u;
    // 0x38e8d0: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38E8D0u;
    {
        const bool branch_taken_0x38e8d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x38E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E8D0u;
        // 0x38e8d4: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e8d0) {
            ctx->pc = 0x38E8ECu;
            goto label_38e8ec;
        }
    }
    ctx->pc = 0x38E8D8u;
    // 0x38e8d8: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38E8D8u;
    {
        const bool branch_taken_0x38e8d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x38E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E8D8u;
        // 0x38e8dc: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e8d8) {
            ctx->pc = 0x38E8ECu;
            goto label_38e8ec;
        }
    }
    ctx->pc = 0x38E8E0u;
    // 0x38e8e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38e8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e8e4: 0xc0e28f8  jal         func_38A3E0
    ctx->pc = 0x38E8E4u;
    SET_GPR_U32(ctx, 31, 0x38E8ECu);
    ctx->pc = 0x38E8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E8E4u;
    // 0x38e8e8: 0x24a59648  addiu       $a1, $a1, -0x69B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3E0u, 0x38E8E4u, 0x38E8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E8ECu;
label_38e8ec:
    // 0x38e8ec: 0x8e240134  lw          $a0, 0x134($s1)
    ctx->pc = 0x38e8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x38e8f0: 0x154480  sll         $t0, $s5, 18
    ctx->pc = 0x38e8f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 18));
    // 0x38e8f4: 0x8e230138  lw          $v1, 0x138($s1)
    ctx->pc = 0x38e8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x38e8f8: 0x124a80  sll         $t1, $s2, 10
    ctx->pc = 0x38e8f8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
    // 0x38e8fc: 0x8e260144  lw          $a2, 0x144($s1)
    ctx->pc = 0x38e8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x38e900: 0x133b00  sll         $a3, $s3, 12
    ctx->pc = 0x38e900u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 12));
    // 0x38e904: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x38e904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x38e908: 0x142b00  sll         $a1, $s4, 12
    ctx->pc = 0x38e908u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 12));
    // 0x38e90c: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x38e90cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x38e910: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x38e910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x38e914: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x38e914u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x38e918: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x38e918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x38e91c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x38e91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x38e920: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x38e920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x38e924: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x38e924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    // 0x38e928: 0xae270134  sw          $a3, 0x134($s1)
    ctx->pc = 0x38e928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 7));
    // 0x38e92c: 0xae250138  sw          $a1, 0x138($s1)
    ctx->pc = 0x38e92cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 5));
    // 0x38e930: 0xae260144  sw          $a2, 0x144($s1)
    ctx->pc = 0x38e930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 6));
    // 0x38e934: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x38e934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38e938: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x38e938u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38e93c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x38e93cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38e940: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x38e940u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38e944: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38e944u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38e948: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38e948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38e94c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38e94cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38e950: 0x3e00008  jr          $ra
    ctx->pc = 0x38E950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E950u;
        // 0x38e954: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E958u;
}
