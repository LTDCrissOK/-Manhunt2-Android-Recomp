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

// Function: sub_00395820
// Address: 0x395820 - 0x395958
void sub_00395820_0x395820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395820_0x395820");
#endif

    switch (ctx->pc) {
        case 0x395870u: goto label_395870;
        case 0x39588cu: goto label_39588c;
        case 0x3958a8u: goto label_3958a8;
        case 0x3958ecu: goto label_3958ec;
        case 0x395934u: goto label_395934;
        default: break;
    }

    ctx->pc = 0x395820u;

    // 0x395820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x395820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x395824: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x395824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x395828: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x395828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39582c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39582cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x395830: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x395830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395834: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x395834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x395838: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x395838u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39583c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x39583cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x395840: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x395840u;
    {
        const bool branch_taken_0x395840 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x395844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395840u;
        // 0x395844: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395840) {
            ctx->pc = 0x395858u;
            goto label_395858;
        }
    }
    ctx->pc = 0x395848u;
    // 0x395848: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x395848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39584c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x39584Cu;
    {
        const bool branch_taken_0x39584c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39584Cu;
        // 0x395850: 0x2484ab00  addiu       $a0, $a0, -0x5500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39584c) {
            ctx->pc = 0x3958E4u;
            goto label_3958e4;
        }
    }
    ctx->pc = 0x395854u;
    // 0x395854: 0x0  nop
    ctx->pc = 0x395854u;
    // NOP
label_395858:
    // 0x395858: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x395858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x39585c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39585cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395860: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x395860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395864: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x395864u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395868: 0xc0e4fb8  jal         func_393EE0
    ctx->pc = 0x395868u;
    SET_GPR_U32(ctx, 31, 0x395870u);
    ctx->pc = 0x39586Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395868u;
    // 0x39586c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393EE0u, 0x395868u, 0x395870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395870u;
label_395870:
    // 0x395870: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x395870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x395874: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x395874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x395878: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x395878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x39587c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39587Cu;
    {
        const bool branch_taken_0x39587c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39587c) {
            ctx->pc = 0x395880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39587Cu;
            // 0x395880: 0x82020001  lb          $v0, 0x1($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395894u;
            goto label_395894;
        }
    }
    ctx->pc = 0x395884u;
    // 0x395884: 0xc0e5664  jal         func_395990
    ctx->pc = 0x395884u;
    SET_GPR_U32(ctx, 31, 0x39588Cu);
    ctx->pc = 0x395888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395884u;
    // 0x395888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395990u, 0x395884u, 0x39588Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39588Cu;
label_39588c:
    // 0x39588c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x39588cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x395890: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x395890u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_395894:
    // 0x395894: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x395894u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x395898: 0x14530003  bne         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x395898u;
    {
        const bool branch_taken_0x395898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x395898) {
            ctx->pc = 0x3958A8u;
            goto label_3958a8;
        }
    }
    ctx->pc = 0x3958A0u;
    // 0x3958a0: 0xc0e551a  jal         func_395468
    ctx->pc = 0x3958A0u;
    SET_GPR_U32(ctx, 31, 0x3958A8u);
    ctx->pc = 0x3958A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3958A0u;
    // 0x3958a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395468u, 0x3958A0u, 0x3958A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3958A8u;
label_3958a8:
    // 0x3958a8: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3958A8u;
    {
        const bool branch_taken_0x3958a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3958ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3958A8u;
        // 0x3958ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3958a8) {
            ctx->pc = 0x3958B8u;
            goto label_3958b8;
        }
    }
    ctx->pc = 0x3958B0u;
    // 0x3958b0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3958B0u;
    {
        const bool branch_taken_0x3958b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3958B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3958B0u;
        // 0x3958b4: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3958b0) {
            ctx->pc = 0x3958F8u;
            goto label_3958f8;
        }
    }
    ctx->pc = 0x3958B8u;
