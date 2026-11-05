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

// Function: sub_00311118
// Address: 0x311118 - 0x311b08
void sub_00311118_0x311118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311118_0x311118");
#endif

    switch (ctx->pc) {
        case 0x311118u: goto label_311118;
        case 0x31111cu: goto label_31111c;
        case 0x311120u: goto label_311120;
        case 0x311124u: goto label_311124;
        case 0x311128u: goto label_311128;
        case 0x31112cu: goto label_31112c;
        case 0x311130u: goto label_311130;
        case 0x311134u: goto label_311134;
        case 0x311138u: goto label_311138;
        case 0x31113cu: goto label_31113c;
        case 0x311140u: goto label_311140;
        case 0x311144u: goto label_311144;
        case 0x311148u: goto label_311148;
        case 0x31114cu: goto label_31114c;
        case 0x311150u: goto label_311150;
        case 0x311154u: goto label_311154;
        case 0x311158u: goto label_311158;
        case 0x31115cu: goto label_31115c;
        case 0x311160u: goto label_311160;
        case 0x311164u: goto label_311164;
        case 0x311168u: goto label_311168;
        case 0x31116cu: goto label_31116c;
        case 0x311170u: goto label_311170;
        case 0x311174u: goto label_311174;
        case 0x311178u: goto label_311178;
        case 0x31117cu: goto label_31117c;
        case 0x311180u: goto label_311180;
        case 0x311184u: goto label_311184;
        case 0x311188u: goto label_311188;
        case 0x31118cu: goto label_31118c;
        case 0x311190u: goto label_311190;
        case 0x311194u: goto label_311194;
        case 0x311198u: goto label_311198;
        case 0x31119cu: goto label_31119c;
        case 0x3111a0u: goto label_3111a0;
        case 0x3111a4u: goto label_3111a4;
        case 0x3111a8u: goto label_3111a8;
        case 0x3111acu: goto label_3111ac;
        case 0x3111b0u: goto label_3111b0;
        case 0x3111b4u: goto label_3111b4;
        case 0x3111b8u: goto label_3111b8;
        case 0x3111bcu: goto label_3111bc;
        case 0x3111c0u: goto label_3111c0;
        case 0x3111c4u: goto label_3111c4;
        case 0x3111c8u: goto label_3111c8;
        case 0x3111ccu: goto label_3111cc;
        case 0x3111d0u: goto label_3111d0;
        case 0x3111d4u: goto label_3111d4;
        case 0x3111d8u: goto label_3111d8;
        case 0x3111dcu: goto label_3111dc;
        case 0x3111e0u: goto label_3111e0;
        case 0x3111e4u: goto label_3111e4;
        case 0x3111e8u: goto label_3111e8;
        case 0x3111ecu: goto label_3111ec;
        case 0x3111f0u: goto label_3111f0;
        case 0x3111f4u: goto label_3111f4;
        case 0x3111f8u: goto label_3111f8;
        case 0x3111fcu: goto label_3111fc;
        case 0x311200u: goto label_311200;
        case 0x311204u: goto label_311204;
        case 0x311208u: goto label_311208;
        case 0x31120cu: goto label_31120c;
        case 0x311210u: goto label_311210;
        case 0x311214u: goto label_311214;
        case 0x311218u: goto label_311218;
        case 0x31121cu: goto label_31121c;
        case 0x311220u: goto label_311220;
        case 0x311224u: goto label_311224;
        case 0x311228u: goto label_311228;
        case 0x31122cu: goto label_31122c;
        case 0x311230u: goto label_311230;
        case 0x311234u: goto label_311234;
        case 0x311238u: goto label_311238;
        case 0x31123cu: goto label_31123c;
        case 0x311240u: goto label_311240;
        case 0x311244u: goto label_311244;
        case 0x311248u: goto label_311248;
        case 0x31124cu: goto label_31124c;
        case 0x311250u: goto label_311250;
        case 0x311254u: goto label_311254;
        case 0x311258u: goto label_311258;
        case 0x31125cu: goto label_31125c;
        case 0x311260u: goto label_311260;
        case 0x311264u: goto label_311264;
        case 0x311268u: goto label_311268;
        case 0x31126cu: goto label_31126c;
        case 0x311270u: goto label_311270;
        case 0x311274u: goto label_311274;
        case 0x311278u: goto label_311278;
        case 0x31127cu: goto label_31127c;
        case 0x311280u: goto label_311280;
        case 0x311284u: goto label_311284;
        case 0x311288u: goto label_311288;
        case 0x31128cu: goto label_31128c;
        case 0x311290u: goto label_311290;
        case 0x311294u: goto label_311294;
        case 0x311298u: goto label_311298;
        case 0x31129cu: goto label_31129c;
        case 0x3112a0u: goto label_3112a0;
        case 0x3112a4u: goto label_3112a4;
        case 0x3112a8u: goto label_3112a8;
        case 0x3112acu: goto label_3112ac;
        case 0x3112b0u: goto label_3112b0;
        case 0x3112b4u: goto label_3112b4;
        case 0x3112b8u: goto label_3112b8;
        case 0x3112bcu: goto label_3112bc;
        case 0x3112c0u: goto label_3112c0;
        case 0x3112c4u: goto label_3112c4;
        case 0x3112c8u: goto label_3112c8;
        case 0x3112ccu: goto label_3112cc;
        case 0x3112d0u: goto label_3112d0;
        case 0x3112d4u: goto label_3112d4;
        case 0x3112d8u: goto label_3112d8;
        case 0x3112dcu: goto label_3112dc;
        case 0x3112e0u: goto label_3112e0;
        case 0x3112e4u: goto label_3112e4;
        case 0x3112e8u: goto label_3112e8;
        case 0x3112ecu: goto label_3112ec;
        case 0x3112f0u: goto label_3112f0;
        case 0x3112f4u: goto label_3112f4;
        case 0x3112f8u: goto label_3112f8;
        case 0x3112fcu: goto label_3112fc;
        case 0x311300u: goto label_311300;
        case 0x311304u: goto label_311304;
        case 0x311308u: goto label_311308;
        case 0x31130cu: goto label_31130c;
        case 0x311310u: goto label_311310;
        case 0x311314u: goto label_311314;
        case 0x311318u: goto label_311318;
        case 0x31131cu: goto label_31131c;
        case 0x311320u: goto label_311320;
        case 0x311324u: goto label_311324;
        case 0x311328u: goto label_311328;
        case 0x31132cu: goto label_31132c;
        case 0x311330u: goto label_311330;
        case 0x311334u: goto label_311334;
        case 0x311338u: goto label_311338;
        case 0x31133cu: goto label_31133c;
        case 0x311340u: goto label_311340;
        case 0x311344u: goto label_311344;
        case 0x311348u: goto label_311348;
        case 0x31134cu: goto label_31134c;
        case 0x311350u: goto label_311350;
        case 0x311354u: goto label_311354;
        case 0x311358u: goto label_311358;
        case 0x31135cu: goto label_31135c;
        case 0x311360u: goto label_311360;
        case 0x311364u: goto label_311364;
        case 0x311368u: goto label_311368;
        case 0x31136cu: goto label_31136c;
        case 0x311370u: goto label_311370;
        case 0x311374u: goto label_311374;
        case 0x311378u: goto label_311378;
        case 0x31137cu: goto label_31137c;
        case 0x311380u: goto label_311380;
        case 0x311384u: goto label_311384;
        case 0x311388u: goto label_311388;
        case 0x31138cu: goto label_31138c;
        case 0x311390u: goto label_311390;
        case 0x311394u: goto label_311394;
        case 0x311398u: goto label_311398;
        case 0x31139cu: goto label_31139c;
        case 0x3113a0u: goto label_3113a0;
        case 0x3113a4u: goto label_3113a4;
        case 0x3113a8u: goto label_3113a8;
        case 0x3113acu: goto label_3113ac;
        case 0x3113b0u: goto label_3113b0;
        case 0x3113b4u: goto label_3113b4;
        case 0x3113b8u: goto label_3113b8;
        case 0x3113bcu: goto label_3113bc;
        case 0x3113c0u: goto label_3113c0;
        case 0x3113c4u: goto label_3113c4;
        case 0x3113c8u: goto label_3113c8;
        case 0x3113ccu: goto label_3113cc;
        case 0x3113d0u: goto label_3113d0;
        case 0x3113d4u: goto label_3113d4;
        case 0x3113d8u: goto label_3113d8;
        case 0x3113dcu: goto label_3113dc;
        case 0x3113e0u: goto label_3113e0;
        case 0x3113e4u: goto label_3113e4;
        case 0x3113e8u: goto label_3113e8;
        case 0x3113ecu: goto label_3113ec;
        case 0x3113f0u: goto label_3113f0;
        case 0x3113f4u: goto label_3113f4;
        case 0x3113f8u: goto label_3113f8;
        case 0x3113fcu: goto label_3113fc;
        case 0x311400u: goto label_311400;
        case 0x311404u: goto label_311404;
        case 0x311408u: goto label_311408;
        case 0x31140cu: goto label_31140c;
        case 0x311410u: goto label_311410;
        case 0x311414u: goto label_311414;
        case 0x311418u: goto label_311418;
        case 0x31141cu: goto label_31141c;
        case 0x311420u: goto label_311420;
        case 0x311424u: goto label_311424;
        case 0x311428u: goto label_311428;
        case 0x31142cu: goto label_31142c;
        case 0x311430u: goto label_311430;
        case 0x311434u: goto label_311434;
        case 0x311438u: goto label_311438;
        case 0x31143cu: goto label_31143c;
        case 0x311440u: goto label_311440;
        case 0x311444u: goto label_311444;
        case 0x311448u: goto label_311448;
        case 0x31144cu: goto label_31144c;
        case 0x311450u: goto label_311450;
        case 0x311454u: goto label_311454;
        case 0x311458u: goto label_311458;
        case 0x31145cu: goto label_31145c;
        case 0x311460u: goto label_311460;
        case 0x311464u: goto label_311464;
        case 0x311468u: goto label_311468;
        case 0x31146cu: goto label_31146c;
        case 0x311470u: goto label_311470;
        case 0x311474u: goto label_311474;
        case 0x311478u: goto label_311478;
        case 0x31147cu: goto label_31147c;
        case 0x311480u: goto label_311480;
        case 0x311484u: goto label_311484;
        case 0x311488u: goto label_311488;
        case 0x31148cu: goto label_31148c;
        case 0x311490u: goto label_311490;
        case 0x311494u: goto label_311494;
        case 0x311498u: goto label_311498;
        case 0x31149cu: goto label_31149c;
        case 0x3114a0u: goto label_3114a0;
        case 0x3114a4u: goto label_3114a4;
        case 0x3114a8u: goto label_3114a8;
        case 0x3114acu: goto label_3114ac;
        case 0x3114b0u: goto label_3114b0;
        case 0x3114b4u: goto label_3114b4;
        case 0x3114b8u: goto label_3114b8;
        case 0x3114bcu: goto label_3114bc;
        case 0x3114c0u: goto label_3114c0;
        case 0x3114c4u: goto label_3114c4;
        case 0x3114c8u: goto label_3114c8;
        case 0x3114ccu: goto label_3114cc;
        case 0x3114d0u: goto label_3114d0;
        case 0x3114d4u: goto label_3114d4;
        case 0x3114d8u: goto label_3114d8;
        case 0x3114dcu: goto label_3114dc;
        case 0x3114e0u: goto label_3114e0;
        case 0x3114e4u: goto label_3114e4;
        case 0x3114e8u: goto label_3114e8;
        case 0x3114ecu: goto label_3114ec;
        case 0x3114f0u: goto label_3114f0;
        case 0x3114f4u: goto label_3114f4;
        case 0x3114f8u: goto label_3114f8;
        case 0x3114fcu: goto label_3114fc;
        case 0x311500u: goto label_311500;
        case 0x311504u: goto label_311504;
        case 0x311508u: goto label_311508;
        case 0x31150cu: goto label_31150c;
        case 0x311510u: goto label_311510;
        case 0x311514u: goto label_311514;
        case 0x311518u: goto label_311518;
        case 0x31151cu: goto label_31151c;
        case 0x311520u: goto label_311520;
        case 0x311524u: goto label_311524;
        case 0x311528u: goto label_311528;
        case 0x31152cu: goto label_31152c;
        case 0x311530u: goto label_311530;
        case 0x311534u: goto label_311534;
        case 0x311538u: goto label_311538;
        case 0x31153cu: goto label_31153c;
        case 0x311540u: goto label_311540;
        case 0x311544u: goto label_311544;
        case 0x311548u: goto label_311548;
        case 0x31154cu: goto label_31154c;
        case 0x311550u: goto label_311550;
        case 0x311554u: goto label_311554;
        case 0x311558u: goto label_311558;
        case 0x31155cu: goto label_31155c;
        case 0x311560u: goto label_311560;
        case 0x311564u: goto label_311564;
        case 0x311568u: goto label_311568;
        case 0x31156cu: goto label_31156c;
        case 0x311570u: goto label_311570;
        case 0x311574u: goto label_311574;
        case 0x311578u: goto label_311578;
        case 0x31157cu: goto label_31157c;
        case 0x311580u: goto label_311580;
        case 0x311584u: goto label_311584;
        case 0x311588u: goto label_311588;
        case 0x31158cu: goto label_31158c;
        case 0x311590u: goto label_311590;
        case 0x311594u: goto label_311594;
        case 0x311598u: goto label_311598;
        case 0x31159cu: goto label_31159c;
        case 0x3115a0u: goto label_3115a0;
        case 0x3115a4u: goto label_3115a4;
        case 0x3115a8u: goto label_3115a8;
        case 0x3115acu: goto label_3115ac;
        case 0x3115b0u: goto label_3115b0;
        case 0x3115b4u: goto label_3115b4;
        case 0x3115b8u: goto label_3115b8;
        case 0x3115bcu: goto label_3115bc;
        case 0x3115c0u: goto label_3115c0;
        case 0x3115c4u: goto label_3115c4;
        case 0x3115c8u: goto label_3115c8;
        case 0x3115ccu: goto label_3115cc;
        case 0x3115d0u: goto label_3115d0;
        case 0x3115d4u: goto label_3115d4;
        case 0x3115d8u: goto label_3115d8;
        case 0x3115dcu: goto label_3115dc;
        case 0x3115e0u: goto label_3115e0;
        case 0x3115e4u: goto label_3115e4;
        case 0x3115e8u: goto label_3115e8;
        case 0x3115ecu: goto label_3115ec;
        case 0x3115f0u: goto label_3115f0;
        case 0x3115f4u: goto label_3115f4;
        case 0x3115f8u: goto label_3115f8;
        case 0x3115fcu: goto label_3115fc;
        case 0x311600u: goto label_311600;
        case 0x311604u: goto label_311604;
        case 0x311608u: goto label_311608;
        case 0x31160cu: goto label_31160c;
        case 0x311610u: goto label_311610;
        case 0x311614u: goto label_311614;
        case 0x311618u: goto label_311618;
        case 0x31161cu: goto label_31161c;
        case 0x311620u: goto label_311620;
        case 0x311624u: goto label_311624;
        case 0x311628u: goto label_311628;
        case 0x31162cu: goto label_31162c;
        case 0x311630u: goto label_311630;
        case 0x311634u: goto label_311634;
        case 0x311638u: goto label_311638;
        case 0x31163cu: goto label_31163c;
        case 0x311640u: goto label_311640;
        case 0x311644u: goto label_311644;
        case 0x311648u: goto label_311648;
        case 0x31164cu: goto label_31164c;
        case 0x311650u: goto label_311650;
        case 0x311654u: goto label_311654;
        case 0x311658u: goto label_311658;
        case 0x31165cu: goto label_31165c;
        case 0x311660u: goto label_311660;
        case 0x311664u: goto label_311664;
        case 0x311668u: goto label_311668;
        case 0x31166cu: goto label_31166c;
        case 0x311670u: goto label_311670;
        case 0x311674u: goto label_311674;
        case 0x311678u: goto label_311678;
        case 0x31167cu: goto label_31167c;
        case 0x311680u: goto label_311680;
        case 0x311684u: goto label_311684;
        case 0x311688u: goto label_311688;
        case 0x31168cu: goto label_31168c;
        case 0x311690u: goto label_311690;
        case 0x311694u: goto label_311694;
        case 0x311698u: goto label_311698;
        case 0x31169cu: goto label_31169c;
        case 0x3116a0u: goto label_3116a0;
        case 0x3116a4u: goto label_3116a4;
        case 0x3116a8u: goto label_3116a8;
        case 0x3116acu: goto label_3116ac;
        case 0x3116b0u: goto label_3116b0;
        case 0x3116b4u: goto label_3116b4;
        case 0x3116b8u: goto label_3116b8;
        case 0x3116bcu: goto label_3116bc;
        case 0x3116c0u: goto label_3116c0;
        case 0x3116c4u: goto label_3116c4;
        case 0x3116c8u: goto label_3116c8;
        case 0x3116ccu: goto label_3116cc;
        case 0x3116d0u: goto label_3116d0;
        case 0x3116d4u: goto label_3116d4;
        case 0x3116d8u: goto label_3116d8;
        case 0x3116dcu: goto label_3116dc;
        case 0x3116e0u: goto label_3116e0;
        case 0x3116e4u: goto label_3116e4;
        case 0x3116e8u: goto label_3116e8;
        case 0x3116ecu: goto label_3116ec;
        case 0x3116f0u: goto label_3116f0;
        case 0x3116f4u: goto label_3116f4;
        case 0x3116f8u: goto label_3116f8;
        case 0x3116fcu: goto label_3116fc;
        case 0x311700u: goto label_311700;
        case 0x311704u: goto label_311704;
        case 0x311708u: goto label_311708;
        case 0x31170cu: goto label_31170c;
        case 0x311710u: goto label_311710;
        case 0x311714u: goto label_311714;
        case 0x311718u: goto label_311718;
        case 0x31171cu: goto label_31171c;
        case 0x311720u: goto label_311720;
        case 0x311724u: goto label_311724;
        case 0x311728u: goto label_311728;
        case 0x31172cu: goto label_31172c;
        case 0x311730u: goto label_311730;
        case 0x311734u: goto label_311734;
        case 0x311738u: goto label_311738;
        case 0x31173cu: goto label_31173c;
        case 0x311740u: goto label_311740;
        case 0x311744u: goto label_311744;
        case 0x311748u: goto label_311748;
        case 0x31174cu: goto label_31174c;
        case 0x311750u: goto label_311750;
        case 0x311754u: goto label_311754;
        case 0x311758u: goto label_311758;
        case 0x31175cu: goto label_31175c;
        case 0x311760u: goto label_311760;
        case 0x311764u: goto label_311764;
        case 0x311768u: goto label_311768;
        case 0x31176cu: goto label_31176c;
        case 0x311770u: goto label_311770;
        case 0x311774u: goto label_311774;
        case 0x311778u: goto label_311778;
        case 0x31177cu: goto label_31177c;
        case 0x311780u: goto label_311780;
        case 0x311784u: goto label_311784;
        case 0x311788u: goto label_311788;
        case 0x31178cu: goto label_31178c;
        case 0x311790u: goto label_311790;
        case 0x311794u: goto label_311794;
        case 0x311798u: goto label_311798;
        case 0x31179cu: goto label_31179c;
        case 0x3117a0u: goto label_3117a0;
        case 0x3117a4u: goto label_3117a4;
        case 0x3117a8u: goto label_3117a8;
        case 0x3117acu: goto label_3117ac;
        case 0x3117b0u: goto label_3117b0;
        case 0x3117b4u: goto label_3117b4;
        case 0x3117b8u: goto label_3117b8;
        case 0x3117bcu: goto label_3117bc;
        case 0x3117c0u: goto label_3117c0;
        case 0x3117c4u: goto label_3117c4;
        case 0x3117c8u: goto label_3117c8;
        case 0x3117ccu: goto label_3117cc;
        case 0x3117d0u: goto label_3117d0;
        case 0x3117d4u: goto label_3117d4;
        case 0x3117d8u: goto label_3117d8;
        case 0x3117dcu: goto label_3117dc;
        case 0x3117e0u: goto label_3117e0;
        case 0x3117e4u: goto label_3117e4;
        case 0x3117e8u: goto label_3117e8;
        case 0x3117ecu: goto label_3117ec;
        case 0x3117f0u: goto label_3117f0;
        case 0x3117f4u: goto label_3117f4;
        case 0x3117f8u: goto label_3117f8;
        case 0x3117fcu: goto label_3117fc;
        case 0x311800u: goto label_311800;
        case 0x311804u: goto label_311804;
        case 0x311808u: goto label_311808;
        case 0x31180cu: goto label_31180c;
        case 0x311810u: goto label_311810;
        case 0x311814u: goto label_311814;
        case 0x311818u: goto label_311818;
        case 0x31181cu: goto label_31181c;
        case 0x311820u: goto label_311820;
        case 0x311824u: goto label_311824;
        case 0x311828u: goto label_311828;
        case 0x31182cu: goto label_31182c;
        case 0x311830u: goto label_311830;
        case 0x311834u: goto label_311834;
        case 0x311838u: goto label_311838;
        case 0x31183cu: goto label_31183c;
        case 0x311840u: goto label_311840;
        case 0x311844u: goto label_311844;
        case 0x311848u: goto label_311848;
        case 0x31184cu: goto label_31184c;
        case 0x311850u: goto label_311850;
        case 0x311854u: goto label_311854;
        case 0x311858u: goto label_311858;
        case 0x31185cu: goto label_31185c;
        case 0x311860u: goto label_311860;
        case 0x311864u: goto label_311864;
        case 0x311868u: goto label_311868;
        case 0x31186cu: goto label_31186c;
        case 0x311870u: goto label_311870;
        case 0x311874u: goto label_311874;
        case 0x311878u: goto label_311878;
        case 0x31187cu: goto label_31187c;
        case 0x311880u: goto label_311880;
        case 0x311884u: goto label_311884;
        case 0x311888u: goto label_311888;
        case 0x31188cu: goto label_31188c;
        case 0x311890u: goto label_311890;
        case 0x311894u: goto label_311894;
        case 0x311898u: goto label_311898;
        case 0x31189cu: goto label_31189c;
        case 0x3118a0u: goto label_3118a0;
        case 0x3118a4u: goto label_3118a4;
        case 0x3118a8u: goto label_3118a8;
        case 0x3118acu: goto label_3118ac;
        case 0x3118b0u: goto label_3118b0;
        case 0x3118b4u: goto label_3118b4;
        case 0x3118b8u: goto label_3118b8;
        case 0x3118bcu: goto label_3118bc;
        case 0x3118c0u: goto label_3118c0;
        case 0x3118c4u: goto label_3118c4;
        case 0x3118c8u: goto label_3118c8;
        case 0x3118ccu: goto label_3118cc;
        case 0x3118d0u: goto label_3118d0;
        case 0x3118d4u: goto label_3118d4;
        case 0x3118d8u: goto label_3118d8;
        case 0x3118dcu: goto label_3118dc;
        case 0x3118e0u: goto label_3118e0;
        case 0x3118e4u: goto label_3118e4;
        case 0x3118e8u: goto label_3118e8;
        case 0x3118ecu: goto label_3118ec;
        case 0x3118f0u: goto label_3118f0;
        case 0x3118f4u: goto label_3118f4;
        case 0x3118f8u: goto label_3118f8;
        case 0x3118fcu: goto label_3118fc;
        case 0x311900u: goto label_311900;
        case 0x311904u: goto label_311904;
        case 0x311908u: goto label_311908;
        case 0x31190cu: goto label_31190c;
        case 0x311910u: goto label_311910;
        case 0x311914u: goto label_311914;
        case 0x311918u: goto label_311918;
        case 0x31191cu: goto label_31191c;
        case 0x311920u: goto label_311920;
        case 0x311924u: goto label_311924;
        case 0x311928u: goto label_311928;
        case 0x31192cu: goto label_31192c;
        case 0x311930u: goto label_311930;
        case 0x311934u: goto label_311934;
        case 0x311938u: goto label_311938;
        case 0x31193cu: goto label_31193c;
        case 0x311940u: goto label_311940;
        case 0x311944u: goto label_311944;
        case 0x311948u: goto label_311948;
        case 0x31194cu: goto label_31194c;
        case 0x311950u: goto label_311950;
        case 0x311954u: goto label_311954;
        case 0x311958u: goto label_311958;
        case 0x31195cu: goto label_31195c;
        case 0x311960u: goto label_311960;
        case 0x311964u: goto label_311964;
        case 0x311968u: goto label_311968;
        case 0x31196cu: goto label_31196c;
        case 0x311970u: goto label_311970;
        case 0x311974u: goto label_311974;
        case 0x311978u: goto label_311978;
        case 0x31197cu: goto label_31197c;
        case 0x311980u: goto label_311980;
        case 0x311984u: goto label_311984;
        case 0x311988u: goto label_311988;
        case 0x31198cu: goto label_31198c;
        case 0x311990u: goto label_311990;
        case 0x311994u: goto label_311994;
        case 0x311998u: goto label_311998;
        case 0x31199cu: goto label_31199c;
        case 0x3119a0u: goto label_3119a0;
        case 0x3119a4u: goto label_3119a4;
        case 0x3119a8u: goto label_3119a8;
        case 0x3119acu: goto label_3119ac;
        case 0x3119b0u: goto label_3119b0;
        case 0x3119b4u: goto label_3119b4;
        case 0x3119b8u: goto label_3119b8;
        case 0x3119bcu: goto label_3119bc;
        case 0x3119c0u: goto label_3119c0;
        case 0x3119c4u: goto label_3119c4;
        case 0x3119c8u: goto label_3119c8;
        case 0x3119ccu: goto label_3119cc;
        case 0x3119d0u: goto label_3119d0;
        case 0x3119d4u: goto label_3119d4;
        case 0x3119d8u: goto label_3119d8;
        case 0x3119dcu: goto label_3119dc;
        case 0x3119e0u: goto label_3119e0;
        case 0x3119e4u: goto label_3119e4;
        case 0x3119e8u: goto label_3119e8;
        case 0x3119ecu: goto label_3119ec;
        case 0x3119f0u: goto label_3119f0;
        case 0x3119f4u: goto label_3119f4;
        case 0x3119f8u: goto label_3119f8;
        case 0x3119fcu: goto label_3119fc;
        case 0x311a00u: goto label_311a00;
        case 0x311a04u: goto label_311a04;
        case 0x311a08u: goto label_311a08;
        case 0x311a0cu: goto label_311a0c;
        case 0x311a10u: goto label_311a10;
        case 0x311a14u: goto label_311a14;
        case 0x311a18u: goto label_311a18;
        case 0x311a1cu: goto label_311a1c;
        case 0x311a20u: goto label_311a20;
        case 0x311a24u: goto label_311a24;
        case 0x311a28u: goto label_311a28;
        case 0x311a2cu: goto label_311a2c;
        case 0x311a30u: goto label_311a30;
        case 0x311a34u: goto label_311a34;
        case 0x311a38u: goto label_311a38;
        case 0x311a3cu: goto label_311a3c;
        case 0x311a40u: goto label_311a40;
        case 0x311a44u: goto label_311a44;
        case 0x311a48u: goto label_311a48;
        case 0x311a4cu: goto label_311a4c;
        case 0x311a50u: goto label_311a50;
        case 0x311a54u: goto label_311a54;
        case 0x311a58u: goto label_311a58;
        case 0x311a5cu: goto label_311a5c;
        case 0x311a60u: goto label_311a60;
        case 0x311a64u: goto label_311a64;
        case 0x311a68u: goto label_311a68;
        case 0x311a6cu: goto label_311a6c;
        case 0x311a70u: goto label_311a70;
        case 0x311a74u: goto label_311a74;
        case 0x311a78u: goto label_311a78;
        case 0x311a7cu: goto label_311a7c;
        case 0x311a80u: goto label_311a80;
        case 0x311a84u: goto label_311a84;
        case 0x311a88u: goto label_311a88;
        case 0x311a8cu: goto label_311a8c;
        case 0x311a90u: goto label_311a90;
        case 0x311a94u: goto label_311a94;
        case 0x311a98u: goto label_311a98;
        case 0x311a9cu: goto label_311a9c;
        case 0x311aa0u: goto label_311aa0;
        case 0x311aa4u: goto label_311aa4;
        case 0x311aa8u: goto label_311aa8;
        case 0x311aacu: goto label_311aac;
        case 0x311ab0u: goto label_311ab0;
        case 0x311ab4u: goto label_311ab4;
        case 0x311ab8u: goto label_311ab8;
        case 0x311abcu: goto label_311abc;
        case 0x311ac0u: goto label_311ac0;
        case 0x311ac4u: goto label_311ac4;
        case 0x311ac8u: goto label_311ac8;
        case 0x311accu: goto label_311acc;
        case 0x311ad0u: goto label_311ad0;
        case 0x311ad4u: goto label_311ad4;
        case 0x311ad8u: goto label_311ad8;
        case 0x311adcu: goto label_311adc;
        case 0x311ae0u: goto label_311ae0;
        case 0x311ae4u: goto label_311ae4;
        case 0x311ae8u: goto label_311ae8;
        case 0x311aecu: goto label_311aec;
        case 0x311af0u: goto label_311af0;
        case 0x311af4u: goto label_311af4;
        case 0x311af8u: goto label_311af8;
        case 0x311afcu: goto label_311afc;
        case 0x311b00u: goto label_311b00;
        case 0x311b04u: goto label_311b04;
        default: break;
    }

    ctx->pc = 0x311118u;

