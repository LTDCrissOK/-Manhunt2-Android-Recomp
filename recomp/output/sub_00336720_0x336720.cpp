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

// Function: sub_00336720
// Address: 0x336720 - 0x336898
void sub_00336720_0x336720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336720_0x336720");
#endif

    switch (ctx->pc) {
        case 0x336720u: goto label_336720;
        case 0x336724u: goto label_336724;
        case 0x336728u: goto label_336728;
        case 0x33672cu: goto label_33672c;
        case 0x336730u: goto label_336730;
        case 0x336734u: goto label_336734;
        case 0x336738u: goto label_336738;
        case 0x33673cu: goto label_33673c;
        case 0x336740u: goto label_336740;
        case 0x336744u: goto label_336744;
        case 0x336748u: goto label_336748;
        case 0x33674cu: goto label_33674c;
        case 0x336750u: goto label_336750;
        case 0x336754u: goto label_336754;
        case 0x336758u: goto label_336758;
        case 0x33675cu: goto label_33675c;
        case 0x336760u: goto label_336760;
        case 0x336764u: goto label_336764;
        case 0x336768u: goto label_336768;
        case 0x33676cu: goto label_33676c;
        case 0x336770u: goto label_336770;
        case 0x336774u: goto label_336774;
        case 0x336778u: goto label_336778;
        case 0x33677cu: goto label_33677c;
        case 0x336780u: goto label_336780;
        case 0x336784u: goto label_336784;
        case 0x336788u: goto label_336788;
        case 0x33678cu: goto label_33678c;
        case 0x336790u: goto label_336790;
        case 0x336794u: goto label_336794;
        case 0x336798u: goto label_336798;
        case 0x33679cu: goto label_33679c;
        case 0x3367a0u: goto label_3367a0;
        case 0x3367a4u: goto label_3367a4;
        case 0x3367a8u: goto label_3367a8;
        case 0x3367acu: goto label_3367ac;
        case 0x3367b0u: goto label_3367b0;
        case 0x3367b4u: goto label_3367b4;
        case 0x3367b8u: goto label_3367b8;
        case 0x3367bcu: goto label_3367bc;
        case 0x3367c0u: goto label_3367c0;
        case 0x3367c4u: goto label_3367c4;
        case 0x3367c8u: goto label_3367c8;
        case 0x3367ccu: goto label_3367cc;
        case 0x3367d0u: goto label_3367d0;
        case 0x3367d4u: goto label_3367d4;
        case 0x3367d8u: goto label_3367d8;
        case 0x3367dcu: goto label_3367dc;
        case 0x3367e0u: goto label_3367e0;
        case 0x3367e4u: goto label_3367e4;
        case 0x3367e8u: goto label_3367e8;
        case 0x3367ecu: goto label_3367ec;
        case 0x3367f0u: goto label_3367f0;
        case 0x3367f4u: goto label_3367f4;
        case 0x3367f8u: goto label_3367f8;
        case 0x3367fcu: goto label_3367fc;
        case 0x336800u: goto label_336800;
        case 0x336804u: goto label_336804;
        case 0x336808u: goto label_336808;
        case 0x33680cu: goto label_33680c;
        case 0x336810u: goto label_336810;
        case 0x336814u: goto label_336814;
        case 0x336818u: goto label_336818;
        case 0x33681cu: goto label_33681c;
        case 0x336820u: goto label_336820;
        case 0x336824u: goto label_336824;
        case 0x336828u: goto label_336828;
        case 0x33682cu: goto label_33682c;
        case 0x336830u: goto label_336830;
        case 0x336834u: goto label_336834;
        case 0x336838u: goto label_336838;
        case 0x33683cu: goto label_33683c;
        case 0x336840u: goto label_336840;
        case 0x336844u: goto label_336844;
        case 0x336848u: goto label_336848;
        case 0x33684cu: goto label_33684c;
        case 0x336850u: goto label_336850;
        case 0x336854u: goto label_336854;
        case 0x336858u: goto label_336858;
        case 0x33685cu: goto label_33685c;
        case 0x336860u: goto label_336860;
        case 0x336864u: goto label_336864;
        case 0x336868u: goto label_336868;
        case 0x33686cu: goto label_33686c;
        case 0x336870u: goto label_336870;
        case 0x336874u: goto label_336874;
        case 0x336878u: goto label_336878;
        case 0x33687cu: goto label_33687c;
        case 0x336880u: goto label_336880;
        case 0x336884u: goto label_336884;
        case 0x336888u: goto label_336888;
        case 0x33688cu: goto label_33688c;
        case 0x336890u: goto label_336890;
        case 0x336894u: goto label_336894;
        default: break;
    }

    ctx->pc = 0x336720u;

