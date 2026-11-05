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

// Function: sub_002DD630
// Address: 0x2dd630 - 0x2dd778
void sub_002DD630_0x2dd630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD630_0x2dd630");
#endif

    switch (ctx->pc) {
        case 0x2dd630u: goto label_2dd630;
        case 0x2dd634u: goto label_2dd634;
        case 0x2dd638u: goto label_2dd638;
        case 0x2dd63cu: goto label_2dd63c;
        case 0x2dd640u: goto label_2dd640;
        case 0x2dd644u: goto label_2dd644;
        case 0x2dd648u: goto label_2dd648;
        case 0x2dd64cu: goto label_2dd64c;
        case 0x2dd650u: goto label_2dd650;
        case 0x2dd654u: goto label_2dd654;
        case 0x2dd658u: goto label_2dd658;
        case 0x2dd65cu: goto label_2dd65c;
        case 0x2dd660u: goto label_2dd660;
        case 0x2dd664u: goto label_2dd664;
        case 0x2dd668u: goto label_2dd668;
        case 0x2dd66cu: goto label_2dd66c;
        case 0x2dd670u: goto label_2dd670;
        case 0x2dd674u: goto label_2dd674;
        case 0x2dd678u: goto label_2dd678;
        case 0x2dd67cu: goto label_2dd67c;
        case 0x2dd680u: goto label_2dd680;
        case 0x2dd684u: goto label_2dd684;
        case 0x2dd688u: goto label_2dd688;
        case 0x2dd68cu: goto label_2dd68c;
        case 0x2dd690u: goto label_2dd690;
        case 0x2dd694u: goto label_2dd694;
        case 0x2dd698u: goto label_2dd698;
        case 0x2dd69cu: goto label_2dd69c;
        case 0x2dd6a0u: goto label_2dd6a0;
        case 0x2dd6a4u: goto label_2dd6a4;
        case 0x2dd6a8u: goto label_2dd6a8;
        case 0x2dd6acu: goto label_2dd6ac;
        case 0x2dd6b0u: goto label_2dd6b0;
        case 0x2dd6b4u: goto label_2dd6b4;
        case 0x2dd6b8u: goto label_2dd6b8;
        case 0x2dd6bcu: goto label_2dd6bc;
        case 0x2dd6c0u: goto label_2dd6c0;
        case 0x2dd6c4u: goto label_2dd6c4;
        case 0x2dd6c8u: goto label_2dd6c8;
        case 0x2dd6ccu: goto label_2dd6cc;
        case 0x2dd6d0u: goto label_2dd6d0;
        case 0x2dd6d4u: goto label_2dd6d4;
        case 0x2dd6d8u: goto label_2dd6d8;
        case 0x2dd6dcu: goto label_2dd6dc;
        case 0x2dd6e0u: goto label_2dd6e0;
        case 0x2dd6e4u: goto label_2dd6e4;
        case 0x2dd6e8u: goto label_2dd6e8;
        case 0x2dd6ecu: goto label_2dd6ec;
        case 0x2dd6f0u: goto label_2dd6f0;
        case 0x2dd6f4u: goto label_2dd6f4;
        case 0x2dd6f8u: goto label_2dd6f8;
        case 0x2dd6fcu: goto label_2dd6fc;
        case 0x2dd700u: goto label_2dd700;
        case 0x2dd704u: goto label_2dd704;
        case 0x2dd708u: goto label_2dd708;
        case 0x2dd70cu: goto label_2dd70c;
        case 0x2dd710u: goto label_2dd710;
        case 0x2dd714u: goto label_2dd714;
        case 0x2dd718u: goto label_2dd718;
        case 0x2dd71cu: goto label_2dd71c;
        case 0x2dd720u: goto label_2dd720;
        case 0x2dd724u: goto label_2dd724;
        case 0x2dd728u: goto label_2dd728;
        case 0x2dd72cu: goto label_2dd72c;
        case 0x2dd730u: goto label_2dd730;
        case 0x2dd734u: goto label_2dd734;
        case 0x2dd738u: goto label_2dd738;
        case 0x2dd73cu: goto label_2dd73c;
        case 0x2dd740u: goto label_2dd740;
        case 0x2dd744u: goto label_2dd744;
        case 0x2dd748u: goto label_2dd748;
        case 0x2dd74cu: goto label_2dd74c;
        case 0x2dd750u: goto label_2dd750;
        case 0x2dd754u: goto label_2dd754;
        case 0x2dd758u: goto label_2dd758;
        case 0x2dd75cu: goto label_2dd75c;
        case 0x2dd760u: goto label_2dd760;
        case 0x2dd764u: goto label_2dd764;
        case 0x2dd768u: goto label_2dd768;
        case 0x2dd76cu: goto label_2dd76c;
        case 0x2dd770u: goto label_2dd770;
        case 0x2dd774u: goto label_2dd774;
        default: break;
    }

    ctx->pc = 0x2dd630u;