label_311118:
    // 0x311118: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x311118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_31111c:
    // 0x31111c: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x31111cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
label_311120:
    // 0x311120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_311124:
    // 0x311124: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x311124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
label_311128:
    // 0x311128: 0xa0622160  sb          $v0, 0x2160($v1)
    ctx->pc = 0x311128u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8544), (uint8_t)GPR_U32(ctx, 2));
label_31112c:
    // 0x31112c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x31112cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_311130:
    // 0x311130: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x311130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_311134:
    // 0x311134: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x311134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_311138:
    // 0x311138: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x311138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
label_31113c:
    // 0x31113c: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x31113cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_311140:
    // 0x311140: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x311140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
label_311144:
    // 0x311144: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x311144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_311148:
    // 0x311148: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x311148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
label_31114c:
    // 0x31114c: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x31114cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_311150:
    // 0x311150: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x311150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
label_311154:
    // 0x311154: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x311154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
label_311158:
    // 0x311158: 0xe7bb0108  swc1        $f27, 0x108($sp)
    ctx->pc = 0x311158u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_31115c:
    // 0x31115c: 0xe7ba0100  swc1        $f26, 0x100($sp)
    ctx->pc = 0x31115cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_311160:
    // 0x311160: 0xe7b900f8  swc1        $f25, 0xF8($sp)
    ctx->pc = 0x311160u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_311164:
    // 0x311164: 0xe7b800f0  swc1        $f24, 0xF0($sp)
    ctx->pc = 0x311164u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_311168:
    // 0x311168: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x311168u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_31116c:
    // 0x31116c: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x31116cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_311170:
    // 0x311170: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x311170u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_311174:
    // 0x311174: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x311174u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_311178:
    // 0x311178: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x311178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_31117c:
    // 0x31117c: 0x8ca3bd48  lw          $v1, -0x42B8($a1)
    ctx->pc = 0x31117cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950216)));
