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

// Function: sub_0014E630
// Address: 0x14e630 - 0x14ea60
void sub_0014E630_0x14e630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E630_0x14e630");
#endif

    switch (ctx->pc) {
        case 0x14e630u: goto label_14e630;
        case 0x14e634u: goto label_14e634;
        case 0x14e638u: goto label_14e638;
        case 0x14e63cu: goto label_14e63c;
        case 0x14e640u: goto label_14e640;
        case 0x14e644u: goto label_14e644;
        case 0x14e648u: goto label_14e648;
        case 0x14e64cu: goto label_14e64c;
        case 0x14e650u: goto label_14e650;
        case 0x14e654u: goto label_14e654;
        case 0x14e658u: goto label_14e658;
        case 0x14e65cu: goto label_14e65c;
        case 0x14e660u: goto label_14e660;
        case 0x14e664u: goto label_14e664;
        case 0x14e668u: goto label_14e668;
        case 0x14e66cu: goto label_14e66c;
        case 0x14e670u: goto label_14e670;
        case 0x14e674u: goto label_14e674;
        case 0x14e678u: goto label_14e678;
        case 0x14e67cu: goto label_14e67c;
        case 0x14e680u: goto label_14e680;
        case 0x14e684u: goto label_14e684;
        case 0x14e688u: goto label_14e688;
        case 0x14e68cu: goto label_14e68c;
        case 0x14e690u: goto label_14e690;
        case 0x14e694u: goto label_14e694;
        case 0x14e698u: goto label_14e698;
        case 0x14e69cu: goto label_14e69c;
        case 0x14e6a0u: goto label_14e6a0;
        case 0x14e6a4u: goto label_14e6a4;
        case 0x14e6a8u: goto label_14e6a8;
        case 0x14e6acu: goto label_14e6ac;
        case 0x14e6b0u: goto label_14e6b0;
        case 0x14e6b4u: goto label_14e6b4;
        case 0x14e6b8u: goto label_14e6b8;
        case 0x14e6bcu: goto label_14e6bc;
        case 0x14e6c0u: goto label_14e6c0;
        case 0x14e6c4u: goto label_14e6c4;
        case 0x14e6c8u: goto label_14e6c8;
        case 0x14e6ccu: goto label_14e6cc;
        case 0x14e6d0u: goto label_14e6d0;
        case 0x14e6d4u: goto label_14e6d4;
        case 0x14e6d8u: goto label_14e6d8;
        case 0x14e6dcu: goto label_14e6dc;
        case 0x14e6e0u: goto label_14e6e0;
        case 0x14e6e4u: goto label_14e6e4;
        case 0x14e6e8u: goto label_14e6e8;
        case 0x14e6ecu: goto label_14e6ec;
        case 0x14e6f0u: goto label_14e6f0;
        case 0x14e6f4u: goto label_14e6f4;
        case 0x14e6f8u: goto label_14e6f8;
        case 0x14e6fcu: goto label_14e6fc;
        case 0x14e700u: goto label_14e700;
        case 0x14e704u: goto label_14e704;
        case 0x14e708u: goto label_14e708;
        case 0x14e70cu: goto label_14e70c;
        case 0x14e710u: goto label_14e710;
        case 0x14e714u: goto label_14e714;
        case 0x14e718u: goto label_14e718;
        case 0x14e71cu: goto label_14e71c;
        case 0x14e720u: goto label_14e720;
        case 0x14e724u: goto label_14e724;
        case 0x14e728u: goto label_14e728;
        case 0x14e72cu: goto label_14e72c;
        case 0x14e730u: goto label_14e730;
        case 0x14e734u: goto label_14e734;
        case 0x14e738u: goto label_14e738;
        case 0x14e73cu: goto label_14e73c;
        case 0x14e740u: goto label_14e740;
        case 0x14e744u: goto label_14e744;
        case 0x14e748u: goto label_14e748;
        case 0x14e74cu: goto label_14e74c;
        case 0x14e750u: goto label_14e750;
        case 0x14e754u: goto label_14e754;
        case 0x14e758u: goto label_14e758;
        case 0x14e75cu: goto label_14e75c;
        case 0x14e760u: goto label_14e760;
        case 0x14e764u: goto label_14e764;
        case 0x14e768u: goto label_14e768;
        case 0x14e76cu: goto label_14e76c;
        case 0x14e770u: goto label_14e770;
        case 0x14e774u: goto label_14e774;
        case 0x14e778u: goto label_14e778;
        case 0x14e77cu: goto label_14e77c;
        case 0x14e780u: goto label_14e780;
        case 0x14e784u: goto label_14e784;
        case 0x14e788u: goto label_14e788;
        case 0x14e78cu: goto label_14e78c;
        case 0x14e790u: goto label_14e790;
        case 0x14e794u: goto label_14e794;
        case 0x14e798u: goto label_14e798;
        case 0x14e79cu: goto label_14e79c;
        case 0x14e7a0u: goto label_14e7a0;
        case 0x14e7a4u: goto label_14e7a4;
        case 0x14e7a8u: goto label_14e7a8;
        case 0x14e7acu: goto label_14e7ac;
        case 0x14e7b0u: goto label_14e7b0;
        case 0x14e7b4u: goto label_14e7b4;
        case 0x14e7b8u: goto label_14e7b8;
        case 0x14e7bcu: goto label_14e7bc;
        case 0x14e7c0u: goto label_14e7c0;
        case 0x14e7c4u: goto label_14e7c4;
        case 0x14e7c8u: goto label_14e7c8;
        case 0x14e7ccu: goto label_14e7cc;
        case 0x14e7d0u: goto label_14e7d0;
        case 0x14e7d4u: goto label_14e7d4;
        case 0x14e7d8u: goto label_14e7d8;
        case 0x14e7dcu: goto label_14e7dc;
        case 0x14e7e0u: goto label_14e7e0;
        case 0x14e7e4u: goto label_14e7e4;
        case 0x14e7e8u: goto label_14e7e8;
        case 0x14e7ecu: goto label_14e7ec;
        case 0x14e7f0u: goto label_14e7f0;
        case 0x14e7f4u: goto label_14e7f4;
        case 0x14e7f8u: goto label_14e7f8;
        case 0x14e7fcu: goto label_14e7fc;
        case 0x14e800u: goto label_14e800;
        case 0x14e804u: goto label_14e804;
        case 0x14e808u: goto label_14e808;
        case 0x14e80cu: goto label_14e80c;
        case 0x14e810u: goto label_14e810;
        case 0x14e814u: goto label_14e814;
        case 0x14e818u: goto label_14e818;
        case 0x14e81cu: goto label_14e81c;
        case 0x14e820u: goto label_14e820;
        case 0x14e824u: goto label_14e824;
        case 0x14e828u: goto label_14e828;
        case 0x14e82cu: goto label_14e82c;
        case 0x14e830u: goto label_14e830;
        case 0x14e834u: goto label_14e834;
        case 0x14e838u: goto label_14e838;
        case 0x14e83cu: goto label_14e83c;
        case 0x14e840u: goto label_14e840;
        case 0x14e844u: goto label_14e844;
        case 0x14e848u: goto label_14e848;
        case 0x14e84cu: goto label_14e84c;
        case 0x14e850u: goto label_14e850;
        case 0x14e854u: goto label_14e854;
        case 0x14e858u: goto label_14e858;
        case 0x14e85cu: goto label_14e85c;
        case 0x14e860u: goto label_14e860;
        case 0x14e864u: goto label_14e864;
        case 0x14e868u: goto label_14e868;
        case 0x14e86cu: goto label_14e86c;
        case 0x14e870u: goto label_14e870;
        case 0x14e874u: goto label_14e874;
        case 0x14e878u: goto label_14e878;
        case 0x14e87cu: goto label_14e87c;
        case 0x14e880u: goto label_14e880;
        case 0x14e884u: goto label_14e884;
        case 0x14e888u: goto label_14e888;
        case 0x14e88cu: goto label_14e88c;
        case 0x14e890u: goto label_14e890;
        case 0x14e894u: goto label_14e894;
        case 0x14e898u: goto label_14e898;
        case 0x14e89cu: goto label_14e89c;
        case 0x14e8a0u: goto label_14e8a0;
        case 0x14e8a4u: goto label_14e8a4;
        case 0x14e8a8u: goto label_14e8a8;
        case 0x14e8acu: goto label_14e8ac;
        case 0x14e8b0u: goto label_14e8b0;
        case 0x14e8b4u: goto label_14e8b4;
        case 0x14e8b8u: goto label_14e8b8;
        case 0x14e8bcu: goto label_14e8bc;
        case 0x14e8c0u: goto label_14e8c0;
        case 0x14e8c4u: goto label_14e8c4;
        case 0x14e8c8u: goto label_14e8c8;
        case 0x14e8ccu: goto label_14e8cc;
        case 0x14e8d0u: goto label_14e8d0;
        case 0x14e8d4u: goto label_14e8d4;
        case 0x14e8d8u: goto label_14e8d8;
        case 0x14e8dcu: goto label_14e8dc;
        case 0x14e8e0u: goto label_14e8e0;
        case 0x14e8e4u: goto label_14e8e4;
        case 0x14e8e8u: goto label_14e8e8;
        case 0x14e8ecu: goto label_14e8ec;
        case 0x14e8f0u: goto label_14e8f0;
        case 0x14e8f4u: goto label_14e8f4;
        case 0x14e8f8u: goto label_14e8f8;
        case 0x14e8fcu: goto label_14e8fc;
        case 0x14e900u: goto label_14e900;
        case 0x14e904u: goto label_14e904;
        case 0x14e908u: goto label_14e908;
        case 0x14e90cu: goto label_14e90c;
        case 0x14e910u: goto label_14e910;
        case 0x14e914u: goto label_14e914;
        case 0x14e918u: goto label_14e918;
        case 0x14e91cu: goto label_14e91c;
        case 0x14e920u: goto label_14e920;
        case 0x14e924u: goto label_14e924;
        case 0x14e928u: goto label_14e928;
        case 0x14e92cu: goto label_14e92c;
        case 0x14e930u: goto label_14e930;
        case 0x14e934u: goto label_14e934;
        case 0x14e938u: goto label_14e938;
        case 0x14e93cu: goto label_14e93c;
        case 0x14e940u: goto label_14e940;
        case 0x14e944u: goto label_14e944;
        case 0x14e948u: goto label_14e948;
        case 0x14e94cu: goto label_14e94c;
        case 0x14e950u: goto label_14e950;
        case 0x14e954u: goto label_14e954;
        case 0x14e958u: goto label_14e958;
        case 0x14e95cu: goto label_14e95c;
        case 0x14e960u: goto label_14e960;
        case 0x14e964u: goto label_14e964;
        case 0x14e968u: goto label_14e968;
        case 0x14e96cu: goto label_14e96c;
        case 0x14e970u: goto label_14e970;
        case 0x14e974u: goto label_14e974;
        case 0x14e978u: goto label_14e978;
        case 0x14e97cu: goto label_14e97c;
        case 0x14e980u: goto label_14e980;
        case 0x14e984u: goto label_14e984;
        case 0x14e988u: goto label_14e988;
        case 0x14e98cu: goto label_14e98c;
        case 0x14e990u: goto label_14e990;
        case 0x14e994u: goto label_14e994;
        case 0x14e998u: goto label_14e998;
        case 0x14e99cu: goto label_14e99c;
        case 0x14e9a0u: goto label_14e9a0;
        case 0x14e9a4u: goto label_14e9a4;
        case 0x14e9a8u: goto label_14e9a8;
        case 0x14e9acu: goto label_14e9ac;
        case 0x14e9b0u: goto label_14e9b0;
        case 0x14e9b4u: goto label_14e9b4;
        case 0x14e9b8u: goto label_14e9b8;
        case 0x14e9bcu: goto label_14e9bc;
        case 0x14e9c0u: goto label_14e9c0;
        case 0x14e9c4u: goto label_14e9c4;
        case 0x14e9c8u: goto label_14e9c8;
        case 0x14e9ccu: goto label_14e9cc;
        case 0x14e9d0u: goto label_14e9d0;
        case 0x14e9d4u: goto label_14e9d4;
        case 0x14e9d8u: goto label_14e9d8;
        case 0x14e9dcu: goto label_14e9dc;
        case 0x14e9e0u: goto label_14e9e0;
        case 0x14e9e4u: goto label_14e9e4;
        case 0x14e9e8u: goto label_14e9e8;
        case 0x14e9ecu: goto label_14e9ec;
        case 0x14e9f0u: goto label_14e9f0;
        case 0x14e9f4u: goto label_14e9f4;
        case 0x14e9f8u: goto label_14e9f8;
        case 0x14e9fcu: goto label_14e9fc;
        case 0x14ea00u: goto label_14ea00;
        case 0x14ea04u: goto label_14ea04;
        case 0x14ea08u: goto label_14ea08;
        case 0x14ea0cu: goto label_14ea0c;
        case 0x14ea10u: goto label_14ea10;
        case 0x14ea14u: goto label_14ea14;
        case 0x14ea18u: goto label_14ea18;
        case 0x14ea1cu: goto label_14ea1c;
        case 0x14ea20u: goto label_14ea20;
        case 0x14ea24u: goto label_14ea24;
        case 0x14ea28u: goto label_14ea28;
        case 0x14ea2cu: goto label_14ea2c;
        case 0x14ea30u: goto label_14ea30;
        case 0x14ea34u: goto label_14ea34;
        case 0x14ea38u: goto label_14ea38;
        case 0x14ea3cu: goto label_14ea3c;
        case 0x14ea40u: goto label_14ea40;
        case 0x14ea44u: goto label_14ea44;
        case 0x14ea48u: goto label_14ea48;
        case 0x14ea4cu: goto label_14ea4c;
        case 0x14ea50u: goto label_14ea50;
        case 0x14ea54u: goto label_14ea54;
        case 0x14ea58u: goto label_14ea58;
        case 0x14ea5cu: goto label_14ea5c;
        default: break;
    }

    ctx->pc = 0x14e630u;