label_336720:
    // 0x336720: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x336720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_336724:
    // 0x336724: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x336724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
label_336728:
    // 0x336728: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x336728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
label_33672c:
    // 0x33672c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x33672cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_336730:
    // 0x336730: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x336730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_336734:
    // 0x336734: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x336734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_336738:
    // 0x336738: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x336738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
label_33673c:
    // 0x33673c: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x33673cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_336740:
    // 0x336740: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x336740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_336744:
    // 0x336744: 0xc085d4e  jal         func_217538
label_336748:
    if (ctx->pc == 0x336748u) {
        ctx->pc = 0x336748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336744u;
        // 0x336748: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33674Cu;
        goto label_33674c;
    }
    ctx->pc = 0x336744u;
    SET_GPR_U32(ctx, 31, 0x33674Cu);
    ctx->pc = 0x336748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336744u;
    // 0x336748: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217538u, 0x336744u, 0x33674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33674Cu;
label_33674c:
    // 0x33674c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x33674cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_336750:
    // 0x336750: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
label_336754:
    if (ctx->pc == 0x336754u) {
        ctx->pc = 0x336758u;
        goto label_336758;
    }
    ctx->pc = 0x336750u;
    {
        const bool branch_taken_0x336750 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x336750) {
            ctx->pc = 0x33676Cu;
            goto label_33676c;
        }
    }
    ctx->pc = 0x336758u;
label_336758:
    // 0x336758: 0xc097110  jal         func_25C440
label_33675c:
    if (ctx->pc == 0x33675Cu) {
        ctx->pc = 0x33675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336758u;
        // 0x33675c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336760u;
        goto label_336760;
    }
    ctx->pc = 0x336758u;
    SET_GPR_U32(ctx, 31, 0x336760u);
    ctx->pc = 0x33675Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336758u;
    // 0x33675c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C440u, 0x336758u, 0x336760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336760u;
label_336760:
    // 0x336760: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x336760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_336764:
    // 0x336764: 0x12400042  beqz        $s2, . + 4 + (0x42 << 2)
label_336768:
    if (ctx->pc == 0x336768u) {
        ctx->pc = 0x336768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336764u;
        // 0x336768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33676Cu;
        goto label_33676c;
    }
    ctx->pc = 0x336764u;
    {
        const bool branch_taken_0x336764 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x336768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336764u;
        // 0x336768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336764) {
            ctx->pc = 0x336870u;
            goto label_336870;
        }
    }
    ctx->pc = 0x33676Cu;
label_33676c:
    // 0x33676c: 0xc085d4e  jal         func_217538
label_336770:
    if (ctx->pc == 0x336770u) {
        ctx->pc = 0x336770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33676Cu;
        // 0x336770: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336774u;
        goto label_336774;
    }
    ctx->pc = 0x33676Cu;
    SET_GPR_U32(ctx, 31, 0x336774u);
    ctx->pc = 0x336770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33676Cu;
    // 0x336770: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217538u, 0x33676Cu, 0x336774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336774u;
label_336774:
    // 0x336774: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x336774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_336778:
    // 0x336778: 0x1251001b  beq         $s2, $s1, . + 4 + (0x1B << 2)
label_33677c:
    if (ctx->pc == 0x33677Cu) {
        ctx->pc = 0x33677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336778u;
        // 0x33677c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336780u;
        goto label_336780;
    }
    ctx->pc = 0x336778u;
    {
        const bool branch_taken_0x336778 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x33677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336778u;
        // 0x33677c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336778) {
            ctx->pc = 0x3367E8u;
            goto label_3367e8;
        }
    }
    ctx->pc = 0x336780u;