label_311180:
    // 0x311180: 0x8fc20530  lw          $v0, 0x530($fp)
    ctx->pc = 0x311180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1328)));
label_311184:
    // 0x311184: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x311184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_311188:
    // 0x311188: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x311188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
label_31118c:
    // 0x31118c: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x31118cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_311190:
    // 0x311190: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x311190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_311194:
    // 0x311194: 0x1860023a  blez        $v1, . + 4 + (0x23A << 2)
label_311198:
    if (ctx->pc == 0x311198u) {
        ctx->pc = 0x311198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311194u;
        // 0x311198: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31119Cu;
        goto label_31119c;
    }
    ctx->pc = 0x311194u;
    {
        const bool branch_taken_0x311194 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x311198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311194u;
        // 0x311198: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311194) {
            ctx->pc = 0x311A80u;
            goto label_311a80;
        }
    }
    ctx->pc = 0x31119Cu;
label_31119c:
    // 0x31119c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x31119cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3111a0:
    // 0x3111a0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3111a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3111a4:
    // 0x3111a4: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x3111a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_3111a8:
    // 0x3111a8: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x3111a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_3111ac:
    // 0x3111ac: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x3111acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
label_3111b0:
    // 0x3111b0: 0x27d40034  addiu       $s4, $fp, 0x34
    ctx->pc = 0x3111b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 52));
label_3111b4:
    // 0x3111b4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x3111b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_3111b8:
    // 0x3111b8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x3111b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_3111bc:
    // 0x3111bc: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3111bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3111c0:
    // 0x3111c0: 0x3c013f2a  lui         $at, 0x3F2A
    ctx->pc = 0x3111c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16170 << 16));
label_3111c4:
    // 0x3111c4: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x3111c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_3111c8:
    // 0x3111c8: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3111c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3111cc:
    // 0x3111cc: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x3111ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_3111d0:
    // 0x3111d0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3111d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3111d4:
    // 0x3111d4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3111d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3111d8:
    // 0x3111d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3111d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3111dc:
    // 0x3111dc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3111dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3111e0:
    // 0x3111e0: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x3111e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_3111e4:
    // 0x3111e4: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x3111e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_3111e8:
    // 0x3111e8: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x3111e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_3111ec:
    // 0x3111ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3111ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3111f0:
    // 0x3111f0: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x3111f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_3111f4:
    // 0x3111f4: 0x0  nop
    ctx->pc = 0x3111f4u;
    // NOP
label_3111f8:
    // 0x3111f8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3111f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3111fc:
    // 0x3111fc: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x3111fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
label_311200:
    // 0x311200: 0xc0c2914  jal         func_30A450
label_311204:
    if (ctx->pc == 0x311204u) {
        ctx->pc = 0x311204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311200u;
        // 0x311204: 0x3c2b821  addu        $s7, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311208u;
        goto label_311208;
    }
    ctx->pc = 0x311200u;
    SET_GPR_U32(ctx, 31, 0x311208u);
    ctx->pc = 0x311204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311200u;
    // 0x311204: 0x3c2b821  addu        $s7, $fp, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A450u, 0x311200u, 0x311208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311208u;
label_311208:
    // 0x311208: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x311208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
label_31120c:
    // 0x31120c: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x31120cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_311210:
    // 0x311210: 0x24842170  addiu       $a0, $a0, 0x2170
    ctx->pc = 0x311210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8560));
label_311214:
    // 0x311214: 0xc0b2af0  jal         func_2CABC0
label_311218:
    if (ctx->pc == 0x311218u) {
        ctx->pc = 0x311218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311214u;
        // 0x311218: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31121Cu;
        goto label_31121c;
    }
    ctx->pc = 0x311214u;
    SET_GPR_U32(ctx, 31, 0x31121Cu);
    ctx->pc = 0x311218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311214u;
    // 0x311218: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x311214u, 0x31121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31121Cu;
label_31121c:
    // 0x31121c: 0xc0c4808  jal         func_312020
label_311220:
    if (ctx->pc == 0x311220u) {
        ctx->pc = 0x311220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31121Cu;
        // 0x311220: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311224u;
        goto label_311224;
    }
    ctx->pc = 0x31121Cu;
    SET_GPR_U32(ctx, 31, 0x311224u);
    ctx->pc = 0x311220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31121Cu;
    // 0x311220: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312020u, 0x31121Cu, 0x311224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311224u;
label_311224:
    // 0x311224: 0xae82ffd8  sw          $v0, -0x28($s4)
    ctx->pc = 0x311224u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294967256), GPR_U32(ctx, 2));
label_311228:
    // 0x311228: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x311228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_31122c:
    // 0x31122c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31122cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_311230:
    // 0x311230: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x311230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_311234:
    // 0x311234: 0xc460bccc  lwc1        $f0, -0x4334($v1)
    ctx->pc = 0x311234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294950092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_311238:
    // 0x311238: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x311238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31123c:
    // 0x31123c: 0xc441bcc8  lwc1        $f1, -0x4338($v0)
    ctx->pc = 0x31123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_311240:
    // 0x311240: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x311240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_311244:
    // 0x311244: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x311244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_311248:
    // 0x311248: 0xaca4010c  sw          $a0, 0x10C($a1)
    ctx->pc = 0x311248u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 268), GPR_U32(ctx, 4));
label_31124c:
    // 0x31124c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x31124cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_311250:
    // 0x311250: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x311250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_311254:
    // 0x311254: 0xe44100e0  swc1        $f1, 0xE0($v0)
    ctx->pc = 0x311254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
label_311258:
    // 0x311258: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x311258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31125c:
    // 0x31125c: 0xe44000e4  swc1        $f0, 0xE4($v0)
    ctx->pc = 0x31125cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
label_311260:
    // 0x311260: 0xc0e3e70  jal         func_38F9C0
label_311264:
    if (ctx->pc == 0x311264u) {
        ctx->pc = 0x311264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311260u;
        // 0x311264: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x311268u;
        goto label_311268;
    }
    ctx->pc = 0x311260u;
    SET_GPR_U32(ctx, 31, 0x311268u);
    ctx->pc = 0x311264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311260u;
    // 0x311264: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9C0u, 0x311260u, 0x311268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311268u;
label_311268:
    // 0x311268: 0x461b0002  mul.s       $f0, $f0, $f27
    ctx->pc = 0x311268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[27]);
label_31126c:
    // 0x31126c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x31126cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_311270:
    // 0x311270: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x311270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_311274:
    // 0x311274: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x311274u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_311278:
    // 0x311278: 0xc0e3e70  jal         func_38F9C0
