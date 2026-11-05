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

// Function: sub_001BA548
// Address: 0x1ba548 - 0x1ba710
void sub_001BA548_0x1ba548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA548_0x1ba548");
#endif

    switch (ctx->pc) {
        case 0x1ba588u: goto label_1ba588;
        case 0x1ba5a4u: goto label_1ba5a4;
        case 0x1ba5b4u: goto label_1ba5b4;
        case 0x1ba658u: goto label_1ba658;
        case 0x1ba678u: goto label_1ba678;
        case 0x1ba6a0u: goto label_1ba6a0;
        case 0x1ba6b8u: goto label_1ba6b8;
        case 0x1ba6dcu: goto label_1ba6dc;
        case 0x1ba6ecu: goto label_1ba6ec;
        default: break;
    }

    ctx->pc = 0x1ba548u;

    // 0x1ba548: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ba548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ba54c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba550: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ba550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba554: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ba554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ba558: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1ba558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ba55c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ba55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ba560: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ba560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba564: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1ba564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1ba568: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ba568u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba56c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ba56cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba570: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ba570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ba574: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1ba574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1ba578: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1ba578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1ba57c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ba57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ba580: 0xc06e928  jal         func_1BA4A0
    ctx->pc = 0x1BA580u;
    SET_GPR_U32(ctx, 31, 0x1BA588u);
    ctx->pc = 0x1BA584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA580u;
    // 0x1ba584: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA4A0u, 0x1BA580u, 0x1BA588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA588u;
label_1ba588:
    // 0x1ba588: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x1ba588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1ba58c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ba58cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba590: 0x37a80008  ori         $t0, $sp, 0x8
    ctx->pc = 0x1ba590u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x1ba594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ba594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba598: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ba598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba59c: 0xc06e6a8  jal         func_1B9AA0
    ctx->pc = 0x1BA59Cu;
    SET_GPR_U32(ctx, 31, 0x1BA5A4u);
    ctx->pc = 0x1BA5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA59Cu;
    // 0x1ba5a0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9AA0u, 0x1BA59Cu, 0x1BA5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA5A4u;
label_1ba5a4:
    // 0x1ba5a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ba5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba5a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ba5a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba5ac: 0xc06e8a8  jal         func_1BA2A0
    ctx->pc = 0x1BA5ACu;
    SET_GPR_U32(ctx, 31, 0x1BA5B4u);
    ctx->pc = 0x1BA5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA5ACu;
    // 0x1ba5b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA2A0u, 0x1BA5ACu, 0x1BA5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA5B4u;
label_1ba5b4:
    // 0x1ba5b4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1ba5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba5b8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1ba5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ba5bc: 0x8e2203ec  lw          $v0, 0x3EC($s1)
    ctx->pc = 0x1ba5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1004)));
    // 0x1ba5c0: 0xae2303f4  sw          $v1, 0x3F4($s1)
    ctx->pc = 0x1ba5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1012), GPR_U32(ctx, 3));
    // 0x1ba5c4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1ba5c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ba5c8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BA5C8u;
    {
        const bool branch_taken_0x1ba5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5C8u;
        // 0x1ba5cc: 0xae2403f8  sw          $a0, 0x3F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1016), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba5c8) {
            ctx->pc = 0x1BA5FCu;
            goto label_1ba5fc;
        }
    }
    ctx->pc = 0x1BA5D0u;
    // 0x1ba5d0: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x1ba5d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ba5d4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BA5D4u;
    {
        const bool branch_taken_0x1ba5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba5d4) {
            ctx->pc = 0x1BA5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA5D4u;
            // 0x1ba5d8: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA5DCu;
            goto label_1ba5dc;
        }
    }
    ctx->pc = 0x1BA5DCu;
label_1ba5dc:
    // 0x1ba5dc: 0x244102b  sltu        $v0, $s2, $a0
    ctx->pc = 0x1ba5dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ba5e0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BA5E0u;
    {
        const bool branch_taken_0x1ba5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba5e0) {
            ctx->pc = 0x1BA5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA5E0u;
            // 0x1ba5e4: 0xafb20004  sw          $s2, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA5E8u;
            goto label_1ba5e8;
        }
    }
    ctx->pc = 0x1BA5E8u;
