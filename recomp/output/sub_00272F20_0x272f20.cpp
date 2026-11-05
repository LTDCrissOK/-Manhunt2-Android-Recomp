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

// Function: sub_00272F20
// Address: 0x272f20 - 0x2735e8
void sub_00272F20_0x272f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272F20_0x272f20");
#endif

    switch (ctx->pc) {
        case 0x272f20u: goto label_272f20;
        case 0x272f24u: goto label_272f24;
        case 0x272f28u: goto label_272f28;
        case 0x272f2cu: goto label_272f2c;
        case 0x272f30u: goto label_272f30;
        case 0x272f34u: goto label_272f34;
        case 0x272f38u: goto label_272f38;
        case 0x272f3cu: goto label_272f3c;
        case 0x272f40u: goto label_272f40;
        case 0x272f44u: goto label_272f44;
        case 0x272f48u: goto label_272f48;
        case 0x272f4cu: goto label_272f4c;
        case 0x272f50u: goto label_272f50;
        case 0x272f54u: goto label_272f54;
        case 0x272f58u: goto label_272f58;
        case 0x272f5cu: goto label_272f5c;
        case 0x272f60u: goto label_272f60;
        case 0x272f64u: goto label_272f64;
        case 0x272f68u: goto label_272f68;
        case 0x272f6cu: goto label_272f6c;
        case 0x272f70u: goto label_272f70;
        case 0x272f74u: goto label_272f74;
        case 0x272f78u: goto label_272f78;
        case 0x272f7cu: goto label_272f7c;
        case 0x272f80u: goto label_272f80;
        case 0x272f84u: goto label_272f84;
        case 0x272f88u: goto label_272f88;
        case 0x272f8cu: goto label_272f8c;
        case 0x272f90u: goto label_272f90;
        case 0x272f94u: goto label_272f94;
        case 0x272f98u: goto label_272f98;
        case 0x272f9cu: goto label_272f9c;
        case 0x272fa0u: goto label_272fa0;
        case 0x272fa4u: goto label_272fa4;
        case 0x272fa8u: goto label_272fa8;
        case 0x272facu: goto label_272fac;
        case 0x272fb0u: goto label_272fb0;
        case 0x272fb4u: goto label_272fb4;
        case 0x272fb8u: goto label_272fb8;
        case 0x272fbcu: goto label_272fbc;
        case 0x272fc0u: goto label_272fc0;
        case 0x272fc4u: goto label_272fc4;
        case 0x272fc8u: goto label_272fc8;
        case 0x272fccu: goto label_272fcc;
        case 0x272fd0u: goto label_272fd0;
        case 0x272fd4u: goto label_272fd4;
        case 0x272fd8u: goto label_272fd8;
        case 0x272fdcu: goto label_272fdc;
        case 0x272fe0u: goto label_272fe0;
        case 0x272fe4u: goto label_272fe4;
        case 0x272fe8u: goto label_272fe8;
        case 0x272fecu: goto label_272fec;
        case 0x272ff0u: goto label_272ff0;
        case 0x272ff4u: goto label_272ff4;
        case 0x272ff8u: goto label_272ff8;
        case 0x272ffcu: goto label_272ffc;
        case 0x273000u: goto label_273000;
        case 0x273004u: goto label_273004;
        case 0x273008u: goto label_273008;
        case 0x27300cu: goto label_27300c;
        case 0x273010u: goto label_273010;
        case 0x273014u: goto label_273014;
        case 0x273018u: goto label_273018;
        case 0x27301cu: goto label_27301c;
        case 0x273020u: goto label_273020;
        case 0x273024u: goto label_273024;
        case 0x273028u: goto label_273028;
        case 0x27302cu: goto label_27302c;
        case 0x273030u: goto label_273030;
        case 0x273034u: goto label_273034;
        case 0x273038u: goto label_273038;
        case 0x27303cu: goto label_27303c;
        case 0x273040u: goto label_273040;
        case 0x273044u: goto label_273044;
        case 0x273048u: goto label_273048;
        case 0x27304cu: goto label_27304c;
        case 0x273050u: goto label_273050;
        case 0x273054u: goto label_273054;
        case 0x273058u: goto label_273058;
        case 0x27305cu: goto label_27305c;
        case 0x273060u: goto label_273060;
        case 0x273064u: goto label_273064;
        case 0x273068u: goto label_273068;
        case 0x27306cu: goto label_27306c;
        case 0x273070u: goto label_273070;
        case 0x273074u: goto label_273074;
        case 0x273078u: goto label_273078;
        case 0x27307cu: goto label_27307c;
        case 0x273080u: goto label_273080;
        case 0x273084u: goto label_273084;
        case 0x273088u: goto label_273088;
        case 0x27308cu: goto label_27308c;
        case 0x273090u: goto label_273090;
        case 0x273094u: goto label_273094;
        case 0x273098u: goto label_273098;
        case 0x27309cu: goto label_27309c;
        case 0x2730a0u: goto label_2730a0;
        case 0x2730a4u: goto label_2730a4;
        case 0x2730a8u: goto label_2730a8;
        case 0x2730acu: goto label_2730ac;
        case 0x2730b0u: goto label_2730b0;
        case 0x2730b4u: goto label_2730b4;
        case 0x2730b8u: goto label_2730b8;
        case 0x2730bcu: goto label_2730bc;
        case 0x2730c0u: goto label_2730c0;
        case 0x2730c4u: goto label_2730c4;
        case 0x2730c8u: goto label_2730c8;
        case 0x2730ccu: goto label_2730cc;
        case 0x2730d0u: goto label_2730d0;
        case 0x2730d4u: goto label_2730d4;
        case 0x2730d8u: goto label_2730d8;
        case 0x2730dcu: goto label_2730dc;
        case 0x2730e0u: goto label_2730e0;
        case 0x2730e4u: goto label_2730e4;
        case 0x2730e8u: goto label_2730e8;
        case 0x2730ecu: goto label_2730ec;
        case 0x2730f0u: goto label_2730f0;
        case 0x2730f4u: goto label_2730f4;
        case 0x2730f8u: goto label_2730f8;
        case 0x2730fcu: goto label_2730fc;
        case 0x273100u: goto label_273100;
        case 0x273104u: goto label_273104;
        case 0x273108u: goto label_273108;
        case 0x27310cu: goto label_27310c;
        case 0x273110u: goto label_273110;
        case 0x273114u: goto label_273114;
        case 0x273118u: goto label_273118;
        case 0x27311cu: goto label_27311c;
        case 0x273120u: goto label_273120;
        case 0x273124u: goto label_273124;
        case 0x273128u: goto label_273128;
        case 0x27312cu: goto label_27312c;
        case 0x273130u: goto label_273130;
        case 0x273134u: goto label_273134;
        case 0x273138u: goto label_273138;
        case 0x27313cu: goto label_27313c;
        case 0x273140u: goto label_273140;
        case 0x273144u: goto label_273144;
        case 0x273148u: goto label_273148;
        case 0x27314cu: goto label_27314c;
        case 0x273150u: goto label_273150;
        case 0x273154u: goto label_273154;
        case 0x273158u: goto label_273158;
        case 0x27315cu: goto label_27315c;
        case 0x273160u: goto label_273160;
        case 0x273164u: goto label_273164;
        case 0x273168u: goto label_273168;
        case 0x27316cu: goto label_27316c;
        case 0x273170u: goto label_273170;
        case 0x273174u: goto label_273174;
        case 0x273178u: goto label_273178;
        case 0x27317cu: goto label_27317c;
        case 0x273180u: goto label_273180;
        case 0x273184u: goto label_273184;
        case 0x273188u: goto label_273188;
        case 0x27318cu: goto label_27318c;
        case 0x273190u: goto label_273190;
        case 0x273194u: goto label_273194;
        case 0x273198u: goto label_273198;
        case 0x27319cu: goto label_27319c;
        case 0x2731a0u: goto label_2731a0;
        case 0x2731a4u: goto label_2731a4;
        case 0x2731a8u: goto label_2731a8;
        case 0x2731acu: goto label_2731ac;
        case 0x2731b0u: goto label_2731b0;
        case 0x2731b4u: goto label_2731b4;
        case 0x2731b8u: goto label_2731b8;
        case 0x2731bcu: goto label_2731bc;
        case 0x2731c0u: goto label_2731c0;
        case 0x2731c4u: goto label_2731c4;
        case 0x2731c8u: goto label_2731c8;
        case 0x2731ccu: goto label_2731cc;
        case 0x2731d0u: goto label_2731d0;
        case 0x2731d4u: goto label_2731d4;
        case 0x2731d8u: goto label_2731d8;
        case 0x2731dcu: goto label_2731dc;
        case 0x2731e0u: goto label_2731e0;
        case 0x2731e4u: goto label_2731e4;
        case 0x2731e8u: goto label_2731e8;
        case 0x2731ecu: goto label_2731ec;
        case 0x2731f0u: goto label_2731f0;
        case 0x2731f4u: goto label_2731f4;
        case 0x2731f8u: goto label_2731f8;
        case 0x2731fcu: goto label_2731fc;
        case 0x273200u: goto label_273200;
        case 0x273204u: goto label_273204;
        case 0x273208u: goto label_273208;
        case 0x27320cu: goto label_27320c;
        case 0x273210u: goto label_273210;
        case 0x273214u: goto label_273214;
        case 0x273218u: goto label_273218;
        case 0x27321cu: goto label_27321c;
        case 0x273220u: goto label_273220;
        case 0x273224u: goto label_273224;
        case 0x273228u: goto label_273228;
        case 0x27322cu: goto label_27322c;
        case 0x273230u: goto label_273230;
        case 0x273234u: goto label_273234;
        case 0x273238u: goto label_273238;
        case 0x27323cu: goto label_27323c;
        case 0x273240u: goto label_273240;
        case 0x273244u: goto label_273244;
        case 0x273248u: goto label_273248;
        case 0x27324cu: goto label_27324c;
        case 0x273250u: goto label_273250;
        case 0x273254u: goto label_273254;
        case 0x273258u: goto label_273258;
        case 0x27325cu: goto label_27325c;
        case 0x273260u: goto label_273260;
        case 0x273264u: goto label_273264;
        case 0x273268u: goto label_273268;
        case 0x27326cu: goto label_27326c;
        case 0x273270u: goto label_273270;
        case 0x273274u: goto label_273274;
        case 0x273278u: goto label_273278;
        case 0x27327cu: goto label_27327c;
        case 0x273280u: goto label_273280;
        case 0x273284u: goto label_273284;
        case 0x273288u: goto label_273288;
        case 0x27328cu: goto label_27328c;
        case 0x273290u: goto label_273290;
        case 0x273294u: goto label_273294;
        case 0x273298u: goto label_273298;
        case 0x27329cu: goto label_27329c;
        case 0x2732a0u: goto label_2732a0;
        case 0x2732a4u: goto label_2732a4;
        case 0x2732a8u: goto label_2732a8;
        case 0x2732acu: goto label_2732ac;
        case 0x2732b0u: goto label_2732b0;
        case 0x2732b4u: goto label_2732b4;
        case 0x2732b8u: goto label_2732b8;
        case 0x2732bcu: goto label_2732bc;
        case 0x2732c0u: goto label_2732c0;
        case 0x2732c4u: goto label_2732c4;
        case 0x2732c8u: goto label_2732c8;
        case 0x2732ccu: goto label_2732cc;
        case 0x2732d0u: goto label_2732d0;
        case 0x2732d4u: goto label_2732d4;
        case 0x2732d8u: goto label_2732d8;
        case 0x2732dcu: goto label_2732dc;
        case 0x2732e0u: goto label_2732e0;
        case 0x2732e4u: goto label_2732e4;
        case 0x2732e8u: goto label_2732e8;
        case 0x2732ecu: goto label_2732ec;
        case 0x2732f0u: goto label_2732f0;
        case 0x2732f4u: goto label_2732f4;
        case 0x2732f8u: goto label_2732f8;
        case 0x2732fcu: goto label_2732fc;
        case 0x273300u: goto label_273300;
        case 0x273304u: goto label_273304;
        case 0x273308u: goto label_273308;
        case 0x27330cu: goto label_27330c;
        case 0x273310u: goto label_273310;
        case 0x273314u: goto label_273314;
        case 0x273318u: goto label_273318;
        case 0x27331cu: goto label_27331c;
        case 0x273320u: goto label_273320;
        case 0x273324u: goto label_273324;
        case 0x273328u: goto label_273328;
        case 0x27332cu: goto label_27332c;
        case 0x273330u: goto label_273330;
        case 0x273334u: goto label_273334;
        case 0x273338u: goto label_273338;
        case 0x27333cu: goto label_27333c;
        case 0x273340u: goto label_273340;
        case 0x273344u: goto label_273344;
        case 0x273348u: goto label_273348;
        case 0x27334cu: goto label_27334c;
        case 0x273350u: goto label_273350;
        case 0x273354u: goto label_273354;
        case 0x273358u: goto label_273358;
        case 0x27335cu: goto label_27335c;
        case 0x273360u: goto label_273360;
        case 0x273364u: goto label_273364;
        case 0x273368u: goto label_273368;
        case 0x27336cu: goto label_27336c;
        case 0x273370u: goto label_273370;
        case 0x273374u: goto label_273374;
        case 0x273378u: goto label_273378;
        case 0x27337cu: goto label_27337c;
        case 0x273380u: goto label_273380;
        case 0x273384u: goto label_273384;
        case 0x273388u: goto label_273388;
        case 0x27338cu: goto label_27338c;
        case 0x273390u: goto label_273390;
        case 0x273394u: goto label_273394;
        case 0x273398u: goto label_273398;
        case 0x27339cu: goto label_27339c;
        case 0x2733a0u: goto label_2733a0;
        case 0x2733a4u: goto label_2733a4;
        case 0x2733a8u: goto label_2733a8;
        case 0x2733acu: goto label_2733ac;
        case 0x2733b0u: goto label_2733b0;
        case 0x2733b4u: goto label_2733b4;
        case 0x2733b8u: goto label_2733b8;
        case 0x2733bcu: goto label_2733bc;
        case 0x2733c0u: goto label_2733c0;
        case 0x2733c4u: goto label_2733c4;
        case 0x2733c8u: goto label_2733c8;
        case 0x2733ccu: goto label_2733cc;
        case 0x2733d0u: goto label_2733d0;
        case 0x2733d4u: goto label_2733d4;
        case 0x2733d8u: goto label_2733d8;
        case 0x2733dcu: goto label_2733dc;
        case 0x2733e0u: goto label_2733e0;
        case 0x2733e4u: goto label_2733e4;
        case 0x2733e8u: goto label_2733e8;
        case 0x2733ecu: goto label_2733ec;
        case 0x2733f0u: goto label_2733f0;
        case 0x2733f4u: goto label_2733f4;
        case 0x2733f8u: goto label_2733f8;
        case 0x2733fcu: goto label_2733fc;
        case 0x273400u: goto label_273400;
        case 0x273404u: goto label_273404;
        case 0x273408u: goto label_273408;
        case 0x27340cu: goto label_27340c;
        case 0x273410u: goto label_273410;
        case 0x273414u: goto label_273414;
        case 0x273418u: goto label_273418;
        case 0x27341cu: goto label_27341c;
        case 0x273420u: goto label_273420;
        case 0x273424u: goto label_273424;
        case 0x273428u: goto label_273428;
        case 0x27342cu: goto label_27342c;
        case 0x273430u: goto label_273430;
        case 0x273434u: goto label_273434;
        case 0x273438u: goto label_273438;
        case 0x27343cu: goto label_27343c;
        case 0x273440u: goto label_273440;
        case 0x273444u: goto label_273444;
        case 0x273448u: goto label_273448;
        case 0x27344cu: goto label_27344c;
        case 0x273450u: goto label_273450;
        case 0x273454u: goto label_273454;
        case 0x273458u: goto label_273458;
        case 0x27345cu: goto label_27345c;
        case 0x273460u: goto label_273460;
        case 0x273464u: goto label_273464;
        case 0x273468u: goto label_273468;
        case 0x27346cu: goto label_27346c;
        case 0x273470u: goto label_273470;
        case 0x273474u: goto label_273474;
        case 0x273478u: goto label_273478;
        case 0x27347cu: goto label_27347c;
        case 0x273480u: goto label_273480;
        case 0x273484u: goto label_273484;
        case 0x273488u: goto label_273488;
        case 0x27348cu: goto label_27348c;
        case 0x273490u: goto label_273490;
        case 0x273494u: goto label_273494;
        case 0x273498u: goto label_273498;
        case 0x27349cu: goto label_27349c;
        case 0x2734a0u: goto label_2734a0;
        case 0x2734a4u: goto label_2734a4;
        case 0x2734a8u: goto label_2734a8;
        case 0x2734acu: goto label_2734ac;
        case 0x2734b0u: goto label_2734b0;
        case 0x2734b4u: goto label_2734b4;
        case 0x2734b8u: goto label_2734b8;
        case 0x2734bcu: goto label_2734bc;
        case 0x2734c0u: goto label_2734c0;
        case 0x2734c4u: goto label_2734c4;
        case 0x2734c8u: goto label_2734c8;
        case 0x2734ccu: goto label_2734cc;
        case 0x2734d0u: goto label_2734d0;
        case 0x2734d4u: goto label_2734d4;
        case 0x2734d8u: goto label_2734d8;
        case 0x2734dcu: goto label_2734dc;
        case 0x2734e0u: goto label_2734e0;
        case 0x2734e4u: goto label_2734e4;
        case 0x2734e8u: goto label_2734e8;
        case 0x2734ecu: goto label_2734ec;
        case 0x2734f0u: goto label_2734f0;
        case 0x2734f4u: goto label_2734f4;
        case 0x2734f8u: goto label_2734f8;
        case 0x2734fcu: goto label_2734fc;
        case 0x273500u: goto label_273500;
        case 0x273504u: goto label_273504;
        case 0x273508u: goto label_273508;
        case 0x27350cu: goto label_27350c;
        case 0x273510u: goto label_273510;
        case 0x273514u: goto label_273514;
        case 0x273518u: goto label_273518;
        case 0x27351cu: goto label_27351c;
        case 0x273520u: goto label_273520;
        case 0x273524u: goto label_273524;
        case 0x273528u: goto label_273528;
        case 0x27352cu: goto label_27352c;
        case 0x273530u: goto label_273530;
        case 0x273534u: goto label_273534;
        case 0x273538u: goto label_273538;
        case 0x27353cu: goto label_27353c;
        case 0x273540u: goto label_273540;
        case 0x273544u: goto label_273544;
        case 0x273548u: goto label_273548;
        case 0x27354cu: goto label_27354c;
        case 0x273550u: goto label_273550;
        case 0x273554u: goto label_273554;
        case 0x273558u: goto label_273558;
        case 0x27355cu: goto label_27355c;
        case 0x273560u: goto label_273560;
        case 0x273564u: goto label_273564;
        case 0x273568u: goto label_273568;
        case 0x27356cu: goto label_27356c;
        case 0x273570u: goto label_273570;
        case 0x273574u: goto label_273574;
        case 0x273578u: goto label_273578;
        case 0x27357cu: goto label_27357c;
        case 0x273580u: goto label_273580;
        case 0x273584u: goto label_273584;
        case 0x273588u: goto label_273588;
        case 0x27358cu: goto label_27358c;
        case 0x273590u: goto label_273590;
        case 0x273594u: goto label_273594;
        case 0x273598u: goto label_273598;
        case 0x27359cu: goto label_27359c;
        case 0x2735a0u: goto label_2735a0;
        case 0x2735a4u: goto label_2735a4;
        case 0x2735a8u: goto label_2735a8;
        case 0x2735acu: goto label_2735ac;
        case 0x2735b0u: goto label_2735b0;
        case 0x2735b4u: goto label_2735b4;
        case 0x2735b8u: goto label_2735b8;
        case 0x2735bcu: goto label_2735bc;
        case 0x2735c0u: goto label_2735c0;
        case 0x2735c4u: goto label_2735c4;
        case 0x2735c8u: goto label_2735c8;
        case 0x2735ccu: goto label_2735cc;
        case 0x2735d0u: goto label_2735d0;
        case 0x2735d4u: goto label_2735d4;
        case 0x2735d8u: goto label_2735d8;
        case 0x2735dcu: goto label_2735dc;
        case 0x2735e0u: goto label_2735e0;
        case 0x2735e4u: goto label_2735e4;
        default: break;
    }

    ctx->pc = 0x272f20u;

