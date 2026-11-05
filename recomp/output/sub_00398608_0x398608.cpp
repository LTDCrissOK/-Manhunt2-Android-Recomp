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

// Function: sub_00398608
// Address: 0x398608 - 0x3989d8
void sub_00398608_0x398608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398608_0x398608");
#endif

    switch (ctx->pc) {
        case 0x398608u: goto label_398608;
        case 0x39860cu: goto label_39860c;
        case 0x398610u: goto label_398610;
        case 0x398614u: goto label_398614;
        case 0x398618u: goto label_398618;
        case 0x39861cu: goto label_39861c;
        case 0x398620u: goto label_398620;
        case 0x398624u: goto label_398624;
        case 0x398628u: goto label_398628;
        case 0x39862cu: goto label_39862c;
        case 0x398630u: goto label_398630;
        case 0x398634u: goto label_398634;
        case 0x398638u: goto label_398638;
        case 0x39863cu: goto label_39863c;
        case 0x398640u: goto label_398640;
        case 0x398644u: goto label_398644;
        case 0x398648u: goto label_398648;
        case 0x39864cu: goto label_39864c;
        case 0x398650u: goto label_398650;
        case 0x398654u: goto label_398654;
        case 0x398658u: goto label_398658;
        case 0x39865cu: goto label_39865c;
        case 0x398660u: goto label_398660;
        case 0x398664u: goto label_398664;
        case 0x398668u: goto label_398668;
        case 0x39866cu: goto label_39866c;
        case 0x398670u: goto label_398670;
        case 0x398674u: goto label_398674;
        case 0x398678u: goto label_398678;
        case 0x39867cu: goto label_39867c;
        case 0x398680u: goto label_398680;
        case 0x398684u: goto label_398684;
        case 0x398688u: goto label_398688;
        case 0x39868cu: goto label_39868c;
        case 0x398690u: goto label_398690;
        case 0x398694u: goto label_398694;
        case 0x398698u: goto label_398698;
        case 0x39869cu: goto label_39869c;
        case 0x3986a0u: goto label_3986a0;
        case 0x3986a4u: goto label_3986a4;
        case 0x3986a8u: goto label_3986a8;
        case 0x3986acu: goto label_3986ac;
        case 0x3986b0u: goto label_3986b0;
        case 0x3986b4u: goto label_3986b4;
        case 0x3986b8u: goto label_3986b8;
        case 0x3986bcu: goto label_3986bc;
        case 0x3986c0u: goto label_3986c0;
        case 0x3986c4u: goto label_3986c4;
        case 0x3986c8u: goto label_3986c8;
        case 0x3986ccu: goto label_3986cc;
        case 0x3986d0u: goto label_3986d0;
        case 0x3986d4u: goto label_3986d4;
        case 0x3986d8u: goto label_3986d8;
        case 0x3986dcu: goto label_3986dc;
        case 0x3986e0u: goto label_3986e0;
        case 0x3986e4u: goto label_3986e4;
        case 0x3986e8u: goto label_3986e8;
        case 0x3986ecu: goto label_3986ec;
        case 0x3986f0u: goto label_3986f0;
        case 0x3986f4u: goto label_3986f4;
        case 0x3986f8u: goto label_3986f8;
        case 0x3986fcu: goto label_3986fc;
        case 0x398700u: goto label_398700;
        case 0x398704u: goto label_398704;
        case 0x398708u: goto label_398708;
        case 0x39870cu: goto label_39870c;
        case 0x398710u: goto label_398710;
        case 0x398714u: goto label_398714;
        case 0x398718u: goto label_398718;
        case 0x39871cu: goto label_39871c;
        case 0x398720u: goto label_398720;
        case 0x398724u: goto label_398724;
        case 0x398728u: goto label_398728;
        case 0x39872cu: goto label_39872c;
        case 0x398730u: goto label_398730;
        case 0x398734u: goto label_398734;
        case 0x398738u: goto label_398738;
        case 0x39873cu: goto label_39873c;
        case 0x398740u: goto label_398740;
        case 0x398744u: goto label_398744;
        case 0x398748u: goto label_398748;
        case 0x39874cu: goto label_39874c;
        case 0x398750u: goto label_398750;
        case 0x398754u: goto label_398754;
        case 0x398758u: goto label_398758;
        case 0x39875cu: goto label_39875c;
        case 0x398760u: goto label_398760;
        case 0x398764u: goto label_398764;
        case 0x398768u: goto label_398768;
        case 0x39876cu: goto label_39876c;
        case 0x398770u: goto label_398770;
        case 0x398774u: goto label_398774;
        case 0x398778u: goto label_398778;
        case 0x39877cu: goto label_39877c;
        case 0x398780u: goto label_398780;
        case 0x398784u: goto label_398784;
        case 0x398788u: goto label_398788;
        case 0x39878cu: goto label_39878c;
        case 0x398790u: goto label_398790;
        case 0x398794u: goto label_398794;
        case 0x398798u: goto label_398798;
        case 0x39879cu: goto label_39879c;
        case 0x3987a0u: goto label_3987a0;
        case 0x3987a4u: goto label_3987a4;
        case 0x3987a8u: goto label_3987a8;
        case 0x3987acu: goto label_3987ac;
        case 0x3987b0u: goto label_3987b0;
        case 0x3987b4u: goto label_3987b4;
        case 0x3987b8u: goto label_3987b8;
        case 0x3987bcu: goto label_3987bc;
        case 0x3987c0u: goto label_3987c0;
        case 0x3987c4u: goto label_3987c4;
        case 0x3987c8u: goto label_3987c8;
        case 0x3987ccu: goto label_3987cc;
        case 0x3987d0u: goto label_3987d0;
        case 0x3987d4u: goto label_3987d4;
        case 0x3987d8u: goto label_3987d8;
        case 0x3987dcu: goto label_3987dc;
        case 0x3987e0u: goto label_3987e0;
        case 0x3987e4u: goto label_3987e4;
        case 0x3987e8u: goto label_3987e8;
        case 0x3987ecu: goto label_3987ec;
        case 0x3987f0u: goto label_3987f0;
        case 0x3987f4u: goto label_3987f4;
        case 0x3987f8u: goto label_3987f8;
        case 0x3987fcu: goto label_3987fc;
        case 0x398800u: goto label_398800;
        case 0x398804u: goto label_398804;
        case 0x398808u: goto label_398808;
        case 0x39880cu: goto label_39880c;
        case 0x398810u: goto label_398810;
        case 0x398814u: goto label_398814;
        case 0x398818u: goto label_398818;
        case 0x39881cu: goto label_39881c;
        case 0x398820u: goto label_398820;
        case 0x398824u: goto label_398824;
        case 0x398828u: goto label_398828;
        case 0x39882cu: goto label_39882c;
        case 0x398830u: goto label_398830;
        case 0x398834u: goto label_398834;
        case 0x398838u: goto label_398838;
        case 0x39883cu: goto label_39883c;
        case 0x398840u: goto label_398840;
        case 0x398844u: goto label_398844;
        case 0x398848u: goto label_398848;
        case 0x39884cu: goto label_39884c;
        case 0x398850u: goto label_398850;
        case 0x398854u: goto label_398854;
        case 0x398858u: goto label_398858;
        case 0x39885cu: goto label_39885c;
        case 0x398860u: goto label_398860;
        case 0x398864u: goto label_398864;
        case 0x398868u: goto label_398868;
        case 0x39886cu: goto label_39886c;
        case 0x398870u: goto label_398870;
        case 0x398874u: goto label_398874;
        case 0x398878u: goto label_398878;
        case 0x39887cu: goto label_39887c;
        case 0x398880u: goto label_398880;
        case 0x398884u: goto label_398884;
        case 0x398888u: goto label_398888;
        case 0x39888cu: goto label_39888c;
        case 0x398890u: goto label_398890;
        case 0x398894u: goto label_398894;
        case 0x398898u: goto label_398898;
        case 0x39889cu: goto label_39889c;
        case 0x3988a0u: goto label_3988a0;
        case 0x3988a4u: goto label_3988a4;
        case 0x3988a8u: goto label_3988a8;
        case 0x3988acu: goto label_3988ac;
        case 0x3988b0u: goto label_3988b0;
        case 0x3988b4u: goto label_3988b4;
        case 0x3988b8u: goto label_3988b8;
        case 0x3988bcu: goto label_3988bc;
        case 0x3988c0u: goto label_3988c0;
        case 0x3988c4u: goto label_3988c4;
        case 0x3988c8u: goto label_3988c8;
        case 0x3988ccu: goto label_3988cc;
        case 0x3988d0u: goto label_3988d0;
        case 0x3988d4u: goto label_3988d4;
        case 0x3988d8u: goto label_3988d8;
        case 0x3988dcu: goto label_3988dc;
        case 0x3988e0u: goto label_3988e0;
        case 0x3988e4u: goto label_3988e4;
        case 0x3988e8u: goto label_3988e8;
        case 0x3988ecu: goto label_3988ec;
        case 0x3988f0u: goto label_3988f0;
        case 0x3988f4u: goto label_3988f4;
        case 0x3988f8u: goto label_3988f8;
        case 0x3988fcu: goto label_3988fc;
        case 0x398900u: goto label_398900;
        case 0x398904u: goto label_398904;
        case 0x398908u: goto label_398908;
        case 0x39890cu: goto label_39890c;
        case 0x398910u: goto label_398910;
        case 0x398914u: goto label_398914;
        case 0x398918u: goto label_398918;
        case 0x39891cu: goto label_39891c;
        case 0x398920u: goto label_398920;
        case 0x398924u: goto label_398924;
        case 0x398928u: goto label_398928;
        case 0x39892cu: goto label_39892c;
        case 0x398930u: goto label_398930;
        case 0x398934u: goto label_398934;
        case 0x398938u: goto label_398938;
        case 0x39893cu: goto label_39893c;
        case 0x398940u: goto label_398940;
        case 0x398944u: goto label_398944;
        case 0x398948u: goto label_398948;
        case 0x39894cu: goto label_39894c;
        case 0x398950u: goto label_398950;
        case 0x398954u: goto label_398954;
        case 0x398958u: goto label_398958;
        case 0x39895cu: goto label_39895c;
        case 0x398960u: goto label_398960;
        case 0x398964u: goto label_398964;
        case 0x398968u: goto label_398968;
        case 0x39896cu: goto label_39896c;
        case 0x398970u: goto label_398970;
        case 0x398974u: goto label_398974;
        case 0x398978u: goto label_398978;
        case 0x39897cu: goto label_39897c;
        case 0x398980u: goto label_398980;
        case 0x398984u: goto label_398984;
        case 0x398988u: goto label_398988;
        case 0x39898cu: goto label_39898c;
        case 0x398990u: goto label_398990;
        case 0x398994u: goto label_398994;
        case 0x398998u: goto label_398998;
        case 0x39899cu: goto label_39899c;
        case 0x3989a0u: goto label_3989a0;
        case 0x3989a4u: goto label_3989a4;
        case 0x3989a8u: goto label_3989a8;
        case 0x3989acu: goto label_3989ac;
        case 0x3989b0u: goto label_3989b0;
        case 0x3989b4u: goto label_3989b4;
        case 0x3989b8u: goto label_3989b8;
        case 0x3989bcu: goto label_3989bc;
        case 0x3989c0u: goto label_3989c0;
        case 0x3989c4u: goto label_3989c4;
        case 0x3989c8u: goto label_3989c8;
        case 0x3989ccu: goto label_3989cc;
        case 0x3989d0u: goto label_3989d0;
        case 0x3989d4u: goto label_3989d4;
        default: break;
    }

    ctx->pc = 0x398608u;