label_31127c:
    if (ctx->pc == 0x31127Cu) {
        ctx->pc = 0x31127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311278u;
        // 0x31127c: 0xe480bb7c  swc1        $f0, -0x4484($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294949756), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x311280u;
        goto label_311280;
    }
    ctx->pc = 0x311278u;
    SET_GPR_U32(ctx, 31, 0x311280u);
    ctx->pc = 0x31127Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311278u;
    // 0x31127c: 0xe480bb7c  swc1        $f0, -0x4484($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294949756), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9C0u, 0x311278u, 0x311280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311280u;
label_311280:
    // 0x311280: 0x461b0002  mul.s       $f0, $f0, $f27
    ctx->pc = 0x311280u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[27]);
label_311284:
    // 0x311284: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x311284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_311288:
    // 0x311288: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x311288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_31128c:
    // 0x31128c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31128cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_311290:
    // 0x311290: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x311290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_311294:
    // 0x311294: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x311294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_311298:
    // 0x311298: 0x2484ef00  addiu       $a0, $a0, -0x1100
    ctx->pc = 0x311298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962944));
label_31129c:
    // 0x31129c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x31129cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3112a0:
    // 0x3112a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3112a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3112a4:
    // 0x3112a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3112a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3112a8:
    // 0x3112a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3112a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3112ac:
    // 0x3112ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3112acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3112b0:
    // 0x3112b0: 0xe440bb80  swc1        $f0, -0x4480($v0)
    ctx->pc = 0x3112b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294949760), bits); }
label_3112b4:
    // 0x3112b4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3112b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3112b8:
    // 0x3112b8: 0xe45800f0  swc1        $f24, 0xF0($v0)
    ctx->pc = 0x3112b8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
label_3112bc:
    // 0x3112bc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3112bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3112c0:
    // 0x3112c0: 0xe46100f4  swc1        $f1, 0xF4($v1)
    ctx->pc = 0x3112c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
label_3112c4:
    // 0x3112c4: 0x8e82ffd8  lw          $v0, -0x28($s4)
    ctx->pc = 0x3112c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967256)));
label_3112c8:
    // 0x3112c8: 0x8e8a0000  lw          $t2, 0x0($s4)
    ctx->pc = 0x3112c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3112cc:
    // 0x3112cc: 0xc0da22a  jal         func_3688A8
label_3112d0:
    if (ctx->pc == 0x3112D0u) {
        ctx->pc = 0x3112D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3112CCu;
        // 0x3112d0: 0xad420100  sw          $v0, 0x100($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3112D4u;
        goto label_3112d4;
    }
    ctx->pc = 0x3112CCu;
    SET_GPR_U32(ctx, 31, 0x3112D4u);
    ctx->pc = 0x3112D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3112CCu;
    // 0x3112d0: 0xad420100  sw          $v0, 0x100($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3688A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3688A8u, 0x3112CCu, 0x3112D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3112D4u;
label_3112d4:
    // 0x3112d4: 0x92e20008  lbu         $v0, 0x8($s7)
    ctx->pc = 0x3112d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
label_3112d8:
    // 0x3112d8: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_3112dc:
    if (ctx->pc == 0x3112DCu) {
        ctx->pc = 0x3112DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3112D8u;
        // 0x3112dc: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3112E0u;
        goto label_3112e0;
    }
    ctx->pc = 0x3112D8u;
    {
        const bool branch_taken_0x3112d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3112DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3112D8u;
        // 0x3112dc: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3112d8) {
            ctx->pc = 0x3113B4u;
            goto label_3113b4;
        }
    }
    ctx->pc = 0x3112E0u;
label_3112e0:
    // 0x3112e0: 0x8e82ffd8  lw          $v0, -0x28($s4)
    ctx->pc = 0x3112e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967256)));
label_3112e4:
    // 0x3112e4: 0xe7b90010  swc1        $f25, 0x10($sp)
    ctx->pc = 0x3112e4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3112e8:
    // 0x3112e8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x3112e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_3112ec:
    // 0x3112ec: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x3112ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_3112f0:
    // 0x3112f0: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x3112f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_3112f4:
    // 0x3112f4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x3112f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_3112f8:
    // 0x3112f8: 0xf8410040  sqc2        $vf1, 0x40($v0)
    ctx->pc = 0x3112f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_3112fc:
    // 0x3112fc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x3112fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_311300:
    // 0x311300: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x311300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_311304:
    // 0x311304: 0xe6190008  swc1        $f25, 0x8($s0)
    ctx->pc = 0x311304u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_311308:
    // 0x311308: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x311308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_31130c:
    // 0x31130c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x31130cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_311310:
    // 0x311310: 0xf8410050  sqc2        $vf1, 0x50($v0)
    ctx->pc = 0x311310u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_311314:
    // 0x311314: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x311314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_311318:
    // 0x311318: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x311318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31131c:
    // 0x31131c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x31131cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_311320:
    // 0x311320: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x311320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_311324:
    // 0x311324: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x311324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_311328:
    // 0x311328: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x311328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_31132c:
    // 0x31132c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x31132cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_311330:
    // 0x311330: 0xf8410060  sqc2        $vf1, 0x60($v0)
    ctx->pc = 0x311330u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_311334:
    // 0x311334: 0xc0f6a96  jal         func_3DAA58
label_311338:
    if (ctx->pc == 0x311338u) {
        ctx->pc = 0x311338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311334u;
        // 0x311338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31133Cu;
        goto label_31133c;
    }
    ctx->pc = 0x311334u;
    SET_GPR_U32(ctx, 31, 0x31133Cu);
    ctx->pc = 0x311338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311334u;
    // 0x311338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x311334u, 0x31133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31133Cu;
label_31133c:
    // 0x31133c: 0xa3a00020  sb          $zero, 0x20($sp)
    ctx->pc = 0x31133cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 0));
label_311340:
    // 0x311340: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x311340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_311344:
    // 0x311344: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x311344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_311348:
    // 0x311348: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x311348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_31134c:
    // 0x31134c: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x31134cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_311350:
    // 0x311350: 0x40f809  jalr        $v0
label_311354:
    if (ctx->pc == 0x311354u) {
        ctx->pc = 0x311354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311350u;
        // 0x311354: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311358u;
        goto label_311358;
    }
    ctx->pc = 0x311350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x311358u);
        ctx->pc = 0x311354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311350u;
        // 0x311354: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311350u, 0x311358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x311358u;
label_311358:
    // 0x311358: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x311358u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_31135c:
    // 0x31135c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x31135cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_311360:
    // 0x311360: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x311360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_311364:
    // 0x311364: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x311364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_311368:
    // 0x311368: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x311368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_31136c:
    // 0x31136c: 0x93a20020  lbu         $v0, 0x20($sp)
    ctx->pc = 0x31136cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_311370:
    // 0x311370: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x311370u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_311374:
    // 0x311374: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_311378:
    if (ctx->pc == 0x311378u) {
        ctx->pc = 0x311378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311374u;
        // 0x311378: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31137Cu;
        goto label_31137c;
    }
    ctx->pc = 0x311374u;
    {
        const bool branch_taken_0x311374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311374u;
        // 0x311378: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x311374) {
            ctx->pc = 0x3113A0u;
            goto label_3113a0;
        }
    }
    ctx->pc = 0x31137Cu;
label_31137c:
    // 0x31137c: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x31137cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_311380:
    // 0x311380: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x311380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_311384:
    // 0x311384: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x311384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_311388:
    // 0x311388: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x311388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_31138c:
    // 0x31138c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x31138cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_311390:
    // 0x311390: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x311390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_311394:
    // 0x311394: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x311394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_311398:
    // 0x311398: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x311398u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_31139c:
    // 0x31139c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x31139cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3113a0:
    // 0x3113a0: 0x8e84ffd8  lw          $a0, -0x28($s4)
    ctx->pc = 0x3113a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967256)));
label_3113a4:
    // 0x3113a4: 0xc0c48ce  jal         func_312338
label_3113a8:
    if (ctx->pc == 0x3113A8u) {
        ctx->pc = 0x3113A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113A4u;
        // 0x3113a8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3113ACu;
        goto label_3113ac;
    }
    ctx->pc = 0x3113A4u;
    SET_GPR_U32(ctx, 31, 0x3113ACu);
    ctx->pc = 0x3113A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3113A4u;
    // 0x3113a8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312338u, 0x3113A4u, 0x3113ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3113ACu;
label_3113ac:
    // 0x3113ac: 0x100000bb  b           . + 4 + (0xBB << 2)
label_3113b0:
    if (ctx->pc == 0x3113B0u) {
        ctx->pc = 0x3113B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113ACu;
        // 0x3113b0: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3113B4u;
        goto label_3113b4;
    }
    ctx->pc = 0x3113ACu;
    {
        const bool branch_taken_0x3113ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3113B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113ACu;
        // 0x3113b0: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3113ac) {
            ctx->pc = 0x31169Cu;
            goto label_31169c;
        }
    }
    ctx->pc = 0x3113B4u;
label_3113b4:
    // 0x3113b4: 0x8e90ffd8  lw          $s0, -0x28($s4)
    ctx->pc = 0x3113b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967256)));
label_3113b8:
    // 0x3113b8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3113b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3113bc:
    // 0x3113bc: 0xc0f6a96  jal         func_3DAA58
label_3113c0:
    if (ctx->pc == 0x3113C0u) {
        ctx->pc = 0x3113C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113BCu;
        // 0x3113c0: 0x8ef50000  lw          $s5, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3113C4u;
        goto label_3113c4;
    }
    ctx->pc = 0x3113BCu;
    SET_GPR_U32(ctx, 31, 0x3113C4u);
    ctx->pc = 0x3113C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3113BCu;
    // 0x3113c0: 0x8ef50000  lw          $s5, 0x0($s7) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3113BCu, 0x3113C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3113C4u;
label_3113c4:
    // 0x3113c4: 0x26120040  addiu       $s2, $s0, 0x40
    ctx->pc = 0x3113c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_3113c8:
    // 0x3113c8: 0xa3a00021  sb          $zero, 0x21($sp)
    ctx->pc = 0x3113c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 0));
label_3113cc:
    // 0x3113cc: 0x27a50021  addiu       $a1, $sp, 0x21
    ctx->pc = 0x3113ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 33));
label_3113d0:
    // 0x3113d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3113d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3113d4:
    // 0x3113d4: 0x26130050  addiu       $s3, $s0, 0x50
    ctx->pc = 0x3113d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_3113d8:
    // 0x3113d8: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x3113d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_3113dc:
    // 0x3113dc: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x3113dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_3113e0:
    // 0x3113e0: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x3113e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_3113e4:
    // 0x3113e4: 0x40f809  jalr        $v0
label_3113e8:
    if (ctx->pc == 0x3113E8u) {
        ctx->pc = 0x3113E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113E4u;
        // 0x3113e8: 0x26110060  addiu       $s1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3113ECu;
        goto label_3113ec;
    }
    ctx->pc = 0x3113E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3113ECu);
        ctx->pc = 0x3113E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113E4u;
        // 0x3113e8: 0x26110060  addiu       $s1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3113E4u, 0x3113ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3113ECu;
label_3113ec:
    // 0x3113ec: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3113ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3113f0:
    // 0x3113f0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x3113f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_3113f4:
    // 0x3113f4: 0x93a20021  lbu         $v0, 0x21($sp)
    ctx->pc = 0x3113f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 33)));
label_3113f8:
    // 0x3113f8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3113fc:
    if (ctx->pc == 0x3113FCu) {
        ctx->pc = 0x3113FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113F8u;
        // 0x3113fc: 0x26a202b0  addiu       $v0, $s5, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311400u;
        goto label_311400;
    }
    ctx->pc = 0x3113F8u;
    {
        const bool branch_taken_0x3113f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3113FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113F8u;
        // 0x3113fc: 0x26a202b0  addiu       $v0, $s5, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3113f8) {
            ctx->pc = 0x31141Cu;
            goto label_31141c;
        }
    }
    ctx->pc = 0x311400u;
label_311400:
    // 0x311400: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x311400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_311404:
    // 0x311404: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x311404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_311408:
    // 0x311408: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x311408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31140c:
    // 0x31140c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x31140cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_311410:
    // 0x311410: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x311410u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_311414:
    // 0x311414: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x311414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_311418:
    // 0x311418: 0x26a202b0  addiu       $v0, $s5, 0x2B0
    ctx->pc = 0x311418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 688));