label_272f20:
    // 0x272f20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x272f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_272f24:
    // 0x272f24: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x272f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
label_272f28:
    // 0x272f28: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x272f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
label_272f2c:
    // 0x272f2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x272f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_272f30:
    // 0x272f30: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x272f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_272f34:
    // 0x272f34: 0x106001a7  beqz        $v1, . + 4 + (0x1A7 << 2)
label_272f38:
    if (ctx->pc == 0x272F38u) {
        ctx->pc = 0x272F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F34u;
        // 0x272f38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F3Cu;
        goto label_272f3c;
    }
    ctx->pc = 0x272F34u;
    {
        const bool branch_taken_0x272f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x272F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F34u;
        // 0x272f38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272f34) {
            ctx->pc = 0x2735D4u;
            goto label_2735d4;
        }
    }
    ctx->pc = 0x272F3Cu;
label_272f3c:
    // 0x272f3c: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
label_272f40:
    if (ctx->pc == 0x272F40u) {
        ctx->pc = 0x272F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F3Cu;
        // 0x272f40: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F44u;
        goto label_272f44;
    }
    ctx->pc = 0x272F3Cu;
    {
        const bool branch_taken_0x272f3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272f3c) {
            ctx->pc = 0x272F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272F3Cu;
            // 0x272f40: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x272F7Cu;
            goto label_272f7c;
        }
    }
    ctx->pc = 0x272F44u;
