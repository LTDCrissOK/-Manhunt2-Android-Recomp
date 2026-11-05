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

// Function: sub_003060E0
// Address: 0x3060e0 - 0x306a98
void sub_003060E0_0x3060e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003060E0_0x3060e0");
#endif

    switch (ctx->pc) {
        case 0x3060e0u: goto label_3060e0;
        case 0x3060e4u: goto label_3060e4;
        case 0x3060e8u: goto label_3060e8;
        case 0x3060ecu: goto label_3060ec;
        case 0x3060f0u: goto label_3060f0;
        case 0x3060f4u: goto label_3060f4;
        case 0x3060f8u: goto label_3060f8;
        case 0x3060fcu: goto label_3060fc;
        case 0x306100u: goto label_306100;
        case 0x306104u: goto label_306104;
        case 0x306108u: goto label_306108;
        case 0x30610cu: goto label_30610c;
        case 0x306110u: goto label_306110;
        case 0x306114u: goto label_306114;
        case 0x306118u: goto label_306118;
        case 0x30611cu: goto label_30611c;
        case 0x306120u: goto label_306120;
        case 0x306124u: goto label_306124;
        case 0x306128u: goto label_306128;
        case 0x30612cu: goto label_30612c;
        case 0x306130u: goto label_306130;
        case 0x306134u: goto label_306134;
        case 0x306138u: goto label_306138;
        case 0x30613cu: goto label_30613c;
        case 0x306140u: goto label_306140;
        case 0x306144u: goto label_306144;
        case 0x306148u: goto label_306148;
        case 0x30614cu: goto label_30614c;
        case 0x306150u: goto label_306150;
        case 0x306154u: goto label_306154;
        case 0x306158u: goto label_306158;
        case 0x30615cu: goto label_30615c;
        case 0x306160u: goto label_306160;
        case 0x306164u: goto label_306164;
        case 0x306168u: goto label_306168;
        case 0x30616cu: goto label_30616c;
        case 0x306170u: goto label_306170;
        case 0x306174u: goto label_306174;
        case 0x306178u: goto label_306178;
        case 0x30617cu: goto label_30617c;
        case 0x306180u: goto label_306180;
        case 0x306184u: goto label_306184;
        case 0x306188u: goto label_306188;
        case 0x30618cu: goto label_30618c;
        case 0x306190u: goto label_306190;
        case 0x306194u: goto label_306194;
        case 0x306198u: goto label_306198;
        case 0x30619cu: goto label_30619c;
        case 0x3061a0u: goto label_3061a0;
        case 0x3061a4u: goto label_3061a4;
        case 0x3061a8u: goto label_3061a8;
        case 0x3061acu: goto label_3061ac;
        case 0x3061b0u: goto label_3061b0;
        case 0x3061b4u: goto label_3061b4;
        case 0x3061b8u: goto label_3061b8;
        case 0x3061bcu: goto label_3061bc;
        case 0x3061c0u: goto label_3061c0;
        case 0x3061c4u: goto label_3061c4;
        case 0x3061c8u: goto label_3061c8;
        case 0x3061ccu: goto label_3061cc;
        case 0x3061d0u: goto label_3061d0;
        case 0x3061d4u: goto label_3061d4;
        case 0x3061d8u: goto label_3061d8;
        case 0x3061dcu: goto label_3061dc;
        case 0x3061e0u: goto label_3061e0;
        case 0x3061e4u: goto label_3061e4;
        case 0x3061e8u: goto label_3061e8;
        case 0x3061ecu: goto label_3061ec;
        case 0x3061f0u: goto label_3061f0;
        case 0x3061f4u: goto label_3061f4;
        case 0x3061f8u: goto label_3061f8;
        case 0x3061fcu: goto label_3061fc;
        case 0x306200u: goto label_306200;
        case 0x306204u: goto label_306204;
        case 0x306208u: goto label_306208;
        case 0x30620cu: goto label_30620c;
        case 0x306210u: goto label_306210;
        case 0x306214u: goto label_306214;
        case 0x306218u: goto label_306218;
        case 0x30621cu: goto label_30621c;
        case 0x306220u: goto label_306220;
        case 0x306224u: goto label_306224;
        case 0x306228u: goto label_306228;
        case 0x30622cu: goto label_30622c;
        case 0x306230u: goto label_306230;
        case 0x306234u: goto label_306234;
        case 0x306238u: goto label_306238;
        case 0x30623cu: goto label_30623c;
        case 0x306240u: goto label_306240;
        case 0x306244u: goto label_306244;
        case 0x306248u: goto label_306248;
        case 0x30624cu: goto label_30624c;
        case 0x306250u: goto label_306250;
        case 0x306254u: goto label_306254;
        case 0x306258u: goto label_306258;
        case 0x30625cu: goto label_30625c;
        case 0x306260u: goto label_306260;
        case 0x306264u: goto label_306264;
        case 0x306268u: goto label_306268;
        case 0x30626cu: goto label_30626c;
        case 0x306270u: goto label_306270;
        case 0x306274u: goto label_306274;
        case 0x306278u: goto label_306278;
        case 0x30627cu: goto label_30627c;
        case 0x306280u: goto label_306280;
        case 0x306284u: goto label_306284;
        case 0x306288u: goto label_306288;
        case 0x30628cu: goto label_30628c;
        case 0x306290u: goto label_306290;
        case 0x306294u: goto label_306294;
        case 0x306298u: goto label_306298;
        case 0x30629cu: goto label_30629c;
        case 0x3062a0u: goto label_3062a0;
        case 0x3062a4u: goto label_3062a4;
        case 0x3062a8u: goto label_3062a8;
        case 0x3062acu: goto label_3062ac;
        case 0x3062b0u: goto label_3062b0;
        case 0x3062b4u: goto label_3062b4;
        case 0x3062b8u: goto label_3062b8;
        case 0x3062bcu: goto label_3062bc;
        case 0x3062c0u: goto label_3062c0;
        case 0x3062c4u: goto label_3062c4;
        case 0x3062c8u: goto label_3062c8;
        case 0x3062ccu: goto label_3062cc;
        case 0x3062d0u: goto label_3062d0;
        case 0x3062d4u: goto label_3062d4;
        case 0x3062d8u: goto label_3062d8;
        case 0x3062dcu: goto label_3062dc;
        case 0x3062e0u: goto label_3062e0;
        case 0x3062e4u: goto label_3062e4;
        case 0x3062e8u: goto label_3062e8;
        case 0x3062ecu: goto label_3062ec;
        case 0x3062f0u: goto label_3062f0;
        case 0x3062f4u: goto label_3062f4;
        case 0x3062f8u: goto label_3062f8;
        case 0x3062fcu: goto label_3062fc;
        case 0x306300u: goto label_306300;
        case 0x306304u: goto label_306304;
        case 0x306308u: goto label_306308;
        case 0x30630cu: goto label_30630c;
        case 0x306310u: goto label_306310;
        case 0x306314u: goto label_306314;
        case 0x306318u: goto label_306318;
        case 0x30631cu: goto label_30631c;
        case 0x306320u: goto label_306320;
        case 0x306324u: goto label_306324;
        case 0x306328u: goto label_306328;
        case 0x30632cu: goto label_30632c;
        case 0x306330u: goto label_306330;
        case 0x306334u: goto label_306334;
        case 0x306338u: goto label_306338;
        case 0x30633cu: goto label_30633c;
        case 0x306340u: goto label_306340;
        case 0x306344u: goto label_306344;
        case 0x306348u: goto label_306348;
        case 0x30634cu: goto label_30634c;
        case 0x306350u: goto label_306350;
        case 0x306354u: goto label_306354;
        case 0x306358u: goto label_306358;
        case 0x30635cu: goto label_30635c;
        case 0x306360u: goto label_306360;
        case 0x306364u: goto label_306364;
        case 0x306368u: goto label_306368;
        case 0x30636cu: goto label_30636c;
        case 0x306370u: goto label_306370;
        case 0x306374u: goto label_306374;
        case 0x306378u: goto label_306378;
        case 0x30637cu: goto label_30637c;
        case 0x306380u: goto label_306380;
        case 0x306384u: goto label_306384;
        case 0x306388u: goto label_306388;
        case 0x30638cu: goto label_30638c;
        case 0x306390u: goto label_306390;
        case 0x306394u: goto label_306394;
        case 0x306398u: goto label_306398;
        case 0x30639cu: goto label_30639c;
        case 0x3063a0u: goto label_3063a0;
        case 0x3063a4u: goto label_3063a4;
        case 0x3063a8u: goto label_3063a8;
        case 0x3063acu: goto label_3063ac;
        case 0x3063b0u: goto label_3063b0;
        case 0x3063b4u: goto label_3063b4;
        case 0x3063b8u: goto label_3063b8;
        case 0x3063bcu: goto label_3063bc;
        case 0x3063c0u: goto label_3063c0;
        case 0x3063c4u: goto label_3063c4;
        case 0x3063c8u: goto label_3063c8;
        case 0x3063ccu: goto label_3063cc;
        case 0x3063d0u: goto label_3063d0;
        case 0x3063d4u: goto label_3063d4;
        case 0x3063d8u: goto label_3063d8;
        case 0x3063dcu: goto label_3063dc;
        case 0x3063e0u: goto label_3063e0;
        case 0x3063e4u: goto label_3063e4;
        case 0x3063e8u: goto label_3063e8;
        case 0x3063ecu: goto label_3063ec;
        case 0x3063f0u: goto label_3063f0;
        case 0x3063f4u: goto label_3063f4;
        case 0x3063f8u: goto label_3063f8;
        case 0x3063fcu: goto label_3063fc;
        case 0x306400u: goto label_306400;
        case 0x306404u: goto label_306404;
        case 0x306408u: goto label_306408;
        case 0x30640cu: goto label_30640c;
        case 0x306410u: goto label_306410;
        case 0x306414u: goto label_306414;
        case 0x306418u: goto label_306418;
        case 0x30641cu: goto label_30641c;
        case 0x306420u: goto label_306420;
        case 0x306424u: goto label_306424;
        case 0x306428u: goto label_306428;
        case 0x30642cu: goto label_30642c;
        case 0x306430u: goto label_306430;
        case 0x306434u: goto label_306434;
        case 0x306438u: goto label_306438;
        case 0x30643cu: goto label_30643c;
        case 0x306440u: goto label_306440;
        case 0x306444u: goto label_306444;
        case 0x306448u: goto label_306448;
        case 0x30644cu: goto label_30644c;
        case 0x306450u: goto label_306450;
        case 0x306454u: goto label_306454;
        case 0x306458u: goto label_306458;
        case 0x30645cu: goto label_30645c;
        case 0x306460u: goto label_306460;
        case 0x306464u: goto label_306464;
        case 0x306468u: goto label_306468;
        case 0x30646cu: goto label_30646c;
        case 0x306470u: goto label_306470;
        case 0x306474u: goto label_306474;
        case 0x306478u: goto label_306478;
        case 0x30647cu: goto label_30647c;
        case 0x306480u: goto label_306480;
        case 0x306484u: goto label_306484;
        case 0x306488u: goto label_306488;
        case 0x30648cu: goto label_30648c;
        case 0x306490u: goto label_306490;
        case 0x306494u: goto label_306494;
        case 0x306498u: goto label_306498;
        case 0x30649cu: goto label_30649c;
        case 0x3064a0u: goto label_3064a0;
        case 0x3064a4u: goto label_3064a4;
        case 0x3064a8u: goto label_3064a8;
        case 0x3064acu: goto label_3064ac;
        case 0x3064b0u: goto label_3064b0;
        case 0x3064b4u: goto label_3064b4;
        case 0x3064b8u: goto label_3064b8;
        case 0x3064bcu: goto label_3064bc;
        case 0x3064c0u: goto label_3064c0;
        case 0x3064c4u: goto label_3064c4;
        case 0x3064c8u: goto label_3064c8;
        case 0x3064ccu: goto label_3064cc;
        case 0x3064d0u: goto label_3064d0;
        case 0x3064d4u: goto label_3064d4;
        case 0x3064d8u: goto label_3064d8;
        case 0x3064dcu: goto label_3064dc;
        case 0x3064e0u: goto label_3064e0;
        case 0x3064e4u: goto label_3064e4;
        case 0x3064e8u: goto label_3064e8;
        case 0x3064ecu: goto label_3064ec;
        case 0x3064f0u: goto label_3064f0;
        case 0x3064f4u: goto label_3064f4;
        case 0x3064f8u: goto label_3064f8;
        case 0x3064fcu: goto label_3064fc;
        case 0x306500u: goto label_306500;
        case 0x306504u: goto label_306504;
        case 0x306508u: goto label_306508;
        case 0x30650cu: goto label_30650c;
        case 0x306510u: goto label_306510;
        case 0x306514u: goto label_306514;
        case 0x306518u: goto label_306518;
        case 0x30651cu: goto label_30651c;
        case 0x306520u: goto label_306520;
        case 0x306524u: goto label_306524;
        case 0x306528u: goto label_306528;
        case 0x30652cu: goto label_30652c;
        case 0x306530u: goto label_306530;
        case 0x306534u: goto label_306534;
        case 0x306538u: goto label_306538;
        case 0x30653cu: goto label_30653c;
        case 0x306540u: goto label_306540;
        case 0x306544u: goto label_306544;
        case 0x306548u: goto label_306548;
        case 0x30654cu: goto label_30654c;
        case 0x306550u: goto label_306550;
        case 0x306554u: goto label_306554;
        case 0x306558u: goto label_306558;
        case 0x30655cu: goto label_30655c;
        case 0x306560u: goto label_306560;
        case 0x306564u: goto label_306564;
        case 0x306568u: goto label_306568;
        case 0x30656cu: goto label_30656c;
        case 0x306570u: goto label_306570;
        case 0x306574u: goto label_306574;
        case 0x306578u: goto label_306578;
        case 0x30657cu: goto label_30657c;
        case 0x306580u: goto label_306580;
        case 0x306584u: goto label_306584;
        case 0x306588u: goto label_306588;
        case 0x30658cu: goto label_30658c;
        case 0x306590u: goto label_306590;
        case 0x306594u: goto label_306594;
        case 0x306598u: goto label_306598;
        case 0x30659cu: goto label_30659c;
        case 0x3065a0u: goto label_3065a0;
        case 0x3065a4u: goto label_3065a4;
        case 0x3065a8u: goto label_3065a8;
        case 0x3065acu: goto label_3065ac;
        case 0x3065b0u: goto label_3065b0;
        case 0x3065b4u: goto label_3065b4;
        case 0x3065b8u: goto label_3065b8;
        case 0x3065bcu: goto label_3065bc;
        case 0x3065c0u: goto label_3065c0;
        case 0x3065c4u: goto label_3065c4;
        case 0x3065c8u: goto label_3065c8;
        case 0x3065ccu: goto label_3065cc;
        case 0x3065d0u: goto label_3065d0;
        case 0x3065d4u: goto label_3065d4;
        case 0x3065d8u: goto label_3065d8;
        case 0x3065dcu: goto label_3065dc;
        case 0x3065e0u: goto label_3065e0;
        case 0x3065e4u: goto label_3065e4;
        case 0x3065e8u: goto label_3065e8;
        case 0x3065ecu: goto label_3065ec;
        case 0x3065f0u: goto label_3065f0;
        case 0x3065f4u: goto label_3065f4;
        case 0x3065f8u: goto label_3065f8;
        case 0x3065fcu: goto label_3065fc;
        case 0x306600u: goto label_306600;
        case 0x306604u: goto label_306604;
        case 0x306608u: goto label_306608;
        case 0x30660cu: goto label_30660c;
        case 0x306610u: goto label_306610;
        case 0x306614u: goto label_306614;
        case 0x306618u: goto label_306618;
        case 0x30661cu: goto label_30661c;
        case 0x306620u: goto label_306620;
        case 0x306624u: goto label_306624;
        case 0x306628u: goto label_306628;
        case 0x30662cu: goto label_30662c;
        case 0x306630u: goto label_306630;
        case 0x306634u: goto label_306634;
        case 0x306638u: goto label_306638;
        case 0x30663cu: goto label_30663c;
        case 0x306640u: goto label_306640;
        case 0x306644u: goto label_306644;
        case 0x306648u: goto label_306648;
        case 0x30664cu: goto label_30664c;
        case 0x306650u: goto label_306650;
        case 0x306654u: goto label_306654;
        case 0x306658u: goto label_306658;
        case 0x30665cu: goto label_30665c;
        case 0x306660u: goto label_306660;
        case 0x306664u: goto label_306664;
        case 0x306668u: goto label_306668;
        case 0x30666cu: goto label_30666c;
        case 0x306670u: goto label_306670;
        case 0x306674u: goto label_306674;
        case 0x306678u: goto label_306678;
        case 0x30667cu: goto label_30667c;
        case 0x306680u: goto label_306680;
        case 0x306684u: goto label_306684;
        case 0x306688u: goto label_306688;
        case 0x30668cu: goto label_30668c;
        case 0x306690u: goto label_306690;
        case 0x306694u: goto label_306694;
        case 0x306698u: goto label_306698;
        case 0x30669cu: goto label_30669c;
        case 0x3066a0u: goto label_3066a0;
        case 0x3066a4u: goto label_3066a4;
        case 0x3066a8u: goto label_3066a8;
        case 0x3066acu: goto label_3066ac;
        case 0x3066b0u: goto label_3066b0;
        case 0x3066b4u: goto label_3066b4;
        case 0x3066b8u: goto label_3066b8;
        case 0x3066bcu: goto label_3066bc;
        case 0x3066c0u: goto label_3066c0;
        case 0x3066c4u: goto label_3066c4;
        case 0x3066c8u: goto label_3066c8;
        case 0x3066ccu: goto label_3066cc;
        case 0x3066d0u: goto label_3066d0;
        case 0x3066d4u: goto label_3066d4;
        case 0x3066d8u: goto label_3066d8;
        case 0x3066dcu: goto label_3066dc;
        case 0x3066e0u: goto label_3066e0;
        case 0x3066e4u: goto label_3066e4;
        case 0x3066e8u: goto label_3066e8;
        case 0x3066ecu: goto label_3066ec;
        case 0x3066f0u: goto label_3066f0;
        case 0x3066f4u: goto label_3066f4;
        case 0x3066f8u: goto label_3066f8;
        case 0x3066fcu: goto label_3066fc;
        case 0x306700u: goto label_306700;
        case 0x306704u: goto label_306704;
        case 0x306708u: goto label_306708;
        case 0x30670cu: goto label_30670c;
        case 0x306710u: goto label_306710;
        case 0x306714u: goto label_306714;
        case 0x306718u: goto label_306718;
        case 0x30671cu: goto label_30671c;
        case 0x306720u: goto label_306720;
        case 0x306724u: goto label_306724;
        case 0x306728u: goto label_306728;
        case 0x30672cu: goto label_30672c;
        case 0x306730u: goto label_306730;
        case 0x306734u: goto label_306734;
        case 0x306738u: goto label_306738;
        case 0x30673cu: goto label_30673c;
        case 0x306740u: goto label_306740;
        case 0x306744u: goto label_306744;
        case 0x306748u: goto label_306748;
        case 0x30674cu: goto label_30674c;
        case 0x306750u: goto label_306750;
        case 0x306754u: goto label_306754;
        case 0x306758u: goto label_306758;
        case 0x30675cu: goto label_30675c;
        case 0x306760u: goto label_306760;
        case 0x306764u: goto label_306764;
        case 0x306768u: goto label_306768;
        case 0x30676cu: goto label_30676c;
        case 0x306770u: goto label_306770;
        case 0x306774u: goto label_306774;
        case 0x306778u: goto label_306778;
        case 0x30677cu: goto label_30677c;
        case 0x306780u: goto label_306780;
        case 0x306784u: goto label_306784;
        case 0x306788u: goto label_306788;
        case 0x30678cu: goto label_30678c;
        case 0x306790u: goto label_306790;
        case 0x306794u: goto label_306794;
        case 0x306798u: goto label_306798;
        case 0x30679cu: goto label_30679c;
        case 0x3067a0u: goto label_3067a0;
        case 0x3067a4u: goto label_3067a4;
        case 0x3067a8u: goto label_3067a8;
        case 0x3067acu: goto label_3067ac;
        case 0x3067b0u: goto label_3067b0;
        case 0x3067b4u: goto label_3067b4;
        case 0x3067b8u: goto label_3067b8;
        case 0x3067bcu: goto label_3067bc;
        case 0x3067c0u: goto label_3067c0;
        case 0x3067c4u: goto label_3067c4;
        case 0x3067c8u: goto label_3067c8;
        case 0x3067ccu: goto label_3067cc;
        case 0x3067d0u: goto label_3067d0;
        case 0x3067d4u: goto label_3067d4;
        case 0x3067d8u: goto label_3067d8;
        case 0x3067dcu: goto label_3067dc;
        case 0x3067e0u: goto label_3067e0;
        case 0x3067e4u: goto label_3067e4;
        case 0x3067e8u: goto label_3067e8;
        case 0x3067ecu: goto label_3067ec;
        case 0x3067f0u: goto label_3067f0;
        case 0x3067f4u: goto label_3067f4;
        case 0x3067f8u: goto label_3067f8;
        case 0x3067fcu: goto label_3067fc;
        case 0x306800u: goto label_306800;
        case 0x306804u: goto label_306804;
        case 0x306808u: goto label_306808;
        case 0x30680cu: goto label_30680c;
        case 0x306810u: goto label_306810;
        case 0x306814u: goto label_306814;
        case 0x306818u: goto label_306818;
        case 0x30681cu: goto label_30681c;
        case 0x306820u: goto label_306820;
        case 0x306824u: goto label_306824;
        case 0x306828u: goto label_306828;
        case 0x30682cu: goto label_30682c;
        case 0x306830u: goto label_306830;
        case 0x306834u: goto label_306834;
        case 0x306838u: goto label_306838;
        case 0x30683cu: goto label_30683c;
        case 0x306840u: goto label_306840;
        case 0x306844u: goto label_306844;
        case 0x306848u: goto label_306848;
        case 0x30684cu: goto label_30684c;
        case 0x306850u: goto label_306850;
        case 0x306854u: goto label_306854;
        case 0x306858u: goto label_306858;
        case 0x30685cu: goto label_30685c;
        case 0x306860u: goto label_306860;
        case 0x306864u: goto label_306864;
        case 0x306868u: goto label_306868;
        case 0x30686cu: goto label_30686c;
        case 0x306870u: goto label_306870;
        case 0x306874u: goto label_306874;
        case 0x306878u: goto label_306878;
        case 0x30687cu: goto label_30687c;
        case 0x306880u: goto label_306880;
        case 0x306884u: goto label_306884;
        case 0x306888u: goto label_306888;
        case 0x30688cu: goto label_30688c;
        case 0x306890u: goto label_306890;
        case 0x306894u: goto label_306894;
        case 0x306898u: goto label_306898;
        case 0x30689cu: goto label_30689c;
        case 0x3068a0u: goto label_3068a0;
        case 0x3068a4u: goto label_3068a4;
        case 0x3068a8u: goto label_3068a8;
        case 0x3068acu: goto label_3068ac;
        case 0x3068b0u: goto label_3068b0;
        case 0x3068b4u: goto label_3068b4;
        case 0x3068b8u: goto label_3068b8;
        case 0x3068bcu: goto label_3068bc;
        case 0x3068c0u: goto label_3068c0;
        case 0x3068c4u: goto label_3068c4;
        case 0x3068c8u: goto label_3068c8;
        case 0x3068ccu: goto label_3068cc;
        case 0x3068d0u: goto label_3068d0;
        case 0x3068d4u: goto label_3068d4;
        case 0x3068d8u: goto label_3068d8;
        case 0x3068dcu: goto label_3068dc;
        case 0x3068e0u: goto label_3068e0;
        case 0x3068e4u: goto label_3068e4;
        case 0x3068e8u: goto label_3068e8;
        case 0x3068ecu: goto label_3068ec;
        case 0x3068f0u: goto label_3068f0;
        case 0x3068f4u: goto label_3068f4;
        case 0x3068f8u: goto label_3068f8;
        case 0x3068fcu: goto label_3068fc;
        case 0x306900u: goto label_306900;
        case 0x306904u: goto label_306904;
        case 0x306908u: goto label_306908;
        case 0x30690cu: goto label_30690c;
        case 0x306910u: goto label_306910;
        case 0x306914u: goto label_306914;
        case 0x306918u: goto label_306918;
        case 0x30691cu: goto label_30691c;
        case 0x306920u: goto label_306920;
        case 0x306924u: goto label_306924;
        case 0x306928u: goto label_306928;
        case 0x30692cu: goto label_30692c;
        case 0x306930u: goto label_306930;
        case 0x306934u: goto label_306934;
        case 0x306938u: goto label_306938;
        case 0x30693cu: goto label_30693c;
        case 0x306940u: goto label_306940;
        case 0x306944u: goto label_306944;
        case 0x306948u: goto label_306948;
        case 0x30694cu: goto label_30694c;
        case 0x306950u: goto label_306950;
        case 0x306954u: goto label_306954;
        case 0x306958u: goto label_306958;
        case 0x30695cu: goto label_30695c;
        case 0x306960u: goto label_306960;
        case 0x306964u: goto label_306964;
        case 0x306968u: goto label_306968;
        case 0x30696cu: goto label_30696c;
        case 0x306970u: goto label_306970;
        case 0x306974u: goto label_306974;
        case 0x306978u: goto label_306978;
        case 0x30697cu: goto label_30697c;
        case 0x306980u: goto label_306980;
        case 0x306984u: goto label_306984;
        case 0x306988u: goto label_306988;
        case 0x30698cu: goto label_30698c;
        case 0x306990u: goto label_306990;
        case 0x306994u: goto label_306994;
        case 0x306998u: goto label_306998;
        case 0x30699cu: goto label_30699c;
        case 0x3069a0u: goto label_3069a0;
        case 0x3069a4u: goto label_3069a4;
        case 0x3069a8u: goto label_3069a8;
        case 0x3069acu: goto label_3069ac;
        case 0x3069b0u: goto label_3069b0;
        case 0x3069b4u: goto label_3069b4;
        case 0x3069b8u: goto label_3069b8;
        case 0x3069bcu: goto label_3069bc;
        case 0x3069c0u: goto label_3069c0;
        case 0x3069c4u: goto label_3069c4;
        case 0x3069c8u: goto label_3069c8;
        case 0x3069ccu: goto label_3069cc;
        case 0x3069d0u: goto label_3069d0;
        case 0x3069d4u: goto label_3069d4;
        case 0x3069d8u: goto label_3069d8;
        case 0x3069dcu: goto label_3069dc;
        case 0x3069e0u: goto label_3069e0;
        case 0x3069e4u: goto label_3069e4;
        case 0x3069e8u: goto label_3069e8;
        case 0x3069ecu: goto label_3069ec;
        case 0x3069f0u: goto label_3069f0;
        case 0x3069f4u: goto label_3069f4;
        case 0x3069f8u: goto label_3069f8;
        case 0x3069fcu: goto label_3069fc;
        case 0x306a00u: goto label_306a00;
        case 0x306a04u: goto label_306a04;
        case 0x306a08u: goto label_306a08;
        case 0x306a0cu: goto label_306a0c;
        case 0x306a10u: goto label_306a10;
        case 0x306a14u: goto label_306a14;
        case 0x306a18u: goto label_306a18;
        case 0x306a1cu: goto label_306a1c;
        case 0x306a20u: goto label_306a20;
        case 0x306a24u: goto label_306a24;
        case 0x306a28u: goto label_306a28;
        case 0x306a2cu: goto label_306a2c;
        case 0x306a30u: goto label_306a30;
        case 0x306a34u: goto label_306a34;
        case 0x306a38u: goto label_306a38;
        case 0x306a3cu: goto label_306a3c;
        case 0x306a40u: goto label_306a40;
        case 0x306a44u: goto label_306a44;
        case 0x306a48u: goto label_306a48;
        case 0x306a4cu: goto label_306a4c;
        case 0x306a50u: goto label_306a50;
        case 0x306a54u: goto label_306a54;
        case 0x306a58u: goto label_306a58;
        case 0x306a5cu: goto label_306a5c;
        case 0x306a60u: goto label_306a60;
        case 0x306a64u: goto label_306a64;
        case 0x306a68u: goto label_306a68;
        case 0x306a6cu: goto label_306a6c;
        case 0x306a70u: goto label_306a70;
        case 0x306a74u: goto label_306a74;
        case 0x306a78u: goto label_306a78;
        case 0x306a7cu: goto label_306a7c;
        case 0x306a80u: goto label_306a80;
        case 0x306a84u: goto label_306a84;
        case 0x306a88u: goto label_306a88;
        case 0x306a8cu: goto label_306a8c;
        case 0x306a90u: goto label_306a90;
        case 0x306a94u: goto label_306a94;
        default: break;
    }

    ctx->pc = 0x3060e0u;

