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

// Function: sub_001AC630
// Address: 0x1ac630 - 0x1ac8a0
void sub_001AC630_0x1ac630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC630_0x1ac630");
#endif

    switch (ctx->pc) {
        case 0x1ac630u: goto label_1ac630;
        case 0x1ac634u: goto label_1ac634;
        case 0x1ac638u: goto label_1ac638;
        case 0x1ac63cu: goto label_1ac63c;
        case 0x1ac640u: goto label_1ac640;
        case 0x1ac644u: goto label_1ac644;
        case 0x1ac648u: goto label_1ac648;
        case 0x1ac64cu: goto label_1ac64c;
        case 0x1ac650u: goto label_1ac650;
        case 0x1ac654u: goto label_1ac654;
        case 0x1ac658u: goto label_1ac658;
        case 0x1ac65cu: goto label_1ac65c;
        case 0x1ac660u: goto label_1ac660;
        case 0x1ac664u: goto label_1ac664;
        case 0x1ac668u: goto label_1ac668;
        case 0x1ac66cu: goto label_1ac66c;
        case 0x1ac670u: goto label_1ac670;
        case 0x1ac674u: goto label_1ac674;
        case 0x1ac678u: goto label_1ac678;
        case 0x1ac67cu: goto label_1ac67c;
        case 0x1ac680u: goto label_1ac680;
        case 0x1ac684u: goto label_1ac684;
        case 0x1ac688u: goto label_1ac688;
        case 0x1ac68cu: goto label_1ac68c;
        case 0x1ac690u: goto label_1ac690;
        case 0x1ac694u: goto label_1ac694;
        case 0x1ac698u: goto label_1ac698;
        case 0x1ac69cu: goto label_1ac69c;
        case 0x1ac6a0u: goto label_1ac6a0;
        case 0x1ac6a4u: goto label_1ac6a4;
        case 0x1ac6a8u: goto label_1ac6a8;
        case 0x1ac6acu: goto label_1ac6ac;
        case 0x1ac6b0u: goto label_1ac6b0;
        case 0x1ac6b4u: goto label_1ac6b4;
        case 0x1ac6b8u: goto label_1ac6b8;
        case 0x1ac6bcu: goto label_1ac6bc;
        case 0x1ac6c0u: goto label_1ac6c0;
        case 0x1ac6c4u: goto label_1ac6c4;
        case 0x1ac6c8u: goto label_1ac6c8;
        case 0x1ac6ccu: goto label_1ac6cc;
        case 0x1ac6d0u: goto label_1ac6d0;
        case 0x1ac6d4u: goto label_1ac6d4;
        case 0x1ac6d8u: goto label_1ac6d8;
        case 0x1ac6dcu: goto label_1ac6dc;
        case 0x1ac6e0u: goto label_1ac6e0;
        case 0x1ac6e4u: goto label_1ac6e4;
        case 0x1ac6e8u: goto label_1ac6e8;
        case 0x1ac6ecu: goto label_1ac6ec;
        case 0x1ac6f0u: goto label_1ac6f0;
        case 0x1ac6f4u: goto label_1ac6f4;
        case 0x1ac6f8u: goto label_1ac6f8;
        case 0x1ac6fcu: goto label_1ac6fc;
        case 0x1ac700u: goto label_1ac700;
        case 0x1ac704u: goto label_1ac704;
        case 0x1ac708u: goto label_1ac708;
        case 0x1ac70cu: goto label_1ac70c;
        case 0x1ac710u: goto label_1ac710;
        case 0x1ac714u: goto label_1ac714;
        case 0x1ac718u: goto label_1ac718;
        case 0x1ac71cu: goto label_1ac71c;
        case 0x1ac720u: goto label_1ac720;
        case 0x1ac724u: goto label_1ac724;
        case 0x1ac728u: goto label_1ac728;
        case 0x1ac72cu: goto label_1ac72c;
        case 0x1ac730u: goto label_1ac730;
        case 0x1ac734u: goto label_1ac734;
        case 0x1ac738u: goto label_1ac738;
        case 0x1ac73cu: goto label_1ac73c;
        case 0x1ac740u: goto label_1ac740;
        case 0x1ac744u: goto label_1ac744;
        case 0x1ac748u: goto label_1ac748;
        case 0x1ac74cu: goto label_1ac74c;
        case 0x1ac750u: goto label_1ac750;
        case 0x1ac754u: goto label_1ac754;
        case 0x1ac758u: goto label_1ac758;
        case 0x1ac75cu: goto label_1ac75c;
        case 0x1ac760u: goto label_1ac760;
        case 0x1ac764u: goto label_1ac764;
        case 0x1ac768u: goto label_1ac768;
        case 0x1ac76cu: goto label_1ac76c;
        case 0x1ac770u: goto label_1ac770;
        case 0x1ac774u: goto label_1ac774;
        case 0x1ac778u: goto label_1ac778;
        case 0x1ac77cu: goto label_1ac77c;
        case 0x1ac780u: goto label_1ac780;
        case 0x1ac784u: goto label_1ac784;
        case 0x1ac788u: goto label_1ac788;
        case 0x1ac78cu: goto label_1ac78c;
        case 0x1ac790u: goto label_1ac790;
        case 0x1ac794u: goto label_1ac794;
        case 0x1ac798u: goto label_1ac798;
        case 0x1ac79cu: goto label_1ac79c;
        case 0x1ac7a0u: goto label_1ac7a0;
        case 0x1ac7a4u: goto label_1ac7a4;
        case 0x1ac7a8u: goto label_1ac7a8;
        case 0x1ac7acu: goto label_1ac7ac;
        case 0x1ac7b0u: goto label_1ac7b0;
        case 0x1ac7b4u: goto label_1ac7b4;
        case 0x1ac7b8u: goto label_1ac7b8;
        case 0x1ac7bcu: goto label_1ac7bc;
        case 0x1ac7c0u: goto label_1ac7c0;
        case 0x1ac7c4u: goto label_1ac7c4;
        case 0x1ac7c8u: goto label_1ac7c8;
        case 0x1ac7ccu: goto label_1ac7cc;
        case 0x1ac7d0u: goto label_1ac7d0;
        case 0x1ac7d4u: goto label_1ac7d4;
        case 0x1ac7d8u: goto label_1ac7d8;
        case 0x1ac7dcu: goto label_1ac7dc;
        case 0x1ac7e0u: goto label_1ac7e0;
        case 0x1ac7e4u: goto label_1ac7e4;
        case 0x1ac7e8u: goto label_1ac7e8;
        case 0x1ac7ecu: goto label_1ac7ec;
        case 0x1ac7f0u: goto label_1ac7f0;
        case 0x1ac7f4u: goto label_1ac7f4;
        case 0x1ac7f8u: goto label_1ac7f8;
        case 0x1ac7fcu: goto label_1ac7fc;
        case 0x1ac800u: goto label_1ac800;
        case 0x1ac804u: goto label_1ac804;
        case 0x1ac808u: goto label_1ac808;
        case 0x1ac80cu: goto label_1ac80c;
        case 0x1ac810u: goto label_1ac810;
        case 0x1ac814u: goto label_1ac814;
        case 0x1ac818u: goto label_1ac818;
        case 0x1ac81cu: goto label_1ac81c;
        case 0x1ac820u: goto label_1ac820;
        case 0x1ac824u: goto label_1ac824;
        case 0x1ac828u: goto label_1ac828;
        case 0x1ac82cu: goto label_1ac82c;
        case 0x1ac830u: goto label_1ac830;
        case 0x1ac834u: goto label_1ac834;
        case 0x1ac838u: goto label_1ac838;
        case 0x1ac83cu: goto label_1ac83c;
        case 0x1ac840u: goto label_1ac840;
        case 0x1ac844u: goto label_1ac844;
        case 0x1ac848u: goto label_1ac848;
        case 0x1ac84cu: goto label_1ac84c;
        case 0x1ac850u: goto label_1ac850;
        case 0x1ac854u: goto label_1ac854;
        case 0x1ac858u: goto label_1ac858;
        case 0x1ac85cu: goto label_1ac85c;
        case 0x1ac860u: goto label_1ac860;
        case 0x1ac864u: goto label_1ac864;
        case 0x1ac868u: goto label_1ac868;
        case 0x1ac86cu: goto label_1ac86c;
        case 0x1ac870u: goto label_1ac870;
        case 0x1ac874u: goto label_1ac874;
        case 0x1ac878u: goto label_1ac878;
        case 0x1ac87cu: goto label_1ac87c;
        case 0x1ac880u: goto label_1ac880;
        case 0x1ac884u: goto label_1ac884;
        case 0x1ac888u: goto label_1ac888;
        case 0x1ac88cu: goto label_1ac88c;
        case 0x1ac890u: goto label_1ac890;
        case 0x1ac894u: goto label_1ac894;
        case 0x1ac898u: goto label_1ac898;
        case 0x1ac89cu: goto label_1ac89c;
        default: break;
    }

    ctx->pc = 0x1ac630u;