label_2dd630:
    // 0x2dd630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dd630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2dd634:
    // 0x2dd634: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dd634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2dd638:
    // 0x2dd638: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2dd638u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2dd63c:
    // 0x2dd63c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dd63cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dd640:
    // 0x2dd640: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2dd640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2dd644:
    // 0x2dd644: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x2dd644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_2dd648:
    // 0x2dd648: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2dd648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2dd64c:
    // 0x2dd64c: 0x40f809  jalr        $v0
label_2dd650:
    if (ctx->pc == 0x2DD650u) {
        ctx->pc = 0x2DD654u;
        goto label_2dd654;
    }
    ctx->pc = 0x2DD64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DD654u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD64Cu, 0x2DD654u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DD654u;
label_2dd654:
    // 0x2dd654: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2dd654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dd658:
    // 0x2dd658: 0x8c6300bc  lw          $v1, 0xBC($v1)
    ctx->pc = 0x2dd658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_2dd65c:
    // 0x2dd65c: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x2dd65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_2dd660:
    // 0x2dd660: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2dd660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_2dd664:
    // 0x2dd664: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2dd668:
    if (ctx->pc == 0x2DD668u) {
        ctx->pc = 0x2DD668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD664u;
        // 0x2dd668: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD66Cu;
        goto label_2dd66c;
    }
    ctx->pc = 0x2DD664u;
    {
        const bool branch_taken_0x2dd664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD664u;
        // 0x2dd668: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd664) {
            ctx->pc = 0x2DD67Cu;
            goto label_2dd67c;
        }
    }
    ctx->pc = 0x2DD66Cu;
label_2dd66c:
    // 0x2dd66c: 0x30621001  andi        $v0, $v1, 0x1001
    ctx->pc = 0x2dd66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4097);
label_2dd670:
    // 0x2dd670: 0x38421001  xori        $v0, $v0, 0x1001
    ctx->pc = 0x2dd670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4097);
label_2dd674:
    // 0x2dd674: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
label_2dd678:
    if (ctx->pc == 0x2DD678u) {
        ctx->pc = 0x2DD678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD674u;
        // 0x2dd678: 0xc6000044  lwc1        $f0, 0x44($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD67Cu;
        goto label_2dd67c;
    }
    ctx->pc = 0x2DD674u;
    {
        const bool branch_taken_0x2dd674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd674) {
            ctx->pc = 0x2DD678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD674u;
            // 0x2dd678: 0xc6000044  lwc1        $f0, 0x44($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD6F8u;
            goto label_2dd6f8;
        }
    }
    ctx->pc = 0x2DD67Cu;
label_2dd67c:
    // 0x2dd67c: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x2dd67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd680:
    // 0x2dd680: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dd680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dd684:
    // 0x2dd684: 0x0  nop
    ctx->pc = 0x2dd684u;
    // NOP
label_2dd688:
    // 0x2dd688: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2dd688u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dd68c:
    // 0x2dd68c: 0x0  nop
    ctx->pc = 0x2dd68cu;
    // NOP
label_2dd690:
    // 0x2dd690: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2dd694:
    if (ctx->pc == 0x2DD694u) {
        ctx->pc = 0x2DD698u;
        goto label_2dd698;
    }
    ctx->pc = 0x2DD690u;
    {
        const bool branch_taken_0x2dd690 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd690) {
            ctx->pc = 0x2DD6ACu;
            goto label_2dd6ac;
        }
    }
    ctx->pc = 0x2DD698u;