label_3060e0:
    // 0x3060e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3060e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3060e4:
    // 0x3060e4: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x3060e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_3060e8:
    // 0x3060e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3060e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3060ec:
    // 0x3060ec: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x3060ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_3060f0:
    // 0x3060f0: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x3060f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_3060f4:
    // 0x3060f4: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x3060f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
label_3060f8:
    // 0x3060f8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x3060f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_3060fc:
    // 0x3060fc: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x3060fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
label_306100:
    // 0x306100: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x306100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_306104:
    // 0x306104: 0xc0908c0  jal         func_242300
label_306108:
    if (ctx->pc == 0x306108u) {
        ctx->pc = 0x306108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306104u;
        // 0x306108: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x30610Cu;
        goto label_30610c;
    }
    ctx->pc = 0x306104u;
    SET_GPR_U32(ctx, 31, 0x30610Cu);
    ctx->pc = 0x306108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306104u;
    // 0x306108: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x242300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242300u, 0x306104u, 0x30610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30610Cu;
label_30610c:
    // 0x30610c: 0x8e270334  lw          $a3, 0x334($s1)
    ctx->pc = 0x30610cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_306110:
    // 0x306110: 0x8ce401e4  lw          $a0, 0x1E4($a3)
    ctx->pc = 0x306110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
label_306114:
    // 0x306114: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_306118:
    if (ctx->pc == 0x306118u) {
        ctx->pc = 0x306118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306114u;
        // 0x306118: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30611Cu;
        goto label_30611c;
    }
    ctx->pc = 0x306114u;
    {
        const bool branch_taken_0x306114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x306118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306114u;
        // 0x306118: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306114) {
            ctx->pc = 0x30612Cu;
            goto label_30612c;
        }
    }
    ctx->pc = 0x30611Cu;
label_30611c:
    // 0x30611c: 0x1000000d  b           . + 4 + (0xD << 2)
label_306120:
    if (ctx->pc == 0x306120u) {
        ctx->pc = 0x306120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30611Cu;
        // 0x306120: 0x3c050031  lui         $a1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306124u;
        goto label_306124;
    }
    ctx->pc = 0x30611Cu;
    {
        const bool branch_taken_0x30611c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30611Cu;
        // 0x306120: 0x3c050031  lui         $a1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30611c) {
            ctx->pc = 0x306154u;
            goto label_306154;
        }
    }
    ctx->pc = 0x306124u;
label_306124:
    // 0x306124: 0x1000000b  b           . + 4 + (0xB << 2)
label_306128:
    if (ctx->pc == 0x306128u) {
        ctx->pc = 0x306128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306124u;
        // 0x306128: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30612Cu;
        goto label_30612c;
    }
    ctx->pc = 0x306124u;
    {
        const bool branch_taken_0x306124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306124u;
        // 0x306128: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306124) {
            ctx->pc = 0x306154u;
            goto label_306154;
        }
    }
    ctx->pc = 0x30612Cu;
label_30612c:
    // 0x30612c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30612cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306130:
    // 0x306130: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x306130u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
label_306134:
    // 0x306134: 0x24e301ec  addiu       $v1, $a3, 0x1EC
    ctx->pc = 0x306134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 492));