label_1ba5e8:
    // 0x1ba5e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ba5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba5ec: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1ba5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ba5f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ba5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ba5f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ba5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ba5f8: 0xae2203ec  sw          $v0, 0x3EC($s1)
    ctx->pc = 0x1ba5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1004), GPR_U32(ctx, 2));
label_1ba5fc:
    // 0x1ba5fc: 0x8e2303ec  lw          $v1, 0x3EC($s1)
    ctx->pc = 0x1ba5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1004)));
    // 0x1ba600: 0x72102b  sltu        $v0, $v1, $s2
    ctx->pc = 0x1ba600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1ba604: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA604u;
    {
        const bool branch_taken_0x1ba604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba604) {
            ctx->pc = 0x1BA608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA604u;
            // 0x1ba608: 0x243001b  divu        $zero, $s2, $v1 (Delay Slot)
            { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA614u;
            goto label_1ba614;
        }
    }
    ctx->pc = 0x1BA60Cu;
    // 0x1ba60c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BA60Cu;
    {
        const bool branch_taken_0x1ba60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA60Cu;
        // 0x1ba610: 0xae200400  sw          $zero, 0x400($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1024), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba60c) {
            ctx->pc = 0x1BA64Cu;
            goto label_1ba64c;
        }
    }
    ctx->pc = 0x1BA614u;
label_1ba614:
    // 0x1ba614: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BA614u;
    {
        const bool branch_taken_0x1ba614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba614) {
            ctx->pc = 0x1BA618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA614u;
            // 0x1ba618: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA61Cu;
            goto label_1ba61c;
        }
    }
    ctx->pc = 0x1BA61Cu;
label_1ba61c:
    // 0x1ba61c: 0x2012  mflo        $a0
    ctx->pc = 0x1ba61cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1ba620: 0x1010  mfhi        $v0
    ctx->pc = 0x1ba620u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ba624: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA624u;
    {
        const bool branch_taken_0x1ba624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba624) {
            ctx->pc = 0x1BA63Cu;
            goto label_1ba63c;
        }
    }
    ctx->pc = 0x1BA62Cu;
    // 0x1ba62c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BA62Cu;
    {
        const bool branch_taken_0x1ba62c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba62c) {
            ctx->pc = 0x1BA630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA62Cu;
            // 0x1ba630: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA634u;
            goto label_1ba634;
        }
    }
    ctx->pc = 0x1BA634u;
label_1ba634:
    // 0x1ba634: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA634u;
    {
        const bool branch_taken_0x1ba634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA634u;
        // 0x1ba638: 0xae240400  sw          $a0, 0x400($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1024), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba634) {
            ctx->pc = 0x1BA64Cu;
            goto label_1ba64c;
        }
    }
    ctx->pc = 0x1BA63Cu;
label_1ba63c:
    // 0x1ba63c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BA63Cu;
    {
        const bool branch_taken_0x1ba63c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba63c) {
            ctx->pc = 0x1BA640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA63Cu;
            // 0x1ba640: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA644u;
            goto label_1ba644;
        }
    }
    ctx->pc = 0x1BA644u;
label_1ba644:
    // 0x1ba644: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1ba644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ba648: 0xae220400  sw          $v0, 0x400($s1)
    ctx->pc = 0x1ba648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1024), GPR_U32(ctx, 2));
label_1ba64c:
    // 0x1ba64c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1ba64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ba650: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ba650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ba654: 0x262203c0  addiu       $v0, $s1, 0x3C0
    ctx->pc = 0x1ba654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 960));