label_1ac630:
    // 0x1ac630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ac630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ac634:
    // 0x1ac634: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ac634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac638:
    // 0x1ac638: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ac638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1ac63c:
    // 0x1ac63c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ac63cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac640:
    // 0x1ac640: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ac640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1ac644:
    // 0x1ac644: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ac644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1ac648:
    // 0x1ac648: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1ac648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1ac64c:
    // 0x1ac64c: 0xc06a4c2  jal         func_1A9308
label_1ac650:
    if (ctx->pc == 0x1AC650u) {
        ctx->pc = 0x1AC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC64Cu;
        // 0x1ac650: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC654u;
        goto label_1ac654;
    }
    ctx->pc = 0x1AC64Cu;
    SET_GPR_U32(ctx, 31, 0x1AC654u);
    ctx->pc = 0x1AC650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC64Cu;
    // 0x1ac650: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AC64Cu, 0x1AC654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC654u;
label_1ac654:
    // 0x1ac654: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac658:
    // 0x1ac658: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1ac658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_1ac65c:
    // 0x1ac65c: 0xc069712  jal         func_1A5C48
label_1ac660:
    if (ctx->pc == 0x1AC660u) {
        ctx->pc = 0x1AC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC65Cu;
        // 0x1ac660: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC664u;
        goto label_1ac664;
    }
    ctx->pc = 0x1AC65Cu;
    SET_GPR_U32(ctx, 31, 0x1AC664u);
    ctx->pc = 0x1AC660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC65Cu;
    // 0x1ac660: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1AC65Cu, 0x1AC664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC664u;