label_398608:
    // 0x398608: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x398608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_39860c:
    // 0x39860c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x39860cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_398610:
    // 0x398610: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x398610u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_398614:
    // 0x398614: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x398614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_398618:
    // 0x398618: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x398618u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39861c:
    // 0x39861c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x39861cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_398620:
    // 0x398620: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x398620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_398624:
    // 0x398624: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x398624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_398628:
    // 0x398628: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x398628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_39862c:
    // 0x39862c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x39862cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_398630:
    // 0x398630: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x398630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_398634:
    // 0x398634: 0x8e540004  lw          $s4, 0x4($s2)
    ctx->pc = 0x398634u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_398638:
    // 0x398638: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
label_39863c:
    if (ctx->pc == 0x39863Cu) {
        ctx->pc = 0x39863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398638u;
        // 0x39863c: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398640u;
        goto label_398640;
    }
    ctx->pc = 0x398638u;
    {
        const bool branch_taken_0x398638 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x39863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398638u;
        // 0x39863c: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398638) {
            ctx->pc = 0x398664u;
            goto label_398664;
        }
    }
    ctx->pc = 0x398640u;
label_398640:
    // 0x398640: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x398640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_398644:
    // 0x398644: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x398644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_398648:
    // 0x398648: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_39864c:
    if (ctx->pc == 0x39864Cu) {
        ctx->pc = 0x39864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398648u;
        // 0x39864c: 0x82430003  lb          $v1, 0x3($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398650u;
        goto label_398650;
    }
    ctx->pc = 0x398648u;
    {
        const bool branch_taken_0x398648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x398648) {
            ctx->pc = 0x39864Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398648u;
            // 0x39864c: 0x82430003  lb          $v1, 0x3($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398668u;
            goto label_398668;
        }
    }
    ctx->pc = 0x398650u;