label_14e630:
    // 0x14e630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14e630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_14e634:
    // 0x14e634: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14e634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_14e638:
    // 0x14e638: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14e638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_14e63c:
    // 0x14e63c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14e63cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14e640:
    // 0x14e640: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14e640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_14e644:
    // 0x14e644: 0xc053b26  jal         func_14EC98
label_14e648:
    if (ctx->pc == 0x14E648u) {
        ctx->pc = 0x14E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E644u;
        // 0x14e648: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E64Cu;
        goto label_14e64c;
    }
    ctx->pc = 0x14E644u;
    SET_GPR_U32(ctx, 31, 0x14E64Cu);
    ctx->pc = 0x14E648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E644u;
    // 0x14e648: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC98u, 0x14E644u, 0x14E64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E64Cu;
label_14e64c:
    // 0x14e64c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_14e650:
    if (ctx->pc == 0x14E650u) {
        ctx->pc = 0x14E654u;
        goto label_14e654;
    }
    ctx->pc = 0x14E64Cu;
    {
        const bool branch_taken_0x14e64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e64c) {
            ctx->pc = 0x14E678u;
            goto label_14e678;
        }
    }
    ctx->pc = 0x14E654u;
label_14e654:
    // 0x14e654: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14e654u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14e658:
    // 0x14e658: 0xc053b3e  jal         func_14ECF8
label_14e65c:
    if (ctx->pc == 0x14E65Cu) {
        ctx->pc = 0x14E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E658u;
        // 0x14e65c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E660u;
        goto label_14e660;
    }
    ctx->pc = 0x14E658u;
    SET_GPR_U32(ctx, 31, 0x14E660u);
    ctx->pc = 0x14E65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E658u;
    // 0x14e65c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ECF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ECF8u, 0x14E658u, 0x14E660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E660u;
label_14e660:
    // 0x14e660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e664:
    // 0x14e664: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x14e664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14e668:
    // 0x14e668: 0xc04d8d6  jal         func_136358
label_14e66c:
    if (ctx->pc == 0x14E66Cu) {
        ctx->pc = 0x14E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E668u;
        // 0x14e66c: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E670u;
        goto label_14e670;
    }
    ctx->pc = 0x14E668u;
    SET_GPR_U32(ctx, 31, 0x14E670u);
    ctx->pc = 0x14E66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E668u;
    // 0x14e66c: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x14E668u, 0x14E670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E670u;