label_336780:
    // 0x336780: 0xc0cd984  jal         func_336610
label_336784:
    if (ctx->pc == 0x336784u) {
        ctx->pc = 0x336784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336780u;
        // 0x336784: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336788u;
        goto label_336788;
    }
    ctx->pc = 0x336780u;
    SET_GPR_U32(ctx, 31, 0x336788u);
    ctx->pc = 0x336784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336780u;
    // 0x336784: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336610u, 0x336780u, 0x336788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336788u;
label_336788:
    // 0x336788: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x336788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33678c:
    // 0x33678c: 0xc0cd984  jal         func_336610
label_336790:
    if (ctx->pc == 0x336790u) {
        ctx->pc = 0x336790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33678Cu;
        // 0x336790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336794u;
        goto label_336794;
    }
    ctx->pc = 0x33678Cu;
    SET_GPR_U32(ctx, 31, 0x336794u);
    ctx->pc = 0x336790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33678Cu;
    // 0x336790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336610u, 0x33678Cu, 0x336794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336794u;
label_336794:
    // 0x336794: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_336798:
    if (ctx->pc == 0x336798u) {
        ctx->pc = 0x33679Cu;
        goto label_33679c;
    }
    ctx->pc = 0x336794u;
    {
        const bool branch_taken_0x336794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336794) {
            ctx->pc = 0x3367E0u;
            goto label_3367e0;
        }
    }
    ctx->pc = 0x33679Cu;
label_33679c:
    // 0x33679c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x33679cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3367a0:
    // 0x3367a0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3367a4:
    if (ctx->pc == 0x3367A4u) {
        ctx->pc = 0x3367A8u;
        goto label_3367a8;
    }
    ctx->pc = 0x3367A0u;
    {
        const bool branch_taken_0x3367a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3367a0) {
            ctx->pc = 0x3367E0u;
            goto label_3367e0;
        }
    }
    ctx->pc = 0x3367A8u;
label_3367a8:
    // 0x3367a8: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_3367ac:
    if (ctx->pc == 0x3367ACu) {
        ctx->pc = 0x3367B0u;
        goto label_3367b0;
    }
    ctx->pc = 0x3367A8u;
    {
        const bool branch_taken_0x3367a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3367a8) {
            ctx->pc = 0x3367F0u;
            goto label_3367f0;
        }
    }
    ctx->pc = 0x3367B0u;
label_3367b0:
    // 0x3367b0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3367b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3367b4:
    // 0x3367b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3367b8:
    if (ctx->pc == 0x3367B8u) {
        ctx->pc = 0x3367B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3367B4u;
        // 0x3367b8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3367BCu;
        goto label_3367bc;
    }
    ctx->pc = 0x3367B4u;
    {
        const bool branch_taken_0x3367b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3367B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3367B4u;
        // 0x3367b8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3367b4) {
            ctx->pc = 0x3367E8u;
            goto label_3367e8;
        }
    }
    ctx->pc = 0x3367BCu;
label_3367bc:
    // 0x3367bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3367bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3367c0:
    // 0x3367c0: 0xc0efab3  jal         func_3BEACC
label_3367c4:
    if (ctx->pc == 0x3367C4u) {
        ctx->pc = 0x3367C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3367C0u;
        // 0x3367c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3367C8u;
        goto label_3367c8;
    }
    ctx->pc = 0x3367C0u;
    SET_GPR_U32(ctx, 31, 0x3367C8u);
    ctx->pc = 0x3367C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3367C0u;
    // 0x3367c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3367C0u, 0x3367C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3367C8u;
label_3367c8:
    // 0x3367c8: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x3367c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
label_3367cc:
    // 0x3367cc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3367ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3367d0:
    // 0x3367d0: 0x24c65bc8  addiu       $a2, $a2, 0x5BC8
    ctx->pc = 0x3367d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23496));
label_3367d4:
    // 0x3367d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3367d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3367d8:
    // 0x3367d8: 0xc0efed0  jal         func_3BFB40
