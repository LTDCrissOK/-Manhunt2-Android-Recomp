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

// Function: sub_0018F628
// Address: 0x18f628 - 0x18f958
void sub_0018F628_0x18f628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F628_0x18f628");
#endif

    switch (ctx->pc) {
        case 0x18f628u: goto label_18f628;
        case 0x18f62cu: goto label_18f62c;
        case 0x18f630u: goto label_18f630;
        case 0x18f634u: goto label_18f634;
        case 0x18f638u: goto label_18f638;
        case 0x18f63cu: goto label_18f63c;
        case 0x18f640u: goto label_18f640;
        case 0x18f644u: goto label_18f644;
        case 0x18f648u: goto label_18f648;
        case 0x18f64cu: goto label_18f64c;
        case 0x18f650u: goto label_18f650;
        case 0x18f654u: goto label_18f654;
        case 0x18f658u: goto label_18f658;
        case 0x18f65cu: goto label_18f65c;
        case 0x18f660u: goto label_18f660;
        case 0x18f664u: goto label_18f664;
        case 0x18f668u: goto label_18f668;
        case 0x18f66cu: goto label_18f66c;
        case 0x18f670u: goto label_18f670;
        case 0x18f674u: goto label_18f674;
        case 0x18f678u: goto label_18f678;
        case 0x18f67cu: goto label_18f67c;
        case 0x18f680u: goto label_18f680;
        case 0x18f684u: goto label_18f684;
        case 0x18f688u: goto label_18f688;
        case 0x18f68cu: goto label_18f68c;
        case 0x18f690u: goto label_18f690;
        case 0x18f694u: goto label_18f694;
        case 0x18f698u: goto label_18f698;
        case 0x18f69cu: goto label_18f69c;
        case 0x18f6a0u: goto label_18f6a0;
        case 0x18f6a4u: goto label_18f6a4;
        case 0x18f6a8u: goto label_18f6a8;
        case 0x18f6acu: goto label_18f6ac;
        case 0x18f6b0u: goto label_18f6b0;
        case 0x18f6b4u: goto label_18f6b4;
        case 0x18f6b8u: goto label_18f6b8;
        case 0x18f6bcu: goto label_18f6bc;
        case 0x18f6c0u: goto label_18f6c0;
        case 0x18f6c4u: goto label_18f6c4;
        case 0x18f6c8u: goto label_18f6c8;
        case 0x18f6ccu: goto label_18f6cc;
        case 0x18f6d0u: goto label_18f6d0;
        case 0x18f6d4u: goto label_18f6d4;
        case 0x18f6d8u: goto label_18f6d8;
        case 0x18f6dcu: goto label_18f6dc;
        case 0x18f6e0u: goto label_18f6e0;
        case 0x18f6e4u: goto label_18f6e4;
        case 0x18f6e8u: goto label_18f6e8;
        case 0x18f6ecu: goto label_18f6ec;
        case 0x18f6f0u: goto label_18f6f0;
        case 0x18f6f4u: goto label_18f6f4;
        case 0x18f6f8u: goto label_18f6f8;
        case 0x18f6fcu: goto label_18f6fc;
        case 0x18f700u: goto label_18f700;
        case 0x18f704u: goto label_18f704;
        case 0x18f708u: goto label_18f708;
        case 0x18f70cu: goto label_18f70c;
        case 0x18f710u: goto label_18f710;
        case 0x18f714u: goto label_18f714;
        case 0x18f718u: goto label_18f718;
        case 0x18f71cu: goto label_18f71c;
        case 0x18f720u: goto label_18f720;
        case 0x18f724u: goto label_18f724;
        case 0x18f728u: goto label_18f728;
        case 0x18f72cu: goto label_18f72c;
        case 0x18f730u: goto label_18f730;
        case 0x18f734u: goto label_18f734;
        case 0x18f738u: goto label_18f738;
        case 0x18f73cu: goto label_18f73c;
        case 0x18f740u: goto label_18f740;
        case 0x18f744u: goto label_18f744;
        case 0x18f748u: goto label_18f748;
        case 0x18f74cu: goto label_18f74c;
        case 0x18f750u: goto label_18f750;
        case 0x18f754u: goto label_18f754;
        case 0x18f758u: goto label_18f758;
        case 0x18f75cu: goto label_18f75c;
        case 0x18f760u: goto label_18f760;
        case 0x18f764u: goto label_18f764;
        case 0x18f768u: goto label_18f768;
        case 0x18f76cu: goto label_18f76c;
        case 0x18f770u: goto label_18f770;
        case 0x18f774u: goto label_18f774;
        case 0x18f778u: goto label_18f778;
        case 0x18f77cu: goto label_18f77c;
        case 0x18f780u: goto label_18f780;
        case 0x18f784u: goto label_18f784;
        case 0x18f788u: goto label_18f788;
        case 0x18f78cu: goto label_18f78c;
        case 0x18f790u: goto label_18f790;
        case 0x18f794u: goto label_18f794;
        case 0x18f798u: goto label_18f798;
        case 0x18f79cu: goto label_18f79c;
        case 0x18f7a0u: goto label_18f7a0;
        case 0x18f7a4u: goto label_18f7a4;
        case 0x18f7a8u: goto label_18f7a8;
        case 0x18f7acu: goto label_18f7ac;
        case 0x18f7b0u: goto label_18f7b0;
        case 0x18f7b4u: goto label_18f7b4;
        case 0x18f7b8u: goto label_18f7b8;
        case 0x18f7bcu: goto label_18f7bc;
        case 0x18f7c0u: goto label_18f7c0;
        case 0x18f7c4u: goto label_18f7c4;
        case 0x18f7c8u: goto label_18f7c8;
        case 0x18f7ccu: goto label_18f7cc;
        case 0x18f7d0u: goto label_18f7d0;
        case 0x18f7d4u: goto label_18f7d4;
        case 0x18f7d8u: goto label_18f7d8;
        case 0x18f7dcu: goto label_18f7dc;
        case 0x18f7e0u: goto label_18f7e0;
        case 0x18f7e4u: goto label_18f7e4;
        case 0x18f7e8u: goto label_18f7e8;
        case 0x18f7ecu: goto label_18f7ec;
        case 0x18f7f0u: goto label_18f7f0;
        case 0x18f7f4u: goto label_18f7f4;
        case 0x18f7f8u: goto label_18f7f8;
        case 0x18f7fcu: goto label_18f7fc;
        case 0x18f800u: goto label_18f800;
        case 0x18f804u: goto label_18f804;
        case 0x18f808u: goto label_18f808;
        case 0x18f80cu: goto label_18f80c;
        case 0x18f810u: goto label_18f810;
        case 0x18f814u: goto label_18f814;
        case 0x18f818u: goto label_18f818;
        case 0x18f81cu: goto label_18f81c;
        case 0x18f820u: goto label_18f820;
        case 0x18f824u: goto label_18f824;
        case 0x18f828u: goto label_18f828;
        case 0x18f82cu: goto label_18f82c;
        case 0x18f830u: goto label_18f830;
        case 0x18f834u: goto label_18f834;
        case 0x18f838u: goto label_18f838;
        case 0x18f83cu: goto label_18f83c;
        case 0x18f840u: goto label_18f840;
        case 0x18f844u: goto label_18f844;
        case 0x18f848u: goto label_18f848;
        case 0x18f84cu: goto label_18f84c;
        case 0x18f850u: goto label_18f850;
        case 0x18f854u: goto label_18f854;
        case 0x18f858u: goto label_18f858;
        case 0x18f85cu: goto label_18f85c;
        case 0x18f860u: goto label_18f860;
        case 0x18f864u: goto label_18f864;
        case 0x18f868u: goto label_18f868;
        case 0x18f86cu: goto label_18f86c;
        case 0x18f870u: goto label_18f870;
        case 0x18f874u: goto label_18f874;
        case 0x18f878u: goto label_18f878;
        case 0x18f87cu: goto label_18f87c;
        case 0x18f880u: goto label_18f880;
        case 0x18f884u: goto label_18f884;
        case 0x18f888u: goto label_18f888;
        case 0x18f88cu: goto label_18f88c;
        case 0x18f890u: goto label_18f890;
        case 0x18f894u: goto label_18f894;
        case 0x18f898u: goto label_18f898;
        case 0x18f89cu: goto label_18f89c;
        case 0x18f8a0u: goto label_18f8a0;
        case 0x18f8a4u: goto label_18f8a4;
        case 0x18f8a8u: goto label_18f8a8;
        case 0x18f8acu: goto label_18f8ac;
        case 0x18f8b0u: goto label_18f8b0;
        case 0x18f8b4u: goto label_18f8b4;
        case 0x18f8b8u: goto label_18f8b8;
        case 0x18f8bcu: goto label_18f8bc;
        case 0x18f8c0u: goto label_18f8c0;
        case 0x18f8c4u: goto label_18f8c4;
        case 0x18f8c8u: goto label_18f8c8;
        case 0x18f8ccu: goto label_18f8cc;
        case 0x18f8d0u: goto label_18f8d0;
        case 0x18f8d4u: goto label_18f8d4;
        case 0x18f8d8u: goto label_18f8d8;
        case 0x18f8dcu: goto label_18f8dc;
        case 0x18f8e0u: goto label_18f8e0;
        case 0x18f8e4u: goto label_18f8e4;
        case 0x18f8e8u: goto label_18f8e8;
        case 0x18f8ecu: goto label_18f8ec;
        case 0x18f8f0u: goto label_18f8f0;
        case 0x18f8f4u: goto label_18f8f4;
        case 0x18f8f8u: goto label_18f8f8;
        case 0x18f8fcu: goto label_18f8fc;
        case 0x18f900u: goto label_18f900;
        case 0x18f904u: goto label_18f904;
        case 0x18f908u: goto label_18f908;
        case 0x18f90cu: goto label_18f90c;
        case 0x18f910u: goto label_18f910;
        case 0x18f914u: goto label_18f914;
        case 0x18f918u: goto label_18f918;
        case 0x18f91cu: goto label_18f91c;
        case 0x18f920u: goto label_18f920;
        case 0x18f924u: goto label_18f924;
        case 0x18f928u: goto label_18f928;
        case 0x18f92cu: goto label_18f92c;
        case 0x18f930u: goto label_18f930;
        case 0x18f934u: goto label_18f934;
        case 0x18f938u: goto label_18f938;
        case 0x18f93cu: goto label_18f93c;
        case 0x18f940u: goto label_18f940;
        case 0x18f944u: goto label_18f944;
        case 0x18f948u: goto label_18f948;
        case 0x18f94cu: goto label_18f94c;
        case 0x18f950u: goto label_18f950;
        case 0x18f954u: goto label_18f954;
        default: break;
    }

    ctx->pc = 0x18f628u;

