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

// Function: sub_00381708
// Address: 0x381708 - 0x381810
void sub_00381708_0x381708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381708_0x381708");
#endif

    switch (ctx->pc) {
        case 0x381708u: goto label_381708;
        case 0x38170cu: goto label_38170c;
        case 0x381710u: goto label_381710;
        case 0x381714u: goto label_381714;
        case 0x381718u: goto label_381718;
        case 0x38171cu: goto label_38171c;
        case 0x381720u: goto label_381720;
        case 0x381724u: goto label_381724;
        case 0x381728u: goto label_381728;
        case 0x38172cu: goto label_38172c;
        case 0x381730u: goto label_381730;
        case 0x381734u: goto label_381734;
        case 0x381738u: goto label_381738;
        case 0x38173cu: goto label_38173c;
        case 0x381740u: goto label_381740;
        case 0x381744u: goto label_381744;
        case 0x381748u: goto label_381748;
        case 0x38174cu: goto label_38174c;
        case 0x381750u: goto label_381750;
        case 0x381754u: goto label_381754;
        case 0x381758u: goto label_381758;
        case 0x38175cu: goto label_38175c;
        case 0x381760u: goto label_381760;
        case 0x381764u: goto label_381764;
        case 0x381768u: goto label_381768;
        case 0x38176cu: goto label_38176c;
        case 0x381770u: goto label_381770;
        case 0x381774u: goto label_381774;
        case 0x381778u: goto label_381778;
        case 0x38177cu: goto label_38177c;
        case 0x381780u: goto label_381780;
        case 0x381784u: goto label_381784;
        case 0x381788u: goto label_381788;
        case 0x38178cu: goto label_38178c;
        case 0x381790u: goto label_381790;
        case 0x381794u: goto label_381794;
        case 0x381798u: goto label_381798;
        case 0x38179cu: goto label_38179c;
        case 0x3817a0u: goto label_3817a0;
        case 0x3817a4u: goto label_3817a4;
        case 0x3817a8u: goto label_3817a8;
        case 0x3817acu: goto label_3817ac;
        case 0x3817b0u: goto label_3817b0;
        case 0x3817b4u: goto label_3817b4;
        case 0x3817b8u: goto label_3817b8;
        case 0x3817bcu: goto label_3817bc;
        case 0x3817c0u: goto label_3817c0;
        case 0x3817c4u: goto label_3817c4;
        case 0x3817c8u: goto label_3817c8;
        case 0x3817ccu: goto label_3817cc;
        case 0x3817d0u: goto label_3817d0;
        case 0x3817d4u: goto label_3817d4;
        case 0x3817d8u: goto label_3817d8;
        case 0x3817dcu: goto label_3817dc;
        case 0x3817e0u: goto label_3817e0;
        case 0x3817e4u: goto label_3817e4;
        case 0x3817e8u: goto label_3817e8;
        case 0x3817ecu: goto label_3817ec;
        case 0x3817f0u: goto label_3817f0;
        case 0x3817f4u: goto label_3817f4;
        case 0x3817f8u: goto label_3817f8;
        case 0x3817fcu: goto label_3817fc;
        case 0x381800u: goto label_381800;
        case 0x381804u: goto label_381804;
        case 0x381808u: goto label_381808;
        case 0x38180cu: goto label_38180c;
        default: break;
    }

    ctx->pc = 0x381708u;

label_381708:
    // 0x381708: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x381708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_38170c:
    // 0x38170c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x38170cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_381710:
    // 0x381710: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x381710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_381714:
    // 0x381714: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x381714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_381718:
    // 0x381718: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x381718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38171c:
    // 0x38171c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x38171cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_381720:
    // 0x381720: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x381720u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_381724:
    // 0x381724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x381724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_381728:
    // 0x381728: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x381728u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38172c:
    // 0x38172c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38172cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_381730:
    // 0x381730: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x381730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_381734:
    // 0x381734: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x381734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_381738:
    // 0x381738: 0x40f809  jalr        $v0
label_38173c:
    if (ctx->pc == 0x38173Cu) {
        ctx->pc = 0x38173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381738u;
        // 0x38173c: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381740u;
        goto label_381740;
    }
    ctx->pc = 0x381738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x381740u);
        ctx->pc = 0x38173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381738u;
        // 0x38173c: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381738u, 0x381740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x381740u;
label_381740:
    // 0x381740: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x381740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_381744:
    // 0x381744: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
label_381748:
    if (ctx->pc == 0x381748u) {
        ctx->pc = 0x381748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381744u;
        // 0x381748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38174Cu;
        goto label_38174c;
    }
    ctx->pc = 0x381744u;
    {
        const bool branch_taken_0x381744 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x381748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381744u;
        // 0x381748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381744) {
            ctx->pc = 0x3817F0u;
            goto label_3817f0;
        }
    }
    ctx->pc = 0x38174Cu;
label_38174c:
    // 0x38174c: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x38174cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_381750:
    // 0x381750: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x381750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_381754:
    // 0x381754: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x381754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_381758:
    // 0x381758: 0x40f809  jalr        $v0
label_38175c:
    if (ctx->pc == 0x38175Cu) {
        ctx->pc = 0x38175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381758u;
        // 0x38175c: 0x240605a0  addiu       $a2, $zero, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381760u;
        goto label_381760;
    }
    ctx->pc = 0x381758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x381760u);
        ctx->pc = 0x38175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381758u;
        // 0x38175c: 0x240605a0  addiu       $a2, $zero, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1440));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381758u, 0x381760u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x381760u;
