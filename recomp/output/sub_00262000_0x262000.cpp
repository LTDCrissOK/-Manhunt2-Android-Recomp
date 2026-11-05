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

// Function: sub_00262000
// Address: 0x262000 - 0x2625c8
void sub_00262000_0x262000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262000_0x262000");
#endif

    switch (ctx->pc) {
        case 0x262000u: goto label_262000;
        case 0x262004u: goto label_262004;
        case 0x262008u: goto label_262008;
        case 0x26200cu: goto label_26200c;
        case 0x262010u: goto label_262010;
        case 0x262014u: goto label_262014;
        case 0x262018u: goto label_262018;
        case 0x26201cu: goto label_26201c;
        case 0x262020u: goto label_262020;
        case 0x262024u: goto label_262024;
        case 0x262028u: goto label_262028;
        case 0x26202cu: goto label_26202c;
        case 0x262030u: goto label_262030;
        case 0x262034u: goto label_262034;
        case 0x262038u: goto label_262038;
        case 0x26203cu: goto label_26203c;
        case 0x262040u: goto label_262040;
        case 0x262044u: goto label_262044;
        case 0x262048u: goto label_262048;
        case 0x26204cu: goto label_26204c;
        case 0x262050u: goto label_262050;
        case 0x262054u: goto label_262054;
        case 0x262058u: goto label_262058;
        case 0x26205cu: goto label_26205c;
        case 0x262060u: goto label_262060;
        case 0x262064u: goto label_262064;
        case 0x262068u: goto label_262068;
        case 0x26206cu: goto label_26206c;
        case 0x262070u: goto label_262070;
        case 0x262074u: goto label_262074;
        case 0x262078u: goto label_262078;
        case 0x26207cu: goto label_26207c;
        case 0x262080u: goto label_262080;
        case 0x262084u: goto label_262084;
        case 0x262088u: goto label_262088;
        case 0x26208cu: goto label_26208c;
        case 0x262090u: goto label_262090;
        case 0x262094u: goto label_262094;
        case 0x262098u: goto label_262098;
        case 0x26209cu: goto label_26209c;
        case 0x2620a0u: goto label_2620a0;
        case 0x2620a4u: goto label_2620a4;
        case 0x2620a8u: goto label_2620a8;
        case 0x2620acu: goto label_2620ac;
        case 0x2620b0u: goto label_2620b0;
        case 0x2620b4u: goto label_2620b4;
        case 0x2620b8u: goto label_2620b8;
        case 0x2620bcu: goto label_2620bc;
        case 0x2620c0u: goto label_2620c0;
        case 0x2620c4u: goto label_2620c4;
        case 0x2620c8u: goto label_2620c8;
        case 0x2620ccu: goto label_2620cc;
        case 0x2620d0u: goto label_2620d0;
        case 0x2620d4u: goto label_2620d4;
        case 0x2620d8u: goto label_2620d8;
        case 0x2620dcu: goto label_2620dc;
        case 0x2620e0u: goto label_2620e0;
        case 0x2620e4u: goto label_2620e4;
        case 0x2620e8u: goto label_2620e8;
        case 0x2620ecu: goto label_2620ec;
        case 0x2620f0u: goto label_2620f0;
        case 0x2620f4u: goto label_2620f4;
        case 0x2620f8u: goto label_2620f8;
        case 0x2620fcu: goto label_2620fc;
        case 0x262100u: goto label_262100;
        case 0x262104u: goto label_262104;
        case 0x262108u: goto label_262108;
        case 0x26210cu: goto label_26210c;
        case 0x262110u: goto label_262110;
        case 0x262114u: goto label_262114;
        case 0x262118u: goto label_262118;
        case 0x26211cu: goto label_26211c;
        case 0x262120u: goto label_262120;
        case 0x262124u: goto label_262124;
        case 0x262128u: goto label_262128;
        case 0x26212cu: goto label_26212c;
        case 0x262130u: goto label_262130;
        case 0x262134u: goto label_262134;
        case 0x262138u: goto label_262138;
        case 0x26213cu: goto label_26213c;
        case 0x262140u: goto label_262140;
        case 0x262144u: goto label_262144;
        case 0x262148u: goto label_262148;
        case 0x26214cu: goto label_26214c;
        case 0x262150u: goto label_262150;
        case 0x262154u: goto label_262154;
        case 0x262158u: goto label_262158;
        case 0x26215cu: goto label_26215c;
        case 0x262160u: goto label_262160;
        case 0x262164u: goto label_262164;
        case 0x262168u: goto label_262168;
        case 0x26216cu: goto label_26216c;
        case 0x262170u: goto label_262170;
        case 0x262174u: goto label_262174;
        case 0x262178u: goto label_262178;
        case 0x26217cu: goto label_26217c;
        case 0x262180u: goto label_262180;
        case 0x262184u: goto label_262184;
        case 0x262188u: goto label_262188;
        case 0x26218cu: goto label_26218c;
        case 0x262190u: goto label_262190;
        case 0x262194u: goto label_262194;
        case 0x262198u: goto label_262198;
        case 0x26219cu: goto label_26219c;
        case 0x2621a0u: goto label_2621a0;
        case 0x2621a4u: goto label_2621a4;
        case 0x2621a8u: goto label_2621a8;
        case 0x2621acu: goto label_2621ac;
        case 0x2621b0u: goto label_2621b0;
        case 0x2621b4u: goto label_2621b4;
        case 0x2621b8u: goto label_2621b8;
        case 0x2621bcu: goto label_2621bc;
        case 0x2621c0u: goto label_2621c0;
        case 0x2621c4u: goto label_2621c4;
        case 0x2621c8u: goto label_2621c8;
        case 0x2621ccu: goto label_2621cc;
        case 0x2621d0u: goto label_2621d0;
        case 0x2621d4u: goto label_2621d4;
        case 0x2621d8u: goto label_2621d8;
        case 0x2621dcu: goto label_2621dc;
        case 0x2621e0u: goto label_2621e0;
        case 0x2621e4u: goto label_2621e4;
        case 0x2621e8u: goto label_2621e8;
        case 0x2621ecu: goto label_2621ec;
        case 0x2621f0u: goto label_2621f0;
        case 0x2621f4u: goto label_2621f4;
        case 0x2621f8u: goto label_2621f8;
        case 0x2621fcu: goto label_2621fc;
        case 0x262200u: goto label_262200;
        case 0x262204u: goto label_262204;
        case 0x262208u: goto label_262208;
        case 0x26220cu: goto label_26220c;
        case 0x262210u: goto label_262210;
        case 0x262214u: goto label_262214;
        case 0x262218u: goto label_262218;
        case 0x26221cu: goto label_26221c;
        case 0x262220u: goto label_262220;
        case 0x262224u: goto label_262224;
        case 0x262228u: goto label_262228;
        case 0x26222cu: goto label_26222c;
        case 0x262230u: goto label_262230;
        case 0x262234u: goto label_262234;
        case 0x262238u: goto label_262238;
        case 0x26223cu: goto label_26223c;
        case 0x262240u: goto label_262240;
        case 0x262244u: goto label_262244;
        case 0x262248u: goto label_262248;
        case 0x26224cu: goto label_26224c;
        case 0x262250u: goto label_262250;
        case 0x262254u: goto label_262254;
        case 0x262258u: goto label_262258;
        case 0x26225cu: goto label_26225c;
        case 0x262260u: goto label_262260;
        case 0x262264u: goto label_262264;
        case 0x262268u: goto label_262268;
        case 0x26226cu: goto label_26226c;
        case 0x262270u: goto label_262270;
        case 0x262274u: goto label_262274;
        case 0x262278u: goto label_262278;
        case 0x26227cu: goto label_26227c;
        case 0x262280u: goto label_262280;
        case 0x262284u: goto label_262284;
        case 0x262288u: goto label_262288;
        case 0x26228cu: goto label_26228c;
        case 0x262290u: goto label_262290;
        case 0x262294u: goto label_262294;
        case 0x262298u: goto label_262298;
        case 0x26229cu: goto label_26229c;
        case 0x2622a0u: goto label_2622a0;
        case 0x2622a4u: goto label_2622a4;
        case 0x2622a8u: goto label_2622a8;
        case 0x2622acu: goto label_2622ac;
        case 0x2622b0u: goto label_2622b0;
        case 0x2622b4u: goto label_2622b4;
        case 0x2622b8u: goto label_2622b8;
        case 0x2622bcu: goto label_2622bc;
        case 0x2622c0u: goto label_2622c0;
        case 0x2622c4u: goto label_2622c4;
        case 0x2622c8u: goto label_2622c8;
        case 0x2622ccu: goto label_2622cc;
        case 0x2622d0u: goto label_2622d0;
        case 0x2622d4u: goto label_2622d4;
        case 0x2622d8u: goto label_2622d8;
        case 0x2622dcu: goto label_2622dc;
        case 0x2622e0u: goto label_2622e0;
        case 0x2622e4u: goto label_2622e4;
        case 0x2622e8u: goto label_2622e8;
        case 0x2622ecu: goto label_2622ec;
        case 0x2622f0u: goto label_2622f0;
        case 0x2622f4u: goto label_2622f4;
        case 0x2622f8u: goto label_2622f8;
        case 0x2622fcu: goto label_2622fc;
        case 0x262300u: goto label_262300;
        case 0x262304u: goto label_262304;
        case 0x262308u: goto label_262308;
        case 0x26230cu: goto label_26230c;
        case 0x262310u: goto label_262310;
        case 0x262314u: goto label_262314;
        case 0x262318u: goto label_262318;
        case 0x26231cu: goto label_26231c;
        case 0x262320u: goto label_262320;
        case 0x262324u: goto label_262324;
        case 0x262328u: goto label_262328;
        case 0x26232cu: goto label_26232c;
        case 0x262330u: goto label_262330;
        case 0x262334u: goto label_262334;
        case 0x262338u: goto label_262338;
        case 0x26233cu: goto label_26233c;
        case 0x262340u: goto label_262340;
        case 0x262344u: goto label_262344;
        case 0x262348u: goto label_262348;
        case 0x26234cu: goto label_26234c;
        case 0x262350u: goto label_262350;
        case 0x262354u: goto label_262354;
        case 0x262358u: goto label_262358;
        case 0x26235cu: goto label_26235c;
        case 0x262360u: goto label_262360;
        case 0x262364u: goto label_262364;
        case 0x262368u: goto label_262368;
        case 0x26236cu: goto label_26236c;
        case 0x262370u: goto label_262370;
        case 0x262374u: goto label_262374;
        case 0x262378u: goto label_262378;
        case 0x26237cu: goto label_26237c;
        case 0x262380u: goto label_262380;
        case 0x262384u: goto label_262384;
        case 0x262388u: goto label_262388;
        case 0x26238cu: goto label_26238c;
        case 0x262390u: goto label_262390;
        case 0x262394u: goto label_262394;
        case 0x262398u: goto label_262398;
        case 0x26239cu: goto label_26239c;
        case 0x2623a0u: goto label_2623a0;
        case 0x2623a4u: goto label_2623a4;
        case 0x2623a8u: goto label_2623a8;
        case 0x2623acu: goto label_2623ac;
        case 0x2623b0u: goto label_2623b0;
        case 0x2623b4u: goto label_2623b4;
        case 0x2623b8u: goto label_2623b8;
        case 0x2623bcu: goto label_2623bc;
        case 0x2623c0u: goto label_2623c0;
        case 0x2623c4u: goto label_2623c4;
        case 0x2623c8u: goto label_2623c8;
        case 0x2623ccu: goto label_2623cc;
        case 0x2623d0u: goto label_2623d0;
        case 0x2623d4u: goto label_2623d4;
        case 0x2623d8u: goto label_2623d8;
        case 0x2623dcu: goto label_2623dc;
        case 0x2623e0u: goto label_2623e0;
        case 0x2623e4u: goto label_2623e4;
        case 0x2623e8u: goto label_2623e8;
        case 0x2623ecu: goto label_2623ec;
        case 0x2623f0u: goto label_2623f0;
        case 0x2623f4u: goto label_2623f4;
        case 0x2623f8u: goto label_2623f8;
        case 0x2623fcu: goto label_2623fc;
        case 0x262400u: goto label_262400;
        case 0x262404u: goto label_262404;
        case 0x262408u: goto label_262408;
        case 0x26240cu: goto label_26240c;
        case 0x262410u: goto label_262410;
        case 0x262414u: goto label_262414;
        case 0x262418u: goto label_262418;
        case 0x26241cu: goto label_26241c;
        case 0x262420u: goto label_262420;
        case 0x262424u: goto label_262424;
        case 0x262428u: goto label_262428;
        case 0x26242cu: goto label_26242c;
        case 0x262430u: goto label_262430;
        case 0x262434u: goto label_262434;
        case 0x262438u: goto label_262438;
        case 0x26243cu: goto label_26243c;
        case 0x262440u: goto label_262440;
        case 0x262444u: goto label_262444;
        case 0x262448u: goto label_262448;
        case 0x26244cu: goto label_26244c;
        case 0x262450u: goto label_262450;
        case 0x262454u: goto label_262454;
        case 0x262458u: goto label_262458;
        case 0x26245cu: goto label_26245c;
        case 0x262460u: goto label_262460;
        case 0x262464u: goto label_262464;
        case 0x262468u: goto label_262468;
        case 0x26246cu: goto label_26246c;
        case 0x262470u: goto label_262470;
        case 0x262474u: goto label_262474;
        case 0x262478u: goto label_262478;
        case 0x26247cu: goto label_26247c;
        case 0x262480u: goto label_262480;
        case 0x262484u: goto label_262484;
        case 0x262488u: goto label_262488;
        case 0x26248cu: goto label_26248c;
        case 0x262490u: goto label_262490;
        case 0x262494u: goto label_262494;
        case 0x262498u: goto label_262498;
        case 0x26249cu: goto label_26249c;
        case 0x2624a0u: goto label_2624a0;
        case 0x2624a4u: goto label_2624a4;
        case 0x2624a8u: goto label_2624a8;
        case 0x2624acu: goto label_2624ac;
        case 0x2624b0u: goto label_2624b0;
        case 0x2624b4u: goto label_2624b4;
        case 0x2624b8u: goto label_2624b8;
        case 0x2624bcu: goto label_2624bc;
        case 0x2624c0u: goto label_2624c0;
        case 0x2624c4u: goto label_2624c4;
        case 0x2624c8u: goto label_2624c8;
        case 0x2624ccu: goto label_2624cc;
        case 0x2624d0u: goto label_2624d0;
        case 0x2624d4u: goto label_2624d4;
        case 0x2624d8u: goto label_2624d8;
        case 0x2624dcu: goto label_2624dc;
        case 0x2624e0u: goto label_2624e0;
        case 0x2624e4u: goto label_2624e4;
        case 0x2624e8u: goto label_2624e8;
        case 0x2624ecu: goto label_2624ec;
        case 0x2624f0u: goto label_2624f0;
        case 0x2624f4u: goto label_2624f4;
        case 0x2624f8u: goto label_2624f8;
        case 0x2624fcu: goto label_2624fc;
        case 0x262500u: goto label_262500;
        case 0x262504u: goto label_262504;
        case 0x262508u: goto label_262508;
        case 0x26250cu: goto label_26250c;
        case 0x262510u: goto label_262510;
        case 0x262514u: goto label_262514;
        case 0x262518u: goto label_262518;
        case 0x26251cu: goto label_26251c;
        case 0x262520u: goto label_262520;
        case 0x262524u: goto label_262524;
        case 0x262528u: goto label_262528;
        case 0x26252cu: goto label_26252c;
        case 0x262530u: goto label_262530;
        case 0x262534u: goto label_262534;
        case 0x262538u: goto label_262538;
        case 0x26253cu: goto label_26253c;
        case 0x262540u: goto label_262540;
        case 0x262544u: goto label_262544;
        case 0x262548u: goto label_262548;
        case 0x26254cu: goto label_26254c;
        case 0x262550u: goto label_262550;
        case 0x262554u: goto label_262554;
        case 0x262558u: goto label_262558;
        case 0x26255cu: goto label_26255c;
        case 0x262560u: goto label_262560;
        case 0x262564u: goto label_262564;
        case 0x262568u: goto label_262568;
        case 0x26256cu: goto label_26256c;
        case 0x262570u: goto label_262570;
        case 0x262574u: goto label_262574;
        case 0x262578u: goto label_262578;
        case 0x26257cu: goto label_26257c;
        case 0x262580u: goto label_262580;
        case 0x262584u: goto label_262584;
        case 0x262588u: goto label_262588;
        case 0x26258cu: goto label_26258c;
        case 0x262590u: goto label_262590;
        case 0x262594u: goto label_262594;
        case 0x262598u: goto label_262598;
        case 0x26259cu: goto label_26259c;
        case 0x2625a0u: goto label_2625a0;
        case 0x2625a4u: goto label_2625a4;
        case 0x2625a8u: goto label_2625a8;
        case 0x2625acu: goto label_2625ac;
        case 0x2625b0u: goto label_2625b0;
        case 0x2625b4u: goto label_2625b4;
        case 0x2625b8u: goto label_2625b8;
        case 0x2625bcu: goto label_2625bc;
        case 0x2625c0u: goto label_2625c0;
        case 0x2625c4u: goto label_2625c4;
        default: break;
    }

    ctx->pc = 0x262000u;