label_18f628:
    // 0x18f628: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18f628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18f62c:
    // 0x18f62c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18f62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18f630:
    // 0x18f630: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18f630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18f634:
    // 0x18f634: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18f634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_18f638:
    // 0x18f638: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18f638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_18f63c:
    // 0x18f63c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18f63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_18f640:
    // 0x18f640: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x18f640u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_18f644:
    // 0x18f644: 0xc061a2a  jal         func_1868A8
label_18f648:
    if (ctx->pc == 0x18F648u) {
        ctx->pc = 0x18F648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F644u;
        // 0x18f648: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F64Cu;
        goto label_18f64c;
    }
    ctx->pc = 0x18F644u;
    SET_GPR_U32(ctx, 31, 0x18F64Cu);
    ctx->pc = 0x18F648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F644u;
    // 0x18f648: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18F644u, 0x18F64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F64Cu;
label_18f64c:
    // 0x18f64c: 0x8c430470  lw          $v1, 0x470($v0)
    ctx->pc = 0x18f64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1136)));
label_18f650:
    // 0x18f650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18f654:
    // 0x18f654: 0x5462002f  bnel        $v1, $v0, . + 4 + (0x2F << 2)
label_18f658:
    if (ctx->pc == 0x18F658u) {
        ctx->pc = 0x18F658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F654u;
        // 0x18f658: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F65Cu;
        goto label_18f65c;
    }
    ctx->pc = 0x18F654u;
    {
        const bool branch_taken_0x18f654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18f654) {
            ctx->pc = 0x18F658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F654u;
            // 0x18f658: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F714u;
            goto label_18f714;
        }
    }
    ctx->pc = 0x18F65Cu;