label_1ac664:
    // 0x1ac664: 0x8e2301e4  lw          $v1, 0x1E4($s1)
    ctx->pc = 0x1ac664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
label_1ac668:
    // 0x1ac668: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ac668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac66c:
    // 0x1ac66c: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1ac66cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
label_1ac670:
    // 0x1ac670: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1ac670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_1ac674:
    // 0x1ac674: 0xa462002a  sh          $v0, 0x2A($v1)
    ctx->pc = 0x1ac674u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 2));
label_1ac678:
    // 0x1ac678: 0x8e2401e4  lw          $a0, 0x1E4($s1)
    ctx->pc = 0x1ac678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
label_1ac67c:
    // 0x1ac67c: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x1ac67cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
label_1ac680:
    // 0x1ac680: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x1ac680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_1ac684:
    // 0x1ac684: 0xa482002a  sh          $v0, 0x2A($a0)
    ctx->pc = 0x1ac684u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 2));
label_1ac688:
    // 0x1ac688: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x1ac688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac68c:
    // 0x1ac68c: 0x8c620110  lw          $v0, 0x110($v1)
    ctx->pc = 0x1ac68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_1ac690:
    // 0x1ac690: 0xa0450030  sb          $a1, 0x30($v0)
    ctx->pc = 0x1ac690u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 48), (uint8_t)GPR_U32(ctx, 5));
label_1ac694:
    // 0x1ac694: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x1ac694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac698:
    // 0x1ac698: 0x8e2401e4  lw          $a0, 0x1E4($s1)
    ctx->pc = 0x1ac698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
label_1ac69c:
    // 0x1ac69c: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
label_1ac6a0:
    if (ctx->pc == 0x1AC6A0u) {
        ctx->pc = 0x1AC6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC69Cu;
        // 0x1ac6a0: 0x8c5000c4  lw          $s0, 0xC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC6A4u;
        goto label_1ac6a4;
    }
    ctx->pc = 0x1AC69Cu;
    {
        const bool branch_taken_0x1ac69c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC69Cu;
        // 0x1ac6a0: 0x8c5000c4  lw          $s0, 0xC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac69c) {
            ctx->pc = 0x1AC6CCu;
            goto label_1ac6cc;
        }
    }
    ctx->pc = 0x1AC6A4u;
label_1ac6a4:
    // 0x1ac6a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ac6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac6a8:
    // 0x1ac6a8: 0x262301ec  addiu       $v1, $s1, 0x1EC
    ctx->pc = 0x1ac6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 492));
label_1ac6ac:
    // 0x1ac6ac: 0x0  nop
    ctx->pc = 0x1ac6acu;
    // NOP