label_262000:
    // 0x262000: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x262000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_262004:
    // 0x262004: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x262004u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_262008:
    // 0x262008: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x262008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_26200c:
    // 0x26200c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x26200cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_262010:
    // 0x262010: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x262010u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_262014:
    // 0x262014: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x262014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_262018:
    // 0x262018: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x262018u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_26201c:
    // 0x26201c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x26201cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_262020:
    // 0x262020: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x262020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_262024:
    // 0x262024: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x262024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_262028:
    // 0x262028: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x262028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_26202c:
    // 0x26202c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x26202cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_262030:
    // 0x262030: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x262030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_262034:
    // 0x262034: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x262034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_262038:
    // 0x262038: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x262038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
label_26203c:
    // 0x26203c: 0x8e700234  lw          $s0, 0x234($s3)
    ctx->pc = 0x26203cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 564)));
label_262040:
    // 0x262040: 0x8e620274  lw          $v0, 0x274($s3)
    ctx->pc = 0x262040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 628)));
label_262044:
    // 0x262044: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x262044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_262048:
    // 0x262048: 0x8e160334  lw          $s6, 0x334($s0)
    ctx->pc = 0x262048u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_26204c:
    // 0x26204c: 0x8e120338  lw          $s2, 0x338($s0)
    ctx->pc = 0x26204cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_262050:
    // 0x262050: 0x8ed70150  lw          $s7, 0x150($s6)
    ctx->pc = 0x262050u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 336)));
label_262054:
    // 0x262054: 0x8ec3014c  lw          $v1, 0x14C($s6)
    ctx->pc = 0x262054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 332)));
label_262058:
    // 0x262058: 0x8e510090  lw          $s1, 0x90($s2)
    ctx->pc = 0x262058u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_26205c:
    // 0x26205c: 0x1040014d  beqz        $v0, . + 4 + (0x14D << 2)
label_262060:
    if (ctx->pc == 0x262060u) {
        ctx->pc = 0x262060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26205Cu;
        // 0x262060: 0x8e540088  lw          $s4, 0x88($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262064u;
        goto label_262064;
    }
    ctx->pc = 0x26205Cu;
    {
        const bool branch_taken_0x26205c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26205Cu;
        // 0x262060: 0x8e540088  lw          $s4, 0x88($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26205c) {
            ctx->pc = 0x262594u;
            goto label_262594;
        }
    }
    ctx->pc = 0x262064u;
label_262064:
    // 0x262064: 0x26e2ffcf  addiu       $v0, $s7, -0x31
    ctx->pc = 0x262064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967247));
label_262068:
    // 0x262068: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x262068u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_26206c:
    // 0x26206c: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_262070:
    if (ctx->pc == 0x262070u) {
        ctx->pc = 0x262070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26206Cu;
        // 0x262070: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262074u;
        goto label_262074;
    }
    ctx->pc = 0x26206Cu;
    {
        const bool branch_taken_0x26206c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26206Cu;
        // 0x262070: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26206c) {
            ctx->pc = 0x2621A0u;
            goto label_2621a0;
        }
    }
    ctx->pc = 0x262074u;
label_262074:
    // 0x262074: 0x52e20089  beql        $s7, $v0, . + 4 + (0x89 << 2)
label_262078:
    if (ctx->pc == 0x262078u) {
        ctx->pc = 0x262078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262074u;
        // 0x262078: 0x8e710274  lw          $s1, 0x274($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26207Cu;
        goto label_26207c;
    }
    ctx->pc = 0x262074u;
    {
        const bool branch_taken_0x262074 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x262074) {
            ctx->pc = 0x262078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262074u;
            // 0x262078: 0x8e710274  lw          $s1, 0x274($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26229Cu;
            goto label_26229c;
        }
    }
    ctx->pc = 0x26207Cu;