label_398650:
    // 0x398650: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x398650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_398654:
    // 0x398654: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_398658:
    if (ctx->pc == 0x398658u) {
        ctx->pc = 0x398658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398654u;
        // 0x398658: 0x82430003  lb          $v1, 0x3($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39865Cu;
        goto label_39865c;
    }
    ctx->pc = 0x398654u;
    {
        const bool branch_taken_0x398654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x398654) {
            ctx->pc = 0x398658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398654u;
            // 0x398658: 0x82430003  lb          $v1, 0x3($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398668u;
            goto label_398668;
        }
    }
    ctx->pc = 0x39865Cu;
label_39865c:
    // 0x39865c: 0x40f809  jalr        $v0
label_398660:
    if (ctx->pc == 0x398660u) {
        ctx->pc = 0x398660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39865Cu;
        // 0x398660: 0x8e44004c  lw          $a0, 0x4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398664u;
        goto label_398664;
    }
    ctx->pc = 0x39865Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398664u);
        ctx->pc = 0x398660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39865Cu;
        // 0x398660: 0x8e44004c  lw          $a0, 0x4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39865Cu, 0x398664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398664u;
label_398664:
    // 0x398664: 0x82430003  lb          $v1, 0x3($s2)
    ctx->pc = 0x398664u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_398668:
    // 0x398668: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x398668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39866c:
    // 0x39866c: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
label_398670:
    if (ctx->pc == 0x398670u) {
        ctx->pc = 0x398670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39866Cu;
        // 0x398670: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398674u;
        goto label_398674;
    }
    ctx->pc = 0x39866Cu;
    {
        const bool branch_taken_0x39866c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39866c) {
            ctx->pc = 0x398670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39866Cu;
            // 0x398670: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3986A0u;
            goto label_3986a0;
        }
    }
    ctx->pc = 0x398674u;
label_398674:
    // 0x398674: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x398674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_398678:
    // 0x398678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x398678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39867c:
    // 0x39867c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x39867cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_398680:
    // 0x398680: 0x40f809  jalr        $v0
label_398684:
    if (ctx->pc == 0x398684u) {
        ctx->pc = 0x398684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398680u;
        // 0x398684: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398688u;
        goto label_398688;
    }
    ctx->pc = 0x398680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398688u);
        ctx->pc = 0x398684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398680u;
        // 0x398684: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398680u, 0x398688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398688u;
label_398688:
    // 0x398688: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_39868c:
    if (ctx->pc == 0x39868Cu) {
        ctx->pc = 0x39868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398688u;
        // 0x39868c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398690u;
        goto label_398690;
    }
    ctx->pc = 0x398688u;
    {
        const bool branch_taken_0x398688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x398688) {
            ctx->pc = 0x39868Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398688u;
            // 0x39868c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3986A0u;
            goto label_3986a0;
        }
    }
    ctx->pc = 0x398690u;
label_398690:
    // 0x398690: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x398690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_398694:
    // 0x398694: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_398698:
    if (ctx->pc == 0x398698u) {
        ctx->pc = 0x398698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398694u;
        // 0x398698: 0xa2420001  sb          $v0, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39869Cu;
        goto label_39869c;
    }
    ctx->pc = 0x398694u;
    {
        const bool branch_taken_0x398694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398694u;
        // 0x398698: 0xa2420001  sb          $v0, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398694) {
            ctx->pc = 0x3989B4u;
            goto label_3989b4;
        }
    }
    ctx->pc = 0x39869Cu;
label_39869c:
    // 0x39869c: 0x0  nop
    ctx->pc = 0x39869cu;
    // NOP
label_3986a0:
    // 0x3986a0: 0x26530014  addiu       $s3, $s2, 0x14
    ctx->pc = 0x3986a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_3986a4:
    // 0x3986a4: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x3986a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_3986a8:
    // 0x3986a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3986a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3986ac:
    // 0x3986ac: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x3986acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3986b0:
    // 0x3986b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3986b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3986b4:
    // 0x3986b4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x3986b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_3986b8:
    // 0x3986b8: 0x60f809  jalr        $v1
label_3986bc:
    if (ctx->pc == 0x3986BCu) {
        ctx->pc = 0x3986BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3986B8u;
        // 0x3986bc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3986C0u;
        goto label_3986c0;
    }
    ctx->pc = 0x3986B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3986C0u);
        ctx->pc = 0x3986BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3986B8u;
        // 0x3986bc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3986B8u, 0x3986C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3986C0u;
label_3986c0:
    // 0x3986c0: 0xc0eb85c  jal         func_3AE170