label_1ac6b0:
    // 0x1ac6b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ac6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ac6b4:
    // 0x1ac6b4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_1ac6b8:
    if (ctx->pc == 0x1AC6B8u) {
        ctx->pc = 0x1AC6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6B4u;
        // 0x1ac6b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC6BCu;
        goto label_1ac6bc;
    }
    ctx->pc = 0x1AC6B4u;
    {
        const bool branch_taken_0x1ac6b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6B4u;
        // 0x1ac6b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac6b4) {
            ctx->pc = 0x1AC6CCu;
            goto label_1ac6cc;
        }
    }
    ctx->pc = 0x1AC6BCu;
label_1ac6bc:
    // 0x1ac6bc: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x1ac6bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_1ac6c0:
    // 0x1ac6c0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_1ac6c4:
    if (ctx->pc == 0x1AC6C4u) {
        ctx->pc = 0x1AC6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6C0u;
        // 0x1ac6c4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC6C8u;
        goto label_1ac6c8;
    }
    ctx->pc = 0x1AC6C0u;
    {
        const bool branch_taken_0x1ac6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6C0u;
        // 0x1ac6c4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac6c0) {
            ctx->pc = 0x1AC6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac6b0;
        }
    }
    ctx->pc = 0x1AC6C8u;
label_1ac6c8:
    // 0x1ac6c8: 0x8e2401e8  lw          $a0, 0x1E8($s1)
    ctx->pc = 0x1ac6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
label_1ac6cc:
    // 0x1ac6cc: 0xc074152  jal         func_1D0548
label_1ac6d0:
    if (ctx->pc == 0x1AC6D0u) {
        ctx->pc = 0x1AC6D4u;
        goto label_1ac6d4;
    }
    ctx->pc = 0x1AC6CCu;
    SET_GPR_U32(ctx, 31, 0x1AC6D4u);
    ctx->pc = 0x1D0548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0548u, 0x1AC6CCu, 0x1AC6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC6D4u;
label_1ac6d4:
    // 0x1ac6d4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1ac6d8:
    if (ctx->pc == 0x1AC6D8u) {
        ctx->pc = 0x1AC6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6D4u;
        // 0x1ac6d8: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC6DCu;
        goto label_1ac6dc;
    }
    ctx->pc = 0x1AC6D4u;
    {
        const bool branch_taken_0x1ac6d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac6d4) {
            ctx->pc = 0x1AC6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC6D4u;
            // 0x1ac6d8: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC6FCu;
            goto label_1ac6fc;
        }
    }
    ctx->pc = 0x1AC6DCu;
label_1ac6dc:
    // 0x1ac6dc: 0xc076826  jal         func_1DA098
label_1ac6e0:
    if (ctx->pc == 0x1AC6E0u) {
        ctx->pc = 0x1AC6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6DCu;
        // 0x1ac6e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC6E4u;
        goto label_1ac6e4;
    }
    ctx->pc = 0x1AC6DCu;
    SET_GPR_U32(ctx, 31, 0x1AC6E4u);
    ctx->pc = 0x1AC6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC6DCu;
    // 0x1ac6e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA098u, 0x1AC6DCu, 0x1AC6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC6E4u;
label_1ac6e4:
    // 0x1ac6e4: 0x8e300148  lw          $s0, 0x148($s1)
    ctx->pc = 0x1ac6e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac6e8:
    // 0x1ac6e8: 0xc076826  jal         func_1DA098
label_1ac6ec:
    if (ctx->pc == 0x1AC6ECu) {
        ctx->pc = 0x1AC6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6E8u;
        // 0x1ac6ec: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC6F0u;
        goto label_1ac6f0;
    }
    ctx->pc = 0x1AC6E8u;
    SET_GPR_U32(ctx, 31, 0x1AC6F0u);
    ctx->pc = 0x1AC6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC6E8u;
    // 0x1ac6ec: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA098u, 0x1AC6E8u, 0x1AC6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC6F0u;
label_1ac6f0:
    // 0x1ac6f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac6f4:
    // 0x1ac6f4: 0x10000064  b           . + 4 + (0x64 << 2)
label_1ac6f8:
    if (ctx->pc == 0x1AC6F8u) {
        ctx->pc = 0x1AC6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6F4u;
        // 0x1ac6f8: 0xae020fd0  sw          $v0, 0xFD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC6FCu;
        goto label_1ac6fc;
    }
    ctx->pc = 0x1AC6F4u;
    {
        const bool branch_taken_0x1ac6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6F4u;
        // 0x1ac6f8: 0xae020fd0  sw          $v0, 0xFD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac6f4) {
            ctx->pc = 0x1AC888u;
            goto label_1ac888;
        }
    }
    ctx->pc = 0x1AC6FCu;