label_26207c:
    // 0x26207c: 0x10620048  beq         $v1, $v0, . + 4 + (0x48 << 2)
label_262080:
    if (ctx->pc == 0x262080u) {
        ctx->pc = 0x262080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26207Cu;
        // 0x262080: 0x2682fff4  addiu       $v0, $s4, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262084u;
        goto label_262084;
    }
    ctx->pc = 0x26207Cu;
    {
        const bool branch_taken_0x26207c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x262080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26207Cu;
        // 0x262080: 0x2682fff4  addiu       $v0, $s4, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26207c) {
            ctx->pc = 0x2621A0u;
            goto label_2621a0;
        }
    }
    ctx->pc = 0x262084u;
label_262084:
    // 0x262084: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x262084u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_262088:
    // 0x262088: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_26208c:
    if (ctx->pc == 0x26208Cu) {
        ctx->pc = 0x26208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262088u;
        // 0x26208c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262090u;
        goto label_262090;
    }
    ctx->pc = 0x262088u;
    {
        const bool branch_taken_0x262088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262088u;
        // 0x26208c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262088) {
            ctx->pc = 0x2620C4u;
            goto label_2620c4;
        }
    }
    ctx->pc = 0x262090u;
label_262090:
    // 0x262090: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x262090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_262094:
    // 0x262094: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x262094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_262098:
    // 0x262098: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x262098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_26209c:
    // 0x26209c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26209cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2620a0:
    // 0x2620a0: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_2620a4:
    if (ctx->pc == 0x2620A4u) {
        ctx->pc = 0x2620A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620A0u;
        // 0x2620a4: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2620A8u;
        goto label_2620a8;
    }
    ctx->pc = 0x2620A0u;
    {
        const bool branch_taken_0x2620a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2620A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620A0u;
        // 0x2620a4: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2620a0) {
            ctx->pc = 0x2620C0u;
            goto label_2620c0;
        }
    }
    ctx->pc = 0x2620A8u;
label_2620a8:
    // 0x2620a8: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_2620ac:
    if (ctx->pc == 0x2620ACu) {
        ctx->pc = 0x2620ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620A8u;
        // 0x2620ac: 0x2402010f  addiu       $v0, $zero, 0x10F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2620B0u;
        goto label_2620b0;
    }
    ctx->pc = 0x2620A8u;
    {
        const bool branch_taken_0x2620a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2620ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620A8u;
        // 0x2620ac: 0x2402010f  addiu       $v0, $zero, 0x10F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2620a8) {
            ctx->pc = 0x2620C0u;
            goto label_2620c0;
        }
    }
    ctx->pc = 0x2620B0u;
label_2620b0:
    // 0x2620b0: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_2620b4:
    if (ctx->pc == 0x2620B4u) {
        ctx->pc = 0x2620B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620B0u;
        // 0x2620b4: 0x24020110  addiu       $v0, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2620B8u;
        goto label_2620b8;
    }
    ctx->pc = 0x2620B0u;
    {
        const bool branch_taken_0x2620b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2620B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620B0u;
        // 0x2620b4: 0x24020110  addiu       $v0, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2620b0) {
            ctx->pc = 0x2620C0u;
            goto label_2620c0;
        }
    }
    ctx->pc = 0x2620B8u;
label_2620b8:
    // 0x2620b8: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
label_2620bc:
    if (ctx->pc == 0x2620BCu) {
        ctx->pc = 0x2620C0u;
        goto label_2620c0;
    }
    ctx->pc = 0x2620B8u;
    {
        const bool branch_taken_0x2620b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2620b8) {
            ctx->pc = 0x2620C4u;
            goto label_2620c4;
        }
    }
    ctx->pc = 0x2620C0u;
label_2620c0:
    // 0x2620c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2620c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2620c4:
    // 0x2620c4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_2620c8:
    if (ctx->pc == 0x2620C8u) {
        ctx->pc = 0x2620C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620C4u;
        // 0x2620c8: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2620CCu;
        goto label_2620cc;
    }
    ctx->pc = 0x2620C4u;
    {
        const bool branch_taken_0x2620c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2620C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620C4u;
        // 0x2620c8: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2620c4) {
            ctx->pc = 0x2620E4u;
            goto label_2620e4;
        }
    }
    ctx->pc = 0x2620CCu;
label_2620cc:
    // 0x2620cc: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2620ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2620d0:
    // 0x2620d0: 0x8c6201c4  lw          $v0, 0x1C4($v1)
    ctx->pc = 0x2620d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 452)));
label_2620d4:
    // 0x2620d4: 0x40f809  jalr        $v0
label_2620d8:
    if (ctx->pc == 0x2620D8u) {
        ctx->pc = 0x2620D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620D4u;
        // 0x2620d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2620DCu;
        goto label_2620dc;
    }
    ctx->pc = 0x2620D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2620DCu);
        ctx->pc = 0x2620D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620D4u;
        // 0x2620d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2620D4u, 0x2620DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2620DCu;
label_2620dc:
    // 0x2620dc: 0x1000012e  b           . + 4 + (0x12E << 2)
label_2620e0:
    if (ctx->pc == 0x2620E0u) {
        ctx->pc = 0x2620E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620DCu;
        // 0x2620e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2620E4u;
        goto label_2620e4;
    }
    ctx->pc = 0x2620DCu;
    {
        const bool branch_taken_0x2620dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2620E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620DCu;
        // 0x2620e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2620dc) {
            ctx->pc = 0x262598u;
            goto label_262598;
        }
    }
    ctx->pc = 0x2620E4u;
label_2620e4:
    // 0x2620e4: 0x12e2012c  beq         $s7, $v0, . + 4 + (0x12C << 2)
label_2620e8:
    if (ctx->pc == 0x2620E8u) {
        ctx->pc = 0x2620E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620E4u;
        // 0x2620e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2620ECu;
        goto label_2620ec;
    }
    ctx->pc = 0x2620E4u;
    {
        const bool branch_taken_0x2620e4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x2620E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620E4u;
        // 0x2620e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2620e4) {
            ctx->pc = 0x262598u;
            goto label_262598;
        }
    }
    ctx->pc = 0x2620ECu;
label_2620ec:
    // 0x2620ec: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x2620ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_2620f0:
    // 0x2620f0: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x2620f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_2620f4:
    // 0x2620f4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2620f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2620f8:
    // 0x2620f8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2620fc:
    if (ctx->pc == 0x2620FCu) {
        ctx->pc = 0x2620FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620F8u;
        // 0x2620fc: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262100u;
        goto label_262100;
    }
    ctx->pc = 0x2620F8u;
    {
        const bool branch_taken_0x2620f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2620f8) {
            ctx->pc = 0x2620FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2620F8u;
            // 0x2620fc: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262114u;
            goto label_262114;
        }
    }
    ctx->pc = 0x262100u;
label_262100:
    // 0x262100: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_262104:
    if (ctx->pc == 0x262104u) {
        ctx->pc = 0x262104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262100u;
        // 0x262104: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262108u;
        goto label_262108;
    }
    ctx->pc = 0x262100u;
    {
        const bool branch_taken_0x262100 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x262104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262100u;
        // 0x262104: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262100) {
            ctx->pc = 0x262110u;
            goto label_262110;
        }
    }
    ctx->pc = 0x262108u;
label_262108:
    // 0x262108: 0x16820123  bne         $s4, $v0, . + 4 + (0x123 << 2)
label_26210c:
    if (ctx->pc == 0x26210Cu) {
        ctx->pc = 0x26210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262108u;
        // 0x26210c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262110u;
        goto label_262110;
    }
    ctx->pc = 0x262108u;
    {
        const bool branch_taken_0x262108 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x26210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262108u;
        // 0x26210c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262108) {
            ctx->pc = 0x262598u;
            goto label_262598;
        }
    }
    ctx->pc = 0x262110u;
label_262110:
    // 0x262110: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x262110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_262114:
    // 0x262114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_262118:
    // 0x262118: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x262118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26211c:
    // 0x26211c: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x26211cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
label_262120:
    // 0x262120: 0x40f809  jalr        $v0
label_262124:
    if (ctx->pc == 0x262124u) {
        ctx->pc = 0x262124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262120u;
        // 0x262124: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262128u;
        goto label_262128;
    }
    ctx->pc = 0x262120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x262128u);
        ctx->pc = 0x262124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262120u;
        // 0x262124: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262120u, 0x262128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262128u;
label_262128:
    // 0x262128: 0x1040011b  beqz        $v0, . + 4 + (0x11B << 2)
label_26212c:
    if (ctx->pc == 0x26212Cu) {
        ctx->pc = 0x26212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262128u;
        // 0x26212c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262130u;
        goto label_262130;
    }
    ctx->pc = 0x262128u;
    {
        const bool branch_taken_0x262128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262128u;
        // 0x26212c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262128) {
            ctx->pc = 0x262598u;
            goto label_262598;
        }
    }
    ctx->pc = 0x262130u;
label_262130:
    // 0x262130: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x262130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_262134:
    // 0x262134: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x262134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_262138:
    // 0x262138: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26213c:
    if (ctx->pc == 0x26213Cu) {
        ctx->pc = 0x26213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262138u;
        // 0x26213c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262140u;
        goto label_262140;
    }
    ctx->pc = 0x262138u;
    {
        const bool branch_taken_0x262138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262138u;
        // 0x26213c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262138) {
            ctx->pc = 0x262148u;
            goto label_262148;
        }
    }
    ctx->pc = 0x262140u;
label_262140:
    // 0x262140: 0x8e020554  lw          $v0, 0x554($s0)
    ctx->pc = 0x262140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1364)));
label_262144:
    // 0x262144: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x262144u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_262148:
    // 0x262148: 0x14600113  bnez        $v1, . + 4 + (0x113 << 2)
label_26214c:
    if (ctx->pc == 0x26214Cu) {
        ctx->pc = 0x26214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262148u;
        // 0x26214c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262150u;
        goto label_262150;
    }
    ctx->pc = 0x262148u;
    {
        const bool branch_taken_0x262148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262148u;
        // 0x26214c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262148) {
            ctx->pc = 0x262598u;
            goto label_262598;
        }
    }
    ctx->pc = 0x262150u;