label_18f65c:
    // 0x18f65c: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x18f65cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_18f660:
    // 0x18f660: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x18f660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_18f664:
    // 0x18f664: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_18f668:
    if (ctx->pc == 0x18F668u) {
        ctx->pc = 0x18F66Cu;
        goto label_18f66c;
    }
    ctx->pc = 0x18F664u;
    {
        const bool branch_taken_0x18f664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f664) {
            ctx->pc = 0x18F6ACu;
            goto label_18f6ac;
        }
    }
    ctx->pc = 0x18F66Cu;
label_18f66c:
    // 0x18f66c: 0xc061a12  jal         func_186848
label_18f670:
    if (ctx->pc == 0x18F670u) {
        ctx->pc = 0x18F670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F66Cu;
        // 0x18f670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F674u;
        goto label_18f674;
    }
    ctx->pc = 0x18F66Cu;
    SET_GPR_U32(ctx, 31, 0x18F674u);
    ctx->pc = 0x18F670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F66Cu;
    // 0x18f670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18F66Cu, 0x18F674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F674u;
label_18f674:
    // 0x18f674: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x18f674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
label_18f678:
    // 0x18f678: 0x50600026  beql        $v1, $zero, . + 4 + (0x26 << 2)
label_18f67c:
    if (ctx->pc == 0x18F67Cu) {
        ctx->pc = 0x18F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F678u;
        // 0x18f67c: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F680u;
        goto label_18f680;
    }
    ctx->pc = 0x18F678u;
    {
        const bool branch_taken_0x18f678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f678) {
            ctx->pc = 0x18F67Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F678u;
            // 0x18f67c: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F714u;
            goto label_18f714;
        }
    }
    ctx->pc = 0x18F680u;
label_18f680:
    // 0x18f680: 0xc061a12  jal         func_186848
label_18f684:
    if (ctx->pc == 0x18F684u) {
        ctx->pc = 0x18F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F680u;
        // 0x18f684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F688u;
        goto label_18f688;
    }
    ctx->pc = 0x18F680u;
    SET_GPR_U32(ctx, 31, 0x18F688u);
    ctx->pc = 0x18F684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F680u;
    // 0x18f684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18F680u, 0x18F688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F688u;
label_18f688:
    // 0x18f688: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18f688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18f68c:
    // 0x18f68c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18f68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f690:
    // 0x18f690: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18f690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f694:
    // 0x18f694: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x18f694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_18f698:
    // 0x18f698: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x18f698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18f69c:
    // 0x18f69c: 0x40f809  jalr        $v0
label_18f6a0:
    if (ctx->pc == 0x18F6A0u) {
        ctx->pc = 0x18F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F69Cu;
        // 0x18f6a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F6A4u;
        goto label_18f6a4;
    }
    ctx->pc = 0x18F69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F6A4u);
        ctx->pc = 0x18F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F69Cu;
        // 0x18f6a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F69Cu, 0x18F6A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F6A4u;
label_18f6a4:
    // 0x18f6a4: 0x1000001b  b           . + 4 + (0x1B << 2)
label_18f6a8:
    if (ctx->pc == 0x18F6A8u) {
        ctx->pc = 0x18F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F6A4u;
        // 0x18f6a8: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F6ACu;
        goto label_18f6ac;
    }
    ctx->pc = 0x18F6A4u;
    {
        const bool branch_taken_0x18f6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F6A4u;
        // 0x18f6a8: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f6a4) {
            ctx->pc = 0x18F714u;
            goto label_18f714;
        }
    }
    ctx->pc = 0x18F6ACu;
label_18f6ac:
    // 0x18f6ac: 0xc061a12  jal         func_186848
label_18f6b0:
    if (ctx->pc == 0x18F6B0u) {
        ctx->pc = 0x18F6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F6ACu;
        // 0x18f6b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F6B4u;
        goto label_18f6b4;
    }
    ctx->pc = 0x18F6ACu;
    SET_GPR_U32(ctx, 31, 0x18F6B4u);
    ctx->pc = 0x18F6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F6ACu;
    // 0x18f6b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18F6ACu, 0x18F6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F6B4u;
label_18f6b4:
    // 0x18f6b4: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18f6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18f6b8:
    // 0x18f6b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18f6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f6bc:
    // 0x18f6bc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18f6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_18f6c0:
    // 0x18f6c0: 0x40f809  jalr        $v0
label_18f6c4:
    if (ctx->pc == 0x18F6C4u) {
        ctx->pc = 0x18F6C8u;
        goto label_18f6c8;
    }
    ctx->pc = 0x18F6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F6C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F6C0u, 0x18F6C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F6C8u;