label_1ac6fc:
    // 0x1ac6fc: 0x8c92010c  lw          $s2, 0x10C($a0)
    ctx->pc = 0x1ac6fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
label_1ac700:
    // 0x1ac700: 0x924200a8  lbu         $v0, 0xA8($s2)
    ctx->pc = 0x1ac700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 168)));
label_1ac704:
    // 0x1ac704: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
label_1ac708:
    if (ctx->pc == 0x1AC708u) {
        ctx->pc = 0x1AC70Cu;
        goto label_1ac70c;
    }
    ctx->pc = 0x1AC704u;
    {
        const bool branch_taken_0x1ac704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac704) {
            ctx->pc = 0x1AC878u;
            goto label_1ac878;
        }
    }
    ctx->pc = 0x1AC70Cu;
label_1ac70c:
    // 0x1ac70c: 0xc08fc4e  jal         func_23F138
label_1ac710:
    if (ctx->pc == 0x1AC710u) {
        ctx->pc = 0x1AC710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC70Cu;
        // 0x1ac710: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC714u;
        goto label_1ac714;
    }
    ctx->pc = 0x1AC70Cu;
    SET_GPR_U32(ctx, 31, 0x1AC714u);
    ctx->pc = 0x1AC710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC70Cu;
    // 0x1ac710: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F138u, 0x1AC70Cu, 0x1AC714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC714u;
label_1ac714:
    // 0x1ac714: 0x92020032  lbu         $v0, 0x32($s0)
    ctx->pc = 0x1ac714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 50)));
label_1ac718:
    // 0x1ac718: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1ac718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_1ac71c:
    // 0x1ac71c: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x1ac71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
label_1ac720:
    // 0x1ac720: 0xa2020032  sb          $v0, 0x32($s0)
    ctx->pc = 0x1ac720u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 2));
label_1ac724:
    // 0x1ac724: 0x8e300148  lw          $s0, 0x148($s1)
    ctx->pc = 0x1ac724u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac728:
    // 0x1ac728: 0xc07682a  jal         func_1DA0A8
label_1ac72c:
    if (ctx->pc == 0x1AC72Cu) {
        ctx->pc = 0x1AC72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC728u;
        // 0x1ac72c: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC730u;
        goto label_1ac730;
    }
    ctx->pc = 0x1AC728u;
    SET_GPR_U32(ctx, 31, 0x1AC730u);
    ctx->pc = 0x1AC72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC728u;
    // 0x1ac72c: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA0A8u, 0x1AC728u, 0x1AC730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC730u;
label_1ac730:
    // 0x1ac730: 0xae000fd0  sw          $zero, 0xFD0($s0)
    ctx->pc = 0x1ac730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4048), GPR_U32(ctx, 0));
label_1ac734:
    // 0x1ac734: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ac734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ac738:
    // 0x1ac738: 0xc08bd96  jal         func_22F658
label_1ac73c:
    if (ctx->pc == 0x1AC73Cu) {
        ctx->pc = 0x1AC73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC738u;
        // 0x1ac73c: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC740u;
        goto label_1ac740;
    }
    ctx->pc = 0x1AC738u;
    SET_GPR_U32(ctx, 31, 0x1AC740u);
    ctx->pc = 0x1AC73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC738u;
    // 0x1ac73c: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x1AC738u, 0x1AC740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC740u;
label_1ac740:
    // 0x1ac740: 0xa24000a8  sb          $zero, 0xA8($s2)
    ctx->pc = 0x1ac740u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 168), (uint8_t)GPR_U32(ctx, 0));
label_1ac744:
    // 0x1ac744: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x1ac744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1ac748:
    // 0x1ac748: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac74c:
    // 0x1ac74c: 0xc08fed2  jal         func_23FB48
label_1ac750:
    if (ctx->pc == 0x1AC750u) {
        ctx->pc = 0x1AC750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC74Cu;
        // 0x1ac750: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC754u;
        goto label_1ac754;
    }
    ctx->pc = 0x1AC74Cu;
    SET_GPR_U32(ctx, 31, 0x1AC754u);
    ctx->pc = 0x1AC750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC74Cu;
    // 0x1ac750: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x1AC74Cu, 0x1AC754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC754u;
label_1ac754:
    // 0x1ac754: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1ac754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac758:
    // 0x1ac758: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1ac758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_1ac75c:
    // 0x1ac75c: 0xc08fed2  jal         func_23FB48