label_272f44:
    // 0x272f44: 0xc085d4e  jal         func_217538
label_272f48:
    if (ctx->pc == 0x272F48u) {
        ctx->pc = 0x272F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F44u;
        // 0x272f48: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F4Cu;
        goto label_272f4c;
    }
    ctx->pc = 0x272F44u;
    SET_GPR_U32(ctx, 31, 0x272F4Cu);
    ctx->pc = 0x272F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272F44u;
    // 0x272f48: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217538u, 0x272F44u, 0x272F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F4Cu;
label_272f4c:
    // 0x272f4c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_272f50:
    if (ctx->pc == 0x272F50u) {
        ctx->pc = 0x272F54u;
        goto label_272f54;
    }
    ctx->pc = 0x272F4Cu;
    {
        const bool branch_taken_0x272f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272f4c) {
            ctx->pc = 0x272F70u;
            goto label_272f70;
        }
    }
    ctx->pc = 0x272F54u;
label_272f54:
    // 0x272f54: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x272f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_272f58:
    // 0x272f58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x272f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_272f5c:
    // 0x272f5c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x272f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_272f60:
    // 0x272f60: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x272f60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_272f64:
    // 0x272f64: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x272f64u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_272f68:
    // 0x272f68: 0x10000004  b           . + 4 + (0x4 << 2)