label_3986c4:
    if (ctx->pc == 0x3986C4u) {
        ctx->pc = 0x3986C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3986C0u;
        // 0x3986c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3986C8u;
        goto label_3986c8;
    }
    ctx->pc = 0x3986C0u;
    SET_GPR_U32(ctx, 31, 0x3986C8u);
    ctx->pc = 0x3986C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3986C0u;
    // 0x3986c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE170u, 0x3986C0u, 0x3986C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3986C8u;
label_3986c8:
    // 0x3986c8: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
label_3986cc:
    if (ctx->pc == 0x3986CCu) {
        ctx->pc = 0x3986D0u;
        goto label_3986d0;
    }
    ctx->pc = 0x3986C8u;
    {
        const bool branch_taken_0x3986c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3986c8) {
            ctx->pc = 0x398850u;
            goto label_398850;
        }
    }
    ctx->pc = 0x3986D0u;
label_3986d0:
    // 0x3986d0: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x3986d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3986d4:
    // 0x3986d4: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x3986d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_3986d8:
    // 0x3986d8: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
label_3986dc:
    if (ctx->pc == 0x3986DCu) {
        ctx->pc = 0x3986DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3986D8u;
        // 0x3986dc: 0x34058001  ori         $a1, $zero, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3986E0u;
        goto label_3986e0;
    }
    ctx->pc = 0x3986D8u;
    {
        const bool branch_taken_0x3986d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3986DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3986D8u;
        // 0x3986dc: 0x34058001  ori         $a1, $zero, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3986d8) {
            ctx->pc = 0x398850u;
            goto label_398850;
        }
    }
    ctx->pc = 0x3986E0u;
label_3986e0:
    // 0x3986e0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3986e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3986e4:
    // 0x3986e4: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x3986e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_3986e8:
    // 0x3986e8: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x3986e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_3986ec:
    // 0x3986ec: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3986ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_3986f0:
    // 0x3986f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3986f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3986f4:
    // 0x3986f4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3986f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3986f8:
    // 0x3986f8: 0x14450055  bne         $v0, $a1, . + 4 + (0x55 << 2)
label_3986fc:
    if (ctx->pc == 0x3986FCu) {
        ctx->pc = 0x3986FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3986F8u;
        // 0x3986fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398700u;
        goto label_398700;
    }
    ctx->pc = 0x3986F8u;
    {
        const bool branch_taken_0x3986f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x3986FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3986F8u;
        // 0x3986fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3986f8) {
            ctx->pc = 0x398850u;
            goto label_398850;
        }
    }
    ctx->pc = 0x398700u;
label_398700:
    // 0x398700: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x398700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_398704:
    // 0x398704: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x398704u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_398708:
    // 0x398708: 0xc0ec0c6  jal         func_3B0318
label_39870c:
    if (ctx->pc == 0x39870Cu) {
        ctx->pc = 0x39870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398708u;
        // 0x39870c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398710u;
        goto label_398710;
    }
    ctx->pc = 0x398708u;
    SET_GPR_U32(ctx, 31, 0x398710u);
    ctx->pc = 0x39870Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398708u;
    // 0x39870c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0318u, 0x398708u, 0x398710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398710u;
label_398710:
    // 0x398710: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_398714:
    if (ctx->pc == 0x398714u) {
        ctx->pc = 0x398714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398710u;
        // 0x398714: 0x8e42009c  lw          $v0, 0x9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398718u;
        goto label_398718;
    }
    ctx->pc = 0x398710u;
    {
        const bool branch_taken_0x398710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x398710) {
            ctx->pc = 0x398714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398710u;
            // 0x398714: 0x8e42009c  lw          $v0, 0x9C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398770u;
            goto label_398770;
        }
    }
    ctx->pc = 0x398718u;
label_398718:
    // 0x398718: 0x87a50010  lh          $a1, 0x10($sp)
    ctx->pc = 0x398718u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
label_39871c:
    // 0x39871c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x39871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_398720:
    // 0x398720: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x398720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_398724:
    // 0x398724: 0x54400081  bnel        $v0, $zero, . + 4 + (0x81 << 2)
label_398728:
    if (ctx->pc == 0x398728u) {
        ctx->pc = 0x398728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398724u;
        // 0x398728: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39872Cu;
        goto label_39872c;
    }
    ctx->pc = 0x398724u;
    {
        const bool branch_taken_0x398724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x398724) {
            ctx->pc = 0x398728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398724u;
            // 0x398728: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39892Cu;
            goto label_39892c;
        }
    }
    ctx->pc = 0x39872Cu;
label_39872c:
    // 0x39872c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39872cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_398730:
    // 0x398730: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x398730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_398734:
    // 0x398734: 0xc0eb07e  jal         func_3AC1F8
label_398738:
    if (ctx->pc == 0x398738u) {
        ctx->pc = 0x398738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398734u;
        // 0x398738: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39873Cu;
        goto label_39873c;
    }
    ctx->pc = 0x398734u;
    SET_GPR_U32(ctx, 31, 0x39873Cu);
    ctx->pc = 0x398738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398734u;
    // 0x398738: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC1F8u, 0x398734u, 0x39873Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39873Cu;
label_39873c:
    // 0x39873c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39873cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_398740:
    // 0x398740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x398740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_398744:
    // 0x398744: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x398744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398748:
    // 0x398748: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x398748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_39874c:
    // 0x39874c: 0x40f809  jalr        $v0
label_398750:
    if (ctx->pc == 0x398750u) {
        ctx->pc = 0x398750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39874Cu;
        // 0x398750: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398754u;
        goto label_398754;
    }
    ctx->pc = 0x39874Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398754u);
        ctx->pc = 0x398750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39874Cu;
        // 0x398750: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39874Cu, 0x398754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398754u;
label_398754:
    // 0x398754: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x398754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_398758:
    // 0x398758: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x398758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39875c:
    // 0x39875c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39875cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_398760:
    // 0x398760: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x398760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_398764:
    // 0x398764: 0x40f809  jalr        $v0