label_18f6c8:
    // 0x18f6c8: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_18f6cc:
    if (ctx->pc == 0x18F6CCu) {
        ctx->pc = 0x18F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F6C8u;
        // 0x18f6cc: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F6D0u;
        goto label_18f6d0;
    }
    ctx->pc = 0x18F6C8u;
    {
        const bool branch_taken_0x18f6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f6c8) {
            ctx->pc = 0x18F6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F6C8u;
            // 0x18f6cc: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F714u;
            goto label_18f714;
        }
    }
    ctx->pc = 0x18F6D0u;
label_18f6d0:
    // 0x18f6d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f6d4:
    // 0x18f6d4: 0xc061a12  jal         func_186848
label_18f6d8:
    if (ctx->pc == 0x18F6D8u) {
        ctx->pc = 0x18F6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F6D4u;
        // 0x18f6d8: 0x26120040  addiu       $s2, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F6DCu;
        goto label_18f6dc;
    }
    ctx->pc = 0x18F6D4u;
    SET_GPR_U32(ctx, 31, 0x18F6DCu);
    ctx->pc = 0x18F6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F6D4u;
    // 0x18f6d8: 0x26120040  addiu       $s2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18F6D4u, 0x18F6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F6DCu;
label_18f6dc:
    // 0x18f6dc: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x18f6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_18f6e0:
    // 0x18f6e0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x18f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_18f6e4:
    // 0x18f6e4: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
label_18f6e8:
    if (ctx->pc == 0x18F6E8u) {
        ctx->pc = 0x18F6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F6E4u;
        // 0x18f6e8: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F6ECu;
        goto label_18f6ec;
    }
    ctx->pc = 0x18F6E4u;
    {
        const bool branch_taken_0x18f6e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18f6e4) {
            ctx->pc = 0x18F6E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F6E4u;
            // 0x18f6e8: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F714u;
            goto label_18f714;
        }
    }
    ctx->pc = 0x18F6ECu;
label_18f6ec:
    // 0x18f6ec: 0xc061a12  jal         func_186848
label_18f6f0:
    if (ctx->pc == 0x18F6F0u) {
        ctx->pc = 0x18F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F6ECu;
        // 0x18f6f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F6F4u;
        goto label_18f6f4;
    }
    ctx->pc = 0x18F6ECu;
    SET_GPR_U32(ctx, 31, 0x18F6F4u);
    ctx->pc = 0x18F6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F6ECu;
    // 0x18f6f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18F6ECu, 0x18F6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F6F4u;
label_18f6f4:
    // 0x18f6f4: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18f6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18f6f8:
    // 0x18f6f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18f6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f6fc:
    // 0x18f6fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18f6fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f700:
    // 0x18f700: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18f700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18f704:
    // 0x18f704: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x18f704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18f708:
    // 0x18f708: 0x40f809  jalr        $v0
label_18f70c:
    if (ctx->pc == 0x18F70Cu) {
        ctx->pc = 0x18F70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F708u;
        // 0x18f70c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F710u;
        goto label_18f710;
    }
    ctx->pc = 0x18F708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F710u);
        ctx->pc = 0x18F70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F708u;
        // 0x18f70c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F708u, 0x18F710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F710u;
label_18f710:
    // 0x18f710: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x18f710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_18f714:
    // 0x18f714: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x18f714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18f718:
    // 0x18f718: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x18f718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18f71c:
    // 0x18f71c: 0x40f809  jalr        $v0
label_18f720:
    if (ctx->pc == 0x18F720u) {
        ctx->pc = 0x18F724u;
        goto label_18f724;
    }
    ctx->pc = 0x18F71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F724u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F71Cu, 0x18F724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F724u;
label_18f724:
    // 0x18f724: 0xc061a2e  jal         func_1868B8
label_18f728:
    if (ctx->pc == 0x18F728u) {
        ctx->pc = 0x18F728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F724u;
        // 0x18f728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F72Cu;
        goto label_18f72c;
    }
    ctx->pc = 0x18F724u;
    SET_GPR_U32(ctx, 31, 0x18F72Cu);
    ctx->pc = 0x18F728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F724u;
    // 0x18f728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868B8u, 0x18F724u, 0x18F72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F72Cu;
label_18f72c:
    // 0x18f72c: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x18f72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_18f730:
    // 0x18f730: 0x8c440064  lw          $a0, 0x64($v0)
    ctx->pc = 0x18f730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_18f734:
    // 0x18f734: 0x8c6504c0  lw          $a1, 0x4C0($v1)
    ctx->pc = 0x18f734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1216)));
label_18f738:
    // 0x18f738: 0x8c820450  lw          $v0, 0x450($a0)
    ctx->pc = 0x18f738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1104)));
label_18f73c:
    // 0x18f73c: 0x14450056  bne         $v0, $a1, . + 4 + (0x56 << 2)
label_18f740:
    if (ctx->pc == 0x18F740u) {
        ctx->pc = 0x18F744u;
        goto label_18f744;
    }
    ctx->pc = 0x18F73Cu;
    {
        const bool branch_taken_0x18f73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18f73c) {
            ctx->pc = 0x18F898u;
            goto label_18f898;
        }
    }
    ctx->pc = 0x18F744u;
label_18f744:
    // 0x18f744: 0xc061a12  jal         func_186848
label_18f748:
    if (ctx->pc == 0x18F748u) {
        ctx->pc = 0x18F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F744u;
        // 0x18f748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F74Cu;
        goto label_18f74c;
    }
    ctx->pc = 0x18F744u;
    SET_GPR_U32(ctx, 31, 0x18F74Cu);
    ctx->pc = 0x18F748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F744u;
    // 0x18f748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18F744u, 0x18F74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F74Cu;