label_272f6c:
    if (ctx->pc == 0x272F6Cu) {
        ctx->pc = 0x272F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F68u;
        // 0x272f6c: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F70u;
        goto label_272f70;
    }
    ctx->pc = 0x272F68u;
    {
        const bool branch_taken_0x272f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F68u;
        // 0x272f6c: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x272f68) {
            ctx->pc = 0x272F7Cu;
            goto label_272f7c;
        }
    }
    ctx->pc = 0x272F70u;
label_272f70:
    // 0x272f70: 0xc09ca6e  jal         func_2729B8
label_272f74:
    if (ctx->pc == 0x272F74u) {
        ctx->pc = 0x272F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F70u;
        // 0x272f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F78u;
        goto label_272f78;
    }
    ctx->pc = 0x272F70u;
    SET_GPR_U32(ctx, 31, 0x272F78u);
    ctx->pc = 0x272F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272F70u;
    // 0x272f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2729B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2729B8u, 0x272F70u, 0x272F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F78u;
label_272f78:
    // 0x272f78: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x272f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_272f7c:
    // 0x272f7c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x272f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_272f80:
    // 0x272f80: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x272f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_272f84:
    // 0x272f84: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x272f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_272f88:
    // 0x272f88: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x272f88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_272f8c:
    // 0x272f8c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x272f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272f90:
    // 0x272f90: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x272f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_272f94:
    // 0x272f94: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x272f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_272f98:
    // 0x272f98: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x272f98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_272f9c:
    // 0x272f9c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x272f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272fa0:
    // 0x272fa0: 0x1483008f  bne         $a0, $v1, . + 4 + (0x8F << 2)
label_272fa4:
    if (ctx->pc == 0x272FA4u) {
        ctx->pc = 0x272FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FA0u;
        // 0x272fa4: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x272FA8u;
        goto label_272fa8;
    }
    ctx->pc = 0x272FA0u;
    {
        const bool branch_taken_0x272fa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x272FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FA0u;
        // 0x272fa4: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x272fa0) {
            ctx->pc = 0x2731E0u;
            goto label_2731e0;
        }
    }
    ctx->pc = 0x272FA8u;
label_272fa8:
    // 0x272fa8: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x272fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_272fac:
    // 0x272fac: 0x26080090  addiu       $t0, $s0, 0x90
    ctx->pc = 0x272facu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_272fb0:
    // 0x272fb0: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x272fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_272fb4:
    // 0x272fb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x272fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_272fb8:
    // 0x272fb8: 0xc4610070  lwc1        $f1, 0x70($v1)
    ctx->pc = 0x272fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_272fbc:
    // 0x272fbc: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x272fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_272fc0:
    // 0x272fc0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x272fc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_272fc4:
    // 0x272fc4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x272fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272fc8:
    // 0x272fc8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x272fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_272fcc:
    // 0x272fcc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x272fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_272fd0:
    // 0x272fd0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x272fd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_272fd4:
    // 0x272fd4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x272fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272fd8:
    // 0x272fd8: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x272fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
label_272fdc:
    // 0x272fdc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x272fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_272fe0:
    // 0x272fe0: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x272fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_272fe4:
    // 0x272fe4: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x272fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_272fe8:
    // 0x272fe8: 0xc5040008  lwc1        $f4, 0x8($t0)
    ctx->pc = 0x272fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_272fec:
    // 0x272fec: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x272fecu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_272ff0:
    // 0x272ff0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x272ff0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_272ff4:
    // 0x272ff4: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x272ff4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_272ff8:
    // 0x272ff8: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x272ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272ffc:
    // 0x272ffc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x272ffcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_273000:
    // 0x273000: 0x0  nop
    ctx->pc = 0x273000u;
    // NOP
label_273004:
    // 0x273004: 0x4501006e  bc1t        . + 4 + (0x6E << 2)
label_273008:
    if (ctx->pc == 0x273008u) {
        ctx->pc = 0x273008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273004u;
        // 0x273008: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27300Cu;
        goto label_27300c;
    }
    ctx->pc = 0x273004u;
    {
        const bool branch_taken_0x273004 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x273008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273004u;
        // 0x273008: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273004) {
            ctx->pc = 0x2731C0u;
            goto label_2731c0;
        }
    }
    ctx->pc = 0x27300Cu;
label_27300c:
    // 0x27300c: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x27300cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_273010:
    // 0x273010: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x273010u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_273014:
    // 0x273014: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x273014u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_273018:
    // 0x273018: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x273018u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_27301c:
    // 0x27301c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x27301cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_273020:
    // 0x273020: 0x4a0003bf  vwaitq
    ctx->pc = 0x273020u;
    // VWAITQ (Q already resolved in this runtime)
label_273024:
    // 0x273024: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x273024u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_273028:
    // 0x273028: 0xfa010090  sqc2        $vf1, 0x90($s0)
    ctx->pc = 0x273028u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_27302c:
    // 0x27302c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x27302cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_273030:
    // 0x273030: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x273030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_273034:
    // 0x273034: 0x24a25b40  addiu       $v0, $a1, 0x5B40
    ctx->pc = 0x273034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 23360));