label_262150:
    // 0x262150: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x262150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_262154:
    // 0x262154: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x262154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_262158:
    // 0x262158: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x262158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_26215c:
    // 0x26215c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26215cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_262160:
    // 0x262160: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x262160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_262164:
    // 0x262164: 0x288307a0  slti        $v1, $a0, 0x7A0
    ctx->pc = 0x262164u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1952) ? 1 : 0);
label_262168:
    // 0x262168: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_26216c:
    if (ctx->pc == 0x26216Cu) {
        ctx->pc = 0x26216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262168u;
        // 0x26216c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262170u;
        goto label_262170;
    }
    ctx->pc = 0x262168u;
    {
        const bool branch_taken_0x262168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262168u;
        // 0x26216c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262168) {
            ctx->pc = 0x26217Cu;
            goto label_26217c;
        }
    }
    ctx->pc = 0x262170u;
label_262170:
    // 0x262170: 0x288207a4  slti        $v0, $a0, 0x7A4
    ctx->pc = 0x262170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1956) ? 1 : 0);
label_262174:
    // 0x262174: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_262178:
    if (ctx->pc == 0x262178u) {
        ctx->pc = 0x262178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262174u;
        // 0x262178: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26217Cu;
        goto label_26217c;
    }
    ctx->pc = 0x262174u;
    {
        const bool branch_taken_0x262174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262174) {
            ctx->pc = 0x262178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262174u;
            // 0x262178: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262194u;
            goto label_262194;
        }
    }
    ctx->pc = 0x26217Cu;
label_26217c:
    // 0x26217c: 0x240207a6  addiu       $v0, $zero, 0x7A6
    ctx->pc = 0x26217cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1958));
label_262180:
    // 0x262180: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_262184:
    if (ctx->pc == 0x262184u) {
        ctx->pc = 0x262184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262180u;
        // 0x262184: 0x240207a7  addiu       $v0, $zero, 0x7A7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1959));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262188u;
        goto label_262188;
    }
    ctx->pc = 0x262180u;
    {
        const bool branch_taken_0x262180 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x262184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262180u;
        // 0x262184: 0x240207a7  addiu       $v0, $zero, 0x7A7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1959));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262180) {
            ctx->pc = 0x262190u;
            goto label_262190;
        }
    }
    ctx->pc = 0x262188u;
label_262188:
    // 0x262188: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_26218c:
    if (ctx->pc == 0x26218Cu) {
        ctx->pc = 0x26218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262188u;
        // 0x26218c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262190u;
        goto label_262190;
    }
    ctx->pc = 0x262188u;
    {
        const bool branch_taken_0x262188 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x26218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262188u;
        // 0x26218c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262188) {
            ctx->pc = 0x262198u;
            goto label_262198;
        }
    }
    ctx->pc = 0x262190u;
label_262190:
    // 0x262190: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x262190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_262194:
    // 0x262194: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x262194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_262198:
    // 0x262198: 0x1000006d  b           . + 4 + (0x6D << 2)
label_26219c:
    if (ctx->pc == 0x26219Cu) {
        ctx->pc = 0x26219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262198u;
        // 0x26219c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2621A0u;
        goto label_2621a0;
    }
    ctx->pc = 0x262198u;
    {
        const bool branch_taken_0x262198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262198u;
        // 0x26219c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262198) {
            ctx->pc = 0x262350u;
            goto label_262350;
        }
    }
    ctx->pc = 0x2621A0u;
label_2621a0:
    // 0x2621a0: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x2621a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_2621a4:
    // 0x2621a4: 0x12e2003c  beq         $s7, $v0, . + 4 + (0x3C << 2)
label_2621a8:
    if (ctx->pc == 0x2621A8u) {
        ctx->pc = 0x2621A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2621A4u;
        // 0x2621a8: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2621ACu;
        goto label_2621ac;
    }
    ctx->pc = 0x2621A4u;
    {
        const bool branch_taken_0x2621a4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x2621A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2621A4u;
        // 0x2621a8: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2621a4) {
            ctx->pc = 0x262298u;
            goto label_262298;
        }
    }
    ctx->pc = 0x2621ACu;
label_2621ac:
    // 0x2621ac: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2621acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_2621b0:
    // 0x2621b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2621b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2621b4:
    // 0x2621b4: 0x54430039  bnel        $v0, $v1, . + 4 + (0x39 << 2)
label_2621b8:
    if (ctx->pc == 0x2621B8u) {
        ctx->pc = 0x2621B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2621B4u;
        // 0x2621b8: 0x8e710274  lw          $s1, 0x274($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2621BCu;
        goto label_2621bc;
    }
    ctx->pc = 0x2621B4u;
    {
        const bool branch_taken_0x2621b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2621b4) {
            ctx->pc = 0x2621B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2621B4u;
            // 0x2621b8: 0x8e710274  lw          $s1, 0x274($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26229Cu;
            goto label_26229c;
        }
    }
    ctx->pc = 0x2621BCu;
label_2621bc:
    // 0x2621bc: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x2621bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_2621c0:
    // 0x2621c0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2621c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2621c4:
    // 0x2621c4: 0x50620035  beql        $v1, $v0, . + 4 + (0x35 << 2)
label_2621c8:
    if (ctx->pc == 0x2621C8u) {
        ctx->pc = 0x2621C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2621C4u;
        // 0x2621c8: 0x8e710274  lw          $s1, 0x274($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2621CCu;
        goto label_2621cc;
    }
    ctx->pc = 0x2621C4u;
    {
        const bool branch_taken_0x2621c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2621c4) {
            ctx->pc = 0x2621C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2621C4u;
            // 0x2621c8: 0x8e710274  lw          $s1, 0x274($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26229Cu;
            goto label_26229c;
        }
    }
    ctx->pc = 0x2621CCu;
label_2621cc:
    // 0x2621cc: 0xc092432  jal         func_2490C8
label_2621d0:
    if (ctx->pc == 0x2621D0u) {
        ctx->pc = 0x2621D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2621CCu;
        // 0x2621d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2621D4u;
        goto label_2621d4;
    }
    ctx->pc = 0x2621CCu;
    SET_GPR_U32(ctx, 31, 0x2621D4u);
    ctx->pc = 0x2621D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2621CCu;
    // 0x2621d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2490C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2490C8u, 0x2621CCu, 0x2621D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2621D4u;
label_2621d4:
    // 0x2621d4: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
label_2621d8:
    if (ctx->pc == 0x2621D8u) {
        ctx->pc = 0x2621D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2621D4u;
        // 0x2621d8: 0x8e710274  lw          $s1, 0x274($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2621DCu;
        goto label_2621dc;
    }
    ctx->pc = 0x2621D4u;
    {
        const bool branch_taken_0x2621d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2621d4) {
            ctx->pc = 0x2621D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2621D4u;
            // 0x2621d8: 0x8e710274  lw          $s1, 0x274($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26229Cu;
            goto label_26229c;
        }
    }
    ctx->pc = 0x2621DCu;
label_2621dc:
    // 0x2621dc: 0x57c0002f  bnel        $fp, $zero, . + 4 + (0x2F << 2)
label_2621e0:
    if (ctx->pc == 0x2621E0u) {
        ctx->pc = 0x2621E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2621DCu;
        // 0x2621e0: 0x8e710274  lw          $s1, 0x274($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2621E4u;
        goto label_2621e4;
    }
    ctx->pc = 0x2621DCu;
    {
        const bool branch_taken_0x2621dc = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x2621dc) {
            ctx->pc = 0x2621E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2621DCu;
            // 0x2621e0: 0x8e710274  lw          $s1, 0x274($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26229Cu;
            goto label_26229c;
        }
    }
    ctx->pc = 0x2621E4u;
label_2621e4:
    // 0x2621e4: 0x2622fffa  addiu       $v0, $s1, -0x6
    ctx->pc = 0x2621e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967290));
label_2621e8:
    // 0x2621e8: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2621e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2621ec:
    // 0x2621ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2621f0:
    if (ctx->pc == 0x2621F0u) {
        ctx->pc = 0x2621F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2621ECu;
        // 0x2621f0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2621F4u;
        goto label_2621f4;
    }
    ctx->pc = 0x2621ECu;
    {
        const bool branch_taken_0x2621ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2621F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2621ECu;
        // 0x2621f0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2621ec) {
            ctx->pc = 0x262200u;
            goto label_262200;
        }
    }
    ctx->pc = 0x2621F4u;
label_2621f4:
    // 0x2621f4: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x2621f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_2621f8:
    // 0x2621f8: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x2621f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_2621fc:
    // 0x2621fc: 0x2c430002  sltiu       $v1, $v0, 0x2
    ctx->pc = 0x2621fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_262200:
    // 0x262200: 0x8ec20150  lw          $v0, 0x150($s6)
    ctx->pc = 0x262200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 336)));
label_262204:
    // 0x262204: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x262204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262208:
    // 0x262208: 0x2442ffe3  addiu       $v0, $v0, -0x1D
    ctx->pc = 0x262208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967267));
label_26220c:
    // 0x26220c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_262210:
    if (ctx->pc == 0x262210u) {
        ctx->pc = 0x262210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26220Cu;
        // 0x262210: 0x2c420002  sltiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x262214u;
        goto label_262214;
    }
    ctx->pc = 0x26220Cu;
    {
        const bool branch_taken_0x26220c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x262210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26220Cu;
        // 0x262210: 0x2c420002  sltiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26220c) {
            ctx->pc = 0x262218u;
            goto label_262218;
        }
    }
    ctx->pc = 0x262214u;
label_262214:
    // 0x262214: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x262214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262218:
    // 0x262218: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x262218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_26221c:
    // 0x26221c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x26221cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_262220:
    // 0x262220: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_262224:
    if (ctx->pc == 0x262224u) {
        ctx->pc = 0x262224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262220u;
        // 0x262224: 0x8e02036c  lw          $v0, 0x36C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262228u;
        goto label_262228;
    }
    ctx->pc = 0x262220u;
    {
        const bool branch_taken_0x262220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262220) {
            ctx->pc = 0x262224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262220u;
            // 0x262224: 0x8e02036c  lw          $v0, 0x36C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262250u;
            goto label_262250;
        }
    }
    ctx->pc = 0x262228u;
label_262228:
    // 0x262228: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x262228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_26222c:
    // 0x26222c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x26222cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_262230:
    // 0x262230: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_262234:
    if (ctx->pc == 0x262234u) {
        ctx->pc = 0x262234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262230u;
        // 0x262234: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262238u;
        goto label_262238;
    }
    ctx->pc = 0x262230u;
    {
        const bool branch_taken_0x262230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x262234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262230u;
        // 0x262234: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262230) {
            ctx->pc = 0x26223Cu;
            goto label_26223c;
        }
    }
    ctx->pc = 0x262238u;