label_398768:
    if (ctx->pc == 0x398768u) {
        ctx->pc = 0x398768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398764u;
        // 0x398768: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39876Cu;
        goto label_39876c;
    }
    ctx->pc = 0x398764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39876Cu);
        ctx->pc = 0x398768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398764u;
        // 0x398768: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398764u, 0x39876Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39876Cu;
label_39876c:
    // 0x39876c: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x39876cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_398770:
    // 0x398770: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
label_398774:
    if (ctx->pc == 0x398774u) {
        ctx->pc = 0x398774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398770u;
        // 0x398774: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398778u;
        goto label_398778;
    }
    ctx->pc = 0x398770u;
    {
        const bool branch_taken_0x398770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x398774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398770u;
        // 0x398774: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398770) {
            ctx->pc = 0x3989B4u;
            goto label_3989b4;
        }
    }
    ctx->pc = 0x398778u;
label_398778:
    // 0x398778: 0x10000028  b           . + 4 + (0x28 << 2)
label_39877c:
    if (ctx->pc == 0x39877Cu) {
        ctx->pc = 0x39877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398778u;
        // 0x39877c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398780u;
        goto label_398780;
    }
    ctx->pc = 0x398778u;
    {
        const bool branch_taken_0x398778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398778u;
        // 0x39877c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398778) {
            ctx->pc = 0x39881Cu;
            goto label_39881c;
        }
    }
    ctx->pc = 0x398780u;
label_398780:
    // 0x398780: 0xa4802a  slt         $s0, $a1, $a0
    ctx->pc = 0x398780u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_398784:
    // 0x398784: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
label_398788:
    if (ctx->pc == 0x398788u) {
        ctx->pc = 0x398788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398784u;
        // 0x398788: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39878Cu;
        goto label_39878c;
    }
    ctx->pc = 0x398784u;
    {
        const bool branch_taken_0x398784 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x398784) {
            ctx->pc = 0x398788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398784u;
            // 0x398788: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3987D4u;
            goto label_3987d4;
        }
    }
    ctx->pc = 0x39878Cu;
label_39878c:
    // 0x39878c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x39878cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_398790:
    // 0x398790: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x398790u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_398794:
    // 0x398794: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
label_398798:
    if (ctx->pc == 0x398798u) {
        ctx->pc = 0x398798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398794u;
        // 0x398798: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39879Cu;
        goto label_39879c;
    }
    ctx->pc = 0x398794u;
    {
        const bool branch_taken_0x398794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x398794) {
            ctx->pc = 0x398798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398794u;
            // 0x398798: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3987D4u;
            goto label_3987d4;
        }
    }
    ctx->pc = 0x39879Cu;
label_39879c:
    // 0x39879c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x39879cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3987a0:
    // 0x3987a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3987a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3987a4:
    // 0x3987a4: 0x0  nop
    ctx->pc = 0x3987a4u;
    // NOP
label_3987a8:
    // 0x3987a8: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x3987a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_3987ac:
    // 0x3987ac: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3987b0:
    if (ctx->pc == 0x3987B0u) {
        ctx->pc = 0x3987B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3987ACu;
        // 0x3987b0: 0xa4802a  slt         $s0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3987B4u;
        goto label_3987b4;
    }
    ctx->pc = 0x3987ACu;
    {
        const bool branch_taken_0x3987ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3987ac) {
            ctx->pc = 0x3987B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3987ACu;
            // 0x3987b0: 0xa4802a  slt         $s0, $a1, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3987D0u;
            goto label_3987d0;
        }
    }
    ctx->pc = 0x3987B4u;
label_3987b4:
    // 0x3987b4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3987b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3987b8:
    // 0x3987b8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3987b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3987bc:
    // 0x3987bc: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3987bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3987c0:
    // 0x3987c0: 0x0  nop
    ctx->pc = 0x3987c0u;
    // NOP
label_3987c4:
    // 0x3987c4: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
label_3987c8:
    if (ctx->pc == 0x3987C8u) {
        ctx->pc = 0x3987C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3987C4u;
        // 0x3987c8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3987CCu;
        goto label_3987cc;
    }
    ctx->pc = 0x3987C4u;
    {
        const bool branch_taken_0x3987c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3987c4) {
            ctx->pc = 0x3987C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3987C4u;
            // 0x3987c8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3987A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3987a8;
        }
    }
    ctx->pc = 0x3987CCu;
label_3987cc:
    // 0x3987cc: 0xa4802a  slt         $s0, $a1, $a0
    ctx->pc = 0x3987ccu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3987d0:
    // 0x3987d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3987d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3987d4:
    // 0x3987d4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3987d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3987d8:
    // 0x3987d8: 0xc0eb07e  jal         func_3AC1F8
label_3987dc:
    if (ctx->pc == 0x3987DCu) {
        ctx->pc = 0x3987DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3987D8u;
        // 0x3987dc: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3987E0u;
        goto label_3987e0;
    }
    ctx->pc = 0x3987D8u;
    SET_GPR_U32(ctx, 31, 0x3987E0u);
    ctx->pc = 0x3987DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3987D8u;
    // 0x3987dc: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC1F8u, 0x3987D8u, 0x3987E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3987E0u;
label_3987e0:
    // 0x3987e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3987e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3987e4:
    // 0x3987e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3987e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3987e8:
    // 0x3987e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3987e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3987ec:
    // 0x3987ec: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3987ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3987f0:
    // 0x3987f0: 0x40f809  jalr        $v0
label_3987f4:
    if (ctx->pc == 0x3987F4u) {
        ctx->pc = 0x3987F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3987F0u;
        // 0x3987f4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3987F8u;
        goto label_3987f8;
    }
    ctx->pc = 0x3987F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3987F8u);
        ctx->pc = 0x3987F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3987F0u;
        // 0x3987f4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3987F0u, 0x3987F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3987F8u;
label_3987f8:
    // 0x3987f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3987f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3987fc:
    // 0x3987fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3987fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_398800:
    // 0x398800: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x398800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_398804:
    // 0x398804: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x398804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_398808:
    // 0x398808: 0x40f809  jalr        $v0