label_273038:
    // 0x273038: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x273038u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_27303c:
    // 0x27303c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x27303cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_273040:
    // 0x273040: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x273040u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_273044:
    // 0x273044: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x273044u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_273048:
    // 0x273048: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x273048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_27304c:
    // 0x27304c: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x27304cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_273050:
    // 0x273050: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x273050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_273054:
    // 0x273054: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x273054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_273058:
    // 0x273058: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x273058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_27305c:
    // 0x27305c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x27305cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273060:
    // 0x273060: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x273060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_273064:
    // 0x273064: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x273064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_273068:
    // 0x273068: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x273068u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_27306c:
    // 0x27306c: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x27306cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_273070:
    // 0x273070: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x273070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_273074:
    // 0x273074: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x273074u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_273078:
    // 0x273078: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x273078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27307c:
    // 0x27307c: 0xc501000c  lwc1        $f1, 0xC($t0)
    ctx->pc = 0x27307cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_273080:
    // 0x273080: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x273080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_273084:
    // 0x273084: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x273084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_273088:
    // 0x273088: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x273088u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_27308c:
    // 0x27308c: 0xc6040090  lwc1        $f4, 0x90($s0)
    ctx->pc = 0x27308cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_273090:
    // 0x273090: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x273090u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_273094:
    // 0x273094: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x273094u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_273098:
    // 0x273098: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x273098u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_27309c:
    // 0x27309c: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x27309cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_2730a0:
    // 0x2730a0: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x2730a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_2730a4:
    // 0x2730a4: 0xe7a30068  swc1        $f3, 0x68($sp)
    ctx->pc = 0x2730a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_2730a8:
    // 0x2730a8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2730a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2730ac:
    // 0x2730ac: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2730acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2730b0:
    // 0x2730b0: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2730b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2730b4:
    // 0x2730b4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2730b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2730b8:
    // 0x2730b8: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2730b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2730bc:
    // 0x2730bc: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2730bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2730c0:
    // 0x2730c0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2730c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2730c4:
    // 0x2730c4: 0xc7a60020  lwc1        $f6, 0x20($sp)
    ctx->pc = 0x2730c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2730c8:
    // 0x2730c8: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2730c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2730cc:
    // 0x2730cc: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2730ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2730d0:
    // 0x2730d0: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2730d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2730d4:
    // 0x2730d4: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x2730d4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2730d8:
    // 0x2730d8: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x2730d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2730dc:
    // 0x2730dc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2730dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2730e0:
    // 0x2730e0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2730e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2730e4:
    // 0x2730e4: 0xc7a70070  lwc1        $f7, 0x70($sp)
    ctx->pc = 0x2730e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2730e8:
    // 0x2730e8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2730e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2730ec:
    // 0x2730ec: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x2730ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2730f0:
    // 0x2730f0: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x2730f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2730f4:
    // 0x2730f4: 0xc7a5007c  lwc1        $f5, 0x7C($sp)
    ctx->pc = 0x2730f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2730f8:
    // 0x2730f8: 0xe7a70050  swc1        $f7, 0x50($sp)
    ctx->pc = 0x2730f8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2730fc:
    // 0x2730fc: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x2730fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_273100:
    // 0x273100: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x273100u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_273104:
    // 0x273104: 0xe7a5005c  swc1        $f5, 0x5C($sp)
    ctx->pc = 0x273104u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_273108:
    // 0x273108: 0xe7a60070  swc1        $f6, 0x70($sp)
    ctx->pc = 0x273108u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_27310c:
    // 0x27310c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x27310cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_273110:
    // 0x273110: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x273110u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_273114:
    // 0x273114: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x273114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_273118:
    // 0x273118: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x273118u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_27311c:
    // 0x27311c: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x27311cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_273120:
    // 0x273120: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x273120u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_273124:
    // 0x273124: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x273124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_273128:
    // 0x273128: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x273128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27312c:
    // 0x27312c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x27312cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_273130:
    // 0x273130: 0xc445000c  lwc1        $f5, 0xC($v0)
    ctx->pc = 0x273130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_273134:
    // 0x273134: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x273134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_273138:
    // 0x273138: 0xc4a45b40  lwc1        $f4, 0x5B40($a1)
    ctx->pc = 0x273138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 23360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27313c:
    // 0x27313c: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x27313cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_273140:
    // 0x273140: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x273140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_273144:
    // 0x273144: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x273144u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_273148:
    // 0x273148: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x273148u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_27314c:
    // 0x27314c: 0xc7a70080  lwc1        $f7, 0x80($sp)
    ctx->pc = 0x27314cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_273150:
    // 0x273150: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x273150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_273154:
    // 0x273154: 0xc7a60084  lwc1        $f6, 0x84($sp)
    ctx->pc = 0x273154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_273158:
    // 0x273158: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x273158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27315c:
    // 0x27315c: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x27315cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_273160:
    // 0x273160: 0xe7a70040  swc1        $f7, 0x40($sp)
    ctx->pc = 0x273160u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_273164:
    // 0x273164: 0xe7a60044  swc1        $f6, 0x44($sp)
    ctx->pc = 0x273164u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_273168:
    // 0x273168: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x273168u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_27316c:
    // 0x27316c: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x27316cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_273170:
    // 0x273170: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x273170u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_273174:
    // 0x273174: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x273174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_273178:
    // 0x273178: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x273178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_27317c:
    // 0x27317c: 0xe7a5008c  swc1        $f5, 0x8C($sp)
    ctx->pc = 0x27317cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_273180:
    // 0x273180: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x273180u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_273184:
    // 0x273184: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x273184u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_273188:
    // 0x273188: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x273188u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_27318c:
    // 0x27318c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x27318cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_273190:
    // 0x273190: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x273190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273194:
    // 0x273194: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x273194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_273198:
    // 0x273198: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x273198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27319c:
    // 0x27319c: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x27319cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2731a0:
    // 0x2731a0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2731a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2731a4:
    // 0x2731a4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2731a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2731a8:
    // 0x2731a8: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2731a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2731ac:
    // 0x2731ac: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x2731acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2731b0:
    // 0x2731b0: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x2731b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_2731b4:
    // 0x2731b4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2731b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2731b8:
    // 0x2731b8: 0x1000000a  b           . + 4 + (0xA << 2)
label_2731bc:
    if (ctx->pc == 0x2731BCu) {
        ctx->pc = 0x2731BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731B8u;
        // 0x2731bc: 0x920200c4  lbu         $v0, 0xC4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2731C0u;
        goto label_2731c0;
    }
    ctx->pc = 0x2731B8u;
    {
        const bool branch_taken_0x2731b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2731BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731B8u;
        // 0x2731bc: 0x920200c4  lbu         $v0, 0xC4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2731b8) {
            ctx->pc = 0x2731E4u;
            goto label_2731e4;
        }
    }
    ctx->pc = 0x2731C0u;
label_2731c0:
    // 0x2731c0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2731c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2731c4:
    // 0x2731c4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2731c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2731c8:
    // 0x2731c8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2731c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2731cc:
    // 0x2731cc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2731ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2731d0:
    // 0x2731d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2731d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2731d4:
    // 0x2731d4: 0x0  nop
    ctx->pc = 0x2731d4u;
    // NOP
label_2731d8:
    // 0x2731d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2731d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2731dc:
    // 0x2731dc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2731dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2731e0:
    // 0x2731e0: 0x920200c4  lbu         $v0, 0xC4($s0)
    ctx->pc = 0x2731e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 196)));
label_2731e4:
    // 0x2731e4: 0x104000e9  beqz        $v0, . + 4 + (0xE9 << 2)
label_2731e8:
    if (ctx->pc == 0x2731E8u) {
        ctx->pc = 0x2731E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731E4u;
        // 0x2731e8: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2731ECu;
        goto label_2731ec;
    }
    ctx->pc = 0x2731E4u;
    {
        const bool branch_taken_0x2731e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2731E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731E4u;
        // 0x2731e8: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2731e4) {
            ctx->pc = 0x27358Cu;
            goto label_27358c;
        }
    }
    ctx->pc = 0x2731ECu;
label_2731ec:
    // 0x2731ec: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2731ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2731f0:
    // 0x2731f0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2731f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2731f4:
    // 0x2731f4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2731f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2731f8:
    // 0x2731f8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2731f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2731fc:
    // 0x2731fc: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2731fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273200:
    // 0x273200: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x273200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_273204:
    // 0x273204: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x273204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_273208:
    // 0x273208: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x273208u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_27320c:
    // 0x27320c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x27320cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_273210:
    // 0x273210: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273214:
    // 0x273214: 0x46000085  abs.s       $f2, $f0
    ctx->pc = 0x273214u;
    ctx->f[2] = FPU_ABS_S(ctx->f[0]);
label_273218:
    // 0x273218: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x273218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27321c:
    // 0x27321c: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x27321cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_273220:
    // 0x273220: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x273220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_273224:
    // 0x273224: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x273224u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_273228:
    // 0x273228: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x273228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_27322c:
    // 0x27322c: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x27322cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_273230:
    // 0x273230: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x273230u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_273234:
    // 0x273234: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_273238:
    if (ctx->pc == 0x273238u) {
        ctx->pc = 0x273238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273234u;
        // 0x273238: 0xe7a50018  swc1        $f5, 0x18($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27323Cu;
        goto label_27323c;
    }
    ctx->pc = 0x273234u;
    {
        const bool branch_taken_0x273234 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x273238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273234u;
        // 0x273238: 0xe7a50018  swc1        $f5, 0x18($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x273234) {
            ctx->pc = 0x273264u;
            goto label_273264;
        }
    }
    ctx->pc = 0x27323Cu;
label_27323c:
    // 0x27323c: 0x46002005  abs.s       $f0, $f4
    ctx->pc = 0x27323cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[4]);
label_273240:
    // 0x273240: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x273240u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_273244:
    // 0x273244: 0x0  nop
    ctx->pc = 0x273244u;
    // NOP
label_273248:
    // 0x273248: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_27324c:
    if (ctx->pc == 0x27324Cu) {
        ctx->pc = 0x273250u;
        goto label_273250;
    }
    ctx->pc = 0x273248u;
    {
        const bool branch_taken_0x273248 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x273248) {
            ctx->pc = 0x273264u;
            goto label_273264;
        }
    }
    ctx->pc = 0x273250u;