label_2dd698:
    // 0x2dd698: 0xc0fb7fe  jal         func_3EDFF8
label_2dd69c:
    if (ctx->pc == 0x2DD69Cu) {
        ctx->pc = 0x2DD69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD698u;
        // 0x2dd69c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD6A0u;
        goto label_2dd6a0;
    }
    ctx->pc = 0x2DD698u;
    SET_GPR_U32(ctx, 31, 0x2DD6A0u);
    ctx->pc = 0x2DD69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD698u;
    // 0x2dd69c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDFF8u, 0x2DD698u, 0x2DD6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD6A0u;
label_2dd6a0:
    // 0x2dd6a0: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x2dd6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd6a4:
    // 0x2dd6a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2dd6a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2dd6a8:
    // 0x2dd6a8: 0xe601004c  swc1        $f1, 0x4C($s0)
    ctx->pc = 0x2dd6a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
label_2dd6ac:
    // 0x2dd6ac: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2dd6acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_2dd6b0:
    // 0x2dd6b0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2dd6b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_2dd6b4:
    // 0x2dd6b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dd6b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dd6b8:
    // 0x2dd6b8: 0x0  nop
    ctx->pc = 0x2dd6b8u;
    // NOP
label_2dd6bc:
    // 0x2dd6bc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2dd6bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dd6c0:
    // 0x2dd6c0: 0x0  nop
    ctx->pc = 0x2dd6c0u;
    // NOP
label_2dd6c4:
    // 0x2dd6c4: 0x45000026  bc1f        . + 4 + (0x26 << 2)
label_2dd6c8:
    if (ctx->pc == 0x2DD6C8u) {
        ctx->pc = 0x2DD6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD6C4u;
        // 0x2dd6c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD6CCu;
        goto label_2dd6cc;
    }
    ctx->pc = 0x2DD6C4u;
    {
        const bool branch_taken_0x2dd6c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DD6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD6C4u;
        // 0x2dd6c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd6c4) {
            ctx->pc = 0x2DD760u;
            goto label_2dd760;
        }
    }
    ctx->pc = 0x2DD6CCu;
label_2dd6cc:
    // 0x2dd6cc: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x2dd6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd6d0:
    // 0x2dd6d0: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x2dd6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
label_2dd6d4:
    // 0x2dd6d4: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2dd6d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_2dd6d8:
    // 0x2dd6d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dd6d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dd6dc:
    // 0x2dd6dc: 0x0  nop
    ctx->pc = 0x2dd6dcu;
    // NOP
label_2dd6e0:
    // 0x2dd6e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dd6e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dd6e4:
    // 0x2dd6e4: 0x0  nop
    ctx->pc = 0x2dd6e4u;
    // NOP
label_2dd6e8:
    // 0x2dd6e8: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_2dd6ec:
    if (ctx->pc == 0x2DD6ECu) {
        ctx->pc = 0x2DD6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD6E8u;
        // 0x2dd6ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD6F0u;
        goto label_2dd6f0;
    }
    ctx->pc = 0x2DD6E8u;
    {
        const bool branch_taken_0x2dd6e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DD6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD6E8u;
        // 0x2dd6ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd6e8) {
            ctx->pc = 0x2DD764u;
            goto label_2dd764;
        }
    }
    ctx->pc = 0x2DD6F0u;
label_2dd6f0:
    // 0x2dd6f0: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2dd6f4:
    if (ctx->pc == 0x2DD6F4u) {
        ctx->pc = 0x2DD6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD6F0u;
        // 0x2dd6f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD6F8u;
        goto label_2dd6f8;
    }
    ctx->pc = 0x2DD6F0u;
    {
        const bool branch_taken_0x2dd6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD6F0u;
        // 0x2dd6f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd6f0) {
            ctx->pc = 0x2DD764u;
            goto label_2dd764;
        }
    }
    ctx->pc = 0x2DD6F8u;