label_306138:
    // 0x306138: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x306138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30613c:
    // 0x30613c: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_306140:
    if (ctx->pc == 0x306140u) {
        ctx->pc = 0x306140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30613Cu;
        // 0x306140: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306144u;
        goto label_306144;
    }
    ctx->pc = 0x30613Cu;
    {
        const bool branch_taken_0x30613c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x306140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30613Cu;
        // 0x306140: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30613c) {
            ctx->pc = 0x306124u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306124;
        }
    }
    ctx->pc = 0x306144u;
label_306144:
    // 0x306144: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x306144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_306148:
    // 0x306148: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_30614c:
    if (ctx->pc == 0x30614Cu) {
        ctx->pc = 0x30614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306148u;
        // 0x30614c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306150u;
        goto label_306150;
    }
    ctx->pc = 0x306148u;
    {
        const bool branch_taken_0x306148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306148u;
        // 0x30614c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306148) {
            ctx->pc = 0x306138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306138;
        }
    }
    ctx->pc = 0x306150u;
label_306150:
    // 0x306150: 0x8cf001e8  lw          $s0, 0x1E8($a3)
    ctx->pc = 0x306150u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_306154:
    // 0x306154: 0x24a58058  addiu       $a1, $a1, -0x7FA8
    ctx->pc = 0x306154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934616));
label_306158:
    // 0x306158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x306158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30615c:
    // 0x30615c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x30615cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_306160:
    // 0x306160: 0xc073fde  jal         func_1CFF78
label_306164:
    if (ctx->pc == 0x306164u) {
        ctx->pc = 0x306164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306160u;
        // 0x306164: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306168u;
        goto label_306168;
    }
    ctx->pc = 0x306160u;
    SET_GPR_U32(ctx, 31, 0x306168u);
    ctx->pc = 0x306164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306160u;
    // 0x306164: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x306160u, 0x306168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306168u;
label_306168:
    // 0x306168: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x306168u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30616c:
    // 0x30616c: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x30616cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_306170:
    // 0x306170: 0x8e2311e8  lw          $v1, 0x11E8($s1)
    ctx->pc = 0x306170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_306174:
    // 0x306174: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_306178:
    if (ctx->pc == 0x306178u) {
        ctx->pc = 0x306178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306174u;
        // 0x306178: 0x8c5300c0  lw          $s3, 0xC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30617Cu;
        goto label_30617c;
    }
    ctx->pc = 0x306174u;
    {
        const bool branch_taken_0x306174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x306178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306174u;
        // 0x306178: 0x8c5300c0  lw          $s3, 0xC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306174) {
            ctx->pc = 0x30619Cu;
            goto label_30619c;
        }
    }
    ctx->pc = 0x30617Cu;
label_30617c:
    // 0x30617c: 0x8c6300b8  lw          $v1, 0xB8($v1)
    ctx->pc = 0x30617cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
label_306180:
    // 0x306180: 0x90621430  lbu         $v0, 0x1430($v1)
    ctx->pc = 0x306180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5168)));
label_306184:
    // 0x306184: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_306188:
    if (ctx->pc == 0x306188u) {
        ctx->pc = 0x306188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306184u;
        // 0x306188: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30618Cu;
        goto label_30618c;
    }
    ctx->pc = 0x306184u;
    {
        const bool branch_taken_0x306184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306184u;
        // 0x306188: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306184) {
            ctx->pc = 0x306198u;
            goto label_306198;
        }
    }
    ctx->pc = 0x30618Cu;
label_30618c:
    // 0x30618c: 0xc0be5e2  jal         func_2F9788
label_306190:
    if (ctx->pc == 0x306190u) {
        ctx->pc = 0x306190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30618Cu;
        // 0x306190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306194u;
        goto label_306194;
    }
    ctx->pc = 0x30618Cu;
    SET_GPR_U32(ctx, 31, 0x306194u);
    ctx->pc = 0x306190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30618Cu;
    // 0x306190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9788u, 0x30618Cu, 0x306194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306194u;
label_306194:
    // 0x306194: 0x28440002  slti        $a0, $v0, 0x2
    ctx->pc = 0x306194u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_306198:
    // 0x306198: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x306198u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30619c:
    // 0x30619c: 0xc0b9400  jal         func_2E5000
label_3061a0:
    if (ctx->pc == 0x3061A0u) {
        ctx->pc = 0x3061A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30619Cu;
        // 0x3061a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3061A4u;
        goto label_3061a4;
    }
    ctx->pc = 0x30619Cu;
    SET_GPR_U32(ctx, 31, 0x3061A4u);
    ctx->pc = 0x3061A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30619Cu;
    // 0x3061a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5000u, 0x30619Cu, 0x3061A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3061A4u;
label_3061a4:
    // 0x3061a4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3061a8:
    if (ctx->pc == 0x3061A8u) {
        ctx->pc = 0x3061A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061A4u;
        // 0x3061a8: 0x8e2311e4  lw          $v1, 0x11E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3061ACu;
        goto label_3061ac;
    }
    ctx->pc = 0x3061A4u;
    {
        const bool branch_taken_0x3061a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3061a4) {
            ctx->pc = 0x3061A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3061A4u;
            // 0x3061a8: 0x8e2311e4  lw          $v1, 0x11E4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3061C4u;
            goto label_3061c4;
        }
    }
    ctx->pc = 0x3061ACu;
label_3061ac:
    // 0x3061ac: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
label_3061b0:
    if (ctx->pc == 0x3061B0u) {
        ctx->pc = 0x3061B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061ACu;
        // 0x3061b0: 0x8e2311e4  lw          $v1, 0x11E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3061B4u;
        goto label_3061b4;
    }
    ctx->pc = 0x3061ACu;
    {
        const bool branch_taken_0x3061ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3061ac) {
            ctx->pc = 0x3061B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3061ACu;
            // 0x3061b0: 0x8e2311e4  lw          $v1, 0x11E4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3061C4u;
            goto label_3061c4;
        }
    }
    ctx->pc = 0x3061B4u;
label_3061b4:
    // 0x3061b4: 0xc0c1aa6  jal         func_306A98
label_3061b8:
    if (ctx->pc == 0x3061B8u) {
        ctx->pc = 0x3061B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061B4u;
        // 0x3061b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3061BCu;
        goto label_3061bc;
    }
    ctx->pc = 0x3061B4u;
    SET_GPR_U32(ctx, 31, 0x3061BCu);
    ctx->pc = 0x3061B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3061B4u;
    // 0x3061b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306A98u, 0x3061B4u, 0x3061BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3061BCu;
label_3061bc:
    // 0x3061bc: 0x1000019f  b           . + 4 + (0x19F << 2)
label_3061c0:
    if (ctx->pc == 0x3061C0u) {
        ctx->pc = 0x3061C4u;
        goto label_3061c4;
    }
    ctx->pc = 0x3061BCu;
    {
        const bool branch_taken_0x3061bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3061bc) {
            ctx->pc = 0x30683Cu;
            goto label_30683c;
        }
    }
    ctx->pc = 0x3061C4u;
label_3061c4:
    // 0x3061c4: 0x1060018b  beqz        $v1, . + 4 + (0x18B << 2)
label_3061c8:
    if (ctx->pc == 0x3061C8u) {
        ctx->pc = 0x3061C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061C4u;
        // 0x3061c8: 0x2402078e  addiu       $v0, $zero, 0x78E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1934));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3061CCu;
        goto label_3061cc;
    }
    ctx->pc = 0x3061C4u;
    {
        const bool branch_taken_0x3061c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3061C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061C4u;
        // 0x3061c8: 0x2402078e  addiu       $v0, $zero, 0x78E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1934));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3061c4) {
            ctx->pc = 0x3067F4u;
            goto label_3067f4;
        }
    }
    ctx->pc = 0x3061CCu;
label_3061cc:
    // 0x3061cc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3061ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3061d0:
    // 0x3061d0: 0x1262003a  beq         $s3, $v0, . + 4 + (0x3A << 2)
label_3061d4:
    if (ctx->pc == 0x3061D4u) {
        ctx->pc = 0x3061D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061D0u;
        // 0x3061d4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3061D8u;
        goto label_3061d8;
    }
    ctx->pc = 0x3061D0u;
    {
        const bool branch_taken_0x3061d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x3061D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061D0u;
        // 0x3061d4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3061d0) {
            ctx->pc = 0x3062BCu;
            goto label_3062bc;
        }
    }
    ctx->pc = 0x3061D8u;
label_3061d8:
    // 0x3061d8: 0x2a62078f  slti        $v0, $s3, 0x78F
    ctx->pc = 0x3061d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1935) ? 1 : 0);
label_3061dc:
    // 0x3061dc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3061e0:
    if (ctx->pc == 0x3061E0u) {
        ctx->pc = 0x3061E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061DCu;
        // 0x3061e0: 0x2402078b  addiu       $v0, $zero, 0x78B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1931));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3061E4u;
        goto label_3061e4;
    }
    ctx->pc = 0x3061DCu;
    {
        const bool branch_taken_0x3061dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3061E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061DCu;
        // 0x3061e0: 0x2402078b  addiu       $v0, $zero, 0x78B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1931));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3061dc) {
            ctx->pc = 0x306220u;
            goto label_306220;
        }
    }
    ctx->pc = 0x3061E4u;
label_3061e4:
    // 0x3061e4: 0x1262002c  beq         $s3, $v0, . + 4 + (0x2C << 2)
label_3061e8:
    if (ctx->pc == 0x3061E8u) {
        ctx->pc = 0x3061E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061E4u;
        // 0x3061e8: 0x2a62078c  slti        $v0, $s3, 0x78C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1932) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3061ECu;
        goto label_3061ec;
    }
    ctx->pc = 0x3061E4u;
    {
        const bool branch_taken_0x3061e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x3061E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061E4u;
        // 0x3061e8: 0x2a62078c  slti        $v0, $s3, 0x78C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1932) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3061e4) {
            ctx->pc = 0x306298u;
            goto label_306298;
        }
    }
    ctx->pc = 0x3061ECu;
label_3061ec:
    // 0x3061ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3061f0:
    if (ctx->pc == 0x3061F0u) {
        ctx->pc = 0x3061F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061ECu;
        // 0x3061f0: 0x24020690  addiu       $v0, $zero, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3061F4u;
        goto label_3061f4;
    }
    ctx->pc = 0x3061ECu;
    {
        const bool branch_taken_0x3061ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3061F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061ECu;
        // 0x3061f0: 0x24020690  addiu       $v0, $zero, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3061ec) {
            ctx->pc = 0x306204u;
            goto label_306204;
        }
    }
    ctx->pc = 0x3061F4u;
label_3061f4:
    // 0x3061f4: 0x5262001c  beql        $s3, $v0, . + 4 + (0x1C << 2)
label_3061f8:
    if (ctx->pc == 0x3061F8u) {
        ctx->pc = 0x3061F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061F4u;
        // 0x3061f8: 0x8c640194  lw          $a0, 0x194($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3061FCu;
        goto label_3061fc;
    }
    ctx->pc = 0x3061F4u;
    {
        const bool branch_taken_0x3061f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x3061f4) {
            ctx->pc = 0x3061F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3061F4u;
            // 0x3061f8: 0x8c640194  lw          $a0, 0x194($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306268u;
            goto label_306268;
        }
    }
    ctx->pc = 0x3061FCu;
label_3061fc:
    // 0x3061fc: 0x1000004f  b           . + 4 + (0x4F << 2)
label_306200:
    if (ctx->pc == 0x306200u) {
        ctx->pc = 0x306204u;
        goto label_306204;
    }
    ctx->pc = 0x3061FCu;
    {
        const bool branch_taken_0x3061fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3061fc) {
            ctx->pc = 0x30633Cu;
            goto label_30633c;
        }
    }
    ctx->pc = 0x306204u;
label_306204:
    // 0x306204: 0x2402078c  addiu       $v0, $zero, 0x78C
    ctx->pc = 0x306204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1932));
label_306208:
    // 0x306208: 0x12620027  beq         $s3, $v0, . + 4 + (0x27 << 2)
label_30620c:
    if (ctx->pc == 0x30620Cu) {
        ctx->pc = 0x30620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306208u;
        // 0x30620c: 0x2402078d  addiu       $v0, $zero, 0x78D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1933));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306210u;
        goto label_306210;
    }
    ctx->pc = 0x306208u;
    {
        const bool branch_taken_0x306208 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x30620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306208u;
        // 0x30620c: 0x2402078d  addiu       $v0, $zero, 0x78D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1933));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306208) {
            ctx->pc = 0x3062A8u;
            goto label_3062a8;
        }
    }
    ctx->pc = 0x306210u;
label_306210:
    // 0x306210: 0x1262002a  beq         $s3, $v0, . + 4 + (0x2A << 2)
label_306214:
    if (ctx->pc == 0x306214u) {
        ctx->pc = 0x306218u;
        goto label_306218;
    }
    ctx->pc = 0x306210u;
    {
        const bool branch_taken_0x306210 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x306210) {
            ctx->pc = 0x3062BCu;
            goto label_3062bc;
        }
    }
    ctx->pc = 0x306218u;
label_306218:
    // 0x306218: 0x10000048  b           . + 4 + (0x48 << 2)
label_30621c:
    if (ctx->pc == 0x30621Cu) {
        ctx->pc = 0x306220u;
        goto label_306220;
    }
    ctx->pc = 0x306218u;
    {
        const bool branch_taken_0x306218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306218) {
            ctx->pc = 0x30633Cu;
            goto label_30633c;
        }
    }
    ctx->pc = 0x306220u;
label_306220:
    // 0x306220: 0x24020791  addiu       $v0, $zero, 0x791
    ctx->pc = 0x306220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1937));
label_306224:
    // 0x306224: 0x12620045  beq         $s3, $v0, . + 4 + (0x45 << 2)
label_306228:
    if (ctx->pc == 0x306228u) {
        ctx->pc = 0x306228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306224u;
        // 0x306228: 0x2a620792  slti        $v0, $s3, 0x792 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1938) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30622Cu;
        goto label_30622c;
    }
    ctx->pc = 0x306224u;
    {
        const bool branch_taken_0x306224 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x306228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306224u;
        // 0x306228: 0x2a620792  slti        $v0, $s3, 0x792 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1938) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x306224) {
            ctx->pc = 0x30633Cu;
            goto label_30633c;
        }
    }
    ctx->pc = 0x30622Cu;
label_30622c:
    // 0x30622c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_306230:
    if (ctx->pc == 0x306230u) {
        ctx->pc = 0x306230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30622Cu;
        // 0x306230: 0x2402078f  addiu       $v0, $zero, 0x78F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1935));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306234u;
        goto label_306234;
    }
    ctx->pc = 0x30622Cu;
    {
        const bool branch_taken_0x30622c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30622Cu;
        // 0x306230: 0x2402078f  addiu       $v0, $zero, 0x78F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1935));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30622c) {
            ctx->pc = 0x30624Cu;
            goto label_30624c;
        }
    }
    ctx->pc = 0x306234u;
label_306234:
    // 0x306234: 0x12620027  beq         $s3, $v0, . + 4 + (0x27 << 2)
label_306238:
    if (ctx->pc == 0x306238u) {
        ctx->pc = 0x306238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306234u;
        // 0x306238: 0x24020790  addiu       $v0, $zero, 0x790 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30623Cu;
        goto label_30623c;
    }
    ctx->pc = 0x306234u;
    {
        const bool branch_taken_0x306234 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x306238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306234u;
        // 0x306238: 0x24020790  addiu       $v0, $zero, 0x790 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306234) {
            ctx->pc = 0x3062D4u;
            goto label_3062d4;
        }
    }
    ctx->pc = 0x30623Cu;
label_30623c:
    // 0x30623c: 0x5262002a  beql        $s3, $v0, . + 4 + (0x2A << 2)
label_306240:
    if (ctx->pc == 0x306240u) {
        ctx->pc = 0x306240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30623Cu;
        // 0x306240: 0xc601001c  lwc1        $f1, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x306244u;
        goto label_306244;
    }
    ctx->pc = 0x30623Cu;
    {
        const bool branch_taken_0x30623c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x30623c) {
            ctx->pc = 0x306240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30623Cu;
            // 0x306240: 0xc601001c  lwc1        $f1, 0x1C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3062E8u;
            goto label_3062e8;
        }
    }
    ctx->pc = 0x306244u;