label_31141c:
    // 0x31141c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x31141cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_311420:
    // 0x311420: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x311420u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_311424:
    // 0x311424: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x311424u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_311428:
    // 0x311428: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x311428u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_31142c:
    // 0x31142c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x31142cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_311430:
    // 0x311430: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x311430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_311434:
    // 0x311434: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x311434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_311438:
    // 0x311438: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x311438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31143c:
    // 0x31143c: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x31143cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_311440:
    // 0x311440: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x311440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_311444:
    // 0x311444: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x311444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_311448:
    // 0x311448: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x311448u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_31144c:
    // 0x31144c: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x31144cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_311450:
    // 0x311450: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x311450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_311454:
    // 0x311454: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x311454u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_311458:
    // 0x311458: 0xfa010060  sqc2        $vf1, 0x60($s0)
    ctx->pc = 0x311458u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_31145c:
    // 0x31145c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x31145cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_311460:
    // 0x311460: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x311460u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_311464:
    // 0x311464: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x311464u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_311468:
    // 0x311468: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x311468u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_31146c:
    // 0x31146c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x31146cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_311470:
    // 0x311470: 0x4a0003bf  vwaitq
    ctx->pc = 0x311470u;
    // VWAITQ (Q already resolved in this runtime)
label_311474:
    // 0x311474: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x311474u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_311478:
    // 0x311478: 0xfa010060  sqc2        $vf1, 0x60($s0)
    ctx->pc = 0x311478u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_31147c:
    // 0x31147c: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x31147cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_311480:
    // 0x311480: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x311480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_311484:
    // 0x311484: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x311484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_311488:
    // 0x311488: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x311488u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_31148c:
    // 0x31148c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x31148cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_311490:
    // 0x311490: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x311490u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_311494:
    // 0x311494: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x311494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_311498:
    // 0x311498: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x311498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31149c:
    // 0x31149c: 0x0  nop
    ctx->pc = 0x31149cu;
    // NOP
label_3114a0:
    // 0x3114a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3114a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3114a4:
    // 0x3114a4: 0x0  nop
    ctx->pc = 0x3114a4u;
    // NOP
label_3114a8:
    // 0x3114a8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_3114ac:
    if (ctx->pc == 0x3114ACu) {
        ctx->pc = 0x3114ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114A8u;
        // 0x3114ac: 0x27b60030  addiu       $s6, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3114B0u;
        goto label_3114b0;
    }
    ctx->pc = 0x3114A8u;
    {
        const bool branch_taken_0x3114a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3114ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114A8u;
        // 0x3114ac: 0x27b60030  addiu       $s6, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3114a8) {
            ctx->pc = 0x3114CCu;
            goto label_3114cc;
        }
    }
    ctx->pc = 0x3114B0u;
label_3114b0:
    // 0x3114b0: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x3114b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
label_3114b4:
    // 0x3114b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3114b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3114b8:
    // 0x3114b8: 0x0  nop
    ctx->pc = 0x3114b8u;
    // NOP
label_3114bc:
    // 0x3114bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3114bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3114c0:
    // 0x3114c0: 0x0  nop
    ctx->pc = 0x3114c0u;
    // NOP
label_3114c4:
    // 0x3114c4: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
label_3114c8:
    if (ctx->pc == 0x3114C8u) {
        ctx->pc = 0x3114C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114C4u;
        // 0x3114c8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3114CCu;
        goto label_3114cc;
    }
    ctx->pc = 0x3114C4u;
    {
        const bool branch_taken_0x3114c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3114c4) {
            ctx->pc = 0x3114C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3114C4u;
            // 0x3114c8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3114F8u;
            goto label_3114f8;
        }
    }
    ctx->pc = 0x3114CCu;
label_3114cc:
    // 0x3114cc: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x3114ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_3114d0:
    // 0x3114d0: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x3114d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3114d4:
    // 0x3114d4: 0xe6360004  swc1        $f22, 0x4($s1)
    ctx->pc = 0x3114d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3114d8:
    // 0x3114d8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3114d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_3114dc:
    // 0x3114dc: 0xe6160050  swc1        $f22, 0x50($s0)
    ctx->pc = 0x3114dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_3114e0:
    // 0x3114e0: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x3114e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_3114e4:
    // 0x3114e4: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x3114e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_3114e8:
    // 0x3114e8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x3114e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_3114ec:
    // 0x3114ec: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3114ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3114f0:
    // 0x3114f0: 0x10000045  b           . + 4 + (0x45 << 2)
label_3114f4:
    if (ctx->pc == 0x3114F4u) {
        ctx->pc = 0x3114F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114F0u;
        // 0x3114f4: 0xe6560008  swc1        $f22, 0x8($s2) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3114F8u;
        goto label_3114f8;
    }
    ctx->pc = 0x3114F0u;
    {
        const bool branch_taken_0x3114f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3114F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114F0u;
        // 0x3114f4: 0xe6560008  swc1        $f22, 0x8($s2) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3114f0) {
            ctx->pc = 0x311608u;
            goto label_311608;
        }
    }
    ctx->pc = 0x3114F8u;
label_3114f8:
    // 0x3114f8: 0xc0c3ed8  jal         func_30FB60
label_3114fc:
    if (ctx->pc == 0x3114FCu) {
        ctx->pc = 0x3114FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114F8u;
        // 0x3114fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311500u;
        goto label_311500;
    }
    ctx->pc = 0x3114F8u;
    SET_GPR_U32(ctx, 31, 0x311500u);
    ctx->pc = 0x3114FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3114F8u;
    // 0x3114fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FB60u, 0x3114F8u, 0x311500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311500u;
label_311500:
    // 0x311500: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x311500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_311504:
    // 0x311504: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x311504u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_311508:
    // 0x311508: 0x46180036  c.le.s      $f0, $f24
    ctx->pc = 0x311508u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31150c:
    // 0x31150c: 0x0  nop
    ctx->pc = 0x31150cu;
    // NOP
label_311510:
    // 0x311510: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_311514:
    if (ctx->pc == 0x311514u) {
        ctx->pc = 0x311514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311510u;
        // 0x311514: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311518u;
        goto label_311518;
    }
    ctx->pc = 0x311510u;
    {
        const bool branch_taken_0x311510 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x311514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311510u;
        // 0x311514: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311510) {
            ctx->pc = 0x31153Cu;
            goto label_31153c;
        }
    }
    ctx->pc = 0x311518u;
label_311518:
    // 0x311518: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x311518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31151c:
    // 0x31151c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x31151cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_311520:
    // 0x311520: 0x46180036  c.le.s      $f0, $f24
    ctx->pc = 0x311520u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_311524:
    // 0x311524: 0x0  nop
    ctx->pc = 0x311524u;
    // NOP
label_311528:
    // 0x311528: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_31152c:
    if (ctx->pc == 0x31152Cu) {
        ctx->pc = 0x31152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311528u;
        // 0x31152c: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311530u;
        goto label_311530;
    }
    ctx->pc = 0x311528u;
    {
        const bool branch_taken_0x311528 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x311528) {
            ctx->pc = 0x31152Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311528u;
            // 0x31152c: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311540u;
            goto label_311540;
        }
    }
    ctx->pc = 0x311530u;
label_311530:
    // 0x311530: 0xe6180060  swc1        $f24, 0x60($s0)
    ctx->pc = 0x311530u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
label_311534:
    // 0x311534: 0xe6380008  swc1        $f24, 0x8($s1)
    ctx->pc = 0x311534u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_311538:
    // 0x311538: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x311538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_31153c:
    // 0x31153c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x31153cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_311540:
    // 0x311540: 0xe4560004  swc1        $f22, 0x4($v0)
    ctx->pc = 0x311540u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_311544:
    // 0x311544: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x311544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_311548:
    // 0x311548: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x311548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_31154c:
    // 0x31154c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x31154cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_311550:
    // 0x311550: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x311550u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_311554:
    // 0x311554: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x311554u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_311558:
    // 0x311558: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x311558u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_31155c:
    // 0x31155c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x31155cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_311560:
    // 0x311560: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x311560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_311564:
    // 0x311564: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x311564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_311568:
    // 0x311568: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x311568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31156c:
    // 0x31156c: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x31156cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_311570:
    // 0x311570: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x311570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_311574:
    // 0x311574: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x311574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_311578:
    // 0x311578: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x311578u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_31157c:
    // 0x31157c: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x31157cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_311580:
    // 0x311580: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x311580u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_311584:
    // 0x311584: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x311584u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_311588:
    // 0x311588: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x311588u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_31158c:
    // 0x31158c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x31158cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_311590:
    // 0x311590: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x311590u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_311594:
    // 0x311594: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x311594u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_311598:
    // 0x311598: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x311598u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_31159c:
    // 0x31159c: 0x4a0003bf  vwaitq
    ctx->pc = 0x31159cu;
    // VWAITQ (Q already resolved in this runtime)
label_3115a0:
    // 0x3115a0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x3115a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3115a4:
    // 0x3115a4: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x3115a4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_3115a8:
    // 0x3115a8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x3115a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_3115ac:
    // 0x3115ac: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x3115acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_3115b0:
    // 0x3115b0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3115b0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3115b4:
    // 0x3115b4: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x3115b4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3115b8:
    // 0x3115b8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x3115b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_3115bc:
    // 0x3115bc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x3115bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3115c0:
    // 0x3115c0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x3115c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3115c4:
    // 0x3115c4: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x3115c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3115c8:
    // 0x3115c8: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x3115c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3115cc:
    // 0x3115cc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3115ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3115d0:
    // 0x3115d0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3115d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3115d4:
    // 0x3115d4: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x3115d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3115d8:
    // 0x3115d8: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x3115d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_3115dc:
    // 0x3115dc: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x3115dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_3115e0:
    // 0x3115e0: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x3115e0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_3115e4:
    // 0x3115e4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x3115e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_3115e8:
    // 0x3115e8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x3115e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3115ec:
    // 0x3115ec: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3115ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3115f0:
    // 0x3115f0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3115f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3115f4:
    // 0x3115f4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3115f4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3115f8:
    // 0x3115f8: 0x4a0003bf  vwaitq
    ctx->pc = 0x3115f8u;
    // VWAITQ (Q already resolved in this runtime)
label_3115fc:
    // 0x3115fc: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x3115fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_311600:
    // 0x311600: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x311600u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_311604:
    // 0x311604: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x311604u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_311608:
    // 0x311608: 0x4403c800  mfc1        $v1, $f25
    ctx->pc = 0x311608u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[25], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_31160c:
    // 0x31160c: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x31160cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_311610:
    // 0x311610: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x311610u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_311614:
    // 0x311614: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x311614u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_311618:
    // 0x311618: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x311618u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_31161c:
    // 0x31161c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x31161cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_311620:
    // 0x311620: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x311620u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_311624:
    // 0x311624: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x311624u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_311628:
    // 0x311628: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x311628u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_31162c:
    // 0x31162c: 0xc0f6a96  jal         func_3DAA58
label_311630:
    if (ctx->pc == 0x311630u) {
        ctx->pc = 0x311630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31162Cu;
        // 0x311630: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311634u;
        goto label_311634;
    }
    ctx->pc = 0x31162Cu;
    SET_GPR_U32(ctx, 31, 0x311634u);
    ctx->pc = 0x311630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31162Cu;
    // 0x311630: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x31162Cu, 0x311634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311634u;
label_311634:
    // 0x311634: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x311634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_311638:
    // 0x311638: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x311638u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_31163c:
    // 0x31163c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x31163cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_311640:
    // 0x311640: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x311640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_311644:
    // 0x311644: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x311644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_311648:
    // 0x311648: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x311648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_31164c:
    // 0x31164c: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x31164cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_311650:
    // 0x311650: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x311650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_311654:
    // 0x311654: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x311654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_311658:
    // 0x311658: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x311658u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
label_31165c:
    // 0x31165c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x31165cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_311660:
    // 0x311660: 0x46171082  mul.s       $f2, $f2, $f23
    ctx->pc = 0x311660u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[23]);
label_311664:
    // 0x311664: 0x461718c2  mul.s       $f3, $f3, $f23
    ctx->pc = 0x311664u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[23]);
label_311668:
    // 0x311668: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x311668u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_31166c:
    // 0x31166c: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x31166cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_311670:
    // 0x311670: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x311670u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_311674:
    // 0x311674: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x311674u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_311678:
    // 0x311678: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x311678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_31167c:
    // 0x31167c: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x31167cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_311680:
    // 0x311680: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x311680u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_311684:
    // 0x311684: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x311684u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_311688:
    // 0x311688: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x311688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_31168c:
    // 0x31168c: 0x8e84ffd8  lw          $a0, -0x28($s4)
    ctx->pc = 0x31168cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967256)));
label_311690:
    // 0x311690: 0xc0c48ce  jal         func_312338
label_311694:
    if (ctx->pc == 0x311694u) {
        ctx->pc = 0x311694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311690u;
        // 0x311694: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311698u;
        goto label_311698;
    }
    ctx->pc = 0x311690u;
    SET_GPR_U32(ctx, 31, 0x311698u);
    ctx->pc = 0x311694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311690u;
    // 0x311694: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312338u, 0x311690u, 0x311698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311698u;