label_262238:
    // 0x262238: 0x8e0411e4  lw          $a0, 0x11E4($s0)
    ctx->pc = 0x262238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4580)));
label_26223c:
    // 0x26223c: 0x148000d6  bnez        $a0, . + 4 + (0xD6 << 2)
label_262240:
    if (ctx->pc == 0x262240u) {
        ctx->pc = 0x262240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26223Cu;
        // 0x262240: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262244u;
        goto label_262244;
    }
    ctx->pc = 0x26223Cu;
    {
        const bool branch_taken_0x26223c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x262240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26223Cu;
        // 0x262240: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26223c) {
            ctx->pc = 0x262598u;
            goto label_262598;
        }
    }
    ctx->pc = 0x262244u;
label_262244:
    // 0x262244: 0x54a000d5  bnel        $a1, $zero, . + 4 + (0xD5 << 2)
label_262248:
    if (ctx->pc == 0x262248u) {
        ctx->pc = 0x262248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262244u;
        // 0x262248: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26224Cu;
        goto label_26224c;
    }
    ctx->pc = 0x262244u;
    {
        const bool branch_taken_0x262244 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x262244) {
            ctx->pc = 0x262248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262244u;
            // 0x262248: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26259Cu;
            goto label_26259c;
        }
    }
    ctx->pc = 0x26224Cu;
label_26224c:
    // 0x26224c: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x26224cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_262250:
    // 0x262250: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x262250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_262254:
    // 0x262254: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x262254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_262258:
    // 0x262258: 0x104300cf  beq         $v0, $v1, . + 4 + (0xCF << 2)
label_26225c:
    if (ctx->pc == 0x26225Cu) {
        ctx->pc = 0x26225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262258u;
        // 0x26225c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262260u;
        goto label_262260;
    }
    ctx->pc = 0x262258u;
    {
        const bool branch_taken_0x262258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262258u;
        // 0x26225c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262258) {
            ctx->pc = 0x262598u;
            goto label_262598;
        }
    }
    ctx->pc = 0x262260u;
label_262260:
    // 0x262260: 0x8e020370  lw          $v0, 0x370($s0)
    ctx->pc = 0x262260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
label_262264:
    // 0x262264: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x262264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_262268:
    // 0x262268: 0x144000cb  bnez        $v0, . + 4 + (0xCB << 2)
label_26226c:
    if (ctx->pc == 0x26226Cu) {
        ctx->pc = 0x26226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262268u;
        // 0x26226c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262270u;
        goto label_262270;
    }
    ctx->pc = 0x262268u;
    {
        const bool branch_taken_0x262268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262268u;
        // 0x26226c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262268) {
            ctx->pc = 0x262598u;
            goto label_262598;
        }
    }
    ctx->pc = 0x262270u;
label_262270:
    // 0x262270: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x262270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_262274:
    // 0x262274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_262278:
    // 0x262278: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x262278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26227c:
    // 0x26227c: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x26227cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
label_262280:
    // 0x262280: 0x40f809  jalr        $v0
label_262284:
    if (ctx->pc == 0x262284u) {
        ctx->pc = 0x262284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262280u;
        // 0x262284: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262288u;
        goto label_262288;
    }
    ctx->pc = 0x262280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x262288u);
        ctx->pc = 0x262284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262280u;
        // 0x262284: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262280u, 0x262288u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262288u;
label_262288:
    // 0x262288: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
label_26228c:
    if (ctx->pc == 0x26228Cu) {
        ctx->pc = 0x26228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262288u;
        // 0x26228c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262290u;
        goto label_262290;
    }
    ctx->pc = 0x262288u;
    {
        const bool branch_taken_0x262288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262288u;
        // 0x26228c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262288) {
            ctx->pc = 0x262594u;
            goto label_262594;
        }
    }
    ctx->pc = 0x262290u;
label_262290:
    // 0x262290: 0x1000002e  b           . + 4 + (0x2E << 2)
label_262294:
    if (ctx->pc == 0x262294u) {
        ctx->pc = 0x262294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262290u;
        // 0x262294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262298u;
        goto label_262298;
    }
    ctx->pc = 0x262290u;
    {
        const bool branch_taken_0x262290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262290u;
        // 0x262294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262290) {
            ctx->pc = 0x26234Cu;
            goto label_26234c;
        }
    }
    ctx->pc = 0x262298u;
label_262298:
    // 0x262298: 0x8e710274  lw          $s1, 0x274($s3)
    ctx->pc = 0x262298u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 628)));
label_26229c:
    // 0x26229c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x26229cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2622a0:
    // 0x2622a0: 0xc0d8de2  jal         func_363788
label_2622a4:
    if (ctx->pc == 0x2622A4u) {
        ctx->pc = 0x2622A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622A0u;
        // 0x2622a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2622A8u;
        goto label_2622a8;
    }
    ctx->pc = 0x2622A0u;
    SET_GPR_U32(ctx, 31, 0x2622A8u);
    ctx->pc = 0x2622A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2622A0u;
    // 0x2622a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2622A0u, 0x2622A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2622A8u;
label_2622a8:
    // 0x2622a8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2622ac:
    if (ctx->pc == 0x2622ACu) {
        ctx->pc = 0x2622ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622A8u;
        // 0x2622ac: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2622B0u;
        goto label_2622b0;
    }
    ctx->pc = 0x2622A8u;
    {
        const bool branch_taken_0x2622a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2622a8) {
            ctx->pc = 0x2622ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2622A8u;
            // 0x2622ac: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2622C4u;
            goto label_2622c4;
        }
    }
    ctx->pc = 0x2622B0u;
label_2622b0:
    // 0x2622b0: 0xc0d8de2  jal         func_363788
label_2622b4:
    if (ctx->pc == 0x2622B4u) {
        ctx->pc = 0x2622B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622B0u;
        // 0x2622b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2622B8u;
        goto label_2622b8;
    }
    ctx->pc = 0x2622B0u;
    SET_GPR_U32(ctx, 31, 0x2622B8u);
    ctx->pc = 0x2622B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2622B0u;
    // 0x2622b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2622B0u, 0x2622B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2622B8u;
label_2622b8:
    // 0x2622b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2622b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2622bc:
    // 0x2622bc: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_2622c0:
    if (ctx->pc == 0x2622C0u) {
        ctx->pc = 0x2622C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622BCu;
        // 0x2622c0: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2622C4u;
        goto label_2622c4;
    }
    ctx->pc = 0x2622BCu;
    {
        const bool branch_taken_0x2622bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2622bc) {
            ctx->pc = 0x2622C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2622BCu;
            // 0x2622c0: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2622C4u;
            goto label_2622c4;
        }
    }
    ctx->pc = 0x2622C4u;
label_2622c4:
    // 0x2622c4: 0x12a0001a  beqz        $s5, . + 4 + (0x1A << 2)
label_2622c8:
    if (ctx->pc == 0x2622C8u) {
        ctx->pc = 0x2622C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622C4u;
        // 0x2622c8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2622CCu;
        goto label_2622cc;
    }
    ctx->pc = 0x2622C4u;
    {
        const bool branch_taken_0x2622c4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2622C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622C4u;
        // 0x2622c8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2622c4) {
            ctx->pc = 0x262330u;
            goto label_262330;
        }
    }
    ctx->pc = 0x2622CCu;
label_2622cc:
    // 0x2622cc: 0x17c000b2  bnez        $fp, . + 4 + (0xB2 << 2)
label_2622d0:
    if (ctx->pc == 0x2622D0u) {
        ctx->pc = 0x2622D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622CCu;
        // 0x2622d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2622D4u;
        goto label_2622d4;
    }
    ctx->pc = 0x2622CCu;
    {
        const bool branch_taken_0x2622cc = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x2622D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622CCu;
        // 0x2622d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2622cc) {
            ctx->pc = 0x262598u;
            goto label_262598;
        }
    }
    ctx->pc = 0x2622D4u;
label_2622d4:
    // 0x2622d4: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2622d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_2622d8:
    // 0x2622d8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2622d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_2622dc:
    // 0x2622dc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2622e0:
    if (ctx->pc == 0x2622E0u) {
        ctx->pc = 0x2622E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622DCu;
        // 0x2622e0: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2622E4u;
        goto label_2622e4;
    }
    ctx->pc = 0x2622DCu;
    {
        const bool branch_taken_0x2622dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2622E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622DCu;
        // 0x2622e0: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2622dc) {
            ctx->pc = 0x262304u;
            goto label_262304;
        }
    }
    ctx->pc = 0x2622E4u;
label_2622e4:
    // 0x2622e4: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x2622e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_2622e8:
    // 0x2622e8: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x2622e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2622ec:
    // 0x2622ec: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2622f0:
    if (ctx->pc == 0x2622F0u) {
        ctx->pc = 0x2622F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622ECu;
        // 0x2622f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2622F4u;
        goto label_2622f4;
    }
    ctx->pc = 0x2622ECu;
    {
        const bool branch_taken_0x2622ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2622F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622ECu;
        // 0x2622f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2622ec) {
            ctx->pc = 0x2622F8u;
            goto label_2622f8;
        }
    }
    ctx->pc = 0x2622F4u;
label_2622f4:
    // 0x2622f4: 0x8e0411e4  lw          $a0, 0x11E4($s0)
    ctx->pc = 0x2622f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4580)));
label_2622f8:
    // 0x2622f8: 0x148000a7  bnez        $a0, . + 4 + (0xA7 << 2)
label_2622fc:
    if (ctx->pc == 0x2622FCu) {
        ctx->pc = 0x2622FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622F8u;
        // 0x2622fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262300u;
        goto label_262300;
    }
    ctx->pc = 0x2622F8u;
    {
        const bool branch_taken_0x2622f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2622FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622F8u;
        // 0x2622fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2622f8) {
            ctx->pc = 0x262598u;
            goto label_262598;
        }
    }
    ctx->pc = 0x262300u;
label_262300:
    // 0x262300: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x262300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_262304:
    // 0x262304: 0x12e200a4  beq         $s7, $v0, . + 4 + (0xA4 << 2)