label_306244:
    // 0x306244: 0x1000003d  b           . + 4 + (0x3D << 2)
label_306248:
    if (ctx->pc == 0x306248u) {
        ctx->pc = 0x30624Cu;
        goto label_30624c;
    }
    ctx->pc = 0x306244u;
    {
        const bool branch_taken_0x306244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306244) {
            ctx->pc = 0x30633Cu;
            goto label_30633c;
        }
    }
    ctx->pc = 0x30624Cu;
label_30624c:
    // 0x30624c: 0x24020792  addiu       $v0, $zero, 0x792
    ctx->pc = 0x30624cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1938));
label_306250:
    // 0x306250: 0x12620032  beq         $s3, $v0, . + 4 + (0x32 << 2)
label_306254:
    if (ctx->pc == 0x306254u) {
        ctx->pc = 0x306254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306250u;
        // 0x306254: 0x24020793  addiu       $v0, $zero, 0x793 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1939));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306258u;
        goto label_306258;
    }
    ctx->pc = 0x306250u;
    {
        const bool branch_taken_0x306250 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x306254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306250u;
        // 0x306254: 0x24020793  addiu       $v0, $zero, 0x793 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1939));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306250) {
            ctx->pc = 0x30631Cu;
            goto label_30631c;
        }
    }
    ctx->pc = 0x306258u;
label_306258:
    // 0x306258: 0x12620035  beq         $s3, $v0, . + 4 + (0x35 << 2)
label_30625c:
    if (ctx->pc == 0x30625Cu) {
        ctx->pc = 0x306260u;
        goto label_306260;
    }
    ctx->pc = 0x306258u;
    {
        const bool branch_taken_0x306258 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x306258) {
            ctx->pc = 0x306330u;
            goto label_306330;
        }
    }
    ctx->pc = 0x306260u;
label_306260:
    // 0x306260: 0x10000036  b           . + 4 + (0x36 << 2)
label_306264:
    if (ctx->pc == 0x306264u) {
        ctx->pc = 0x306268u;
        goto label_306268;
    }
    ctx->pc = 0x306260u;
    {
        const bool branch_taken_0x306260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306260) {
            ctx->pc = 0x30633Cu;
            goto label_30633c;
        }
    }
    ctx->pc = 0x306268u;
label_306268:
    // 0x306268: 0xc073e86  jal         func_1CFA18
label_30626c:
    if (ctx->pc == 0x30626Cu) {
        ctx->pc = 0x30626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306268u;
        // 0x30626c: 0xc60c001c  lwc1        $f12, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x306270u;
        goto label_306270;
    }
    ctx->pc = 0x306268u;
    SET_GPR_U32(ctx, 31, 0x306270u);
    ctx->pc = 0x30626Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306268u;
    // 0x30626c: 0xc60c001c  lwc1        $f12, 0x1C($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x306268u, 0x306270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306270u;
label_306270:
    // 0x306270: 0x8e2211e4  lw          $v0, 0x11E4($s1)
    ctx->pc = 0x306270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
label_306274:
    // 0x306274: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x306274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306278:
    // 0x306278: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x306278u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_30627c:
    // 0x30627c: 0xc073f08  jal         func_1CFC20
label_306280:
    if (ctx->pc == 0x306280u) {
        ctx->pc = 0x306280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30627Cu;
        // 0x306280: 0x8c440194  lw          $a0, 0x194($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306284u;
        goto label_306284;
    }
    ctx->pc = 0x30627Cu;
    SET_GPR_U32(ctx, 31, 0x306284u);
    ctx->pc = 0x306280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30627Cu;
    // 0x306280: 0x8c440194  lw          $a0, 0x194($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x30627Cu, 0x306284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306284u;
label_306284:
    // 0x306284: 0xc083faa  jal         func_20FEA8
label_306288:
    if (ctx->pc == 0x306288u) {
        ctx->pc = 0x306288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306284u;
        // 0x306288: 0x8e2411e4  lw          $a0, 0x11E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30628Cu;
        goto label_30628c;
    }
    ctx->pc = 0x306284u;
    SET_GPR_U32(ctx, 31, 0x30628Cu);
    ctx->pc = 0x306288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306284u;
    // 0x306288: 0x8e2411e4  lw          $a0, 0x11E4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FEA8u, 0x306284u, 0x30628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30628Cu;
label_30628c:
    // 0x30628c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30628cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_306290:
    // 0x306290: 0xc08bd96  jal         func_22F658
label_306294:
    if (ctx->pc == 0x306294u) {
        ctx->pc = 0x306294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306290u;
        // 0x306294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306298u;
        goto label_306298;
    }
    ctx->pc = 0x306290u;
    SET_GPR_U32(ctx, 31, 0x306298u);
    ctx->pc = 0x306294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306290u;
    // 0x306294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x306290u, 0x306298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306298u;
label_306298:
    // 0x306298: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x306298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_30629c:
    // 0x30629c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x30629cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3062a0:
    // 0x3062a0: 0x10000026  b           . + 4 + (0x26 << 2)
label_3062a4:
    if (ctx->pc == 0x3062A4u) {
        ctx->pc = 0x3062A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062A0u;
        // 0x3062a4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3062A8u;
        goto label_3062a8;
    }
    ctx->pc = 0x3062A0u;
    {
        const bool branch_taken_0x3062a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3062A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062A0u;
        // 0x3062a4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3062a0) {
            ctx->pc = 0x30633Cu;
            goto label_30633c;
        }
    }
    ctx->pc = 0x3062A8u;
label_3062a8:
    // 0x3062a8: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3062a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3062ac:
    // 0x3062ac: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3062acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3062b0:
    // 0x3062b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3062b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3062b4:
    // 0x3062b4: 0x10000021  b           . + 4 + (0x21 << 2)
label_3062b8:
    if (ctx->pc == 0x3062B8u) {
        ctx->pc = 0x3062B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062B4u;
        // 0x3062b8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3062BCu;
        goto label_3062bc;
    }
    ctx->pc = 0x3062B4u;
    {
        const bool branch_taken_0x3062b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3062B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062B4u;
        // 0x3062b8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3062b4) {
            ctx->pc = 0x30633Cu;
            goto label_30633c;
        }
    }
    ctx->pc = 0x3062BCu;
label_3062bc:
    // 0x3062bc: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x3062bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_3062c0:
    // 0x3062c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3062c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3062c4:
    // 0x3062c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3062c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3062c8:
    // 0x3062c8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3062c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3062cc:
    // 0x3062cc: 0x1000001b  b           . + 4 + (0x1B << 2)
label_3062d0:
    if (ctx->pc == 0x3062D0u) {
        ctx->pc = 0x3062D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062CCu;
        // 0x3062d0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3062D4u;
        goto label_3062d4;
    }
    ctx->pc = 0x3062CCu;
    {
        const bool branch_taken_0x3062cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3062D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062CCu;
        // 0x3062d0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3062cc) {
            ctx->pc = 0x30633Cu;
            goto label_30633c;
        }
    }
    ctx->pc = 0x3062D4u;
label_3062d4:
    // 0x3062d4: 0x3c013f95  lui         $at, 0x3F95
    ctx->pc = 0x3062d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16277 << 16));
label_3062d8:
    // 0x3062d8: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x3062d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
label_3062dc:
    // 0x3062dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3062dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3062e0:
    // 0x3062e0: 0x10000016  b           . + 4 + (0x16 << 2)
label_3062e4:
    if (ctx->pc == 0x3062E4u) {
        ctx->pc = 0x3062E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062E0u;
        // 0x3062e4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3062E8u;
        goto label_3062e8;
    }
    ctx->pc = 0x3062E0u;
    {
        const bool branch_taken_0x3062e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3062E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062E0u;
        // 0x3062e4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3062e0) {
            ctx->pc = 0x30633Cu;
            goto label_30633c;
        }
    }
    ctx->pc = 0x3062E8u;
label_3062e8:
    // 0x3062e8: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x3062e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_3062ec:
    // 0x3062ec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3062ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3062f0:
    // 0x3062f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3062f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3062f4:
    // 0x3062f4: 0x0  nop
    ctx->pc = 0x3062f4u;
    // NOP
label_3062f8:
    // 0x3062f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3062f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3062fc:
    // 0x3062fc: 0x0  nop
    ctx->pc = 0x3062fcu;
    // NOP
label_306300:
    // 0x306300: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_306304:
    if (ctx->pc == 0x306304u) {
        ctx->pc = 0x306304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306300u;
        // 0x306304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306308u;
        goto label_306308;
    }
    ctx->pc = 0x306300u;
    {
        const bool branch_taken_0x306300 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x306304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306300u;
        // 0x306304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306300) {
            ctx->pc = 0x306310u;
            goto label_306310;
        }
    }
    ctx->pc = 0x306308u;
label_306308:
    // 0x306308: 0xc08e40c  jal         func_239030
label_30630c:
    if (ctx->pc == 0x30630Cu) {
        ctx->pc = 0x30630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306308u;
        // 0x30630c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306310u;
        goto label_306310;
    }
    ctx->pc = 0x306308u;
    SET_GPR_U32(ctx, 31, 0x306310u);
    ctx->pc = 0x30630Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306308u;
    // 0x30630c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239030u, 0x306308u, 0x306310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306310u;
label_306310:
    // 0x306310: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x306310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_306314:
    // 0x306314: 0x10000009  b           . + 4 + (0x9 << 2)
label_306318:
    if (ctx->pc == 0x306318u) {
        ctx->pc = 0x306318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306314u;
        // 0x306318: 0xc4540010  lwc1        $f20, 0x10($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x30631Cu;
        goto label_30631c;
    }
    ctx->pc = 0x306314u;
    {
        const bool branch_taken_0x306314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306314u;
        // 0x306318: 0xc4540010  lwc1        $f20, 0x10($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x306314) {
            ctx->pc = 0x30633Cu;
            goto label_30633c;
        }
    }
    ctx->pc = 0x30631Cu;
label_30631c:
    // 0x30631c: 0x3c013e08  lui         $at, 0x3E08
    ctx->pc = 0x30631cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15880 << 16));
label_306320:
    // 0x306320: 0x34213127  ori         $at, $at, 0x3127
    ctx->pc = 0x306320u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12583);
label_306324:
    // 0x306324: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x306324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_306328:
    // 0x306328: 0x10000004  b           . + 4 + (0x4 << 2)
label_30632c:
    if (ctx->pc == 0x30632Cu) {
        ctx->pc = 0x306330u;
        goto label_306330;
    }
    ctx->pc = 0x306328u;
    {
        const bool branch_taken_0x306328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306328) {
            ctx->pc = 0x30633Cu;
            goto label_30633c;
        }
    }
    ctx->pc = 0x306330u;
label_306330:
    // 0x306330: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x306330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_306334:
    // 0x306334: 0x3421b368  ori         $at, $at, 0xB368
    ctx->pc = 0x306334u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45928);
label_306338:
    // 0x306338: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x306338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_30633c:
    // 0x30633c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30633cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306340:
    // 0x306340: 0x0  nop
    ctx->pc = 0x306340u;
    // NOP
label_306344:
    // 0x306344: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x306344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_306348:
    // 0x306348: 0x0  nop
    ctx->pc = 0x306348u;
    // NOP
label_30634c:
    // 0x30634c: 0x45020124  bc1fl       . + 4 + (0x124 << 2)
label_306350:
    if (ctx->pc == 0x306350u) {
        ctx->pc = 0x306350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30634Cu;
        // 0x306350: 0x8e2311c0  lw          $v1, 0x11C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306354u;
        goto label_306354;
    }
    ctx->pc = 0x30634Cu;
    {
        const bool branch_taken_0x30634c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30634c) {
            ctx->pc = 0x306350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30634Cu;
            // 0x306350: 0x8e2311c0  lw          $v1, 0x11C0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3067E0u;
            goto label_3067e0;
        }
    }
    ctx->pc = 0x306354u;
label_306354:
    // 0x306354: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x306354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_306358:
    // 0x306358: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x306358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30635c:
    // 0x30635c: 0x0  nop
    ctx->pc = 0x30635cu;
    // NOP
label_306360:
    // 0x306360: 0x4500011e  bc1f        . + 4 + (0x11E << 2)
label_306364:
    if (ctx->pc == 0x306364u) {
        ctx->pc = 0x306364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306360u;
        // 0x306364: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306368u;
        goto label_306368;
    }
    ctx->pc = 0x306360u;
    {
        const bool branch_taken_0x306360 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x306364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306360u;
        // 0x306364: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306360) {
            ctx->pc = 0x3067DCu;
            goto label_3067dc;
        }
    }
    ctx->pc = 0x306368u;
label_306368:
    // 0x306368: 0x8e2411c0  lw          $a0, 0x11C0($s1)
    ctx->pc = 0x306368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_30636c:
    // 0x30636c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x30636cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_306370:
    // 0x306370: 0x504300b4  beql        $v0, $v1, . + 4 + (0xB4 << 2)
label_306374:
    if (ctx->pc == 0x306374u) {
        ctx->pc = 0x306374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306370u;
        // 0x306374: 0x2402078b  addiu       $v0, $zero, 0x78B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1931));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306378u;
        goto label_306378;
    }
    ctx->pc = 0x306370u;
    {
        const bool branch_taken_0x306370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x306370) {
            ctx->pc = 0x306374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306370u;
            // 0x306374: 0x2402078b  addiu       $v0, $zero, 0x78B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1931));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306644u;
            goto label_306644;
        }
    }
    ctx->pc = 0x306378u;
label_306378:
    // 0x306378: 0x52a000ac  beql        $s5, $zero, . + 4 + (0xAC << 2)
label_30637c:
    if (ctx->pc == 0x30637Cu) {
        ctx->pc = 0x30637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306378u;
        // 0x30637c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306380u;
        goto label_306380;
    }
    ctx->pc = 0x306378u;
    {
        const bool branch_taken_0x306378 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x306378) {
            ctx->pc = 0x30637Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306378u;
            // 0x30637c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30662Cu;
            goto label_30662c;
        }
    }
    ctx->pc = 0x306380u;
label_306380:
    // 0x306380: 0x8e3211e4  lw          $s2, 0x11E4($s1)
    ctx->pc = 0x306380u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
label_306384:
    // 0x306384: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x306384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_306388:
    // 0x306388: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x306388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_30638c:
    // 0x30638c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x30638cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_306390:
    // 0x306390: 0x54400089  bnel        $v0, $zero, . + 4 + (0x89 << 2)
label_306394:
    if (ctx->pc == 0x306394u) {
        ctx->pc = 0x306394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306390u;
        // 0x306394: 0x8e420104  lw          $v0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306398u;
        goto label_306398;
    }
    ctx->pc = 0x306390u;
    {
        const bool branch_taken_0x306390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306390) {
            ctx->pc = 0x306394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306390u;
            // 0x306394: 0x8e420104  lw          $v0, 0x104($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3065B8u;
            goto label_3065b8;
        }
    }
    ctx->pc = 0x306398u;
label_306398:
    // 0x306398: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x306398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_30639c:
    // 0x30639c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x30639cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3063a0:
    // 0x3063a0: 0xc069cfe  jal         func_1A73F8
label_3063a4:
    if (ctx->pc == 0x3063A4u) {
        ctx->pc = 0x3063A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063A0u;
        // 0x3063a4: 0xae5103a4  sw          $s1, 0x3A4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 932), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3063A8u;
        goto label_3063a8;
    }
    ctx->pc = 0x3063A0u;
    SET_GPR_U32(ctx, 31, 0x3063A8u);
    ctx->pc = 0x3063A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3063A0u;
    // 0x3063a4: 0xae5103a4  sw          $s1, 0x3A4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 932), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A73F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A73F8u, 0x3063A0u, 0x3063A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3063A8u;
label_3063a8:
    // 0x3063a8: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x3063a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_3063ac:
    // 0x3063ac: 0xc06a23e  jal         func_1A88F8