label_39880c:
    if (ctx->pc == 0x39880Cu) {
        ctx->pc = 0x39880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398808u;
        // 0x39880c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398810u;
        goto label_398810;
    }
    ctx->pc = 0x398808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398810u);
        ctx->pc = 0x39880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398808u;
        // 0x39880c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398808u, 0x398810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398810u;
label_398810:
    // 0x398810: 0x16000069  bnez        $s0, . + 4 + (0x69 << 2)
label_398814:
    if (ctx->pc == 0x398814u) {
        ctx->pc = 0x398814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398810u;
        // 0x398814: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398818u;
        goto label_398818;
    }
    ctx->pc = 0x398810u;
    {
        const bool branch_taken_0x398810 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x398814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398810u;
        // 0x398814: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398810) {
            ctx->pc = 0x3989B8u;
            goto label_3989b8;
        }
    }
    ctx->pc = 0x398818u;
label_398818:
    // 0x398818: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x398818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39881c:
    // 0x39881c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x39881cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_398820:
    // 0x398820: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x398820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_398824:
    // 0x398824: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x398824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_398828:
    // 0x398828: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x398828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_39882c:
    // 0x39882c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x39882cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_398830:
    // 0x398830: 0x40f809  jalr        $v0
label_398834:
    if (ctx->pc == 0x398834u) {
        ctx->pc = 0x398834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398830u;
        // 0x398834: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398838u;
        goto label_398838;
    }
    ctx->pc = 0x398830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398838u);
        ctx->pc = 0x398834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398830u;
        // 0x398834: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398830u, 0x398838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398838u;
label_398838:
    // 0x398838: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x398838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_39883c:
    // 0x39883c: 0x1480ffd0  bnez        $a0, . + 4 + (-0x30 << 2)
label_398840:
    if (ctx->pc == 0x398840u) {
        ctx->pc = 0x398840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39883Cu;
        // 0x398840: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398844u;
        goto label_398844;
    }
    ctx->pc = 0x39883Cu;
    {
        const bool branch_taken_0x39883c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x398840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39883Cu;
        // 0x398840: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39883c) {
            ctx->pc = 0x398780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398780;
        }
    }
    ctx->pc = 0x398844u;
label_398844:
    // 0x398844: 0x1000005c  b           . + 4 + (0x5C << 2)
label_398848:
    if (ctx->pc == 0x398848u) {
        ctx->pc = 0x398848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398844u;
        // 0x398848: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39884Cu;
        goto label_39884c;
    }
    ctx->pc = 0x398844u;
    {
        const bool branch_taken_0x398844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398844u;
        // 0x398848: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398844) {
            ctx->pc = 0x3989B8u;
            goto label_3989b8;
        }
    }
    ctx->pc = 0x39884Cu;
label_39884c:
    // 0x39884c: 0x0  nop
    ctx->pc = 0x39884cu;
    // NOP
label_398850:
    // 0x398850: 0xc0e646a  jal         func_3991A8
label_398854:
    if (ctx->pc == 0x398854u) {
        ctx->pc = 0x398854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398850u;
        // 0x398854: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398858u;
        goto label_398858;
    }
    ctx->pc = 0x398850u;
    SET_GPR_U32(ctx, 31, 0x398858u);
    ctx->pc = 0x398854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398850u;
    // 0x398854: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3991A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3991A8u, 0x398850u, 0x398858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398858u;
label_398858:
    // 0x398858: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x398858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39885c:
    // 0x39885c: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x39885cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_398860:
    // 0x398860: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x398860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_398864:
    // 0x398864: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_398868:
    if (ctx->pc == 0x398868u) {
        ctx->pc = 0x39886Cu;
        goto label_39886c;
    }
    ctx->pc = 0x398864u;
    {
        const bool branch_taken_0x398864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x398864) {
            ctx->pc = 0x3988A0u;
            goto label_3988a0;
        }
    }
    ctx->pc = 0x39886Cu;
label_39886c:
    // 0x39886c: 0xc0eb85c  jal         func_3AE170
label_398870:
    if (ctx->pc == 0x398870u) {
        ctx->pc = 0x398870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39886Cu;
        // 0x398870: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398874u;
        goto label_398874;
    }
    ctx->pc = 0x39886Cu;
    SET_GPR_U32(ctx, 31, 0x398874u);
    ctx->pc = 0x398870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39886Cu;
    // 0x398870: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE170u, 0x39886Cu, 0x398874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398874u;
label_398874:
    // 0x398874: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x398874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_398878:
    // 0x398878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x398878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39887c:
    // 0x39887c: 0x56020011  bnel        $s0, $v0, . + 4 + (0x11 << 2)
label_398880:
    if (ctx->pc == 0x398880u) {
        ctx->pc = 0x398880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39887Cu;
        // 0x398880: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398884u;
        goto label_398884;
    }
    ctx->pc = 0x39887Cu;
    {
        const bool branch_taken_0x39887c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x39887c) {
            ctx->pc = 0x398880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39887Cu;
            // 0x398880: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3988C4u;
            goto label_3988c4;
        }
    }
    ctx->pc = 0x398884u;
label_398884:
    // 0x398884: 0xc0e64d2  jal         func_399348
label_398888:
    if (ctx->pc == 0x398888u) {
        ctx->pc = 0x398888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398884u;
        // 0x398888: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39888Cu;
        goto label_39888c;
    }
    ctx->pc = 0x398884u;
    SET_GPR_U32(ctx, 31, 0x39888Cu);
    ctx->pc = 0x398888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398884u;
    // 0x398888: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399348u, 0x398884u, 0x39888Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39888Cu;
label_39888c:
    // 0x39888c: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
label_398890:
    if (ctx->pc == 0x398890u) {
        ctx->pc = 0x398894u;
        goto label_398894;
    }
    ctx->pc = 0x39888Cu;
    {
        const bool branch_taken_0x39888c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x39888c) {
            ctx->pc = 0x3988C4u;
            goto label_3988c4;
        }
    }
    ctx->pc = 0x398894u;
label_398894:
    // 0x398894: 0x1000000b  b           . + 4 + (0xB << 2)