label_262308:
    if (ctx->pc == 0x262308u) {
        ctx->pc = 0x262308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262304u;
        // 0x262308: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26230Cu;
        goto label_26230c;
    }
    ctx->pc = 0x262304u;
    {
        const bool branch_taken_0x262304 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x262308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262304u;
        // 0x262308: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262304) {
            ctx->pc = 0x262598u;
            goto label_262598;
        }
    }
    ctx->pc = 0x26230Cu;
label_26230c:
    // 0x26230c: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x26230cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_262310:
    // 0x262310: 0xc06c190  jal         func_1B0640
label_262314:
    if (ctx->pc == 0x262314u) {
        ctx->pc = 0x262314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262310u;
        // 0x262314: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262318u;
        goto label_262318;
    }
    ctx->pc = 0x262310u;
    SET_GPR_U32(ctx, 31, 0x262318u);
    ctx->pc = 0x262314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262310u;
    // 0x262314: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0640u, 0x262310u, 0x262318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262318u;
label_262318:
    // 0x262318: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
label_26231c:
    if (ctx->pc == 0x26231Cu) {
        ctx->pc = 0x26231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262318u;
        // 0x26231c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262320u;
        goto label_262320;
    }
    ctx->pc = 0x262318u;
    {
        const bool branch_taken_0x262318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262318u;
        // 0x26231c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262318) {
            ctx->pc = 0x262594u;
            goto label_262594;
        }
    }
    ctx->pc = 0x262320u;
label_262320:
    // 0x262320: 0xc08a15a  jal         func_228568
label_262324:
    if (ctx->pc == 0x262324u) {
        ctx->pc = 0x262324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262320u;
        // 0x262324: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262328u;
        goto label_262328;
    }
    ctx->pc = 0x262320u;
    SET_GPR_U32(ctx, 31, 0x262328u);
    ctx->pc = 0x262324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262320u;
    // 0x262324: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x262320u, 0x262328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262328u;
label_262328:
    // 0x262328: 0x1000009b  b           . + 4 + (0x9B << 2)
label_26232c:
    if (ctx->pc == 0x26232Cu) {
        ctx->pc = 0x26232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262328u;
        // 0x26232c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262330u;
        goto label_262330;
    }
    ctx->pc = 0x262328u;
    {
        const bool branch_taken_0x262328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262328u;
        // 0x26232c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262328) {
            ctx->pc = 0x262598u;
            goto label_262598;
        }
    }
    ctx->pc = 0x262330u;
label_262330:
    // 0x262330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x262330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_262334:
    // 0x262334: 0x14620098  bne         $v1, $v0, . + 4 + (0x98 << 2)
label_262338:
    if (ctx->pc == 0x262338u) {
        ctx->pc = 0x262338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262334u;
        // 0x262338: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26233Cu;
        goto label_26233c;
    }
    ctx->pc = 0x262334u;
    {
        const bool branch_taken_0x262334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x262338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262334u;
        // 0x262338: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262334) {
            ctx->pc = 0x262598u;
            goto label_262598;
        }
    }
    ctx->pc = 0x26233Cu;
label_26233c:
    // 0x26233c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x26233cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_262340:
    // 0x262340: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_262344:
    if (ctx->pc == 0x262344u) {
        ctx->pc = 0x262344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262340u;
        // 0x262344: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262348u;
        goto label_262348;
    }
    ctx->pc = 0x262340u;
    {
        const bool branch_taken_0x262340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262340u;
        // 0x262344: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262340) {
            ctx->pc = 0x26236Cu;
            goto label_26236c;
        }
    }
    ctx->pc = 0x262348u;
label_262348:
    // 0x262348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x262348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26234c:
    // 0x26234c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26234cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_262350:
    // 0x262350: 0xc06b964  jal         func_1AE590
label_262354:
    if (ctx->pc == 0x262354u) {
        ctx->pc = 0x262358u;
        goto label_262358;
    }
    ctx->pc = 0x262350u;
    SET_GPR_U32(ctx, 31, 0x262358u);
    ctx->pc = 0x1AE590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE590u, 0x262350u, 0x262358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262358u;
label_262358:
    // 0x262358: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x262358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26235c:
    // 0x26235c: 0xc06c546  jal         func_1B1518
label_262360:
    if (ctx->pc == 0x262360u) {
        ctx->pc = 0x262360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26235Cu;
        // 0x262360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262364u;
        goto label_262364;
    }
    ctx->pc = 0x26235Cu;
    SET_GPR_U32(ctx, 31, 0x262364u);
    ctx->pc = 0x262360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26235Cu;
    // 0x262360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x26235Cu, 0x262364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262364u;
label_262364:
    // 0x262364: 0x1000008c  b           . + 4 + (0x8C << 2)
label_262368:
    if (ctx->pc == 0x262368u) {
        ctx->pc = 0x262368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262364u;
        // 0x262368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26236Cu;
        goto label_26236c;
    }
    ctx->pc = 0x262364u;
    {
        const bool branch_taken_0x262364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262364u;
        // 0x262368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262364) {
            ctx->pc = 0x262598u;
            goto label_262598;
        }
    }
    ctx->pc = 0x26236Cu;
label_26236c:
    // 0x26236c: 0x8e640274  lw          $a0, 0x274($s3)
    ctx->pc = 0x26236cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 628)));
label_262370:
    // 0x262370: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x262370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_262374:
    // 0x262374: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x262374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_262378:
    // 0x262378: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x262378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_26237c:
    // 0x26237c: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x26237cu;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_262380:
    // 0x262380: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x262380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_262384:
    // 0x262384: 0x40f809  jalr        $v0
label_262388:
    if (ctx->pc == 0x262388u) {
        ctx->pc = 0x26238Cu;
        goto label_26238c;
    }
    ctx->pc = 0x262384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26238Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262384u, 0x26238Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26238Cu;
label_26238c:
    // 0x26238c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26238cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262390:
    // 0x262390: 0x16200035  bnez        $s1, . + 4 + (0x35 << 2)
label_262394:
    if (ctx->pc == 0x262394u) {
        ctx->pc = 0x262394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262390u;
        // 0x262394: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262398u;
        goto label_262398;
    }
    ctx->pc = 0x262390u;
    {
        const bool branch_taken_0x262390 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x262394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262390u;
        // 0x262394: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262390) {
            ctx->pc = 0x262468u;
            goto label_262468;
        }
    }
    ctx->pc = 0x262398u;
label_262398:
    // 0x262398: 0x8e630234  lw          $v1, 0x234($s3)
    ctx->pc = 0x262398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 564)));
label_26239c:
    // 0x26239c: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x26239cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_2623a0:
    // 0x2623a0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2623a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_2623a4:
    // 0x2623a4: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_2623a8:
    if (ctx->pc == 0x2623A8u) {
        ctx->pc = 0x2623ACu;
        goto label_2623ac;
    }
    ctx->pc = 0x2623A4u;
    {
        const bool branch_taken_0x2623a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2623a4) {
            ctx->pc = 0x262448u;
            goto label_262448;
        }
    }
    ctx->pc = 0x2623ACu;
label_2623ac:
    // 0x2623ac: 0xc0d8de2  jal         func_363788
label_2623b0:
    if (ctx->pc == 0x2623B0u) {
        ctx->pc = 0x2623B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2623ACu;
        // 0x2623b0: 0x8e640274  lw          $a0, 0x274($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2623B4u;
        goto label_2623b4;
    }
    ctx->pc = 0x2623ACu;
    SET_GPR_U32(ctx, 31, 0x2623B4u);
    ctx->pc = 0x2623B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2623ACu;
    // 0x2623b0: 0x8e640274  lw          $a0, 0x274($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2623ACu, 0x2623B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2623B4u;
label_2623b4:
    // 0x2623b4: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2623b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_2623b8:
    // 0x2623b8: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_2623bc:
    if (ctx->pc == 0x2623BCu) {
        ctx->pc = 0x2623C0u;
        goto label_2623c0;
    }
    ctx->pc = 0x2623B8u;
    {
        const bool branch_taken_0x2623b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2623b8) {
            ctx->pc = 0x262448u;
            goto label_262448;
        }
    }
    ctx->pc = 0x2623C0u;
label_2623c0:
    // 0x2623c0: 0x8e630274  lw          $v1, 0x274($s3)
    ctx->pc = 0x2623c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 628)));
label_2623c4:
    // 0x2623c4: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x2623c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_2623c8:
    // 0x2623c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2623cc:
    if (ctx->pc == 0x2623CCu) {
        ctx->pc = 0x2623CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2623C8u;
        // 0x2623cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2623D0u;
        goto label_2623d0;
    }
    ctx->pc = 0x2623C8u;
    {
        const bool branch_taken_0x2623c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2623CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2623C8u;
        // 0x2623cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2623c8) {
            ctx->pc = 0x2623E0u;
            goto label_2623e0;
        }
    }
    ctx->pc = 0x2623D0u;
label_2623d0:
    // 0x2623d0: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x2623d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_2623d4:
    // 0x2623d4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2623d8:
    if (ctx->pc == 0x2623D8u) {
        ctx->pc = 0x2623D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2623D4u;
        // 0x2623d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2623DCu;
        goto label_2623dc;
    }
    ctx->pc = 0x2623D4u;
    {
        const bool branch_taken_0x2623d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2623D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2623D4u;
        // 0x2623d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2623d4) {
            ctx->pc = 0x2623E0u;
            goto label_2623e0;
        }
    }
    ctx->pc = 0x2623DCu;
label_2623dc:
    // 0x2623dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2623dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2623e0:
    // 0x2623e0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2623e4:
    if (ctx->pc == 0x2623E4u) {
        ctx->pc = 0x2623E8u;
        goto label_2623e8;
    }
    ctx->pc = 0x2623E0u;
    {
        const bool branch_taken_0x2623e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2623e0) {
            ctx->pc = 0x262448u;
            goto label_262448;
        }
    }
    ctx->pc = 0x2623E8u;
label_2623e8:
    // 0x2623e8: 0x8e620230  lw          $v0, 0x230($s3)
    ctx->pc = 0x2623e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
label_2623ec:
    // 0x2623ec: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2623ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_2623f0:
    // 0x2623f0: 0xae620230  sw          $v0, 0x230($s3)
    ctx->pc = 0x2623f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 560), GPR_U32(ctx, 2));
label_2623f4:
    // 0x2623f4: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x2623f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_2623f8:
    // 0x2623f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2623f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2623fc:
    // 0x2623fc: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x2623fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_262400:
    // 0x262400: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_262404:
    if (ctx->pc == 0x262404u) {
        ctx->pc = 0x262404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262400u;
        // 0x262404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262408u;
        goto label_262408;
    }
    ctx->pc = 0x262400u;
    {
        const bool branch_taken_0x262400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x262404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262400u;
        // 0x262404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262400) {
            ctx->pc = 0x262438u;
            goto label_262438;
        }
    }
    ctx->pc = 0x262408u;