label_3063b0:
    if (ctx->pc == 0x3063B0u) {
        ctx->pc = 0x3063B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063ACu;
        // 0x3063b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3063B4u;
        goto label_3063b4;
    }
    ctx->pc = 0x3063ACu;
    SET_GPR_U32(ctx, 31, 0x3063B4u);
    ctx->pc = 0x3063B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3063ACu;
    // 0x3063b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x3063ACu, 0x3063B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3063B4u;
label_3063b4:
    // 0x3063b4: 0xc06a328  jal         func_1A8CA0
label_3063b8:
    if (ctx->pc == 0x3063B8u) {
        ctx->pc = 0x3063B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063B4u;
        // 0x3063b8: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3063BCu;
        goto label_3063bc;
    }
    ctx->pc = 0x3063B4u;
    SET_GPR_U32(ctx, 31, 0x3063BCu);
    ctx->pc = 0x3063B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3063B4u;
    // 0x3063b8: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x3063B4u, 0x3063BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3063BCu;
label_3063bc:
    // 0x3063bc: 0x8e440110  lw          $a0, 0x110($s2)
    ctx->pc = 0x3063bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
label_3063c0:
    // 0x3063c0: 0xc0757d2  jal         func_1D5F48
label_3063c4:
    if (ctx->pc == 0x3063C4u) {
        ctx->pc = 0x3063C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063C0u;
        // 0x3063c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3063C8u;
        goto label_3063c8;
    }
    ctx->pc = 0x3063C0u;
    SET_GPR_U32(ctx, 31, 0x3063C8u);
    ctx->pc = 0x3063C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3063C0u;
    // 0x3063c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F48u, 0x3063C0u, 0x3063C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3063C8u;
label_3063c8:
    // 0x3063c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3063c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3063cc:
    // 0x3063cc: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x3063ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
label_3063d0:
    // 0x3063d0: 0xc08fed2  jal         func_23FB48
label_3063d4:
    if (ctx->pc == 0x3063D4u) {
        ctx->pc = 0x3063D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063D0u;
        // 0x3063d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3063D8u;
        goto label_3063d8;
    }
    ctx->pc = 0x3063D0u;
    SET_GPR_U32(ctx, 31, 0x3063D8u);
    ctx->pc = 0x3063D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3063D0u;
    // 0x3063d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x3063D0u, 0x3063D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3063D8u;
label_3063d8:
    // 0x3063d8: 0x2402078b  addiu       $v0, $zero, 0x78B
    ctx->pc = 0x3063d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1931));
label_3063dc:
    // 0x3063dc: 0x1262006e  beq         $s3, $v0, . + 4 + (0x6E << 2)
label_3063e0:
    if (ctx->pc == 0x3063E0u) {
        ctx->pc = 0x3063E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063DCu;
        // 0x3063e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3063E4u;
        goto label_3063e4;
    }
    ctx->pc = 0x3063DCu;
    {
        const bool branch_taken_0x3063dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x3063E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063DCu;
        // 0x3063e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3063dc) {
            ctx->pc = 0x306598u;
            goto label_306598;
        }
    }
    ctx->pc = 0x3063E4u;
label_3063e4:
    // 0x3063e4: 0xc0f6a96  jal         func_3DAA58
label_3063e8:
    if (ctx->pc == 0x3063E8u) {
        ctx->pc = 0x3063E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063E4u;
        // 0x3063e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3063ECu;
        goto label_3063ec;
    }
    ctx->pc = 0x3063E4u;
    SET_GPR_U32(ctx, 31, 0x3063ECu);
    ctx->pc = 0x3063E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3063E4u;
    // 0x3063e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3063E4u, 0x3063ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3063ECu;
label_3063ec:
    // 0x3063ec: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_3063f0:
    if (ctx->pc == 0x3063F0u) {
        ctx->pc = 0x3063F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063ECu;
        // 0x3063f0: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3063F4u;
        goto label_3063f4;
    }
    ctx->pc = 0x3063ECu;
    {
        const bool branch_taken_0x3063ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3063F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063ECu;
        // 0x3063f0: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3063ec) {
            ctx->pc = 0x3063FCu;
            goto label_3063fc;
        }
    }
    ctx->pc = 0x3063F4u;
label_3063f4:
    // 0x3063f4: 0x10000003  b           . + 4 + (0x3 << 2)
label_3063f8:
    if (ctx->pc == 0x3063F8u) {
        ctx->pc = 0x3063F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063F4u;
        // 0x3063f8: 0x24424d90  addiu       $v0, $v0, 0x4D90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3063FCu;
        goto label_3063fc;
    }
    ctx->pc = 0x3063F4u;
    {
        const bool branch_taken_0x3063f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3063F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063F4u;
        // 0x3063f8: 0x24424d90  addiu       $v0, $v0, 0x4D90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3063f4) {
            ctx->pc = 0x306404u;
            goto label_306404;
        }
    }
    ctx->pc = 0x3063FCu;
label_3063fc:
    // 0x3063fc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x3063fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_306400:
    // 0x306400: 0x24424d80  addiu       $v0, $v0, 0x4D80
    ctx->pc = 0x306400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19840));
label_306404:
    // 0x306404: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x306404u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_306408:
    // 0x306408: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x306408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_30640c:
    // 0x30640c: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x30640cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_306410:
    // 0x306410: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x306410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_306414:
    // 0x306414: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x306414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306418:
    // 0x306418: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x306418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_30641c:
    // 0x30641c: 0x24640050  addiu       $a0, $v1, 0x50
    ctx->pc = 0x30641cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_306420:
    // 0x306420: 0x24650060  addiu       $a1, $v1, 0x60
    ctx->pc = 0x306420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_306424:
    // 0x306424: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x306424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_306428:
    // 0x306428: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x306428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_30642c:
    // 0x30642c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x30642cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306430:
    // 0x306430: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x306430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_306434:
    // 0x306434: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x306434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_306438:
    // 0x306438: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x306438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_30643c:
    // 0x30643c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x30643cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306440:
    // 0x306440: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x306440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_306444:
    // 0x306444: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x306444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_306448:
    // 0x306448: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x306448u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_30644c:
    // 0x30644c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x30644cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306450:
    // 0x306450: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x306450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_306454:
    // 0x306454: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x306454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_306458:
    // 0x306458: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x306458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_30645c:
    // 0x30645c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x30645cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306460:
    // 0x306460: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x306460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_306464:
    // 0x306464: 0xc4610060  lwc1        $f1, 0x60($v1)
    ctx->pc = 0x306464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_306468:
    // 0x306468: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x306468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_30646c:
    // 0x30646c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x30646cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306470:
    // 0x306470: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x306470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_306474:
    // 0x306474: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x306474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_306478:
    // 0x306478: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x306478u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_30647c:
    // 0x30647c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x30647cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306480:
    // 0x306480: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x306480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_306484:
    // 0x306484: 0xc4610070  lwc1        $f1, 0x70($v1)
    ctx->pc = 0x306484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_306488:
    // 0x306488: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x306488u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_30648c:
    // 0x30648c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x30648cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306490:
    // 0x306490: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x306490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_306494:
    // 0x306494: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x306494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_306498:
    // 0x306498: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x306498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_30649c:
    // 0x30649c: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x30649cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3064a0:
    // 0x3064a0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3064a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_3064a4:
    // 0x3064a4: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x3064a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_3064a8:
    // 0x3064a8: 0x904201a4  lbu         $v0, 0x1A4($v0)
    ctx->pc = 0x3064a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 420)));
label_3064ac:
    // 0x3064ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3064b0:
    if (ctx->pc == 0x3064B0u) {
        ctx->pc = 0x3064B4u;
        goto label_3064b4;
    }
    ctx->pc = 0x3064ACu;
    {
        const bool branch_taken_0x3064ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3064ac) {
            ctx->pc = 0x3064BCu;
            goto label_3064bc;
        }
    }
    ctx->pc = 0x3064B4u;
label_3064b4:
    // 0x3064b4: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
label_3064b8:
    if (ctx->pc == 0x3064B8u) {
        ctx->pc = 0x3064B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064B4u;
        // 0x3064b8: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3064BCu;
        goto label_3064bc;
    }
    ctx->pc = 0x3064B4u;
    {
        const bool branch_taken_0x3064b4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3064B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064B4u;
        // 0x3064b8: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3064b4) {
            ctx->pc = 0x3064D0u;
            goto label_3064d0;
        }
    }
    ctx->pc = 0x3064BCu;
label_3064bc:
    // 0x3064bc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_3064c0:
    if (ctx->pc == 0x3064C0u) {
        ctx->pc = 0x3064C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064BCu;
        // 0x3064c0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3064C4u;
        goto label_3064c4;
    }
    ctx->pc = 0x3064BCu;
    {
        const bool branch_taken_0x3064bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3064C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064BCu;
        // 0x3064c0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3064bc) {
            ctx->pc = 0x3064ECu;
            goto label_3064ec;
        }
    }
    ctx->pc = 0x3064C4u;
label_3064c4:
    // 0x3064c4: 0x5680000a  bnel        $s4, $zero, . + 4 + (0xA << 2)
label_3064c8:
    if (ctx->pc == 0x3064C8u) {
        ctx->pc = 0x3064C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064C4u;
        // 0x3064c8: 0x8e420334  lw          $v0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3064CCu;
        goto label_3064cc;
    }
    ctx->pc = 0x3064C4u;
    {
        const bool branch_taken_0x3064c4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x3064c4) {
            ctx->pc = 0x3064C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3064C4u;
            // 0x3064c8: 0x8e420334  lw          $v0, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3064F0u;
            goto label_3064f0;
        }
    }
    ctx->pc = 0x3064CCu;
label_3064cc:
    // 0x3064cc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3064ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3064d0:
    // 0x3064d0: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x3064d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_3064d4:
    // 0x3064d4: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x3064d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_3064d8:
    // 0x3064d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3064d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3064dc:
    // 0x3064dc: 0x24a55b40  addiu       $a1, $a1, 0x5B40
    ctx->pc = 0x3064dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23360));
label_3064e0:
    // 0x3064e0: 0xc0b15e8  jal         func_2C57A0
label_3064e4:
    if (ctx->pc == 0x3064E4u) {
        ctx->pc = 0x3064E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064E0u;
        // 0x3064e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3064E8u;
        goto label_3064e8;
    }
    ctx->pc = 0x3064E0u;
    SET_GPR_U32(ctx, 31, 0x3064E8u);
    ctx->pc = 0x3064E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3064E0u;
    // 0x3064e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C57A0u, 0x3064E0u, 0x3064E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3064E8u;
label_3064e8:
    // 0x3064e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3064e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3064ec:
    // 0x3064ec: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x3064ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_3064f0:
    // 0x3064f0: 0x904301a4  lbu         $v1, 0x1A4($v0)
    ctx->pc = 0x3064f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 420)));
label_3064f4:
    // 0x3064f4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_3064f8:
    if (ctx->pc == 0x3064F8u) {
        ctx->pc = 0x3064F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064F4u;
        // 0x3064f8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3064FCu;
        goto label_3064fc;
    }
    ctx->pc = 0x3064F4u;
    {
        const bool branch_taken_0x3064f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3064F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064F4u;
        // 0x3064f8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3064f4) {
            ctx->pc = 0x306534u;
            goto label_306534;
        }
    }
    ctx->pc = 0x3064FCu;
label_3064fc:
    // 0x3064fc: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x3064fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_306500:
    // 0x306500: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x306500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_306504:
    // 0x306504: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x306504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306508:
    // 0x306508: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x306508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30650c:
    // 0x30650c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x30650cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_306510:
    // 0x306510: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x306510u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_306514:
    // 0x306514: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x306514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_306518:
    // 0x306518: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x306518u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_30651c:
    // 0x30651c: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x30651cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_306520:
    // 0x306520: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x306520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_306524:
    // 0x306524: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x306524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_306528:
    // 0x306528: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x306528u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_30652c:
    // 0x30652c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x30652cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_306530:
    // 0x306530: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x306530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_306534:
    // 0x306534: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x306534u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_306538:
    // 0x306538: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x306538u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_30653c:
    // 0x30653c: 0xd8a30010  lqc2        $vf3, 0x10($a1)
    ctx->pc = 0x30653cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_306540:
    // 0x306540: 0xd8a40020  lqc2        $vf4, 0x20($a1)
    ctx->pc = 0x306540u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_306544:
    // 0x306544: 0xd8a50030  lqc2        $vf5, 0x30($a1)
    ctx->pc = 0x306544u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_306548:
    // 0x306548: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x306548u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_30654c:
    // 0x30654c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x30654cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_306550:
    // 0x306550: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x306550u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_306554:
    // 0x306554: 0xfba50040  sqc2        $vf5, 0x40($sp)
    ctx->pc = 0x306554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[5]));
label_306558:
    // 0x306558: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x306558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_30655c:
    // 0x30655c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_306560:
    // 0x306560: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x306560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_306564:
    // 0x306564: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x306564u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_306568:
    // 0x306568: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x306568u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_30656c:
    // 0x30656c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x30656cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_306570:
    // 0x306570: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x306570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_306574:
    // 0x306574: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x306574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_306578:
    // 0x306578: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x306578u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_30657c:
    // 0x30657c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30657cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_306580:
    // 0x306580: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_306584:
    // 0x306584: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x306584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306588:
    // 0x306588: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x306588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30658c:
    // 0x30658c: 0xc08e23a  jal         func_2388E8
label_306590:
    if (ctx->pc == 0x306590u) {
        ctx->pc = 0x306590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30658Cu;
        // 0x306590: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306594u;
        goto label_306594;
    }
    ctx->pc = 0x30658Cu;
    SET_GPR_U32(ctx, 31, 0x306594u);
    ctx->pc = 0x306590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30658Cu;
    // 0x306590: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2388E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2388E8u, 0x30658Cu, 0x306594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306594u;
label_306594:
    // 0x306594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x306594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_306598:
    // 0x306598: 0xc08bd96  jal         func_22F658
label_30659c:
    if (ctx->pc == 0x30659Cu) {
        ctx->pc = 0x30659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306598u;
        // 0x30659c: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3065A0u;
        goto label_3065a0;
    }
    ctx->pc = 0x306598u;
    SET_GPR_U32(ctx, 31, 0x3065A0u);
    ctx->pc = 0x30659Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306598u;
    // 0x30659c: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x306598u, 0x3065A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3065A0u;
label_3065a0:
    // 0x3065a0: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x3065a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_3065a4:
    // 0x3065a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3065a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3065a8:
    // 0x3065a8: 0xc06a0cc  jal         func_1A8330
label_3065ac:
    if (ctx->pc == 0x3065ACu) {
        ctx->pc = 0x3065ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065A8u;
        // 0x3065ac: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3065B0u;
        goto label_3065b0;
    }
    ctx->pc = 0x3065A8u;
    SET_GPR_U32(ctx, 31, 0x3065B0u);
    ctx->pc = 0x3065ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3065A8u;
    // 0x3065ac: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x3065A8u, 0x3065B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3065B0u;
label_3065b0:
    // 0x3065b0: 0x10000021  b           . + 4 + (0x21 << 2)
label_3065b4:
    if (ctx->pc == 0x3065B4u) {
        ctx->pc = 0x3065B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065B0u;
        // 0x3065b4: 0x8e2211c0  lw          $v0, 0x11C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3065B8u;
        goto label_3065b8;
    }
    ctx->pc = 0x3065B0u;
    {
        const bool branch_taken_0x3065b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3065B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065B0u;
        // 0x3065b4: 0x8e2211c0  lw          $v0, 0x11C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3065b0) {
            ctx->pc = 0x306638u;
            goto label_306638;
        }
    }
    ctx->pc = 0x3065B8u;
label_3065b8:
    // 0x3065b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3065b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3065bc:
    // 0x3065bc: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_3065c0:
    if (ctx->pc == 0x3065C0u) {
        ctx->pc = 0x3065C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065BCu;
        // 0x3065c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3065C4u;
        goto label_3065c4;
    }
    ctx->pc = 0x3065BCu;
    {
        const bool branch_taken_0x3065bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3065C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065BCu;
        // 0x3065c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3065bc) {
            ctx->pc = 0x306634u;
            goto label_306634;
        }
    }
    ctx->pc = 0x3065C4u;
label_3065c4:
    // 0x3065c4: 0xc0844c0  jal         func_211300