label_3367dc:
    if (ctx->pc == 0x3367DCu) {
        ctx->pc = 0x3367DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3367D8u;
        // 0x3367dc: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3367E0u;
        goto label_3367e0;
    }
    ctx->pc = 0x3367D8u;
    SET_GPR_U32(ctx, 31, 0x3367E0u);
    ctx->pc = 0x3367DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3367D8u;
    // 0x3367dc: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x3367D8u, 0x3367E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3367E0u;
label_3367e0:
    // 0x3367e0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_3367e4:
    if (ctx->pc == 0x3367E4u) {
        ctx->pc = 0x3367E8u;
        goto label_3367e8;
    }
    ctx->pc = 0x3367E0u;
    {
        const bool branch_taken_0x3367e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3367e0) {
            ctx->pc = 0x3367F0u;
            goto label_3367f0;
        }
    }
    ctx->pc = 0x3367E8u;
label_3367e8:
    // 0x3367e8: 0x10000021  b           . + 4 + (0x21 << 2)
label_3367ec:
    if (ctx->pc == 0x3367ECu) {
        ctx->pc = 0x3367ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3367E8u;
        // 0x3367ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3367F0u;
        goto label_3367f0;
    }
    ctx->pc = 0x3367E8u;
    {
        const bool branch_taken_0x3367e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3367ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3367E8u;
        // 0x3367ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3367e8) {
            ctx->pc = 0x336870u;
            goto label_336870;
        }
    }
    ctx->pc = 0x3367F0u;
label_3367f0:
    // 0x3367f0: 0xc0cd20c  jal         func_334830
label_3367f4:
    if (ctx->pc == 0x3367F4u) {
        ctx->pc = 0x3367F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3367F0u;
        // 0x3367f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3367F8u;
        goto label_3367f8;
    }
    ctx->pc = 0x3367F0u;
    SET_GPR_U32(ctx, 31, 0x3367F8u);
    ctx->pc = 0x3367F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3367F0u;
    // 0x3367f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334830u, 0x3367F0u, 0x3367F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3367F8u;
label_3367f8:
    // 0x3367f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3367f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3367fc:
    // 0x3367fc: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_336800:
    if (ctx->pc == 0x336800u) {
        ctx->pc = 0x336800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3367FCu;
        // 0x336800: 0x24050210  addiu       $a1, $zero, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336804u;
        goto label_336804;
    }
    ctx->pc = 0x3367FCu;
    {
        const bool branch_taken_0x3367fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x336800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3367FCu;
        // 0x336800: 0x24050210  addiu       $a1, $zero, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3367fc) {
            ctx->pc = 0x33686Cu;
            goto label_33686c;
        }
    }
    ctx->pc = 0x336804u;
label_336804:
    // 0x336804: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x336804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
label_336808:
    // 0x336808: 0xc0b2af0  jal         func_2CABC0
label_33680c:
    if (ctx->pc == 0x33680Cu) {
        ctx->pc = 0x33680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336808u;
        // 0x33680c: 0x24846e80  addiu       $a0, $a0, 0x6E80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336810u;
        goto label_336810;
    }
    ctx->pc = 0x336808u;
    SET_GPR_U32(ctx, 31, 0x336810u);
    ctx->pc = 0x33680Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336808u;
    // 0x33680c: 0x24846e80  addiu       $a0, $a0, 0x6E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x336808u, 0x336810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336810u;
label_336810:
    // 0x336810: 0xc0cd4b8  jal         func_3352E0
label_336814:
    if (ctx->pc == 0x336814u) {
        ctx->pc = 0x336814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336810u;
        // 0x336814: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336818u;
        goto label_336818;
    }
    ctx->pc = 0x336810u;
    SET_GPR_U32(ctx, 31, 0x336818u);
    ctx->pc = 0x336814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336810u;
    // 0x336814: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3352E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3352E0u, 0x336810u, 0x336818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336818u;
label_336818:
    // 0x336818: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x336818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33681c:
    // 0x33681c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33681cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_336820:
    // 0x336820: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x336820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
label_336824:
    // 0x336824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x336824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_336828:
    // 0x336828: 0xc0cd574  jal         func_3355D0