label_18f74c:
    // 0x18f74c: 0x8c43029c  lw          $v1, 0x29C($v0)
    ctx->pc = 0x18f74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 668)));
label_18f750:
    // 0x18f750: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_18f754:
    if (ctx->pc == 0x18F754u) {
        ctx->pc = 0x18F758u;
        goto label_18f758;
    }
    ctx->pc = 0x18F750u;
    {
        const bool branch_taken_0x18f750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f750) {
            ctx->pc = 0x18F778u;
            goto label_18f778;
        }
    }
    ctx->pc = 0x18F758u;
label_18f758:
    // 0x18f758: 0xc061a1e  jal         func_186878
label_18f75c:
    if (ctx->pc == 0x18F75Cu) {
        ctx->pc = 0x18F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F758u;
        // 0x18f75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F760u;
        goto label_18f760;
    }
    ctx->pc = 0x18F758u;
    SET_GPR_U32(ctx, 31, 0x18F760u);
    ctx->pc = 0x18F75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F758u;
    // 0x18f75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x18F758u, 0x18F760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F760u;
label_18f760:
    // 0x18f760: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18f760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18f764:
    // 0x18f764: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18f764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f768:
    // 0x18f768: 0xc06cdda  jal         func_1B3768
label_18f76c:
    if (ctx->pc == 0x18F76Cu) {
        ctx->pc = 0x18F76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F768u;
        // 0x18f76c: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F770u;
        goto label_18f770;
    }
    ctx->pc = 0x18F768u;
    SET_GPR_U32(ctx, 31, 0x18F770u);
    ctx->pc = 0x18F76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F768u;
    // 0x18f76c: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x18F768u, 0x18F770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F770u;
label_18f770:
    // 0x18f770: 0x10000005  b           . + 4 + (0x5 << 2)
label_18f774:
    if (ctx->pc == 0x18F774u) {
        ctx->pc = 0x18F778u;
        goto label_18f778;
    }
    ctx->pc = 0x18F770u;
    {
        const bool branch_taken_0x18f770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f770) {
            ctx->pc = 0x18F788u;
            goto label_18f788;
        }
    }
    ctx->pc = 0x18F778u;
label_18f778:
    // 0x18f778: 0xc061a1e  jal         func_186878
label_18f77c:
    if (ctx->pc == 0x18F77Cu) {
        ctx->pc = 0x18F77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F778u;
        // 0x18f77c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F780u;
        goto label_18f780;
    }
    ctx->pc = 0x18F778u;
    SET_GPR_U32(ctx, 31, 0x18F780u);
    ctx->pc = 0x18F77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F778u;
    // 0x18f77c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x18F778u, 0x18F780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F780u;
label_18f780:
    // 0x18f780: 0xc06cdb4  jal         func_1B36D0
label_18f784:
    if (ctx->pc == 0x18F784u) {
        ctx->pc = 0x18F784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F780u;
        // 0x18f784: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F788u;
        goto label_18f788;
    }
    ctx->pc = 0x18F780u;
    SET_GPR_U32(ctx, 31, 0x18F788u);
    ctx->pc = 0x18F784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F780u;
    // 0x18f784: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36D0u, 0x18F780u, 0x18F788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F788u;
label_18f788:
    // 0x18f788: 0xc061a12  jal         func_186848
label_18f78c:
    if (ctx->pc == 0x18F78Cu) {
        ctx->pc = 0x18F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F788u;
        // 0x18f78c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F790u;
        goto label_18f790;
    }
    ctx->pc = 0x18F788u;
    SET_GPR_U32(ctx, 31, 0x18F790u);
    ctx->pc = 0x18F78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F788u;
    // 0x18f78c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18F788u, 0x18F790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F790u;
label_18f790:
    // 0x18f790: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18f790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18f794:
    // 0x18f794: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18f794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f798:
    // 0x18f798: 0xc0702b8  jal         func_1C0AE0
label_18f79c:
    if (ctx->pc == 0x18F79Cu) {
        ctx->pc = 0x18F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F798u;
        // 0x18f79c: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F7A0u;
        goto label_18f7a0;
    }
    ctx->pc = 0x18F798u;
    SET_GPR_U32(ctx, 31, 0x18F7A0u);
    ctx->pc = 0x18F79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F798u;
    // 0x18f79c: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0AE0u, 0x18F798u, 0x18F7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F7A0u;
label_18f7a0:
    // 0x18f7a0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x18f7a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_18f7a4:
    // 0x18f7a4: 0xc061a1e  jal         func_186878
label_18f7a8:
    if (ctx->pc == 0x18F7A8u) {
        ctx->pc = 0x18F7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F7A4u;
        // 0x18f7a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F7ACu;
        goto label_18f7ac;
    }
    ctx->pc = 0x18F7A4u;
    SET_GPR_U32(ctx, 31, 0x18F7ACu);
    ctx->pc = 0x18F7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F7A4u;
    // 0x18f7a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x18F7A4u, 0x18F7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F7ACu;
label_18f7ac:
    // 0x18f7ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f7b0:
    // 0x18f7b0: 0xc061a16  jal         func_186858
label_18f7b4:
    if (ctx->pc == 0x18F7B4u) {
        ctx->pc = 0x18F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F7B0u;
        // 0x18f7b4: 0xe454014c  swc1        $f20, 0x14C($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 332), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F7B8u;
        goto label_18f7b8;
    }
    ctx->pc = 0x18F7B0u;
    SET_GPR_U32(ctx, 31, 0x18F7B8u);
    ctx->pc = 0x18F7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F7B0u;
    // 0x18f7b4: 0xe454014c  swc1        $f20, 0x14C($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 332), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18F7B0u, 0x18F7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F7B8u;