label_3065c8:
    if (ctx->pc == 0x3065C8u) {
        ctx->pc = 0x3065C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065C4u;
        // 0x3065c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3065CCu;
        goto label_3065cc;
    }
    ctx->pc = 0x3065C4u;
    SET_GPR_U32(ctx, 31, 0x3065CCu);
    ctx->pc = 0x3065C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3065C4u;
    // 0x3065c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211300u, 0x3065C4u, 0x3065CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3065CCu;
label_3065cc:
    // 0x3065cc: 0x8e2611e4  lw          $a2, 0x11E4($s1)
    ctx->pc = 0x3065ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
label_3065d0:
    // 0x3065d0: 0x3c070020  lui         $a3, 0x20
    ctx->pc = 0x3065d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32 << 16));
label_3065d4:
    // 0x3065d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3065d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3065d8:
    // 0x3065d8: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x3065d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3065dc:
    // 0x3065dc: 0x8cc200c0  lw          $v0, 0xC0($a2)
    ctx->pc = 0x3065dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 192)));
label_3065e0:
    // 0x3065e0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3065e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3065e4:
    // 0x3065e4: 0xacc200c0  sw          $v0, 0xC0($a2)
    ctx->pc = 0x3065e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 192), GPR_U32(ctx, 2));
label_3065e8:
    // 0x3065e8: 0x8e2311c0  lw          $v1, 0x11C0($s1)
    ctx->pc = 0x3065e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_3065ec:
    // 0x3065ec: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x3065ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_3065f0:
    // 0x3065f0: 0xc08bd96  jal         func_22F658
label_3065f4:
    if (ctx->pc == 0x3065F4u) {
        ctx->pc = 0x3065F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065F0u;
        // 0x3065f4: 0xae2311c0  sw          $v1, 0x11C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3065F8u;
        goto label_3065f8;
    }
    ctx->pc = 0x3065F0u;
    SET_GPR_U32(ctx, 31, 0x3065F8u);
    ctx->pc = 0x3065F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3065F0u;
    // 0x3065f4: 0xae2311c0  sw          $v1, 0x11C0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x3065F0u, 0x3065F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3065F8u;
label_3065f8:
    // 0x3065f8: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x3065f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_3065fc:
    // 0x3065fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3065fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306600:
    // 0x306600: 0xc06a0cc  jal         func_1A8330
label_306604:
    if (ctx->pc == 0x306604u) {
        ctx->pc = 0x306604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306600u;
        // 0x306604: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306608u;
        goto label_306608;
    }
    ctx->pc = 0x306600u;
    SET_GPR_U32(ctx, 31, 0x306608u);
    ctx->pc = 0x306604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306600u;
    // 0x306604: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x306600u, 0x306608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306608u;
label_306608:
    // 0x306608: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x306608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_30660c:
    // 0x30660c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x30660cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_306610:
    // 0x306610: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x306610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_306614:
    // 0x306614: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x306614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_306618:
    // 0x306618: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x306618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30661c:
    // 0x30661c: 0xc046642  jal         func_119908
label_306620:
    if (ctx->pc == 0x306620u) {
        ctx->pc = 0x306620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30661Cu;
        // 0x306620: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306624u;
        goto label_306624;
    }
    ctx->pc = 0x30661Cu;
    SET_GPR_U32(ctx, 31, 0x306624u);
    ctx->pc = 0x306620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30661Cu;
    // 0x306620: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x30661Cu, 0x306624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306624u;
label_306624:
    // 0x306624: 0x10000004  b           . + 4 + (0x4 << 2)
label_306628:
    if (ctx->pc == 0x306628u) {
        ctx->pc = 0x306628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306624u;
        // 0x306628: 0x8e2211c0  lw          $v0, 0x11C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30662Cu;
        goto label_30662c;
    }
    ctx->pc = 0x306624u;
    {
        const bool branch_taken_0x306624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306624u;
        // 0x306628: 0x8e2211c0  lw          $v0, 0x11C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306624) {
            ctx->pc = 0x306638u;
            goto label_306638;
        }
    }
    ctx->pc = 0x30662Cu;
label_30662c:
    // 0x30662c: 0xc0bc5e2  jal         func_2F1788
label_306630:
    if (ctx->pc == 0x306630u) {
        ctx->pc = 0x306630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30662Cu;
        // 0x306630: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306634u;
        goto label_306634;
    }
    ctx->pc = 0x30662Cu;
    SET_GPR_U32(ctx, 31, 0x306634u);
    ctx->pc = 0x306630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30662Cu;
    // 0x306630: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1788u, 0x30662Cu, 0x306634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306634u;
label_306634:
    // 0x306634: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x306634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_306638:
    // 0x306638: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x306638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_30663c:
    // 0x30663c: 0x10000057  b           . + 4 + (0x57 << 2)
label_306640:
    if (ctx->pc == 0x306640u) {
        ctx->pc = 0x306640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30663Cu;
        // 0x306640: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306644u;
        goto label_306644;
    }
    ctx->pc = 0x30663Cu;
    {
        const bool branch_taken_0x30663c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30663Cu;
        // 0x306640: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30663c) {
            ctx->pc = 0x30679Cu;
            goto label_30679c;
        }
    }
    ctx->pc = 0x306644u;
label_306644:
    // 0x306644: 0x56620057  bnel        $s3, $v0, . + 4 + (0x57 << 2)
label_306648:
    if (ctx->pc == 0x306648u) {
        ctx->pc = 0x306648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306644u;
        // 0x306648: 0x8e230418  lw          $v1, 0x418($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30664Cu;
        goto label_30664c;
    }
    ctx->pc = 0x306644u;
    {
        const bool branch_taken_0x306644 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x306644) {
            ctx->pc = 0x306648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306644u;
            // 0x306648: 0x8e230418  lw          $v1, 0x418($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3067A4u;
            goto label_3067a4;
        }
    }
    ctx->pc = 0x30664Cu;
label_30664c:
    // 0x30664c: 0x3c013fee  lui         $at, 0x3FEE
    ctx->pc = 0x30664cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16366 << 16));
label_306650:
    // 0x306650: 0x3421f9db  ori         $at, $at, 0xF9DB
    ctx->pc = 0x306650u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63963);
label_306654:
    // 0x306654: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x306654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306658:
    // 0x306658: 0x0  nop
    ctx->pc = 0x306658u;
    // NOP
label_30665c:
    // 0x30665c: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x30665cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_306660:
    // 0x306660: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x306660u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_306664:
    // 0x306664: 0x0  nop
    ctx->pc = 0x306664u;
    // NOP
label_306668:
    // 0x306668: 0x45000049  bc1f        . + 4 + (0x49 << 2)
label_30666c:
    if (ctx->pc == 0x30666Cu) {
        ctx->pc = 0x30666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306668u;
        // 0x30666c: 0x3c100200  lui         $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306670u;
        goto label_306670;
    }
    ctx->pc = 0x306668u;
    {
        const bool branch_taken_0x306668 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306668u;
        // 0x30666c: 0x3c100200  lui         $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306668) {
            ctx->pc = 0x306790u;
            goto label_306790;
        }
    }
    ctx->pc = 0x306670u;
label_306670:
    // 0x306670: 0x901024  and         $v0, $a0, $s0
    ctx->pc = 0x306670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
label_306674:
    // 0x306674: 0x1050004a  beq         $v0, $s0, . + 4 + (0x4A << 2)
label_306678:
    if (ctx->pc == 0x306678u) {
        ctx->pc = 0x306678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306674u;
        // 0x306678: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30667Cu;
        goto label_30667c;
    }
    ctx->pc = 0x306674u;
    {
        const bool branch_taken_0x306674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x306678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306674u;
        // 0x306678: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306674) {
            ctx->pc = 0x3067A0u;
            goto label_3067a0;
        }
    }
    ctx->pc = 0x30667Cu;
label_30667c:
    // 0x30667c: 0x8e2c0104  lw          $t4, 0x104($s1)
    ctx->pc = 0x30667cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_306680:
    // 0x306680: 0x8e2411e4  lw          $a0, 0x11E4($s1)
    ctx->pc = 0x306680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
label_306684:
    // 0x306684: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x306684u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_306688:
    // 0x306688: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x306688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_30668c:
    // 0x30668c: 0x27aa0030  addiu       $t2, $sp, 0x30
    ctx->pc = 0x30668cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_306690:
    // 0x306690: 0x3c0b0059  lui         $t3, 0x59
    ctx->pc = 0x306690u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)89 << 16));
label_306694:
    // 0x306694: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x306694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306698:
    // 0x306698: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x306698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_30669c:
    // 0x30669c: 0x24650050  addiu       $a1, $v1, 0x50
    ctx->pc = 0x30669cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_3066a0:
    // 0x3066a0: 0x24660060  addiu       $a2, $v1, 0x60
    ctx->pc = 0x3066a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_3066a4:
    // 0x3066a4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3066a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3066a8:
    // 0x3066a8: 0x24680070  addiu       $t0, $v1, 0x70
    ctx->pc = 0x3066a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_3066ac:
    // 0x3066ac: 0x256b4d80  addiu       $t3, $t3, 0x4D80
    ctx->pc = 0x3066acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 19840));
label_3066b0:
    // 0x3066b0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3066b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3066b4:
    // 0x3066b4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3066b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3066b8:
    // 0x3066b8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3066b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3066bc:
    // 0x3066bc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3066bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3066c0:
    // 0x3066c0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3066c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3066c4:
    // 0x3066c4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x3066c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3066c8:
    // 0x3066c8: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x3066c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3066cc:
    // 0x3066cc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3066ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3066d0:
    // 0x3066d0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3066d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3066d4:
    // 0x3066d4: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x3066d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_3066d8:
    // 0x3066d8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3066d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3066dc:
    // 0x3066dc: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x3066dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_3066e0:
    // 0x3066e0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3066e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3066e4:
    // 0x3066e4: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x3066e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_3066e8:
    // 0x3066e8: 0xc4610060  lwc1        $f1, 0x60($v1)
    ctx->pc = 0x3066e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3066ec:
    // 0x3066ec: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x3066ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3066f0:
    // 0x3066f0: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x3066f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3066f4:
    // 0x3066f4: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x3066f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
label_3066f8:
    // 0x3066f8: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3066f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3066fc:
    // 0x3066fc: 0xe5210008  swc1        $f1, 0x8($t1)
    ctx->pc = 0x3066fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
label_306700:
    // 0x306700: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x306700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306704:
    // 0x306704: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x306704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
label_306708:
    // 0x306708: 0xc4610070  lwc1        $f1, 0x70($v1)
    ctx->pc = 0x306708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30670c:
    // 0x30670c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x30670cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_306710:
    // 0x306710: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x306710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306714:
    // 0x306714: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x306714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
label_306718:
    // 0x306718: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x306718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30671c:
    // 0x30671c: 0xe5410008  swc1        $f1, 0x8($t2)
    ctx->pc = 0x30671cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
label_306720:
    // 0x306720: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x306720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306724:
    // 0x306724: 0xe540000c  swc1        $f0, 0xC($t2)
    ctx->pc = 0x306724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
label_306728:
    // 0x306728: 0xd9610000  lqc2        $vf1, 0x0($t3)
    ctx->pc = 0x306728u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
label_30672c:
    // 0x30672c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x30672cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_306730:
    // 0x306730: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x306730u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_306734:
    // 0x306734: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x306734u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_306738:
    // 0x306738: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x306738u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30673c:
    // 0x30673c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x30673cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_306740:
    // 0x306740: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x306740u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_306744:
    // 0x306744: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x306744u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_306748:
    // 0x306748: 0xfba50030  sqc2        $vf5, 0x30($sp)
    ctx->pc = 0x306748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[5]));
label_30674c:
    // 0x30674c: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x30674cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_306750:
    // 0x306750: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x306750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_306754:
    // 0x306754: 0xd9410000  lqc2        $vf1, 0x0($t2)
    ctx->pc = 0x306754u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_306758:
    // 0x306758: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x306758u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_30675c:
    // 0x30675c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x30675cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_306760:
    // 0x306760: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x306760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_306764:
    // 0x306764: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x306764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_306768:
    // 0x306768: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x306768u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_30676c:
    // 0x30676c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30676cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_306770:
    // 0x306770: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x306770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_306774:
    // 0x306774: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x306774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306778:
    // 0x306778: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x306778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30677c:
    // 0x30677c: 0xc08e23a  jal         func_2388E8
label_306780:
    if (ctx->pc == 0x306780u) {
        ctx->pc = 0x306780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30677Cu;
        // 0x306780: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306784u;
        goto label_306784;
    }
    ctx->pc = 0x30677Cu;
    SET_GPR_U32(ctx, 31, 0x306784u);
    ctx->pc = 0x306780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30677Cu;
    // 0x306780: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2388E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2388E8u, 0x30677Cu, 0x306784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306784u;
label_306784:
    // 0x306784: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x306784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_306788:
    // 0x306788: 0x10000004  b           . + 4 + (0x4 << 2)
label_30678c:
    if (ctx->pc == 0x30678Cu) {
        ctx->pc = 0x30678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306788u;
        // 0x30678c: 0x501025  or          $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306790u;
        goto label_306790;
    }
    ctx->pc = 0x306788u;
    {
        const bool branch_taken_0x306788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306788u;
        // 0x30678c: 0x501025  or          $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306788) {
            ctx->pc = 0x30679Cu;
            goto label_30679c;
        }
    }
    ctx->pc = 0x306790u;
label_306790:
    // 0x306790: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x306790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
label_306794:
    // 0x306794: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x306794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_306798:
    // 0x306798: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x306798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_30679c:
    // 0x30679c: 0xae2211c0  sw          $v0, 0x11C0($s1)
    ctx->pc = 0x30679cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 2));
label_3067a0:
    // 0x3067a0: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x3067a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_3067a4:
    // 0x3067a4: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x3067a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3067a8:
    // 0x3067a8: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
label_3067ac:
    if (ctx->pc == 0x3067ACu) {
        ctx->pc = 0x3067ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067A8u;
        // 0x3067ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3067B0u;
        goto label_3067b0;
    }
    ctx->pc = 0x3067A8u;
    {
        const bool branch_taken_0x3067a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3067ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067A8u;
        // 0x3067ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3067a8) {
            ctx->pc = 0x3067B4u;
            goto label_3067b4;
        }
    }
    ctx->pc = 0x3067B0u;
label_3067b0:
    // 0x3067b0: 0x8e2211e4  lw          $v0, 0x11E4($s1)
    ctx->pc = 0x3067b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
label_3067b4:
    // 0x3067b4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_3067b8:
    if (ctx->pc == 0x3067B8u) {
        ctx->pc = 0x3067BCu;
        goto label_3067bc;
    }
    ctx->pc = 0x3067B4u;
    {
        const bool branch_taken_0x3067b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3067b4) {
            ctx->pc = 0x30683Cu;
            goto label_30683c;
        }
    }
    ctx->pc = 0x3067BCu;
label_3067bc:
    // 0x3067bc: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
label_3067c0:
    if (ctx->pc == 0x3067C0u) {
        ctx->pc = 0x3067C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067BCu;
        // 0x3067c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3067C4u;
        goto label_3067c4;
    }
    ctx->pc = 0x3067BCu;
    {
        const bool branch_taken_0x3067bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3067C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067BCu;
        // 0x3067c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3067bc) {
            ctx->pc = 0x3067C8u;
            goto label_3067c8;
        }
    }
    ctx->pc = 0x3067C4u;
label_3067c4:
    // 0x3067c4: 0x8e2511e4  lw          $a1, 0x11E4($s1)
    ctx->pc = 0x3067c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
label_3067c8:
    // 0x3067c8: 0x4600a307  neg.s       $f12, $f20
    ctx->pc = 0x3067c8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
label_3067cc:
    // 0x3067cc: 0xc08f982  jal         func_23E608
label_3067d0:
    if (ctx->pc == 0x3067D0u) {
        ctx->pc = 0x3067D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067CCu;
        // 0x3067d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3067D4u;
        goto label_3067d4;
    }
    ctx->pc = 0x3067CCu;
    SET_GPR_U32(ctx, 31, 0x3067D4u);
    ctx->pc = 0x3067D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3067CCu;
    // 0x3067d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E608u, 0x3067CCu, 0x3067D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3067D4u;