label_273250:
    // 0x273250: 0x46002805  abs.s       $f0, $f5
    ctx->pc = 0x273250u;
    ctx->f[0] = FPU_ABS_S(ctx->f[5]);
label_273254:
    // 0x273254: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x273254u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_273258:
    // 0x273258: 0x0  nop
    ctx->pc = 0x273258u;
    // NOP
label_27325c:
    // 0x27325c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_273260:
    if (ctx->pc == 0x273260u) {
        ctx->pc = 0x273260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27325Cu;
        // 0x273260: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273264u;
        goto label_273264;
    }
    ctx->pc = 0x27325Cu;
    {
        const bool branch_taken_0x27325c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27325c) {
            ctx->pc = 0x273260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27325Cu;
            // 0x273260: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273264u;
            goto label_273264;
        }
    }
    ctx->pc = 0x273264u;
label_273264:
    // 0x273264: 0x544000bf  bnel        $v0, $zero, . + 4 + (0xBF << 2)
label_273268:
    if (ctx->pc == 0x273268u) {
        ctx->pc = 0x273268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273264u;
        // 0x273268: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27326Cu;
        goto label_27326c;
    }
    ctx->pc = 0x273264u;
    {
        const bool branch_taken_0x273264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273264) {
            ctx->pc = 0x273268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273264u;
            // 0x273268: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273564u;
            goto label_273564;
        }
    }
    ctx->pc = 0x27326Cu;
label_27326c:
    // 0x27326c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x27326cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_273270:
    // 0x273270: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x273270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_273274:
    // 0x273274: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x273274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_273278:
    // 0x273278: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x273278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27327c:
    // 0x27327c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x27327cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_273280:
    // 0x273280: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x273280u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_273284:
    // 0x273284: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x273284u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_273288:
    // 0x273288: 0x46000004  c1          0x4
    ctx->pc = 0x273288u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_27328c:
    // 0x27328c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x27328cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_273290:
    // 0x273290: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x273290u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_273294:
    // 0x273294: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x273294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_273298:
    // 0x273298: 0x0  nop
    ctx->pc = 0x273298u;
    // NOP
label_27329c:
    // 0x27329c: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x27329cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2732a0:
    // 0x2732a0: 0x0  nop
    ctx->pc = 0x2732a0u;
    // NOP
label_2732a4:
    // 0x2732a4: 0x450200af  bc1fl       . + 4 + (0xAF << 2)
label_2732a8:
    if (ctx->pc == 0x2732A8u) {
        ctx->pc = 0x2732A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732A4u;
        // 0x2732a8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2732ACu;
        goto label_2732ac;
    }
    ctx->pc = 0x2732A4u;
    {
        const bool branch_taken_0x2732a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2732a4) {
            ctx->pc = 0x2732A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2732A4u;
            // 0x2732a8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273564u;
            goto label_273564;
        }
    }
    ctx->pc = 0x2732ACu;
label_2732ac:
    // 0x2732ac: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2732acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2732b0:
    // 0x2732b0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2732b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2732b4:
    // 0x2732b4: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2732b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2732b8:
    // 0x2732b8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2732b8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2732bc:
    // 0x2732bc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2732bcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2732c0:
    // 0x2732c0: 0x460421dc  madd.s      $f7, $f4, $f4
    ctx->pc = 0x2732c0u;
    ctx->f[7] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2732c4:
    // 0x2732c4: 0x460701c4  c1          0x701C4
    ctx->pc = 0x2732c4u;
    ctx->f[7] = FPU_SQRT_S(ctx->f[0]);
label_2732c8:
    // 0x2732c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2732c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2732cc:
    // 0x2732cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2732ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2732d0:
    // 0x2732d0: 0x0  nop
    ctx->pc = 0x2732d0u;
    // NOP
label_2732d4:
    // 0x2732d4: 0x46070003  div.s       $f0, $f0, $f7
    ctx->pc = 0x2732d4u;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[7]); }
label_2732d8:
    // 0x2732d8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2732d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2732dc:
    // 0x2732dc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2732dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2732e0:
    // 0x2732e0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2732e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2732e4:
    // 0x2732e4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2732e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2732e8:
    // 0x2732e8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2732e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2732ec:
    // 0x2732ec: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x2732ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2732f0:
    // 0x2732f0: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2732f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
label_2732f4:
    // 0x2732f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2732f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2732f8:
    // 0x2732f8: 0x0  nop
    ctx->pc = 0x2732f8u;
    // NOP
label_2732fc:
    // 0x2732fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2732fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_273300:
    // 0x273300: 0x0  nop
    ctx->pc = 0x273300u;
    // NOP
label_273304:
    // 0x273304: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_273308:
    if (ctx->pc == 0x273308u) {
        ctx->pc = 0x273308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273304u;
        // 0x273308: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27330Cu;
        goto label_27330c;
    }
    ctx->pc = 0x273304u;
    {
        const bool branch_taken_0x273304 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x273308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273304u;
        // 0x273308: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273304) {
            ctx->pc = 0x273310u;
            goto label_273310;
        }
    }
    ctx->pc = 0x27330Cu;
label_27330c:
    // 0x27330c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27330cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273310:
    // 0x273310: 0x14e00002  bnez        $a3, . + 4 + (0x2 << 2)
label_273314:
    if (ctx->pc == 0x273314u) {
        ctx->pc = 0x273314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273310u;
        // 0x273314: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x273318u;
        goto label_273318;
    }
    ctx->pc = 0x273310u;
    {
        const bool branch_taken_0x273310 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x273314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273310u;
        // 0x273314: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273310) {
            ctx->pc = 0x27331Cu;
            goto label_27331c;
        }
    }
    ctx->pc = 0x273318u;
label_273318:
    // 0x273318: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x273318u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
label_27331c:
    // 0x27331c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x27331cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_273320:
    // 0x273320: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x273320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
label_273324:
    // 0x273324: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x273324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_273328:
    // 0x273328: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x273328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27332c:
    // 0x27332c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x27332cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_273330:
    // 0x273330: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x273330u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_273334:
    // 0x273334: 0x460c3834  c.lt.s      $f7, $f12
    ctx->pc = 0x273334u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_273338:
    // 0x273338: 0x0  nop
    ctx->pc = 0x273338u;
    // NOP
label_27333c:
    // 0x27333c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_273340:
    if (ctx->pc == 0x273340u) {
        ctx->pc = 0x273340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27333Cu;
        // 0x273340: 0x46003b06  mov.s       $f12, $f7 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x273344u;
        goto label_273344;
    }
    ctx->pc = 0x27333Cu;
    {
        const bool branch_taken_0x27333c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27333c) {
            ctx->pc = 0x273340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27333Cu;
            // 0x273340: 0x46003b06  mov.s       $f12, $f7 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[7]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x273344u;
            goto label_273344;
        }
    }
    ctx->pc = 0x273344u;
label_273344:
    // 0x273344: 0xc7ab0010  lwc1        $f11, 0x10($sp)
    ctx->pc = 0x273344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_273348:
    // 0x273348: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x273348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_27334c:
    // 0x27334c: 0xc7aa0014  lwc1        $f10, 0x14($sp)
    ctx->pc = 0x27334cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_273350:
    // 0x273350: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x273350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_273354:
    // 0x273354: 0xc7a60018  lwc1        $f6, 0x18($sp)
    ctx->pc = 0x273354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_273358:
    // 0x273358: 0x460b62c2  mul.s       $f11, $f12, $f11
    ctx->pc = 0x273358u;
    ctx->f[11] = FPU_MUL_S(ctx->f[12], ctx->f[11]);