label_14e670:
    // 0x14e670: 0x100000f6  b           . + 4 + (0xF6 << 2)
label_14e674:
    if (ctx->pc == 0x14E674u) {
        ctx->pc = 0x14E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E670u;
        // 0x14e674: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E678u;
        goto label_14e678;
    }
    ctx->pc = 0x14E670u;
    {
        const bool branch_taken_0x14e670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E670u;
        // 0x14e674: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e670) {
            ctx->pc = 0x14EA4Cu;
            goto label_14ea4c;
        }
    }
    ctx->pc = 0x14E678u;
label_14e678:
    // 0x14e678: 0xc053a98  jal         func_14EA60
label_14e67c:
    if (ctx->pc == 0x14E67Cu) {
        ctx->pc = 0x14E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E678u;
        // 0x14e67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E680u;
        goto label_14e680;
    }
    ctx->pc = 0x14E678u;
    SET_GPR_U32(ctx, 31, 0x14E680u);
    ctx->pc = 0x14E67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E678u;
    // 0x14e67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EA60u, 0x14E678u, 0x14E680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E680u;
label_14e680:
    // 0x14e680: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14e680u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14e684:
    // 0x14e684: 0xc053b06  jal         func_14EC18
label_14e688:
    if (ctx->pc == 0x14E688u) {
        ctx->pc = 0x14E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E684u;
        // 0x14e688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E68Cu;
        goto label_14e68c;
    }
    ctx->pc = 0x14E684u;
    SET_GPR_U32(ctx, 31, 0x14E68Cu);
    ctx->pc = 0x14E688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E684u;
    // 0x14e688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC18u, 0x14E684u, 0x14E68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E68Cu;
label_14e68c:
    // 0x14e68c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x14e68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_14e690:
    // 0x14e690: 0x2c620011  sltiu       $v0, $v1, 0x11
    ctx->pc = 0x14e690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_14e694:
    // 0x14e694: 0x104000e2  beqz        $v0, . + 4 + (0xE2 << 2)
label_14e698:
    if (ctx->pc == 0x14E698u) {
        ctx->pc = 0x14E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E694u;
        // 0x14e698: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E69Cu;
        goto label_14e69c;
    }
    ctx->pc = 0x14E694u;
    {
        const bool branch_taken_0x14e694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E694u;
        // 0x14e698: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e694) {
            ctx->pc = 0x14EA20u;
            goto label_14ea20;
        }
    }
    ctx->pc = 0x14E69Cu;
label_14e69c:
    // 0x14e69c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x14e69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_14e6a0:
    // 0x14e6a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14e6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14e6a4:
    // 0x14e6a4: 0x2442eb20  addiu       $v0, $v0, -0x14E0
    ctx->pc = 0x14e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961952));
label_14e6a8:
    // 0x14e6a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14e6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14e6ac:
    // 0x14e6ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14e6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14e6b0:
    // 0x14e6b0: 0x800008  jr          $a0
label_14e6b4:
    if (ctx->pc == 0x14E6B4u) {
        ctx->pc = 0x14E6B8u;
        goto label_14e6b8;
    }
    ctx->pc = 0x14E6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14E6B8u: goto label_14e6b8;
            case 0x14E718u: goto label_14e718;
            case 0x14E728u: goto label_14e728;
            case 0x14E76Cu: goto label_14e76c;
            case 0x14E7C4u: goto label_14e7c4;
            case 0x14E964u: goto label_14e964;
            case 0x14E97Cu: goto label_14e97c;
            case 0x14E9A4u: goto label_14e9a4;
            case 0x14E9D4u: goto label_14e9d4;
            case 0x14EA0Cu: goto label_14ea0c;
            case 0x14EA20u: goto label_14ea20;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E6B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14E6B8u;
label_14e6b8:
    // 0x14e6b8: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14e6b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14e6bc:
    // 0x14e6bc: 0xc053ca4  jal         func_14F290
label_14e6c0:
    if (ctx->pc == 0x14E6C0u) {
        ctx->pc = 0x14E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6BCu;
        // 0x14e6c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E6C4u;
        goto label_14e6c4;
    }
    ctx->pc = 0x14E6BCu;
    SET_GPR_U32(ctx, 31, 0x14E6C4u);
    ctx->pc = 0x14E6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E6BCu;
    // 0x14e6c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F290u, 0x14E6BCu, 0x14E6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E6C4u;
label_14e6c4:
    // 0x14e6c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_14e6c8:
    if (ctx->pc == 0x14E6C8u) {
        ctx->pc = 0x14E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6C4u;
        // 0x14e6c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E6CCu;
        goto label_14e6cc;
    }
    ctx->pc = 0x14E6C4u;
    {
        const bool branch_taken_0x14e6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6C4u;
        // 0x14e6c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6c4) {
            ctx->pc = 0x14E6F0u;
            goto label_14e6f0;
        }
    }
    ctx->pc = 0x14E6CCu;
label_14e6cc:
    // 0x14e6cc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x14e6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14e6d0:
    // 0x14e6d0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x14e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_14e6d4:
    // 0x14e6d4: 0x40f809  jalr        $v0
label_14e6d8:
    if (ctx->pc == 0x14E6D8u) {
        ctx->pc = 0x14E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6D4u;
        // 0x14e6d8: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E6DCu;
        goto label_14e6dc;
    }
    ctx->pc = 0x14E6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14E6DCu);
        ctx->pc = 0x14E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6D4u;
        // 0x14e6d8: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14E6B8u: goto label_14e6b8;
            case 0x14E728u: goto label_14e728;
            case 0x14E97Cu: goto label_14e97c;
            case 0x14E9A4u: goto label_14e9a4;
            case 0x14E9D4u: goto label_14e9d4;
            case 0x14EA0Cu: goto label_14ea0c;
            case 0x14EA20u: goto label_14ea20;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E6D4u, 0x14E6DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E6DCu;
label_14e6dc:
    // 0x14e6dc: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14e6dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14e6e0:
    // 0x14e6e0: 0xc053cc4  jal         func_14F310
label_14e6e4:
    if (ctx->pc == 0x14E6E4u) {
        ctx->pc = 0x14E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6E0u;
        // 0x14e6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E6E8u;
        goto label_14e6e8;
    }
    ctx->pc = 0x14E6E0u;
    SET_GPR_U32(ctx, 31, 0x14E6E8u);
    ctx->pc = 0x14E6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E6E0u;
    // 0x14e6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F310u, 0x14E6E0u, 0x14E6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E6E8u;
label_14e6e8:
    // 0x14e6e8: 0x100000ce  b           . + 4 + (0xCE << 2)
label_14e6ec:
    if (ctx->pc == 0x14E6ECu) {
        ctx->pc = 0x14E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6E8u;
        // 0x14e6ec: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E6F0u;
        goto label_14e6f0;
    }
    ctx->pc = 0x14E6E8u;
    {
        const bool branch_taken_0x14e6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6E8u;
        // 0x14e6ec: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6e8) {
            ctx->pc = 0x14EA24u;
            goto label_14ea24;
        }
    }
    ctx->pc = 0x14E6F0u;
label_14e6f0:
    // 0x14e6f0: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x14e6f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14e6f4:
    // 0x14e6f4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14e6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14e6f8:
    // 0x14e6f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14e6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14e6fc:
    // 0x14e6fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14e700:
    // 0x14e700: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14e700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14e704:
    // 0x14e704: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14e704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14e708:
    // 0x14e708: 0xc04dcba  jal         func_1372E8
label_14e70c:
    if (ctx->pc == 0x14E70Cu) {
        ctx->pc = 0x14E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E708u;
        // 0x14e70c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E710u;
        goto label_14e710;
    }
    ctx->pc = 0x14E708u;
    SET_GPR_U32(ctx, 31, 0x14E710u);
    ctx->pc = 0x14E70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E708u;
    // 0x14e70c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1372E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1372E8u, 0x14E708u, 0x14E710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E710u;
label_14e710:
    // 0x14e710: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_14e714:
    if (ctx->pc == 0x14E714u) {
        ctx->pc = 0x14E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E710u;
        // 0x14e714: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E718u;
        goto label_14e718;
    }
    ctx->pc = 0x14E710u;
    {
        const bool branch_taken_0x14e710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E710u;
        // 0x14e714: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e710) {
            ctx->pc = 0x14EA24u;
            goto label_14ea24;
        }
    }
    ctx->pc = 0x14E718u;