label_3958b8:
    // 0x3958b8: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3958B8u;
    {
        const bool branch_taken_0x3958b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x3958b8) {
            ctx->pc = 0x3958C8u;
            goto label_3958c8;
        }
    }
    ctx->pc = 0x3958C0u;
    // 0x3958c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3958C0u;
    {
        const bool branch_taken_0x3958c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3958C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3958C0u;
        // 0x3958c4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3958c0) {
            ctx->pc = 0x3958D4u;
            goto label_3958d4;
        }
    }
    ctx->pc = 0x3958C8u;
label_3958c8:
    // 0x3958c8: 0x16530005  bne         $s2, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3958C8u;
    {
        const bool branch_taken_0x3958c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x3958CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3958C8u;
        // 0x3958cc: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3958c8) {
            ctx->pc = 0x3958E0u;
            goto label_3958e0;
        }
    }
    ctx->pc = 0x3958D0u;
    // 0x3958d0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3958d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3958d4:
    // 0x3958d4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3958d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3958d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3958D8u;
    {
        const bool branch_taken_0x3958d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3958DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3958D8u;
        // 0x3958dc: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3958d8) {
            ctx->pc = 0x3958F8u;
            goto label_3958f8;
        }
    }
    ctx->pc = 0x3958E0u;
label_3958e0:
    // 0x3958e0: 0x2484ab28  addiu       $a0, $a0, -0x54D8
    ctx->pc = 0x3958e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945576));
label_3958e4:
    // 0x3958e4: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x3958E4u;
    SET_GPR_U32(ctx, 31, 0x3958ECu);
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x3958E4u, 0x3958ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3958ECu;
label_3958ec:
    // 0x3958ec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3958ECu;
    {
        const bool branch_taken_0x3958ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3958F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3958ECu;
        // 0x3958f0: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3958ec) {
            ctx->pc = 0x395938u;
            goto label_395938;
        }
    }
    ctx->pc = 0x3958F4u;
    // 0x3958f4: 0x0  nop
    ctx->pc = 0x3958f4u;
    // NOP
label_3958f8:
    // 0x3958f8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3958f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3958fc: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3958FCu;
    {
        const bool branch_taken_0x3958fc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3958fc) {
            ctx->pc = 0x395900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3958FCu;
            // 0x395900: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395910u;
            goto label_395910;
        }
    }
    ctx->pc = 0x395904u;
    // 0x395904: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x395904u;
    {
        const bool branch_taken_0x395904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395904u;
        // 0x395908: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395904) {
            ctx->pc = 0x39591Cu;
            goto label_39591c;
        }
    }
    ctx->pc = 0x39590Cu;
    // 0x39590c: 0x0  nop
    ctx->pc = 0x39590cu;
    // NOP
label_395910:
    // 0x395910: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x395910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x395914: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x395914u;
    {
        const bool branch_taken_0x395914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x395914) {
            ctx->pc = 0x395918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395914u;
            // 0x395918: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39591Cu;
            goto label_39591c;
        }
    }
    ctx->pc = 0x39591Cu;
label_39591c:
    // 0x39591c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x39591cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395920: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x395920u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395924: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x395924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x395928: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x395928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39592c: 0xc0e4fb8  jal         func_393EE0
    ctx->pc = 0x39592Cu;
    SET_GPR_U32(ctx, 31, 0x395934u);
    ctx->pc = 0x395930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39592Cu;
    // 0x395930: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393EE0u, 0x39592Cu, 0x395934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395934u;
label_395934:
    // 0x395934: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x395934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_395938:
    // 0x395938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x395938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39593c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39593cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x395940: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x395940u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x395944: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x395944u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x395948: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x395948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39594c: 0x3e00008  jr          $ra
    ctx->pc = 0x39594Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39594Cu;
        // 0x395950: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39594Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395954u;
    // 0x395954: 0x0  nop
    ctx->pc = 0x395954u;
    // NOP
    ctx->pc = 0x395958u;
}