label_18f7b8:
    // 0x18f7b8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18f7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_18f7bc:
    // 0x18f7bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18f7bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f7c0:
    // 0x18f7c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f7c4:
    // 0x18f7c4: 0xc061a26  jal         func_186898
label_18f7c8:
    if (ctx->pc == 0x18F7C8u) {
        ctx->pc = 0x18F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F7C4u;
        // 0x18f7c8: 0xe4400028  swc1        $f0, 0x28($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F7CCu;
        goto label_18f7cc;
    }
    ctx->pc = 0x18F7C4u;
    SET_GPR_U32(ctx, 31, 0x18F7CCu);
    ctx->pc = 0x18F7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F7C4u;
    // 0x18f7c8: 0xe4400028  swc1        $f0, 0x28($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x18F7C4u, 0x18F7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F7CCu;
label_18f7cc:
    // 0x18f7cc: 0x8c430110  lw          $v1, 0x110($v0)
    ctx->pc = 0x18f7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_18f7d0:
    // 0x18f7d0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x18f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_18f7d4:
    // 0x18f7d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x18f7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18f7d8:
    // 0x18f7d8: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
label_18f7dc:
    if (ctx->pc == 0x18F7DCu) {
        ctx->pc = 0x18F7E0u;
        goto label_18f7e0;
    }
    ctx->pc = 0x18F7D8u;
    {
        const bool branch_taken_0x18f7d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18f7d8) {
            ctx->pc = 0x18F858u;
            goto label_18f858;
        }
    }
    ctx->pc = 0x18F7E0u;
label_18f7e0:
    // 0x18f7e0: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x18f7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_18f7e4:
    // 0x18f7e4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x18f7e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_18f7e8:
    // 0x18f7e8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18f7e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_18f7ec:
    // 0x18f7ec: 0xc061a16  jal         func_186858
label_18f7f0:
    if (ctx->pc == 0x18F7F0u) {
        ctx->pc = 0x18F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F7ECu;
        // 0x18f7f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F7F4u;
        goto label_18f7f4;
    }
    ctx->pc = 0x18F7ECu;
    SET_GPR_U32(ctx, 31, 0x18F7F4u);
    ctx->pc = 0x18F7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F7ECu;
    // 0x18f7f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18F7ECu, 0x18F7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F7F4u;
label_18f7f4:
    // 0x18f7f4: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x18f7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_18f7f8:
    // 0x18f7f8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x18f7f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_18f7fc:
    // 0x18f7fc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x18f7fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_18f800:
    // 0x18f800: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x18f800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_18f804:
    // 0x18f804: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x18f804u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_18f808:
    // 0x18f808: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18f808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18f80c:
    // 0x18f80c: 0xc06ee70  jal         func_1BB9C0
label_18f810:
    if (ctx->pc == 0x18F810u) {
        ctx->pc = 0x18F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F80Cu;
        // 0x18f810: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F814u;
        goto label_18f814;
    }
    ctx->pc = 0x18F80Cu;
    SET_GPR_U32(ctx, 31, 0x18F814u);
    ctx->pc = 0x18F810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F80Cu;
    // 0x18f810: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9C0u, 0x18F80Cu, 0x18F814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F814u;
label_18f814:
    // 0x18f814: 0xc061a16  jal         func_186858
label_18f818:
    if (ctx->pc == 0x18F818u) {
        ctx->pc = 0x18F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F814u;
        // 0x18f818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F81Cu;
        goto label_18f81c;
    }
    ctx->pc = 0x18F814u;
    SET_GPR_U32(ctx, 31, 0x18F81Cu);
    ctx->pc = 0x18F818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F814u;
    // 0x18f818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18F814u, 0x18F81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F81Cu;
label_18f81c:
    // 0x18f81c: 0x3c013ff9  lui         $at, 0x3FF9
    ctx->pc = 0x18f81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16377 << 16));
label_18f820:
    // 0x18f820: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x18f820u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_18f824:
    // 0x18f824: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18f824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f828:
    // 0x18f828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f82c:
    // 0x18f82c: 0xe454004c  swc1        $f20, 0x4C($v0)
    ctx->pc = 0x18f82cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
label_18f830:
    // 0x18f830: 0xc061a16  jal         func_186858
label_18f834:
    if (ctx->pc == 0x18F834u) {
        ctx->pc = 0x18F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F830u;
        // 0x18f834: 0xe4400058  swc1        $f0, 0x58($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F838u;
        goto label_18f838;
    }
    ctx->pc = 0x18F830u;
    SET_GPR_U32(ctx, 31, 0x18F838u);
    ctx->pc = 0x18F834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F830u;
    // 0x18f834: 0xe4400058  swc1        $f0, 0x58($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18F830u, 0x18F838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F838u;
label_18f838:
    // 0x18f838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f83c:
    // 0x18f83c: 0xc061a16  jal         func_186858
label_18f840:
    if (ctx->pc == 0x18F840u) {
        ctx->pc = 0x18F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F83Cu;
        // 0x18f840: 0xe4550050  swc1        $f21, 0x50($v0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F844u;
        goto label_18f844;
    }
    ctx->pc = 0x18F83Cu;
    SET_GPR_U32(ctx, 31, 0x18F844u);
    ctx->pc = 0x18F840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F83Cu;
    // 0x18f840: 0xe4550050  swc1        $f21, 0x50($v0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18F83Cu, 0x18F844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F844u;
label_18f844:
    // 0x18f844: 0xe4540054  swc1        $f20, 0x54($v0)
    ctx->pc = 0x18f844u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
label_18f848:
    // 0x18f848: 0xc061a16  jal         func_186858