label_3067d4:
    // 0x3067d4: 0x10000019  b           . + 4 + (0x19 << 2)
label_3067d8:
    if (ctx->pc == 0x3067D8u) {
        ctx->pc = 0x3067DCu;
        goto label_3067dc;
    }
    ctx->pc = 0x3067D4u;
    {
        const bool branch_taken_0x3067d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3067d4) {
            ctx->pc = 0x30683Cu;
            goto label_30683c;
        }
    }
    ctx->pc = 0x3067DCu;
label_3067dc:
    // 0x3067dc: 0x8e2311c0  lw          $v1, 0x11C0($s1)
    ctx->pc = 0x3067dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_3067e0:
    // 0x3067e0: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x3067e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_3067e4:
    // 0x3067e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3067e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3067e8:
    // 0x3067e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3067e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3067ec:
    // 0x3067ec: 0x10000013  b           . + 4 + (0x13 << 2)
label_3067f0:
    if (ctx->pc == 0x3067F0u) {
        ctx->pc = 0x3067F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067ECu;
        // 0x3067f0: 0xae2311c0  sw          $v1, 0x11C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3067F4u;
        goto label_3067f4;
    }
    ctx->pc = 0x3067ECu;
    {
        const bool branch_taken_0x3067ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3067F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067ECu;
        // 0x3067f0: 0xae2311c0  sw          $v1, 0x11C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3067ec) {
            ctx->pc = 0x30683Cu;
            goto label_30683c;
        }
    }
    ctx->pc = 0x3067F4u;
label_3067f4:
    // 0x3067f4: 0x8e220388  lw          $v0, 0x388($s1)
    ctx->pc = 0x3067f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 904)));
label_3067f8:
    // 0x3067f8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3067fc:
    if (ctx->pc == 0x3067FCu) {
        ctx->pc = 0x3067FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067F8u;
        // 0x3067fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306800u;
        goto label_306800;
    }
    ctx->pc = 0x3067F8u;
    {
        const bool branch_taken_0x3067f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3067FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067F8u;
        // 0x3067fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3067f8) {
            ctx->pc = 0x30683Cu;
            goto label_30683c;
        }
    }
    ctx->pc = 0x306800u;
label_306800:
    // 0x306800: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x306800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_306804:
    // 0x306804: 0xc08fed2  jal         func_23FB48
label_306808:
    if (ctx->pc == 0x306808u) {
        ctx->pc = 0x306808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306804u;
        // 0x306808: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30680Cu;
        goto label_30680c;
    }
    ctx->pc = 0x306804u;
    SET_GPR_U32(ctx, 31, 0x30680Cu);
    ctx->pc = 0x306808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306804u;
    // 0x306808: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x306804u, 0x30680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30680Cu;
label_30680c:
    // 0x30680c: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x30680cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_306810:
    // 0x306810: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x306810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_306814:
    // 0x306814: 0x8c44014c  lw          $a0, 0x14C($v0)
    ctx->pc = 0x306814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_306818:
    // 0x306818: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_30681c:
    if (ctx->pc == 0x30681Cu) {
        ctx->pc = 0x30681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306818u;
        // 0x30681c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306820u;
        goto label_306820;
    }
    ctx->pc = 0x306818u;
    {
        const bool branch_taken_0x306818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x30681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306818u;
        // 0x30681c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306818) {
            ctx->pc = 0x306828u;
            goto label_306828;
        }
    }
    ctx->pc = 0x306820u;
label_306820:
    // 0x306820: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
label_306824:
    if (ctx->pc == 0x306824u) {
        ctx->pc = 0x306828u;
        goto label_306828;
    }
    ctx->pc = 0x306820u;
    {
        const bool branch_taken_0x306820 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x306820) {
            ctx->pc = 0x30683Cu;
            goto label_30683c;
        }
    }
    ctx->pc = 0x306828u;
label_306828:
    // 0x306828: 0x8e240388  lw          $a0, 0x388($s1)
    ctx->pc = 0x306828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 904)));
label_30682c:
    // 0x30682c: 0xc09c07c  jal         func_2701F0
label_306830:
    if (ctx->pc == 0x306830u) {
        ctx->pc = 0x306830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30682Cu;
        // 0x306830: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306834u;
        goto label_306834;
    }
    ctx->pc = 0x30682Cu;
    SET_GPR_U32(ctx, 31, 0x306834u);
    ctx->pc = 0x306830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30682Cu;
    // 0x306830: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2701F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2701F0u, 0x30682Cu, 0x306834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306834u;
label_306834:
    // 0x306834: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_306838:
    if (ctx->pc == 0x306838u) {
        ctx->pc = 0x306838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306834u;
        // 0x306838: 0xae2004f4  sw          $zero, 0x4F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30683Cu;
        goto label_30683c;
    }
    ctx->pc = 0x306834u;
    {
        const bool branch_taken_0x306834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306834) {
            ctx->pc = 0x306838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306834u;
            // 0x306838: 0xae2004f4  sw          $zero, 0x4F4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1268), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30683Cu;
            goto label_30683c;
        }
    }
    ctx->pc = 0x30683Cu;
label_30683c:
    // 0x30683c: 0x52a00078  beql        $s5, $zero, . + 4 + (0x78 << 2)
label_306840:
    if (ctx->pc == 0x306840u) {
        ctx->pc = 0x306840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30683Cu;
        // 0x306840: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306844u;
        goto label_306844;
    }
    ctx->pc = 0x30683Cu;
    {
        const bool branch_taken_0x30683c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x30683c) {
            ctx->pc = 0x306840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30683Cu;
            // 0x306840: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306A20u;
            goto label_306a20;
        }
    }
    ctx->pc = 0x306844u;
label_306844:
    // 0x306844: 0xc08daf0  jal         func_236BC0
label_306848:
    if (ctx->pc == 0x306848u) {
        ctx->pc = 0x306848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306844u;
        // 0x306848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30684Cu;
        goto label_30684c;
    }
    ctx->pc = 0x306844u;
    SET_GPR_U32(ctx, 31, 0x30684Cu);
    ctx->pc = 0x306848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306844u;
    // 0x306848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BC0u, 0x306844u, 0x30684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30684Cu;
label_30684c:
    // 0x30684c: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
label_306850:
    if (ctx->pc == 0x306850u) {
        ctx->pc = 0x306850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30684Cu;
        // 0x306850: 0x2663f875  addiu       $v1, $s3, -0x78B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965365));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306854u;
        goto label_306854;
    }
    ctx->pc = 0x30684Cu;
    {
        const bool branch_taken_0x30684c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30684Cu;
        // 0x306850: 0x2663f875  addiu       $v1, $s3, -0x78B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965365));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30684c) {
            ctx->pc = 0x3069C8u;
            goto label_3069c8;
        }
    }
    ctx->pc = 0x306854u;
label_306854:
    // 0x306854: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x306854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_306858:
    // 0x306858: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
label_30685c:
    if (ctx->pc == 0x30685Cu) {
        ctx->pc = 0x30685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306858u;
        // 0x30685c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306860u;
        goto label_306860;
    }
    ctx->pc = 0x306858u;
    {
        const bool branch_taken_0x306858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306858u;
        // 0x30685c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306858) {
            ctx->pc = 0x306A0Cu;
            goto label_306a0c;
        }
    }
    ctx->pc = 0x306860u;
label_306860:
    // 0x306860: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x306860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_306864:
    // 0x306864: 0x24421e40  addiu       $v0, $v0, 0x1E40
    ctx->pc = 0x306864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7744));
label_306868:
    // 0x306868: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x306868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30686c:
    // 0x30686c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30686cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_306870:
    // 0x306870: 0x800008  jr          $a0
label_306874:
    if (ctx->pc == 0x306874u) {
        ctx->pc = 0x306878u;
        goto label_306878;
    }
    ctx->pc = 0x306870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x306878u: goto label_306878;
            case 0x3068B4u: goto label_3068b4;
            case 0x3068ECu: goto label_3068ec;
            case 0x306924u: goto label_306924;
            case 0x30695Cu: goto label_30695c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306870u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x306878u;
label_306878:
    // 0x306878: 0x8e260334  lw          $a2, 0x334($s1)
    ctx->pc = 0x306878u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_30687c:
    // 0x30687c: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x30687cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_306880:
    // 0x306880: 0x14800043  bnez        $a0, . + 4 + (0x43 << 2)
label_306884:
    if (ctx->pc == 0x306884u) {
        ctx->pc = 0x306884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306880u;
        // 0x306884: 0x24c301ec  addiu       $v1, $a2, 0x1EC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306888u;
        goto label_306888;
    }
    ctx->pc = 0x306880u;
    {
        const bool branch_taken_0x306880 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x306884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306880u;
        // 0x306884: 0x24c301ec  addiu       $v1, $a2, 0x1EC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306880) {
            ctx->pc = 0x306990u;
            goto label_306990;
        }
    }
    ctx->pc = 0x306888u;
label_306888:
    // 0x306888: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x306888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30688c:
    // 0x30688c: 0x0  nop
    ctx->pc = 0x30688cu;
    // NOP
label_306890:
    // 0x306890: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x306890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_306894:
    // 0x306894: 0x1480003e  bnez        $a0, . + 4 + (0x3E << 2)
label_306898:
    if (ctx->pc == 0x306898u) {
        ctx->pc = 0x30689Cu;
        goto label_30689c;
    }
    ctx->pc = 0x306894u;
    {
        const bool branch_taken_0x306894 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x306894) {
            ctx->pc = 0x306990u;
            goto label_306990;
        }
    }
    ctx->pc = 0x30689Cu;
label_30689c:
    // 0x30689c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x30689cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3068a0:
    // 0x3068a0: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x3068a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_3068a4:
    // 0x3068a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3068a8:
    if (ctx->pc == 0x3068A8u) {
        ctx->pc = 0x3068A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068A4u;
        // 0x3068a8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3068ACu;
        goto label_3068ac;
    }
    ctx->pc = 0x3068A4u;
    {
        const bool branch_taken_0x3068a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3068A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068A4u;
        // 0x3068a8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3068a4) {
            ctx->pc = 0x306890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306890;
        }
    }
    ctx->pc = 0x3068ACu;
label_3068ac:
    // 0x3068ac: 0x10000038  b           . + 4 + (0x38 << 2)
label_3068b0:
    if (ctx->pc == 0x3068B0u) {
        ctx->pc = 0x3068B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068ACu;
        // 0x3068b0: 0x8cc401e8  lw          $a0, 0x1E8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3068B4u;
        goto label_3068b4;
    }
    ctx->pc = 0x3068ACu;
    {
        const bool branch_taken_0x3068ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3068B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068ACu;
        // 0x3068b0: 0x8cc401e8  lw          $a0, 0x1E8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3068ac) {
            ctx->pc = 0x306990u;
            goto label_306990;
        }
    }
    ctx->pc = 0x3068B4u;
label_3068b4:
    // 0x3068b4: 0x8e260334  lw          $a2, 0x334($s1)
    ctx->pc = 0x3068b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_3068b8:
    // 0x3068b8: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x3068b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_3068bc:
    // 0x3068bc: 0x14800034  bnez        $a0, . + 4 + (0x34 << 2)
label_3068c0:
    if (ctx->pc == 0x3068C0u) {
        ctx->pc = 0x3068C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068BCu;
        // 0x3068c0: 0x24c301ec  addiu       $v1, $a2, 0x1EC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3068C4u;
        goto label_3068c4;
    }
    ctx->pc = 0x3068BCu;
    {
        const bool branch_taken_0x3068bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3068C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068BCu;
        // 0x3068c0: 0x24c301ec  addiu       $v1, $a2, 0x1EC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3068bc) {
            ctx->pc = 0x306990u;
            goto label_306990;
        }
    }
    ctx->pc = 0x3068C4u;
label_3068c4:
    // 0x3068c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3068c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3068c8:
    // 0x3068c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3068c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3068cc:
    // 0x3068cc: 0x14800030  bnez        $a0, . + 4 + (0x30 << 2)
label_3068d0:
    if (ctx->pc == 0x3068D0u) {
        ctx->pc = 0x3068D4u;
        goto label_3068d4;
    }
    ctx->pc = 0x3068CCu;
    {
        const bool branch_taken_0x3068cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3068cc) {
            ctx->pc = 0x306990u;
            goto label_306990;
        }
    }
    ctx->pc = 0x3068D4u;
label_3068d4:
    // 0x3068d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3068d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3068d8:
    // 0x3068d8: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x3068d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_3068dc:
    // 0x3068dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3068e0:
    if (ctx->pc == 0x3068E0u) {
        ctx->pc = 0x3068E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068DCu;
        // 0x3068e0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3068E4u;
        goto label_3068e4;
    }
    ctx->pc = 0x3068DCu;
    {
        const bool branch_taken_0x3068dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3068E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068DCu;
        // 0x3068e0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3068dc) {
            ctx->pc = 0x3068C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3068c8;
        }
    }
    ctx->pc = 0x3068E4u;
label_3068e4:
    // 0x3068e4: 0x1000002a  b           . + 4 + (0x2A << 2)
label_3068e8:
    if (ctx->pc == 0x3068E8u) {
        ctx->pc = 0x3068E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068E4u;
        // 0x3068e8: 0x8cc401e8  lw          $a0, 0x1E8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3068ECu;
        goto label_3068ec;
    }
    ctx->pc = 0x3068E4u;
    {
        const bool branch_taken_0x3068e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3068E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068E4u;
        // 0x3068e8: 0x8cc401e8  lw          $a0, 0x1E8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3068e4) {
            ctx->pc = 0x306990u;
            goto label_306990;
        }
    }
    ctx->pc = 0x3068ECu;
label_3068ec:
    // 0x3068ec: 0x8e260334  lw          $a2, 0x334($s1)
    ctx->pc = 0x3068ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_3068f0:
    // 0x3068f0: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x3068f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_3068f4:
    // 0x3068f4: 0x14800026  bnez        $a0, . + 4 + (0x26 << 2)
label_3068f8:
    if (ctx->pc == 0x3068F8u) {
        ctx->pc = 0x3068F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068F4u;
        // 0x3068f8: 0x24c301ec  addiu       $v1, $a2, 0x1EC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3068FCu;
        goto label_3068fc;
    }
    ctx->pc = 0x3068F4u;
    {
        const bool branch_taken_0x3068f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3068F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068F4u;
        // 0x3068f8: 0x24c301ec  addiu       $v1, $a2, 0x1EC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3068f4) {
            ctx->pc = 0x306990u;
            goto label_306990;
        }
    }
    ctx->pc = 0x3068FCu;
label_3068fc:
    // 0x3068fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3068fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306900:
    // 0x306900: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x306900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_306904:
    // 0x306904: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
label_306908:
    if (ctx->pc == 0x306908u) {
        ctx->pc = 0x30690Cu;
        goto label_30690c;
    }
    ctx->pc = 0x306904u;
    {
        const bool branch_taken_0x306904 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x306904) {
            ctx->pc = 0x306990u;
            goto label_306990;
        }
    }
    ctx->pc = 0x30690Cu;
label_30690c:
    // 0x30690c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x30690cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_306910:
    // 0x306910: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x306910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_306914:
    // 0x306914: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_306918:
    if (ctx->pc == 0x306918u) {
        ctx->pc = 0x306918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306914u;
        // 0x306918: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30691Cu;
        goto label_30691c;
    }
    ctx->pc = 0x306914u;
    {
        const bool branch_taken_0x306914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306914u;
        // 0x306918: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306914) {
            ctx->pc = 0x306900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306900;
        }
    }
    ctx->pc = 0x30691Cu;
label_30691c:
    // 0x30691c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_306920:
    if (ctx->pc == 0x306920u) {
        ctx->pc = 0x306920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30691Cu;
        // 0x306920: 0x8cc401e8  lw          $a0, 0x1E8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306924u;
        goto label_306924;
    }
    ctx->pc = 0x30691Cu;
    {
        const bool branch_taken_0x30691c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30691Cu;
        // 0x306920: 0x8cc401e8  lw          $a0, 0x1E8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30691c) {
            ctx->pc = 0x306990u;
            goto label_306990;
        }
    }
    ctx->pc = 0x306924u;