label_311698:
    // 0x311698: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x311698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_31169c:
    // 0x31169c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x31169cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3116a0:
    // 0x3116a0: 0xc0c3d0a  jal         func_30F428
label_3116a4:
    if (ctx->pc == 0x3116A4u) {
        ctx->pc = 0x3116A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116A0u;
        // 0x3116a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3116A8u;
        goto label_3116a8;
    }
    ctx->pc = 0x3116A0u;
    SET_GPR_U32(ctx, 31, 0x3116A8u);
    ctx->pc = 0x3116A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3116A0u;
    // 0x3116a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F428u, 0x3116A0u, 0x3116A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3116A8u;
label_3116a8:
    // 0x3116a8: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x3116a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
label_3116ac:
    // 0x3116ac: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3116acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3116b0:
    // 0x3116b0: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x3116b0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3116b4:
    // 0x3116b4: 0xc0dd6ce  jal         func_375B38
label_3116b8:
    if (ctx->pc == 0x3116B8u) {
        ctx->pc = 0x3116B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116B4u;
        // 0x3116b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3116BCu;
        goto label_3116bc;
    }
    ctx->pc = 0x3116B4u;
    SET_GPR_U32(ctx, 31, 0x3116BCu);
    ctx->pc = 0x3116B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3116B4u;
    // 0x3116b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375B38u, 0x3116B4u, 0x3116BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3116BCu;
label_3116bc:
    // 0x3116bc: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x3116bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3116c0:
    // 0x3116c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3116c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3116c4:
    // 0x3116c4: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x3116c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3116c8:
    // 0x3116c8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x3116c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3116cc:
    // 0x3116cc: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x3116ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3116d0:
    // 0x3116d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3116d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3116d4:
    // 0x3116d4: 0xc0db168  jal         func_36C5A0
label_3116d8:
    if (ctx->pc == 0x3116D8u) {
        ctx->pc = 0x3116D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116D4u;
        // 0x3116d8: 0xe7b5001c  swc1        $f21, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3116DCu;
        goto label_3116dc;
    }
    ctx->pc = 0x3116D4u;
    SET_GPR_U32(ctx, 31, 0x3116DCu);
    ctx->pc = 0x3116D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3116D4u;
    // 0x3116d8: 0xe7b5001c  swc1        $f21, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x3116D4u, 0x3116DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3116DCu;
label_3116dc:
    // 0x3116dc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3116dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3116e0:
    // 0x3116e0: 0xc0db168  jal         func_36C5A0
label_3116e4:
    if (ctx->pc == 0x3116E4u) {
        ctx->pc = 0x3116E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116E0u;
        // 0x3116e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3116E8u;
        goto label_3116e8;
    }
    ctx->pc = 0x3116E0u;
    SET_GPR_U32(ctx, 31, 0x3116E8u);
    ctx->pc = 0x3116E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3116E0u;
    // 0x3116e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x3116E0u, 0x3116E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3116E8u;
label_3116e8:
    // 0x3116e8: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x3116e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3116ec:
    // 0x3116ec: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x3116ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3116f0:
    // 0x3116f0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x3116f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3116f4:
    // 0x3116f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3116f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3116f8:
    // 0x3116f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3116f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3116fc:
    // 0x3116fc: 0xc0dd6d4  jal         func_375B50
label_311700:
    if (ctx->pc == 0x311700u) {
        ctx->pc = 0x311700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116FCu;
        // 0x311700: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311704u;
        goto label_311704;
    }
    ctx->pc = 0x3116FCu;
    SET_GPR_U32(ctx, 31, 0x311704u);
    ctx->pc = 0x311700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3116FCu;
    // 0x311700: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375B50u, 0x3116FCu, 0x311704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311704u;
label_311704:
    // 0x311704: 0x3c0144d8  lui         $at, 0x44D8
    ctx->pc = 0x311704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17624 << 16));
label_311708:
    // 0x311708: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x311708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31170c:
    // 0x31170c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31170cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_311710:
    // 0x311710: 0x3c0144e0  lui         $at, 0x44E0
    ctx->pc = 0x311710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17632 << 16));
label_311714:
    // 0x311714: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x311714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_311718:
    // 0x311718: 0xc0dd076  jal         func_3741D8
label_31171c:
    if (ctx->pc == 0x31171Cu) {
        ctx->pc = 0x31171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311718u;
        // 0x31171c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311720u;
        goto label_311720;
    }
    ctx->pc = 0x311718u;
    SET_GPR_U32(ctx, 31, 0x311720u);
    ctx->pc = 0x31171Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311718u;
    // 0x31171c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3741D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3741D8u, 0x311718u, 0x311720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311720u;
label_311720:
    // 0x311720: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x311720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_311724:
    // 0x311724: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x311724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_311728:
    // 0x311728: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x311728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_31172c:
    // 0x31172c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x31172cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_311730:
    // 0x311730: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x311730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_311734:
    // 0x311734: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x311734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_311738:
    // 0x311738: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x311738u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_31173c:
    // 0x31173c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31173cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311740:
    // 0x311740: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x311740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311744:
    // 0x311744: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x311744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311748:
    // 0x311748: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x311748u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31174c:
    // 0x31174c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31174cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311750:
    // 0x311750: 0xc0da874  jal         func_36A1D0
label_311754:
    if (ctx->pc == 0x311754u) {
        ctx->pc = 0x311754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311750u;
        // 0x311754: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311758u;
        goto label_311758;
    }
    ctx->pc = 0x311750u;
    SET_GPR_U32(ctx, 31, 0x311758u);
    ctx->pc = 0x311754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311750u;
    // 0x311754: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x311750u, 0x311758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311758u;
label_311758:
    // 0x311758: 0x12000063  beqz        $s0, . + 4 + (0x63 << 2)
label_31175c:
    if (ctx->pc == 0x31175Cu) {
        ctx->pc = 0x31175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311758u;
        // 0x31175c: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311760u;
        goto label_311760;
    }
    ctx->pc = 0x311758u;
    {
        const bool branch_taken_0x311758 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311758u;
        // 0x31175c: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311758) {
            ctx->pc = 0x3118E8u;
            goto label_3118e8;
        }
    }
    ctx->pc = 0x311760u;
label_311760:
    // 0x311760: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_311764:
    if (ctx->pc == 0x311764u) {
        ctx->pc = 0x311768u;
        goto label_311768;
    }
    ctx->pc = 0x311760u;
    {
        const bool branch_taken_0x311760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x311760) {
            ctx->pc = 0x311770u;
            goto label_311770;
        }
    }
    ctx->pc = 0x311768u;
label_311768:
    // 0x311768: 0xc0db0ea  jal         func_36C3A8
label_31176c:
    if (ctx->pc == 0x31176Cu) {
        ctx->pc = 0x31176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311768u;
        // 0x31176c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311770u;
        goto label_311770;
    }
    ctx->pc = 0x311768u;
    SET_GPR_U32(ctx, 31, 0x311770u);
    ctx->pc = 0x31176Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311768u;
    // 0x31176c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x311768u, 0x311770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311770u;
label_311770:
    // 0x311770: 0xc0db0cc  jal         func_36C330
label_311774:
    if (ctx->pc == 0x311774u) {
        ctx->pc = 0x311778u;
        goto label_311778;
    }
    ctx->pc = 0x311770u;
    SET_GPR_U32(ctx, 31, 0x311778u);
    ctx->pc = 0x36C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C330u, 0x311770u, 0x311778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311778u;
label_311778:
    // 0x311778: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x311778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_31177c:
    // 0x31177c: 0xc0db168  jal         func_36C5A0
label_311780:
    if (ctx->pc == 0x311780u) {
        ctx->pc = 0x311780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31177Cu;
        // 0x311780: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311784u;
        goto label_311784;
    }
    ctx->pc = 0x31177Cu;
    SET_GPR_U32(ctx, 31, 0x311784u);
    ctx->pc = 0x311780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31177Cu;
    // 0x311780: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x31177Cu, 0x311784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311784u;
label_311784:
    // 0x311784: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x311784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_311788:
    // 0x311788: 0xc0c46c2  jal         func_311B08
label_31178c:
    if (ctx->pc == 0x31178Cu) {
        ctx->pc = 0x31178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311788u;
        // 0x31178c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311790u;
        goto label_311790;
    }
    ctx->pc = 0x311788u;
    SET_GPR_U32(ctx, 31, 0x311790u);
    ctx->pc = 0x31178Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311788u;
    // 0x31178c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311B08u, 0x311788u, 0x311790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311790u;
label_311790:
    // 0x311790: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x311790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311794:
    // 0x311794: 0xc0db168  jal         func_36C5A0
label_311798:
    if (ctx->pc == 0x311798u) {
        ctx->pc = 0x311798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311794u;
        // 0x311798: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31179Cu;
        goto label_31179c;
    }
    ctx->pc = 0x311794u;
    SET_GPR_U32(ctx, 31, 0x31179Cu);
    ctx->pc = 0x311798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311794u;
    // 0x311798: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x311794u, 0x31179Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31179Cu;
label_31179c:
    // 0x31179c: 0xc0db0c8  jal         func_36C320
label_3117a0:
    if (ctx->pc == 0x3117A0u) {
        ctx->pc = 0x3117A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31179Cu;
        // 0x3117a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3117A4u;
        goto label_3117a4;
    }
    ctx->pc = 0x31179Cu;
    SET_GPR_U32(ctx, 31, 0x3117A4u);
    ctx->pc = 0x3117A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31179Cu;
    // 0x3117a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C320u, 0x31179Cu, 0x3117A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3117A4u;
label_3117a4:
    // 0x3117a4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3117a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3117a8:
    // 0x3117a8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3117a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3117ac:
    // 0x3117ac: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x3117acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_3117b0:
    // 0x3117b0: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x3117b0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
label_3117b4:
    // 0x3117b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3117b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3117b8:
    // 0x3117b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3117b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3117bc:
    // 0x3117bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3117bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3117c0:
    // 0x3117c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3117c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3117c4:
    // 0x3117c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3117c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3117c8:
    // 0x3117c8: 0xc0da874  jal         func_36A1D0
label_3117cc:
    if (ctx->pc == 0x3117CCu) {
        ctx->pc = 0x3117CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3117C8u;
        // 0x3117cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3117D0u;
        goto label_3117d0;
    }
    ctx->pc = 0x3117C8u;
    SET_GPR_U32(ctx, 31, 0x3117D0u);
    ctx->pc = 0x3117CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3117C8u;
    // 0x3117cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x3117C8u, 0x3117D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3117D0u;
label_3117d0:
    // 0x3117d0: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x3117d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
label_3117d4:
    // 0x3117d4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3117d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3117d8:
    // 0x3117d8: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x3117d8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_3117dc:
    // 0x3117dc: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x3117dcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_3117e0:
    // 0x3117e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3117e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3117e4:
    // 0x3117e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3117e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3117e8:
    // 0x3117e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3117e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3117ec:
    // 0x3117ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3117ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3117f0:
    // 0x3117f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3117f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3117f4:
    // 0x3117f4: 0xc0da874  jal         func_36A1D0
label_3117f8:
    if (ctx->pc == 0x3117F8u) {
        ctx->pc = 0x3117F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3117F4u;
        // 0x3117f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3117FCu;
        goto label_3117fc;
    }
    ctx->pc = 0x3117F4u;
    SET_GPR_U32(ctx, 31, 0x3117FCu);
    ctx->pc = 0x3117F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3117F4u;
    // 0x3117f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x3117F4u, 0x3117FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3117FCu;
label_3117fc:
    // 0x3117fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3117fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_311800:
    // 0x311800: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x311800u;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
label_311804:
    // 0x311804: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x311804u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_311808:
    // 0x311808: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x311808u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
label_31180c:
    // 0x31180c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31180cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311810:
    // 0x311810: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x311810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311814:
    // 0x311814: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x311814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311818:
    // 0x311818: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x311818u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31181c:
    // 0x31181c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31181cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311820:
    // 0x311820: 0xc0da874  jal         func_36A1D0
label_311824:
    if (ctx->pc == 0x311824u) {
        ctx->pc = 0x311824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311820u;
        // 0x311824: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311828u;
        goto label_311828;
    }
    ctx->pc = 0x311820u;
    SET_GPR_U32(ctx, 31, 0x311828u);
    ctx->pc = 0x311824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311820u;
    // 0x311824: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x311820u, 0x311828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311828u;
label_311828:
    // 0x311828: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x311828u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_31182c:
    // 0x31182c: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x31182cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_311830:
    // 0x311830: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x311830u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_311834:
    // 0x311834: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x311834u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_311838:
    // 0x311838: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x311838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31183c:
    // 0x31183c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31183cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311840:
    // 0x311840: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x311840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311844:
    // 0x311844: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x311844u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311848:
    // 0x311848: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x311848u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31184c:
    // 0x31184c: 0xc0da874  jal         func_36A1D0