label_2dd6f8:
    // 0x2dd6f8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2dd6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2dd6fc:
    // 0x2dd6fc: 0x92020048  lbu         $v0, 0x48($s0)
    ctx->pc = 0x2dd6fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
label_2dd700:
    // 0x2dd700: 0x46140040  add.s       $f1, $f0, $f20
    ctx->pc = 0x2dd700u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2dd704:
    // 0x2dd704: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dd704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2dd708:
    // 0x2dd708: 0xa2020048  sb          $v0, 0x48($s0)
    ctx->pc = 0x2dd708u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 2));
label_2dd70c:
    // 0x2dd70c: 0xe6010044  swc1        $f1, 0x44($s0)
    ctx->pc = 0x2dd70cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_2dd710:
    // 0x2dd710: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2dd710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2dd714:
    // 0x2dd714: 0x8c62b658  lw          $v0, -0x49A8($v1)
    ctx->pc = 0x2dd714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948440)));
label_2dd718:
    // 0x2dd718: 0x14820011  bne         $a0, $v0, . + 4 + (0x11 << 2)
label_2dd71c:
    if (ctx->pc == 0x2DD71Cu) {
        ctx->pc = 0x2DD71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD718u;
        // 0x2dd71c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD720u;
        goto label_2dd720;
    }
    ctx->pc = 0x2DD718u;
    {
        const bool branch_taken_0x2dd718 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DD71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD718u;
        // 0x2dd71c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd718) {
            ctx->pc = 0x2DD760u;
            goto label_2dd760;
        }
    }
    ctx->pc = 0x2DD720u;
label_2dd720:
    // 0x2dd720: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2dd720u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dd724:
    // 0x2dd724: 0x0  nop
    ctx->pc = 0x2dd724u;
    // NOP
label_2dd728:
    // 0x2dd728: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2dd728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2dd72c:
    // 0x2dd72c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2dd72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2dd730:
    // 0x2dd730: 0x0  nop
    ctx->pc = 0x2dd730u;
    // NOP
label_2dd734:
    // 0x2dd734: 0x0  nop
    ctx->pc = 0x2dd734u;
    // NOP
label_2dd738:
    // 0x2dd738: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2dd738u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2dd73c:
    // 0x2dd73c: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x2dd73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_2dd740:
    // 0x2dd740: 0xc441b654  lwc1        $f1, -0x49AC($v0)
    ctx->pc = 0x2dd740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd744:
    // 0x2dd744: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2dd744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dd748:
    // 0x2dd748: 0x0  nop
    ctx->pc = 0x2dd748u;
    // NOP
label_2dd74c:
    // 0x2dd74c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_2dd750:
    if (ctx->pc == 0x2DD750u) {
        ctx->pc = 0x2DD750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD74Cu;
        // 0x2dd750: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD754u;
        goto label_2dd754;
    }
    ctx->pc = 0x2DD74Cu;
    {
        const bool branch_taken_0x2dd74c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DD750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD74Cu;
        // 0x2dd750: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd74c) {
            ctx->pc = 0x2DD760u;
            goto label_2dd760;
        }
    }
    ctx->pc = 0x2DD754u;
label_2dd754:
    // 0x2dd754: 0xa2000048  sb          $zero, 0x48($s0)
    ctx->pc = 0x2dd754u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 0));
label_2dd758:
    // 0x2dd758: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2dd758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_2dd75c:
    // 0x2dd75c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dd75cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd760:
    // 0x2dd760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dd760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dd764:
    // 0x2dd764: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2dd764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2dd768:
    // 0x2dd768: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2dd768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2dd76c:
    // 0x2dd76c: 0x3e00008  jr          $ra
label_2dd770:
    if (ctx->pc == 0x2DD770u) {
        ctx->pc = 0x2DD770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD76Cu;
        // 0x2dd770: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD774u;
        goto label_2dd774;
    }
    ctx->pc = 0x2DD76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD76Cu;
        // 0x2dd770: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD774u;
label_2dd774:
    // 0x2dd774: 0x0  nop
    ctx->pc = 0x2dd774u;
    // NOP
    ctx->pc = 0x2dd778u;
}