label_262408:
    // 0x262408: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_26240c:
    if (ctx->pc == 0x26240Cu) {
        ctx->pc = 0x262410u;
        goto label_262410;
    }
    ctx->pc = 0x262408u;
    {
        const bool branch_taken_0x262408 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x262408) {
            ctx->pc = 0x262420u;
            goto label_262420;
        }
    }
    ctx->pc = 0x262410u;
label_262410:
    // 0x262410: 0xc06b88a  jal         func_1AE228
label_262414:
    if (ctx->pc == 0x262414u) {
        ctx->pc = 0x262414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262410u;
        // 0x262414: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262418u;
        goto label_262418;
    }
    ctx->pc = 0x262410u;
    SET_GPR_U32(ctx, 31, 0x262418u);
    ctx->pc = 0x262414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262410u;
    // 0x262414: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE228u, 0x262410u, 0x262418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262418u;
label_262418:
    // 0x262418: 0x10000004  b           . + 4 + (0x4 << 2)
label_26241c:
    if (ctx->pc == 0x26241Cu) {
        ctx->pc = 0x26241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262418u;
        // 0x26241c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262420u;
        goto label_262420;
    }
    ctx->pc = 0x262418u;
    {
        const bool branch_taken_0x262418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262418u;
        // 0x26241c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262418) {
            ctx->pc = 0x26242Cu;
            goto label_26242c;
        }
    }
    ctx->pc = 0x262420u;
label_262420:
    // 0x262420: 0xc06b866  jal         func_1AE198
label_262424:
    if (ctx->pc == 0x262424u) {
        ctx->pc = 0x262424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262420u;
        // 0x262424: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262428u;
        goto label_262428;
    }
    ctx->pc = 0x262420u;
    SET_GPR_U32(ctx, 31, 0x262428u);
    ctx->pc = 0x262424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262420u;
    // 0x262424: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE198u, 0x262420u, 0x262428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262428u;
label_262428:
    // 0x262428: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x262428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26242c:
    // 0x26242c: 0xc06c546  jal         func_1B1518
label_262430:
    if (ctx->pc == 0x262430u) {
        ctx->pc = 0x262430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26242Cu;
        // 0x262430: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262434u;
        goto label_262434;
    }
    ctx->pc = 0x26242Cu;
    SET_GPR_U32(ctx, 31, 0x262434u);
    ctx->pc = 0x262430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26242Cu;
    // 0x262430: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x26242Cu, 0x262434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262434u;
label_262434:
    // 0x262434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_262438:
    // 0x262438: 0xc08a15a  jal         func_228568
label_26243c:
    if (ctx->pc == 0x26243Cu) {
        ctx->pc = 0x26243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262438u;
        // 0x26243c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262440u;
        goto label_262440;
    }
    ctx->pc = 0x262438u;
    SET_GPR_U32(ctx, 31, 0x262440u);
    ctx->pc = 0x26243Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262438u;
    // 0x26243c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x262438u, 0x262440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262440u;
label_262440:
    // 0x262440: 0x10000055  b           . + 4 + (0x55 << 2)
label_262444:
    if (ctx->pc == 0x262444u) {
        ctx->pc = 0x262444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262440u;
        // 0x262444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262448u;
        goto label_262448;
    }
    ctx->pc = 0x262440u;
    {
        const bool branch_taken_0x262440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262440u;
        // 0x262444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262440) {
            ctx->pc = 0x262598u;
            goto label_262598;
        }
    }
    ctx->pc = 0x262448u;
label_262448:
    // 0x262448: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
label_26244c:
    if (ctx->pc == 0x26244Cu) {
        ctx->pc = 0x26244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262448u;
        // 0x26244c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262450u;
        goto label_262450;
    }
    ctx->pc = 0x262448u;
    {
        const bool branch_taken_0x262448 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262448u;
        // 0x26244c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262448) {
            ctx->pc = 0x262468u;
            goto label_262468;
        }
    }
    ctx->pc = 0x262450u;
label_262450:
    // 0x262450: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x262450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_262454:
    // 0x262454: 0x12820003  beq         $s4, $v0, . + 4 + (0x3 << 2)
label_262458:
    if (ctx->pc == 0x262458u) {
        ctx->pc = 0x262458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262454u;
        // 0x262458: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26245Cu;
        goto label_26245c;
    }
    ctx->pc = 0x262454u;
    {
        const bool branch_taken_0x262454 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x262458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262454u;
        // 0x262458: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262454) {
            ctx->pc = 0x262464u;
            goto label_262464;
        }
    }
    ctx->pc = 0x26245Cu;
label_26245c:
    // 0x26245c: 0x1682004e  bne         $s4, $v0, . + 4 + (0x4E << 2)
label_262460:
    if (ctx->pc == 0x262460u) {
        ctx->pc = 0x262460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26245Cu;
        // 0x262460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262464u;
        goto label_262464;
    }
    ctx->pc = 0x26245Cu;
    {
        const bool branch_taken_0x26245c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x262460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26245Cu;
        // 0x262460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26245c) {
            ctx->pc = 0x262598u;
            goto label_262598;
        }
    }
    ctx->pc = 0x262464u;
label_262464:
    // 0x262464: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x262464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_262468:
    // 0x262468: 0x12820030  beq         $s4, $v0, . + 4 + (0x30 << 2)
label_26246c:
    if (ctx->pc == 0x26246Cu) {
        ctx->pc = 0x26246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262468u;
        // 0x26246c: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262470u;
        goto label_262470;
    }
    ctx->pc = 0x262468u;
    {
        const bool branch_taken_0x262468 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x26246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262468u;
        // 0x26246c: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262468) {
            ctx->pc = 0x26252Cu;
            goto label_26252c;
        }
    }
    ctx->pc = 0x262470u;
label_262470:
    // 0x262470: 0x8ec30150  lw          $v1, 0x150($s6)
    ctx->pc = 0x262470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 336)));
label_262474:
    // 0x262474: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_262478:
    if (ctx->pc == 0x262478u) {
        ctx->pc = 0x262478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262474u;
        // 0x262478: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26247Cu;
        goto label_26247c;
    }
    ctx->pc = 0x262474u;
    {
        const bool branch_taken_0x262474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x262478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262474u;
        // 0x262478: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262474) {
            ctx->pc = 0x26249Cu;
            goto label_26249c;
        }
    }
    ctx->pc = 0x26247Cu;
label_26247c:
    // 0x26247c: 0x8ec201e4  lw          $v0, 0x1E4($s6)
    ctx->pc = 0x26247cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 484)));
label_262480:
    // 0x262480: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x262480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_262484:
    // 0x262484: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x262484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_262488:
    // 0x262488: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x262488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26248c:
    // 0x26248c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26248cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_262490:
    // 0x262490: 0x0  nop
    ctx->pc = 0x262490u;
    // NOP
label_262494:
    // 0x262494: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_262498:
    if (ctx->pc == 0x262498u) {
        ctx->pc = 0x262498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262494u;
        // 0x262498: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26249Cu;
        goto label_26249c;
    }
    ctx->pc = 0x262494u;
    {
        const bool branch_taken_0x262494 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x262494) {
            ctx->pc = 0x262498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262494u;
            // 0x262498: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26249Cu;
            goto label_26249c;
        }
    }
    ctx->pc = 0x26249Cu;
label_26249c:
    // 0x26249c: 0x14800023  bnez        $a0, . + 4 + (0x23 << 2)
label_2624a0:
    if (ctx->pc == 0x2624A0u) {
        ctx->pc = 0x2624A4u;
        goto label_2624a4;
    }
    ctx->pc = 0x26249Cu;
    {
        const bool branch_taken_0x26249c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x26249c) {
            ctx->pc = 0x26252Cu;
            goto label_26252c;
        }
    }
    ctx->pc = 0x2624A4u;
label_2624a4:
    // 0x2624a4: 0x12a00014  beqz        $s5, . + 4 + (0x14 << 2)
label_2624a8:
    if (ctx->pc == 0x2624A8u) {
        ctx->pc = 0x2624A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2624A4u;
        // 0x2624a8: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2624ACu;
        goto label_2624ac;
    }
    ctx->pc = 0x2624A4u;
    {
        const bool branch_taken_0x2624a4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2624A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2624A4u;
        // 0x2624a8: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2624a4) {
            ctx->pc = 0x2624F8u;
            goto label_2624f8;
        }
    }
    ctx->pc = 0x2624ACu;
label_2624ac:
    // 0x2624ac: 0xc06b88a  jal         func_1AE228
label_2624b0:
    if (ctx->pc == 0x2624B0u) {
        ctx->pc = 0x2624B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2624ACu;
        // 0x2624b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2624B4u;
        goto label_2624b4;
    }
    ctx->pc = 0x2624ACu;
    SET_GPR_U32(ctx, 31, 0x2624B4u);
    ctx->pc = 0x2624B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2624ACu;
    // 0x2624b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE228u, 0x2624ACu, 0x2624B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2624B4u;
label_2624b4:
    // 0x2624b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2624b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2624b8:
    // 0x2624b8: 0xc06b8f6  jal         func_1AE3D8
label_2624bc:
    if (ctx->pc == 0x2624BCu) {
        ctx->pc = 0x2624BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2624B8u;
        // 0x2624bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2624C0u;
        goto label_2624c0;
    }
    ctx->pc = 0x2624B8u;
    SET_GPR_U32(ctx, 31, 0x2624C0u);
    ctx->pc = 0x2624BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2624B8u;
    // 0x2624bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE3D8u, 0x2624B8u, 0x2624C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2624C0u;
label_2624c0:
    // 0x2624c0: 0x8ec30150  lw          $v1, 0x150($s6)
    ctx->pc = 0x2624c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 336)));
label_2624c4:
    // 0x2624c4: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x2624c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_2624c8:
    // 0x2624c8: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_2624cc:
    if (ctx->pc == 0x2624CCu) {
        ctx->pc = 0x2624CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2624C8u;
        // 0x2624cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2624D0u;
        goto label_2624d0;
    }
    ctx->pc = 0x2624C8u;
    {
        const bool branch_taken_0x2624c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2624CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2624C8u;
        // 0x2624cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2624c8) {
            ctx->pc = 0x262518u;
            goto label_262518;
        }
    }
    ctx->pc = 0x2624D0u;