label_398898:
    if (ctx->pc == 0x398898u) {
        ctx->pc = 0x398898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398894u;
        // 0x398898: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39889Cu;
        goto label_39889c;
    }
    ctx->pc = 0x398894u;
    {
        const bool branch_taken_0x398894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398894u;
        // 0x398898: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398894) {
            ctx->pc = 0x3988C4u;
            goto label_3988c4;
        }
    }
    ctx->pc = 0x39889Cu;
label_39889c:
    // 0x39889c: 0x0  nop
    ctx->pc = 0x39889cu;
    // NOP
label_3988a0:
    // 0x3988a0: 0xc0eb85c  jal         func_3AE170
label_3988a4:
    if (ctx->pc == 0x3988A4u) {
        ctx->pc = 0x3988A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3988A0u;
        // 0x3988a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3988A8u;
        goto label_3988a8;
    }
    ctx->pc = 0x3988A0u;
    SET_GPR_U32(ctx, 31, 0x3988A8u);
    ctx->pc = 0x3988A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3988A0u;
    // 0x3988a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE170u, 0x3988A0u, 0x3988A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3988A8u;
label_3988a8:
    // 0x3988a8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3988a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3988ac:
    // 0x3988ac: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_3988b0:
    if (ctx->pc == 0x3988B0u) {
        ctx->pc = 0x3988B4u;
        goto label_3988b4;
    }
    ctx->pc = 0x3988ACu;
    {
        const bool branch_taken_0x3988ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3988ac) {
            ctx->pc = 0x3988C4u;
            goto label_3988c4;
        }
    }
    ctx->pc = 0x3988B4u;
label_3988b4:
    // 0x3988b4: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x3988b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_3988b8:
    // 0x3988b8: 0x24420240  addiu       $v0, $v0, 0x240
    ctx->pc = 0x3988b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
label_3988bc:
    // 0x3988bc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3988bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3988c0:
    // 0x3988c0: 0x2c550001  sltiu       $s5, $v0, 0x1
    ctx->pc = 0x3988c0u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3988c4:
    // 0x3988c4: 0x12a0000a  beqz        $s5, . + 4 + (0xA << 2)
label_3988c8:
    if (ctx->pc == 0x3988C8u) {
        ctx->pc = 0x3988C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3988C4u;
        // 0x3988c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3988CCu;
        goto label_3988cc;
    }
    ctx->pc = 0x3988C4u;
    {
        const bool branch_taken_0x3988c4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3988C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3988C4u;
        // 0x3988c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3988c4) {
            ctx->pc = 0x3988F0u;
            goto label_3988f0;
        }
    }
    ctx->pc = 0x3988CCu;
label_3988cc:
    // 0x3988cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3988ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3988d0:
    // 0x3988d0: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x3988d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_3988d4:
    // 0x3988d4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3988d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3988d8:
    // 0x3988d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3988d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3988dc:
    // 0x3988dc: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x3988dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_3988e0:
    // 0x3988e0: 0x60f809  jalr        $v1
label_3988e4:
    if (ctx->pc == 0x3988E4u) {
        ctx->pc = 0x3988E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3988E0u;
        // 0x3988e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3988E8u;
        goto label_3988e8;
    }
    ctx->pc = 0x3988E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3988E8u);
        ctx->pc = 0x3988E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3988E0u;
        // 0x3988e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3988E0u, 0x3988E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3988E8u;
label_3988e8:
    // 0x3988e8: 0x10000033  b           . + 4 + (0x33 << 2)
label_3988ec:
    if (ctx->pc == 0x3988ECu) {
        ctx->pc = 0x3988ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3988E8u;
        // 0x3988ec: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3988F0u;
        goto label_3988f0;
    }
    ctx->pc = 0x3988E8u;
    {
        const bool branch_taken_0x3988e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3988ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3988E8u;
        // 0x3988ec: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3988e8) {
            ctx->pc = 0x3989B8u;
            goto label_3989b8;
        }
    }
    ctx->pc = 0x3988F0u;
label_3988f0:
    // 0x3988f0: 0xc0e6464  jal         func_399190
label_3988f4:
    if (ctx->pc == 0x3988F4u) {
        ctx->pc = 0x3988F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3988F0u;
        // 0x3988f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3988F8u;
        goto label_3988f8;
    }
    ctx->pc = 0x3988F0u;
    SET_GPR_U32(ctx, 31, 0x3988F8u);
    ctx->pc = 0x3988F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3988F0u;
    // 0x3988f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399190u, 0x3988F0u, 0x3988F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3988F8u;
label_3988f8:
    // 0x3988f8: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x3988f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_3988fc:
    // 0x3988fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3988fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_398900:
    // 0x398900: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x398900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_398904:
    // 0x398904: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x398904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_398908:
    // 0x398908: 0x40f809  jalr        $v0
label_39890c:
    if (ctx->pc == 0x39890Cu) {
        ctx->pc = 0x39890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398908u;
        // 0x39890c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398910u;
        goto label_398910;
    }
    ctx->pc = 0x398908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398910u);
        ctx->pc = 0x39890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398908u;
        // 0x39890c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398908u, 0x398910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398910u;
label_398910:
    // 0x398910: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x398910u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_398914:
    // 0x398914: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x398914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_398918:
    // 0x398918: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x398918u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_39891c:
    // 0x39891c: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x39891cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_398920:
    // 0x398920: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_398924:
    if (ctx->pc == 0x398924u) {
        ctx->pc = 0x398928u;
        goto label_398928;
    }
    ctx->pc = 0x398920u;
    {
        const bool branch_taken_0x398920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x398920) {
            ctx->pc = 0x398948u;
            goto label_398948;
        }
    }
    ctx->pc = 0x398928u;
label_398928:
    // 0x398928: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x398928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39892c:
    // 0x39892c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39892cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_398930:
    // 0x398930: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x398930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_398934:
    // 0x398934: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x398934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_398938:
    // 0x398938: 0x40f809  jalr        $v0
label_39893c:
    if (ctx->pc == 0x39893Cu) {
        ctx->pc = 0x39893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398938u;
        // 0x39893c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398940u;
        goto label_398940;
    }
    ctx->pc = 0x398938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398940u);
        ctx->pc = 0x39893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398938u;
        // 0x39893c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398938u, 0x398940u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398940u;