label_14e718:
    // 0x14e718: 0xc054a2c  jal         func_1528B0
label_14e71c:
    if (ctx->pc == 0x14E71Cu) {
        ctx->pc = 0x14E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E718u;
        // 0x14e71c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E720u;
        goto label_14e720;
    }
    ctx->pc = 0x14E718u;
    SET_GPR_U32(ctx, 31, 0x14E720u);
    ctx->pc = 0x14E71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E718u;
    // 0x14e71c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1528B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1528B0u, 0x14E718u, 0x14E720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E720u;
label_14e720:
    // 0x14e720: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_14e724:
    if (ctx->pc == 0x14E724u) {
        ctx->pc = 0x14E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E720u;
        // 0x14e724: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E728u;
        goto label_14e728;
    }
    ctx->pc = 0x14E720u;
    {
        const bool branch_taken_0x14e720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E720u;
        // 0x14e724: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e720) {
            ctx->pc = 0x14EA24u;
            goto label_14ea24;
        }
    }
    ctx->pc = 0x14E728u;
label_14e728:
    // 0x14e728: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14e728u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14e72c:
    // 0x14e72c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e730:
    // 0x14e730: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14e730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14e734:
    // 0x14e734: 0xc0545a2  jal         func_151688
label_14e738:
    if (ctx->pc == 0x14E738u) {
        ctx->pc = 0x14E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E734u;
        // 0x14e738: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E73Cu;
        goto label_14e73c;
    }
    ctx->pc = 0x14E734u;
    SET_GPR_U32(ctx, 31, 0x14E73Cu);
    ctx->pc = 0x14E738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E734u;
    // 0x14e738: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151688u, 0x14E734u, 0x14E73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E73Cu;
label_14e73c:
    // 0x14e73c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14e73cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14e740:
    // 0x14e740: 0xc04da18  jal         func_136860
label_14e744:
    if (ctx->pc == 0x14E744u) {
        ctx->pc = 0x14E744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E740u;
        // 0x14e744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E748u;
        goto label_14e748;
    }
    ctx->pc = 0x14E740u;
    SET_GPR_U32(ctx, 31, 0x14E748u);
    ctx->pc = 0x14E744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E740u;
    // 0x14e744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136860u, 0x14E740u, 0x14E748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E748u;
label_14e748:
    // 0x14e748: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
label_14e74c:
    if (ctx->pc == 0x14E74Cu) {
        ctx->pc = 0x14E750u;
        goto label_14e750;
    }
    ctx->pc = 0x14E748u;
    {
        const bool branch_taken_0x14e748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e748) {
            ctx->pc = 0x14E938u;
            goto label_14e938;
        }
    }
    ctx->pc = 0x14E750u;
label_14e750:
    // 0x14e750: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14e750u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14e754:
    // 0x14e754: 0xc04dd04  jal         func_137410
label_14e758:
    if (ctx->pc == 0x14E758u) {
        ctx->pc = 0x14E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E754u;
        // 0x14e758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E75Cu;
        goto label_14e75c;
    }
    ctx->pc = 0x14E754u;
    SET_GPR_U32(ctx, 31, 0x14E75Cu);
    ctx->pc = 0x14E758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E754u;
    // 0x14e758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137410u, 0x14E754u, 0x14E75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E75Cu;
label_14e75c:
    // 0x14e75c: 0x54400076  bnel        $v0, $zero, . + 4 + (0x76 << 2)
label_14e760:
    if (ctx->pc == 0x14E760u) {
        ctx->pc = 0x14E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E75Cu;
        // 0x14e760: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E764u;
        goto label_14e764;
    }
    ctx->pc = 0x14E75Cu;
    {
        const bool branch_taken_0x14e75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e75c) {
            ctx->pc = 0x14E760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E75Cu;
            // 0x14e760: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E938u;
            goto label_14e938;
        }
    }
    ctx->pc = 0x14E764u;
label_14e764:
    // 0x14e764: 0x10000071  b           . + 4 + (0x71 << 2)
label_14e768:
    if (ctx->pc == 0x14E768u) {
        ctx->pc = 0x14E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E764u;
        // 0x14e768: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E76Cu;
        goto label_14e76c;
    }
    ctx->pc = 0x14E764u;
    {
        const bool branch_taken_0x14e764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E764u;
        // 0x14e768: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e764) {
            ctx->pc = 0x14E92Cu;
            goto label_14e92c;
        }
    }
    ctx->pc = 0x14E76Cu;
label_14e76c:
    // 0x14e76c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14e76cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14e770:
    // 0x14e770: 0xc054984  jal         func_152610
label_14e774:
    if (ctx->pc == 0x14E774u) {
        ctx->pc = 0x14E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E770u;
        // 0x14e774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E778u;
        goto label_14e778;
    }
    ctx->pc = 0x14E770u;
    SET_GPR_U32(ctx, 31, 0x14E778u);
    ctx->pc = 0x14E774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E770u;
    // 0x14e774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152610u, 0x14E770u, 0x14E778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E778u;
label_14e778:
    // 0x14e778: 0x504000aa  beql        $v0, $zero, . + 4 + (0xAA << 2)
label_14e77c:
    if (ctx->pc == 0x14E77Cu) {
        ctx->pc = 0x14E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E778u;
        // 0x14e77c: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E780u;
        goto label_14e780;
    }
    ctx->pc = 0x14E778u;
    {
        const bool branch_taken_0x14e778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e778) {
            ctx->pc = 0x14E77Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E778u;
            // 0x14e77c: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EA24u;
            goto label_14ea24;
        }
    }
    ctx->pc = 0x14E780u;
label_14e780:
    // 0x14e780: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x14e780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14e784:
    // 0x14e784: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14e784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14e788:
    // 0x14e788: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14e788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14e78c:
    // 0x14e78c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14e78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14e790:
    // 0x14e790: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14e790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14e794:
    // 0x14e794: 0x106000a2  beqz        $v1, . + 4 + (0xA2 << 2)
label_14e798:
    if (ctx->pc == 0x14E798u) {
        ctx->pc = 0x14E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E794u;
        // 0x14e798: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E79Cu;
        goto label_14e79c;
    }
    ctx->pc = 0x14E794u;
    {
        const bool branch_taken_0x14e794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E794u;
        // 0x14e798: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e794) {
            ctx->pc = 0x14EA20u;
            goto label_14ea20;
        }
    }
    ctx->pc = 0x14E79Cu;
label_14e79c:
    // 0x14e79c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14e79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14e7a0:
    // 0x14e7a0: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x14e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
label_14e7a4:
    // 0x14e7a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14e7a8:
    // 0x14e7a8: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x14e7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
label_14e7ac:
    // 0x14e7ac: 0x5080009d  beql        $a0, $zero, . + 4 + (0x9D << 2)
label_14e7b0:
    if (ctx->pc == 0x14E7B0u) {
        ctx->pc = 0x14E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7ACu;
        // 0x14e7b0: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E7B4u;
        goto label_14e7b4;
    }
    ctx->pc = 0x14E7ACu;
    {
        const bool branch_taken_0x14e7ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e7ac) {
            ctx->pc = 0x14E7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E7ACu;
            // 0x14e7b0: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EA24u;
            goto label_14ea24;
        }
    }
    ctx->pc = 0x14E7B4u;
label_14e7b4:
    // 0x14e7b4: 0xc094ed4  jal         func_253B50
label_14e7b8:
    if (ctx->pc == 0x14E7B8u) {
        ctx->pc = 0x14E7BCu;
        goto label_14e7bc;
    }
    ctx->pc = 0x14E7B4u;
    SET_GPR_U32(ctx, 31, 0x14E7BCu);
    ctx->pc = 0x253B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B50u, 0x14E7B4u, 0x14E7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E7BCu;
label_14e7bc:
    // 0x14e7bc: 0x10000099  b           . + 4 + (0x99 << 2)
label_14e7c0:
    if (ctx->pc == 0x14E7C0u) {
        ctx->pc = 0x14E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7BCu;
        // 0x14e7c0: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E7C4u;
        goto label_14e7c4;
    }
    ctx->pc = 0x14E7BCu;
    {
        const bool branch_taken_0x14e7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7BCu;
        // 0x14e7c0: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e7bc) {
            ctx->pc = 0x14EA24u;
            goto label_14ea24;
        }
    }
    ctx->pc = 0x14E7C4u;