label_18f84c:
    if (ctx->pc == 0x18F84Cu) {
        ctx->pc = 0x18F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F848u;
        // 0x18f84c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F850u;
        goto label_18f850;
    }
    ctx->pc = 0x18F848u;
    SET_GPR_U32(ctx, 31, 0x18F850u);
    ctx->pc = 0x18F84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F848u;
    // 0x18f84c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18F848u, 0x18F850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F850u;
label_18f850:
    // 0x18f850: 0x10000006  b           . + 4 + (0x6 << 2)
label_18f854:
    if (ctx->pc == 0x18F854u) {
        ctx->pc = 0x18F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F850u;
        // 0x18f854: 0xe4550058  swc1        $f21, 0x58($v0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F858u;
        goto label_18f858;
    }
    ctx->pc = 0x18F850u;
    {
        const bool branch_taken_0x18f850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F850u;
        // 0x18f854: 0xe4550058  swc1        $f21, 0x58($v0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f850) {
            ctx->pc = 0x18F86Cu;
            goto label_18f86c;
        }
    }
    ctx->pc = 0x18F858u;
label_18f858:
    // 0x18f858: 0xc061a16  jal         func_186858
label_18f85c:
    if (ctx->pc == 0x18F85Cu) {
        ctx->pc = 0x18F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F858u;
        // 0x18f85c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F860u;
        goto label_18f860;
    }
    ctx->pc = 0x18F858u;
    SET_GPR_U32(ctx, 31, 0x18F860u);
    ctx->pc = 0x18F85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F858u;
    // 0x18f85c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18F858u, 0x18F860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F860u;
label_18f860:
    // 0x18f860: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18f860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f864:
    // 0x18f864: 0xc06ee30  jal         func_1BB8C0
label_18f868:
    if (ctx->pc == 0x18F868u) {
        ctx->pc = 0x18F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F864u;
        // 0x18f868: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F86Cu;
        goto label_18f86c;
    }
    ctx->pc = 0x18F864u;
    SET_GPR_U32(ctx, 31, 0x18F86Cu);
    ctx->pc = 0x18F868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F864u;
    // 0x18f868: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB8C0u, 0x18F864u, 0x18F86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F86Cu;
label_18f86c:
    // 0x18f86c: 0xc061a12  jal         func_186848
label_18f870:
    if (ctx->pc == 0x18F870u) {
        ctx->pc = 0x18F870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F86Cu;
        // 0x18f870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F874u;
        goto label_18f874;
    }
    ctx->pc = 0x18F86Cu;
    SET_GPR_U32(ctx, 31, 0x18F874u);
    ctx->pc = 0x18F870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F86Cu;
    // 0x18f870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18F86Cu, 0x18F874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F874u;
label_18f874:
    // 0x18f874: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18f874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18f878:
    // 0x18f878: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18f878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f87c:
    // 0x18f87c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_18f880:
    // 0x18f880: 0x40f809  jalr        $v0
label_18f884:
    if (ctx->pc == 0x18F884u) {
        ctx->pc = 0x18F888u;
        goto label_18f888;
    }
    ctx->pc = 0x18F880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F888u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F880u, 0x18F888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F888u;
label_18f888:
    // 0x18f888: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_18f88c:
    if (ctx->pc == 0x18F88Cu) {
        ctx->pc = 0x18F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F888u;
        // 0x18f88c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F890u;
        goto label_18f890;
    }
    ctx->pc = 0x18F888u;
    {
        const bool branch_taken_0x18f888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F888u;
        // 0x18f88c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f888) {
            ctx->pc = 0x18F938u;
            goto label_18f938;
        }
    }
    ctx->pc = 0x18F890u;
label_18f890:
    // 0x18f890: 0x10000029  b           . + 4 + (0x29 << 2)
label_18f894:
    if (ctx->pc == 0x18F894u) {
        ctx->pc = 0x18F894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F890u;
        // 0x18f894: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F898u;
        goto label_18f898;
    }
    ctx->pc = 0x18F890u;
    {
        const bool branch_taken_0x18f890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F890u;
        // 0x18f894: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f890) {
            ctx->pc = 0x18F938u;
            goto label_18f938;
        }
    }
    ctx->pc = 0x18F898u;
label_18f898:
    // 0x18f898: 0xc061a2a  jal         func_1868A8
label_18f89c:
    if (ctx->pc == 0x18F89Cu) {
        ctx->pc = 0x18F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F898u;
        // 0x18f89c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F8A0u;
        goto label_18f8a0;
    }
    ctx->pc = 0x18F898u;
    SET_GPR_U32(ctx, 31, 0x18F8A0u);
    ctx->pc = 0x18F89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F898u;
    // 0x18f89c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18F898u, 0x18F8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F8A0u;
label_18f8a0:
    // 0x18f8a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18f8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18f8a4:
    // 0x18f8a4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x18f8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18f8a8:
    // 0x18f8a8: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x18f8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_18f8ac:
    // 0x18f8ac: 0xc0952e8  jal         func_254BA0
label_18f8b0:
    if (ctx->pc == 0x18F8B0u) {
        ctx->pc = 0x18F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8ACu;
        // 0x18f8b0: 0x8c650fe4  lw          $a1, 0xFE4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4068)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F8B4u;
        goto label_18f8b4;
    }
    ctx->pc = 0x18F8ACu;
    SET_GPR_U32(ctx, 31, 0x18F8B4u);
    ctx->pc = 0x18F8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F8ACu;
    // 0x18f8b0: 0x8c650fe4  lw          $a1, 0xFE4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254BA0u, 0x18F8ACu, 0x18F8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F8B4u;
label_18f8b4:
    // 0x18f8b4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x18f8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_18f8b8:
    // 0x18f8b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18f8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f8bc:
    // 0x18f8bc: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x18f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_18f8c0:
    // 0x18f8c0: 0x40f809  jalr        $v0