label_306924:
    // 0x306924: 0x8e260334  lw          $a2, 0x334($s1)
    ctx->pc = 0x306924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_306928:
    // 0x306928: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x306928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_30692c:
    // 0x30692c: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
label_306930:
    if (ctx->pc == 0x306930u) {
        ctx->pc = 0x306930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30692Cu;
        // 0x306930: 0x24c301ec  addiu       $v1, $a2, 0x1EC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306934u;
        goto label_306934;
    }
    ctx->pc = 0x30692Cu;
    {
        const bool branch_taken_0x30692c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x306930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30692Cu;
        // 0x306930: 0x24c301ec  addiu       $v1, $a2, 0x1EC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30692c) {
            ctx->pc = 0x306990u;
            goto label_306990;
        }
    }
    ctx->pc = 0x306934u;
label_306934:
    // 0x306934: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x306934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306938:
    // 0x306938: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x306938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30693c:
    // 0x30693c: 0x14800014  bnez        $a0, . + 4 + (0x14 << 2)
label_306940:
    if (ctx->pc == 0x306940u) {
        ctx->pc = 0x306944u;
        goto label_306944;
    }
    ctx->pc = 0x30693Cu;
    {
        const bool branch_taken_0x30693c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x30693c) {
            ctx->pc = 0x306990u;
            goto label_306990;
        }
    }
    ctx->pc = 0x306944u;
label_306944:
    // 0x306944: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x306944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_306948:
    // 0x306948: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x306948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_30694c:
    // 0x30694c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_306950:
    if (ctx->pc == 0x306950u) {
        ctx->pc = 0x306950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30694Cu;
        // 0x306950: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306954u;
        goto label_306954;
    }
    ctx->pc = 0x30694Cu;
    {
        const bool branch_taken_0x30694c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30694Cu;
        // 0x306950: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30694c) {
            ctx->pc = 0x306938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306938;
        }
    }
    ctx->pc = 0x306954u;
label_306954:
    // 0x306954: 0x1000000e  b           . + 4 + (0xE << 2)
label_306958:
    if (ctx->pc == 0x306958u) {
        ctx->pc = 0x306958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306954u;
        // 0x306958: 0x8cc401e8  lw          $a0, 0x1E8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30695Cu;
        goto label_30695c;
    }
    ctx->pc = 0x306954u;
    {
        const bool branch_taken_0x306954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306954u;
        // 0x306958: 0x8cc401e8  lw          $a0, 0x1E8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306954) {
            ctx->pc = 0x306990u;
            goto label_306990;
        }
    }
    ctx->pc = 0x30695Cu;
label_30695c:
    // 0x30695c: 0x8e260334  lw          $a2, 0x334($s1)
    ctx->pc = 0x30695cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_306960:
    // 0x306960: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x306960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_306964:
    // 0x306964: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_306968:
    if (ctx->pc == 0x306968u) {
        ctx->pc = 0x306968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306964u;
        // 0x306968: 0x24c301ec  addiu       $v1, $a2, 0x1EC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30696Cu;
        goto label_30696c;
    }
    ctx->pc = 0x306964u;
    {
        const bool branch_taken_0x306964 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x306968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306964u;
        // 0x306968: 0x24c301ec  addiu       $v1, $a2, 0x1EC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306964) {
            ctx->pc = 0x306990u;
            goto label_306990;
        }
    }
    ctx->pc = 0x30696Cu;
label_30696c:
    // 0x30696c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30696cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306970:
    // 0x306970: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x306970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_306974:
    // 0x306974: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_306978:
    if (ctx->pc == 0x306978u) {
        ctx->pc = 0x30697Cu;
        goto label_30697c;
    }
    ctx->pc = 0x306974u;
    {
        const bool branch_taken_0x306974 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x306974) {
            ctx->pc = 0x306990u;
            goto label_306990;
        }
    }
    ctx->pc = 0x30697Cu;
label_30697c:
    // 0x30697c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x30697cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_306980:
    // 0x306980: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x306980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_306984:
    // 0x306984: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_306988:
    if (ctx->pc == 0x306988u) {
        ctx->pc = 0x306988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306984u;
        // 0x306988: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30698Cu;
        goto label_30698c;
    }
    ctx->pc = 0x306984u;
    {
        const bool branch_taken_0x306984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306984u;
        // 0x306988: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306984) {
            ctx->pc = 0x306970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306970;
        }
    }
    ctx->pc = 0x30698Cu;
label_30698c:
    // 0x30698c: 0x8cc401e8  lw          $a0, 0x1E8($a2)
    ctx->pc = 0x30698cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_306990:
    // 0x306990: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x306990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_306994:
    // 0x306994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x306994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306998:
    // 0x306998: 0xc073f08  jal         func_1CFC20
label_30699c:
    if (ctx->pc == 0x30699Cu) {
        ctx->pc = 0x30699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306998u;
        // 0x30699c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3069A0u;
        goto label_3069a0;
    }
    ctx->pc = 0x306998u;
    SET_GPR_U32(ctx, 31, 0x3069A0u);
    ctx->pc = 0x30699Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306998u;
    // 0x30699c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x306998u, 0x3069A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3069A0u;
label_3069a0:
    // 0x3069a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3069a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3069a4:
    // 0x3069a4: 0xc0bf056  jal         func_2FC158
label_3069a8:
    if (ctx->pc == 0x3069A8u) {
        ctx->pc = 0x3069A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069A4u;
        // 0x3069a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3069ACu;
        goto label_3069ac;
    }
    ctx->pc = 0x3069A4u;
    SET_GPR_U32(ctx, 31, 0x3069ACu);
    ctx->pc = 0x3069A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3069A4u;
    // 0x3069a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC158u, 0x3069A4u, 0x3069ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3069ACu;
label_3069ac:
    // 0x3069ac: 0xe63412b4  swc1        $f20, 0x12B4($s1)
    ctx->pc = 0x3069acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4788), bits); }
label_3069b0:
    // 0x3069b0: 0x8e220218  lw          $v0, 0x218($s1)
    ctx->pc = 0x3069b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_3069b4:
    // 0x3069b4: 0x8c4301cc  lw          $v1, 0x1CC($v0)
    ctx->pc = 0x3069b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 460)));
label_3069b8:
    // 0x3069b8: 0x60f809  jalr        $v1
label_3069bc:
    if (ctx->pc == 0x3069BCu) {
        ctx->pc = 0x3069BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069B8u;
        // 0x3069bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3069C0u;
        goto label_3069c0;
    }
    ctx->pc = 0x3069B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3069C0u);
        ctx->pc = 0x3069BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069B8u;
        // 0x3069bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3069B8u, 0x3069C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3069C0u;
label_3069c0:
    // 0x3069c0: 0x1000002c  b           . + 4 + (0x2C << 2)
label_3069c4:
    if (ctx->pc == 0x3069C4u) {
        ctx->pc = 0x3069C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069C0u;
        // 0x3069c4: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3069C8u;
        goto label_3069c8;
    }
    ctx->pc = 0x3069C0u;
    {
        const bool branch_taken_0x3069c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3069C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069C0u;
        // 0x3069c4: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3069c0) {
            ctx->pc = 0x306A74u;
            goto label_306a74;
        }
    }
    ctx->pc = 0x3069C8u;
label_3069c8:
    // 0x3069c8: 0x8e260334  lw          $a2, 0x334($s1)
    ctx->pc = 0x3069c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_3069cc:
    // 0x3069cc: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x3069ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_3069d0:
    // 0x3069d0: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_3069d4:
    if (ctx->pc == 0x3069D4u) {
        ctx->pc = 0x3069D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069D0u;
        // 0x3069d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3069D8u;
        goto label_3069d8;
    }
    ctx->pc = 0x3069D0u;
    {
        const bool branch_taken_0x3069d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3069D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069D0u;
        // 0x3069d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3069d0) {
            ctx->pc = 0x3069FCu;
            goto label_3069fc;
        }
    }
    ctx->pc = 0x3069D8u;
label_3069d8:
    // 0x3069d8: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x3069d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_3069dc:
    // 0x3069dc: 0x0  nop
    ctx->pc = 0x3069dcu;
    // NOP
label_3069e0:
    // 0x3069e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3069e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3069e4:
    // 0x3069e4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_3069e8:
    if (ctx->pc == 0x3069E8u) {
        ctx->pc = 0x3069E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069E4u;
        // 0x3069e8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3069ECu;
        goto label_3069ec;
    }
    ctx->pc = 0x3069E4u;
    {
        const bool branch_taken_0x3069e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3069E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069E4u;
        // 0x3069e8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3069e4) {
            ctx->pc = 0x3069FCu;
            goto label_3069fc;
        }
    }
    ctx->pc = 0x3069ECu;
label_3069ec:
    // 0x3069ec: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x3069ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_3069f0:
    // 0x3069f0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_3069f4:
    if (ctx->pc == 0x3069F4u) {
        ctx->pc = 0x3069F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069F0u;
        // 0x3069f4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3069F8u;
        goto label_3069f8;
    }
    ctx->pc = 0x3069F0u;
    {
        const bool branch_taken_0x3069f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3069F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069F0u;
        // 0x3069f4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3069f0) {
            ctx->pc = 0x3069E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3069e0;
        }
    }
    ctx->pc = 0x3069F8u;
label_3069f8:
    // 0x3069f8: 0x8cc401e8  lw          $a0, 0x1E8($a2)
    ctx->pc = 0x3069f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_3069fc:
    // 0x3069fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3069fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_306a00:
    // 0x306a00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x306a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_306a04:
    // 0x306a04: 0xc073f08  jal         func_1CFC20
label_306a08:
    if (ctx->pc == 0x306A08u) {
        ctx->pc = 0x306A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A04u;
        // 0x306a08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306A0Cu;
        goto label_306a0c;
    }
    ctx->pc = 0x306A04u;
    SET_GPR_U32(ctx, 31, 0x306A0Cu);
    ctx->pc = 0x306A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306A04u;
    // 0x306a08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x306A04u, 0x306A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A0Cu;
label_306a0c:
    // 0x306a0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x306a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_306a10:
    // 0x306a10: 0xc08dc16  jal         func_237058
label_306a14:
    if (ctx->pc == 0x306A14u) {
        ctx->pc = 0x306A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A10u;
        // 0x306a14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306A18u;
        goto label_306a18;
    }
    ctx->pc = 0x306A10u;
    SET_GPR_U32(ctx, 31, 0x306A18u);
    ctx->pc = 0x306A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306A10u;
    // 0x306a14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x306A10u, 0x306A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A18u;
label_306a18:
    // 0x306a18: 0x10000016  b           . + 4 + (0x16 << 2)
label_306a1c:
    if (ctx->pc == 0x306A1Cu) {
        ctx->pc = 0x306A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A18u;
        // 0x306a1c: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306A20u;
        goto label_306a20;
    }
    ctx->pc = 0x306A18u;
    {
        const bool branch_taken_0x306a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A18u;
        // 0x306a1c: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306a18) {
            ctx->pc = 0x306A74u;
            goto label_306a74;
        }
    }
    ctx->pc = 0x306A20u;
label_306a20:
    // 0x306a20: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x306a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_306a24:
    // 0x306a24: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x306a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_306a28:
    // 0x306a28: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_306a2c:
    if (ctx->pc == 0x306A2Cu) {
        ctx->pc = 0x306A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A28u;
        // 0x306a2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306A30u;
        goto label_306a30;
    }
    ctx->pc = 0x306A28u;
    {
        const bool branch_taken_0x306a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x306A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A28u;
        // 0x306a2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306a28) {
            ctx->pc = 0x306A40u;
            goto label_306a40;
        }
    }
    ctx->pc = 0x306A30u;
label_306a30:
    // 0x306a30: 0x8c8300c0  lw          $v1, 0xC0($a0)
    ctx->pc = 0x306a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_306a34:
    // 0x306a34: 0x286206b8  slti        $v0, $v1, 0x6B8
    ctx->pc = 0x306a34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1720) ? 1 : 0);
label_306a38:
    // 0x306a38: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_306a3c:
    if (ctx->pc == 0x306A3Cu) {
        ctx->pc = 0x306A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A38u;
        // 0x306a3c: 0x2865078b  slti        $a1, $v1, 0x78B (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1931) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x306A40u;
        goto label_306a40;
    }
    ctx->pc = 0x306A38u;
    {
        const bool branch_taken_0x306a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306a38) {
            ctx->pc = 0x306A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306A38u;
            // 0x306a3c: 0x2865078b  slti        $a1, $v1, 0x78B (Delay Slot)
            SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1931) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x306A40u;
            goto label_306a40;
        }
    }
    ctx->pc = 0x306A40u;
label_306a40:
    // 0x306a40: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_306a44:
    if (ctx->pc == 0x306A44u) {
        ctx->pc = 0x306A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A40u;
        // 0x306a44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306A48u;
        goto label_306a48;
    }
    ctx->pc = 0x306A40u;
    {
        const bool branch_taken_0x306a40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x306A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A40u;
        // 0x306a44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306a40) {
            ctx->pc = 0x306A58u;
            goto label_306a58;
        }
    }
    ctx->pc = 0x306A48u;
label_306a48:
    // 0x306a48: 0x2662f870  addiu       $v0, $s3, -0x790
    ctx->pc = 0x306a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965360));
label_306a4c:
    // 0x306a4c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x306a4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_306a50:
    // 0x306a50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_306a54:
    if (ctx->pc == 0x306A54u) {
        ctx->pc = 0x306A58u;
        goto label_306a58;
    }
    ctx->pc = 0x306A50u;
    {
        const bool branch_taken_0x306a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306a50) {
            ctx->pc = 0x306A68u;
            goto label_306a68;
        }
    }
    ctx->pc = 0x306A58u;
label_306a58:
    // 0x306a58: 0xc08dc16  jal         func_237058
label_306a5c:
    if (ctx->pc == 0x306A5Cu) {
        ctx->pc = 0x306A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A58u;
        // 0x306a5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306A60u;
        goto label_306a60;
    }
    ctx->pc = 0x306A58u;
    SET_GPR_U32(ctx, 31, 0x306A60u);
    ctx->pc = 0x306A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306A58u;
    // 0x306a5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x306A58u, 0x306A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A60u;
label_306a60:
    // 0x306a60: 0x10000004  b           . + 4 + (0x4 << 2)
label_306a64:
    if (ctx->pc == 0x306A64u) {
        ctx->pc = 0x306A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A60u;
        // 0x306a64: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306A68u;
        goto label_306a68;
    }
    ctx->pc = 0x306A60u;
    {
        const bool branch_taken_0x306a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A60u;
        // 0x306a64: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306a60) {
            ctx->pc = 0x306A74u;
            goto label_306a74;
        }
    }
    ctx->pc = 0x306A68u;
label_306a68:
    // 0x306a68: 0xc08dc16  jal         func_237058
label_306a6c:
    if (ctx->pc == 0x306A6Cu) {
        ctx->pc = 0x306A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A68u;
        // 0x306a6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306A70u;
        goto label_306a70;
    }
    ctx->pc = 0x306A68u;
    SET_GPR_U32(ctx, 31, 0x306A70u);
    ctx->pc = 0x306A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306A68u;
    // 0x306a6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x306A68u, 0x306A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A70u;
label_306a70:
    // 0x306a70: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x306a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_306a74:
    // 0x306a74: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x306a74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_306a78:
    // 0x306a78: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x306a78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_306a7c:
    // 0x306a7c: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x306a7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_306a80:
    // 0x306a80: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x306a80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_306a84:
    // 0x306a84: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x306a84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_306a88:
    // 0x306a88: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x306a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_306a8c:
    // 0x306a8c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x306a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_306a90:
    // 0x306a90: 0x3e00008  jr          $ra
label_306a94:
    if (ctx->pc == 0x306A94u) {
        ctx->pc = 0x306A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A90u;
        // 0x306a94: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306A98u;
        goto label_fallthrough_0x306a90;
    }
    ctx->pc = 0x306A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A90u;
        // 0x306a94: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x306a90:
    ctx->pc = 0x306A98u;
}