label_14e7c4:
    // 0x14e7c4: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14e7c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14e7c8:
    // 0x14e7c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14e7c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e7cc:
    // 0x14e7cc: 0xc04d9ea  jal         func_1367A8
label_14e7d0:
    if (ctx->pc == 0x14E7D0u) {
        ctx->pc = 0x14E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7CCu;
        // 0x14e7d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E7D4u;
        goto label_14e7d4;
    }
    ctx->pc = 0x14E7CCu;
    SET_GPR_U32(ctx, 31, 0x14E7D4u);
    ctx->pc = 0x14E7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E7CCu;
    // 0x14e7d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1367A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1367A8u, 0x14E7CCu, 0x14E7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E7D4u;
label_14e7d4:
    // 0x14e7d4: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_14e7d8:
    if (ctx->pc == 0x14E7D8u) {
        ctx->pc = 0x14E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7D4u;
        // 0x14e7d8: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E7DCu;
        goto label_14e7dc;
    }
    ctx->pc = 0x14E7D4u;
    {
        const bool branch_taken_0x14e7d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7D4u;
        // 0x14e7d8: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e7d4) {
            ctx->pc = 0x14E860u;
            goto label_14e860;
        }
    }
    ctx->pc = 0x14E7DCu;
label_14e7dc:
    // 0x14e7dc: 0x9206046c  lbu         $a2, 0x46C($s0)
    ctx->pc = 0x14e7dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14e7e0:
    // 0x14e7e0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x14e7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14e7e4:
    // 0x14e7e4: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x14e7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
label_14e7e8:
    // 0x14e7e8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x14e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_14e7ec:
    // 0x14e7ec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x14e7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_14e7f0:
    // 0x14e7f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14e7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14e7f4:
    // 0x14e7f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14e7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14e7f8:
    // 0x14e7f8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x14e7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_14e7fc:
    // 0x14e7fc: 0x8c82020c  lw          $v0, 0x20C($a0)
    ctx->pc = 0x14e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_14e800:
    // 0x14e800: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_14e804:
    if (ctx->pc == 0x14E804u) {
        ctx->pc = 0x14E808u;
        goto label_14e808;
    }
    ctx->pc = 0x14E800u;
    {
        const bool branch_taken_0x14e800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e800) {
            ctx->pc = 0x14E860u;
            goto label_14e860;
        }
    }
    ctx->pc = 0x14E808u;
label_14e808:
    // 0x14e808: 0x8c420120  lw          $v0, 0x120($v0)
    ctx->pc = 0x14e808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_14e80c:
    // 0x14e80c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_14e810:
    if (ctx->pc == 0x14E810u) {
        ctx->pc = 0x14E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E80Cu;
        // 0x14e810: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E814u;
        goto label_14e814;
    }
    ctx->pc = 0x14E80Cu;
    {
        const bool branch_taken_0x14e80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E80Cu;
        // 0x14e810: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e80c) {
            ctx->pc = 0x14E834u;
            goto label_14e834;
        }
    }
    ctx->pc = 0x14E814u;
label_14e814:
    // 0x14e814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e818:
    // 0x14e818: 0xc04d9e4  jal         func_136790
label_14e81c:
    if (ctx->pc == 0x14E81Cu) {
        ctx->pc = 0x14E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E818u;
        // 0x14e81c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E820u;
        goto label_14e820;
    }
    ctx->pc = 0x14E818u;
    SET_GPR_U32(ctx, 31, 0x14E820u);
    ctx->pc = 0x14E81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E818u;
    // 0x14e81c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136790u, 0x14E818u, 0x14E820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E820u;
label_14e820:
    // 0x14e820: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14e820u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14e824:
    // 0x14e824: 0xc04d9b8  jal         func_1366E0
label_14e828:
    if (ctx->pc == 0x14E828u) {
        ctx->pc = 0x14E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E824u;
        // 0x14e828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E82Cu;
        goto label_14e82c;
    }
    ctx->pc = 0x14E824u;
    SET_GPR_U32(ctx, 31, 0x14E82Cu);
    ctx->pc = 0x14E828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E824u;
    // 0x14e828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1366E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1366E0u, 0x14E824u, 0x14E82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E82Cu;
label_14e82c:
    // 0x14e82c: 0x1000000c  b           . + 4 + (0xC << 2)
label_14e830:
    if (ctx->pc == 0x14E830u) {
        ctx->pc = 0x14E834u;
        goto label_14e834;
    }
    ctx->pc = 0x14E82Cu;
    {
        const bool branch_taken_0x14e82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e82c) {
            ctx->pc = 0x14E860u;
            goto label_14e860;
        }
    }
    ctx->pc = 0x14E834u;
label_14e834:
    // 0x14e834: 0xc04d9be  jal         func_1366F8
label_14e838:
    if (ctx->pc == 0x14E838u) {
        ctx->pc = 0x14E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E834u;
        // 0x14e838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E83Cu;
        goto label_14e83c;
    }
    ctx->pc = 0x14E834u;
    SET_GPR_U32(ctx, 31, 0x14E83Cu);
    ctx->pc = 0x14E838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E834u;
    // 0x14e838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1366F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1366F8u, 0x14E834u, 0x14E83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E83Cu;
label_14e83c:
    // 0x14e83c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_14e840:
    if (ctx->pc == 0x14E840u) {
        ctx->pc = 0x14E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E83Cu;
        // 0x14e840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E844u;
        goto label_14e844;
    }
    ctx->pc = 0x14E83Cu;
    {
        const bool branch_taken_0x14e83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E83Cu;
        // 0x14e840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e83c) {
            ctx->pc = 0x14E860u;
            goto label_14e860;
        }
    }
    ctx->pc = 0x14E844u;
label_14e844:
    // 0x14e844: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14e844u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14e848:
    // 0x14e848: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14e848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14e84c:
    // 0x14e84c: 0xc04d9e4  jal         func_136790
label_14e850:
    if (ctx->pc == 0x14E850u) {
        ctx->pc = 0x14E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E84Cu;
        // 0x14e850: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E854u;
        goto label_14e854;
    }
    ctx->pc = 0x14E84Cu;
    SET_GPR_U32(ctx, 31, 0x14E854u);
    ctx->pc = 0x14E850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E84Cu;
    // 0x14e850: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136790u, 0x14E84Cu, 0x14E854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E854u;
label_14e854:
    // 0x14e854: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14e854u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14e858:
    // 0x14e858: 0xc04d9b8  jal         func_1366E0
label_14e85c:
    if (ctx->pc == 0x14E85Cu) {
        ctx->pc = 0x14E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E858u;
        // 0x14e85c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E860u;
        goto label_14e860;
    }
    ctx->pc = 0x14E858u;
    SET_GPR_U32(ctx, 31, 0x14E860u);
    ctx->pc = 0x14E85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E858u;
    // 0x14e85c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1366E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1366E0u, 0x14E858u, 0x14E860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E860u;
label_14e860:
    // 0x14e860: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_14e864:
    if (ctx->pc == 0x14E864u) {
        ctx->pc = 0x14E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E860u;
        // 0x14e864: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E868u;
        goto label_14e868;
    }
    ctx->pc = 0x14E860u;
    {
        const bool branch_taken_0x14e860 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E860u;
        // 0x14e864: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e860) {
            ctx->pc = 0x14E878u;
            goto label_14e878;
        }
    }
    ctx->pc = 0x14E868u;
label_14e868:
    // 0x14e868: 0xc04d97a  jal         func_1365E8
label_14e86c:
    if (ctx->pc == 0x14E86Cu) {
        ctx->pc = 0x14E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E868u;
        // 0x14e86c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E870u;
        goto label_14e870;
    }
    ctx->pc = 0x14E868u;
    SET_GPR_U32(ctx, 31, 0x14E870u);
    ctx->pc = 0x14E86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E868u;
    // 0x14e86c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1365E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1365E8u, 0x14E868u, 0x14E870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E870u;