label_33682c:
    if (ctx->pc == 0x33682Cu) {
        ctx->pc = 0x33682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336828u;
        // 0x33682c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336830u;
        goto label_336830;
    }
    ctx->pc = 0x336828u;
    SET_GPR_U32(ctx, 31, 0x336830u);
    ctx->pc = 0x33682Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336828u;
    // 0x33682c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3355D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3355D0u, 0x336828u, 0x336830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336830u;
label_336830:
    // 0x336830: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x336830u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_336834:
    // 0x336834: 0x1680000a  bnez        $s4, . + 4 + (0xA << 2)
label_336838:
    if (ctx->pc == 0x336838u) {
        ctx->pc = 0x33683Cu;
        goto label_33683c;
    }
    ctx->pc = 0x336834u;
    {
        const bool branch_taken_0x336834 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x336834) {
            ctx->pc = 0x336860u;
            goto label_336860;
        }
    }
    ctx->pc = 0x33683Cu;
label_33683c:
    // 0x33683c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_336840:
    if (ctx->pc == 0x336840u) {
        ctx->pc = 0x336840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33683Cu;
        // 0x336840: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336844u;
        goto label_336844;
    }
    ctx->pc = 0x33683Cu;
    {
        const bool branch_taken_0x33683c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x336840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33683Cu;
        // 0x336840: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33683c) {
            ctx->pc = 0x336870u;
            goto label_336870;
        }
    }
    ctx->pc = 0x336844u;
label_336844:
    // 0x336844: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x336844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_336848:
    // 0x336848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x336848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33684c:
    // 0x33684c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x33684cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_336850:
    // 0x336850: 0x40f809  jalr        $v0
label_336854:
    if (ctx->pc == 0x336854u) {
        ctx->pc = 0x336854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336850u;
        // 0x336854: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336858u;
        goto label_336858;
    }
    ctx->pc = 0x336850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x336858u);
        ctx->pc = 0x336854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336850u;
        // 0x336854: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336850u, 0x336858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x336858u;
label_336858:
    // 0x336858: 0x10000005  b           . + 4 + (0x5 << 2)
label_33685c:
    if (ctx->pc == 0x33685Cu) {
        ctx->pc = 0x33685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336858u;
        // 0x33685c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336860u;
        goto label_336860;
    }
    ctx->pc = 0x336858u;
    {
        const bool branch_taken_0x336858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336858u;
        // 0x33685c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336858) {
            ctx->pc = 0x336870u;
            goto label_336870;
        }
    }
    ctx->pc = 0x336860u;
label_336860:
    // 0x336860: 0xc0cd964  jal         func_336590
label_336864:
    if (ctx->pc == 0x336864u) {
        ctx->pc = 0x336864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336860u;
        // 0x336864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336868u;
        goto label_336868;
    }
    ctx->pc = 0x336860u;
    SET_GPR_U32(ctx, 31, 0x336868u);
    ctx->pc = 0x336864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336860u;
    // 0x336864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336590u, 0x336860u, 0x336868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336868u;
label_336868:
    // 0x336868: 0xae0201b8  sw          $v0, 0x1B8($s0)
    ctx->pc = 0x336868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
label_33686c:
    // 0x33686c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x33686cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_336870:
    // 0x336870: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x336870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_336874:
    // 0x336874: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x336874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_336878:
    // 0x336878: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x336878u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_33687c:
    // 0x33687c: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x33687cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_336880:
    // 0x336880: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x336880u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_336884:
    // 0x336884: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x336884u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_336888:
    // 0x336888: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x336888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_33688c:
    // 0x33688c: 0x3e00008  jr          $ra
label_336890:
    if (ctx->pc == 0x336890u) {
        ctx->pc = 0x336890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33688Cu;
        // 0x336890: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336894u;
        goto label_336894;
    }
    ctx->pc = 0x33688Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33688Cu;
        // 0x336890: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33688Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336894u;
label_336894:
    // 0x336894: 0x0  nop
    ctx->pc = 0x336894u;
    // NOP
    ctx->pc = 0x336898u;
}