label_2624d0:
    // 0x2624d0: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x2624d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_2624d4:
    // 0x2624d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2624d8:
    if (ctx->pc == 0x2624D8u) {
        ctx->pc = 0x2624D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2624D4u;
        // 0x2624d8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2624DCu;
        goto label_2624dc;
    }
    ctx->pc = 0x2624D4u;
    {
        const bool branch_taken_0x2624d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2624D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2624D4u;
        // 0x2624d8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2624d4) {
            ctx->pc = 0x2624E8u;
            goto label_2624e8;
        }
    }
    ctx->pc = 0x2624DCu;
label_2624dc:
    // 0x2624dc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2624dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2624e0:
    // 0x2624e0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2624e4:
    if (ctx->pc == 0x2624E4u) {
        ctx->pc = 0x2624E8u;
        goto label_2624e8;
    }
    ctx->pc = 0x2624E0u;
    {
        const bool branch_taken_0x2624e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2624e0) {
            ctx->pc = 0x262518u;
            goto label_262518;
        }
    }
    ctx->pc = 0x2624E8u;
label_2624e8:
    // 0x2624e8: 0xc06bfc8  jal         func_1AFF20
label_2624ec:
    if (ctx->pc == 0x2624ECu) {
        ctx->pc = 0x2624ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2624E8u;
        // 0x2624ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2624F0u;
        goto label_2624f0;
    }
    ctx->pc = 0x2624E8u;
    SET_GPR_U32(ctx, 31, 0x2624F0u);
    ctx->pc = 0x2624ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2624E8u;
    // 0x2624ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFF20u, 0x2624E8u, 0x2624F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2624F0u;
label_2624f0:
    // 0x2624f0: 0x10000009  b           . + 4 + (0x9 << 2)
label_2624f4:
    if (ctx->pc == 0x2624F4u) {
        ctx->pc = 0x2624F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2624F0u;
        // 0x2624f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2624F8u;
        goto label_2624f8;
    }
    ctx->pc = 0x2624F0u;
    {
        const bool branch_taken_0x2624f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2624F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2624F0u;
        // 0x2624f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2624f0) {
            ctx->pc = 0x262518u;
            goto label_262518;
        }
    }
    ctx->pc = 0x2624F8u;
label_2624f8:
    // 0x2624f8: 0x12e20007  beq         $s7, $v0, . + 4 + (0x7 << 2)
label_2624fc:
    if (ctx->pc == 0x2624FCu) {
        ctx->pc = 0x2624FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2624F8u;
        // 0x2624fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262500u;
        goto label_262500;
    }
    ctx->pc = 0x2624F8u;
    {
        const bool branch_taken_0x2624f8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x2624FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2624F8u;
        // 0x2624fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2624f8) {
            ctx->pc = 0x262518u;
            goto label_262518;
        }
    }
    ctx->pc = 0x262500u;
label_262500:
    // 0x262500: 0xc06b866  jal         func_1AE198
label_262504:
    if (ctx->pc == 0x262504u) {
        ctx->pc = 0x262504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262500u;
        // 0x262504: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262508u;
        goto label_262508;
    }
    ctx->pc = 0x262500u;
    SET_GPR_U32(ctx, 31, 0x262508u);
    ctx->pc = 0x262504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262500u;
    // 0x262504: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE198u, 0x262500u, 0x262508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262508u;
label_262508:
    // 0x262508: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x262508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26250c:
    // 0x26250c: 0xc06b8f6  jal         func_1AE3D8
label_262510:
    if (ctx->pc == 0x262510u) {
        ctx->pc = 0x262510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26250Cu;
        // 0x262510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262514u;
        goto label_262514;
    }
    ctx->pc = 0x26250Cu;
    SET_GPR_U32(ctx, 31, 0x262514u);
    ctx->pc = 0x262510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26250Cu;
    // 0x262510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE3D8u, 0x26250Cu, 0x262514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262514u;
label_262514:
    // 0x262514: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x262514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_262518:
    // 0x262518: 0xc06c546  jal         func_1B1518
label_26251c:
    if (ctx->pc == 0x26251Cu) {
        ctx->pc = 0x26251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262518u;
        // 0x26251c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262520u;
        goto label_262520;
    }
    ctx->pc = 0x262518u;
    SET_GPR_U32(ctx, 31, 0x262520u);
    ctx->pc = 0x26251Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262518u;
    // 0x26251c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x262518u, 0x262520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262520u;
label_262520:
    // 0x262520: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x262520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_262524:
    // 0x262524: 0x1000ff80  b           . + 4 + (-0x80 << 2)
label_262528:
    if (ctx->pc == 0x262528u) {
        ctx->pc = 0x262528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262524u;
        // 0x262528: 0xae630290  sw          $v1, 0x290($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 656), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26252Cu;
        goto label_26252c;
    }
    ctx->pc = 0x262524u;
    {
        const bool branch_taken_0x262524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262524u;
        // 0x262528: 0xae630290  sw          $v1, 0x290($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 656), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262524) {
            ctx->pc = 0x262328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262328;
        }
    }
    ctx->pc = 0x26252Cu;
label_26252c:
    // 0x26252c: 0xc0d8de2  jal         func_363788
label_262530:
    if (ctx->pc == 0x262530u) {
        ctx->pc = 0x262530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26252Cu;
        // 0x262530: 0x8e640274  lw          $a0, 0x274($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262534u;
        goto label_262534;
    }
    ctx->pc = 0x26252Cu;
    SET_GPR_U32(ctx, 31, 0x262534u);
    ctx->pc = 0x262530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26252Cu;
    // 0x262530: 0x8e640274  lw          $a0, 0x274($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x26252Cu, 0x262534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262534u;
label_262534:
    // 0x262534: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x262534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_262538:
    // 0x262538: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_26253c:
    if (ctx->pc == 0x26253Cu) {
        ctx->pc = 0x26253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262538u;
        // 0x26253c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262540u;
        goto label_262540;
    }
    ctx->pc = 0x262538u;
    {
        const bool branch_taken_0x262538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262538u;
        // 0x26253c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262538) {
            ctx->pc = 0x262598u;
            goto label_262598;
        }
    }
    ctx->pc = 0x262540u;
label_262540:
    // 0x262540: 0x8e620274  lw          $v0, 0x274($s3)
    ctx->pc = 0x262540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 628)));
label_262544:
    // 0x262544: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x262544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_262548:
    // 0x262548: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x262548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26254c:
    // 0x26254c: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x26254cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_262550:
    // 0x262550: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x262550u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_262554:
    // 0x262554: 0x0  nop
    ctx->pc = 0x262554u;
    // NOP
label_262558:
    // 0x262558: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_26255c:
    if (ctx->pc == 0x26255Cu) {
        ctx->pc = 0x26255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262558u;
        // 0x26255c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262560u;
        goto label_262560;
    }
    ctx->pc = 0x262558u;
    {
        const bool branch_taken_0x262558 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262558u;
        // 0x26255c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262558) {
            ctx->pc = 0x262598u;
            goto label_262598;
        }
    }
    ctx->pc = 0x262560u;
label_262560:
    // 0x262560: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x262560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_262564:
    // 0x262564: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_262568:
    if (ctx->pc == 0x262568u) {
        ctx->pc = 0x262568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262564u;
        // 0x262568: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26256Cu;
        goto label_26256c;
    }
    ctx->pc = 0x262564u;
    {
        const bool branch_taken_0x262564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262564) {
            ctx->pc = 0x262568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262564u;
            // 0x262568: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262598u;
            goto label_262598;
        }
    }
    ctx->pc = 0x26256Cu;
label_26256c:
    // 0x26256c: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x26256cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_262570:
    // 0x262570: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x262570u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_262574:
    // 0x262574: 0x0  nop
    ctx->pc = 0x262574u;
    // NOP
label_262578:
    // 0x262578: 0x4500ff6b  bc1f        . + 4 + (-0x95 << 2)
label_26257c:
    if (ctx->pc == 0x26257Cu) {
        ctx->pc = 0x26257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262578u;
        // 0x26257c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262580u;
        goto label_262580;
    }
    ctx->pc = 0x262578u;
    {
        const bool branch_taken_0x262578 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262578u;
        // 0x26257c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262578) {
            ctx->pc = 0x262328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262328;
        }
    }
    ctx->pc = 0x262580u;
label_262580:
    // 0x262580: 0xc06b8f6  jal         func_1AE3D8
label_262584:
    if (ctx->pc == 0x262584u) {
        ctx->pc = 0x262584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262580u;
        // 0x262584: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262588u;
        goto label_262588;
    }
    ctx->pc = 0x262580u;
    SET_GPR_U32(ctx, 31, 0x262588u);
    ctx->pc = 0x262584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262580u;
    // 0x262584: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE3D8u, 0x262580u, 0x262588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262588u;
label_262588:
    // 0x262588: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x262588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_26258c:
    // 0x26258c: 0x1000ff66  b           . + 4 + (-0x9A << 2)
label_262590:
    if (ctx->pc == 0x262590u) {
        ctx->pc = 0x262590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26258Cu;
        // 0x262590: 0xae620290  sw          $v0, 0x290($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262594u;
        goto label_262594;
    }
    ctx->pc = 0x26258Cu;
    {
        const bool branch_taken_0x26258c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26258Cu;
        // 0x262590: 0xae620290  sw          $v0, 0x290($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26258c) {
            ctx->pc = 0x262328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262328;
        }
    }
    ctx->pc = 0x262594u;
label_262594:
    // 0x262594: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x262594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262598:
    // 0x262598: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x262598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26259c:
    // 0x26259c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x26259cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2625a0:
    // 0x2625a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2625a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2625a4:
    // 0x2625a4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2625a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2625a8:
    // 0x2625a8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2625a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2625ac:
    // 0x2625ac: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2625acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2625b0:
    // 0x2625b0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2625b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2625b4:
    // 0x2625b4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2625b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2625b8:
    // 0x2625b8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2625b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2625bc:
    // 0x2625bc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2625bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2625c0:
    // 0x2625c0: 0x3e00008  jr          $ra
label_2625c4:
    if (ctx->pc == 0x2625C4u) {
        ctx->pc = 0x2625C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2625C0u;
        // 0x2625c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2625C8u;
        goto label_fallthrough_0x2625c0;
    }
    ctx->pc = 0x2625C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2625C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2625C0u;
        // 0x2625c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2625C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2625c0:
    ctx->pc = 0x2625C8u;
}