label_311850:
    if (ctx->pc == 0x311850u) {
        ctx->pc = 0x311850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31184Cu;
        // 0x311850: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311854u;
        goto label_311854;
    }
    ctx->pc = 0x31184Cu;
    SET_GPR_U32(ctx, 31, 0x311854u);
    ctx->pc = 0x311850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31184Cu;
    // 0x311850: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x31184Cu, 0x311854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311854u;
label_311854:
    // 0x311854: 0xc0db0c8  jal         func_36C320
label_311858:
    if (ctx->pc == 0x311858u) {
        ctx->pc = 0x311858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311854u;
        // 0x311858: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31185Cu;
        goto label_31185c;
    }
    ctx->pc = 0x311854u;
    SET_GPR_U32(ctx, 31, 0x31185Cu);
    ctx->pc = 0x311858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311854u;
    // 0x311858: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C320u, 0x311854u, 0x31185Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31185Cu;
label_31185c:
    // 0x31185c: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x31185cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_311860:
    // 0x311860: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x311860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_311864:
    // 0x311864: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x311864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_311868:
    // 0x311868: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x311868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31186c:
    // 0x31186c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x31186cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_311870:
    // 0x311870: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x311870u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_311874:
    // 0x311874: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x311874u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_311878:
    // 0x311878: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x311878u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_31187c:
    // 0x31187c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x31187cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_311880:
    // 0x311880: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x311880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_311884:
    // 0x311884: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x311884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_311888:
    // 0x311888: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x311888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31188c:
    // 0x31188c: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x31188cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_311890:
    // 0x311890: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x311890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_311894:
    // 0x311894: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x311894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_311898:
    // 0x311898: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x311898u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_31189c:
    // 0x31189c: 0xe7a5003c  swc1        $f5, 0x3C($sp)
    ctx->pc = 0x31189cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_3118a0:
    // 0x3118a0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x3118a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_3118a4:
    // 0x3118a4: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x3118a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3118a8:
    // 0x3118a8: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x3118a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3118ac:
    // 0x3118ac: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x3118acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3118b0:
    // 0x3118b0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x3118b0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_3118b4:
    // 0x3118b4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x3118b4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_3118b8:
    // 0x3118b8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x3118b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_3118bc:
    // 0x3118bc: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x3118bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_3118c0:
    // 0x3118c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3118c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3118c4:
    // 0x3118c4: 0x0  nop
    ctx->pc = 0x3118c4u;
    // NOP
label_3118c8:
    // 0x3118c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3118c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3118cc:
    // 0x3118cc: 0x0  nop
    ctx->pc = 0x3118ccu;
    // NOP
label_3118d0:
    // 0x3118d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3118d4:
    if (ctx->pc == 0x3118D4u) {
        ctx->pc = 0x3118D8u;
        goto label_3118d8;
    }
    ctx->pc = 0x3118D0u;
    {
        const bool branch_taken_0x3118d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3118d0) {
            ctx->pc = 0x3118E0u;
            goto label_3118e0;
        }
    }
    ctx->pc = 0x3118D8u;
label_3118d8:
    // 0x3118d8: 0xc0c4444  jal         func_311110
label_3118dc:
    if (ctx->pc == 0x3118DCu) {
        ctx->pc = 0x3118DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3118D8u;
        // 0x3118dc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3118E0u;
        goto label_3118e0;
    }
    ctx->pc = 0x3118D8u;
    SET_GPR_U32(ctx, 31, 0x3118E0u);
    ctx->pc = 0x3118DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3118D8u;
    // 0x3118dc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311110u, 0x3118D8u, 0x3118E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3118E0u;
label_3118e0:
    // 0x3118e0: 0xc0c3db0  jal         func_30F6C0
label_3118e4:
    if (ctx->pc == 0x3118E4u) {
        ctx->pc = 0x3118E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3118E0u;
        // 0x3118e4: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3118E8u;
        goto label_3118e8;
    }
    ctx->pc = 0x3118E0u;
    SET_GPR_U32(ctx, 31, 0x3118E8u);
    ctx->pc = 0x3118E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3118E0u;
    // 0x3118e4: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F6C0u, 0x3118E0u, 0x3118E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3118E8u;
label_3118e8:
    // 0x3118e8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3118e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3118ec:
    // 0x3118ec: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3118ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3118f0:
    // 0x3118f0: 0x8c53bd48  lw          $s3, -0x42B8($v0)
    ctx->pc = 0x3118f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
label_3118f4:
    // 0x3118f4: 0xc0c4430  jal         func_3110C0
label_3118f8:
    if (ctx->pc == 0x3118F8u) {
        ctx->pc = 0x3118F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3118F4u;
        // 0x3118f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3118FCu;
        goto label_3118fc;
    }
    ctx->pc = 0x3118F4u;
    SET_GPR_U32(ctx, 31, 0x3118FCu);
    ctx->pc = 0x3118F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3118F4u;
    // 0x3118f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3110C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3110C0u, 0x3118F4u, 0x3118FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3118FCu;
label_3118fc:
    // 0x3118fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3118fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_311900:
    // 0x311900: 0xc0c2a36  jal         func_30A8D8
label_311904:
    if (ctx->pc == 0x311904u) {
        ctx->pc = 0x311904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311900u;
        // 0x311904: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311908u;
        goto label_311908;
    }
    ctx->pc = 0x311900u;
    SET_GPR_U32(ctx, 31, 0x311908u);
    ctx->pc = 0x311904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311900u;
    // 0x311904: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8D8u, 0x311900u, 0x311908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311908u;
label_311908:
    // 0x311908: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_31190c:
    if (ctx->pc == 0x31190Cu) {
        ctx->pc = 0x31190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311908u;
        // 0x31190c: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311910u;
        goto label_311910;
    }
    ctx->pc = 0x311908u;
    {
        const bool branch_taken_0x311908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311908u;
        // 0x31190c: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311908) {
            ctx->pc = 0x311A2Cu;
            goto label_311a2c;
        }
    }
    ctx->pc = 0x311910u;
label_311910:
    // 0x311910: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x311910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_311914:
    // 0x311914: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x311914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_311918:
    // 0x311918: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x311918u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31191c:
    // 0x31191c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31191cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311920:
    // 0x311920: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x311920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_311924:
    // 0x311924: 0xc0dd4a4  jal         func_375290
label_311928:
    if (ctx->pc == 0x311928u) {
        ctx->pc = 0x311928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311924u;
        // 0x311928: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31192Cu;
        goto label_31192c;
    }
    ctx->pc = 0x311924u;
    SET_GPR_U32(ctx, 31, 0x31192Cu);
    ctx->pc = 0x311928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311924u;
    // 0x311928: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375290u, 0x311924u, 0x31192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31192Cu;
label_31192c:
    // 0x31192c: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x31192cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_311930:
    // 0x311930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x311930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311934:
    // 0x311934: 0xc0c7bae  jal         func_31EEB8
label_311938:
    if (ctx->pc == 0x311938u) {
        ctx->pc = 0x311938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311934u;
        // 0x311938: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31193Cu;
        goto label_31193c;
    }
    ctx->pc = 0x311934u;
    SET_GPR_U32(ctx, 31, 0x31193Cu);
    ctx->pc = 0x311938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311934u;
    // 0x311938: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEB8u, 0x311934u, 0x31193Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31193Cu;
label_31193c:
    // 0x31193c: 0xc0c3b96  jal         func_30EE58
label_311940:
    if (ctx->pc == 0x311940u) {
        ctx->pc = 0x311940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31193Cu;
        // 0x311940: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311944u;
        goto label_311944;
    }
    ctx->pc = 0x31193Cu;
    SET_GPR_U32(ctx, 31, 0x311944u);
    ctx->pc = 0x311940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31193Cu;
    // 0x311940: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE58u, 0x31193Cu, 0x311944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311944u;
label_311944:
    // 0x311944: 0xc0db0cc  jal         func_36C330
label_311948:
    if (ctx->pc == 0x311948u) {
        ctx->pc = 0x31194Cu;
        goto label_31194c;
    }
    ctx->pc = 0x311944u;
    SET_GPR_U32(ctx, 31, 0x31194Cu);
    ctx->pc = 0x36C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C330u, 0x311944u, 0x31194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31194Cu;
label_31194c:
    // 0x31194c: 0xc0dcc22  jal         func_373088
label_311950:
    if (ctx->pc == 0x311950u) {
        ctx->pc = 0x311954u;
        goto label_311954;
    }
    ctx->pc = 0x31194Cu;
    SET_GPR_U32(ctx, 31, 0x311954u);
    ctx->pc = 0x373088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373088u, 0x31194Cu, 0x311954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311954u;
label_311954:
    // 0x311954: 0xc0dcc38  jal         func_3730E0
label_311958:
    if (ctx->pc == 0x311958u) {
        ctx->pc = 0x311958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311954u;
        // 0x311958: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31195Cu;
        goto label_31195c;
    }
    ctx->pc = 0x311954u;
    SET_GPR_U32(ctx, 31, 0x31195Cu);
    ctx->pc = 0x311958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311954u;
    // 0x311958: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730E0u, 0x311954u, 0x31195Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31195Cu;
label_31195c:
    // 0x31195c: 0xc0dcc3c  jal         func_3730F0
label_311960:
    if (ctx->pc == 0x311960u) {
        ctx->pc = 0x311960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31195Cu;
        // 0x311960: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311964u;
        goto label_311964;
    }
    ctx->pc = 0x31195Cu;
    SET_GPR_U32(ctx, 31, 0x311964u);
    ctx->pc = 0x311960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31195Cu;
    // 0x311960: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730F0u, 0x31195Cu, 0x311964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311964u;
label_311964:
    // 0x311964: 0xc0dcc40  jal         func_373100
label_311968:
    if (ctx->pc == 0x311968u) {
        ctx->pc = 0x311968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311964u;
        // 0x311968: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31196Cu;
        goto label_31196c;
    }
    ctx->pc = 0x311964u;
    SET_GPR_U32(ctx, 31, 0x31196Cu);
    ctx->pc = 0x311968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311964u;
    // 0x311968: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373100u, 0x311964u, 0x31196Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31196Cu;
label_31196c:
    // 0x31196c: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x31196cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
label_311970:
    // 0x311970: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x311970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_311974:
    // 0x311974: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x311974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_311978:
    // 0x311978: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x311978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
label_31197c:
    // 0x31197c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31197cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_311980:
    // 0x311980: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x311980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_311984:
    // 0x311984: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x311984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_311988:
    // 0x311988: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x311988u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31198c:
    // 0x31198c: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x31198cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_311990:
    // 0x311990: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x311990u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311994:
    // 0x311994: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x311994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_311998:
    // 0x311998: 0x122ac0  sll         $a1, $s2, 11
    ctx->pc = 0x311998u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
label_31199c:
    // 0x31199c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x31199cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_3119a0:
    // 0x3119a0: 0xc0dd6d4  jal         func_375B50
label_3119a4:
    if (ctx->pc == 0x3119A4u) {
        ctx->pc = 0x3119A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119A0u;
        // 0x3119a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3119A8u;
        goto label_3119a8;
    }
    ctx->pc = 0x3119A0u;
    SET_GPR_U32(ctx, 31, 0x3119A8u);
    ctx->pc = 0x3119A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3119A0u;
    // 0x3119a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375B50u, 0x3119A0u, 0x3119A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3119A8u;
label_3119a8:
    // 0x3119a8: 0x3c0144d8  lui         $at, 0x44D8
    ctx->pc = 0x3119a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17624 << 16));
label_3119ac:
    // 0x3119ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3119acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3119b0:
    // 0x3119b0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3119b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3119b4:
    // 0x3119b4: 0x3c0144e0  lui         $at, 0x44E0
    ctx->pc = 0x3119b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17632 << 16));
label_3119b8:
    // 0x3119b8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3119b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3119bc:
    // 0x3119bc: 0xc0dd076  jal         func_3741D8
label_3119c0:
    if (ctx->pc == 0x3119C0u) {
        ctx->pc = 0x3119C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119BCu;
        // 0x3119c0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3119C4u;
        goto label_3119c4;
    }
    ctx->pc = 0x3119BCu;
    SET_GPR_U32(ctx, 31, 0x3119C4u);
    ctx->pc = 0x3119C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3119BCu;
    // 0x3119c0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3741D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3741D8u, 0x3119BCu, 0x3119C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3119C4u;
label_3119c4:
    // 0x3119c4: 0xc0dd84e  jal         func_376138
label_3119c8:
    if (ctx->pc == 0x3119C8u) {
        ctx->pc = 0x3119CCu;
        goto label_3119cc;
    }
    ctx->pc = 0x3119C4u;
    SET_GPR_U32(ctx, 31, 0x3119CCu);
    ctx->pc = 0x376138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376138u, 0x3119C4u, 0x3119CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3119CCu;