label_398940:
    // 0x398940: 0x1000001d  b           . + 4 + (0x1D << 2)
label_398944:
    if (ctx->pc == 0x398944u) {
        ctx->pc = 0x398944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398940u;
        // 0x398944: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398948u;
        goto label_398948;
    }
    ctx->pc = 0x398940u;
    {
        const bool branch_taken_0x398940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398940u;
        // 0x398944: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398940) {
            ctx->pc = 0x3989B8u;
            goto label_3989b8;
        }
    }
    ctx->pc = 0x398948u;
label_398948:
    // 0x398948: 0xc0eb85c  jal         func_3AE170
label_39894c:
    if (ctx->pc == 0x39894Cu) {
        ctx->pc = 0x39894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398948u;
        // 0x39894c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398950u;
        goto label_398950;
    }
    ctx->pc = 0x398948u;
    SET_GPR_U32(ctx, 31, 0x398950u);
    ctx->pc = 0x39894Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398948u;
    // 0x39894c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE170u, 0x398948u, 0x398950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398950u;
label_398950:
    // 0x398950: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x398950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_398954:
    // 0x398954: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_398958:
    if (ctx->pc == 0x398958u) {
        ctx->pc = 0x398958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398954u;
        // 0x398958: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39895Cu;
        goto label_39895c;
    }
    ctx->pc = 0x398954u;
    {
        const bool branch_taken_0x398954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x398958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398954u;
        // 0x398958: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398954) {
            ctx->pc = 0x398970u;
            goto label_398970;
        }
    }
    ctx->pc = 0x39895Cu;
label_39895c:
    // 0x39895c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39895cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_398960:
    // 0x398960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x398960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_398964:
    // 0x398964: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x398964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_398968:
    // 0x398968: 0x40f809  jalr        $v0
label_39896c:
    if (ctx->pc == 0x39896Cu) {
        ctx->pc = 0x39896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398968u;
        // 0x39896c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398970u;
        goto label_398970;
    }
    ctx->pc = 0x398968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398970u);
        ctx->pc = 0x39896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398968u;
        // 0x39896c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398968u, 0x398970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398970u;
label_398970:
    // 0x398970: 0xc0eb85c  jal         func_3AE170
label_398974:
    if (ctx->pc == 0x398974u) {
        ctx->pc = 0x398974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398970u;
        // 0x398974: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398978u;
        goto label_398978;
    }
    ctx->pc = 0x398970u;
    SET_GPR_U32(ctx, 31, 0x398978u);
    ctx->pc = 0x398974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398970u;
    // 0x398974: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE170u, 0x398970u, 0x398978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398978u;
label_398978:
    // 0x398978: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x398978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_39897c:
    // 0x39897c: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_398980:
    if (ctx->pc == 0x398980u) {
        ctx->pc = 0x398980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39897Cu;
        // 0x398980: 0x8e460018  lw          $a2, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398984u;
        goto label_398984;
    }
    ctx->pc = 0x39897Cu;
    {
        const bool branch_taken_0x39897c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39897c) {
            ctx->pc = 0x398980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39897Cu;
            // 0x398980: 0x8e460018  lw          $a2, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3989A0u;
            goto label_3989a0;
        }
    }
    ctx->pc = 0x398984u;
label_398984:
    // 0x398984: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x398984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_398988:
    // 0x398988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x398988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39898c:
    // 0x39898c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x39898cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_398990:
    // 0x398990: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x398990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_398994:
    // 0x398994: 0x40f809  jalr        $v0
label_398998:
    if (ctx->pc == 0x398998u) {
        ctx->pc = 0x398998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398994u;
        // 0x398998: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39899Cu;
        goto label_39899c;
    }
    ctx->pc = 0x398994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39899Cu);
        ctx->pc = 0x398998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398994u;
        // 0x398998: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398994u, 0x39899Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39899Cu;
label_39899c:
    // 0x39899c: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x39899cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3989a0:
    // 0x3989a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3989a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3989a4:
    // 0x3989a4: 0xc0eb90e  jal         func_3AE438
label_3989a8:
    if (ctx->pc == 0x3989A8u) {
        ctx->pc = 0x3989A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3989A4u;
        // 0x3989a8: 0x8e450014  lw          $a1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3989ACu;
        goto label_3989ac;
    }
    ctx->pc = 0x3989A4u;
    SET_GPR_U32(ctx, 31, 0x3989ACu);
    ctx->pc = 0x3989A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3989A4u;
    // 0x3989a8: 0x8e450014  lw          $a1, 0x14($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE438u, 0x3989A4u, 0x3989ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3989ACu;
label_3989ac:
    // 0x3989ac: 0xc0eb92e  jal         func_3AE4B8
label_3989b0:
    if (ctx->pc == 0x3989B0u) {
        ctx->pc = 0x3989B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3989ACu;
        // 0x3989b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3989B4u;
        goto label_3989b4;
    }
    ctx->pc = 0x3989ACu;
    SET_GPR_U32(ctx, 31, 0x3989B4u);
    ctx->pc = 0x3989B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3989ACu;
    // 0x3989b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE4B8u, 0x3989ACu, 0x3989B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3989B4u;
label_3989b4:
    // 0x3989b4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3989b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3989b8:
    // 0x3989b8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3989b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3989bc:
    // 0x3989bc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3989bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3989c0:
    // 0x3989c0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x3989c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3989c4:
    // 0x3989c4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3989c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3989c8:
    // 0x3989c8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x3989c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3989cc:
    // 0x3989cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3989ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3989d0:
    // 0x3989d0: 0x3e00008  jr          $ra
label_3989d4:
    if (ctx->pc == 0x3989D4u) {
        ctx->pc = 0x3989D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3989D0u;
        // 0x3989d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3989D8u;
        goto label_fallthrough_0x3989d0;
    }
    ctx->pc = 0x3989D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3989D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3989D0u;
        // 0x3989d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3989D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3989d0:
    ctx->pc = 0x3989D8u;
}