label_1ba658:
    // 0x1ba658: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1ba658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1ba65c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ba65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ba660: 0x0  nop
    ctx->pc = 0x1ba660u;
    // NOP
    // 0x1ba664: 0x0  nop
    ctx->pc = 0x1ba664u;
    // NOP
    // 0x1ba668: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BA668u;
    {
        const bool branch_taken_0x1ba668 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BA66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA668u;
        // 0x1ba66c: 0x2442ffb0  addiu       $v0, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba668) {
            ctx->pc = 0x1BA658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba658;
        }
    }
    ctx->pc = 0x1BA670u;
    // 0x1ba670: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ba670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ba674: 0x262203d0  addiu       $v0, $s1, 0x3D0
    ctx->pc = 0x1ba674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 976));
label_1ba678:
    // 0x1ba678: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1ba678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1ba67c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ba67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ba680: 0x0  nop
    ctx->pc = 0x1ba680u;
    // NOP
    // 0x1ba684: 0x0  nop
    ctx->pc = 0x1ba684u;
    // NOP
    // 0x1ba688: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BA688u;
    {
        const bool branch_taken_0x1ba688 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BA68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA688u;
        // 0x1ba68c: 0x2442ffb0  addiu       $v0, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba688) {
            ctx->pc = 0x1BA678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba678;
        }
    }
    ctx->pc = 0x1BA690u;
    // 0x1ba690: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1ba690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ba694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ba694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba698: 0xc06e5e4  jal         func_1B9790
    ctx->pc = 0x1BA698u;
    SET_GPR_U32(ctx, 31, 0x1BA6A0u);
    ctx->pc = 0x1BA69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA698u;
    // 0x1ba69c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9790u, 0x1BA698u, 0x1BA6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA6A0u;
label_1ba6a0:
    // 0x1ba6a0: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x1ba6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ba6a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ba6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba6a8: 0xc7ac0008  lwc1        $f12, 0x8($sp)
    ctx->pc = 0x1ba6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ba6ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ba6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba6b0: 0xc06e626  jal         func_1B9898
    ctx->pc = 0x1BA6B0u;
    SET_GPR_U32(ctx, 31, 0x1BA6B8u);
    ctx->pc = 0x1BA6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA6B0u;
    // 0x1ba6b4: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9898u, 0x1BA6B0u, 0x1BA6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA6B8u;
label_1ba6b8:
    // 0x1ba6b8: 0x8e220400  lw          $v0, 0x400($s1)
    ctx->pc = 0x1ba6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1024)));
    // 0x1ba6bc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1ba6bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ba6c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA6C0u;
    {
        const bool branch_taken_0x1ba6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6C0u;
        // 0x1ba6c4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba6c0) {
            ctx->pc = 0x1BA6E0u;
            goto label_1ba6e0;
        }
    }
    ctx->pc = 0x1BA6C8u;
    // 0x1ba6c8: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1ba6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ba6cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ba6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba6d0: 0xc7ac0008  lwc1        $f12, 0x8($sp)
    ctx->pc = 0x1ba6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ba6d4: 0xc06e668  jal         func_1B99A0
    ctx->pc = 0x1BA6D4u;
    SET_GPR_U32(ctx, 31, 0x1BA6DCu);
    ctx->pc = 0x1BA6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA6D4u;
    // 0x1ba6d8: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B99A0u, 0x1BA6D4u, 0x1BA6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA6DCu;
label_1ba6dc:
    // 0x1ba6dc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1ba6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba6e0:
    // 0x1ba6e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ba6e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba6e4: 0xc06e600  jal         func_1B9800
    ctx->pc = 0x1BA6E4u;
    SET_GPR_U32(ctx, 31, 0x1BA6ECu);
    ctx->pc = 0x1BA6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA6E4u;
    // 0x1ba6e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9800u, 0x1BA6E4u, 0x1BA6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA6ECu;
label_1ba6ec:
    // 0x1ba6ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ba6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba6f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ba6f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba6f4: 0xae2203f0  sw          $v0, 0x3F0($s1)
    ctx->pc = 0x1ba6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1008), GPR_U32(ctx, 2));
    // 0x1ba6f8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ba6f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ba6fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ba6fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba700: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1ba700u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba704: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ba704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba708: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA708u;
        // 0x1ba70c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA710u;
}