label_18f8c4:
    if (ctx->pc == 0x18F8C4u) {
        ctx->pc = 0x18F8C8u;
        goto label_18f8c8;
    }
    ctx->pc = 0x18F8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F8C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F8C0u, 0x18F8C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F8C8u;
label_18f8c8:
    // 0x18f8c8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_18f8cc:
    if (ctx->pc == 0x18F8CCu) {
        ctx->pc = 0x18F8D0u;
        goto label_18f8d0;
    }
    ctx->pc = 0x18F8C8u;
    {
        const bool branch_taken_0x18f8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f8c8) {
            ctx->pc = 0x18F8F8u;
            goto label_18f8f8;
        }
    }
    ctx->pc = 0x18F8D0u;
label_18f8d0:
    // 0x18f8d0: 0xc061a12  jal         func_186848
label_18f8d4:
    if (ctx->pc == 0x18F8D4u) {
        ctx->pc = 0x18F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8D0u;
        // 0x18f8d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F8D8u;
        goto label_18f8d8;
    }
    ctx->pc = 0x18F8D0u;
    SET_GPR_U32(ctx, 31, 0x18F8D8u);
    ctx->pc = 0x18F8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F8D0u;
    // 0x18f8d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18F8D0u, 0x18F8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F8D8u;
label_18f8d8:
    // 0x18f8d8: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18f8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18f8dc:
    // 0x18f8dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18f8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f8e0:
    // 0x18f8e0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_18f8e4:
    // 0x18f8e4: 0x40f809  jalr        $v0
label_18f8e8:
    if (ctx->pc == 0x18F8E8u) {
        ctx->pc = 0x18F8ECu;
        goto label_18f8ec;
    }
    ctx->pc = 0x18F8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F8ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F8E4u, 0x18F8ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F8ECu;
label_18f8ec:
    // 0x18f8ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_18f8f0:
    if (ctx->pc == 0x18F8F0u) {
        ctx->pc = 0x18F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8ECu;
        // 0x18f8f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F8F4u;
        goto label_18f8f4;
    }
    ctx->pc = 0x18F8ECu;
    {
        const bool branch_taken_0x18f8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8ECu;
        // 0x18f8f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f8ec) {
            ctx->pc = 0x18F8F8u;
            goto label_18f8f8;
        }
    }
    ctx->pc = 0x18F8F4u;
label_18f8f4:
    // 0x18f8f4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x18f8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_18f8f8:
    // 0x18f8f8: 0xc061a26  jal         func_186898
label_18f8fc:
    if (ctx->pc == 0x18F8FCu) {
        ctx->pc = 0x18F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8F8u;
        // 0x18f8fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F900u;
        goto label_18f900;
    }
    ctx->pc = 0x18F8F8u;
    SET_GPR_U32(ctx, 31, 0x18F900u);
    ctx->pc = 0x18F8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F8F8u;
    // 0x18f8fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x18F8F8u, 0x18F900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F900u;
label_18f900:
    // 0x18f900: 0xc4410138  lwc1        $f1, 0x138($v0)
    ctx->pc = 0x18f900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18f904:
    // 0x18f904: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x18f904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_18f908:
    // 0x18f908: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18f908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f90c:
    // 0x18f90c: 0x0  nop
    ctx->pc = 0x18f90cu;
    // NOP
label_18f910:
    // 0x18f910: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18f910u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18f914:
    // 0x18f914: 0x0  nop
    ctx->pc = 0x18f914u;
    // NOP
label_18f918:
    // 0x18f918: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_18f91c:
    if (ctx->pc == 0x18F91Cu) {
        ctx->pc = 0x18F91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F918u;
        // 0x18f91c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F920u;
        goto label_18f920;
    }
    ctx->pc = 0x18F918u;
    {
        const bool branch_taken_0x18f918 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f918) {
            ctx->pc = 0x18F91Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F918u;
            // 0x18f91c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F93Cu;
            goto label_18f93c;
        }
    }
    ctx->pc = 0x18F920u;
label_18f920:
    // 0x18f920: 0xc061a1e  jal         func_186878
label_18f924:
    if (ctx->pc == 0x18F924u) {
        ctx->pc = 0x18F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F920u;
        // 0x18f924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F928u;
        goto label_18f928;
    }
    ctx->pc = 0x18F920u;
    SET_GPR_U32(ctx, 31, 0x18F928u);
    ctx->pc = 0x18F924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F920u;
    // 0x18f924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x18F920u, 0x18F928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F928u;
label_18f928:
    // 0x18f928: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18f928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18f92c:
    // 0x18f92c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18f92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f930:
    // 0x18f930: 0xc06cdda  jal         func_1B3768
label_18f934:
    if (ctx->pc == 0x18F934u) {
        ctx->pc = 0x18F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F930u;
        // 0x18f934: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F938u;
        goto label_18f938;
    }
    ctx->pc = 0x18F930u;
    SET_GPR_U32(ctx, 31, 0x18F938u);
    ctx->pc = 0x18F934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F930u;
    // 0x18f934: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x18F930u, 0x18F938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F938u;
label_18f938:
    // 0x18f938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18f938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18f93c:
    // 0x18f93c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18f93cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18f940:
    // 0x18f940: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18f940u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18f944:
    // 0x18f944: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18f944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_18f948:
    // 0x18f948: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x18f948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_18f94c:
    // 0x18f94c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x18f94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18f950:
    // 0x18f950: 0x3e00008  jr          $ra
label_18f954:
    if (ctx->pc == 0x18F954u) {
        ctx->pc = 0x18F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F950u;
        // 0x18f954: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F958u;
        goto label_fallthrough_0x18f950;
    }
    ctx->pc = 0x18F950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F950u;
        // 0x18f954: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18f950:
    ctx->pc = 0x18F958u;
}