label_14e870:
    // 0x14e870: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_14e874:
    if (ctx->pc == 0x14E874u) {
        ctx->pc = 0x14E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E870u;
        // 0x14e874: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E878u;
        goto label_14e878;
    }
    ctx->pc = 0x14E870u;
    {
        const bool branch_taken_0x14e870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E870u;
        // 0x14e874: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e870) {
            ctx->pc = 0x14E8FCu;
            goto label_14e8fc;
        }
    }
    ctx->pc = 0x14E878u;
label_14e878:
    // 0x14e878: 0xc04d980  jal         func_136600
label_14e87c:
    if (ctx->pc == 0x14E87Cu) {
        ctx->pc = 0x14E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E878u;
        // 0x14e87c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E880u;
        goto label_14e880;
    }
    ctx->pc = 0x14E878u;
    SET_GPR_U32(ctx, 31, 0x14E880u);
    ctx->pc = 0x14E87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E878u;
    // 0x14e87c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136600u, 0x14E878u, 0x14E880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E880u;
label_14e880:
    // 0x14e880: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14e880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14e884:
    // 0x14e884: 0x5620004d  bnel        $s1, $zero, . + 4 + (0x4D << 2)
label_14e888:
    if (ctx->pc == 0x14E888u) {
        ctx->pc = 0x14E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E884u;
        // 0x14e888: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E88Cu;
        goto label_14e88c;
    }
    ctx->pc = 0x14E884u;
    {
        const bool branch_taken_0x14e884 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e884) {
            ctx->pc = 0x14E888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E884u;
            // 0x14e888: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E9BCu;
            goto label_14e9bc;
        }
    }
    ctx->pc = 0x14E88Cu;
label_14e88c:
    // 0x14e88c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14e88cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14e890:
    // 0x14e890: 0xc04d9ea  jal         func_1367A8
label_14e894:
    if (ctx->pc == 0x14E894u) {
        ctx->pc = 0x14E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E890u;
        // 0x14e894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E898u;
        goto label_14e898;
    }
    ctx->pc = 0x14E890u;
    SET_GPR_U32(ctx, 31, 0x14E898u);
    ctx->pc = 0x14E894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E890u;
    // 0x14e894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1367A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1367A8u, 0x14E890u, 0x14E898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E898u;
label_14e898:
    // 0x14e898: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_14e89c:
    if (ctx->pc == 0x14E89Cu) {
        ctx->pc = 0x14E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E898u;
        // 0x14e89c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E8A0u;
        goto label_14e8a0;
    }
    ctx->pc = 0x14E898u;
    {
        const bool branch_taken_0x14e898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E898u;
        // 0x14e89c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e898) {
            ctx->pc = 0x14E8F0u;
            goto label_14e8f0;
        }
    }
    ctx->pc = 0x14E8A0u;
label_14e8a0:
    // 0x14e8a0: 0x9206046c  lbu         $a2, 0x46C($s0)
    ctx->pc = 0x14e8a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14e8a4:
    // 0x14e8a4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x14e8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14e8a8:
    // 0x14e8a8: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x14e8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
label_14e8ac:
    // 0x14e8ac: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x14e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_14e8b0:
    // 0x14e8b0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x14e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_14e8b4:
    // 0x14e8b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14e8b8:
    // 0x14e8b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14e8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14e8bc:
    // 0x14e8bc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x14e8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_14e8c0:
    // 0x14e8c0: 0x8c82020c  lw          $v0, 0x20C($a0)
    ctx->pc = 0x14e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_14e8c4:
    // 0x14e8c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_14e8c8:
    if (ctx->pc == 0x14E8C8u) {
        ctx->pc = 0x14E8CCu;
        goto label_14e8cc;
    }
    ctx->pc = 0x14E8C4u;
    {
        const bool branch_taken_0x14e8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e8c4) {
            ctx->pc = 0x14E8F0u;
            goto label_14e8f0;
        }
    }
    ctx->pc = 0x14E8CCu;
label_14e8cc:
    // 0x14e8cc: 0x8c420120  lw          $v0, 0x120($v0)
    ctx->pc = 0x14e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_14e8d0:
    // 0x14e8d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_14e8d4:
    if (ctx->pc == 0x14E8D4u) {
        ctx->pc = 0x14E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8D0u;
        // 0x14e8d4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E8D8u;
        goto label_14e8d8;
    }
    ctx->pc = 0x14E8D0u;
    {
        const bool branch_taken_0x14e8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8D0u;
        // 0x14e8d4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e8d0) {
            ctx->pc = 0x14E8F0u;
            goto label_14e8f0;
        }
    }
    ctx->pc = 0x14E8D8u;
label_14e8d8:
    // 0x14e8d8: 0xc04e0c0  jal         func_138300
label_14e8dc:
    if (ctx->pc == 0x14E8DCu) {
        ctx->pc = 0x14E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8D8u;
        // 0x14e8dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E8E0u;
        goto label_14e8e0;
    }
    ctx->pc = 0x14E8D8u;
    SET_GPR_U32(ctx, 31, 0x14E8E0u);
    ctx->pc = 0x14E8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E8D8u;
    // 0x14e8dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138300u, 0x14E8D8u, 0x14E8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E8E0u;
label_14e8e0:
    // 0x14e8e0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x14e8e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14e8e4:
    // 0x14e8e4: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14e8e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14e8e8:
    // 0x14e8e8: 0xc04d974  jal         func_1365D0
label_14e8ec:
    if (ctx->pc == 0x14E8ECu) {
        ctx->pc = 0x14E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8E8u;
        // 0x14e8ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E8F0u;
        goto label_14e8f0;
    }
    ctx->pc = 0x14E8E8u;
    SET_GPR_U32(ctx, 31, 0x14E8F0u);
    ctx->pc = 0x14E8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E8E8u;
    // 0x14e8ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1365D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1365D0u, 0x14E8E8u, 0x14E8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E8F0u;
label_14e8f0:
    // 0x14e8f0: 0x56200032  bnel        $s1, $zero, . + 4 + (0x32 << 2)
label_14e8f4:
    if (ctx->pc == 0x14E8F4u) {
        ctx->pc = 0x14E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8F0u;
        // 0x14e8f4: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E8F8u;
        goto label_14e8f8;
    }
    ctx->pc = 0x14E8F0u;
    {
        const bool branch_taken_0x14e8f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e8f0) {
            ctx->pc = 0x14E8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E8F0u;
            // 0x14e8f4: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E9BCu;
            goto label_14e9bc;
        }
    }
    ctx->pc = 0x14E8F8u;
label_14e8f8:
    // 0x14e8f8: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14e8f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14e8fc:
    // 0x14e8fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14e8fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e900:
    // 0x14e900: 0xc04da18  jal         func_136860
label_14e904:
    if (ctx->pc == 0x14E904u) {
        ctx->pc = 0x14E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E900u;
        // 0x14e904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E908u;
        goto label_14e908;
    }
    ctx->pc = 0x14E900u;
    SET_GPR_U32(ctx, 31, 0x14E908u);
    ctx->pc = 0x14E904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E900u;
    // 0x14e904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136860u, 0x14E900u, 0x14E908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E908u;
label_14e908:
    // 0x14e908: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_14e90c:
    if (ctx->pc == 0x14E90Cu) {
        ctx->pc = 0x14E910u;
        goto label_14e910;
    }
    ctx->pc = 0x14E908u;
    {
        const bool branch_taken_0x14e908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e908) {
            ctx->pc = 0x14E938u;
            goto label_14e938;
        }
    }
    ctx->pc = 0x14E910u;
label_14e910:
    // 0x14e910: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14e910u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14e914:
    // 0x14e914: 0xc04dd04  jal         func_137410
label_14e918:
    if (ctx->pc == 0x14E918u) {
        ctx->pc = 0x14E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E914u;
        // 0x14e918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E91Cu;
        goto label_14e91c;
    }
    ctx->pc = 0x14E914u;
    SET_GPR_U32(ctx, 31, 0x14E91Cu);
    ctx->pc = 0x14E918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E914u;
    // 0x14e918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137410u, 0x14E914u, 0x14E91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E91Cu;
label_14e91c:
    // 0x14e91c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_14e920:
    if (ctx->pc == 0x14E920u) {
        ctx->pc = 0x14E920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E91Cu;
        // 0x14e920: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E924u;
        goto label_14e924;
    }
    ctx->pc = 0x14E91Cu;
    {
        const bool branch_taken_0x14e91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e91c) {
            ctx->pc = 0x14E920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E91Cu;
            // 0x14e920: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E92Cu;
            goto label_14e92c;
        }
    }
    ctx->pc = 0x14E924u;