label_27335c:
    // 0x27335c: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x27335cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_273360:
    // 0x273360: 0x460a6282  mul.s       $f10, $f12, $f10
    ctx->pc = 0x273360u;
    ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
label_273364:
    // 0x273364: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x273364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_273368:
    // 0x273368: 0x46066182  mul.s       $f6, $f12, $f6
    ctx->pc = 0x273368u;
    ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
label_27336c:
    // 0x27336c: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x27336cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_273370:
    // 0x273370: 0x46056142  mul.s       $f5, $f12, $f5
    ctx->pc = 0x273370u;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
label_273374:
    // 0x273374: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x273374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_273378:
    // 0x273378: 0x460d59c2  mul.s       $f7, $f11, $f13
    ctx->pc = 0x273378u;
    ctx->f[7] = FPU_MUL_S(ctx->f[11], ctx->f[13]);
label_27337c:
    // 0x27337c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x27337cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_273380:
    // 0x273380: 0x460d5202  mul.s       $f8, $f10, $f13
    ctx->pc = 0x273380u;
    ctx->f[8] = FPU_MUL_S(ctx->f[10], ctx->f[13]);
label_273384:
    // 0x273384: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x273384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_273388:
    // 0x273388: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x273388u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_27338c:
    // 0x27338c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27338cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_273390:
    // 0x273390: 0x460d2a42  mul.s       $f9, $f5, $f13
    ctx->pc = 0x273390u;
    ctx->f[9] = FPU_MUL_S(ctx->f[5], ctx->f[13]);
label_273394:
    // 0x273394: 0xe7a70040  swc1        $f7, 0x40($sp)
    ctx->pc = 0x273394u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_273398:
    // 0x273398: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x273398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_27339c:
    // 0x27339c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x27339cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2733a0:
    // 0x2733a0: 0xe7a80044  swc1        $f8, 0x44($sp)
    ctx->pc = 0x2733a0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2733a4:
    // 0x2733a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2733a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2733a8:
    // 0x2733a8: 0xe7a9004c  swc1        $f9, 0x4C($sp)
    ctx->pc = 0x2733a8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2733ac:
    // 0x2733ac: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2733acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2733b0:
    // 0x2733b0: 0xe7ab0050  swc1        $f11, 0x50($sp)
    ctx->pc = 0x2733b0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2733b4:
    // 0x2733b4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2733b4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2733b8:
    // 0x2733b8: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x2733b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2733bc:
    // 0x2733bc: 0x460d3002  mul.s       $f0, $f6, $f13
    ctx->pc = 0x2733bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[13]);
label_2733c0:
    // 0x2733c0: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2733c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2733c4:
    // 0x2733c4: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x2733c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2733c8:
    // 0x2733c8: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x2733c8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2733cc:
    // 0x2733cc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2733ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2733d0:
    // 0x2733d0: 0xe7aa0054  swc1        $f10, 0x54($sp)
    ctx->pc = 0x2733d0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_2733d4:
    // 0x2733d4: 0xe7a60058  swc1        $f6, 0x58($sp)
    ctx->pc = 0x2733d4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_2733d8:
    // 0x2733d8: 0xe7a5005c  swc1        $f5, 0x5C($sp)
    ctx->pc = 0x2733d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_2733dc:
    // 0x2733dc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2733dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2733e0:
    // 0x2733e0: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x2733e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_2733e4:
    // 0x2733e4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2733e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2733e8:
    // 0x2733e8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2733e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2733ec:
    // 0x2733ec: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2733ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2733f0:
    // 0x2733f0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2733f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2733f4:
    // 0x2733f4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2733f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2733f8:
    // 0x2733f8: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x2733f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2733fc:
    // 0x2733fc: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x2733fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_273400:
    // 0x273400: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x273400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_273404:
    // 0x273404: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x273404u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_273408:
    // 0x273408: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x273408u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_27340c:
    // 0x27340c: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x27340cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_273410:
    // 0x273410: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x273410u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_273414:
    // 0x273414: 0xfa010030  sqc2        $vf1, 0x30($s0)
    ctx->pc = 0x273414u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_273418:
    // 0x273418: 0x10e00036  beqz        $a3, . + 4 + (0x36 << 2)
label_27341c:
    if (ctx->pc == 0x27341Cu) {
        ctx->pc = 0x27341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273418u;
        // 0x27341c: 0x26020020  addiu       $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273420u;
        goto label_273420;
    }
    ctx->pc = 0x273418u;
    {
        const bool branch_taken_0x273418 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x27341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273418u;
        // 0x27341c: 0x26020020  addiu       $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273418) {
            ctx->pc = 0x2734F4u;
            goto label_2734f4;
        }
    }
    ctx->pc = 0x273420u;
label_273420:
    // 0x273420: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x273420u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_273424:
    // 0x273424: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x273424u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_273428:
    // 0x273428: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x273428u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_27342c:
    // 0x27342c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x27342cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_273430:
    // 0x273430: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x273430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273434:
    // 0x273434: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x273434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_273438:
    // 0x273438: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x273438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27343c:
    // 0x27343c: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x27343cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_273440:
    // 0x273440: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x273440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_273444:
    // 0x273444: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x273444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_273448:
    // 0x273448: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x273448u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_27344c:
    // 0x27344c: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x27344cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_273450:
    // 0x273450: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x273450u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_273454:
    // 0x273454: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x273454u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_273458:
    // 0x273458: 0xc4c4000c  lwc1        $f4, 0xC($a2)
    ctx->pc = 0x273458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27345c:
    // 0x27345c: 0xc60200b0  lwc1        $f2, 0xB0($s0)
    ctx->pc = 0x27345cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_273460:
    // 0x273460: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x273460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_273464:
    // 0x273464: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x273464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_273468:
    // 0x273468: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x273468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_27346c:
    // 0x27346c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x27346cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_273470:
    // 0x273470: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x273470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_273474:
    // 0x273474: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x273474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_273478:
    // 0x273478: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x273478u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_27347c:
    // 0x27347c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x27347cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_273480:
    // 0x273480: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x273480u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_273484:
    // 0x273484: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x273484u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_273488:
    // 0x273488: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x273488u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_27348c:
    // 0x27348c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x27348cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_273490:
    // 0x273490: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x273490u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_273494:
    // 0x273494: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x273494u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_273498:
    // 0x273498: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x273498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_27349c:
    // 0x27349c: 0xe7a4003c  swc1        $f4, 0x3C($sp)
    ctx->pc = 0x27349cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2734a0:
    // 0x2734a0: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x2734a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2734a4:
    // 0x2734a4: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2734a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2734a8:
    // 0x2734a8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2734a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2734ac:
    // 0x2734ac: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2734acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_2734b0:
    // 0x2734b0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2734b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2734b4:
    // 0x2734b4: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2734b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_2734b8:
    // 0x2734b8: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x2734b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_2734bc:
    // 0x2734bc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2734bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_2734c0:
    // 0x2734c0: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x2734c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2734c4:
    // 0x2734c4: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x2734c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2734c8:
    // 0x2734c8: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x2734c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2734cc:
    // 0x2734cc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2734ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2734d0:
    // 0x2734d0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2734d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2734d4:
    // 0x2734d4: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x2734d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_2734d8:
    // 0x2734d8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2734d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2734dc:
    // 0x2734dc: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2734dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2734e0:
    // 0x2734e0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2734e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2734e4:
    // 0x2734e4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2734e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2734e8:
    // 0x2734e8: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2734e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2734ec:
    // 0x2734ec: 0x10000015  b           . + 4 + (0x15 << 2)