label_381760:
    // 0x381760: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_381764:
    if (ctx->pc == 0x381764u) {
        ctx->pc = 0x381764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381760u;
        // 0x381764: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381768u;
        goto label_381768;
    }
    ctx->pc = 0x381760u;
    {
        const bool branch_taken_0x381760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381760u;
        // 0x381764: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381760) {
            ctx->pc = 0x381798u;
            goto label_381798;
        }
    }
    ctx->pc = 0x381768u;
label_381768:
    // 0x381768: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x381768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_38176c:
    // 0x38176c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38176cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_381770:
    // 0x381770: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x381770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_381774:
    // 0x381774: 0x40f809  jalr        $v0
label_381778:
    if (ctx->pc == 0x381778u) {
        ctx->pc = 0x381778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381774u;
        // 0x381778: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38177Cu;
        goto label_38177c;
    }
    ctx->pc = 0x381774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38177Cu);
        ctx->pc = 0x381778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381774u;
        // 0x381778: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381774u, 0x38177Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38177Cu;
label_38177c:
    // 0x38177c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38177cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_381780:
    // 0x381780: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_381784:
    if (ctx->pc == 0x381784u) {
        ctx->pc = 0x381784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381780u;
        // 0x381784: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381788u;
        goto label_381788;
    }
    ctx->pc = 0x381780u;
    {
        const bool branch_taken_0x381780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x381784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381780u;
        // 0x381784: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381780) {
            ctx->pc = 0x3817B0u;
            goto label_3817b0;
        }
    }
    ctx->pc = 0x381788u;
label_381788:
    // 0x381788: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x381788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_38178c:
    // 0x38178c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x38178cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_381790:
    // 0x381790: 0x40f809  jalr        $v0
label_381794:
    if (ctx->pc == 0x381794u) {
        ctx->pc = 0x381794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381790u;
        // 0x381794: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381798u;
        goto label_381798;
    }
    ctx->pc = 0x381790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x381798u);
        ctx->pc = 0x381794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381790u;
        // 0x381794: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381790u, 0x381798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x381798u;
label_381798:
    // 0x381798: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x381798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_38179c:
    // 0x38179c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38179cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3817a0:
    // 0x3817a0: 0x40f809  jalr        $v0
label_3817a4:
    if (ctx->pc == 0x3817A4u) {
        ctx->pc = 0x3817A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3817A0u;
        // 0x3817a4: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3817A8u;
        goto label_3817a8;
    }
    ctx->pc = 0x3817A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3817A8u);
        ctx->pc = 0x3817A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3817A0u;
        // 0x3817a4: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3817A0u, 0x3817A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3817A8u;
label_3817a8:
    // 0x3817a8: 0x10000011  b           . + 4 + (0x11 << 2)
label_3817ac:
    if (ctx->pc == 0x3817ACu) {
        ctx->pc = 0x3817ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3817A8u;
        // 0x3817ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3817B0u;
        goto label_3817b0;
    }
    ctx->pc = 0x3817A8u;
    {
        const bool branch_taken_0x3817a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3817ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3817A8u;
        // 0x3817ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3817a8) {
            ctx->pc = 0x3817F0u;
            goto label_3817f0;
        }
    }
    ctx->pc = 0x3817B0u;
label_3817b0:
    // 0x3817b0: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x3817b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_3817b4:
    // 0x3817b4: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x3817b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_3817b8:
    // 0x3817b8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x3817b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_3817bc:
    // 0x3817bc: 0xae12003c  sw          $s2, 0x3C($s0)
    ctx->pc = 0x3817bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 18));
label_3817c0:
    // 0x3817c0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3817c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3817c4:
    // 0x3817c4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3817c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_3817c8:
    // 0x3817c8: 0xfe000020  sd          $zero, 0x20($s0)
    ctx->pc = 0x3817c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 0));
label_3817cc:
    // 0x3817cc: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_3817d0:
    if (ctx->pc == 0x3817D0u) {
        ctx->pc = 0x3817D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3817CCu;
        // 0x3817d0: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3817D4u;
        goto label_3817d4;
    }
    ctx->pc = 0x3817CCu;
    {
        const bool branch_taken_0x3817cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3817D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3817CCu;
        // 0x3817d0: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3817cc) {
            ctx->pc = 0x3817ECu;
            goto label_3817ec;
        }
    }
    ctx->pc = 0x3817D4u;
label_3817d4:
    // 0x3817d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3817d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3817d8:
    // 0x3817d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3817d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3817dc:
    // 0x3817dc: 0x240f809  jalr        $s2
label_3817e0:
    if (ctx->pc == 0x3817E0u) {
        ctx->pc = 0x3817E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3817DCu;
        // 0x3817e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3817E4u;
        goto label_3817e4;
    }
    ctx->pc = 0x3817DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x3817E4u);
        ctx->pc = 0x3817E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3817DCu;
        // 0x3817e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3817DCu, 0x3817E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3817E4u;
label_3817e4:
    // 0x3817e4: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x3817e4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
label_3817e8:
    // 0x3817e8: 0xfe220038  sd          $v0, 0x38($s1)
    ctx->pc = 0x3817e8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 2));
label_3817ec:
    // 0x3817ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3817ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3817f0:
    // 0x3817f0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3817f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3817f4:
    // 0x3817f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3817f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3817f8:
    // 0x3817f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3817f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3817fc:
    // 0x3817fc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3817fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_381800:
    // 0x381800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x381800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_381804:
    // 0x381804: 0x3e00008  jr          $ra
label_381808:
    if (ctx->pc == 0x381808u) {
        ctx->pc = 0x381808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381804u;
        // 0x381808: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38180Cu;
        goto label_38180c;
    }
    ctx->pc = 0x381804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381804u;
        // 0x381808: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38180Cu;
label_38180c:
    // 0x38180c: 0x0  nop
    ctx->pc = 0x38180cu;
    // NOP
    ctx->pc = 0x381810u;
}