label_3119cc:
    // 0x3119cc: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x3119ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_3119d0:
    // 0x3119d0: 0xc0db168  jal         func_36C5A0
label_3119d4:
    if (ctx->pc == 0x3119D4u) {
        ctx->pc = 0x3119D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119D0u;
        // 0x3119d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3119D8u;
        goto label_3119d8;
    }
    ctx->pc = 0x3119D0u;
    SET_GPR_U32(ctx, 31, 0x3119D8u);
    ctx->pc = 0x3119D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3119D0u;
    // 0x3119d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x3119D0u, 0x3119D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3119D8u;
label_3119d8:
    // 0x3119d8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x3119d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3119dc:
    // 0x3119dc: 0xc0db168  jal         func_36C5A0
label_3119e0:
    if (ctx->pc == 0x3119E0u) {
        ctx->pc = 0x3119E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119DCu;
        // 0x3119e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3119E4u;
        goto label_3119e4;
    }
    ctx->pc = 0x3119DCu;
    SET_GPR_U32(ctx, 31, 0x3119E4u);
    ctx->pc = 0x3119E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3119DCu;
    // 0x3119e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x3119DCu, 0x3119E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3119E4u;
label_3119e4:
    // 0x3119e4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3119e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3119e8:
    // 0x3119e8: 0xc0db168  jal         func_36C5A0
label_3119ec:
    if (ctx->pc == 0x3119ECu) {
        ctx->pc = 0x3119ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119E8u;
        // 0x3119ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3119F0u;
        goto label_3119f0;
    }
    ctx->pc = 0x3119E8u;
    SET_GPR_U32(ctx, 31, 0x3119F0u);
    ctx->pc = 0x3119ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3119E8u;
    // 0x3119ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x3119E8u, 0x3119F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3119F0u;
label_3119f0:
    // 0x3119f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3119f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3119f4:
    // 0x3119f4: 0xc0db168  jal         func_36C5A0
label_3119f8:
    if (ctx->pc == 0x3119F8u) {
        ctx->pc = 0x3119F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119F4u;
        // 0x3119f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3119FCu;
        goto label_3119fc;
    }
    ctx->pc = 0x3119F4u;
    SET_GPR_U32(ctx, 31, 0x3119FCu);
    ctx->pc = 0x3119F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3119F4u;
    // 0x3119f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x3119F4u, 0x3119FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3119FCu;
label_3119fc:
    // 0x3119fc: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x3119fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_311a00:
    // 0x311a00: 0xc0c39a6  jal         func_30E698
label_311a04:
    if (ctx->pc == 0x311A04u) {
        ctx->pc = 0x311A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A00u;
        // 0x311a04: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311A08u;
        goto label_311a08;
    }
    ctx->pc = 0x311A00u;
    SET_GPR_U32(ctx, 31, 0x311A08u);
    ctx->pc = 0x311A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A00u;
    // 0x311a04: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E698u, 0x311A00u, 0x311A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311A08u;
label_311a08:
    // 0x311a08: 0x8fc20530  lw          $v0, 0x530($fp)
    ctx->pc = 0x311a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1328)));
label_311a0c:
    // 0x311a0c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x311a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_311a10:
    // 0x311a10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x311a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_311a14:
    // 0x311a14: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_311a18:
    if (ctx->pc == 0x311A18u) {
        ctx->pc = 0x311A1Cu;
        goto label_311a1c;
    }
    ctx->pc = 0x311A14u;
    {
        const bool branch_taken_0x311a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x311a14) {
            ctx->pc = 0x311A24u;
            goto label_311a24;
        }
    }
    ctx->pc = 0x311A1Cu;
label_311a1c:
    // 0x311a1c: 0xc0db0ea  jal         func_36C3A8
label_311a20:
    if (ctx->pc == 0x311A20u) {
        ctx->pc = 0x311A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A1Cu;
        // 0x311a20: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311A24u;
        goto label_311a24;
    }
    ctx->pc = 0x311A1Cu;
    SET_GPR_U32(ctx, 31, 0x311A24u);
    ctx->pc = 0x311A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A1Cu;
    // 0x311a20: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x311A1Cu, 0x311A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311A24u;
label_311a24:
    // 0x311a24: 0xc0c2bb8  jal         func_30AEE0
label_311a28:
    if (ctx->pc == 0x311A28u) {
        ctx->pc = 0x311A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A24u;
        // 0x311a28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311A2Cu;
        goto label_311a2c;
    }
    ctx->pc = 0x311A24u;
    SET_GPR_U32(ctx, 31, 0x311A2Cu);
    ctx->pc = 0x311A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A24u;
    // 0x311a28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AEE0u, 0x311A24u, 0x311A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311A2Cu;
label_311a2c:
    // 0x311a2c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x311a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_311a30:
    // 0x311a30: 0xc0c443e  jal         func_3110F8
label_311a34:
    if (ctx->pc == 0x311A34u) {
        ctx->pc = 0x311A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A30u;
        // 0x311a34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311A38u;
        goto label_311a38;
    }
    ctx->pc = 0x311A30u;
    SET_GPR_U32(ctx, 31, 0x311A38u);
    ctx->pc = 0x311A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A30u;
    // 0x311a34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3110F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3110F8u, 0x311A30u, 0x311A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311A38u;
label_311a38:
    // 0x311a38: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x311a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_311a3c:
    // 0x311a3c: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x311a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
label_311a40:
    // 0x311a40: 0x8e84ffd8  lw          $a0, -0x28($s4)
    ctx->pc = 0x311a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967256)));
label_311a44:
    // 0x311a44: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_311a48:
    if (ctx->pc == 0x311A48u) {
        ctx->pc = 0x311A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A44u;
        // 0x311a48: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311A4Cu;
        goto label_311a4c;
    }
    ctx->pc = 0x311A44u;
    {
        const bool branch_taken_0x311a44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x311A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A44u;
        // 0x311a48: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a44) {
            ctx->pc = 0x311A58u;
            goto label_311a58;
        }
    }
    ctx->pc = 0x311A4Cu;
label_311a4c:
    // 0x311a4c: 0xc0c4858  jal         func_312160
label_311a50:
    if (ctx->pc == 0x311A50u) {
        ctx->pc = 0x311A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A4Cu;
        // 0x311a50: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311A54u;
        goto label_311a54;
    }
    ctx->pc = 0x311A4Cu;
    SET_GPR_U32(ctx, 31, 0x311A54u);
    ctx->pc = 0x311A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A4Cu;
    // 0x311a50: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312160u, 0x311A4Cu, 0x311A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311A54u;
label_311a54:
    // 0x311a54: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x311a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_311a58:
    // 0x311a58: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x311a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_311a5c:
    // 0x311a5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x311a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_311a60:
    // 0x311a60: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x311a60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_311a64:
    // 0x311a64: 0xc0c293e  jal         func_30A4F8
label_311a68:
    if (ctx->pc == 0x311A68u) {
        ctx->pc = 0x311A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A64u;
        // 0x311a68: 0xafa20068  sw          $v0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311A6Cu;
        goto label_311a6c;
    }
    ctx->pc = 0x311A64u;
    SET_GPR_U32(ctx, 31, 0x311A6Cu);
    ctx->pc = 0x311A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A64u;
    // 0x311a68: 0xafa20068  sw          $v0, 0x68($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4F8u, 0x311A64u, 0x311A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311A6Cu;
label_311a6c:
    // 0x311a6c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x311a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_311a70:
    // 0x311a70: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x311a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_311a74:
    // 0x311a74: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x311a74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_311a78:
    // 0x311a78: 0x1440fddf  bnez        $v0, . + 4 + (-0x221 << 2)
label_311a7c:
    if (ctx->pc == 0x311A7Cu) {
        ctx->pc = 0x311A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A78u;
        // 0x311a7c: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311A80u;
        goto label_311a80;
    }
    ctx->pc = 0x311A78u;
    {
        const bool branch_taken_0x311a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A78u;
        // 0x311a7c: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a78) {
            ctx->pc = 0x3111F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3111f8;
        }
    }
    ctx->pc = 0x311A80u;
label_311a80:
    // 0x311a80: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x311a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_311a84:
    // 0x311a84: 0xc0db168  jal         func_36C5A0
label_311a88:
    if (ctx->pc == 0x311A88u) {
        ctx->pc = 0x311A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A84u;
        // 0x311a88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311A8Cu;
        goto label_311a8c;
    }
    ctx->pc = 0x311A84u;
    SET_GPR_U32(ctx, 31, 0x311A8Cu);
    ctx->pc = 0x311A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A84u;
    // 0x311a88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x311A84u, 0x311A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311A8Cu;
label_311a8c:
    // 0x311a8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x311a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_311a90:
    // 0x311a90: 0xc0db168  jal         func_36C5A0
label_311a94:
    if (ctx->pc == 0x311A94u) {
        ctx->pc = 0x311A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A90u;
        // 0x311a94: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311A98u;
        goto label_311a98;
    }
    ctx->pc = 0x311A90u;
    SET_GPR_U32(ctx, 31, 0x311A98u);
    ctx->pc = 0x311A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A90u;
    // 0x311a94: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x311A90u, 0x311A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311A98u;
label_311a98:
    // 0x311a98: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x311a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
label_311a9c:
    // 0x311a9c: 0xc0c6d86  jal         func_31B618
label_311aa0:
    if (ctx->pc == 0x311AA0u) {
        ctx->pc = 0x311AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A9Cu;
        // 0x311aa0: 0x248421e8  addiu       $a0, $a0, 0x21E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311AA4u;
        goto label_311aa4;
    }
    ctx->pc = 0x311A9Cu;
    SET_GPR_U32(ctx, 31, 0x311AA4u);
    ctx->pc = 0x311AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A9Cu;
    // 0x311aa0: 0x248421e8  addiu       $a0, $a0, 0x21E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B618u, 0x311A9Cu, 0x311AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311AA4u;
label_311aa4:
    // 0x311aa4: 0xc0dd726  jal         func_375C98
label_311aa8:
    if (ctx->pc == 0x311AA8u) {
        ctx->pc = 0x311AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311AA4u;
        // 0x311aa8: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311AACu;
        goto label_311aac;
    }
    ctx->pc = 0x311AA4u;
    SET_GPR_U32(ctx, 31, 0x311AACu);
    ctx->pc = 0x311AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311AA4u;
    // 0x311aa8: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375C98u, 0x311AA4u, 0x311AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311AACu;
label_311aac:
    // 0x311aac: 0xc0dd716  jal         func_375C58
label_311ab0:
    if (ctx->pc == 0x311AB0u) {
        ctx->pc = 0x311AB4u;
        goto label_311ab4;
    }
    ctx->pc = 0x311AACu;
    SET_GPR_U32(ctx, 31, 0x311AB4u);
    ctx->pc = 0x375C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375C58u, 0x311AACu, 0x311AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311AB4u;
label_311ab4:
    // 0x311ab4: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x311ab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_311ab8:
    // 0x311ab8: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x311ab8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_311abc:
    // 0x311abc: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x311abcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_311ac0:
    // 0x311ac0: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x311ac0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_311ac4:
    // 0x311ac4: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x311ac4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_311ac8:
    // 0x311ac8: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x311ac8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_311acc:
    // 0x311acc: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x311accu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_311ad0:
    // 0x311ad0: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x311ad0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_311ad4:
    // 0x311ad4: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x311ad4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_311ad8:
    // 0x311ad8: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x311ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
label_311adc:
    // 0x311adc: 0xc7bb0108  lwc1        $f27, 0x108($sp)
    ctx->pc = 0x311adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_311ae0:
    // 0x311ae0: 0xc7ba0100  lwc1        $f26, 0x100($sp)
    ctx->pc = 0x311ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_311ae4:
    // 0x311ae4: 0xc7b900f8  lwc1        $f25, 0xF8($sp)
    ctx->pc = 0x311ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_311ae8:
    // 0x311ae8: 0xc7b800f0  lwc1        $f24, 0xF0($sp)
    ctx->pc = 0x311ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_311aec:
    // 0x311aec: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x311aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_311af0:
    // 0x311af0: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x311af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_311af4:
    // 0x311af4: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x311af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_311af8:
    // 0x311af8: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x311af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_311afc:
    // 0x311afc: 0x3e00008  jr          $ra
label_311b00:
    if (ctx->pc == 0x311B00u) {
        ctx->pc = 0x311B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311AFCu;
        // 0x311b00: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311B04u;
        goto label_311b04;
    }
    ctx->pc = 0x311AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311AFCu;
        // 0x311b00: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311B04u;
label_311b04:
    // 0x311b04: 0x0  nop
    ctx->pc = 0x311b04u;
    // NOP
    ctx->pc = 0x311b08u;
}