label_1ac760:
    if (ctx->pc == 0x1AC760u) {
        ctx->pc = 0x1AC760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC75Cu;
        // 0x1ac760: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC764u;
        goto label_1ac764;
    }
    ctx->pc = 0x1AC75Cu;
    SET_GPR_U32(ctx, 31, 0x1AC764u);
    ctx->pc = 0x1AC760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC75Cu;
    // 0x1ac760: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x1AC75Cu, 0x1AC764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC764u;
label_1ac764:
    // 0x1ac764: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1ac764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac768:
    // 0x1ac768: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x1ac768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_1ac76c:
    // 0x1ac76c: 0xc08fed2  jal         func_23FB48
label_1ac770:
    if (ctx->pc == 0x1AC770u) {
        ctx->pc = 0x1AC770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC76Cu;
        // 0x1ac770: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC774u;
        goto label_1ac774;
    }
    ctx->pc = 0x1AC76Cu;
    SET_GPR_U32(ctx, 31, 0x1AC774u);
    ctx->pc = 0x1AC770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC76Cu;
    // 0x1ac770: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x1AC76Cu, 0x1AC774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC774u;
label_1ac774:
    // 0x1ac774: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x1ac774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac778:
    // 0x1ac778: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1ac778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
label_1ac77c:
    // 0x1ac77c: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1ac77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac780:
    // 0x1ac780: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x1ac780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_1ac784:
    // 0x1ac784: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x1ac784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_1ac788:
    // 0x1ac788: 0x40f809  jalr        $v0
label_1ac78c:
    if (ctx->pc == 0x1AC78Cu) {
        ctx->pc = 0x1AC790u;
        goto label_1ac790;
    }
    ctx->pc = 0x1AC788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC790u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC788u, 0x1AC790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC790u;
label_1ac790:
    // 0x1ac790: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1ac790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac794:
    // 0x1ac794: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x1ac794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_1ac798:
    // 0x1ac798: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ac798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ac79c:
    // 0x1ac79c: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x1ac79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ac7a0:
    // 0x1ac7a0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1ac7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_1ac7a4:
    // 0x1ac7a4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1ac7a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1ac7a8:
    // 0x1ac7a8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1ac7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac7ac:
    // 0x1ac7ac: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1ac7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1ac7b0:
    // 0x1ac7b0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1ac7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ac7b4:
    // 0x1ac7b4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1ac7b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1ac7b8:
    // 0x1ac7b8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1ac7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac7bc:
    // 0x1ac7bc: 0xc08fde2  jal         func_23F788
label_1ac7c0:
    if (ctx->pc == 0x1AC7C0u) {
        ctx->pc = 0x1AC7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7BCu;
        // 0x1ac7c0: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC7C4u;
        goto label_1ac7c4;
    }
    ctx->pc = 0x1AC7BCu;
    SET_GPR_U32(ctx, 31, 0x1AC7C4u);
    ctx->pc = 0x1AC7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC7BCu;
    // 0x1ac7c0: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F788u, 0x1AC7BCu, 0x1AC7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC7C4u;
label_1ac7c4:
    // 0x1ac7c4: 0xc44000fc  lwc1        $f0, 0xFC($v0)
    ctx->pc = 0x1ac7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac7c8:
    // 0x1ac7c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ac7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ac7cc:
    // 0x1ac7cc: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1ac7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac7d0:
    // 0x1ac7d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ac7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac7d4:
    // 0x1ac7d4: 0xc09568e  jal         func_255A38
label_1ac7d8:
    if (ctx->pc == 0x1AC7D8u) {
        ctx->pc = 0x1AC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7D4u;
        // 0x1ac7d8: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC7DCu;
        goto label_1ac7dc;
    }
    ctx->pc = 0x1AC7D4u;
    SET_GPR_U32(ctx, 31, 0x1AC7DCu);
    ctx->pc = 0x1AC7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC7D4u;
    // 0x1ac7d8: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x255A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255A38u, 0x1AC7D4u, 0x1AC7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC7DCu;
label_1ac7dc:
    // 0x1ac7dc: 0xc08fde2  jal         func_23F788
label_1ac7e0:
    if (ctx->pc == 0x1AC7E0u) {
        ctx->pc = 0x1AC7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7DCu;
        // 0x1ac7e0: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC7E4u;
        goto label_1ac7e4;
    }
    ctx->pc = 0x1AC7DCu;
    SET_GPR_U32(ctx, 31, 0x1AC7E4u);
    ctx->pc = 0x1AC7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC7DCu;
    // 0x1ac7e0: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F788u, 0x1AC7DCu, 0x1AC7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC7E4u;
label_1ac7e4:
    // 0x1ac7e4: 0xc094224  jal         func_250890