label_2734f0:
    if (ctx->pc == 0x2734F0u) {
        ctx->pc = 0x2734F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734ECu;
        // 0x2734f0: 0xc7a3005c  lwc1        $f3, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2734F4u;
        goto label_2734f4;
    }
    ctx->pc = 0x2734ECu;
    {
        const bool branch_taken_0x2734ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2734F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734ECu;
        // 0x2734f0: 0xc7a3005c  lwc1        $f3, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2734ec) {
            ctx->pc = 0x273544u;
            goto label_273544;
        }
    }
    ctx->pc = 0x2734F4u;
label_2734f4:
    // 0x2734f4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2734f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2734f8:
    // 0x2734f8: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2734f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2734fc:
    // 0x2734fc: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2734fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_273500:
    // 0x273500: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x273500u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_273504:
    // 0x273504: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x273504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273508:
    // 0x273508: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x273508u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
label_27350c:
    // 0x27350c: 0x460360c2  mul.s       $f3, $f12, $f3
    ctx->pc = 0x27350cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
label_273510:
    // 0x273510: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x273510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_273514:
    // 0x273514: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x273514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_273518:
    // 0x273518: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x273518u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_27351c:
    // 0x27351c: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x27351cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_273520:
    // 0x273520: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x273520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_273524:
    // 0x273524: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x273524u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_273528:
    // 0x273528: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x273528u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_27352c:
    // 0x27352c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x27352cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_273530:
    // 0x273530: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x273530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_273534:
    // 0x273534: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x273534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273538:
    // 0x273538: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x273538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27353c:
    // 0x27353c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x27353cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_273540:
    // 0x273540: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x273540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_273544:
    // 0x273544: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x273544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_273548:
    // 0x273548: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x273548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_27354c:
    // 0x27354c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x27354cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_273550:
    // 0x273550: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x273550u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_273554:
    // 0x273554: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x273554u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_273558:
    // 0x273558: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x273558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_27355c:
    // 0x27355c: 0x10000009  b           . + 4 + (0x9 << 2)
label_273560:
    if (ctx->pc == 0x273560u) {
        ctx->pc = 0x273560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27355Cu;
        // 0x273560: 0x920200c4  lbu         $v0, 0xC4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273564u;
        goto label_273564;
    }
    ctx->pc = 0x27355Cu;
    {
        const bool branch_taken_0x27355c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27355Cu;
        // 0x273560: 0x920200c4  lbu         $v0, 0xC4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27355c) {
            ctx->pc = 0x273584u;
            goto label_273584;
        }
    }
    ctx->pc = 0x273564u;
label_273564:
    // 0x273564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_273568:
    // 0x273568: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_27356c:
    if (ctx->pc == 0x27356Cu) {
        ctx->pc = 0x27356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273568u;
        // 0x27356c: 0x920200c4  lbu         $v0, 0xC4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273570u;
        goto label_273570;
    }
    ctx->pc = 0x273568u;
    {
        const bool branch_taken_0x273568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x273568) {
            ctx->pc = 0x27356Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273568u;
            // 0x27356c: 0x920200c4  lbu         $v0, 0xC4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273584u;
            goto label_273584;
        }
    }
    ctx->pc = 0x273570u;
label_273570:
    // 0x273570: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x273570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_273574:
    // 0x273574: 0xc0cda26  jal         func_336898
label_273578:
    if (ctx->pc == 0x273578u) {
        ctx->pc = 0x273578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273574u;
        // 0x273578: 0x2405005e  addiu       $a1, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27357Cu;
        goto label_27357c;
    }
    ctx->pc = 0x273574u;
    SET_GPR_U32(ctx, 31, 0x27357Cu);
    ctx->pc = 0x273578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273574u;
    // 0x273578: 0x2405005e  addiu       $a1, $zero, 0x5E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x273574u, 0x27357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27357Cu;
label_27357c:
    // 0x27357c: 0xa20000c4  sb          $zero, 0xC4($s0)
    ctx->pc = 0x27357cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 196), (uint8_t)GPR_U32(ctx, 0));
label_273580:
    // 0x273580: 0x920200c4  lbu         $v0, 0xC4($s0)
    ctx->pc = 0x273580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 196)));
label_273584:
    // 0x273584: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_273588:
    if (ctx->pc == 0x273588u) {
        ctx->pc = 0x273588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273584u;
        // 0x273588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27358Cu;
        goto label_27358c;
    }
    ctx->pc = 0x273584u;
    {
        const bool branch_taken_0x273584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273584u;
        // 0x273588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273584) {
            ctx->pc = 0x2735B8u;
            goto label_2735b8;
        }
    }
    ctx->pc = 0x27358Cu;
label_27358c:
    // 0x27358c: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x27358cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_273590:
    // 0x273590: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x273590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_273594:
    // 0x273594: 0x0  nop
    ctx->pc = 0x273594u;
    // NOP
label_273598:
    // 0x273598: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x273598u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27359c:
    // 0x27359c: 0x0  nop
    ctx->pc = 0x27359cu;
    // NOP
label_2735a0:
    // 0x2735a0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2735a4:
    if (ctx->pc == 0x2735A4u) {
        ctx->pc = 0x2735A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735A0u;
        // 0x2735a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2735A8u;
        goto label_2735a8;
    }
    ctx->pc = 0x2735A0u;
    {
        const bool branch_taken_0x2735a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2735A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735A0u;
        // 0x2735a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2735a0) {
            ctx->pc = 0x2735B8u;
            goto label_2735b8;
        }
    }
    ctx->pc = 0x2735A8u;
label_2735a8:
    // 0x2735a8: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2735a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2735ac:
    // 0x2735ac: 0x90430372  lbu         $v1, 0x372($v0)
    ctx->pc = 0x2735acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 882)));
label_2735b0:
    // 0x2735b0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_2735b4:
    if (ctx->pc == 0x2735B4u) {
        ctx->pc = 0x2735B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735B0u;
        // 0x2735b4: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2735B8u;
        goto label_2735b8;
    }
    ctx->pc = 0x2735B0u;
    {
        const bool branch_taken_0x2735b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2735b0) {
            ctx->pc = 0x2735B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2735B0u;
            // 0x2735b4: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2735C4u;
            goto label_2735c4;
        }
    }
    ctx->pc = 0x2735B8u;
label_2735b8:
    // 0x2735b8: 0xc09ca70  jal         func_2729C0
label_2735bc:
    if (ctx->pc == 0x2735BCu) {
        ctx->pc = 0x2735BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735B8u;
        // 0x2735bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2735C0u;
        goto label_2735c0;
    }
    ctx->pc = 0x2735B8u;
    SET_GPR_U32(ctx, 31, 0x2735C0u);
    ctx->pc = 0x2735BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2735B8u;
    // 0x2735bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2729C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2729C0u, 0x2735B8u, 0x2735C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2735C0u;
label_2735c0:
    // 0x2735c0: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x2735c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2735c4:
    // 0x2735c4: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x2735c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_2735c8:
    // 0x2735c8: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x2735c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2735cc:
    // 0x2735cc: 0x40f809  jalr        $v0
label_2735d0:
    if (ctx->pc == 0x2735D0u) {
        ctx->pc = 0x2735D4u;
        goto label_2735d4;
    }
    ctx->pc = 0x2735CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2735D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2735CCu, 0x2735D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2735D4u;
label_2735d4:
    // 0x2735d4: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x2735d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2735d8:
    // 0x2735d8: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x2735d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_2735dc:
    // 0x2735dc: 0x3e00008  jr          $ra
label_2735e0:
    if (ctx->pc == 0x2735E0u) {
        ctx->pc = 0x2735E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735DCu;
        // 0x2735e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2735E4u;
        goto label_2735e4;
    }
    ctx->pc = 0x2735DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2735E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735DCu;
        // 0x2735e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2735DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2735E4u;
label_2735e4:
    // 0x2735e4: 0x0  nop
    ctx->pc = 0x2735e4u;
    // NOP
    ctx->pc = 0x2735e8u;
}