label_14e924:
    // 0x14e924: 0x10000004  b           . + 4 + (0x4 << 2)
label_14e928:
    if (ctx->pc == 0x14E928u) {
        ctx->pc = 0x14E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E924u;
        // 0x14e928: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E92Cu;
        goto label_14e92c;
    }
    ctx->pc = 0x14E924u;
    {
        const bool branch_taken_0x14e924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E924u;
        // 0x14e928: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e924) {
            ctx->pc = 0x14E938u;
            goto label_14e938;
        }
    }
    ctx->pc = 0x14E92Cu;
label_14e92c:
    // 0x14e92c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e930:
    // 0x14e930: 0xc04d9f0  jal         func_1367C0
label_14e934:
    if (ctx->pc == 0x14E934u) {
        ctx->pc = 0x14E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E930u;
        // 0x14e934: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E938u;
        goto label_14e938;
    }
    ctx->pc = 0x14E930u;
    SET_GPR_U32(ctx, 31, 0x14E938u);
    ctx->pc = 0x14E934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E930u;
    // 0x14e934: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1367C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1367C0u, 0x14E930u, 0x14E938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E938u;
label_14e938:
    // 0x14e938: 0x52200044  beql        $s1, $zero, . + 4 + (0x44 << 2)
label_14e93c:
    if (ctx->pc == 0x14E93Cu) {
        ctx->pc = 0x14E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E938u;
        // 0x14e93c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E940u;
        goto label_14e940;
    }
    ctx->pc = 0x14E938u;
    {
        const bool branch_taken_0x14e938 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e938) {
            ctx->pc = 0x14E93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E938u;
            // 0x14e93c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EA4Cu;
            goto label_14ea4c;
        }
    }
    ctx->pc = 0x14E940u;
label_14e940:
    // 0x14e940: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x14e940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14e944:
    // 0x14e944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e948:
    // 0x14e948: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x14e948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_14e94c:
    // 0x14e94c: 0x40f809  jalr        $v0
label_14e950:
    if (ctx->pc == 0x14E950u) {
        ctx->pc = 0x14E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E94Cu;
        // 0x14e950: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E954u;
        goto label_14e954;
    }
    ctx->pc = 0x14E94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14E954u);
        ctx->pc = 0x14E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E94Cu;
        // 0x14e950: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E94Cu, 0x14E954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E954u;
label_14e954:
    // 0x14e954: 0xc0542dc  jal         func_150B70
label_14e958:
    if (ctx->pc == 0x14E958u) {
        ctx->pc = 0x14E958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E954u;
        // 0x14e958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E95Cu;
        goto label_14e95c;
    }
    ctx->pc = 0x14E954u;
    SET_GPR_U32(ctx, 31, 0x14E95Cu);
    ctx->pc = 0x14E958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E954u;
    // 0x14e958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B70u, 0x14E954u, 0x14E95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E95Cu;
label_14e95c:
    // 0x14e95c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_14e960:
    if (ctx->pc == 0x14E960u) {
        ctx->pc = 0x14E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E95Cu;
        // 0x14e960: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E964u;
        goto label_14e964;
    }
    ctx->pc = 0x14E95Cu;
    {
        const bool branch_taken_0x14e95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E95Cu;
        // 0x14e960: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e95c) {
            ctx->pc = 0x14EA4Cu;
            goto label_14ea4c;
        }
    }
    ctx->pc = 0x14E964u;
label_14e964:
    // 0x14e964: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14e964u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14e968:
    // 0x14e968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e96c:
    // 0x14e96c: 0xc0545a2  jal         func_151688
label_14e970:
    if (ctx->pc == 0x14E970u) {
        ctx->pc = 0x14E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E96Cu;
        // 0x14e970: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E974u;
        goto label_14e974;
    }
    ctx->pc = 0x14E96Cu;
    SET_GPR_U32(ctx, 31, 0x14E974u);
    ctx->pc = 0x14E970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E96Cu;
    // 0x14e970: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151688u, 0x14E96Cu, 0x14E974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E974u;
label_14e974:
    // 0x14e974: 0x1000002b  b           . + 4 + (0x2B << 2)
label_14e978:
    if (ctx->pc == 0x14E978u) {
        ctx->pc = 0x14E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E974u;
        // 0x14e978: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E97Cu;
        goto label_14e97c;
    }
    ctx->pc = 0x14E974u;
    {
        const bool branch_taken_0x14e974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E974u;
        // 0x14e978: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e974) {
            ctx->pc = 0x14EA24u;
            goto label_14ea24;
        }
    }
    ctx->pc = 0x14E97Cu;
label_14e97c:
    // 0x14e97c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14e97cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14e980:
    // 0x14e980: 0xc053be8  jal         func_14EFA0
label_14e984:
    if (ctx->pc == 0x14E984u) {
        ctx->pc = 0x14E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E980u;
        // 0x14e984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E988u;
        goto label_14e988;
    }
    ctx->pc = 0x14E980u;
    SET_GPR_U32(ctx, 31, 0x14E988u);
    ctx->pc = 0x14E984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E980u;
    // 0x14e984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EFA0u, 0x14E980u, 0x14E988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E988u;
label_14e988:
    // 0x14e988: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_14e98c:
    if (ctx->pc == 0x14E98Cu) {
        ctx->pc = 0x14E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E988u;
        // 0x14e98c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E990u;
        goto label_14e990;
    }
    ctx->pc = 0x14E988u;
    {
        const bool branch_taken_0x14e988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E988u;
        // 0x14e98c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e988) {
            ctx->pc = 0x14EA48u;
            goto label_14ea48;
        }
    }
    ctx->pc = 0x14E990u;
label_14e990:
    // 0x14e990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e994:
    // 0x14e994: 0xc04dd5c  jal         func_137570
label_14e998:
    if (ctx->pc == 0x14E998u) {
        ctx->pc = 0x14E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E994u;
        // 0x14e998: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E99Cu;
        goto label_14e99c;
    }
    ctx->pc = 0x14E994u;
    SET_GPR_U32(ctx, 31, 0x14E99Cu);
    ctx->pc = 0x14E998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E994u;
    // 0x14e998: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137570u, 0x14E994u, 0x14E99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E99Cu;
label_14e99c:
    // 0x14e99c: 0x1000002b  b           . + 4 + (0x2B << 2)
label_14e9a0:
    if (ctx->pc == 0x14E9A0u) {
        ctx->pc = 0x14E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E99Cu;
        // 0x14e9a0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E9A4u;
        goto label_14e9a4;
    }
    ctx->pc = 0x14E99Cu;
    {
        const bool branch_taken_0x14e99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E99Cu;
        // 0x14e9a0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e99c) {
            ctx->pc = 0x14EA4Cu;
            goto label_14ea4c;
        }
    }
    ctx->pc = 0x14E9A4u;
label_14e9a4:
    // 0x14e9a4: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14e9a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14e9a8:
    // 0x14e9a8: 0xc053c26  jal         func_14F098
label_14e9ac:
    if (ctx->pc == 0x14E9ACu) {
        ctx->pc = 0x14E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9A8u;
        // 0x14e9ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E9B0u;
        goto label_14e9b0;
    }
    ctx->pc = 0x14E9A8u;
    SET_GPR_U32(ctx, 31, 0x14E9B0u);
    ctx->pc = 0x14E9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E9A8u;
    // 0x14e9ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F098u, 0x14E9A8u, 0x14E9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9B0u;
label_14e9b0:
    // 0x14e9b0: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_14e9b4:
    if (ctx->pc == 0x14E9B4u) {
        ctx->pc = 0x14E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9B0u;
        // 0x14e9b4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E9B8u;
        goto label_14e9b8;
    }
    ctx->pc = 0x14E9B0u;
    {
        const bool branch_taken_0x14e9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e9b0) {
            ctx->pc = 0x14E9B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E9B0u;
            // 0x14e9b4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EA4Cu;
            goto label_14ea4c;
        }
    }
    ctx->pc = 0x14E9B8u;
label_14e9b8:
    // 0x14e9b8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x14e9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14e9bc:
    // 0x14e9bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e9c0:
    // 0x14e9c0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x14e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_14e9c4:
    // 0x14e9c4: 0x40f809  jalr        $v0