label_1ac7e8:
    if (ctx->pc == 0x1AC7E8u) {
        ctx->pc = 0x1AC7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7E4u;
        // 0x1ac7e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC7ECu;
        goto label_1ac7ec;
    }
    ctx->pc = 0x1AC7E4u;
    SET_GPR_U32(ctx, 31, 0x1AC7ECu);
    ctx->pc = 0x1AC7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC7E4u;
    // 0x1ac7e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250890u, 0x1AC7E4u, 0x1AC7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC7ECu;
label_1ac7ec:
    // 0x1ac7ec: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1ac7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac7f0:
    // 0x1ac7f0: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x1ac7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_1ac7f4:
    // 0x1ac7f4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1ac7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1ac7f8:
    // 0x1ac7f8: 0x40f809  jalr        $v0
label_1ac7fc:
    if (ctx->pc == 0x1AC7FCu) {
        ctx->pc = 0x1AC7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7F8u;
        // 0x1ac7fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC800u;
        goto label_1ac800;
    }
    ctx->pc = 0x1AC7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC800u);
        ctx->pc = 0x1AC7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7F8u;
        // 0x1ac7fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC7F8u, 0x1AC800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC800u;
label_1ac800:
    // 0x1ac800: 0xc0797fe  jal         func_1E5FF8
label_1ac804:
    if (ctx->pc == 0x1AC804u) {
        ctx->pc = 0x1AC808u;
        goto label_1ac808;
    }
    ctx->pc = 0x1AC800u;
    SET_GPR_U32(ctx, 31, 0x1AC808u);
    ctx->pc = 0x1E5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5FF8u, 0x1AC800u, 0x1AC808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC808u;
label_1ac808:
    // 0x1ac808: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ac80c:
    if (ctx->pc == 0x1AC80Cu) {
        ctx->pc = 0x1AC80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC808u;
        // 0x1ac80c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC810u;
        goto label_1ac810;
    }
    ctx->pc = 0x1AC808u;
    {
        const bool branch_taken_0x1ac808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC808u;
        // 0x1ac80c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac808) {
            ctx->pc = 0x1AC82Cu;
            goto label_1ac82c;
        }
    }
    ctx->pc = 0x1AC810u;
label_1ac810:
    // 0x1ac810: 0xc0927f2  jal         func_249FC8
label_1ac814:
    if (ctx->pc == 0x1AC814u) {
        ctx->pc = 0x1AC814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC810u;
        // 0x1ac814: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC818u;
        goto label_1ac818;
    }
    ctx->pc = 0x1AC810u;
    SET_GPR_U32(ctx, 31, 0x1AC818u);
    ctx->pc = 0x1AC814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC810u;
    // 0x1ac814: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249FC8u, 0x1AC810u, 0x1AC818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC818u;
label_1ac818:
    // 0x1ac818: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac81c:
    // 0x1ac81c: 0xc06a23e  jal         func_1A88F8
label_1ac820:
    if (ctx->pc == 0x1AC820u) {
        ctx->pc = 0x1AC820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC81Cu;
        // 0x1ac820: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC824u;
        goto label_1ac824;
    }
    ctx->pc = 0x1AC81Cu;
    SET_GPR_U32(ctx, 31, 0x1AC824u);
    ctx->pc = 0x1AC820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC81Cu;
    // 0x1ac820: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x1AC81Cu, 0x1AC824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC824u;
label_1ac824:
    // 0x1ac824: 0x1000000a  b           . + 4 + (0xA << 2)
label_1ac828:
    if (ctx->pc == 0x1AC828u) {
        ctx->pc = 0x1AC828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC824u;
        // 0x1ac828: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC82Cu;
        goto label_1ac82c;
    }
    ctx->pc = 0x1AC824u;
    {
        const bool branch_taken_0x1ac824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC824u;
        // 0x1ac828: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac824) {
            ctx->pc = 0x1AC850u;
            goto label_1ac850;
        }
    }
    ctx->pc = 0x1AC82Cu;
label_1ac82c:
    // 0x1ac82c: 0xc06974a  jal         func_1A5D28
label_1ac830:
    if (ctx->pc == 0x1AC830u) {
        ctx->pc = 0x1AC830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC82Cu;
        // 0x1ac830: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC834u;
        goto label_1ac834;
    }
    ctx->pc = 0x1AC82Cu;
    SET_GPR_U32(ctx, 31, 0x1AC834u);
    ctx->pc = 0x1AC830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC82Cu;
    // 0x1ac830: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x1AC82Cu, 0x1AC834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC834u;