label_14e9c8:
    if (ctx->pc == 0x14E9C8u) {
        ctx->pc = 0x14E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9C4u;
        // 0x14e9c8: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E9CCu;
        goto label_14e9cc;
    }
    ctx->pc = 0x14E9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14E9CCu);
        ctx->pc = 0x14E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9C4u;
        // 0x14e9c8: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E9C4u, 0x14E9CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E9CCu;
label_14e9cc:
    // 0x14e9cc: 0x1000001f  b           . + 4 + (0x1F << 2)
label_14e9d0:
    if (ctx->pc == 0x14E9D0u) {
        ctx->pc = 0x14E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9CCu;
        // 0x14e9d0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E9D4u;
        goto label_14e9d4;
    }
    ctx->pc = 0x14E9CCu;
    {
        const bool branch_taken_0x14e9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9CCu;
        // 0x14e9d0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e9cc) {
            ctx->pc = 0x14EA4Cu;
            goto label_14ea4c;
        }
    }
    ctx->pc = 0x14E9D4u;
label_14e9d4:
    // 0x14e9d4: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14e9d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14e9d8:
    // 0x14e9d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e9dc:
    // 0x14e9dc: 0xc054830  jal         func_1520C0
label_14e9e0:
    if (ctx->pc == 0x14E9E0u) {
        ctx->pc = 0x14E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9DCu;
        // 0x14e9e0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E9E4u;
        goto label_14e9e4;
    }
    ctx->pc = 0x14E9DCu;
    SET_GPR_U32(ctx, 31, 0x14E9E4u);
    ctx->pc = 0x14E9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E9DCu;
    // 0x14e9e0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1520C0u, 0x14E9DCu, 0x14E9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9E4u;
label_14e9e4:
    // 0x14e9e4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_14e9e8:
    if (ctx->pc == 0x14E9E8u) {
        ctx->pc = 0x14E9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9E4u;
        // 0x14e9e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E9ECu;
        goto label_14e9ec;
    }
    ctx->pc = 0x14E9E4u;
    {
        const bool branch_taken_0x14e9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9E4u;
        // 0x14e9e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e9e4) {
            ctx->pc = 0x14EA20u;
            goto label_14ea20;
        }
    }
    ctx->pc = 0x14E9ECu;
label_14e9ec:
    // 0x14e9ec: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14e9ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14e9f0:
    // 0x14e9f0: 0xc053b00  jal         func_14EC00
label_14e9f4:
    if (ctx->pc == 0x14E9F4u) {
        ctx->pc = 0x14E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9F0u;
        // 0x14e9f4: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E9F8u;
        goto label_14e9f8;
    }
    ctx->pc = 0x14E9F0u;
    SET_GPR_U32(ctx, 31, 0x14E9F8u);
    ctx->pc = 0x14E9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E9F0u;
    // 0x14e9f4: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC00u, 0x14E9F0u, 0x14E9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9F8u;
label_14e9f8:
    // 0x14e9f8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x14e9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_14e9fc:
    // 0x14e9fc: 0xc05414a  jal         func_150528
label_14ea00:
    if (ctx->pc == 0x14EA00u) {
        ctx->pc = 0x14EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9FCu;
        // 0x14ea00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EA04u;
        goto label_14ea04;
    }
    ctx->pc = 0x14E9FCu;
    SET_GPR_U32(ctx, 31, 0x14EA04u);
    ctx->pc = 0x14EA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E9FCu;
    // 0x14ea00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150528u, 0x14E9FCu, 0x14EA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA04u;
label_14ea04:
    // 0x14ea04: 0x10000007  b           . + 4 + (0x7 << 2)
label_14ea08:
    if (ctx->pc == 0x14EA08u) {
        ctx->pc = 0x14EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA04u;
        // 0x14ea08: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EA0Cu;
        goto label_14ea0c;
    }
    ctx->pc = 0x14EA04u;
    {
        const bool branch_taken_0x14ea04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA04u;
        // 0x14ea08: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ea04) {
            ctx->pc = 0x14EA24u;
            goto label_14ea24;
        }
    }
    ctx->pc = 0x14EA0Cu;
label_14ea0c:
    // 0x14ea0c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14ea0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14ea10:
    // 0x14ea10: 0xc054952  jal         func_152548
label_14ea14:
    if (ctx->pc == 0x14EA14u) {
        ctx->pc = 0x14EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA10u;
        // 0x14ea14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EA18u;
        goto label_14ea18;
    }
    ctx->pc = 0x14EA10u;
    SET_GPR_U32(ctx, 31, 0x14EA18u);
    ctx->pc = 0x14EA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EA10u;
    // 0x14ea14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152548u, 0x14EA10u, 0x14EA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA18u;
label_14ea18:
    // 0x14ea18: 0xc053aba  jal         func_14EAE8
label_14ea1c:
    if (ctx->pc == 0x14EA1Cu) {
        ctx->pc = 0x14EA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA18u;
        // 0x14ea1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EA20u;
        goto label_14ea20;
    }
    ctx->pc = 0x14EA18u;
    SET_GPR_U32(ctx, 31, 0x14EA20u);
    ctx->pc = 0x14EA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EA18u;
    // 0x14ea1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EAE8u, 0x14EA18u, 0x14EA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA20u;
label_14ea20:
    // 0x14ea20: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14ea20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14ea24:
    // 0x14ea24: 0xc053b64  jal         func_14ED90
label_14ea28:
    if (ctx->pc == 0x14EA28u) {
        ctx->pc = 0x14EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA24u;
        // 0x14ea28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EA2Cu;
        goto label_14ea2c;
    }
    ctx->pc = 0x14EA24u;
    SET_GPR_U32(ctx, 31, 0x14EA2Cu);
    ctx->pc = 0x14EA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EA24u;
    // 0x14ea28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ED90u, 0x14EA24u, 0x14EA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA2Cu;
label_14ea2c:
    // 0x14ea2c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_14ea30:
    if (ctx->pc == 0x14EA30u) {
        ctx->pc = 0x14EA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA2Cu;
        // 0x14ea30: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EA34u;
        goto label_14ea34;
    }
    ctx->pc = 0x14EA2Cu;
    {
        const bool branch_taken_0x14ea2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ea2c) {
            ctx->pc = 0x14EA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EA2Cu;
            // 0x14ea30: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EA4Cu;
            goto label_14ea4c;
        }
    }
    ctx->pc = 0x14EA34u;
label_14ea34:
    // 0x14ea34: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14ea34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14ea38:
    // 0x14ea38: 0xc053b7c  jal         func_14EDF0
label_14ea3c:
    if (ctx->pc == 0x14EA3Cu) {
        ctx->pc = 0x14EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA38u;
        // 0x14ea3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EA40u;
        goto label_14ea40;
    }
    ctx->pc = 0x14EA38u;
    SET_GPR_U32(ctx, 31, 0x14EA40u);
    ctx->pc = 0x14EA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EA38u;
    // 0x14ea3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EDF0u, 0x14EA38u, 0x14EA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA40u;
label_14ea40:
    // 0x14ea40: 0xc054336  jal         func_150CD8
label_14ea44:
    if (ctx->pc == 0x14EA44u) {
        ctx->pc = 0x14EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA40u;
        // 0x14ea44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EA48u;
        goto label_14ea48;
    }
    ctx->pc = 0x14EA40u;
    SET_GPR_U32(ctx, 31, 0x14EA48u);
    ctx->pc = 0x14EA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EA40u;
    // 0x14ea44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150CD8u, 0x14EA40u, 0x14EA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA48u;
label_14ea48:
    // 0x14ea48: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14ea48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14ea4c:
    // 0x14ea4c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14ea4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_14ea50:
    // 0x14ea50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14ea50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14ea54:
    // 0x14ea54: 0x3e00008  jr          $ra
label_14ea58:
    if (ctx->pc == 0x14EA58u) {
        ctx->pc = 0x14EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA54u;
        // 0x14ea58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EA5Cu;
        goto label_14ea5c;
    }
    ctx->pc = 0x14EA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA54u;
        // 0x14ea58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EA5Cu;
label_14ea5c:
    // 0x14ea5c: 0x0  nop
    ctx->pc = 0x14ea5cu;
    // NOP
    ctx->pc = 0x14ea60u;
}