label_1ac834:
    // 0x1ac834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac838:
    // 0x1ac838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac83c:
    // 0x1ac83c: 0xae220160  sw          $v0, 0x160($s1)
    ctx->pc = 0x1ac83cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
label_1ac840:
    // 0x1ac840: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ac840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac844:
    // 0x1ac844: 0xc06a23e  jal         func_1A88F8
label_1ac848:
    if (ctx->pc == 0x1AC848u) {
        ctx->pc = 0x1AC848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC844u;
        // 0x1ac848: 0xae220190  sw          $v0, 0x190($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC84Cu;
        goto label_1ac84c;
    }
    ctx->pc = 0x1AC844u;
    SET_GPR_U32(ctx, 31, 0x1AC84Cu);
    ctx->pc = 0x1AC848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC844u;
    // 0x1ac848: 0xae220190  sw          $v0, 0x190($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x1AC844u, 0x1AC84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC84Cu;
label_1ac84c:
    // 0x1ac84c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac850:
    // 0x1ac850: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x1ac850u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
label_1ac854:
    // 0x1ac854: 0xc08fd00  jal         func_23F400
label_1ac858:
    if (ctx->pc == 0x1AC858u) {
        ctx->pc = 0x1AC858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC854u;
        // 0x1ac858: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC85Cu;
        goto label_1ac85c;
    }
    ctx->pc = 0x1AC854u;
    SET_GPR_U32(ctx, 31, 0x1AC85Cu);
    ctx->pc = 0x1AC858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC854u;
    // 0x1ac858: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F400u, 0x1AC854u, 0x1AC85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC85Cu;
label_1ac85c:
    // 0x1ac85c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ac860:
    if (ctx->pc == 0x1AC860u) {
        ctx->pc = 0x1AC864u;
        goto label_1ac864;
    }
    ctx->pc = 0x1AC85Cu;
    {
        const bool branch_taken_0x1ac85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac85c) {
            ctx->pc = 0x1AC878u;
            goto label_1ac878;
        }
    }
    ctx->pc = 0x1AC864u;
label_1ac864:
    // 0x1ac864: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1ac864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac868:
    // 0x1ac868: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x1ac868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_1ac86c:
    // 0x1ac86c: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x1ac86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_1ac870:
    // 0x1ac870: 0x40f809  jalr        $v0
label_1ac874:
    if (ctx->pc == 0x1AC874u) {
        ctx->pc = 0x1AC874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC870u;
        // 0x1ac874: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC878u;
        goto label_1ac878;
    }
    ctx->pc = 0x1AC870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC878u);
        ctx->pc = 0x1AC874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC870u;
        // 0x1ac874: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC870u, 0x1AC878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC878u;
label_1ac878:
    // 0x1ac878: 0xc08fde2  jal         func_23F788
label_1ac87c:
    if (ctx->pc == 0x1AC87Cu) {
        ctx->pc = 0x1AC87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC878u;
        // 0x1ac87c: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC880u;
        goto label_1ac880;
    }
    ctx->pc = 0x1AC878u;
    SET_GPR_U32(ctx, 31, 0x1AC880u);
    ctx->pc = 0x1AC87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC878u;
    // 0x1ac87c: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F788u, 0x1AC878u, 0x1AC880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC880u;
label_1ac880:
    // 0x1ac880: 0xc094346  jal         func_250D18
label_1ac884:
    if (ctx->pc == 0x1AC884u) {
        ctx->pc = 0x1AC884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC880u;
        // 0x1ac884: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC888u;
        goto label_1ac888;
    }
    ctx->pc = 0x1AC880u;
    SET_GPR_U32(ctx, 31, 0x1AC888u);
    ctx->pc = 0x1AC884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC880u;
    // 0x1ac884: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250D18u, 0x1AC880u, 0x1AC888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC888u;
label_1ac888:
    // 0x1ac888: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac88c:
    // 0x1ac88c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ac88cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1ac890:
    // 0x1ac890: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ac890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac894:
    // 0x1ac894: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ac894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1ac898:
    // 0x1ac898: 0x3e00008  jr          $ra
label_1ac89c:
    if (ctx->pc == 0x1AC89Cu) {
        ctx->pc = 0x1AC89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC898u;
        // 0x1ac89c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC8A0u;
        goto label_fallthrough_0x1ac898;
    }
    ctx->pc = 0x1AC898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC898u;
        // 0x1ac89c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ac898:
    ctx->pc = 0x1AC8A0u;
}
