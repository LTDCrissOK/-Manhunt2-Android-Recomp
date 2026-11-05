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

// Function: sub_00378FB8
// Address: 0x378fb8 - 0x37a0e0
void sub_00378FB8_0x378fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378FB8_0x378fb8");
#endif

    switch (ctx->pc) {
        case 0x378fb8u: goto label_378fb8;
        case 0x378fbcu: goto label_378fbc;
        case 0x378fc0u: goto label_378fc0;
        case 0x378fc4u: goto label_378fc4;
        case 0x378fc8u: goto label_378fc8;
        case 0x378fccu: goto label_378fcc;
        case 0x378fd0u: goto label_378fd0;
        case 0x378fd4u: goto label_378fd4;
        case 0x378fd8u: goto label_378fd8;
        case 0x378fdcu: goto label_378fdc;
        case 0x378fe0u: goto label_378fe0;
        case 0x378fe4u: goto label_378fe4;
        case 0x378fe8u: goto label_378fe8;
        case 0x378fecu: goto label_378fec;
        case 0x378ff0u: goto label_378ff0;
        case 0x378ff4u: goto label_378ff4;
        case 0x378ff8u: goto label_378ff8;
        case 0x378ffcu: goto label_378ffc;
        case 0x379000u: goto label_379000;
        case 0x379004u: goto label_379004;
        case 0x379008u: goto label_379008;
        case 0x37900cu: goto label_37900c;
        case 0x379010u: goto label_379010;
        case 0x379014u: goto label_379014;
        case 0x379018u: goto label_379018;
        case 0x37901cu: goto label_37901c;
        case 0x379020u: goto label_379020;
        case 0x379024u: goto label_379024;
        case 0x379028u: goto label_379028;
        case 0x37902cu: goto label_37902c;
        case 0x379030u: goto label_379030;
        case 0x379034u: goto label_379034;
        case 0x379038u: goto label_379038;
        case 0x37903cu: goto label_37903c;
        case 0x379040u: goto label_379040;
        case 0x379044u: goto label_379044;
        case 0x379048u: goto label_379048;
        case 0x37904cu: goto label_37904c;
        case 0x379050u: goto label_379050;
        case 0x379054u: goto label_379054;
        case 0x379058u: goto label_379058;
        case 0x37905cu: goto label_37905c;
        case 0x379060u: goto label_379060;
        case 0x379064u: goto label_379064;
        case 0x379068u: goto label_379068;
        case 0x37906cu: goto label_37906c;
        case 0x379070u: goto label_379070;
        case 0x379074u: goto label_379074;
        case 0x379078u: goto label_379078;
        case 0x37907cu: goto label_37907c;
        case 0x379080u: goto label_379080;
        case 0x379084u: goto label_379084;
        case 0x379088u: goto label_379088;
        case 0x37908cu: goto label_37908c;
        case 0x379090u: goto label_379090;
        case 0x379094u: goto label_379094;
        case 0x379098u: goto label_379098;
        case 0x37909cu: goto label_37909c;
        case 0x3790a0u: goto label_3790a0;
        case 0x3790a4u: goto label_3790a4;
        case 0x3790a8u: goto label_3790a8;
        case 0x3790acu: goto label_3790ac;
        case 0x3790b0u: goto label_3790b0;
        case 0x3790b4u: goto label_3790b4;
        case 0x3790b8u: goto label_3790b8;
        case 0x3790bcu: goto label_3790bc;
        case 0x3790c0u: goto label_3790c0;
        case 0x3790c4u: goto label_3790c4;
        case 0x3790c8u: goto label_3790c8;
        case 0x3790ccu: goto label_3790cc;
        case 0x3790d0u: goto label_3790d0;
        case 0x3790d4u: goto label_3790d4;
        case 0x3790d8u: goto label_3790d8;
        case 0x3790dcu: goto label_3790dc;
        case 0x3790e0u: goto label_3790e0;
        case 0x3790e4u: goto label_3790e4;
        case 0x3790e8u: goto label_3790e8;
        case 0x3790ecu: goto label_3790ec;
        case 0x3790f0u: goto label_3790f0;
        case 0x3790f4u: goto label_3790f4;
        case 0x3790f8u: goto label_3790f8;
        case 0x3790fcu: goto label_3790fc;
        case 0x379100u: goto label_379100;
        case 0x379104u: goto label_379104;
        case 0x379108u: goto label_379108;
        case 0x37910cu: goto label_37910c;
        case 0x379110u: goto label_379110;
        case 0x379114u: goto label_379114;
        case 0x379118u: goto label_379118;
        case 0x37911cu: goto label_37911c;
        case 0x379120u: goto label_379120;
        case 0x379124u: goto label_379124;
        case 0x379128u: goto label_379128;
        case 0x37912cu: goto label_37912c;
        case 0x379130u: goto label_379130;
        case 0x379134u: goto label_379134;
        case 0x379138u: goto label_379138;
        case 0x37913cu: goto label_37913c;
        case 0x379140u: goto label_379140;
        case 0x379144u: goto label_379144;
        case 0x379148u: goto label_379148;
        case 0x37914cu: goto label_37914c;
        case 0x379150u: goto label_379150;
        case 0x379154u: goto label_379154;
        case 0x379158u: goto label_379158;
        case 0x37915cu: goto label_37915c;
        case 0x379160u: goto label_379160;
        case 0x379164u: goto label_379164;
        case 0x379168u: goto label_379168;
        case 0x37916cu: goto label_37916c;
        case 0x379170u: goto label_379170;
        case 0x379174u: goto label_379174;
        case 0x379178u: goto label_379178;
        case 0x37917cu: goto label_37917c;
        case 0x379180u: goto label_379180;
        case 0x379184u: goto label_379184;
        case 0x379188u: goto label_379188;
        case 0x37918cu: goto label_37918c;
        case 0x379190u: goto label_379190;
        case 0x379194u: goto label_379194;
        case 0x379198u: goto label_379198;
        case 0x37919cu: goto label_37919c;
        case 0x3791a0u: goto label_3791a0;
        case 0x3791a4u: goto label_3791a4;
        case 0x3791a8u: goto label_3791a8;
        case 0x3791acu: goto label_3791ac;
        case 0x3791b0u: goto label_3791b0;
        case 0x3791b4u: goto label_3791b4;
        case 0x3791b8u: goto label_3791b8;
        case 0x3791bcu: goto label_3791bc;
        case 0x3791c0u: goto label_3791c0;
        case 0x3791c4u: goto label_3791c4;
        case 0x3791c8u: goto label_3791c8;
        case 0x3791ccu: goto label_3791cc;
        case 0x3791d0u: goto label_3791d0;
        case 0x3791d4u: goto label_3791d4;
        case 0x3791d8u: goto label_3791d8;
        case 0x3791dcu: goto label_3791dc;
        case 0x3791e0u: goto label_3791e0;
        case 0x3791e4u: goto label_3791e4;
        case 0x3791e8u: goto label_3791e8;
        case 0x3791ecu: goto label_3791ec;
        case 0x3791f0u: goto label_3791f0;
        case 0x3791f4u: goto label_3791f4;
        case 0x3791f8u: goto label_3791f8;
        case 0x3791fcu: goto label_3791fc;
        case 0x379200u: goto label_379200;
        case 0x379204u: goto label_379204;
        case 0x379208u: goto label_379208;
        case 0x37920cu: goto label_37920c;
        case 0x379210u: goto label_379210;
        case 0x379214u: goto label_379214;
        case 0x379218u: goto label_379218;
        case 0x37921cu: goto label_37921c;
        case 0x379220u: goto label_379220;
        case 0x379224u: goto label_379224;
        case 0x379228u: goto label_379228;
        case 0x37922cu: goto label_37922c;
        case 0x379230u: goto label_379230;
        case 0x379234u: goto label_379234;
        case 0x379238u: goto label_379238;
        case 0x37923cu: goto label_37923c;
        case 0x379240u: goto label_379240;
        case 0x379244u: goto label_379244;
        case 0x379248u: goto label_379248;
        case 0x37924cu: goto label_37924c;
        case 0x379250u: goto label_379250;
        case 0x379254u: goto label_379254;
        case 0x379258u: goto label_379258;
        case 0x37925cu: goto label_37925c;
        case 0x379260u: goto label_379260;
        case 0x379264u: goto label_379264;
        case 0x379268u: goto label_379268;
        case 0x37926cu: goto label_37926c;
        case 0x379270u: goto label_379270;
        case 0x379274u: goto label_379274;
        case 0x379278u: goto label_379278;
        case 0x37927cu: goto label_37927c;
        case 0x379280u: goto label_379280;
        case 0x379284u: goto label_379284;
        case 0x379288u: goto label_379288;
        case 0x37928cu: goto label_37928c;
        case 0x379290u: goto label_379290;
        case 0x379294u: goto label_379294;
        case 0x379298u: goto label_379298;
        case 0x37929cu: goto label_37929c;
        case 0x3792a0u: goto label_3792a0;
        case 0x3792a4u: goto label_3792a4;
        case 0x3792a8u: goto label_3792a8;
        case 0x3792acu: goto label_3792ac;
        case 0x3792b0u: goto label_3792b0;
        case 0x3792b4u: goto label_3792b4;
        case 0x3792b8u: goto label_3792b8;
        case 0x3792bcu: goto label_3792bc;
        case 0x3792c0u: goto label_3792c0;
        case 0x3792c4u: goto label_3792c4;
        case 0x3792c8u: goto label_3792c8;
        case 0x3792ccu: goto label_3792cc;
        case 0x3792d0u: goto label_3792d0;
        case 0x3792d4u: goto label_3792d4;
        case 0x3792d8u: goto label_3792d8;
        case 0x3792dcu: goto label_3792dc;
        case 0x3792e0u: goto label_3792e0;
        case 0x3792e4u: goto label_3792e4;
        case 0x3792e8u: goto label_3792e8;
        case 0x3792ecu: goto label_3792ec;
        case 0x3792f0u: goto label_3792f0;
        case 0x3792f4u: goto label_3792f4;
        case 0x3792f8u: goto label_3792f8;
        case 0x3792fcu: goto label_3792fc;
        case 0x379300u: goto label_379300;
        case 0x379304u: goto label_379304;
        case 0x379308u: goto label_379308;
        case 0x37930cu: goto label_37930c;
        case 0x379310u: goto label_379310;
        case 0x379314u: goto label_379314;
        case 0x379318u: goto label_379318;
        case 0x37931cu: goto label_37931c;
        case 0x379320u: goto label_379320;
        case 0x379324u: goto label_379324;
        case 0x379328u: goto label_379328;
        case 0x37932cu: goto label_37932c;
        case 0x379330u: goto label_379330;
        case 0x379334u: goto label_379334;
        case 0x379338u: goto label_379338;
        case 0x37933cu: goto label_37933c;
        case 0x379340u: goto label_379340;
        case 0x379344u: goto label_379344;
        case 0x379348u: goto label_379348;
        case 0x37934cu: goto label_37934c;
        case 0x379350u: goto label_379350;
        case 0x379354u: goto label_379354;
        case 0x379358u: goto label_379358;
        case 0x37935cu: goto label_37935c;
        case 0x379360u: goto label_379360;
        case 0x379364u: goto label_379364;
        case 0x379368u: goto label_379368;
        case 0x37936cu: goto label_37936c;
        case 0x379370u: goto label_379370;
        case 0x379374u: goto label_379374;
        case 0x379378u: goto label_379378;
        case 0x37937cu: goto label_37937c;
        case 0x379380u: goto label_379380;
        case 0x379384u: goto label_379384;
        case 0x379388u: goto label_379388;
        case 0x37938cu: goto label_37938c;
        case 0x379390u: goto label_379390;
        case 0x379394u: goto label_379394;
        case 0x379398u: goto label_379398;
        case 0x37939cu: goto label_37939c;
        case 0x3793a0u: goto label_3793a0;
        case 0x3793a4u: goto label_3793a4;
        case 0x3793a8u: goto label_3793a8;
        case 0x3793acu: goto label_3793ac;
        case 0x3793b0u: goto label_3793b0;
        case 0x3793b4u: goto label_3793b4;
        case 0x3793b8u: goto label_3793b8;
        case 0x3793bcu: goto label_3793bc;
        case 0x3793c0u: goto label_3793c0;
        case 0x3793c4u: goto label_3793c4;
        case 0x3793c8u: goto label_3793c8;
        case 0x3793ccu: goto label_3793cc;
        case 0x3793d0u: goto label_3793d0;
        case 0x3793d4u: goto label_3793d4;
        case 0x3793d8u: goto label_3793d8;
        case 0x3793dcu: goto label_3793dc;
        case 0x3793e0u: goto label_3793e0;
        case 0x3793e4u: goto label_3793e4;
        case 0x3793e8u: goto label_3793e8;
        case 0x3793ecu: goto label_3793ec;
        case 0x3793f0u: goto label_3793f0;
        case 0x3793f4u: goto label_3793f4;
        case 0x3793f8u: goto label_3793f8;
        case 0x3793fcu: goto label_3793fc;
        case 0x379400u: goto label_379400;
        case 0x379404u: goto label_379404;
        case 0x379408u: goto label_379408;
        case 0x37940cu: goto label_37940c;
        case 0x379410u: goto label_379410;
        case 0x379414u: goto label_379414;
        case 0x379418u: goto label_379418;
        case 0x37941cu: goto label_37941c;
        case 0x379420u: goto label_379420;
        case 0x379424u: goto label_379424;
        case 0x379428u: goto label_379428;
        case 0x37942cu: goto label_37942c;
        case 0x379430u: goto label_379430;
        case 0x379434u: goto label_379434;
        case 0x379438u: goto label_379438;
        case 0x37943cu: goto label_37943c;
        case 0x379440u: goto label_379440;
        case 0x379444u: goto label_379444;
        case 0x379448u: goto label_379448;
        case 0x37944cu: goto label_37944c;
        case 0x379450u: goto label_379450;
        case 0x379454u: goto label_379454;
        case 0x379458u: goto label_379458;
        case 0x37945cu: goto label_37945c;
        case 0x379460u: goto label_379460;
        case 0x379464u: goto label_379464;
        case 0x379468u: goto label_379468;
        case 0x37946cu: goto label_37946c;
        case 0x379470u: goto label_379470;
        case 0x379474u: goto label_379474;
        case 0x379478u: goto label_379478;
        case 0x37947cu: goto label_37947c;
        case 0x379480u: goto label_379480;
        case 0x379484u: goto label_379484;
        case 0x379488u: goto label_379488;
        case 0x37948cu: goto label_37948c;
        case 0x379490u: goto label_379490;
        case 0x379494u: goto label_379494;
        case 0x379498u: goto label_379498;
        case 0x37949cu: goto label_37949c;
        case 0x3794a0u: goto label_3794a0;
        case 0x3794a4u: goto label_3794a4;
        case 0x3794a8u: goto label_3794a8;
        case 0x3794acu: goto label_3794ac;
        case 0x3794b0u: goto label_3794b0;
        case 0x3794b4u: goto label_3794b4;
        case 0x3794b8u: goto label_3794b8;
        case 0x3794bcu: goto label_3794bc;
        case 0x3794c0u: goto label_3794c0;
        case 0x3794c4u: goto label_3794c4;
        case 0x3794c8u: goto label_3794c8;
        case 0x3794ccu: goto label_3794cc;
        case 0x3794d0u: goto label_3794d0;
        case 0x3794d4u: goto label_3794d4;
        case 0x3794d8u: goto label_3794d8;
        case 0x3794dcu: goto label_3794dc;
        case 0x3794e0u: goto label_3794e0;
        case 0x3794e4u: goto label_3794e4;
        case 0x3794e8u: goto label_3794e8;
        case 0x3794ecu: goto label_3794ec;
        case 0x3794f0u: goto label_3794f0;
        case 0x3794f4u: goto label_3794f4;
        case 0x3794f8u: goto label_3794f8;
        case 0x3794fcu: goto label_3794fc;
        case 0x379500u: goto label_379500;
        case 0x379504u: goto label_379504;
        case 0x379508u: goto label_379508;
        case 0x37950cu: goto label_37950c;
        case 0x379510u: goto label_379510;
        case 0x379514u: goto label_379514;
        case 0x379518u: goto label_379518;
        case 0x37951cu: goto label_37951c;
        case 0x379520u: goto label_379520;
        case 0x379524u: goto label_379524;
        case 0x379528u: goto label_379528;
        case 0x37952cu: goto label_37952c;
        case 0x379530u: goto label_379530;
        case 0x379534u: goto label_379534;
        case 0x379538u: goto label_379538;
        case 0x37953cu: goto label_37953c;
        case 0x379540u: goto label_379540;
        case 0x379544u: goto label_379544;
        case 0x379548u: goto label_379548;
        case 0x37954cu: goto label_37954c;
        case 0x379550u: goto label_379550;
        case 0x379554u: goto label_379554;
        case 0x379558u: goto label_379558;
        case 0x37955cu: goto label_37955c;
        case 0x379560u: goto label_379560;
        case 0x379564u: goto label_379564;
        case 0x379568u: goto label_379568;
        case 0x37956cu: goto label_37956c;
        case 0x379570u: goto label_379570;
        case 0x379574u: goto label_379574;
        case 0x379578u: goto label_379578;
        case 0x37957cu: goto label_37957c;
        case 0x379580u: goto label_379580;
        case 0x379584u: goto label_379584;
        case 0x379588u: goto label_379588;
        case 0x37958cu: goto label_37958c;
        case 0x379590u: goto label_379590;
        case 0x379594u: goto label_379594;
        case 0x379598u: goto label_379598;
        case 0x37959cu: goto label_37959c;
        case 0x3795a0u: goto label_3795a0;
        case 0x3795a4u: goto label_3795a4;
        case 0x3795a8u: goto label_3795a8;
        case 0x3795acu: goto label_3795ac;
        case 0x3795b0u: goto label_3795b0;
        case 0x3795b4u: goto label_3795b4;
        case 0x3795b8u: goto label_3795b8;
        case 0x3795bcu: goto label_3795bc;
        case 0x3795c0u: goto label_3795c0;
        case 0x3795c4u: goto label_3795c4;
        case 0x3795c8u: goto label_3795c8;
        case 0x3795ccu: goto label_3795cc;
        case 0x3795d0u: goto label_3795d0;
        case 0x3795d4u: goto label_3795d4;
        case 0x3795d8u: goto label_3795d8;
        case 0x3795dcu: goto label_3795dc;
        case 0x3795e0u: goto label_3795e0;
        case 0x3795e4u: goto label_3795e4;
        case 0x3795e8u: goto label_3795e8;
        case 0x3795ecu: goto label_3795ec;
        case 0x3795f0u: goto label_3795f0;
        case 0x3795f4u: goto label_3795f4;
        case 0x3795f8u: goto label_3795f8;
        case 0x3795fcu: goto label_3795fc;
        case 0x379600u: goto label_379600;
        case 0x379604u: goto label_379604;
        case 0x379608u: goto label_379608;
        case 0x37960cu: goto label_37960c;
        case 0x379610u: goto label_379610;
        case 0x379614u: goto label_379614;
        case 0x379618u: goto label_379618;
        case 0x37961cu: goto label_37961c;
        case 0x379620u: goto label_379620;
        case 0x379624u: goto label_379624;
        case 0x379628u: goto label_379628;
        case 0x37962cu: goto label_37962c;
        case 0x379630u: goto label_379630;
        case 0x379634u: goto label_379634;
        case 0x379638u: goto label_379638;
        case 0x37963cu: goto label_37963c;
        case 0x379640u: goto label_379640;
        case 0x379644u: goto label_379644;
        case 0x379648u: goto label_379648;
        case 0x37964cu: goto label_37964c;
        case 0x379650u: goto label_379650;
        case 0x379654u: goto label_379654;
        case 0x379658u: goto label_379658;
        case 0x37965cu: goto label_37965c;
        case 0x379660u: goto label_379660;
        case 0x379664u: goto label_379664;
        case 0x379668u: goto label_379668;
        case 0x37966cu: goto label_37966c;
        case 0x379670u: goto label_379670;
        case 0x379674u: goto label_379674;
        case 0x379678u: goto label_379678;
        case 0x37967cu: goto label_37967c;
        case 0x379680u: goto label_379680;
        case 0x379684u: goto label_379684;
        case 0x379688u: goto label_379688;
        case 0x37968cu: goto label_37968c;
        case 0x379690u: goto label_379690;
        case 0x379694u: goto label_379694;
        case 0x379698u: goto label_379698;
        case 0x37969cu: goto label_37969c;
        case 0x3796a0u: goto label_3796a0;
        case 0x3796a4u: goto label_3796a4;
        case 0x3796a8u: goto label_3796a8;
        case 0x3796acu: goto label_3796ac;
        case 0x3796b0u: goto label_3796b0;
        case 0x3796b4u: goto label_3796b4;
        case 0x3796b8u: goto label_3796b8;
        case 0x3796bcu: goto label_3796bc;
        case 0x3796c0u: goto label_3796c0;
        case 0x3796c4u: goto label_3796c4;
        case 0x3796c8u: goto label_3796c8;
        case 0x3796ccu: goto label_3796cc;
        case 0x3796d0u: goto label_3796d0;
        case 0x3796d4u: goto label_3796d4;
        case 0x3796d8u: goto label_3796d8;
        case 0x3796dcu: goto label_3796dc;
        case 0x3796e0u: goto label_3796e0;
        case 0x3796e4u: goto label_3796e4;
        case 0x3796e8u: goto label_3796e8;
        case 0x3796ecu: goto label_3796ec;
        case 0x3796f0u: goto label_3796f0;
        case 0x3796f4u: goto label_3796f4;
        case 0x3796f8u: goto label_3796f8;
        case 0x3796fcu: goto label_3796fc;
        case 0x379700u: goto label_379700;
        case 0x379704u: goto label_379704;
        case 0x379708u: goto label_379708;
        case 0x37970cu: goto label_37970c;
        case 0x379710u: goto label_379710;
        case 0x379714u: goto label_379714;
        case 0x379718u: goto label_379718;
        case 0x37971cu: goto label_37971c;
        case 0x379720u: goto label_379720;
        case 0x379724u: goto label_379724;
        case 0x379728u: goto label_379728;
        case 0x37972cu: goto label_37972c;
        case 0x379730u: goto label_379730;
        case 0x379734u: goto label_379734;
        case 0x379738u: goto label_379738;
        case 0x37973cu: goto label_37973c;
        case 0x379740u: goto label_379740;
        case 0x379744u: goto label_379744;
        case 0x379748u: goto label_379748;
        case 0x37974cu: goto label_37974c;
        case 0x379750u: goto label_379750;
        case 0x379754u: goto label_379754;
        case 0x379758u: goto label_379758;
        case 0x37975cu: goto label_37975c;
        case 0x379760u: goto label_379760;
        case 0x379764u: goto label_379764;
        case 0x379768u: goto label_379768;
        case 0x37976cu: goto label_37976c;
        case 0x379770u: goto label_379770;
        case 0x379774u: goto label_379774;
        case 0x379778u: goto label_379778;
        case 0x37977cu: goto label_37977c;
        case 0x379780u: goto label_379780;
        case 0x379784u: goto label_379784;
        case 0x379788u: goto label_379788;
        case 0x37978cu: goto label_37978c;
        case 0x379790u: goto label_379790;
        case 0x379794u: goto label_379794;
        case 0x379798u: goto label_379798;
        case 0x37979cu: goto label_37979c;
        case 0x3797a0u: goto label_3797a0;
        case 0x3797a4u: goto label_3797a4;
        case 0x3797a8u: goto label_3797a8;
        case 0x3797acu: goto label_3797ac;
        case 0x3797b0u: goto label_3797b0;
        case 0x3797b4u: goto label_3797b4;
        case 0x3797b8u: goto label_3797b8;
        case 0x3797bcu: goto label_3797bc;
        case 0x3797c0u: goto label_3797c0;
        case 0x3797c4u: goto label_3797c4;
        case 0x3797c8u: goto label_3797c8;
        case 0x3797ccu: goto label_3797cc;
        case 0x3797d0u: goto label_3797d0;
        case 0x3797d4u: goto label_3797d4;
        case 0x3797d8u: goto label_3797d8;
        case 0x3797dcu: goto label_3797dc;
        case 0x3797e0u: goto label_3797e0;
        case 0x3797e4u: goto label_3797e4;
        case 0x3797e8u: goto label_3797e8;
        case 0x3797ecu: goto label_3797ec;
        case 0x3797f0u: goto label_3797f0;
        case 0x3797f4u: goto label_3797f4;
        case 0x3797f8u: goto label_3797f8;
        case 0x3797fcu: goto label_3797fc;
        case 0x379800u: goto label_379800;
        case 0x379804u: goto label_379804;
        case 0x379808u: goto label_379808;
        case 0x37980cu: goto label_37980c;
        case 0x379810u: goto label_379810;
        case 0x379814u: goto label_379814;
        case 0x379818u: goto label_379818;
        case 0x37981cu: goto label_37981c;
        case 0x379820u: goto label_379820;
        case 0x379824u: goto label_379824;
        case 0x379828u: goto label_379828;
        case 0x37982cu: goto label_37982c;
        case 0x379830u: goto label_379830;
        case 0x379834u: goto label_379834;
        case 0x379838u: goto label_379838;
        case 0x37983cu: goto label_37983c;
        case 0x379840u: goto label_379840;
        case 0x379844u: goto label_379844;
        case 0x379848u: goto label_379848;
        case 0x37984cu: goto label_37984c;
        case 0x379850u: goto label_379850;
        case 0x379854u: goto label_379854;
        case 0x379858u: goto label_379858;
        case 0x37985cu: goto label_37985c;
        case 0x379860u: goto label_379860;
        case 0x379864u: goto label_379864;
        case 0x379868u: goto label_379868;
        case 0x37986cu: goto label_37986c;
        case 0x379870u: goto label_379870;
        case 0x379874u: goto label_379874;
        case 0x379878u: goto label_379878;
        case 0x37987cu: goto label_37987c;
        case 0x379880u: goto label_379880;
        case 0x379884u: goto label_379884;
        case 0x379888u: goto label_379888;
        case 0x37988cu: goto label_37988c;
        case 0x379890u: goto label_379890;
        case 0x379894u: goto label_379894;
        case 0x379898u: goto label_379898;
        case 0x37989cu: goto label_37989c;
        case 0x3798a0u: goto label_3798a0;
        case 0x3798a4u: goto label_3798a4;
        case 0x3798a8u: goto label_3798a8;
        case 0x3798acu: goto label_3798ac;
        case 0x3798b0u: goto label_3798b0;
        case 0x3798b4u: goto label_3798b4;
        case 0x3798b8u: goto label_3798b8;
        case 0x3798bcu: goto label_3798bc;
        case 0x3798c0u: goto label_3798c0;
        case 0x3798c4u: goto label_3798c4;
        case 0x3798c8u: goto label_3798c8;
        case 0x3798ccu: goto label_3798cc;
        case 0x3798d0u: goto label_3798d0;
        case 0x3798d4u: goto label_3798d4;
        case 0x3798d8u: goto label_3798d8;
        case 0x3798dcu: goto label_3798dc;
        case 0x3798e0u: goto label_3798e0;
        case 0x3798e4u: goto label_3798e4;
        case 0x3798e8u: goto label_3798e8;
        case 0x3798ecu: goto label_3798ec;
        case 0x3798f0u: goto label_3798f0;
        case 0x3798f4u: goto label_3798f4;
        case 0x3798f8u: goto label_3798f8;
        case 0x3798fcu: goto label_3798fc;
        case 0x379900u: goto label_379900;
        case 0x379904u: goto label_379904;
        case 0x379908u: goto label_379908;
        case 0x37990cu: goto label_37990c;
        case 0x379910u: goto label_379910;
        case 0x379914u: goto label_379914;
        case 0x379918u: goto label_379918;
        case 0x37991cu: goto label_37991c;
        case 0x379920u: goto label_379920;
        case 0x379924u: goto label_379924;
        case 0x379928u: goto label_379928;
        case 0x37992cu: goto label_37992c;
        case 0x379930u: goto label_379930;
        case 0x379934u: goto label_379934;
        case 0x379938u: goto label_379938;
        case 0x37993cu: goto label_37993c;
        case 0x379940u: goto label_379940;
        case 0x379944u: goto label_379944;
        case 0x379948u: goto label_379948;
        case 0x37994cu: goto label_37994c;
        case 0x379950u: goto label_379950;
        case 0x379954u: goto label_379954;
        case 0x379958u: goto label_379958;
        case 0x37995cu: goto label_37995c;
        case 0x379960u: goto label_379960;
        case 0x379964u: goto label_379964;
        case 0x379968u: goto label_379968;
        case 0x37996cu: goto label_37996c;
        case 0x379970u: goto label_379970;
        case 0x379974u: goto label_379974;
        case 0x379978u: goto label_379978;
        case 0x37997cu: goto label_37997c;
        case 0x379980u: goto label_379980;
        case 0x379984u: goto label_379984;
        case 0x379988u: goto label_379988;
        case 0x37998cu: goto label_37998c;
        case 0x379990u: goto label_379990;
        case 0x379994u: goto label_379994;
        case 0x379998u: goto label_379998;
        case 0x37999cu: goto label_37999c;
        case 0x3799a0u: goto label_3799a0;
        case 0x3799a4u: goto label_3799a4;
        case 0x3799a8u: goto label_3799a8;
        case 0x3799acu: goto label_3799ac;
        case 0x3799b0u: goto label_3799b0;
        case 0x3799b4u: goto label_3799b4;
        case 0x3799b8u: goto label_3799b8;
        case 0x3799bcu: goto label_3799bc;
        case 0x3799c0u: goto label_3799c0;
        case 0x3799c4u: goto label_3799c4;
        case 0x3799c8u: goto label_3799c8;
        case 0x3799ccu: goto label_3799cc;
        case 0x3799d0u: goto label_3799d0;
        case 0x3799d4u: goto label_3799d4;
        case 0x3799d8u: goto label_3799d8;
        case 0x3799dcu: goto label_3799dc;
        case 0x3799e0u: goto label_3799e0;
        case 0x3799e4u: goto label_3799e4;
        case 0x3799e8u: goto label_3799e8;
        case 0x3799ecu: goto label_3799ec;
        case 0x3799f0u: goto label_3799f0;
        case 0x3799f4u: goto label_3799f4;
        case 0x3799f8u: goto label_3799f8;
        case 0x3799fcu: goto label_3799fc;
        case 0x379a00u: goto label_379a00;
        case 0x379a04u: goto label_379a04;
        case 0x379a08u: goto label_379a08;
        case 0x379a0cu: goto label_379a0c;
        case 0x379a10u: goto label_379a10;
        case 0x379a14u: goto label_379a14;
        case 0x379a18u: goto label_379a18;
        case 0x379a1cu: goto label_379a1c;
        case 0x379a20u: goto label_379a20;
        case 0x379a24u: goto label_379a24;
        case 0x379a28u: goto label_379a28;
        case 0x379a2cu: goto label_379a2c;
        case 0x379a30u: goto label_379a30;
        case 0x379a34u: goto label_379a34;
        case 0x379a38u: goto label_379a38;
        case 0x379a3cu: goto label_379a3c;
        case 0x379a40u: goto label_379a40;
        case 0x379a44u: goto label_379a44;
        case 0x379a48u: goto label_379a48;
        case 0x379a4cu: goto label_379a4c;
        case 0x379a50u: goto label_379a50;
        case 0x379a54u: goto label_379a54;
        case 0x379a58u: goto label_379a58;
        case 0x379a5cu: goto label_379a5c;
        case 0x379a60u: goto label_379a60;
        case 0x379a64u: goto label_379a64;
        case 0x379a68u: goto label_379a68;
        case 0x379a6cu: goto label_379a6c;
        case 0x379a70u: goto label_379a70;
        case 0x379a74u: goto label_379a74;
        case 0x379a78u: goto label_379a78;
        case 0x379a7cu: goto label_379a7c;
        case 0x379a80u: goto label_379a80;
        case 0x379a84u: goto label_379a84;
        case 0x379a88u: goto label_379a88;
        case 0x379a8cu: goto label_379a8c;
        case 0x379a90u: goto label_379a90;
        case 0x379a94u: goto label_379a94;
        case 0x379a98u: goto label_379a98;
        case 0x379a9cu: goto label_379a9c;
        case 0x379aa0u: goto label_379aa0;
        case 0x379aa4u: goto label_379aa4;
        case 0x379aa8u: goto label_379aa8;
        case 0x379aacu: goto label_379aac;
        case 0x379ab0u: goto label_379ab0;
        case 0x379ab4u: goto label_379ab4;
        case 0x379ab8u: goto label_379ab8;
        case 0x379abcu: goto label_379abc;
        case 0x379ac0u: goto label_379ac0;
        case 0x379ac4u: goto label_379ac4;
        case 0x379ac8u: goto label_379ac8;
        case 0x379accu: goto label_379acc;
        case 0x379ad0u: goto label_379ad0;
        case 0x379ad4u: goto label_379ad4;
        case 0x379ad8u: goto label_379ad8;
        case 0x379adcu: goto label_379adc;
        case 0x379ae0u: goto label_379ae0;
        case 0x379ae4u: goto label_379ae4;
        case 0x379ae8u: goto label_379ae8;
        case 0x379aecu: goto label_379aec;
        case 0x379af0u: goto label_379af0;
        case 0x379af4u: goto label_379af4;
        case 0x379af8u: goto label_379af8;
        case 0x379afcu: goto label_379afc;
        case 0x379b00u: goto label_379b00;
        case 0x379b04u: goto label_379b04;
        case 0x379b08u: goto label_379b08;
        case 0x379b0cu: goto label_379b0c;
        case 0x379b10u: goto label_379b10;
        case 0x379b14u: goto label_379b14;
        case 0x379b18u: goto label_379b18;
        case 0x379b1cu: goto label_379b1c;
        case 0x379b20u: goto label_379b20;
        case 0x379b24u: goto label_379b24;
        case 0x379b28u: goto label_379b28;
        case 0x379b2cu: goto label_379b2c;
        case 0x379b30u: goto label_379b30;
        case 0x379b34u: goto label_379b34;
        case 0x379b38u: goto label_379b38;
        case 0x379b3cu: goto label_379b3c;
        case 0x379b40u: goto label_379b40;
        case 0x379b44u: goto label_379b44;
        case 0x379b48u: goto label_379b48;
        case 0x379b4cu: goto label_379b4c;
        case 0x379b50u: goto label_379b50;
        case 0x379b54u: goto label_379b54;
        case 0x379b58u: goto label_379b58;
        case 0x379b5cu: goto label_379b5c;
        case 0x379b60u: goto label_379b60;
        case 0x379b64u: goto label_379b64;
        case 0x379b68u: goto label_379b68;
        case 0x379b6cu: goto label_379b6c;
        case 0x379b70u: goto label_379b70;
        case 0x379b74u: goto label_379b74;
        case 0x379b78u: goto label_379b78;
        case 0x379b7cu: goto label_379b7c;
        case 0x379b80u: goto label_379b80;
        case 0x379b84u: goto label_379b84;
        case 0x379b88u: goto label_379b88;
        case 0x379b8cu: goto label_379b8c;
        case 0x379b90u: goto label_379b90;
        case 0x379b94u: goto label_379b94;
        case 0x379b98u: goto label_379b98;
        case 0x379b9cu: goto label_379b9c;
        case 0x379ba0u: goto label_379ba0;
        case 0x379ba4u: goto label_379ba4;
        case 0x379ba8u: goto label_379ba8;
        case 0x379bacu: goto label_379bac;
        case 0x379bb0u: goto label_379bb0;
        case 0x379bb4u: goto label_379bb4;
        case 0x379bb8u: goto label_379bb8;
        case 0x379bbcu: goto label_379bbc;
        case 0x379bc0u: goto label_379bc0;
        case 0x379bc4u: goto label_379bc4;
        case 0x379bc8u: goto label_379bc8;
        case 0x379bccu: goto label_379bcc;
        case 0x379bd0u: goto label_379bd0;
        case 0x379bd4u: goto label_379bd4;
        case 0x379bd8u: goto label_379bd8;
        case 0x379bdcu: goto label_379bdc;
        case 0x379be0u: goto label_379be0;
        case 0x379be4u: goto label_379be4;
        case 0x379be8u: goto label_379be8;
        case 0x379becu: goto label_379bec;
        case 0x379bf0u: goto label_379bf0;
        case 0x379bf4u: goto label_379bf4;
        case 0x379bf8u: goto label_379bf8;
        case 0x379bfcu: goto label_379bfc;
        case 0x379c00u: goto label_379c00;
        case 0x379c04u: goto label_379c04;
        case 0x379c08u: goto label_379c08;
        case 0x379c0cu: goto label_379c0c;
        case 0x379c10u: goto label_379c10;
        case 0x379c14u: goto label_379c14;
        case 0x379c18u: goto label_379c18;
        case 0x379c1cu: goto label_379c1c;
        case 0x379c20u: goto label_379c20;
        case 0x379c24u: goto label_379c24;
        case 0x379c28u: goto label_379c28;
        case 0x379c2cu: goto label_379c2c;
        case 0x379c30u: goto label_379c30;
        case 0x379c34u: goto label_379c34;
        case 0x379c38u: goto label_379c38;
        case 0x379c3cu: goto label_379c3c;
        case 0x379c40u: goto label_379c40;
        case 0x379c44u: goto label_379c44;
        case 0x379c48u: goto label_379c48;
        case 0x379c4cu: goto label_379c4c;
        case 0x379c50u: goto label_379c50;
        case 0x379c54u: goto label_379c54;
        case 0x379c58u: goto label_379c58;
        case 0x379c5cu: goto label_379c5c;
        case 0x379c60u: goto label_379c60;
        case 0x379c64u: goto label_379c64;
        case 0x379c68u: goto label_379c68;
        case 0x379c6cu: goto label_379c6c;
        case 0x379c70u: goto label_379c70;
        case 0x379c74u: goto label_379c74;
        case 0x379c78u: goto label_379c78;
        case 0x379c7cu: goto label_379c7c;
        case 0x379c80u: goto label_379c80;
        case 0x379c84u: goto label_379c84;
        case 0x379c88u: goto label_379c88;
        case 0x379c8cu: goto label_379c8c;
        case 0x379c90u: goto label_379c90;
        case 0x379c94u: goto label_379c94;
        case 0x379c98u: goto label_379c98;
        case 0x379c9cu: goto label_379c9c;
        case 0x379ca0u: goto label_379ca0;
        case 0x379ca4u: goto label_379ca4;
        case 0x379ca8u: goto label_379ca8;
        case 0x379cacu: goto label_379cac;
        case 0x379cb0u: goto label_379cb0;
        case 0x379cb4u: goto label_379cb4;
        case 0x379cb8u: goto label_379cb8;
        case 0x379cbcu: goto label_379cbc;
        case 0x379cc0u: goto label_379cc0;
        case 0x379cc4u: goto label_379cc4;
        case 0x379cc8u: goto label_379cc8;
        case 0x379cccu: goto label_379ccc;
        case 0x379cd0u: goto label_379cd0;
        case 0x379cd4u: goto label_379cd4;
        case 0x379cd8u: goto label_379cd8;
        case 0x379cdcu: goto label_379cdc;
        case 0x379ce0u: goto label_379ce0;
        case 0x379ce4u: goto label_379ce4;
        case 0x379ce8u: goto label_379ce8;
        case 0x379cecu: goto label_379cec;
        case 0x379cf0u: goto label_379cf0;
        case 0x379cf4u: goto label_379cf4;
        case 0x379cf8u: goto label_379cf8;
        case 0x379cfcu: goto label_379cfc;
        case 0x379d00u: goto label_379d00;
        case 0x379d04u: goto label_379d04;
        case 0x379d08u: goto label_379d08;
        case 0x379d0cu: goto label_379d0c;
        case 0x379d10u: goto label_379d10;
        case 0x379d14u: goto label_379d14;
        case 0x379d18u: goto label_379d18;
        case 0x379d1cu: goto label_379d1c;
        case 0x379d20u: goto label_379d20;
        case 0x379d24u: goto label_379d24;
        case 0x379d28u: goto label_379d28;
        case 0x379d2cu: goto label_379d2c;
        case 0x379d30u: goto label_379d30;
        case 0x379d34u: goto label_379d34;
        case 0x379d38u: goto label_379d38;
        case 0x379d3cu: goto label_379d3c;
        case 0x379d40u: goto label_379d40;
        case 0x379d44u: goto label_379d44;
        case 0x379d48u: goto label_379d48;
        case 0x379d4cu: goto label_379d4c;
        case 0x379d50u: goto label_379d50;
        case 0x379d54u: goto label_379d54;
        case 0x379d58u: goto label_379d58;
        case 0x379d5cu: goto label_379d5c;
        case 0x379d60u: goto label_379d60;
        case 0x379d64u: goto label_379d64;
        case 0x379d68u: goto label_379d68;
        case 0x379d6cu: goto label_379d6c;
        case 0x379d70u: goto label_379d70;
        case 0x379d74u: goto label_379d74;
        case 0x379d78u: goto label_379d78;
        case 0x379d7cu: goto label_379d7c;
        case 0x379d80u: goto label_379d80;
        case 0x379d84u: goto label_379d84;
        case 0x379d88u: goto label_379d88;
        case 0x379d8cu: goto label_379d8c;
        case 0x379d90u: goto label_379d90;
        case 0x379d94u: goto label_379d94;
        case 0x379d98u: goto label_379d98;
        case 0x379d9cu: goto label_379d9c;
        case 0x379da0u: goto label_379da0;
        case 0x379da4u: goto label_379da4;
        case 0x379da8u: goto label_379da8;
        case 0x379dacu: goto label_379dac;
        case 0x379db0u: goto label_379db0;
        case 0x379db4u: goto label_379db4;
        case 0x379db8u: goto label_379db8;
        case 0x379dbcu: goto label_379dbc;
        case 0x379dc0u: goto label_379dc0;
        case 0x379dc4u: goto label_379dc4;
        case 0x379dc8u: goto label_379dc8;
        case 0x379dccu: goto label_379dcc;
        case 0x379dd0u: goto label_379dd0;
        case 0x379dd4u: goto label_379dd4;
        case 0x379dd8u: goto label_379dd8;
        case 0x379ddcu: goto label_379ddc;
        case 0x379de0u: goto label_379de0;
        case 0x379de4u: goto label_379de4;
        case 0x379de8u: goto label_379de8;
        case 0x379decu: goto label_379dec;
        case 0x379df0u: goto label_379df0;
        case 0x379df4u: goto label_379df4;
        case 0x379df8u: goto label_379df8;
        case 0x379dfcu: goto label_379dfc;
        case 0x379e00u: goto label_379e00;
        case 0x379e04u: goto label_379e04;
        case 0x379e08u: goto label_379e08;
        case 0x379e0cu: goto label_379e0c;
        case 0x379e10u: goto label_379e10;
        case 0x379e14u: goto label_379e14;
        case 0x379e18u: goto label_379e18;
        case 0x379e1cu: goto label_379e1c;
        case 0x379e20u: goto label_379e20;
        case 0x379e24u: goto label_379e24;
        case 0x379e28u: goto label_379e28;
        case 0x379e2cu: goto label_379e2c;
        case 0x379e30u: goto label_379e30;
        case 0x379e34u: goto label_379e34;
        case 0x379e38u: goto label_379e38;
        case 0x379e3cu: goto label_379e3c;
        case 0x379e40u: goto label_379e40;
        case 0x379e44u: goto label_379e44;
        case 0x379e48u: goto label_379e48;
        case 0x379e4cu: goto label_379e4c;
        case 0x379e50u: goto label_379e50;
        case 0x379e54u: goto label_379e54;
        case 0x379e58u: goto label_379e58;
        case 0x379e5cu: goto label_379e5c;
        case 0x379e60u: goto label_379e60;
        case 0x379e64u: goto label_379e64;
        case 0x379e68u: goto label_379e68;
        case 0x379e6cu: goto label_379e6c;
        case 0x379e70u: goto label_379e70;
        case 0x379e74u: goto label_379e74;
        case 0x379e78u: goto label_379e78;
        case 0x379e7cu: goto label_379e7c;
        case 0x379e80u: goto label_379e80;
        case 0x379e84u: goto label_379e84;
        case 0x379e88u: goto label_379e88;
        case 0x379e8cu: goto label_379e8c;
        case 0x379e90u: goto label_379e90;
        case 0x379e94u: goto label_379e94;
        case 0x379e98u: goto label_379e98;
        case 0x379e9cu: goto label_379e9c;
        case 0x379ea0u: goto label_379ea0;
        case 0x379ea4u: goto label_379ea4;
        case 0x379ea8u: goto label_379ea8;
        case 0x379eacu: goto label_379eac;
        case 0x379eb0u: goto label_379eb0;
        case 0x379eb4u: goto label_379eb4;
        case 0x379eb8u: goto label_379eb8;
        case 0x379ebcu: goto label_379ebc;
        case 0x379ec0u: goto label_379ec0;
        case 0x379ec4u: goto label_379ec4;
        case 0x379ec8u: goto label_379ec8;
        case 0x379eccu: goto label_379ecc;
        case 0x379ed0u: goto label_379ed0;
        case 0x379ed4u: goto label_379ed4;
        case 0x379ed8u: goto label_379ed8;
        case 0x379edcu: goto label_379edc;
        case 0x379ee0u: goto label_379ee0;
        case 0x379ee4u: goto label_379ee4;
        case 0x379ee8u: goto label_379ee8;
        case 0x379eecu: goto label_379eec;
        case 0x379ef0u: goto label_379ef0;
        case 0x379ef4u: goto label_379ef4;
        case 0x379ef8u: goto label_379ef8;
        case 0x379efcu: goto label_379efc;
        case 0x379f00u: goto label_379f00;
        case 0x379f04u: goto label_379f04;
        case 0x379f08u: goto label_379f08;
        case 0x379f0cu: goto label_379f0c;
        case 0x379f10u: goto label_379f10;
        case 0x379f14u: goto label_379f14;
        case 0x379f18u: goto label_379f18;
        case 0x379f1cu: goto label_379f1c;
        case 0x379f20u: goto label_379f20;
        case 0x379f24u: goto label_379f24;
        case 0x379f28u: goto label_379f28;
        case 0x379f2cu: goto label_379f2c;
        case 0x379f30u: goto label_379f30;
        case 0x379f34u: goto label_379f34;
        case 0x379f38u: goto label_379f38;
        case 0x379f3cu: goto label_379f3c;
        case 0x379f40u: goto label_379f40;
        case 0x379f44u: goto label_379f44;
        case 0x379f48u: goto label_379f48;
        case 0x379f4cu: goto label_379f4c;
        case 0x379f50u: goto label_379f50;
        case 0x379f54u: goto label_379f54;
        case 0x379f58u: goto label_379f58;
        case 0x379f5cu: goto label_379f5c;
        case 0x379f60u: goto label_379f60;
        case 0x379f64u: goto label_379f64;
        case 0x379f68u: goto label_379f68;
        case 0x379f6cu: goto label_379f6c;
        case 0x379f70u: goto label_379f70;
        case 0x379f74u: goto label_379f74;
        case 0x379f78u: goto label_379f78;
        case 0x379f7cu: goto label_379f7c;
        case 0x379f80u: goto label_379f80;
        case 0x379f84u: goto label_379f84;
        case 0x379f88u: goto label_379f88;
        case 0x379f8cu: goto label_379f8c;
        case 0x379f90u: goto label_379f90;
        case 0x379f94u: goto label_379f94;
        case 0x379f98u: goto label_379f98;
        case 0x379f9cu: goto label_379f9c;
        case 0x379fa0u: goto label_379fa0;
        case 0x379fa4u: goto label_379fa4;
        case 0x379fa8u: goto label_379fa8;
        case 0x379facu: goto label_379fac;
        case 0x379fb0u: goto label_379fb0;
        case 0x379fb4u: goto label_379fb4;
        case 0x379fb8u: goto label_379fb8;
        case 0x379fbcu: goto label_379fbc;
        case 0x379fc0u: goto label_379fc0;
        case 0x379fc4u: goto label_379fc4;
        case 0x379fc8u: goto label_379fc8;
        case 0x379fccu: goto label_379fcc;
        case 0x379fd0u: goto label_379fd0;
        case 0x379fd4u: goto label_379fd4;
        case 0x379fd8u: goto label_379fd8;
        case 0x379fdcu: goto label_379fdc;
        case 0x379fe0u: goto label_379fe0;
        case 0x379fe4u: goto label_379fe4;
        case 0x379fe8u: goto label_379fe8;
        case 0x379fecu: goto label_379fec;
        case 0x379ff0u: goto label_379ff0;
        case 0x379ff4u: goto label_379ff4;
        case 0x379ff8u: goto label_379ff8;
        case 0x379ffcu: goto label_379ffc;
        case 0x37a000u: goto label_37a000;
        case 0x37a004u: goto label_37a004;
        case 0x37a008u: goto label_37a008;
        case 0x37a00cu: goto label_37a00c;
        case 0x37a010u: goto label_37a010;
        case 0x37a014u: goto label_37a014;
        case 0x37a018u: goto label_37a018;
        case 0x37a01cu: goto label_37a01c;
        case 0x37a020u: goto label_37a020;
        case 0x37a024u: goto label_37a024;
        case 0x37a028u: goto label_37a028;
        case 0x37a02cu: goto label_37a02c;
        case 0x37a030u: goto label_37a030;
        case 0x37a034u: goto label_37a034;
        case 0x37a038u: goto label_37a038;
        case 0x37a03cu: goto label_37a03c;
        case 0x37a040u: goto label_37a040;
        case 0x37a044u: goto label_37a044;
        case 0x37a048u: goto label_37a048;
        case 0x37a04cu: goto label_37a04c;
        case 0x37a050u: goto label_37a050;
        case 0x37a054u: goto label_37a054;
        case 0x37a058u: goto label_37a058;
        case 0x37a05cu: goto label_37a05c;
        case 0x37a060u: goto label_37a060;
        case 0x37a064u: goto label_37a064;
        case 0x37a068u: goto label_37a068;
        case 0x37a06cu: goto label_37a06c;
        case 0x37a070u: goto label_37a070;
        case 0x37a074u: goto label_37a074;
        case 0x37a078u: goto label_37a078;
        case 0x37a07cu: goto label_37a07c;
        case 0x37a080u: goto label_37a080;
        case 0x37a084u: goto label_37a084;
        case 0x37a088u: goto label_37a088;
        case 0x37a08cu: goto label_37a08c;
        case 0x37a090u: goto label_37a090;
        case 0x37a094u: goto label_37a094;
        case 0x37a098u: goto label_37a098;
        case 0x37a09cu: goto label_37a09c;
        case 0x37a0a0u: goto label_37a0a0;
        case 0x37a0a4u: goto label_37a0a4;
        case 0x37a0a8u: goto label_37a0a8;
        case 0x37a0acu: goto label_37a0ac;
        case 0x37a0b0u: goto label_37a0b0;
        case 0x37a0b4u: goto label_37a0b4;
        case 0x37a0b8u: goto label_37a0b8;
        case 0x37a0bcu: goto label_37a0bc;
        case 0x37a0c0u: goto label_37a0c0;
        case 0x37a0c4u: goto label_37a0c4;
        case 0x37a0c8u: goto label_37a0c8;
        case 0x37a0ccu: goto label_37a0cc;
        case 0x37a0d0u: goto label_37a0d0;
        case 0x37a0d4u: goto label_37a0d4;
        case 0x37a0d8u: goto label_37a0d8;
        case 0x37a0dcu: goto label_37a0dc;
        default: break;
    }

    ctx->pc = 0x378fb8u;

label_378fb8:
    // 0x378fb8: 0x8410038  j           func_10400E0
label_378fbc:
    if (ctx->pc == 0x378FBCu) {
        ctx->pc = 0x378FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378FB8u;
        // 0x378fbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378FC0u;
        goto label_378fc0;
    }
    ctx->pc = 0x378FB8u;
    ctx->pc = 0x378FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378FB8u;
    // 0x378fbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10400E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10400E0u, 0x378FB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378FC0u;
label_378fc0:
    // 0x378fc0: 0x1e10035  .word       0x01E10035                   # INVALID     $t7, $at, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378fc0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x378FC0 raw=0x01E10035");
label_378fc4:
    // 0x378fc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378fc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_378fc8:
    // 0x378fc8: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x378fc8u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x378FC8 raw=0x48000800");
label_378fcc:
    // 0x378fcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378fccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_378fd0:
    // 0x378fd0: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x378fd0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_378fd4:
    // 0x378fd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378fd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_378fd8:
    // 0x378fd8: 0x8420034  j           func_10800D0
label_378fdc:
    if (ctx->pc == 0x378FDCu) {
        ctx->pc = 0x378FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378FD8u;
        // 0x378fdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378FE0u;
        goto label_378fe0;
    }
    ctx->pc = 0x378FD8u;
    ctx->pc = 0x378FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378FD8u;
    // 0x378fdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10800D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10800D0u, 0x378FD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378FE0u;
label_378fe0:
    // 0x378fe0: 0x9030033  j           func_40C00CC
label_378fe4:
    if (ctx->pc == 0x378FE4u) {
        ctx->pc = 0x378FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378FE0u;
        // 0x378fe4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378FE8u;
        goto label_378fe8;
    }
    ctx->pc = 0x378FE0u;
    ctx->pc = 0x378FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378FE0u;
    // 0x378fe4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C00CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C00CCu, 0x378FE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378FE8u;
label_378fe8:
    // 0x378fe8: 0x8240034  j           func_9000D0
label_378fec:
    if (ctx->pc == 0x378FECu) {
        ctx->pc = 0x378FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378FE8u;
        // 0x378fec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378FF0u;
        goto label_378ff0;
    }
    ctx->pc = 0x378FE8u;
    ctx->pc = 0x378FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378FE8u;
    // 0x378fec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x9000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9000D0u, 0x378FE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378FF0u;
label_378ff0:
    // 0x378ff0: 0x800208b4  lb          $v0, 0x8B4($zero)
    ctx->pc = 0x378ff0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x8B4u));
label_378ff4:
    // 0x378ff4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378ff4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_378ff8:
    // 0x378ff8: 0x800310b0  lb          $v1, 0x10B0($zero)
    ctx->pc = 0x378ff8u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x10B0u));
label_378ffc:
    // 0x378ffc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378ffcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379000:
    // 0x379000: 0x80012130  lb          $at, 0x2130($zero)
    ctx->pc = 0x379000u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2130u));
label_379004:
    // 0x379004: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379004u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379008:
    // 0x379008: 0x82217ff  j           func_885FFC
label_37900c:
    if (ctx->pc == 0x37900Cu) {
        ctx->pc = 0x37900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379008u;
        // 0x37900c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379010u;
        goto label_379010;
    }
    ctx->pc = 0x379008u;
    ctx->pc = 0x37900Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379008u;
    // 0x37900c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x885FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x885FFCu, 0x379008u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379010u;
label_379010:
    // 0x379010: 0x810113fd  lb          $at, 0x13FD($t0)
    ctx->pc = 0x379010u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 5117)));
label_379014:
    // 0x379014: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379014u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379018:
    // 0x379018: 0x3e40800  .word       0x03E40800                   # sll         $at, $a0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379018u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
label_37901c:
    // 0x37901c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37901cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379020:
    // 0x379020: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379020u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379024:
    // 0x379024: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379024u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379028:
    // 0x379028: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379028u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37902c:
    // 0x37902c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37902cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379030:
    // 0x379030: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x379030u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x379030 raw=0x48007800");
label_379034:
    // 0x379034: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379034u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379038:
    // 0x379038: 0x800026fc  lb          $zero, 0x26FC($zero)
    ctx->pc = 0x379038u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x26FCu));
label_37903c:
    // 0x37903c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37903cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379040:
    // 0x379040: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379040u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379044:
    // 0x379044: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379044u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379048:
    // 0x379048: 0xb0f7000  j           func_C3DC000
label_37904c:
    if (ctx->pc == 0x37904Cu) {
        ctx->pc = 0x37904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379048u;
        // 0x37904c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379050u;
        goto label_379050;
    }
    ctx->pc = 0x379048u;
    ctx->pc = 0x37904Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379048u;
    // 0x37904c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC3DC000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC3DC000u, 0x379048u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379050u;
label_379050:
    // 0x379050: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_379054:
    if (ctx->pc == 0x379054u) {
        ctx->pc = 0x379054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379050u;
        // 0x379054: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379058u;
        goto label_379058;
    }
    ctx->pc = 0x379050u;
    {
        const bool branch_taken_0x379050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x379054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379050u;
        // 0x379054: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379050) {
            ctx->pc = 0x395058u;
            return;
        }
    }
    ctx->pc = 0x379058u;
label_379058:
    // 0x379058: 0x81e20b3d  lb          $v0, 0xB3D($t7)
    ctx->pc = 0x379058u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2877)));
label_37905c:
    // 0x37905c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37905cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379060:
    // 0x379060: 0x81e2133d  lb          $v0, 0x133D($t7)
    ctx->pc = 0x379060u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4925)));
label_379064:
    // 0x379064: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379064u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379068:
    // 0x379068: 0x3600846  .word       0x03600846                   # srlv        $at, $zero, $k1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379068u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 27) & 0x1F));
label_37906c:
    // 0x37906c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37906cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379070:
    // 0x379070: 0x3600873  tltu        $k1, $zero, 33
    ctx->pc = 0x379070u;
    if (GPR_U64(ctx, 27) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_379074:
    // 0x379074: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379074u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379078:
    // 0x379078: 0x2801046  .word       0x02801046                   # srlv        $v0, $zero, $s4 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379078u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 20) & 0x1F));
label_37907c:
    // 0x37907c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37907cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379080:
    // 0x379080: 0x2801073  tltu        $s4, $zero, 65
    ctx->pc = 0x379080u;
    if (GPR_U64(ctx, 20) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_379084:
    // 0x379084: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379084u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379088:
    // 0x379088: 0x1fc000c  .word       0x01FC000C                   # syscall     0 # 01FC0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379088u;
    ctx->pc = 0x37908Cu;
runtime->handleSyscall(rdram, ctx, 0x7F000u);
label_37908c:
    // 0x37908c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37908cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379090:
    // 0x379090: 0x1fd000d  break       509
    ctx->pc = 0x379090u;
    runtime->handleBreak(rdram, ctx);
label_379094:
    // 0x379094: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379094u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379098:
    // 0x379098: 0x1fe000e  .word       0x01FE000E                   # INVALID     $t7, $fp, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379098u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x379098 raw=0x01FE000E");
label_37909c:
    // 0x37909c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37909cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3790a0:
    // 0x3790a0: 0x1ff000f  .word       0x01FF000F                   # sync # 01FF0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3790a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3790a4:
    // 0x3790a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3790a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3790a8:
    // 0x3790a8: 0x1fb0045  .word       0x01FB0045                   # INVALID     $t7, $k1, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3790a8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x3790A8 raw=0x01FB0045");
label_3790ac:
    // 0x3790ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3790acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3790b0:
    // 0x3790b0: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x3790b0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_3790b4:
    // 0x3790b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3790b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3790b8:
    // 0x3790b8: 0x8420034  j           func_10800D0
label_3790bc:
    if (ctx->pc == 0x3790BCu) {
        ctx->pc = 0x3790BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3790B8u;
        // 0x3790bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3790C0u;
        goto label_3790c0;
    }
    ctx->pc = 0x3790B8u;
    ctx->pc = 0x3790BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3790B8u;
    // 0x3790bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10800D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10800D0u, 0x3790B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3790C0u;
label_3790c0:
    // 0x3790c0: 0x800208b4  lb          $v0, 0x8B4($zero)
    ctx->pc = 0x3790c0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x8B4u));
label_3790c4:
    // 0x3790c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3790c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3790c8:
    // 0x3790c8: 0x9030033  j           func_40C00CC
label_3790cc:
    if (ctx->pc == 0x3790CCu) {
        ctx->pc = 0x3790CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3790C8u;
        // 0x3790cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3790D0u;
        goto label_3790d0;
    }
    ctx->pc = 0x3790C8u;
    ctx->pc = 0x3790CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3790C8u;
    // 0x3790cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C00CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C00CCu, 0x3790C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3790D0u;
label_3790d0:
    // 0x3790d0: 0x800310b0  lb          $v1, 0x10B0($zero)
    ctx->pc = 0x3790d0u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x10B0u));
label_3790d4:
    // 0x3790d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3790d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3790d8:
    // 0x3790d8: 0x8230034  j           func_8C00D0
label_3790dc:
    if (ctx->pc == 0x3790DCu) {
        ctx->pc = 0x3790DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3790D8u;
        // 0x3790dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3790E0u;
        goto label_3790e0;
    }
    ctx->pc = 0x3790D8u;
    ctx->pc = 0x3790DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3790D8u;
    // 0x3790dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8C00D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8C00D0u, 0x3790D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3790E0u;
label_3790e0:
    // 0x3790e0: 0x80030870  lb          $v1, 0x870($zero)
    ctx->pc = 0x3790e0u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x870u));
label_3790e4:
    // 0x3790e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3790e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3790e8:
    // 0x3790e8: 0x10010801  beq         $zero, $at, . + 4 + (0x801 << 2)
label_3790ec:
    if (ctx->pc == 0x3790ECu) {
        ctx->pc = 0x3790ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3790E8u;
        // 0x3790ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3790F0u;
        goto label_3790f0;
    }
    ctx->pc = 0x3790E8u;
    {
        const bool branch_taken_0x3790e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x3790ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3790E8u;
        // 0x3790ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3790e8) {
            ctx->pc = 0x37B0F0u;
            return;
        }
    }
    ctx->pc = 0x3790F0u;
label_3790f0:
    // 0x3790f0: 0x84417ff  j           func_1105FFC
label_3790f4:
    if (ctx->pc == 0x3790F4u) {
        ctx->pc = 0x3790F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3790F0u;
        // 0x3790f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3790F8u;
        goto label_3790f8;
    }
    ctx->pc = 0x3790F0u;
    ctx->pc = 0x3790F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3790F0u;
    // 0x3790f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1105FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1105FFCu, 0x3790F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3790F8u;
label_3790f8:
    // 0x3790f8: 0x12042003  beq         $s0, $a0, . + 4 + (0x2003 << 2)
label_3790fc:
    if (ctx->pc == 0x3790FCu) {
        ctx->pc = 0x3790FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3790F8u;
        // 0x3790fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379100u;
        goto label_379100;
    }
    ctx->pc = 0x3790F8u;
    {
        const bool branch_taken_0x3790f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x3790FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3790F8u;
        // 0x3790fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3790f8) {
            ctx->pc = 0x381108u;
            return;
        }
    }
    ctx->pc = 0x379100u;
label_379100:
    // 0x379100: 0x800408f0  lb          $a0, 0x8F0($zero)
    ctx->pc = 0x379100u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x8F0u));
label_379104:
    // 0x379104: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379104u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379108:
    // 0x379108: 0x800418f0  lb          $a0, 0x18F0($zero)
    ctx->pc = 0x379108u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x18F0u));
label_37910c:
    // 0x37910c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37910cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379110:
    // 0x379110: 0x800418f0  lb          $a0, 0x18F0($zero)
    ctx->pc = 0x379110u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x18F0u));
label_379114:
    // 0x379114: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379114u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379118:
    // 0x379118: 0x100c0046  beq         $zero, $t4, . + 4 + (0x46 << 2)
label_37911c:
    if (ctx->pc == 0x37911Cu) {
        ctx->pc = 0x37911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379118u;
        // 0x37911c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379120u;
        goto label_379120;
    }
    ctx->pc = 0x379118u;
    {
        const bool branch_taken_0x379118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        ctx->pc = 0x37911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379118u;
        // 0x37911c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379118) {
            ctx->pc = 0x379234u;
            goto label_379234;
        }
    }
    ctx->pc = 0x379120u;
label_379120:
    // 0x379120: 0x100c6001  beq         $zero, $t4, . + 4 + (0x6001 << 2)
label_379124:
    if (ctx->pc == 0x379124u) {
        ctx->pc = 0x379124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379120u;
        // 0x379124: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379128u;
        goto label_379128;
    }
    ctx->pc = 0x379120u;
    {
        const bool branch_taken_0x379120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        ctx->pc = 0x379124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379120u;
        // 0x379124: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379120) {
            ctx->pc = 0x391128u;
            return;
        }
    }
    ctx->pc = 0x379128u;
label_379128:
    // 0x379128: 0x100d0073  beq         $zero, $t5, . + 4 + (0x73 << 2)
label_37912c:
    if (ctx->pc == 0x37912Cu) {
        ctx->pc = 0x37912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379128u;
        // 0x37912c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379130u;
        goto label_379130;
    }
    ctx->pc = 0x379128u;
    {
        const bool branch_taken_0x379128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x37912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379128u;
        // 0x37912c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379128) {
            ctx->pc = 0x3792F8u;
            goto label_3792f8;
        }
    }
    ctx->pc = 0x379130u;
label_379130:
    // 0x379130: 0x100d6801  beq         $zero, $t5, . + 4 + (0x6801 << 2)
label_379134:
    if (ctx->pc == 0x379134u) {
        ctx->pc = 0x379134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379130u;
        // 0x379134: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379138u;
        goto label_379138;
    }
    ctx->pc = 0x379130u;
    {
        const bool branch_taken_0x379130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x379134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379130u;
        // 0x379134: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379130) {
            ctx->pc = 0x393138u;
            return;
        }
    }
    ctx->pc = 0x379138u;
label_379138:
    // 0x379138: 0x8241000  j           func_904000
label_37913c:
    if (ctx->pc == 0x37913Cu) {
        ctx->pc = 0x37913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379138u;
        // 0x37913c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379140u;
        goto label_379140;
    }
    ctx->pc = 0x379138u;
    ctx->pc = 0x37913Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379138u;
    // 0x37913c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x904000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x904000u, 0x379138u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379140u;
label_379140:
    // 0x379140: 0x8251001  j           func_944004
label_379144:
    if (ctx->pc == 0x379144u) {
        ctx->pc = 0x379144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379140u;
        // 0x379144: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379148u;
        goto label_379148;
    }
    ctx->pc = 0x379140u;
    ctx->pc = 0x379144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379140u;
    // 0x379144: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x944004u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x944004u, 0x379140u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379148u;
label_379148:
    // 0x379148: 0x8261002  j           func_984008
label_37914c:
    if (ctx->pc == 0x37914Cu) {
        ctx->pc = 0x37914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379148u;
        // 0x37914c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379150u;
        goto label_379150;
    }
    ctx->pc = 0x379148u;
    ctx->pc = 0x37914Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379148u;
    // 0x37914c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x984008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x984008u, 0x379148u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379150u;
label_379150:
    // 0x379150: 0x11e707ff  beq         $t7, $a3, . + 4 + (0x7FF << 2)
label_379154:
    if (ctx->pc == 0x379154u) {
        ctx->pc = 0x379154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379150u;
        // 0x379154: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379158u;
        goto label_379158;
    }
    ctx->pc = 0x379150u;
    {
        const bool branch_taken_0x379150 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 7));
        ctx->pc = 0x379154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379150u;
        // 0x379154: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379150) {
            ctx->pc = 0x37B150u;
            return;
        }
    }
    ctx->pc = 0x379158u;
label_379158:
    // 0x379158: 0x10073801  beq         $zero, $a3, . + 4 + (0x3801 << 2)
label_37915c:
    if (ctx->pc == 0x37915Cu) {
        ctx->pc = 0x37915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379158u;
        // 0x37915c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379160u;
        goto label_379160;
    }
    ctx->pc = 0x379158u;
    {
        const bool branch_taken_0x379158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x37915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379158u;
        // 0x37915c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379158) {
            ctx->pc = 0x387160u;
            return;
        }
    }
    ctx->pc = 0x379160u;
label_379160:
    // 0x379160: 0x800731f4  lb          $a3, 0x31F4($zero)
    ctx->pc = 0x379160u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x31F4u));
label_379164:
    // 0x379164: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379164u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379168:
    // 0x379168: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379168u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37916c:
    // 0x37916c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37916cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379170:
    // 0x379170: 0x5207006c  beql        $s0, $a3, . + 4 + (0x6C << 2)
label_379174:
    if (ctx->pc == 0x379174u) {
        ctx->pc = 0x379174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379170u;
        // 0x379174: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379178u;
        goto label_379178;
    }
    ctx->pc = 0x379170u;
    {
        const bool branch_taken_0x379170 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 7));
        if (branch_taken_0x379170) {
            ctx->pc = 0x379174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379170u;
            // 0x379174: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379324u;
            goto label_379324;
        }
    }
    ctx->pc = 0x379178u;
label_379178:
    // 0x379178: 0x1007003f  beq         $zero, $a3, . + 4 + (0x3F << 2)
label_37917c:
    if (ctx->pc == 0x37917Cu) {
        ctx->pc = 0x37917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379178u;
        // 0x37917c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379180u;
        goto label_379180;
    }
    ctx->pc = 0x379178u;
    {
        const bool branch_taken_0x379178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x37917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379178u;
        // 0x37917c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379178) {
            ctx->pc = 0x379278u;
            goto label_379278;
        }
    }
    ctx->pc = 0x379180u;
label_379180:
    // 0x379180: 0x800439f4  lb          $a0, 0x39F4($zero)
    ctx->pc = 0x379180u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x39F4u));
label_379184:
    // 0x379184: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379184u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379188:
    // 0x379188: 0x800539f4  lb          $a1, 0x39F4($zero)
    ctx->pc = 0x379188u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x39F4u));
label_37918c:
    // 0x37918c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37918cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379190:
    // 0x379190: 0x800639f4  lb          $a2, 0x39F4($zero)
    ctx->pc = 0x379190u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x39F4u));
label_379194:
    // 0x379194: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379194u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379198:
    // 0x379198: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379198u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37919c:
    // 0x37919c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37919cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3791a0:
    // 0x3791a0: 0x52070066  beql        $s0, $a3, . + 4 + (0x66 << 2)
label_3791a4:
    if (ctx->pc == 0x3791A4u) {
        ctx->pc = 0x3791A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3791A0u;
        // 0x3791a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3791A8u;
        goto label_3791a8;
    }
    ctx->pc = 0x3791A0u;
    {
        const bool branch_taken_0x3791a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 7));
        if (branch_taken_0x3791a0) {
            ctx->pc = 0x3791A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3791A0u;
            // 0x3791a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37933Cu;
            goto label_37933c;
        }
    }
    ctx->pc = 0x3791A8u;
label_3791a8:
    // 0x3791a8: 0x1009003e  beq         $zero, $t1, . + 4 + (0x3E << 2)
label_3791ac:
    if (ctx->pc == 0x3791ACu) {
        ctx->pc = 0x3791ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3791A8u;
        // 0x3791ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3791B0u;
        goto label_3791b0;
    }
    ctx->pc = 0x3791A8u;
    {
        const bool branch_taken_0x3791a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x3791ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3791A8u;
        // 0x3791ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3791a8) {
            ctx->pc = 0x3792A4u;
            goto label_3792a4;
        }
    }
    ctx->pc = 0x3791B0u;
label_3791b0:
    // 0x3791b0: 0x800521f5  lb          $a1, 0x21F5($zero)
    ctx->pc = 0x3791b0u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x21F5u));
label_3791b4:
    // 0x3791b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3791b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3791b8:
    // 0x3791b8: 0x800639f5  lb          $a2, 0x39F5($zero)
    ctx->pc = 0x3791b8u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x39F5u));
label_3791bc:
    // 0x3791bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3791bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3791c0:
    // 0x3791c0: 0x102807c0  beq         $at, $t0, . + 4 + (0x7C0 << 2)
label_3791c4:
    if (ctx->pc == 0x3791C4u) {
        ctx->pc = 0x3791C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3791C0u;
        // 0x3791c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3791C8u;
        goto label_3791c8;
    }
    ctx->pc = 0x3791C0u;
    {
        const bool branch_taken_0x3791c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 8));
        ctx->pc = 0x3791C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3791C0u;
        // 0x3791c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3791c0) {
            ctx->pc = 0x37B0C4u;
            return;
        }
    }
    ctx->pc = 0x3791C8u;
label_3791c8:
    // 0x3791c8: 0x80083a34  lb          $t0, 0x3A34($zero)
    ctx->pc = 0x3791c8u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x3A34u));
label_3791cc:
    // 0x3791cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3791ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3791d0:
    // 0x3791d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3791d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3791d4:
    // 0x3791d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3791d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3791d8:
    // 0x3791d8: 0x5008017d  beql        $zero, $t0, . + 4 + (0x17D << 2)
label_3791dc:
    if (ctx->pc == 0x3791DCu) {
        ctx->pc = 0x3791DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3791D8u;
        // 0x3791dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3791E0u;
        goto label_3791e0;
    }
    ctx->pc = 0x3791D8u;
    {
        const bool branch_taken_0x3791d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        if (branch_taken_0x3791d8) {
            ctx->pc = 0x3791DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3791D8u;
            // 0x3791dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3797D0u;
            goto label_3797d0;
        }
    }
    ctx->pc = 0x3791E0u;
label_3791e0:
    // 0x3791e0: 0x80004efc  lb          $zero, 0x4EFC($zero)
    ctx->pc = 0x3791e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x4EFCu));
label_3791e4:
    // 0x3791e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3791e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3791e8:
    // 0x3791e8: 0x1e10800  .word       0x01E10800                   # sll         $at, $at, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3791e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_3791ec:
    // 0x3791ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3791ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3791f0:
    // 0x3791f0: 0x1e20801  .word       0x01E20801                   # INVALID     $t7, $v0, 0x801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3791f0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3791F0 raw=0x01E20801");
label_3791f4:
    // 0x3791f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3791f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3791f8:
    // 0x3791f8: 0x1e30802  .word       0x01E30802                   # srl         $at, $v1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3791f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 3), 0));
label_3791fc:
    // 0x3791fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3791fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379200:
    // 0x379200: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379200u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379204:
    // 0x379204: 0x1e2113c  .word       0x01E2113C                   # dsll32      $v0, $v0, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
label_379208:
    // 0x379208: 0x3ec0800  .word       0x03EC0800                   # sll         $at, $t4, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379208u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 12), 0));
label_37920c:
    // 0x37920c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37920cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379210:
    // 0x379210: 0x3ec1001  .word       0x03EC1001                   # INVALID     $ra, $t4, 0x1001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379210u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x379210 raw=0x03EC1001");
label_379214:
    // 0x379214: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379214u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379218:
    // 0x379218: 0x3ec1802  .word       0x03EC1802                   # srl         $v1, $t4, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379218u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 12), 0));
label_37921c:
    // 0x37921c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37921cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379220:
    // 0x379220: 0xa246003  j           func_891800C
label_379224:
    if (ctx->pc == 0x379224u) {
        ctx->pc = 0x379224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379220u;
        // 0x379224: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379228u;
        goto label_379228;
    }
    ctx->pc = 0x379220u;
    ctx->pc = 0x379224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379220u;
    // 0x379224: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x891800Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x891800Cu, 0x379220u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379228u;
label_379228:
    // 0x379228: 0x3ec080c  .word       0x03EC080C                   # syscall     32 # 03EC0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379228u;
    ctx->pc = 0x37922Cu;
runtime->handleSyscall(rdram, ctx, 0xFB020u);
label_37922c:
    // 0x37922c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37922cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379230:
    // 0x379230: 0x3ec100d  break       1004, 64
    ctx->pc = 0x379230u;
    runtime->handleBreak(rdram, ctx);
label_379234:
    // 0x379234: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379234u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379238:
    // 0x379238: 0x3ec180e  .word       0x03EC180E                   # INVALID     $ra, $t4, 0x180E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379238u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x379238 raw=0x03EC180E");
label_37923c:
    // 0x37923c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37923cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379240:
    // 0x379240: 0xa24600f  j           func_891803C
label_379244:
    if (ctx->pc == 0x379244u) {
        ctx->pc = 0x379244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379240u;
        // 0x379244: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379248u;
        goto label_379248;
    }
    ctx->pc = 0x379240u;
    ctx->pc = 0x379244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379240u;
    // 0x379244: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x891803Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x891803Cu, 0x379240u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379248u;
label_379248:
    // 0x379248: 0x1e10803  .word       0x01E10803                   # sra         $at, $at, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379248u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), 0));
label_37924c:
    // 0x37924c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37924cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379250:
    // 0x379250: 0x1e20804  sllv        $at, $v0, $t7
    ctx->pc = 0x379250u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
label_379254:
    // 0x379254: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379254u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379258:
    // 0x379258: 0x1e30805  .word       0x01E30805                   # INVALID     $t7, $v1, 0x805 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379258u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x379258 raw=0x01E30805");
label_37925c:
    // 0x37925c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37925cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379260:
    // 0x379260: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379260u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379264:
    // 0x379264: 0x1e2113c  .word       0x01E2113C                   # dsll32      $v0, $v0, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
label_379268:
    // 0x379268: 0x3ec0804  sllv        $at, $t4, $ra
    ctx->pc = 0x379268u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 31) & 0x1F));
label_37926c:
    // 0x37926c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37926cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379270:
    // 0x379270: 0x3ec1005  .word       0x03EC1005                   # INVALID     $ra, $t4, 0x1005 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379270u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x379270 raw=0x03EC1005");
label_379274:
    // 0x379274: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379274u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379278:
    // 0x379278: 0x3ec1806  srlv        $v1, $t4, $ra
    ctx->pc = 0x379278u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 31) & 0x1F));
label_37927c:
    // 0x37927c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37927cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379280:
    // 0x379280: 0xa256007  j           func_895801C
label_379284:
    if (ctx->pc == 0x379284u) {
        ctx->pc = 0x379284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379280u;
        // 0x379284: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379288u;
        goto label_379288;
    }
    ctx->pc = 0x379280u;
    ctx->pc = 0x379284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379280u;
    // 0x379284: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x895801Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x895801Cu, 0x379280u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379288u;
label_379288:
    // 0x379288: 0x1e10806  srlv        $at, $at, $t7
    ctx->pc = 0x379288u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 15) & 0x1F));
label_37928c:
    // 0x37928c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37928cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379290:
    // 0x379290: 0x1e20807  srav        $at, $v0, $t7
    ctx->pc = 0x379290u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
label_379294:
    // 0x379294: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379294u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379298:
    // 0x379298: 0x1e30808  .word       0x01E30808                   # jr          $t7 # 00030800 <InstrIdType: CPU_SPECIAL>
label_37929c:
    if (ctx->pc == 0x37929Cu) {
        ctx->pc = 0x37929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379298u;
        // 0x37929c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3792A0u;
        goto label_3792a0;
    }
    ctx->pc = 0x379298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        ctx->pc = 0x37929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379298u;
        // 0x37929c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379298u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3792A0u;
label_3792a0:
    // 0x3792a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3792a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3792a4:
    // 0x3792a4: 0x1e2113c  .word       0x01E2113C                   # dsll32      $v0, $v0, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3792a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
label_3792a8:
    // 0x3792a8: 0x3ec0808  .word       0x03EC0808                   # jr          $ra # 000C0800 <InstrIdType: CPU_SPECIAL>
label_3792ac:
    if (ctx->pc == 0x3792ACu) {
        ctx->pc = 0x3792ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3792A8u;
        // 0x3792ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3792B0u;
        goto label_3792b0;
    }
    ctx->pc = 0x3792A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3792ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3792A8u;
        // 0x3792ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3792A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3792B0u;
label_3792b0:
    // 0x3792b0: 0x3ec1009  .word       0x03EC1009                   # jalr        $v0, $ra # 000C0000 <InstrIdType: CPU_SPECIAL>
label_3792b4:
    if (ctx->pc == 0x3792B4u) {
        ctx->pc = 0x3792B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3792B0u;
        // 0x3792b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3792B8u;
        goto label_3792b8;
    }
    ctx->pc = 0x3792B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 2, 0x3792B8u);
        ctx->pc = 0x3792B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3792B0u;
        // 0x3792b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3792B0u, 0x3792B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3792B8u;
label_3792b8:
    // 0x3792b8: 0x3ec180a  movz        $v1, $ra, $t4
    ctx->pc = 0x3792b8u;
    if (GPR_U64(ctx, 12) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 31));
label_3792bc:
    // 0x3792bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3792bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3792c0:
    // 0x3792c0: 0xa26600b  j           func_899802C
label_3792c4:
    if (ctx->pc == 0x3792C4u) {
        ctx->pc = 0x3792C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3792C0u;
        // 0x3792c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3792C8u;
        goto label_3792c8;
    }
    ctx->pc = 0x3792C0u;
    ctx->pc = 0x3792C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3792C0u;
    // 0x3792c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x899802Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x899802Cu, 0x3792C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3792C8u;
label_3792c8:
    // 0x3792c8: 0x80070130  lb          $a3, 0x130($zero)
    ctx->pc = 0x3792c8u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x130u));
label_3792cc:
    // 0x3792cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3792ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3792d0:
    // 0x3792d0: 0x10050003  beq         $zero, $a1, . + 4 + (0x3 << 2)
label_3792d4:
    if (ctx->pc == 0x3792D4u) {
        ctx->pc = 0x3792D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3792D0u;
        // 0x3792d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3792D8u;
        goto label_3792d8;
    }
    ctx->pc = 0x3792D0u;
    {
        const bool branch_taken_0x3792d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x3792D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3792D0u;
        // 0x3792d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3792d0) {
            ctx->pc = 0x3792E0u;
            goto label_3792e0;
        }
    }
    ctx->pc = 0x3792D8u;
label_3792d8:
    // 0x3792d8: 0x10060001  beq         $zero, $a2, . + 4 + (0x1 << 2)
label_3792dc:
    if (ctx->pc == 0x3792DCu) {
        ctx->pc = 0x3792DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3792D8u;
        // 0x3792dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3792E0u;
        goto label_3792e0;
    }
    ctx->pc = 0x3792D8u;
    {
        const bool branch_taken_0x3792d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x3792DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3792D8u;
        // 0x3792dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3792d8) {
            ctx->pc = 0x3792E0u;
            goto label_3792e0;
        }
    }
    ctx->pc = 0x3792E0u;
label_3792e0:
    // 0x3792e0: 0x1007003f  beq         $zero, $a3, . + 4 + (0x3F << 2)
label_3792e4:
    if (ctx->pc == 0x3792E4u) {
        ctx->pc = 0x3792E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3792E0u;
        // 0x3792e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3792E8u;
        goto label_3792e8;
    }
    ctx->pc = 0x3792E0u;
    {
        const bool branch_taken_0x3792e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x3792E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3792E0u;
        // 0x3792e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3792e0) {
            ctx->pc = 0x3793E0u;
            goto label_3793e0;
        }
    }
    ctx->pc = 0x3792E8u;
label_3792e8:
    // 0x3792e8: 0x10060020  beq         $zero, $a2, . + 4 + (0x20 << 2)
label_3792ec:
    if (ctx->pc == 0x3792ECu) {
        ctx->pc = 0x3792ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3792E8u;
        // 0x3792ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3792F0u;
        goto label_3792f0;
    }
    ctx->pc = 0x3792E8u;
    {
        const bool branch_taken_0x3792e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x3792ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3792E8u;
        // 0x3792ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3792e8) {
            ctx->pc = 0x37936Cu;
            goto label_37936c;
        }
    }
    ctx->pc = 0x3792F0u;
label_3792f0:
    // 0x3792f0: 0x80062234  lb          $a2, 0x2234($zero)
    ctx->pc = 0x3792f0u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x2234u));
label_3792f4:
    // 0x3792f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3792f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3792f8:
    // 0x3792f8: 0x100707c0  beq         $zero, $a3, . + 4 + (0x7C0 << 2)
label_3792fc:
    if (ctx->pc == 0x3792FCu) {
        ctx->pc = 0x3792FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3792F8u;
        // 0x3792fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379300u;
        goto label_379300;
    }
    ctx->pc = 0x3792F8u;
    {
        const bool branch_taken_0x3792f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x3792FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3792F8u;
        // 0x3792fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3792f8) {
            ctx->pc = 0x37B1FCu;
            return;
        }
    }
    ctx->pc = 0x379300u;
label_379300:
    // 0x379300: 0x50080003  beql        $zero, $t0, . + 4 + (0x3 << 2)
label_379304:
    if (ctx->pc == 0x379304u) {
        ctx->pc = 0x379304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379300u;
        // 0x379304: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379308u;
        goto label_379308;
    }
    ctx->pc = 0x379300u;
    {
        const bool branch_taken_0x379300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        if (branch_taken_0x379300) {
            ctx->pc = 0x379304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379300u;
            // 0x379304: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379310u;
            goto label_379310;
        }
    }
    ctx->pc = 0x379308u;
label_379308:
    // 0x379308: 0x1fa0044  .word       0x01FA0044                   # sllv        $zero, $k0, $t7 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379308u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 26), GPR_U32(ctx, 15) & 0x1F));
label_37930c:
    // 0x37930c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37930cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379310:
    // 0x379310: 0x420f0040  .word       0x420F0040                   # INVALID     $s0, $t7, 0x40 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x379310u;
    throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x379310 raw=0x420F0040");
label_379314:
    // 0x379314: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379314u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379318:
    // 0x379318: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379318u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37931c:
    // 0x37931c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37931cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379320:
    // 0x379320: 0x1e16000  .word       0x01E16000                   # sll         $t4, $at, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379320u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_379324:
    // 0x379324: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379324u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379328:
    // 0x379328: 0x1e26001  .word       0x01E26001                   # INVALID     $t7, $v0, 0x6001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379328u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x379328 raw=0x01E26001");
label_37932c:
    // 0x37932c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37932cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379330:
    // 0x379330: 0x1e36004  sllv        $t4, $v1, $t7
    ctx->pc = 0x379330u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 15) & 0x1F));
label_379334:
    // 0x379334: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379334u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379338:
    // 0x379338: 0x1e46005  .word       0x01E46005                   # INVALID     $t7, $a0, 0x6005 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379338u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x379338 raw=0x01E46005");
label_37933c:
    // 0x37933c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37933cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379340:
    // 0x379340: 0x1e56008  .word       0x01E56008                   # jr          $t7 # 00056000 <InstrIdType: CPU_SPECIAL>
label_379344:
    if (ctx->pc == 0x379344u) {
        ctx->pc = 0x379344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379340u;
        // 0x379344: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379348u;
        goto label_379348;
    }
    ctx->pc = 0x379340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        ctx->pc = 0x379344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379340u;
        // 0x379344: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379340u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x379348u;
label_379348:
    // 0x379348: 0x1e66009  .word       0x01E66009                   # jalr        $t4, $t7 # 00060000 <InstrIdType: CPU_SPECIAL>
label_37934c:
    if (ctx->pc == 0x37934Cu) {
        ctx->pc = 0x37934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379348u;
        // 0x37934c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379350u;
        goto label_379350;
    }
    ctx->pc = 0x379348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        SET_GPR_U32(ctx, 12, 0x379350u);
        ctx->pc = 0x37934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379348u;
        // 0x37934c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379348u, 0x379350u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x379350u;
label_379350:
    // 0x379350: 0x1e7600c  .word       0x01E7600C                   # syscall     384 # 01E70000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379350u;
    ctx->pc = 0x379354u;
runtime->handleSyscall(rdram, ctx, 0x79D80u);
label_379354:
    // 0x379354: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379354u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379358:
    // 0x379358: 0x1e8600d  break       488, 384
    ctx->pc = 0x379358u;
    runtime->handleBreak(rdram, ctx);
label_37935c:
    // 0x37935c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37935cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379360:
    // 0x379360: 0x1e96010  .word       0x01E96010                   # mfhi        $t4 # 01E90000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379360u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_379364:
    // 0x379364: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379364u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379368:
    // 0x379368: 0x1ea6011  .word       0x01EA6011                   # mthi        $t7 # 000A6000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379368u;
    ctx->hi = GPR_U64(ctx, 15);
label_37936c:
    // 0x37936c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37936cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379370:
    // 0x379370: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379370u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379374:
    // 0x379374: 0x1e1109b  .word       0x01E1109B                   # divu        $v0, $t7, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379374u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
label_379378:
    // 0x379378: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379378u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37937c:
    // 0x37937c: 0x1e3211b  .word       0x01E3211B                   # divu        $a0, $t7, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37937cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
label_379380:
    // 0x379380: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379380u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379384:
    // 0x379384: 0x1e5319b  .word       0x01E5319B                   # divu        $a2, $t7, $a1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379384u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
label_379388:
    // 0x379388: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379388u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37938c:
    // 0x37938c: 0x1e7421b  .word       0x01E7421B                   # divu        $t0, $t7, $a3 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37938cu;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
label_379390:
    // 0x379390: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379390u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379394:
    // 0x379394: 0x1e9529b  .word       0x01E9529B                   # divu        $t2, $t7, $t1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379394u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
label_379398:
    // 0x379398: 0x3ec1001  .word       0x03EC1001                   # INVALID     $ra, $t4, 0x1001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379398u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x379398 raw=0x03EC1001");
label_37939c:
    // 0x37939c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37939cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3793a0:
    // 0x3793a0: 0x3ec2005  .word       0x03EC2005                   # INVALID     $ra, $t4, 0x2005 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3793a0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x3793A0 raw=0x03EC2005");
label_3793a4:
    // 0x3793a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3793a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3793a8:
    // 0x3793a8: 0x3ec3009  .word       0x03EC3009                   # jalr        $a2, $ra # 000C0000 <InstrIdType: CPU_SPECIAL>
label_3793ac:
    if (ctx->pc == 0x3793ACu) {
        ctx->pc = 0x3793ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3793A8u;
        // 0x3793ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3793B0u;
        goto label_3793b0;
    }
    ctx->pc = 0x3793A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 6, 0x3793B0u);
        ctx->pc = 0x3793ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3793A8u;
        // 0x3793ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3793A8u, 0x3793B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3793B0u;
label_3793b0:
    // 0x3793b0: 0x3ec400d  break       1004, 256
    ctx->pc = 0x3793b0u;
    runtime->handleBreak(rdram, ctx);
label_3793b4:
    // 0x3793b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3793b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3793b8:
    // 0x3793b8: 0x3ec5011  .word       0x03EC5011                   # mthi        $ra # 000C5000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3793b8u;
    ctx->hi = GPR_U64(ctx, 31);
label_3793bc:
    // 0x3793bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3793bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3793c0:
    // 0x3793c0: 0x10060010  beq         $zero, $a2, . + 4 + (0x10 << 2)
label_3793c4:
    if (ctx->pc == 0x3793C4u) {
        ctx->pc = 0x3793C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3793C0u;
        // 0x3793c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3793C8u;
        goto label_3793c8;
    }
    ctx->pc = 0x3793C0u;
    {
        const bool branch_taken_0x3793c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x3793C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3793C0u;
        // 0x3793c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3793c0) {
            ctx->pc = 0x379404u;
            goto label_379404;
        }
    }
    ctx->pc = 0x3793C8u;
label_3793c8:
    // 0x3793c8: 0x80062234  lb          $a2, 0x2234($zero)
    ctx->pc = 0x3793c8u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x2234u));
label_3793cc:
    // 0x3793cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3793ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3793d0:
    // 0x3793d0: 0x100703c0  beq         $zero, $a3, . + 4 + (0x3C0 << 2)
label_3793d4:
    if (ctx->pc == 0x3793D4u) {
        ctx->pc = 0x3793D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3793D0u;
        // 0x3793d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3793D8u;
        goto label_3793d8;
    }
    ctx->pc = 0x3793D0u;
    {
        const bool branch_taken_0x3793d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x3793D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3793D0u;
        // 0x3793d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3793d0) {
            ctx->pc = 0x37A2D4u;
            return;
        }
    }
    ctx->pc = 0x3793D8u;
label_3793d8:
    // 0x3793d8: 0x50080003  beql        $zero, $t0, . + 4 + (0x3 << 2)
label_3793dc:
    if (ctx->pc == 0x3793DCu) {
        ctx->pc = 0x3793DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3793D8u;
        // 0x3793dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3793E0u;
        goto label_3793e0;
    }
    ctx->pc = 0x3793D8u;
    {
        const bool branch_taken_0x3793d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        if (branch_taken_0x3793d8) {
            ctx->pc = 0x3793DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3793D8u;
            // 0x3793dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3793E8u;
            goto label_3793e8;
        }
    }
    ctx->pc = 0x3793E0u;
label_3793e0:
    // 0x3793e0: 0x1fa0043  .word       0x01FA0043                   # sra         $zero, $k0, 1 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3793e0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 26), 1));
label_3793e4:
    // 0x3793e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3793e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3793e8:
    // 0x3793e8: 0x420f00b0  .word       0x420F00B0                   # INVALID     $s0, $t7, 0xB0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x3793e8u;
    throw std::runtime_error("Unhandled COP0 CO-OP: 0x30 at 0x3793E8 raw=0x420F00B0");
label_3793ec:
    // 0x3793ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3793ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3793f0:
    // 0x3793f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3793f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3793f4:
    // 0x3793f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3793f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3793f8:
    // 0x3793f8: 0x10060008  beq         $zero, $a2, . + 4 + (0x8 << 2)
label_3793fc:
    if (ctx->pc == 0x3793FCu) {
        ctx->pc = 0x3793FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3793F8u;
        // 0x3793fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379400u;
        goto label_379400;
    }
    ctx->pc = 0x3793F8u;
    {
        const bool branch_taken_0x3793f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x3793FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3793F8u;
        // 0x3793fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3793f8) {
            ctx->pc = 0x37941Cu;
            goto label_37941c;
        }
    }
    ctx->pc = 0x379400u;
label_379400:
    // 0x379400: 0x80062234  lb          $a2, 0x2234($zero)
    ctx->pc = 0x379400u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x2234u));
label_379404:
    // 0x379404: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379404u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379408:
    // 0x379408: 0x100701c0  beq         $zero, $a3, . + 4 + (0x1C0 << 2)
label_37940c:
    if (ctx->pc == 0x37940Cu) {
        ctx->pc = 0x37940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379408u;
        // 0x37940c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379410u;
        goto label_379410;
    }
    ctx->pc = 0x379408u;
    {
        const bool branch_taken_0x379408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x37940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379408u;
        // 0x37940c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379408) {
            ctx->pc = 0x379B0Cu;
            goto label_379b0c;
        }
    }
    ctx->pc = 0x379410u;
label_379410:
    // 0x379410: 0x50080003  beql        $zero, $t0, . + 4 + (0x3 << 2)
label_379414:
    if (ctx->pc == 0x379414u) {
        ctx->pc = 0x379414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379410u;
        // 0x379414: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379418u;
        goto label_379418;
    }
    ctx->pc = 0x379410u;
    {
        const bool branch_taken_0x379410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        if (branch_taken_0x379410) {
            ctx->pc = 0x379414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379410u;
            // 0x379414: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379420u;
            goto label_379420;
        }
    }
    ctx->pc = 0x379418u;
label_379418:
    // 0x379418: 0x1fa0042  .word       0x01FA0042                   # srl         $zero, $k0, 1 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379418u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 26), 1));
label_37941c:
    // 0x37941c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37941cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379420:
    // 0x379420: 0x420f00a9  .word       0x420F00A9                   # INVALID     $s0, $t7, 0xA9 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x379420u;
    throw std::runtime_error("Unhandled COP0 CO-OP: 0x29 at 0x379420 raw=0x420F00A9");
label_379424:
    // 0x379424: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379424u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379428:
    // 0x379428: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379428u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37942c:
    // 0x37942c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37942cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379430:
    // 0x379430: 0x10060004  beq         $zero, $a2, . + 4 + (0x4 << 2)
label_379434:
    if (ctx->pc == 0x379434u) {
        ctx->pc = 0x379434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379430u;
        // 0x379434: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379438u;
        goto label_379438;
    }
    ctx->pc = 0x379430u;
    {
        const bool branch_taken_0x379430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x379434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379430u;
        // 0x379434: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379430) {
            ctx->pc = 0x379444u;
            goto label_379444;
        }
    }
    ctx->pc = 0x379438u;
label_379438:
    // 0x379438: 0x80062234  lb          $a2, 0x2234($zero)
    ctx->pc = 0x379438u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x2234u));
label_37943c:
    // 0x37943c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37943cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379440:
    // 0x379440: 0x100700c0  beq         $zero, $a3, . + 4 + (0xC0 << 2)
label_379444:
    if (ctx->pc == 0x379444u) {
        ctx->pc = 0x379444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379440u;
        // 0x379444: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379448u;
        goto label_379448;
    }
    ctx->pc = 0x379440u;
    {
        const bool branch_taken_0x379440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x379444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379440u;
        // 0x379444: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379440) {
            ctx->pc = 0x379744u;
            goto label_379744;
        }
    }
    ctx->pc = 0x379448u;
label_379448:
    // 0x379448: 0x50080003  beql        $zero, $t0, . + 4 + (0x3 << 2)
label_37944c:
    if (ctx->pc == 0x37944Cu) {
        ctx->pc = 0x37944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379448u;
        // 0x37944c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379450u;
        goto label_379450;
    }
    ctx->pc = 0x379448u;
    {
        const bool branch_taken_0x379448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        if (branch_taken_0x379448) {
            ctx->pc = 0x37944Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379448u;
            // 0x37944c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379458u;
            goto label_379458;
        }
    }
    ctx->pc = 0x379450u;
label_379450:
    // 0x379450: 0x1fa0041  .word       0x01FA0041                   # INVALID     $t7, $k0, 0x41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379450u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x379450 raw=0x01FA0041");
label_379454:
    // 0x379454: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379454u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379458:
    // 0x379458: 0x420f00a2  .word       0x420F00A2                   # INVALID     $s0, $t7, 0xA2 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x379458u;
    throw std::runtime_error("Unhandled COP0 CO-OP: 0x22 at 0x379458 raw=0x420F00A2");
label_37945c:
    // 0x37945c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37945cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379460:
    // 0x379460: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379460u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379464:
    // 0x379464: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379464u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379468:
    // 0x379468: 0x10060002  beq         $zero, $a2, . + 4 + (0x2 << 2)
label_37946c:
    if (ctx->pc == 0x37946Cu) {
        ctx->pc = 0x37946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379468u;
        // 0x37946c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379470u;
        goto label_379470;
    }
    ctx->pc = 0x379468u;
    {
        const bool branch_taken_0x379468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x37946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379468u;
        // 0x37946c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379468) {
            ctx->pc = 0x379474u;
            goto label_379474;
        }
    }
    ctx->pc = 0x379470u;
label_379470:
    // 0x379470: 0x80062234  lb          $a2, 0x2234($zero)
    ctx->pc = 0x379470u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x2234u));
label_379474:
    // 0x379474: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379474u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379478:
    // 0x379478: 0x10070040  beq         $zero, $a3, . + 4 + (0x40 << 2)
label_37947c:
    if (ctx->pc == 0x37947Cu) {
        ctx->pc = 0x37947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379478u;
        // 0x37947c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379480u;
        goto label_379480;
    }
    ctx->pc = 0x379478u;
    {
        const bool branch_taken_0x379478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x37947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379478u;
        // 0x37947c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379478) {
            ctx->pc = 0x37957Cu;
            goto label_37957c;
        }
    }
    ctx->pc = 0x379480u;
label_379480:
    // 0x379480: 0x50080003  beql        $zero, $t0, . + 4 + (0x3 << 2)
label_379484:
    if (ctx->pc == 0x379484u) {
        ctx->pc = 0x379484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379480u;
        // 0x379484: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379488u;
        goto label_379488;
    }
    ctx->pc = 0x379480u;
    {
        const bool branch_taken_0x379480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        if (branch_taken_0x379480) {
            ctx->pc = 0x379484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379480u;
            // 0x379484: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379490u;
            goto label_379490;
        }
    }
    ctx->pc = 0x379488u;
label_379488:
    // 0x379488: 0x1fa0040  .word       0x01FA0040                   # sll         $zero, $k0, 1 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379488u;
    
label_37948c:
    // 0x37948c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37948cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379490:
    // 0x379490: 0x420f009b  .word       0x420F009B                   # INVALID     $s0, $t7, 0x9B # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x379490u;
    throw std::runtime_error("Unhandled COP0 CO-OP: 0x1B at 0x379490 raw=0x420F009B");
label_379494:
    // 0x379494: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379494u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379498:
    // 0x379498: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379498u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37949c:
    // 0x37949c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37949cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3794a0:
    // 0x3794a0: 0x10060001  beq         $zero, $a2, . + 4 + (0x1 << 2)
label_3794a4:
    if (ctx->pc == 0x3794A4u) {
        ctx->pc = 0x3794A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3794A0u;
        // 0x3794a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3794A8u;
        goto label_3794a8;
    }
    ctx->pc = 0x3794A0u;
    {
        const bool branch_taken_0x3794a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x3794A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3794A0u;
        // 0x3794a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3794a0) {
            ctx->pc = 0x3794A8u;
            goto label_3794a8;
        }
    }
    ctx->pc = 0x3794A8u;
label_3794a8:
    // 0x3794a8: 0x80062234  lb          $a2, 0x2234($zero)
    ctx->pc = 0x3794a8u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x2234u));
label_3794ac:
    // 0x3794ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3794acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3794b0:
    // 0x3794b0: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_3794b4:
    if (ctx->pc == 0x3794B4u) {
        ctx->pc = 0x3794B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3794B0u;
        // 0x3794b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3794B8u;
        goto label_3794b8;
    }
    ctx->pc = 0x3794B0u;
    {
        const bool branch_taken_0x3794b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x3794B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3794B0u;
        // 0x3794b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3794b0) {
            ctx->pc = 0x3794B4u;
            goto label_3794b4;
        }
    }
    ctx->pc = 0x3794B8u;
label_3794b8:
    // 0x3794b8: 0x50080003  beql        $zero, $t0, . + 4 + (0x3 << 2)
label_3794bc:
    if (ctx->pc == 0x3794BCu) {
        ctx->pc = 0x3794BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3794B8u;
        // 0x3794bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3794C0u;
        goto label_3794c0;
    }
    ctx->pc = 0x3794B8u;
    {
        const bool branch_taken_0x3794b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        if (branch_taken_0x3794b8) {
            ctx->pc = 0x3794BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3794B8u;
            // 0x3794bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3794C8u;
            goto label_3794c8;
        }
    }
    ctx->pc = 0x3794C0u;
label_3794c0:
    // 0x3794c0: 0x1fa003f  .word       0x01FA003F                   # dsra32      $zero, $k0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3794c0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 26) >> (32 + 0));
label_3794c4:
    // 0x3794c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3794c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3794c8:
    // 0x3794c8: 0x420f0094  .word       0x420F0094                   # INVALID     $s0, $t7, 0x94 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x3794c8u;
    throw std::runtime_error("Unhandled COP0 CO-OP: 0x14 at 0x3794C8 raw=0x420F0094");
label_3794cc:
    // 0x3794cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3794ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3794d0:
    // 0x3794d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3794d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3794d4:
    // 0x3794d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3794d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3794d8:
    // 0x3794d8: 0x10021001  beq         $zero, $v0, . + 4 + (0x1001 << 2)
label_3794dc:
    if (ctx->pc == 0x3794DCu) {
        ctx->pc = 0x3794DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3794D8u;
        // 0x3794dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3794E0u;
        goto label_3794e0;
    }
    ctx->pc = 0x3794D8u;
    {
        const bool branch_taken_0x3794d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x3794DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3794D8u;
        // 0x3794dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3794d8) {
            ctx->pc = 0x37D4E0u;
            return;
        }
    }
    ctx->pc = 0x3794E0u;
label_3794e0:
    // 0x3794e0: 0x52030f8a  beql        $s0, $v1, . + 4 + (0xF8A << 2)
label_3794e4:
    if (ctx->pc == 0x3794E4u) {
        ctx->pc = 0x3794E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3794E0u;
        // 0x3794e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3794E8u;
        goto label_3794e8;
    }
    ctx->pc = 0x3794E0u;
    {
        const bool branch_taken_0x3794e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3794e0) {
            ctx->pc = 0x3794E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3794E0u;
            // 0x3794e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D30Cu;
            return;
        }
    }
    ctx->pc = 0x3794E8u;
label_3794e8:
    // 0x3794e8: 0x10010803  beq         $zero, $at, . + 4 + (0x803 << 2)
label_3794ec:
    if (ctx->pc == 0x3794ECu) {
        ctx->pc = 0x3794ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3794E8u;
        // 0x3794ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3794F0u;
        goto label_3794f0;
    }
    ctx->pc = 0x3794E8u;
    {
        const bool branch_taken_0x3794e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x3794ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3794E8u;
        // 0x3794ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3794e8) {
            ctx->pc = 0x37B4F8u;
            return;
        }
    }
    ctx->pc = 0x3794F0u;
label_3794f0:
    // 0x3794f0: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_3794f4:
    if (ctx->pc == 0x3794F4u) {
        ctx->pc = 0x3794F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3794F0u;
        // 0x3794f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3794F8u;
        goto label_3794f8;
    }
    ctx->pc = 0x3794F0u;
    {
        const bool branch_taken_0x3794f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x3794F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3794F0u;
        // 0x3794f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3794f0) {
            ctx->pc = 0x3954F8u;
            return;
        }
    }
    ctx->pc = 0x3794F8u;
label_3794f8:
    // 0x3794f8: 0x90f7000  j           func_43DC000
label_3794fc:
    if (ctx->pc == 0x3794FCu) {
        ctx->pc = 0x3794FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3794F8u;
        // 0x3794fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379500u;
        goto label_379500;
    }
    ctx->pc = 0x3794F8u;
    ctx->pc = 0x3794FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3794F8u;
    // 0x3794fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43DC000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43DC000u, 0x3794F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379500u;
label_379500:
    // 0x379500: 0x1001003e  beq         $zero, $at, . + 4 + (0x3E << 2)
label_379504:
    if (ctx->pc == 0x379504u) {
        ctx->pc = 0x379504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379500u;
        // 0x379504: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379508u;
        goto label_379508;
    }
    ctx->pc = 0x379500u;
    {
        const bool branch_taken_0x379500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x379504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379500u;
        // 0x379504: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379500) {
            ctx->pc = 0x3795FCu;
            goto label_3795fc;
        }
    }
    ctx->pc = 0x379508u;
label_379508:
    // 0x379508: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x379508u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x379508 raw=0x48007800");
label_37950c:
    // 0x37950c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37950cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379510:
    // 0x379510: 0x80000efc  lb          $zero, 0xEFC($zero)
    ctx->pc = 0x379510u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0xEFCu));
label_379514:
    // 0x379514: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379514u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379518:
    // 0x379518: 0xb017000  j           func_C05C000
label_37951c:
    if (ctx->pc == 0x37951Cu) {
        ctx->pc = 0x37951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379518u;
        // 0x37951c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379520u;
        goto label_379520;
    }
    ctx->pc = 0x379518u;
    ctx->pc = 0x37951Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379518u;
    // 0x37951c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC05C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC05C000u, 0x379518u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379520u;
label_379520:
    // 0x379520: 0xa827000  j           func_A09C000
label_379524:
    if (ctx->pc == 0x379524u) {
        ctx->pc = 0x379524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379520u;
        // 0x379524: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379528u;
        goto label_379528;
    }
    ctx->pc = 0x379520u;
    ctx->pc = 0x379524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379520u;
    // 0x379524: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA09C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA09C000u, 0x379520u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379528u;
label_379528:
    // 0x379528: 0xa437000  j           func_90DC000
label_37952c:
    if (ctx->pc == 0x37952Cu) {
        ctx->pc = 0x37952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379528u;
        // 0x37952c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379530u;
        goto label_379530;
    }
    ctx->pc = 0x379528u;
    ctx->pc = 0x37952Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379528u;
    // 0x37952c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x90DC000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x90DC000u, 0x379528u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379530u;
label_379530:
    // 0x379530: 0xa2f7000  j           func_8BDC000
label_379534:
    if (ctx->pc == 0x379534u) {
        ctx->pc = 0x379534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379530u;
        // 0x379534: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379538u;
        goto label_379538;
    }
    ctx->pc = 0x379530u;
    ctx->pc = 0x379534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379530u;
    // 0x379534: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8BDC000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8BDC000u, 0x379530u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379538u;
label_379538:
    // 0x379538: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379538u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37953c:
    // 0x37953c: 0x1000583  .word       0x01000583                   # sra         $zero, $zero, 22 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37953cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 22));
label_379540:
    // 0x379540: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379540u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379544:
    // 0x379544: 0x800587  .word       0x00800587                   # srav        $zero, $zero, $a0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379544u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 4) & 0x1F));
label_379548:
    // 0x379548: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379548u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37954c:
    // 0x37954c: 0x1e00558  .word       0x01E00558                   # mult        $zero, $t7, $zero # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37954cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_379550:
    // 0x379550: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379550u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379554:
    // 0x379554: 0x800543  .word       0x00800543                   # sra         $zero, $zero, 21 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379554u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 21));
label_379558:
    // 0x379558: 0x800c0230  lb          $t4, 0x230($zero)
    ctx->pc = 0x379558u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x230u));
label_37955c:
    // 0x37955c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37955cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379560:
    // 0x379560: 0x800d0270  lb          $t5, 0x270($zero)
    ctx->pc = 0x379560u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x270u));
label_379564:
    // 0x379564: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379564u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379568:
    // 0x379568: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379568u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37956c:
    // 0x37956c: 0x1e00058  .word       0x01E00058                   # mult        $zero, $t7, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37956cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_379570:
    // 0x379570: 0x1e54000  .word       0x01E54000                   # sll         $t0, $a1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379570u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
label_379574:
    // 0x379574: 0x3a0dc0  .word       0x003A0DC0                   # sll         $at, $k0, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379574u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 26), 23));
label_379578:
    // 0x379578: 0x1e64001  .word       0x01E64001                   # INVALID     $t7, $a2, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379578u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x379578 raw=0x01E64001");
label_37957c:
    // 0x37957c: 0x3a0e01  .word       0x003A0E01                   # INVALID     $at, $k0, 0xE01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37957cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37957C raw=0x003A0E01");
label_379580:
    // 0x379580: 0x1e74002  .word       0x01E74002                   # srl         $t0, $a3, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379580u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_379584:
    // 0x379584: 0x3a0e42  .word       0x003A0E42                   # srl         $at, $k0, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379584u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 26), 25));
label_379588:
    // 0x379588: 0x82b4003  j           func_AD000C
label_37958c:
    if (ctx->pc == 0x37958Cu) {
        ctx->pc = 0x37958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379588u;
        // 0x37958c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379590u;
        goto label_379590;
    }
    ctx->pc = 0x379588u;
    ctx->pc = 0x37958Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379588u;
    // 0x37958c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xAD000Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xAD000Cu, 0x379588u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379590u;
label_379590:
    // 0x379590: 0x10084004  beq         $zero, $t0, . + 4 + (0x4004 << 2)
label_379594:
    if (ctx->pc == 0x379594u) {
        ctx->pc = 0x379594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379590u;
        // 0x379594: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379598u;
        goto label_379598;
    }
    ctx->pc = 0x379590u;
    {
        const bool branch_taken_0x379590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x379594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379590u;
        // 0x379594: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379590) {
            ctx->pc = 0x3895A4u;
            return;
        }
    }
    ctx->pc = 0x379598u;
label_379598:
    // 0x379598: 0x80000130  lb          $zero, 0x130($zero)
    ctx->pc = 0x379598u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x130u));
label_37959c:
    // 0x37959c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37959cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3795a0:
    // 0x3795a0: 0x102107ff  beq         $at, $at, . + 4 + (0x7FF << 2)
label_3795a4:
    if (ctx->pc == 0x3795A4u) {
        ctx->pc = 0x3795A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3795A0u;
        // 0x3795a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3795A8u;
        goto label_3795a8;
    }
    ctx->pc = 0x3795A0u;
    {
        const bool branch_taken_0x3795a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 1));
        ctx->pc = 0x3795A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3795A0u;
        // 0x3795a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3795a0) {
            ctx->pc = 0x37B5A0u;
            return;
        }
    }
    ctx->pc = 0x3795A8u;
label_3795a8:
    // 0x3795a8: 0x80065bf4  lb          $a2, 0x5BF4($zero)
    ctx->pc = 0x3795a8u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x5BF4u));
label_3795ac:
    // 0x3795ac: 0x27b9bc  .word       0x0027B9BC                   # dsll32      $s7, $a3, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3795acu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 7) << (32 + 6));
label_3795b0:
    // 0x3795b0: 0x800500b0  lb          $a1, 0xB0($zero)
    ctx->pc = 0x3795b0u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0xB0u));
label_3795b4:
    // 0x3795b4: 0x27c0bd  .word       0x0027C0BD                   # INVALID     $at, $a3, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3795b4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3795B4 raw=0x0027C0BD");
label_3795b8:
    // 0x3795b8: 0x520f0038  beql        $s0, $t7, . + 4 + (0x38 << 2)
label_3795bc:
    if (ctx->pc == 0x3795BCu) {
        ctx->pc = 0x3795BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3795B8u;
        // 0x3795bc: 0x25c8bf  .word       0x0025C8BF                   # dsra32      $t9, $a1, 2 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 25, GPR_S64(ctx, 5) >> (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3795C0u;
        goto label_3795c0;
    }
    ctx->pc = 0x3795B8u;
    {
        const bool branch_taken_0x3795b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x3795b8) {
            ctx->pc = 0x3795BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3795B8u;
            // 0x3795bc: 0x25c8bf  .word       0x0025C8BF                   # dsra32      $t9, $a1, 2 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_S64(ctx, 25, GPR_S64(ctx, 5) >> (32 + 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37969Cu;
            goto label_37969c;
        }
    }
    ctx->pc = 0x3795C0u;
label_3795c0:
    // 0x3795c0: 0x80000170  lb          $zero, 0x170($zero)
    ctx->pc = 0x3795c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x170u));
label_3795c4:
    // 0x3795c4: 0x20d20b  .word       0x0020D20B                   # movn        $k0, $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3795c4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 1));
label_3795c8:
    // 0x3795c8: 0x80005ab0  lb          $zero, 0x5AB0($zero)
    ctx->pc = 0x3795c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x5AB0u));
label_3795cc:
    // 0x3795cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3795ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3795d0:
    // 0x3795d0: 0x1e54000  .word       0x01E54000                   # sll         $t0, $a1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3795d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
label_3795d4:
    // 0x3795d4: 0x1e0285b  .word       0x01E0285B                   # divu        $a1, $t7, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3795d4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
label_3795d8:
    // 0x3795d8: 0x1e64001  .word       0x01E64001                   # INVALID     $t7, $a2, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3795d8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3795D8 raw=0x01E64001");
label_3795dc:
    // 0x3795dc: 0x1e0309b  .word       0x01E0309B                   # divu        $a2, $t7, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3795dcu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
label_3795e0:
    // 0x3795e0: 0x1e74002  .word       0x01E74002                   # srl         $t0, $a3, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3795e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_3795e4:
    // 0x3795e4: 0x1e038db  .word       0x01E038DB                   # divu        $a3, $t7, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3795e4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
label_3795e8:
    // 0x3795e8: 0x82b4003  j           func_AD000C
label_3795ec:
    if (ctx->pc == 0x3795ECu) {
        ctx->pc = 0x3795ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3795E8u;
        // 0x3795ec: 0x1e0411b  .word       0x01E0411B                   # divu        $t0, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3795F0u;
        goto label_3795f0;
    }
    ctx->pc = 0x3795E8u;
    ctx->pc = 0x3795ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3795E8u;
    // 0x3795ec: 0x1e0411b  .word       0x01E0411B                   # divu        $t0, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    ctx->in_delay_slot = false;
    ctx->pc = 0xAD000Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xAD000Cu, 0x3795E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3795F0u;
label_3795f0:
    // 0x3795f0: 0x10084004  beq         $zero, $t0, . + 4 + (0x4004 << 2)
label_3795f4:
    if (ctx->pc == 0x3795F4u) {
        ctx->pc = 0x3795F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3795F0u;
        // 0x3795f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3795F8u;
        goto label_3795f8;
    }
    ctx->pc = 0x3795F0u;
    {
        const bool branch_taken_0x3795f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x3795F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3795F0u;
        // 0x3795f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3795f0) {
            ctx->pc = 0x389604u;
            return;
        }
    }
    ctx->pc = 0x3795F8u;
label_3795f8:
    // 0x3795f8: 0x80065bf4  lb          $a2, 0x5BF4($zero)
    ctx->pc = 0x3795f8u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x5BF4u));
label_3795fc:
    // 0x3795fc: 0x27b9bc  .word       0x0027B9BC                   # dsll32      $s7, $a3, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3795fcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 7) << (32 + 6));
label_379600:
    // 0x379600: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379600u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379604:
    // 0x379604: 0x27c0bd  .word       0x0027C0BD                   # INVALID     $at, $a3, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379604u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x379604 raw=0x0027C0BD");
label_379608:
    // 0x379608: 0x520f000d  beql        $s0, $t7, . + 4 + (0xD << 2)
label_37960c:
    if (ctx->pc == 0x37960Cu) {
        ctx->pc = 0x37960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379608u;
        // 0x37960c: 0x25c8bf  .word       0x0025C8BF                   # dsra32      $t9, $a1, 2 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 25, GPR_S64(ctx, 5) >> (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379610u;
        goto label_379610;
    }
    ctx->pc = 0x379608u;
    {
        const bool branch_taken_0x379608 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x379608) {
            ctx->pc = 0x37960Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379608u;
            // 0x37960c: 0x25c8bf  .word       0x0025C8BF                   # dsra32      $t9, $a1, 2 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_S64(ctx, 25, GPR_S64(ctx, 5) >> (32 + 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379640u;
            goto label_379640;
        }
    }
    ctx->pc = 0x379610u;
label_379610:
    // 0x379610: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379610u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379614:
    // 0x379614: 0x20d20b  .word       0x0020D20B                   # movn        $k0, $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379614u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 1));
label_379618:
    // 0x379618: 0x3e90800  .word       0x03E90800                   # sll         $at, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379618u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 0));
label_37961c:
    // 0x37961c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37961cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379620:
    // 0x379620: 0x3e91001  .word       0x03E91001                   # INVALID     $ra, $t1, 0x1001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379620u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x379620 raw=0x03E91001");
label_379624:
    // 0x379624: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379624u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379628:
    // 0x379628: 0x3e91802  .word       0x03E91802                   # srl         $v1, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379628u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 0));
label_37962c:
    // 0x37962c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37962cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379630:
    // 0x379630: 0xa2a4803  j           func_8A9200C
label_379634:
    if (ctx->pc == 0x379634u) {
        ctx->pc = 0x379634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379630u;
        // 0x379634: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379638u;
        goto label_379638;
    }
    ctx->pc = 0x379630u;
    ctx->pc = 0x379634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379630u;
    // 0x379634: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8A9200Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8A9200Cu, 0x379630u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379638u;
label_379638:
    // 0x379638: 0x10094804  beq         $zero, $t1, . + 4 + (0x4804 << 2)
label_37963c:
    if (ctx->pc == 0x37963Cu) {
        ctx->pc = 0x37963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379638u;
        // 0x37963c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379640u;
        goto label_379640;
    }
    ctx->pc = 0x379638u;
    {
        const bool branch_taken_0x379638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x37963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379638u;
        // 0x37963c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379638) {
            ctx->pc = 0x38B64Cu;
            return;
        }
    }
    ctx->pc = 0x379640u;
label_379640:
    // 0x379640: 0x10052801  beq         $zero, $a1, . + 4 + (0x2801 << 2)
label_379644:
    if (ctx->pc == 0x379644u) {
        ctx->pc = 0x379644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379640u;
        // 0x379644: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379648u;
        goto label_379648;
    }
    ctx->pc = 0x379640u;
    {
        const bool branch_taken_0x379640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x379644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379640u;
        // 0x379644: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379640) {
            ctx->pc = 0x383648u;
            return;
        }
    }
    ctx->pc = 0x379648u;
label_379648:
    // 0x379648: 0x12021001  beq         $s0, $v0, . + 4 + (0x1001 << 2)
label_37964c:
    if (ctx->pc == 0x37964Cu) {
        ctx->pc = 0x37964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379648u;
        // 0x37964c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379650u;
        goto label_379650;
    }
    ctx->pc = 0x379648u;
    {
        const bool branch_taken_0x379648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x37964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379648u;
        // 0x37964c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379648) {
            ctx->pc = 0x37D650u;
            return;
        }
    }
    ctx->pc = 0x379650u;
label_379650:
    // 0x379650: 0x800a0874  lb          $t2, 0x874($zero)
    ctx->pc = 0x379650u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x874u));
label_379654:
    // 0x379654: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379654u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379658:
    // 0x379658: 0x520207ed  beql        $s0, $v0, . + 4 + (0x7ED << 2)
label_37965c:
    if (ctx->pc == 0x37965Cu) {
        ctx->pc = 0x37965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379658u;
        // 0x37965c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379660u;
        goto label_379660;
    }
    ctx->pc = 0x379658u;
    {
        const bool branch_taken_0x379658 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x379658) {
            ctx->pc = 0x37965Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379658u;
            // 0x37965c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37B610u;
            return;
        }
    }
    ctx->pc = 0x379660u;
label_379660:
    // 0x379660: 0x800a2135  lb          $t2, 0x2135($zero)
    ctx->pc = 0x379660u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x2135u));
label_379664:
    // 0x379664: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379664u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379668:
    // 0x379668: 0x4000004b  .word       0x4000004B                   # mfc0        $zero, Index # 0000004B <InstrIdType: R5900_COP0>
    ctx->pc = 0x379668u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_37966c:
    // 0x37966c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37966cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379670:
    // 0x379670: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379670u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379674:
    // 0x379674: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379674u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379678:
    // 0x379678: 0x3e90800  .word       0x03E90800                   # sll         $at, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379678u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 0));
label_37967c:
    // 0x37967c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37967cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379680:
    // 0x379680: 0x3e91001  .word       0x03E91001                   # INVALID     $ra, $t1, 0x1001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379680u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x379680 raw=0x03E91001");
label_379684:
    // 0x379684: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379684u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379688:
    // 0x379688: 0x3e91802  .word       0x03E91802                   # srl         $v1, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379688u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 0));
label_37968c:
    // 0x37968c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37968cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379690:
    // 0x379690: 0xa2a4803  j           func_8A9200C
label_379694:
    if (ctx->pc == 0x379694u) {
        ctx->pc = 0x379694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379690u;
        // 0x379694: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379698u;
        goto label_379698;
    }
    ctx->pc = 0x379690u;
    ctx->pc = 0x379694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379690u;
    // 0x379694: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8A9200Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8A9200Cu, 0x379690u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379698u;
label_379698:
    // 0x379698: 0x10094804  beq         $zero, $t1, . + 4 + (0x4804 << 2)
label_37969c:
    if (ctx->pc == 0x37969Cu) {
        ctx->pc = 0x37969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379698u;
        // 0x37969c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3796A0u;
        goto label_3796a0;
    }
    ctx->pc = 0x379698u;
    {
        const bool branch_taken_0x379698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x37969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379698u;
        // 0x37969c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379698) {
            ctx->pc = 0x38B6ACu;
            return;
        }
    }
    ctx->pc = 0x3796A0u;
label_3796a0:
    // 0x3796a0: 0x10052801  beq         $zero, $a1, . + 4 + (0x2801 << 2)
label_3796a4:
    if (ctx->pc == 0x3796A4u) {
        ctx->pc = 0x3796A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3796A0u;
        // 0x3796a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3796A8u;
        goto label_3796a8;
    }
    ctx->pc = 0x3796A0u;
    {
        const bool branch_taken_0x3796a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x3796A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3796A0u;
        // 0x3796a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3796a0) {
            ctx->pc = 0x3836A8u;
            return;
        }
    }
    ctx->pc = 0x3796A8u;
label_3796a8:
    // 0x3796a8: 0x800a0874  lb          $t2, 0x874($zero)
    ctx->pc = 0x3796a8u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x874u));
label_3796ac:
    // 0x3796ac: 0x28226c  .word       0x0028226C                   # dadd        $a0, $at, $t0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3796acu;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 8); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_3796b0:
    // 0x3796b0: 0x81e923bc  lb          $t1, 0x23BC($t7)
    ctx->pc = 0x3796b0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9148)));
label_3796b4:
    // 0x3796b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3796b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3796b8:
    // 0x3796b8: 0x800003bf  lb          $zero, 0x3BF($zero)
    ctx->pc = 0x3796b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3BFu));
label_3796bc:
    // 0x3796bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3796bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3796c0:
    // 0x3796c0: 0x800a2135  lb          $t2, 0x2135($zero)
    ctx->pc = 0x3796c0u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x2135u));
label_3796c4:
    // 0x3796c4: 0x180b1fc  .word       0x0180B1FC                   # dsll32      $s6, $zero, 7 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3796c4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << (32 + 7));
label_3796c8:
    // 0x3796c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3796c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3796cc:
    // 0x3796cc: 0x180ad0b  .word       0x0180AD0B                   # movn        $s5, $t4, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3796ccu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 12));
label_3796d0:
    // 0x3796d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3796d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3796d4:
    // 0x3796d4: 0x1f409bd  .word       0x01F409BD                   # INVALID     $t7, $s4, 0x9BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3796d4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3796D4 raw=0x01F409BD");
label_3796d8:
    // 0x3796d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3796d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3796dc:
    // 0x3796dc: 0x1f42a48  .word       0x01F42A48                   # jr          $t7 # 00142A40 <InstrIdType: CPU_SPECIAL>
label_3796e0:
    if (ctx->pc == 0x3796E0u) {
        ctx->pc = 0x3796E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3796DCu;
        // 0x3796e0: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3796E4u;
        goto label_3796e4;
    }
    ctx->pc = 0x3796DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        ctx->pc = 0x3796E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3796DCu;
        // 0x3796e0: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3796DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3796E4u;
label_3796e4:
    // 0x3796e4: 0x1f411bd  .word       0x01F411BD                   # INVALID     $t7, $s4, 0x11BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3796e4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3796E4 raw=0x01F411BD");
label_3796e8:
    // 0x3796e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3796e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3796ec:
    // 0x3796ec: 0x1f43288  .word       0x01F43288                   # jr          $t7 # 00143280 <InstrIdType: CPU_SPECIAL>
label_3796f0:
    if (ctx->pc == 0x3796F0u) {
        ctx->pc = 0x3796F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3796ECu;
        // 0x3796f0: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3796F4u;
        goto label_3796f4;
    }
    ctx->pc = 0x3796ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        ctx->pc = 0x3796F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3796ECu;
        // 0x3796f0: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3796ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3796F4u;
label_3796f4:
    // 0x3796f4: 0x1f419bd  .word       0x01F419BD                   # INVALID     $t7, $s4, 0x19BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3796f4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3796F4 raw=0x01F419BD");
label_3796f8:
    // 0x3796f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3796f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3796fc:
    // 0x3796fc: 0x1f43ac8  .word       0x01F43AC8                   # jr          $t7 # 00143AC0 <InstrIdType: CPU_SPECIAL>
label_379700:
    if (ctx->pc == 0x379700u) {
        ctx->pc = 0x379700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3796FCu;
        // 0x379700: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379704u;
        goto label_379704;
    }
    ctx->pc = 0x3796FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        ctx->pc = 0x379700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3796FCu;
        // 0x379700: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3796FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x379704u;
label_379704:
    // 0x379704: 0x1fb5b2a  .word       0x01FB5B2A                   # slt         $t3, $t7, $k1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379704u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 27)) ? 1 : 0);
label_379708:
    // 0x379708: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379708u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37970c:
    // 0x37970c: 0x1c961ff  .word       0x01C961FF                   # dsra32      $t4, $t1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37970cu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 9) >> (32 + 7));
label_379710:
    // 0x379710: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379710u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379714:
    // 0x379714: 0x1c959ff  .word       0x01C959FF                   # dsra32      $t3, $t1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379714u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 9) >> (32 + 7));
label_379718:
    // 0x379718: 0x3e94800  .word       0x03E94800                   # sll         $t1, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379718u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 0));
label_37971c:
    // 0x37971c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37971cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379720:
    // 0x379720: 0x3e95001  .word       0x03E95001                   # INVALID     $ra, $t1, 0x5001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379720u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x379720 raw=0x03E95001");
label_379724:
    // 0x379724: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379724u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379728:
    // 0x379728: 0x3e95802  .word       0x03E95802                   # srl         $t3, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379728u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 9), 0));
label_37972c:
    // 0x37972c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37972cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379730:
    // 0x379730: 0x380f0000  xori        $t7, $zero, 0x0
    ctx->pc = 0x379730u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
label_379734:
    // 0x379734: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379734u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379738:
    // 0x379738: 0xa2f4803  j           func_8BD200C
label_37973c:
    if (ctx->pc == 0x37973Cu) {
        ctx->pc = 0x37973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379738u;
        // 0x37973c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379740u;
        goto label_379740;
    }
    ctx->pc = 0x379738u;
    ctx->pc = 0x37973Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379738u;
    // 0x37973c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8BD200Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8BD200Cu, 0x379738u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379740u;
label_379740:
    // 0x379740: 0x10094804  beq         $zero, $t1, . + 4 + (0x4804 << 2)
label_379744:
    if (ctx->pc == 0x379744u) {
        ctx->pc = 0x379744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379740u;
        // 0x379744: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379748u;
        goto label_379748;
    }
    ctx->pc = 0x379740u;
    {
        const bool branch_taken_0x379740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x379744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379740u;
        // 0x379744: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379740) {
            ctx->pc = 0x38B754u;
            return;
        }
    }
    ctx->pc = 0x379748u;
label_379748:
    // 0x379748: 0x10052801  beq         $zero, $a1, . + 4 + (0x2801 << 2)
label_37974c:
    if (ctx->pc == 0x37974Cu) {
        ctx->pc = 0x37974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379748u;
        // 0x37974c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379750u;
        goto label_379750;
    }
    ctx->pc = 0x379748u;
    {
        const bool branch_taken_0x379748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x37974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379748u;
        // 0x37974c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379748) {
            ctx->pc = 0x383750u;
            return;
        }
    }
    ctx->pc = 0x379750u;
label_379750:
    // 0x379750: 0x12021001  beq         $s0, $v0, . + 4 + (0x1001 << 2)
label_379754:
    if (ctx->pc == 0x379754u) {
        ctx->pc = 0x379754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379750u;
        // 0x379754: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379758u;
        goto label_379758;
    }
    ctx->pc = 0x379750u;
    {
        const bool branch_taken_0x379750 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x379754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379750u;
        // 0x379754: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379750) {
            ctx->pc = 0x37D758u;
            return;
        }
    }
    ctx->pc = 0x379758u;
label_379758:
    // 0x379758: 0x800f0874  lb          $t7, 0x874($zero)
    ctx->pc = 0x379758u;
    SET_GPR_S32(ctx, 15, (int8_t)FAST_READ8(0x874u));
label_37975c:
    // 0x37975c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37975cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379760:
    // 0x379760: 0x52020003  beql        $s0, $v0, . + 4 + (0x3 << 2)
label_379764:
    if (ctx->pc == 0x379764u) {
        ctx->pc = 0x379764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379760u;
        // 0x379764: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379768u;
        goto label_379768;
    }
    ctx->pc = 0x379760u;
    {
        const bool branch_taken_0x379760 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x379760) {
            ctx->pc = 0x379764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379760u;
            // 0x379764: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379770u;
            goto label_379770;
        }
    }
    ctx->pc = 0x379768u;
label_379768:
    // 0x379768: 0x800f2135  lb          $t7, 0x2135($zero)
    ctx->pc = 0x379768u;
    SET_GPR_S32(ctx, 15, (int8_t)FAST_READ8(0x2135u));
label_37976c:
    // 0x37976c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37976cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379770:
    // 0x379770: 0x4000002a  .word       0x4000002A                   # mfc0        $zero, Index # 0000002A <InstrIdType: R5900_COP0>
    ctx->pc = 0x379770u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_379774:
    // 0x379774: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379774u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379778:
    // 0x379778: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379778u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37977c:
    // 0x37977c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37977cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379780:
    // 0x379780: 0x80005ab0  lb          $zero, 0x5AB0($zero)
    ctx->pc = 0x379780u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x5AB0u));
label_379784:
    // 0x379784: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379784u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379788:
    // 0x379788: 0x1e54000  .word       0x01E54000                   # sll         $t0, $a1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379788u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
label_37978c:
    // 0x37978c: 0x1e0285b  .word       0x01E0285B                   # divu        $a1, $t7, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37978cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
label_379790:
    // 0x379790: 0x1e64001  .word       0x01E64001                   # INVALID     $t7, $a2, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379790u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x379790 raw=0x01E64001");
label_379794:
    // 0x379794: 0x1e0309b  .word       0x01E0309B                   # divu        $a2, $t7, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379794u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
label_379798:
    // 0x379798: 0x1e74002  .word       0x01E74002                   # srl         $t0, $a3, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379798u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_37979c:
    // 0x37979c: 0x1e038db  .word       0x01E038DB                   # divu        $a3, $t7, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37979cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
label_3797a0:
    // 0x3797a0: 0x82b4003  j           func_AD000C
label_3797a4:
    if (ctx->pc == 0x3797A4u) {
        ctx->pc = 0x3797A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3797A0u;
        // 0x3797a4: 0x1e0411b  .word       0x01E0411B                   # divu        $t0, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3797A8u;
        goto label_3797a8;
    }
    ctx->pc = 0x3797A0u;
    ctx->pc = 0x3797A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3797A0u;
    // 0x3797a4: 0x1e0411b  .word       0x01E0411B                   # divu        $t0, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    ctx->in_delay_slot = false;
    ctx->pc = 0xAD000Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xAD000Cu, 0x3797A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3797A8u;
label_3797a8:
    // 0x3797a8: 0x10084004  beq         $zero, $t0, . + 4 + (0x4004 << 2)
label_3797ac:
    if (ctx->pc == 0x3797ACu) {
        ctx->pc = 0x3797ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3797A8u;
        // 0x3797ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3797B0u;
        goto label_3797b0;
    }
    ctx->pc = 0x3797A8u;
    {
        const bool branch_taken_0x3797a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x3797ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3797A8u;
        // 0x3797ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3797a8) {
            ctx->pc = 0x3897BCu;
            return;
        }
    }
    ctx->pc = 0x3797B0u;
label_3797b0:
    // 0x3797b0: 0x80065bf4  lb          $a2, 0x5BF4($zero)
    ctx->pc = 0x3797b0u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x5BF4u));
label_3797b4:
    // 0x3797b4: 0x27b9bc  .word       0x0027B9BC                   # dsll32      $s7, $a3, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3797b4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 7) << (32 + 6));
label_3797b8:
    // 0x3797b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3797b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3797bc:
    // 0x3797bc: 0x27c0bd  .word       0x0027C0BD                   # INVALID     $at, $a3, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3797bcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3797BC raw=0x0027C0BD");
label_3797c0:
    // 0x3797c0: 0x520f001c  beql        $s0, $t7, . + 4 + (0x1C << 2)
label_3797c4:
    if (ctx->pc == 0x3797C4u) {
        ctx->pc = 0x3797C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3797C0u;
        // 0x3797c4: 0x25c8bf  .word       0x0025C8BF                   # dsra32      $t9, $a1, 2 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 25, GPR_S64(ctx, 5) >> (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3797C8u;
        goto label_3797c8;
    }
    ctx->pc = 0x3797C0u;
    {
        const bool branch_taken_0x3797c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x3797c0) {
            ctx->pc = 0x3797C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3797C0u;
            // 0x3797c4: 0x25c8bf  .word       0x0025C8BF                   # dsra32      $t9, $a1, 2 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_S64(ctx, 25, GPR_S64(ctx, 5) >> (32 + 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379834u;
            goto label_379834;
        }
    }
    ctx->pc = 0x3797C8u;
label_3797c8:
    // 0x3797c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3797c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3797cc:
    // 0x3797cc: 0x20d20b  .word       0x0020D20B                   # movn        $k0, $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3797ccu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 1));
label_3797d0:
    // 0x3797d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3797d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3797d4:
    // 0x3797d4: 0x24426c  .word       0x0024426C                   # dadd        $t0, $at, $a0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3797d4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 4); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_3797d8:
    // 0x3797d8: 0x81e943bc  lb          $t1, 0x43BC($t7)
    ctx->pc = 0x3797d8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17340)));
label_3797dc:
    // 0x3797dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3797dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3797e0:
    // 0x3797e0: 0x800003bf  lb          $zero, 0x3BF($zero)
    ctx->pc = 0x3797e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3BFu));
label_3797e4:
    // 0x3797e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3797e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3797e8:
    // 0x3797e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3797e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3797ec:
    // 0x3797ec: 0x180b1fc  .word       0x0180B1FC                   # dsll32      $s6, $zero, 7 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3797ecu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << (32 + 7));
label_3797f0:
    // 0x3797f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3797f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3797f4:
    // 0x3797f4: 0x180ad0b  .word       0x0180AD0B                   # movn        $s5, $t4, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3797f4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 12));
label_3797f8:
    // 0x3797f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3797f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3797fc:
    // 0x3797fc: 0x1f429bd  .word       0x01F429BD                   # INVALID     $t7, $s4, 0x29BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3797fcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3797FC raw=0x01F429BD");
label_379800:
    // 0x379800: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379800u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379804:
    // 0x379804: 0x1f40a48  .word       0x01F40A48                   # jr          $t7 # 00140A40 <InstrIdType: CPU_SPECIAL>
label_379808:
    if (ctx->pc == 0x379808u) {
        ctx->pc = 0x379808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379804u;
        // 0x379808: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37980Cu;
        goto label_37980c;
    }
    ctx->pc = 0x379804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        ctx->pc = 0x379808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379804u;
        // 0x379808: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379804u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x37980Cu;
label_37980c:
    // 0x37980c: 0x1f431bd  .word       0x01F431BD                   # INVALID     $t7, $s4, 0x31BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37980cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37980C raw=0x01F431BD");
label_379810:
    // 0x379810: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379810u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379814:
    // 0x379814: 0x1f41288  .word       0x01F41288                   # jr          $t7 # 00141280 <InstrIdType: CPU_SPECIAL>
label_379818:
    if (ctx->pc == 0x379818u) {
        ctx->pc = 0x379818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379814u;
        // 0x379818: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37981Cu;
        goto label_37981c;
    }
    ctx->pc = 0x379814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        ctx->pc = 0x379818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379814u;
        // 0x379818: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379814u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x37981Cu;
label_37981c:
    // 0x37981c: 0x1f439bd  .word       0x01F439BD                   # INVALID     $t7, $s4, 0x39BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37981cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37981C raw=0x01F439BD");
label_379820:
    // 0x379820: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379820u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379824:
    // 0x379824: 0x1f41ac8  .word       0x01F41AC8                   # jr          $t7 # 00141AC0 <InstrIdType: CPU_SPECIAL>
label_379828:
    if (ctx->pc == 0x379828u) {
        ctx->pc = 0x379828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379824u;
        // 0x379828: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37982Cu;
        goto label_37982c;
    }
    ctx->pc = 0x379824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        ctx->pc = 0x379828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379824u;
        // 0x379828: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379824u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x37982Cu;
label_37982c:
    // 0x37982c: 0x1fb5b2a  .word       0x01FB5B2A                   # slt         $t3, $t7, $k1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37982cu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 27)) ? 1 : 0);
label_379830:
    // 0x379830: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379830u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379834:
    // 0x379834: 0x1c961ff  .word       0x01C961FF                   # dsra32      $t4, $t1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379834u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 9) >> (32 + 7));
label_379838:
    // 0x379838: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379838u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37983c:
    // 0x37983c: 0x1c959ff  .word       0x01C959FF                   # dsra32      $t3, $t1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37983cu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 9) >> (32 + 7));
label_379840:
    // 0x379840: 0x3e94800  .word       0x03E94800                   # sll         $t1, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379840u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 0));
label_379844:
    // 0x379844: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379844u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379848:
    // 0x379848: 0x3e95001  .word       0x03E95001                   # INVALID     $ra, $t1, 0x5001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379848u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x379848 raw=0x03E95001");
label_37984c:
    // 0x37984c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37984cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379850:
    // 0x379850: 0x3e95802  .word       0x03E95802                   # srl         $t3, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379850u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 9), 0));
label_379854:
    // 0x379854: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379854u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379858:
    // 0x379858: 0x380f0000  xori        $t7, $zero, 0x0
    ctx->pc = 0x379858u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
label_37985c:
    // 0x37985c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37985cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379860:
    // 0x379860: 0xa2f4803  j           func_8BD200C
label_379864:
    if (ctx->pc == 0x379864u) {
        ctx->pc = 0x379864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379860u;
        // 0x379864: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379868u;
        goto label_379868;
    }
    ctx->pc = 0x379860u;
    ctx->pc = 0x379864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379860u;
    // 0x379864: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8BD200Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8BD200Cu, 0x379860u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379868u;
label_379868:
    // 0x379868: 0x10094804  beq         $zero, $t1, . + 4 + (0x4804 << 2)
label_37986c:
    if (ctx->pc == 0x37986Cu) {
        ctx->pc = 0x37986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379868u;
        // 0x37986c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379870u;
        goto label_379870;
    }
    ctx->pc = 0x379868u;
    {
        const bool branch_taken_0x379868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x37986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379868u;
        // 0x37986c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379868) {
            ctx->pc = 0x38B87Cu;
            return;
        }
    }
    ctx->pc = 0x379870u;
label_379870:
    // 0x379870: 0x10052801  beq         $zero, $a1, . + 4 + (0x2801 << 2)
label_379874:
    if (ctx->pc == 0x379874u) {
        ctx->pc = 0x379874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379870u;
        // 0x379874: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379878u;
        goto label_379878;
    }
    ctx->pc = 0x379870u;
    {
        const bool branch_taken_0x379870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x379874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379870u;
        // 0x379874: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379870) {
            ctx->pc = 0x383878u;
            return;
        }
    }
    ctx->pc = 0x379878u;
label_379878:
    // 0x379878: 0x12021001  beq         $s0, $v0, . + 4 + (0x1001 << 2)
label_37987c:
    if (ctx->pc == 0x37987Cu) {
        ctx->pc = 0x37987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379878u;
        // 0x37987c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379880u;
        goto label_379880;
    }
    ctx->pc = 0x379878u;
    {
        const bool branch_taken_0x379878 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x37987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379878u;
        // 0x37987c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379878) {
            ctx->pc = 0x37D880u;
            return;
        }
    }
    ctx->pc = 0x379880u;
label_379880:
    // 0x379880: 0x800f0874  lb          $t7, 0x874($zero)
    ctx->pc = 0x379880u;
    SET_GPR_S32(ctx, 15, (int8_t)FAST_READ8(0x874u));
label_379884:
    // 0x379884: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379884u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379888:
    // 0x379888: 0x520207a7  beql        $s0, $v0, . + 4 + (0x7A7 << 2)
label_37988c:
    if (ctx->pc == 0x37988Cu) {
        ctx->pc = 0x37988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379888u;
        // 0x37988c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379890u;
        goto label_379890;
    }
    ctx->pc = 0x379888u;
    {
        const bool branch_taken_0x379888 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x379888) {
            ctx->pc = 0x37988Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379888u;
            // 0x37988c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37B728u;
            return;
        }
    }
    ctx->pc = 0x379890u;
label_379890:
    // 0x379890: 0x800f2135  lb          $t7, 0x2135($zero)
    ctx->pc = 0x379890u;
    SET_GPR_S32(ctx, 15, (int8_t)FAST_READ8(0x2135u));
label_379894:
    // 0x379894: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379894u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379898:
    // 0x379898: 0x40000005  .word       0x40000005                   # mfc0        $zero, Index # 00000005 <InstrIdType: R5900_COP0>
    ctx->pc = 0x379898u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_37989c:
    // 0x37989c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37989cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3798a0:
    // 0x3798a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3798a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3798a4:
    // 0x3798a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3798a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3798a8:
    // 0x3798a8: 0x12021001  beq         $s0, $v0, . + 4 + (0x1001 << 2)
label_3798ac:
    if (ctx->pc == 0x3798ACu) {
        ctx->pc = 0x3798ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3798A8u;
        // 0x3798ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3798B0u;
        goto label_3798b0;
    }
    ctx->pc = 0x3798A8u;
    {
        const bool branch_taken_0x3798a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3798ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3798A8u;
        // 0x3798ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3798a8) {
            ctx->pc = 0x37D8B0u;
            return;
        }
    }
    ctx->pc = 0x3798B0u;
label_3798b0:
    // 0x3798b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3798b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3798b4:
    // 0x3798b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3798b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3798b8:
    // 0x3798b8: 0x520207d8  beql        $s0, $v0, . + 4 + (0x7D8 << 2)
label_3798bc:
    if (ctx->pc == 0x3798BCu) {
        ctx->pc = 0x3798BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3798B8u;
        // 0x3798bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3798C0u;
        goto label_3798c0;
    }
    ctx->pc = 0x3798B8u;
    {
        const bool branch_taken_0x3798b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3798b8) {
            ctx->pc = 0x3798BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3798B8u;
            // 0x3798bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37B81Cu;
            return;
        }
    }
    ctx->pc = 0x3798C0u;
label_3798c0:
    // 0x3798c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3798c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3798c4:
    // 0x3798c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3798c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3798c8:
    // 0x3798c8: 0x800102f0  lb          $at, 0x2F0($zero)
    ctx->pc = 0x3798c8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2F0u));
label_3798cc:
    // 0x3798cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3798ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3798d0:
    // 0x3798d0: 0x9017000  j           func_405C000
label_3798d4:
    if (ctx->pc == 0x3798D4u) {
        ctx->pc = 0x3798D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3798D0u;
        // 0x3798d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3798D8u;
        goto label_3798d8;
    }
    ctx->pc = 0x3798D0u;
    ctx->pc = 0x3798D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3798D0u;
    // 0x3798d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x405C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x405C000u, 0x3798D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3798D8u;
label_3798d8:
    // 0x3798d8: 0x8827000  j           func_209C000
label_3798dc:
    if (ctx->pc == 0x3798DCu) {
        ctx->pc = 0x3798DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3798D8u;
        // 0x3798dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3798E0u;
        goto label_3798e0;
    }
    ctx->pc = 0x3798D8u;
    ctx->pc = 0x3798DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3798D8u;
    // 0x3798dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209C000u, 0x3798D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3798E0u;
label_3798e0:
    // 0x3798e0: 0x8437000  j           func_10DC000
label_3798e4:
    if (ctx->pc == 0x3798E4u) {
        ctx->pc = 0x3798E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3798E0u;
        // 0x3798e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3798E8u;
        goto label_3798e8;
    }
    ctx->pc = 0x3798E0u;
    ctx->pc = 0x3798E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3798E0u;
    // 0x3798e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DC000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DC000u, 0x3798E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3798E8u;
label_3798e8:
    // 0x3798e8: 0x82f7000  j           func_BDC000
label_3798ec:
    if (ctx->pc == 0x3798ECu) {
        ctx->pc = 0x3798ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3798E8u;
        // 0x3798ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3798F0u;
        goto label_3798f0;
    }
    ctx->pc = 0x3798E8u;
    ctx->pc = 0x3798ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3798E8u;
    // 0x3798ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xBDC000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xBDC000u, 0x3798E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3798F0u;
label_3798f0:
    // 0x3798f0: 0x520b077c  beql        $s0, $t3, . + 4 + (0x77C << 2)
label_3798f4:
    if (ctx->pc == 0x3798F4u) {
        ctx->pc = 0x3798F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3798F0u;
        // 0x3798f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3798F8u;
        goto label_3798f8;
    }
    ctx->pc = 0x3798F0u;
    {
        const bool branch_taken_0x3798f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 11));
        if (branch_taken_0x3798f0) {
            ctx->pc = 0x3798F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3798F0u;
            // 0x3798f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37B6E4u;
            return;
        }
    }
    ctx->pc = 0x3798F8u;
label_3798f8:
    // 0x3798f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3798f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3798fc:
    // 0x3798fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3798fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379900:
    // 0x379900: 0x800c02b0  lb          $t4, 0x2B0($zero)
    ctx->pc = 0x379900u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x2B0u));
label_379904:
    // 0x379904: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379904u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379908:
    // 0x379908: 0x800d0330  lb          $t5, 0x330($zero)
    ctx->pc = 0x379908u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x330u));
label_37990c:
    // 0x37990c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37990cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379910:
    // 0x379910: 0x800a0370  lb          $t2, 0x370($zero)
    ctx->pc = 0x379910u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x370u));
label_379914:
    // 0x379914: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379914u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379918:
    // 0x379918: 0x800722b4  lb          $a3, 0x22B4($zero)
    ctx->pc = 0x379918u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x22B4u));
label_37991c:
    // 0x37991c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37991cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379920:
    // 0x379920: 0x1e16000  .word       0x01E16000                   # sll         $t4, $at, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379920u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_379924:
    // 0x379924: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379924u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379928:
    // 0x379928: 0x500a00bf  beql        $zero, $t2, . + 4 + (0xBF << 2)
label_37992c:
    if (ctx->pc == 0x37992Cu) {
        ctx->pc = 0x37992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379928u;
        // 0x37992c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379930u;
        goto label_379930;
    }
    ctx->pc = 0x379928u;
    {
        const bool branch_taken_0x379928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        if (branch_taken_0x379928) {
            ctx->pc = 0x37992Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379928u;
            // 0x37992c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379C28u;
            goto label_379c28;
        }
    }
    ctx->pc = 0x379930u;
label_379930:
    // 0x379930: 0x1e26001  .word       0x01E26001                   # INVALID     $t7, $v0, 0x6001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379930u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x379930 raw=0x01E26001");
label_379934:
    // 0x379934: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379934u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379938:
    // 0x379938: 0x1e36002  .word       0x01E36002                   # srl         $t4, $v1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379938u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 3), 0));
label_37993c:
    // 0x37993c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37993cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379940:
    // 0x379940: 0x1e46003  .word       0x01E46003                   # sra         $t4, $a0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379940u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 4), 0));
label_379944:
    // 0x379944: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379944u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379948:
    // 0x379948: 0x3e90800  .word       0x03E90800                   # sll         $at, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379948u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 0));
label_37994c:
    // 0x37994c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37994cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379950:
    // 0x379950: 0x3e91001  .word       0x03E91001                   # INVALID     $ra, $t1, 0x1001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379950u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x379950 raw=0x03E91001");
label_379954:
    // 0x379954: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379954u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379958:
    // 0x379958: 0x3e91802  .word       0x03E91802                   # srl         $v1, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379958u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 0));
label_37995c:
    // 0x37995c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37995cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379960:
    // 0x379960: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x379960u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x379960 raw=0x48007800");
label_379964:
    // 0x379964: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379964u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379968:
    // 0x379968: 0x3e92003  .word       0x03E92003                   # sra         $a0, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379968u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 9), 0));
label_37996c:
    // 0x37996c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37996cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379970:
    // 0x379970: 0xb017000  j           func_C05C000
label_379974:
    if (ctx->pc == 0x379974u) {
        ctx->pc = 0x379974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379970u;
        // 0x379974: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379978u;
        goto label_379978;
    }
    ctx->pc = 0x379970u;
    ctx->pc = 0x379974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379970u;
    // 0x379974: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC05C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC05C000u, 0x379970u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379978u;
label_379978:
    // 0x379978: 0xa827000  j           func_A09C000
label_37997c:
    if (ctx->pc == 0x37997Cu) {
        ctx->pc = 0x37997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379978u;
        // 0x37997c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379980u;
        goto label_379980;
    }
    ctx->pc = 0x379978u;
    ctx->pc = 0x37997Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379978u;
    // 0x37997c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA09C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA09C000u, 0x379978u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379980u;
label_379980:
    // 0x379980: 0xa437000  j           func_90DC000
label_379984:
    if (ctx->pc == 0x379984u) {
        ctx->pc = 0x379984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379980u;
        // 0x379984: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379988u;
        goto label_379988;
    }
    ctx->pc = 0x379980u;
    ctx->pc = 0x379984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379980u;
    // 0x379984: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x90DC000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x90DC000u, 0x379980u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379988u;
label_379988:
    // 0x379988: 0xa2f7000  j           func_8BDC000
label_37998c:
    if (ctx->pc == 0x37998Cu) {
        ctx->pc = 0x37998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379988u;
        // 0x37998c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379990u;
        goto label_379990;
    }
    ctx->pc = 0x379988u;
    ctx->pc = 0x37998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379988u;
    // 0x37998c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8BDC000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8BDC000u, 0x379988u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379990u;
label_379990:
    // 0x379990: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379990u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379994:
    // 0x379994: 0x1000583  .word       0x01000583                   # sra         $zero, $zero, 22 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379994u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 22));
label_379998:
    // 0x379998: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379998u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37999c:
    // 0x37999c: 0x800587  .word       0x00800587                   # srav        $zero, $zero, $a0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37999cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 4) & 0x1F));
label_3799a0:
    // 0x3799a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3799a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3799a4:
    // 0x3799a4: 0x1e00558  .word       0x01E00558                   # mult        $zero, $t7, $zero # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3799a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3799a8:
    // 0x3799a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3799a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3799ac:
    // 0x3799ac: 0x800543  .word       0x00800543                   # sra         $zero, $zero, 21 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3799acu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 21));
label_3799b0:
    // 0x3799b0: 0x800c0230  lb          $t4, 0x230($zero)
    ctx->pc = 0x3799b0u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x230u));
label_3799b4:
    // 0x3799b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3799b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3799b8:
    // 0x3799b8: 0x800d0270  lb          $t5, 0x270($zero)
    ctx->pc = 0x3799b8u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x270u));
label_3799bc:
    // 0x3799bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3799bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3799c0:
    // 0x3799c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3799c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_3799c4:
    // 0x3799c4: 0x1e00058  .word       0x01E00058                   # mult        $zero, $t7, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3799c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3799c8:
    // 0x3799c8: 0x1e54000  .word       0x01E54000                   # sll         $t0, $a1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3799c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
label_3799cc:
    // 0x3799cc: 0x3a0dc0  .word       0x003A0DC0                   # sll         $at, $k0, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3799ccu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 26), 23));
label_3799d0:
    // 0x3799d0: 0x1e64001  .word       0x01E64001                   # INVALID     $t7, $a2, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3799d0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3799D0 raw=0x01E64001");
label_3799d4:
    // 0x3799d4: 0x3a0e01  .word       0x003A0E01                   # INVALID     $at, $k0, 0xE01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3799d4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3799D4 raw=0x003A0E01");
label_3799d8:
    // 0x3799d8: 0x1e74002  .word       0x01E74002                   # srl         $t0, $a3, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3799d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_3799dc:
    // 0x3799dc: 0x3a0e42  .word       0x003A0E42                   # srl         $at, $k0, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3799dcu;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 26), 25));
label_3799e0:
    // 0x3799e0: 0x82b4003  j           func_AD000C
label_3799e4:
    if (ctx->pc == 0x3799E4u) {
        ctx->pc = 0x3799E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3799E0u;
        // 0x3799e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3799E8u;
        goto label_3799e8;
    }
    ctx->pc = 0x3799E0u;
    ctx->pc = 0x3799E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3799E0u;
    // 0x3799e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xAD000Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xAD000Cu, 0x3799E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3799E8u;
label_3799e8:
    // 0x3799e8: 0x10084004  beq         $zero, $t0, . + 4 + (0x4004 << 2)
label_3799ec:
    if (ctx->pc == 0x3799ECu) {
        ctx->pc = 0x3799ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3799E8u;
        // 0x3799ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3799F0u;
        goto label_3799f0;
    }
    ctx->pc = 0x3799E8u;
    {
        const bool branch_taken_0x3799e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x3799ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3799E8u;
        // 0x3799ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3799e8) {
            ctx->pc = 0x3899FCu;
            return;
        }
    }
    ctx->pc = 0x3799F0u;
label_3799f0:
    // 0x3799f0: 0x80000130  lb          $zero, 0x130($zero)
    ctx->pc = 0x3799f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x130u));
label_3799f4:
    // 0x3799f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3799f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_3799f8:
    // 0x3799f8: 0x102107ff  beq         $at, $at, . + 4 + (0x7FF << 2)
label_3799fc:
    if (ctx->pc == 0x3799FCu) {
        ctx->pc = 0x3799FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3799F8u;
        // 0x3799fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379A00u;
        goto label_379a00;
    }
    ctx->pc = 0x3799F8u;
    {
        const bool branch_taken_0x3799f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 1));
        ctx->pc = 0x3799FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3799F8u;
        // 0x3799fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3799f8) {
            ctx->pc = 0x37B9F8u;
            return;
        }
    }
    ctx->pc = 0x379A00u;
label_379a00:
    // 0x379a00: 0x80065bf4  lb          $a2, 0x5BF4($zero)
    ctx->pc = 0x379a00u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x5BF4u));
label_379a04:
    // 0x379a04: 0x27b9bc  .word       0x0027B9BC                   # dsll32      $s7, $a3, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379a04u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 7) << (32 + 6));
label_379a08:
    // 0x379a08: 0x800500b0  lb          $a1, 0xB0($zero)
    ctx->pc = 0x379a08u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0xB0u));
label_379a0c:
    // 0x379a0c: 0x27c0bd  .word       0x0027C0BD                   # INVALID     $at, $a3, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379a0cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x379A0C raw=0x0027C0BD");
label_379a10:
    // 0x379a10: 0x520f0038  beql        $s0, $t7, . + 4 + (0x38 << 2)
label_379a14:
    if (ctx->pc == 0x379A14u) {
        ctx->pc = 0x379A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379A10u;
        // 0x379a14: 0x25c8bf  .word       0x0025C8BF                   # dsra32      $t9, $a1, 2 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 25, GPR_S64(ctx, 5) >> (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379A18u;
        goto label_379a18;
    }
    ctx->pc = 0x379A10u;
    {
        const bool branch_taken_0x379a10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x379a10) {
            ctx->pc = 0x379A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379A10u;
            // 0x379a14: 0x25c8bf  .word       0x0025C8BF                   # dsra32      $t9, $a1, 2 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_S64(ctx, 25, GPR_S64(ctx, 5) >> (32 + 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379AF4u;
            goto label_379af4;
        }
    }
    ctx->pc = 0x379A18u;
label_379a18:
    // 0x379a18: 0x80000170  lb          $zero, 0x170($zero)
    ctx->pc = 0x379a18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x170u));
label_379a1c:
    // 0x379a1c: 0x20d20b  .word       0x0020D20B                   # movn        $k0, $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379a1cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 1));
label_379a20:
    // 0x379a20: 0x80005ab0  lb          $zero, 0x5AB0($zero)
    ctx->pc = 0x379a20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x5AB0u));
label_379a24:
    // 0x379a24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379a24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379a28:
    // 0x379a28: 0x1e54000  .word       0x01E54000                   # sll         $t0, $a1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379a28u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
label_379a2c:
    // 0x379a2c: 0x1e0285b  .word       0x01E0285B                   # divu        $a1, $t7, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379a2cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
label_379a30:
    // 0x379a30: 0x1e64001  .word       0x01E64001                   # INVALID     $t7, $a2, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379a30u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x379A30 raw=0x01E64001");
label_379a34:
    // 0x379a34: 0x1e0309b  .word       0x01E0309B                   # divu        $a2, $t7, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379a34u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
label_379a38:
    // 0x379a38: 0x1e74002  .word       0x01E74002                   # srl         $t0, $a3, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379a38u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_379a3c:
    // 0x379a3c: 0x1e038db  .word       0x01E038DB                   # divu        $a3, $t7, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379a3cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
label_379a40:
    // 0x379a40: 0x82b4003  j           func_AD000C
label_379a44:
    if (ctx->pc == 0x379A44u) {
        ctx->pc = 0x379A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379A40u;
        // 0x379a44: 0x1e0411b  .word       0x01E0411B                   # divu        $t0, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x379A48u;
        goto label_379a48;
    }
    ctx->pc = 0x379A40u;
    ctx->pc = 0x379A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379A40u;
    // 0x379a44: 0x1e0411b  .word       0x01E0411B                   # divu        $t0, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    ctx->in_delay_slot = false;
    ctx->pc = 0xAD000Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xAD000Cu, 0x379A40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379A48u;
label_379a48:
    // 0x379a48: 0x10084004  beq         $zero, $t0, . + 4 + (0x4004 << 2)
label_379a4c:
    if (ctx->pc == 0x379A4Cu) {
        ctx->pc = 0x379A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379A48u;
        // 0x379a4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379A50u;
        goto label_379a50;
    }
    ctx->pc = 0x379A48u;
    {
        const bool branch_taken_0x379a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x379A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379A48u;
        // 0x379a4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379a48) {
            ctx->pc = 0x389A5Cu;
            return;
        }
    }
    ctx->pc = 0x379A50u;
label_379a50:
    // 0x379a50: 0x80065bf4  lb          $a2, 0x5BF4($zero)
    ctx->pc = 0x379a50u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x5BF4u));
label_379a54:
    // 0x379a54: 0x27b9bc  .word       0x0027B9BC                   # dsll32      $s7, $a3, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379a54u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 7) << (32 + 6));
label_379a58:
    // 0x379a58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379a58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379a5c:
    // 0x379a5c: 0x27c0bd  .word       0x0027C0BD                   # INVALID     $at, $a3, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379a5cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x379A5C raw=0x0027C0BD");
label_379a60:
    // 0x379a60: 0x520f000d  beql        $s0, $t7, . + 4 + (0xD << 2)
label_379a64:
    if (ctx->pc == 0x379A64u) {
        ctx->pc = 0x379A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379A60u;
        // 0x379a64: 0x25c8bf  .word       0x0025C8BF                   # dsra32      $t9, $a1, 2 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 25, GPR_S64(ctx, 5) >> (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379A68u;
        goto label_379a68;
    }
    ctx->pc = 0x379A60u;
    {
        const bool branch_taken_0x379a60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x379a60) {
            ctx->pc = 0x379A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379A60u;
            // 0x379a64: 0x25c8bf  .word       0x0025C8BF                   # dsra32      $t9, $a1, 2 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_S64(ctx, 25, GPR_S64(ctx, 5) >> (32 + 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379A98u;
            goto label_379a98;
        }
    }
    ctx->pc = 0x379A68u;
label_379a68:
    // 0x379a68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379a68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379a6c:
    // 0x379a6c: 0x20d20b  .word       0x0020D20B                   # movn        $k0, $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379a6cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 1));
label_379a70:
    // 0x379a70: 0x3e90800  .word       0x03E90800                   # sll         $at, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379a70u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 0));
label_379a74:
    // 0x379a74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379a74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379a78:
    // 0x379a78: 0x3e91001  .word       0x03E91001                   # INVALID     $ra, $t1, 0x1001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379a78u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x379A78 raw=0x03E91001");
label_379a7c:
    // 0x379a7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379a7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379a80:
    // 0x379a80: 0x3e91802  .word       0x03E91802                   # srl         $v1, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379a80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 0));
label_379a84:
    // 0x379a84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379a84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379a88:
    // 0x379a88: 0xa2a4803  j           func_8A9200C
label_379a8c:
    if (ctx->pc == 0x379A8Cu) {
        ctx->pc = 0x379A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379A88u;
        // 0x379a8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379A90u;
        goto label_379a90;
    }
    ctx->pc = 0x379A88u;
    ctx->pc = 0x379A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379A88u;
    // 0x379a8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8A9200Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8A9200Cu, 0x379A88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379A90u;
label_379a90:
    // 0x379a90: 0x10094804  beq         $zero, $t1, . + 4 + (0x4804 << 2)
label_379a94:
    if (ctx->pc == 0x379A94u) {
        ctx->pc = 0x379A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379A90u;
        // 0x379a94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379A98u;
        goto label_379a98;
    }
    ctx->pc = 0x379A90u;
    {
        const bool branch_taken_0x379a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x379A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379A90u;
        // 0x379a94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379a90) {
            ctx->pc = 0x38BAA4u;
            return;
        }
    }
    ctx->pc = 0x379A98u;
label_379a98:
    // 0x379a98: 0x10052801  beq         $zero, $a1, . + 4 + (0x2801 << 2)
label_379a9c:
    if (ctx->pc == 0x379A9Cu) {
        ctx->pc = 0x379A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379A98u;
        // 0x379a9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379AA0u;
        goto label_379aa0;
    }
    ctx->pc = 0x379A98u;
    {
        const bool branch_taken_0x379a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x379A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379A98u;
        // 0x379a9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379a98) {
            ctx->pc = 0x383AA0u;
            return;
        }
    }
    ctx->pc = 0x379AA0u;
label_379aa0:
    // 0x379aa0: 0x12021001  beq         $s0, $v0, . + 4 + (0x1001 << 2)
label_379aa4:
    if (ctx->pc == 0x379AA4u) {
        ctx->pc = 0x379AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379AA0u;
        // 0x379aa4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379AA8u;
        goto label_379aa8;
    }
    ctx->pc = 0x379AA0u;
    {
        const bool branch_taken_0x379aa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x379AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379AA0u;
        // 0x379aa4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379aa0) {
            ctx->pc = 0x37DAA8u;
            return;
        }
    }
    ctx->pc = 0x379AA8u;
label_379aa8:
    // 0x379aa8: 0x800a0874  lb          $t2, 0x874($zero)
    ctx->pc = 0x379aa8u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x874u));
label_379aac:
    // 0x379aac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379aacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379ab0:
    // 0x379ab0: 0x520207ed  beql        $s0, $v0, . + 4 + (0x7ED << 2)
label_379ab4:
    if (ctx->pc == 0x379AB4u) {
        ctx->pc = 0x379AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379AB0u;
        // 0x379ab4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379AB8u;
        goto label_379ab8;
    }
    ctx->pc = 0x379AB0u;
    {
        const bool branch_taken_0x379ab0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x379ab0) {
            ctx->pc = 0x379AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379AB0u;
            // 0x379ab4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37BA68u;
            return;
        }
    }
    ctx->pc = 0x379AB8u;
label_379ab8:
    // 0x379ab8: 0x800a2135  lb          $t2, 0x2135($zero)
    ctx->pc = 0x379ab8u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x2135u));
label_379abc:
    // 0x379abc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379abcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379ac0:
    // 0x379ac0: 0x4000004b  .word       0x4000004B                   # mfc0        $zero, Index # 0000004B <InstrIdType: R5900_COP0>
    ctx->pc = 0x379ac0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_379ac4:
    // 0x379ac4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379ac4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379ac8:
    // 0x379ac8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379ac8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379acc:
    // 0x379acc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379accu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379ad0:
    // 0x379ad0: 0x3e90800  .word       0x03E90800                   # sll         $at, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 0));
label_379ad4:
    // 0x379ad4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379ad4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379ad8:
    // 0x379ad8: 0x3e91001  .word       0x03E91001                   # INVALID     $ra, $t1, 0x1001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379ad8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x379AD8 raw=0x03E91001");
label_379adc:
    // 0x379adc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379adcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379ae0:
    // 0x379ae0: 0x3e91802  .word       0x03E91802                   # srl         $v1, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 0));
label_379ae4:
    // 0x379ae4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379ae4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379ae8:
    // 0x379ae8: 0xa2a4803  j           func_8A9200C
label_379aec:
    if (ctx->pc == 0x379AECu) {
        ctx->pc = 0x379AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379AE8u;
        // 0x379aec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379AF0u;
        goto label_379af0;
    }
    ctx->pc = 0x379AE8u;
    ctx->pc = 0x379AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379AE8u;
    // 0x379aec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8A9200Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8A9200Cu, 0x379AE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379AF0u;
label_379af0:
    // 0x379af0: 0x10094804  beq         $zero, $t1, . + 4 + (0x4804 << 2)
label_379af4:
    if (ctx->pc == 0x379AF4u) {
        ctx->pc = 0x379AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379AF0u;
        // 0x379af4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379AF8u;
        goto label_379af8;
    }
    ctx->pc = 0x379AF0u;
    {
        const bool branch_taken_0x379af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x379AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379AF0u;
        // 0x379af4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379af0) {
            ctx->pc = 0x38BB04u;
            return;
        }
    }
    ctx->pc = 0x379AF8u;
label_379af8:
    // 0x379af8: 0x10052801  beq         $zero, $a1, . + 4 + (0x2801 << 2)
label_379afc:
    if (ctx->pc == 0x379AFCu) {
        ctx->pc = 0x379AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379AF8u;
        // 0x379afc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379B00u;
        goto label_379b00;
    }
    ctx->pc = 0x379AF8u;
    {
        const bool branch_taken_0x379af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x379AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379AF8u;
        // 0x379afc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379af8) {
            ctx->pc = 0x383B00u;
            return;
        }
    }
    ctx->pc = 0x379B00u;
label_379b00:
    // 0x379b00: 0x800a0874  lb          $t2, 0x874($zero)
    ctx->pc = 0x379b00u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x874u));
label_379b04:
    // 0x379b04: 0x28226c  .word       0x0028226C                   # dadd        $a0, $at, $t0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379b04u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 8); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_379b08:
    // 0x379b08: 0x81e923bc  lb          $t1, 0x23BC($t7)
    ctx->pc = 0x379b08u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9148)));
label_379b0c:
    // 0x379b0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379b0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379b10:
    // 0x379b10: 0x800003bf  lb          $zero, 0x3BF($zero)
    ctx->pc = 0x379b10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3BFu));
label_379b14:
    // 0x379b14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379b14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379b18:
    // 0x379b18: 0x800a2135  lb          $t2, 0x2135($zero)
    ctx->pc = 0x379b18u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x2135u));
label_379b1c:
    // 0x379b1c: 0x180b1fc  .word       0x0180B1FC                   # dsll32      $s6, $zero, 7 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379b1cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << (32 + 7));
label_379b20:
    // 0x379b20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379b20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379b24:
    // 0x379b24: 0x180ad0b  .word       0x0180AD0B                   # movn        $s5, $t4, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379b24u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 12));
label_379b28:
    // 0x379b28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379b28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379b2c:
    // 0x379b2c: 0x1f409bd  .word       0x01F409BD                   # INVALID     $t7, $s4, 0x9BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379b2cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x379B2C raw=0x01F409BD");
label_379b30:
    // 0x379b30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379b30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379b34:
    // 0x379b34: 0x1f42a48  .word       0x01F42A48                   # jr          $t7 # 00142A40 <InstrIdType: CPU_SPECIAL>
label_379b38:
    if (ctx->pc == 0x379B38u) {
        ctx->pc = 0x379B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379B34u;
        // 0x379b38: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379B3Cu;
        goto label_379b3c;
    }
    ctx->pc = 0x379B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        ctx->pc = 0x379B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379B34u;
        // 0x379b38: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379B34u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x379B3Cu;
label_379b3c:
    // 0x379b3c: 0x1f411bd  .word       0x01F411BD                   # INVALID     $t7, $s4, 0x11BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379b3cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x379B3C raw=0x01F411BD");
label_379b40:
    // 0x379b40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379b40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379b44:
    // 0x379b44: 0x1f43288  .word       0x01F43288                   # jr          $t7 # 00143280 <InstrIdType: CPU_SPECIAL>
label_379b48:
    if (ctx->pc == 0x379B48u) {
        ctx->pc = 0x379B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379B44u;
        // 0x379b48: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379B4Cu;
        goto label_379b4c;
    }
    ctx->pc = 0x379B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        ctx->pc = 0x379B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379B44u;
        // 0x379b48: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379B44u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x379B4Cu;
label_379b4c:
    // 0x379b4c: 0x1f419bd  .word       0x01F419BD                   # INVALID     $t7, $s4, 0x19BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379b4cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x379B4C raw=0x01F419BD");
label_379b50:
    // 0x379b50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379b50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379b54:
    // 0x379b54: 0x1f43ac8  .word       0x01F43AC8                   # jr          $t7 # 00143AC0 <InstrIdType: CPU_SPECIAL>
label_379b58:
    if (ctx->pc == 0x379B58u) {
        ctx->pc = 0x379B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379B54u;
        // 0x379b58: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379B5Cu;
        goto label_379b5c;
    }
    ctx->pc = 0x379B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        ctx->pc = 0x379B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379B54u;
        // 0x379b58: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379B54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x379B5Cu;
label_379b5c:
    // 0x379b5c: 0x1fb5b2a  .word       0x01FB5B2A                   # slt         $t3, $t7, $k1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379b5cu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 27)) ? 1 : 0);
label_379b60:
    // 0x379b60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379b60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379b64:
    // 0x379b64: 0x1c961ff  .word       0x01C961FF                   # dsra32      $t4, $t1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379b64u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 9) >> (32 + 7));
label_379b68:
    // 0x379b68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379b68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379b6c:
    // 0x379b6c: 0x1c959ff  .word       0x01C959FF                   # dsra32      $t3, $t1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379b6cu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 9) >> (32 + 7));
label_379b70:
    // 0x379b70: 0x3e94800  .word       0x03E94800                   # sll         $t1, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379b70u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 0));
label_379b74:
    // 0x379b74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379b74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379b78:
    // 0x379b78: 0x3e95001  .word       0x03E95001                   # INVALID     $ra, $t1, 0x5001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379b78u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x379B78 raw=0x03E95001");
label_379b7c:
    // 0x379b7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379b7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379b80:
    // 0x379b80: 0x3e95802  .word       0x03E95802                   # srl         $t3, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379b80u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 9), 0));
label_379b84:
    // 0x379b84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379b84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379b88:
    // 0x379b88: 0x380f0000  xori        $t7, $zero, 0x0
    ctx->pc = 0x379b88u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
label_379b8c:
    // 0x379b8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379b8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379b90:
    // 0x379b90: 0xa2f4803  j           func_8BD200C
label_379b94:
    if (ctx->pc == 0x379B94u) {
        ctx->pc = 0x379B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379B90u;
        // 0x379b94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379B98u;
        goto label_379b98;
    }
    ctx->pc = 0x379B90u;
    ctx->pc = 0x379B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379B90u;
    // 0x379b94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8BD200Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8BD200Cu, 0x379B90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379B98u;
label_379b98:
    // 0x379b98: 0x10094804  beq         $zero, $t1, . + 4 + (0x4804 << 2)
label_379b9c:
    if (ctx->pc == 0x379B9Cu) {
        ctx->pc = 0x379B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379B98u;
        // 0x379b9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379BA0u;
        goto label_379ba0;
    }
    ctx->pc = 0x379B98u;
    {
        const bool branch_taken_0x379b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x379B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379B98u;
        // 0x379b9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379b98) {
            ctx->pc = 0x38BBACu;
            return;
        }
    }
    ctx->pc = 0x379BA0u;
label_379ba0:
    // 0x379ba0: 0x10052801  beq         $zero, $a1, . + 4 + (0x2801 << 2)
label_379ba4:
    if (ctx->pc == 0x379BA4u) {
        ctx->pc = 0x379BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379BA0u;
        // 0x379ba4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379BA8u;
        goto label_379ba8;
    }
    ctx->pc = 0x379BA0u;
    {
        const bool branch_taken_0x379ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x379BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379BA0u;
        // 0x379ba4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379ba0) {
            ctx->pc = 0x383BA8u;
            return;
        }
    }
    ctx->pc = 0x379BA8u;
label_379ba8:
    // 0x379ba8: 0x12021001  beq         $s0, $v0, . + 4 + (0x1001 << 2)
label_379bac:
    if (ctx->pc == 0x379BACu) {
        ctx->pc = 0x379BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379BA8u;
        // 0x379bac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379BB0u;
        goto label_379bb0;
    }
    ctx->pc = 0x379BA8u;
    {
        const bool branch_taken_0x379ba8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x379BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379BA8u;
        // 0x379bac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379ba8) {
            ctx->pc = 0x37DBB0u;
            return;
        }
    }
    ctx->pc = 0x379BB0u;
label_379bb0:
    // 0x379bb0: 0x800f0874  lb          $t7, 0x874($zero)
    ctx->pc = 0x379bb0u;
    SET_GPR_S32(ctx, 15, (int8_t)FAST_READ8(0x874u));
label_379bb4:
    // 0x379bb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379bb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379bb8:
    // 0x379bb8: 0x52020003  beql        $s0, $v0, . + 4 + (0x3 << 2)
label_379bbc:
    if (ctx->pc == 0x379BBCu) {
        ctx->pc = 0x379BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379BB8u;
        // 0x379bbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379BC0u;
        goto label_379bc0;
    }
    ctx->pc = 0x379BB8u;
    {
        const bool branch_taken_0x379bb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x379bb8) {
            ctx->pc = 0x379BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379BB8u;
            // 0x379bbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379BC8u;
            goto label_379bc8;
        }
    }
    ctx->pc = 0x379BC0u;
label_379bc0:
    // 0x379bc0: 0x800f2135  lb          $t7, 0x2135($zero)
    ctx->pc = 0x379bc0u;
    SET_GPR_S32(ctx, 15, (int8_t)FAST_READ8(0x2135u));
label_379bc4:
    // 0x379bc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379bc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379bc8:
    // 0x379bc8: 0x4000002a  .word       0x4000002A                   # mfc0        $zero, Index # 0000002A <InstrIdType: R5900_COP0>
    ctx->pc = 0x379bc8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_379bcc:
    // 0x379bcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379bccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379bd0:
    // 0x379bd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379bd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379bd4:
    // 0x379bd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379bd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379bd8:
    // 0x379bd8: 0x80005ab0  lb          $zero, 0x5AB0($zero)
    ctx->pc = 0x379bd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x5AB0u));
label_379bdc:
    // 0x379bdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379bdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379be0:
    // 0x379be0: 0x1e54000  .word       0x01E54000                   # sll         $t0, $a1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379be0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
label_379be4:
    // 0x379be4: 0x1e0285b  .word       0x01E0285B                   # divu        $a1, $t7, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379be4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
label_379be8:
    // 0x379be8: 0x1e64001  .word       0x01E64001                   # INVALID     $t7, $a2, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379be8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x379BE8 raw=0x01E64001");
label_379bec:
    // 0x379bec: 0x1e0309b  .word       0x01E0309B                   # divu        $a2, $t7, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379becu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
label_379bf0:
    // 0x379bf0: 0x1e74002  .word       0x01E74002                   # srl         $t0, $a3, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379bf0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_379bf4:
    // 0x379bf4: 0x1e038db  .word       0x01E038DB                   # divu        $a3, $t7, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379bf4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
label_379bf8:
    // 0x379bf8: 0x82b4003  j           func_AD000C
label_379bfc:
    if (ctx->pc == 0x379BFCu) {
        ctx->pc = 0x379BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379BF8u;
        // 0x379bfc: 0x1e0411b  .word       0x01E0411B                   # divu        $t0, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x379C00u;
        goto label_379c00;
    }
    ctx->pc = 0x379BF8u;
    ctx->pc = 0x379BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379BF8u;
    // 0x379bfc: 0x1e0411b  .word       0x01E0411B                   # divu        $t0, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    ctx->in_delay_slot = false;
    ctx->pc = 0xAD000Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xAD000Cu, 0x379BF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379C00u;
label_379c00:
    // 0x379c00: 0x10084004  beq         $zero, $t0, . + 4 + (0x4004 << 2)
label_379c04:
    if (ctx->pc == 0x379C04u) {
        ctx->pc = 0x379C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379C00u;
        // 0x379c04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379C08u;
        goto label_379c08;
    }
    ctx->pc = 0x379C00u;
    {
        const bool branch_taken_0x379c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x379C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379C00u;
        // 0x379c04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379c00) {
            ctx->pc = 0x389C14u;
            return;
        }
    }
    ctx->pc = 0x379C08u;
label_379c08:
    // 0x379c08: 0x80065bf4  lb          $a2, 0x5BF4($zero)
    ctx->pc = 0x379c08u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x5BF4u));
label_379c0c:
    // 0x379c0c: 0x27b9bc  .word       0x0027B9BC                   # dsll32      $s7, $a3, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379c0cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 7) << (32 + 6));
label_379c10:
    // 0x379c10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379c10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379c14:
    // 0x379c14: 0x27c0bd  .word       0x0027C0BD                   # INVALID     $at, $a3, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379c14u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x379C14 raw=0x0027C0BD");
label_379c18:
    // 0x379c18: 0x520f001c  beql        $s0, $t7, . + 4 + (0x1C << 2)
label_379c1c:
    if (ctx->pc == 0x379C1Cu) {
        ctx->pc = 0x379C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379C18u;
        // 0x379c1c: 0x25c8bf  .word       0x0025C8BF                   # dsra32      $t9, $a1, 2 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 25, GPR_S64(ctx, 5) >> (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379C20u;
        goto label_379c20;
    }
    ctx->pc = 0x379C18u;
    {
        const bool branch_taken_0x379c18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x379c18) {
            ctx->pc = 0x379C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379C18u;
            // 0x379c1c: 0x25c8bf  .word       0x0025C8BF                   # dsra32      $t9, $a1, 2 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_S64(ctx, 25, GPR_S64(ctx, 5) >> (32 + 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379C8Cu;
            goto label_379c8c;
        }
    }
    ctx->pc = 0x379C20u;
label_379c20:
    // 0x379c20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379c20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379c24:
    // 0x379c24: 0x20d20b  .word       0x0020D20B                   # movn        $k0, $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379c24u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 1));
label_379c28:
    // 0x379c28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379c28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379c2c:
    // 0x379c2c: 0x24426c  .word       0x0024426C                   # dadd        $t0, $at, $a0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379c2cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 4); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_379c30:
    // 0x379c30: 0x81e943bc  lb          $t1, 0x43BC($t7)
    ctx->pc = 0x379c30u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17340)));
label_379c34:
    // 0x379c34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379c34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379c38:
    // 0x379c38: 0x800003bf  lb          $zero, 0x3BF($zero)
    ctx->pc = 0x379c38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3BFu));
label_379c3c:
    // 0x379c3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379c3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379c40:
    // 0x379c40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379c40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379c44:
    // 0x379c44: 0x180b1fc  .word       0x0180B1FC                   # dsll32      $s6, $zero, 7 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379c44u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << (32 + 7));
label_379c48:
    // 0x379c48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379c48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379c4c:
    // 0x379c4c: 0x180ad0b  .word       0x0180AD0B                   # movn        $s5, $t4, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379c4cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 12));
label_379c50:
    // 0x379c50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379c50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379c54:
    // 0x379c54: 0x1f429bd  .word       0x01F429BD                   # INVALID     $t7, $s4, 0x29BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379c54u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x379C54 raw=0x01F429BD");
label_379c58:
    // 0x379c58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379c58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379c5c:
    // 0x379c5c: 0x1f40a48  .word       0x01F40A48                   # jr          $t7 # 00140A40 <InstrIdType: CPU_SPECIAL>
label_379c60:
    if (ctx->pc == 0x379C60u) {
        ctx->pc = 0x379C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379C5Cu;
        // 0x379c60: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379C64u;
        goto label_379c64;
    }
    ctx->pc = 0x379C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        ctx->pc = 0x379C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379C5Cu;
        // 0x379c60: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379C5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x379C64u;
label_379c64:
    // 0x379c64: 0x1f431bd  .word       0x01F431BD                   # INVALID     $t7, $s4, 0x31BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379c64u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x379C64 raw=0x01F431BD");
label_379c68:
    // 0x379c68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379c68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379c6c:
    // 0x379c6c: 0x1f41288  .word       0x01F41288                   # jr          $t7 # 00141280 <InstrIdType: CPU_SPECIAL>
label_379c70:
    if (ctx->pc == 0x379C70u) {
        ctx->pc = 0x379C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379C6Cu;
        // 0x379c70: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379C74u;
        goto label_379c74;
    }
    ctx->pc = 0x379C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        ctx->pc = 0x379C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379C6Cu;
        // 0x379c70: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379C6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x379C74u;
label_379c74:
    // 0x379c74: 0x1f439bd  .word       0x01F439BD                   # INVALID     $t7, $s4, 0x39BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379c74u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x379C74 raw=0x01F439BD");
label_379c78:
    // 0x379c78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379c78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379c7c:
    // 0x379c7c: 0x1f41ac8  .word       0x01F41AC8                   # jr          $t7 # 00141AC0 <InstrIdType: CPU_SPECIAL>
label_379c80:
    if (ctx->pc == 0x379C80u) {
        ctx->pc = 0x379C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379C7Cu;
        // 0x379c80: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379C84u;
        goto label_379c84;
    }
    ctx->pc = 0x379C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        ctx->pc = 0x379C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379C7Cu;
        // 0x379c80: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379C7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x379C84u;
label_379c84:
    // 0x379c84: 0x1fb5b2a  .word       0x01FB5B2A                   # slt         $t3, $t7, $k1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379c84u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 27)) ? 1 : 0);
label_379c88:
    // 0x379c88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379c88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379c8c:
    // 0x379c8c: 0x1c961ff  .word       0x01C961FF                   # dsra32      $t4, $t1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379c8cu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 9) >> (32 + 7));
label_379c90:
    // 0x379c90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379c90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379c94:
    // 0x379c94: 0x1c959ff  .word       0x01C959FF                   # dsra32      $t3, $t1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379c94u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 9) >> (32 + 7));
label_379c98:
    // 0x379c98: 0x3e94800  .word       0x03E94800                   # sll         $t1, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379c98u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 0));
label_379c9c:
    // 0x379c9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379c9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379ca0:
    // 0x379ca0: 0x3e95001  .word       0x03E95001                   # INVALID     $ra, $t1, 0x5001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379ca0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x379CA0 raw=0x03E95001");
label_379ca4:
    // 0x379ca4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379ca4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379ca8:
    // 0x379ca8: 0x3e95802  .word       0x03E95802                   # srl         $t3, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379ca8u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 9), 0));
label_379cac:
    // 0x379cac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379cacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379cb0:
    // 0x379cb0: 0x380f0000  xori        $t7, $zero, 0x0
    ctx->pc = 0x379cb0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
label_379cb4:
    // 0x379cb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379cb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379cb8:
    // 0x379cb8: 0xa2f4803  j           func_8BD200C
label_379cbc:
    if (ctx->pc == 0x379CBCu) {
        ctx->pc = 0x379CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379CB8u;
        // 0x379cbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379CC0u;
        goto label_379cc0;
    }
    ctx->pc = 0x379CB8u;
    ctx->pc = 0x379CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379CB8u;
    // 0x379cbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8BD200Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8BD200Cu, 0x379CB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379CC0u;
label_379cc0:
    // 0x379cc0: 0x10094804  beq         $zero, $t1, . + 4 + (0x4804 << 2)
label_379cc4:
    if (ctx->pc == 0x379CC4u) {
        ctx->pc = 0x379CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379CC0u;
        // 0x379cc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379CC8u;
        goto label_379cc8;
    }
    ctx->pc = 0x379CC0u;
    {
        const bool branch_taken_0x379cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x379CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379CC0u;
        // 0x379cc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379cc0) {
            ctx->pc = 0x38BCD4u;
            return;
        }
    }
    ctx->pc = 0x379CC8u;
label_379cc8:
    // 0x379cc8: 0x10052801  beq         $zero, $a1, . + 4 + (0x2801 << 2)
label_379ccc:
    if (ctx->pc == 0x379CCCu) {
        ctx->pc = 0x379CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379CC8u;
        // 0x379ccc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379CD0u;
        goto label_379cd0;
    }
    ctx->pc = 0x379CC8u;
    {
        const bool branch_taken_0x379cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x379CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379CC8u;
        // 0x379ccc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379cc8) {
            ctx->pc = 0x383CD0u;
            return;
        }
    }
    ctx->pc = 0x379CD0u;
label_379cd0:
    // 0x379cd0: 0x12021001  beq         $s0, $v0, . + 4 + (0x1001 << 2)
label_379cd4:
    if (ctx->pc == 0x379CD4u) {
        ctx->pc = 0x379CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379CD0u;
        // 0x379cd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379CD8u;
        goto label_379cd8;
    }
    ctx->pc = 0x379CD0u;
    {
        const bool branch_taken_0x379cd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x379CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379CD0u;
        // 0x379cd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379cd0) {
            ctx->pc = 0x37DCD8u;
            return;
        }
    }
    ctx->pc = 0x379CD8u;
label_379cd8:
    // 0x379cd8: 0x800f0874  lb          $t7, 0x874($zero)
    ctx->pc = 0x379cd8u;
    SET_GPR_S32(ctx, 15, (int8_t)FAST_READ8(0x874u));
label_379cdc:
    // 0x379cdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379cdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379ce0:
    // 0x379ce0: 0x520207a7  beql        $s0, $v0, . + 4 + (0x7A7 << 2)
label_379ce4:
    if (ctx->pc == 0x379CE4u) {
        ctx->pc = 0x379CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379CE0u;
        // 0x379ce4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379CE8u;
        goto label_379ce8;
    }
    ctx->pc = 0x379CE0u;
    {
        const bool branch_taken_0x379ce0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x379ce0) {
            ctx->pc = 0x379CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379CE0u;
            // 0x379ce4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37BB80u;
            return;
        }
    }
    ctx->pc = 0x379CE8u;
label_379ce8:
    // 0x379ce8: 0x800f2135  lb          $t7, 0x2135($zero)
    ctx->pc = 0x379ce8u;
    SET_GPR_S32(ctx, 15, (int8_t)FAST_READ8(0x2135u));
label_379cec:
    // 0x379cec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379cecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379cf0:
    // 0x379cf0: 0x40000005  .word       0x40000005                   # mfc0        $zero, Index # 00000005 <InstrIdType: R5900_COP0>
    ctx->pc = 0x379cf0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_379cf4:
    // 0x379cf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379cf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379cf8:
    // 0x379cf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379cf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379cfc:
    // 0x379cfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379cfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379d00:
    // 0x379d00: 0x12021001  beq         $s0, $v0, . + 4 + (0x1001 << 2)
label_379d04:
    if (ctx->pc == 0x379D04u) {
        ctx->pc = 0x379D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379D00u;
        // 0x379d04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379D08u;
        goto label_379d08;
    }
    ctx->pc = 0x379D00u;
    {
        const bool branch_taken_0x379d00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x379D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379D00u;
        // 0x379d04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379d00) {
            ctx->pc = 0x37DD08u;
            return;
        }
    }
    ctx->pc = 0x379D08u;
label_379d08:
    // 0x379d08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379d08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379d0c:
    // 0x379d0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379d0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379d10:
    // 0x379d10: 0x520207d8  beql        $s0, $v0, . + 4 + (0x7D8 << 2)
label_379d14:
    if (ctx->pc == 0x379D14u) {
        ctx->pc = 0x379D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379D10u;
        // 0x379d14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379D18u;
        goto label_379d18;
    }
    ctx->pc = 0x379D10u;
    {
        const bool branch_taken_0x379d10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x379d10) {
            ctx->pc = 0x379D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379D10u;
            // 0x379d14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37BC74u;
            return;
        }
    }
    ctx->pc = 0x379D18u;
label_379d18:
    // 0x379d18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379d18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379d1c:
    // 0x379d1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379d1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379d20:
    // 0x379d20: 0x800102f0  lb          $at, 0x2F0($zero)
    ctx->pc = 0x379d20u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2F0u));
label_379d24:
    // 0x379d24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379d24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379d28:
    // 0x379d28: 0x9017000  j           func_405C000
label_379d2c:
    if (ctx->pc == 0x379D2Cu) {
        ctx->pc = 0x379D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379D28u;
        // 0x379d2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379D30u;
        goto label_379d30;
    }
    ctx->pc = 0x379D28u;
    ctx->pc = 0x379D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379D28u;
    // 0x379d2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x405C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x405C000u, 0x379D28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379D30u;
label_379d30:
    // 0x379d30: 0x8827000  j           func_209C000
label_379d34:
    if (ctx->pc == 0x379D34u) {
        ctx->pc = 0x379D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379D30u;
        // 0x379d34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379D38u;
        goto label_379d38;
    }
    ctx->pc = 0x379D30u;
    ctx->pc = 0x379D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379D30u;
    // 0x379d34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209C000u, 0x379D30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379D38u;
label_379d38:
    // 0x379d38: 0x8437000  j           func_10DC000
label_379d3c:
    if (ctx->pc == 0x379D3Cu) {
        ctx->pc = 0x379D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379D38u;
        // 0x379d3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379D40u;
        goto label_379d40;
    }
    ctx->pc = 0x379D38u;
    ctx->pc = 0x379D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379D38u;
    // 0x379d3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DC000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DC000u, 0x379D38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379D40u;
label_379d40:
    // 0x379d40: 0x82f7000  j           func_BDC000
label_379d44:
    if (ctx->pc == 0x379D44u) {
        ctx->pc = 0x379D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379D40u;
        // 0x379d44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379D48u;
        goto label_379d48;
    }
    ctx->pc = 0x379D40u;
    ctx->pc = 0x379D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379D40u;
    // 0x379d44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xBDC000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xBDC000u, 0x379D40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379D48u;
label_379d48:
    // 0x379d48: 0x520b06f1  beql        $s0, $t3, . + 4 + (0x6F1 << 2)
label_379d4c:
    if (ctx->pc == 0x379D4Cu) {
        ctx->pc = 0x379D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379D48u;
        // 0x379d4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379D50u;
        goto label_379d50;
    }
    ctx->pc = 0x379D48u;
    {
        const bool branch_taken_0x379d48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 11));
        if (branch_taken_0x379d48) {
            ctx->pc = 0x379D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379D48u;
            // 0x379d4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37B910u;
            return;
        }
    }
    ctx->pc = 0x379D50u;
label_379d50:
    // 0x379d50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379d50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379d54:
    // 0x379d54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379d54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379d58:
    // 0x379d58: 0x800c02b0  lb          $t4, 0x2B0($zero)
    ctx->pc = 0x379d58u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x2B0u));
label_379d5c:
    // 0x379d5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379d5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379d60:
    // 0x379d60: 0x800d0330  lb          $t5, 0x330($zero)
    ctx->pc = 0x379d60u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x330u));
label_379d64:
    // 0x379d64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379d64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379d68:
    // 0x379d68: 0x800a0370  lb          $t2, 0x370($zero)
    ctx->pc = 0x379d68u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x370u));
label_379d6c:
    // 0x379d6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379d6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379d70:
    // 0x379d70: 0x800722b4  lb          $a3, 0x22B4($zero)
    ctx->pc = 0x379d70u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x22B4u));
label_379d74:
    // 0x379d74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379d74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379d78:
    // 0x379d78: 0x1e16000  .word       0x01E16000                   # sll         $t4, $at, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379d78u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_379d7c:
    // 0x379d7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379d7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379d80:
    // 0x379d80: 0x500a004f  beql        $zero, $t2, . + 4 + (0x4F << 2)
label_379d84:
    if (ctx->pc == 0x379D84u) {
        ctx->pc = 0x379D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379D80u;
        // 0x379d84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379D88u;
        goto label_379d88;
    }
    ctx->pc = 0x379D80u;
    {
        const bool branch_taken_0x379d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        if (branch_taken_0x379d80) {
            ctx->pc = 0x379D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379D80u;
            // 0x379d84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379EC0u;
            goto label_379ec0;
        }
    }
    ctx->pc = 0x379D88u;
label_379d88:
    // 0x379d88: 0x1e26001  .word       0x01E26001                   # INVALID     $t7, $v0, 0x6001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379d88u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x379D88 raw=0x01E26001");
label_379d8c:
    // 0x379d8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379d8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379d90:
    // 0x379d90: 0x1e36002  .word       0x01E36002                   # srl         $t4, $v1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379d90u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 3), 0));
label_379d94:
    // 0x379d94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379d94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379d98:
    // 0x379d98: 0x1e46003  .word       0x01E46003                   # sra         $t4, $a0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379d98u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 4), 0));
label_379d9c:
    // 0x379d9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379d9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379da0:
    // 0x379da0: 0x3e90800  .word       0x03E90800                   # sll         $at, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379da0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 0));
label_379da4:
    // 0x379da4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379da4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379da8:
    // 0x379da8: 0x3e91001  .word       0x03E91001                   # INVALID     $ra, $t1, 0x1001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379da8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x379DA8 raw=0x03E91001");
label_379dac:
    // 0x379dac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379dacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379db0:
    // 0x379db0: 0x3e91802  .word       0x03E91802                   # srl         $v1, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379db0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 0));
label_379db4:
    // 0x379db4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379db4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379db8:
    // 0x379db8: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x379db8u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x379DB8 raw=0x48007800");
label_379dbc:
    // 0x379dbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379dbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379dc0:
    // 0x379dc0: 0x3e92003  .word       0x03E92003                   # sra         $a0, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379dc0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 9), 0));
label_379dc4:
    // 0x379dc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379dc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379dc8:
    // 0x379dc8: 0x1e10802  .word       0x01E10802                   # srl         $at, $at, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 1), 0));
label_379dcc:
    // 0x379dcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379dccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379dd0:
    // 0x379dd0: 0x1e20800  .word       0x01E20800                   # sll         $at, $v0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_379dd4:
    // 0x379dd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379dd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379dd8:
    // 0x379dd8: 0x81e203bc  lb          $v0, 0x3BC($t7)
    ctx->pc = 0x379dd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_379ddc:
    // 0x379ddc: 0x1e1e1bc  .word       0x01E1E1BC                   # dsll32      $gp, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379ddcu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) << (32 + 6));
label_379de0:
    // 0x379de0: 0x81e4133c  lb          $a0, 0x133C($t7)
    ctx->pc = 0x379de0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4924)));
label_379de4:
    // 0x379de4: 0x1e1e8bd  .word       0x01E1E8BD                   # INVALID     $t7, $at, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379de4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x379DE4 raw=0x01E1E8BD");
label_379de8:
    // 0x379de8: 0x1e50801  .word       0x01E50801                   # INVALID     $t7, $a1, 0x801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379de8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x379DE8 raw=0x01E50801");
label_379dec:
    // 0x379dec: 0x1e1f0be  .word       0x01E1F0BE                   # dsrl32      $fp, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379decu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 1) >> (32 + 2));
label_379df0:
    // 0x379df0: 0x80270b3c  lb          $a3, 0xB3C($at)
    ctx->pc = 0x379df0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 2876)));
label_379df4:
    // 0x379df4: 0x1e2f8cb  .word       0x01E2F8CB                   # movn        $ra, $t7, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379df4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
label_379df8:
    // 0x379df8: 0x800003bf  lb          $zero, 0x3BF($zero)
    ctx->pc = 0x379df8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3BFu));
label_379dfc:
    // 0x379dfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379dfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379e00:
    // 0x379e00: 0x3ec2801  .word       0x03EC2801                   # INVALID     $ra, $t4, 0x2801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379e00u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x379E00 raw=0x03EC2801");
label_379e04:
    // 0x379e04: 0x1c01a1c  .word       0x01C01A1C                   # dmult       $t6, $zero # 00001A00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379e04u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x379E04 raw=0x01C01A1C");
label_379e08:
    // 0x379e08: 0x80283b3c  lb          $t0, 0x3B3C($at)
    ctx->pc = 0x379e08u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 15164)));
label_379e0c:
    // 0x379e0c: 0x1c0225c  .word       0x01C0225C                   # dmult       $t6, $zero # 00002240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379e0cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x379E0C raw=0x01C0225C");
label_379e10:
    // 0x379e10: 0x3ec4800  .word       0x03EC4800                   # sll         $t1, $t4, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379e10u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 12), 0));
label_379e14:
    // 0x379e14: 0x1eb417d  .word       0x01EB417D                   # INVALID     $t7, $t3, 0x417D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379e14u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x379E14 raw=0x01EB417D");
label_379e18:
    // 0x379e18: 0x3ec5802  .word       0x03EC5802                   # srl         $t3, $t4, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379e18u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 12), 0));
label_379e1c:
    // 0x379e1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379e1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379e20:
    // 0x379e20: 0x1e10805  .word       0x01E10805                   # INVALID     $t7, $at, 0x805 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379e20u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x379E20 raw=0x01E10805");
label_379e24:
    // 0x379e24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379e24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379e28:
    // 0x379e28: 0x1e20803  .word       0x01E20803                   # sra         $at, $v0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379e28u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 2), 0));
label_379e2c:
    // 0x379e2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379e2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379e30:
    // 0x379e30: 0x81e203bc  lb          $v0, 0x3BC($t7)
    ctx->pc = 0x379e30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_379e34:
    // 0x379e34: 0x1e1e1bc  .word       0x01E1E1BC                   # dsll32      $gp, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379e34u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) << (32 + 6));
label_379e38:
    // 0x379e38: 0x81e4133c  lb          $a0, 0x133C($t7)
    ctx->pc = 0x379e38u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4924)));
label_379e3c:
    // 0x379e3c: 0x1e1e8bd  .word       0x01E1E8BD                   # INVALID     $t7, $at, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379e3cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x379E3C raw=0x01E1E8BD");
label_379e40:
    // 0x379e40: 0x1e50804  sllv        $at, $a1, $t7
    ctx->pc = 0x379e40u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 15) & 0x1F));
label_379e44:
    // 0x379e44: 0x1e1f0be  .word       0x01E1F0BE                   # dsrl32      $fp, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379e44u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 1) >> (32 + 2));
label_379e48:
    // 0x379e48: 0x80270b3c  lb          $a3, 0xB3C($at)
    ctx->pc = 0x379e48u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 2876)));
label_379e4c:
    // 0x379e4c: 0x1e2f8cb  .word       0x01E2F8CB                   # movn        $ra, $t7, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379e4cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
label_379e50:
    // 0x379e50: 0x800003bf  lb          $zero, 0x3BF($zero)
    ctx->pc = 0x379e50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3BFu));
label_379e54:
    // 0x379e54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379e54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379e58:
    // 0x379e58: 0x3ec2804  sllv        $a1, $t4, $ra
    ctx->pc = 0x379e58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 31) & 0x1F));
label_379e5c:
    // 0x379e5c: 0x1c01a1c  .word       0x01C01A1C                   # dmult       $t6, $zero # 00001A00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379e5cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x379E5C raw=0x01C01A1C");
label_379e60:
    // 0x379e60: 0x80283b3c  lb          $t0, 0x3B3C($at)
    ctx->pc = 0x379e60u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 15164)));
label_379e64:
    // 0x379e64: 0x1c0225c  .word       0x01C0225C                   # dmult       $t6, $zero # 00002240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379e64u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x379E64 raw=0x01C0225C");
label_379e68:
    // 0x379e68: 0x3ec4803  .word       0x03EC4803                   # sra         $t1, $t4, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379e68u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 12), 0));
label_379e6c:
    // 0x379e6c: 0x1eb417d  .word       0x01EB417D                   # INVALID     $t7, $t3, 0x417D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379e6cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x379E6C raw=0x01EB417D");
label_379e70:
    // 0x379e70: 0x3ec5805  .word       0x03EC5805                   # INVALID     $ra, $t4, 0x5805 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379e70u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x379E70 raw=0x03EC5805");
label_379e74:
    // 0x379e74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379e74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379e78:
    // 0x379e78: 0x1e10808  .word       0x01E10808                   # jr          $t7 # 00010800 <InstrIdType: CPU_SPECIAL>
label_379e7c:
    if (ctx->pc == 0x379E7Cu) {
        ctx->pc = 0x379E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379E78u;
        // 0x379e7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379E80u;
        goto label_379e80;
    }
    ctx->pc = 0x379E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        ctx->pc = 0x379E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379E78u;
        // 0x379e7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379E78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x379E80u;
label_379e80:
    // 0x379e80: 0x1e20806  srlv        $at, $v0, $t7
    ctx->pc = 0x379e80u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
label_379e84:
    // 0x379e84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379e84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379e88:
    // 0x379e88: 0x81e203bc  lb          $v0, 0x3BC($t7)
    ctx->pc = 0x379e88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_379e8c:
    // 0x379e8c: 0x1e1e1bc  .word       0x01E1E1BC                   # dsll32      $gp, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379e8cu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) << (32 + 6));
label_379e90:
    // 0x379e90: 0x81e4133c  lb          $a0, 0x133C($t7)
    ctx->pc = 0x379e90u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4924)));
label_379e94:
    // 0x379e94: 0x1e1e8bd  .word       0x01E1E8BD                   # INVALID     $t7, $at, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379e94u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x379E94 raw=0x01E1E8BD");
label_379e98:
    // 0x379e98: 0x1e50807  srav        $at, $a1, $t7
    ctx->pc = 0x379e98u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 15) & 0x1F));
label_379e9c:
    // 0x379e9c: 0x1e1f0be  .word       0x01E1F0BE                   # dsrl32      $fp, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379e9cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 1) >> (32 + 2));
label_379ea0:
    // 0x379ea0: 0x80270b3c  lb          $a3, 0xB3C($at)
    ctx->pc = 0x379ea0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 2876)));
label_379ea4:
    // 0x379ea4: 0x1e2f8cb  .word       0x01E2F8CB                   # movn        $ra, $t7, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379ea4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
label_379ea8:
    // 0x379ea8: 0x800003bf  lb          $zero, 0x3BF($zero)
    ctx->pc = 0x379ea8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3BFu));
label_379eac:
    // 0x379eac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379eacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379eb0:
    // 0x379eb0: 0x3ec2807  srav        $a1, $t4, $ra
    ctx->pc = 0x379eb0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 12), GPR_U32(ctx, 31) & 0x1F));
label_379eb4:
    // 0x379eb4: 0x1c01a1c  .word       0x01C01A1C                   # dmult       $t6, $zero # 00001A00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379eb4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x379EB4 raw=0x01C01A1C");
label_379eb8:
    // 0x379eb8: 0x80283b3c  lb          $t0, 0x3B3C($at)
    ctx->pc = 0x379eb8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 15164)));
label_379ebc:
    // 0x379ebc: 0x1c0225c  .word       0x01C0225C                   # dmult       $t6, $zero # 00002240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379ebcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x379EBC raw=0x01C0225C");
label_379ec0:
    // 0x379ec0: 0x3ec4806  srlv        $t1, $t4, $ra
    ctx->pc = 0x379ec0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 31) & 0x1F));
label_379ec4:
    // 0x379ec4: 0x1eb417d  .word       0x01EB417D                   # INVALID     $t7, $t3, 0x417D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379ec4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x379EC4 raw=0x01EB417D");
label_379ec8:
    // 0x379ec8: 0x3ec5808  .word       0x03EC5808                   # jr          $ra # 000C5800 <InstrIdType: CPU_SPECIAL>
label_379ecc:
    if (ctx->pc == 0x379ECCu) {
        ctx->pc = 0x379ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379EC8u;
        // 0x379ecc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379ED0u;
        goto label_379ed0;
    }
    ctx->pc = 0x379EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379EC8u;
        // 0x379ecc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379ED0u;
label_379ed0:
    // 0x379ed0: 0x11e507ff  beq         $t7, $a1, . + 4 + (0x7FF << 2)
label_379ed4:
    if (ctx->pc == 0x379ED4u) {
        ctx->pc = 0x379ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379ED0u;
        // 0x379ed4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379ED8u;
        goto label_379ed8;
    }
    ctx->pc = 0x379ED0u;
    {
        const bool branch_taken_0x379ed0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 5));
        ctx->pc = 0x379ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379ED0u;
        // 0x379ed4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379ed0) {
            ctx->pc = 0x37BED0u;
            return;
        }
    }
    ctx->pc = 0x379ED8u;
label_379ed8:
    // 0x379ed8: 0x10052801  beq         $zero, $a1, . + 4 + (0x2801 << 2)
label_379edc:
    if (ctx->pc == 0x379EDCu) {
        ctx->pc = 0x379EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379ED8u;
        // 0x379edc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379EE0u;
        goto label_379ee0;
    }
    ctx->pc = 0x379ED8u;
    {
        const bool branch_taken_0x379ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x379EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379ED8u;
        // 0x379edc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379ed8) {
            ctx->pc = 0x383EE0u;
            return;
        }
    }
    ctx->pc = 0x379EE0u;
label_379ee0:
    // 0x379ee0: 0x10052803  beq         $zero, $a1, . + 4 + (0x2803 << 2)
label_379ee4:
    if (ctx->pc == 0x379EE4u) {
        ctx->pc = 0x379EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379EE0u;
        // 0x379ee4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379EE8u;
        goto label_379ee8;
    }
    ctx->pc = 0x379EE0u;
    {
        const bool branch_taken_0x379ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x379EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379EE0u;
        // 0x379ee4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379ee0) {
            ctx->pc = 0x383EF0u;
            return;
        }
    }
    ctx->pc = 0x379EE8u;
label_379ee8:
    // 0x379ee8: 0xb0567ff  j           func_C159FFC
label_379eec:
    if (ctx->pc == 0x379EECu) {
        ctx->pc = 0x379EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379EE8u;
        // 0x379eec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379EF0u;
        goto label_379ef0;
    }
    ctx->pc = 0x379EE8u;
    ctx->pc = 0x379EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379EE8u;
    // 0x379eec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC159FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC159FFCu, 0x379EE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379EF0u;
label_379ef0:
    // 0x379ef0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379ef0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379ef4:
    // 0x379ef4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379ef4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379ef8:
    // 0x379ef8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379ef8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379efc:
    // 0x379efc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379efcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379f00:
    // 0x379f00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379f00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379f04:
    // 0x379f04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379f04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379f08:
    // 0x379f08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379f08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379f0c:
    // 0x379f0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379f0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379f10:
    // 0x379f10: 0x12056001  beq         $s0, $a1, . + 4 + (0x6001 << 2)
label_379f14:
    if (ctx->pc == 0x379F14u) {
        ctx->pc = 0x379F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379F10u;
        // 0x379f14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379F18u;
        goto label_379f18;
    }
    ctx->pc = 0x379F10u;
    {
        const bool branch_taken_0x379f10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x379F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379F10u;
        // 0x379f14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379f10) {
            ctx->pc = 0x391F18u;
            return;
        }
    }
    ctx->pc = 0x379F18u;
label_379f18:
    // 0x379f18: 0x400006b7  .word       0x400006B7                   # mfc0        $zero, Index # 000006B7 <InstrIdType: R5900_COP0>
    ctx->pc = 0x379f18u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_379f1c:
    // 0x379f1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379f1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379f20:
    // 0x379f20: 0x80002efc  lb          $zero, 0x2EFC($zero)
    ctx->pc = 0x379f20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2EFCu));
label_379f24:
    // 0x379f24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379f24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379f28:
    // 0x379f28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379f28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379f2c:
    // 0x379f2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379f2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379f30:
    // 0x379f30: 0x800c0230  lb          $t4, 0x230($zero)
    ctx->pc = 0x379f30u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x230u));
label_379f34:
    // 0x379f34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379f34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379f38:
    // 0x379f38: 0x800d0270  lb          $t5, 0x270($zero)
    ctx->pc = 0x379f38u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x270u));
label_379f3c:
    // 0x379f3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379f3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379f40:
    // 0x379f40: 0x11ea07ff  beq         $t7, $t2, . + 4 + (0x7FF << 2)
label_379f44:
    if (ctx->pc == 0x379F44u) {
        ctx->pc = 0x379F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379F40u;
        // 0x379f44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379F48u;
        goto label_379f48;
    }
    ctx->pc = 0x379F40u;
    {
        const bool branch_taken_0x379f40 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 10));
        ctx->pc = 0x379F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379F40u;
        // 0x379f44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379f40) {
            ctx->pc = 0x37BF40u;
            return;
        }
    }
    ctx->pc = 0x379F48u;
label_379f48:
    // 0x379f48: 0x100a5001  beq         $zero, $t2, . + 4 + (0x5001 << 2)
label_379f4c:
    if (ctx->pc == 0x379F4Cu) {
        ctx->pc = 0x379F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379F48u;
        // 0x379f4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379F50u;
        goto label_379f50;
    }
    ctx->pc = 0x379F48u;
    {
        const bool branch_taken_0x379f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        ctx->pc = 0x379F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379F48u;
        // 0x379f4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379f48) {
            ctx->pc = 0x38DF50u;
            return;
        }
    }
    ctx->pc = 0x379F50u;
label_379f50:
    // 0x379f50: 0x800552b0  lb          $a1, 0x52B0($zero)
    ctx->pc = 0x379f50u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x52B0u));
label_379f54:
    // 0x379f54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379f54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379f58:
    // 0x379f58: 0xb0a6fff  j           func_C29BFFC
label_379f5c:
    if (ctx->pc == 0x379F5Cu) {
        ctx->pc = 0x379F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379F58u;
        // 0x379f5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379F60u;
        goto label_379f60;
    }
    ctx->pc = 0x379F58u;
    ctx->pc = 0x379F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379F58u;
    // 0x379f5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC29BFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC29BFFCu, 0x379F58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x379F60u;
label_379f60:
    // 0x379f60: 0x1e14002  .word       0x01E14002                   # srl         $t0, $at, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379f60u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 1), 0));
label_379f64:
    // 0x379f64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379f64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379f68:
    // 0x379f68: 0x1e24000  .word       0x01E24000                   # sll         $t0, $v0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379f68u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_379f6c:
    // 0x379f6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379f6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379f70:
    // 0x379f70: 0x81e203bc  lb          $v0, 0x3BC($t7)
    ctx->pc = 0x379f70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_379f74:
    // 0x379f74: 0x1e1e1bc  .word       0x01E1E1BC                   # dsll32      $gp, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379f74u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) << (32 + 6));
label_379f78:
    // 0x379f78: 0x81e4133c  lb          $a0, 0x133C($t7)
    ctx->pc = 0x379f78u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4924)));
label_379f7c:
    // 0x379f7c: 0x1e1e8bd  .word       0x01E1E8BD                   # INVALID     $t7, $at, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379f7cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x379F7C raw=0x01E1E8BD");
label_379f80:
    // 0x379f80: 0x1e54001  .word       0x01E54001                   # INVALID     $t7, $a1, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379f80u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x379F80 raw=0x01E54001");
label_379f84:
    // 0x379f84: 0x1e1f0be  .word       0x01E1F0BE                   # dsrl32      $fp, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379f84u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 1) >> (32 + 2));
label_379f88:
    // 0x379f88: 0x80270b3c  lb          $a3, 0xB3C($at)
    ctx->pc = 0x379f88u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 2876)));
label_379f8c:
    // 0x379f8c: 0x1e2f8cb  .word       0x01E2F8CB                   # movn        $ra, $t7, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379f8cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
label_379f90:
    // 0x379f90: 0x800003bf  lb          $zero, 0x3BF($zero)
    ctx->pc = 0x379f90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3BFu));
label_379f94:
    // 0x379f94: 0x1ea297c  .word       0x01EA297C                   # dsll32      $a1, $t2, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379f94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) << (32 + 5));
label_379f98:
    // 0x379f98: 0x12052801  beq         $s0, $a1, . + 4 + (0x2801 << 2)
label_379f9c:
    if (ctx->pc == 0x379F9Cu) {
        ctx->pc = 0x379F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379F98u;
        // 0x379f9c: 0x1c01a1c  .word       0x01C01A1C                   # dmult       $t6, $zero # 00001A00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x379F9C raw=0x01C01A1C");
        ctx->in_delay_slot = false;
        ctx->pc = 0x379FA0u;
        goto label_379fa0;
    }
    ctx->pc = 0x379F98u;
    {
        const bool branch_taken_0x379f98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x379F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379F98u;
        // 0x379f9c: 0x1c01a1c  .word       0x01C01A1C                   # dmult       $t6, $zero # 00001A00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x379F9C raw=0x01C01A1C");
        ctx->in_delay_slot = false;
        if (branch_taken_0x379f98) {
            ctx->pc = 0x383FA0u;
            return;
        }
    }
    ctx->pc = 0x379FA0u;
label_379fa0:
    // 0x379fa0: 0x80283b3c  lb          $t0, 0x3B3C($at)
    ctx->pc = 0x379fa0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 15164)));
label_379fa4:
    // 0x379fa4: 0x1c0225c  .word       0x01C0225C                   # dmult       $t6, $zero # 00002240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379fa4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x379FA4 raw=0x01C0225C");
label_379fa8:
    // 0x379fa8: 0x10084004  beq         $zero, $t0, . + 4 + (0x4004 << 2)
label_379fac:
    if (ctx->pc == 0x379FACu) {
        ctx->pc = 0x379FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379FA8u;
        // 0x379fac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379FB0u;
        goto label_379fb0;
    }
    ctx->pc = 0x379FA8u;
    {
        const bool branch_taken_0x379fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x379FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379FA8u;
        // 0x379fac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379fa8) {
            ctx->pc = 0x389FBCu;
            return;
        }
    }
    ctx->pc = 0x379FB0u;
label_379fb0:
    // 0x379fb0: 0x81e94b7d  lb          $t1, 0x4B7D($t7)
    ctx->pc = 0x379fb0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 19325)));
label_379fb4:
    // 0x379fb4: 0x1eb417d  .word       0x01EB417D                   # INVALID     $t7, $t3, 0x417D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x379fb4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x379FB4 raw=0x01EB417D");
label_379fb8:
    // 0x379fb8: 0x81e9537d  lb          $t1, 0x537D($t7)
    ctx->pc = 0x379fb8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 21373)));
label_379fbc:
    // 0x379fbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379fbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379fc0:
    // 0x379fc0: 0x520507f3  beql        $s0, $a1, . + 4 + (0x7F3 << 2)
label_379fc4:
    if (ctx->pc == 0x379FC4u) {
        ctx->pc = 0x379FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379FC0u;
        // 0x379fc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379FC8u;
        goto label_379fc8;
    }
    ctx->pc = 0x379FC0u;
    {
        const bool branch_taken_0x379fc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        if (branch_taken_0x379fc0) {
            ctx->pc = 0x379FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379FC0u;
            // 0x379fc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37BF90u;
            return;
        }
    }
    ctx->pc = 0x379FC8u;
label_379fc8:
    // 0x379fc8: 0x81e95b7d  lb          $t1, 0x5B7D($t7)
    ctx->pc = 0x379fc8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 23421)));
label_379fcc:
    // 0x379fcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379fccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379fd0:
    // 0x379fd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379fd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379fd4:
    // 0x379fd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379fd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379fd8:
    // 0x379fd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379fd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379fdc:
    // 0x379fdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379fdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379fe0:
    // 0x379fe0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x379fe0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_379fe4:
    // 0x379fe4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379fe4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379fe8:
    // 0x379fe8: 0x120a6801  beq         $s0, $t2, . + 4 + (0x6801 << 2)
label_379fec:
    if (ctx->pc == 0x379FECu) {
        ctx->pc = 0x379FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379FE8u;
        // 0x379fec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379FF0u;
        goto label_379ff0;
    }
    ctx->pc = 0x379FE8u;
    {
        const bool branch_taken_0x379fe8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x379FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379FE8u;
        // 0x379fec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379fe8) {
            ctx->pc = 0x393FF0u;
            return;
        }
    }
    ctx->pc = 0x379FF0u;
label_379ff0:
    // 0x379ff0: 0x4000069c  .word       0x4000069C                   # mfc0        $zero, Index # 0000069C <InstrIdType: R5900_COP0>
    ctx->pc = 0x379ff0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_379ff4:
    // 0x379ff4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379ff4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_379ff8:
    // 0x379ff8: 0x800056fc  lb          $zero, 0x56FC($zero)
    ctx->pc = 0x379ff8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x56FCu));
label_379ffc:
    // 0x379ffc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x379ffcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a000:
    // 0x37a000: 0x800c0230  lb          $t4, 0x230($zero)
    ctx->pc = 0x37a000u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x230u));
label_37a004:
    // 0x37a004: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a004u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a008:
    // 0x37a008: 0x800d0270  lb          $t5, 0x270($zero)
    ctx->pc = 0x37a008u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x270u));
label_37a00c:
    // 0x37a00c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a00cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a010:
    // 0x37a010: 0x11ea07ff  beq         $t7, $t2, . + 4 + (0x7FF << 2)
label_37a014:
    if (ctx->pc == 0x37A014u) {
        ctx->pc = 0x37A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A010u;
        // 0x37a014: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A018u;
        goto label_37a018;
    }
    ctx->pc = 0x37A010u;
    {
        const bool branch_taken_0x37a010 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 10));
        ctx->pc = 0x37A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A010u;
        // 0x37a014: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a010) {
            ctx->pc = 0x37C010u;
            return;
        }
    }
    ctx->pc = 0x37A018u;
label_37a018:
    // 0x37a018: 0x100a5001  beq         $zero, $t2, . + 4 + (0x5001 << 2)
label_37a01c:
    if (ctx->pc == 0x37A01Cu) {
        ctx->pc = 0x37A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A018u;
        // 0x37a01c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A020u;
        goto label_37a020;
    }
    ctx->pc = 0x37A018u;
    {
        const bool branch_taken_0x37a018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        ctx->pc = 0x37A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A018u;
        // 0x37a01c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a018) {
            ctx->pc = 0x38E020u;
            return;
        }
    }
    ctx->pc = 0x37A020u;
label_37a020:
    // 0x37a020: 0x800552b0  lb          $a1, 0x52B0($zero)
    ctx->pc = 0x37a020u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x52B0u));
label_37a024:
    // 0x37a024: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a024u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a028:
    // 0x37a028: 0xb0a6fff  j           func_C29BFFC
label_37a02c:
    if (ctx->pc == 0x37A02Cu) {
        ctx->pc = 0x37A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A028u;
        // 0x37a02c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A030u;
        goto label_37a030;
    }
    ctx->pc = 0x37A028u;
    ctx->pc = 0x37A02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A028u;
    // 0x37a02c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC29BFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC29BFFCu, 0x37A028u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37A030u;
label_37a030:
    // 0x37a030: 0x1e14002  .word       0x01E14002                   # srl         $t0, $at, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a030u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 1), 0));
label_37a034:
    // 0x37a034: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a034u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a038:
    // 0x37a038: 0x1e24000  .word       0x01E24000                   # sll         $t0, $v0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a038u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_37a03c:
    // 0x37a03c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a03cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a040:
    // 0x37a040: 0x81e203bc  lb          $v0, 0x3BC($t7)
    ctx->pc = 0x37a040u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_37a044:
    // 0x37a044: 0x1e1e1bc  .word       0x01E1E1BC                   # dsll32      $gp, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a044u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) << (32 + 6));
label_37a048:
    // 0x37a048: 0x81e4133c  lb          $a0, 0x133C($t7)
    ctx->pc = 0x37a048u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4924)));
label_37a04c:
    // 0x37a04c: 0x1e1e8bd  .word       0x01E1E8BD                   # INVALID     $t7, $at, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a04cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37A04C raw=0x01E1E8BD");
label_37a050:
    // 0x37a050: 0x1e54001  .word       0x01E54001                   # INVALID     $t7, $a1, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a050u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37A050 raw=0x01E54001");
label_37a054:
    // 0x37a054: 0x1e1f0be  .word       0x01E1F0BE                   # dsrl32      $fp, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a054u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 1) >> (32 + 2));
label_37a058:
    // 0x37a058: 0x80270b3c  lb          $a3, 0xB3C($at)
    ctx->pc = 0x37a058u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 2876)));
label_37a05c:
    // 0x37a05c: 0x1e2f8cb  .word       0x01E2F8CB                   # movn        $ra, $t7, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a05cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
label_37a060:
    // 0x37a060: 0x800003bf  lb          $zero, 0x3BF($zero)
    ctx->pc = 0x37a060u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3BFu));
label_37a064:
    // 0x37a064: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a064u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a068:
    // 0x37a068: 0x80283b3c  lb          $t0, 0x3B3C($at)
    ctx->pc = 0x37a068u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 15164)));
label_37a06c:
    // 0x37a06c: 0x1e02a9c  .word       0x01E02A9C                   # dmult       $t7, $zero # 00002A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a06cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37A06C raw=0x01E02A9C");
label_37a070:
    // 0x37a070: 0x12052801  beq         $s0, $a1, . + 4 + (0x2801 << 2)
label_37a074:
    if (ctx->pc == 0x37A074u) {
        ctx->pc = 0x37A074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A070u;
        // 0x37a074: 0x1c01a1c  .word       0x01C01A1C                   # dmult       $t6, $zero # 00001A00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37A074 raw=0x01C01A1C");
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A078u;
        goto label_37a078;
    }
    ctx->pc = 0x37A070u;
    {
        const bool branch_taken_0x37a070 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x37A074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A070u;
        // 0x37a074: 0x1c01a1c  .word       0x01C01A1C                   # dmult       $t6, $zero # 00001A00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37A074 raw=0x01C01A1C");
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a070) {
            ctx->pc = 0x384078u;
            return;
        }
    }
    ctx->pc = 0x37A078u;
label_37a078:
    // 0x37a078: 0x10084004  beq         $zero, $t0, . + 4 + (0x4004 << 2)
label_37a07c:
    if (ctx->pc == 0x37A07Cu) {
        ctx->pc = 0x37A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A078u;
        // 0x37a07c: 0x1c0225c  .word       0x01C0225C                   # dmult       $t6, $zero # 00002240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37A07C raw=0x01C0225C");
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A080u;
        goto label_37a080;
    }
    ctx->pc = 0x37A078u;
    {
        const bool branch_taken_0x37a078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x37A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A078u;
        // 0x37a07c: 0x1c0225c  .word       0x01C0225C                   # dmult       $t6, $zero # 00002240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37A07C raw=0x01C0225C");
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a078) {
            ctx->pc = 0x38A08Cu;
            return;
        }
    }
    ctx->pc = 0x37A080u;
label_37a080:
    // 0x37a080: 0x81eb4b3c  lb          $t3, 0x4B3C($t7)
    ctx->pc = 0x37a080u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 19260)));
label_37a084:
    // 0x37a084: 0x1ed417d  .word       0x01ED417D                   # INVALID     $t7, $t5, 0x417D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a084u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37A084 raw=0x01ED417D");
label_37a088:
    // 0x37a088: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a088u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a08c:
    // 0x37a08c: 0x1ec517c  .word       0x01EC517C                   # dsll32      $t2, $t4, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a08cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) << (32 + 5));
label_37a090:
    // 0x37a090: 0x81e95b7d  lb          $t1, 0x5B7D($t7)
    ctx->pc = 0x37a090u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 23421)));
label_37a094:
    // 0x37a094: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a094u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a098:
    // 0x37a098: 0x81e9637d  lb          $t1, 0x637D($t7)
    ctx->pc = 0x37a098u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 25469)));
label_37a09c:
    // 0x37a09c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a09cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a0a0:
    // 0x37a0a0: 0x520507f1  beql        $s0, $a1, . + 4 + (0x7F1 << 2)
label_37a0a4:
    if (ctx->pc == 0x37A0A4u) {
        ctx->pc = 0x37A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A0A0u;
        // 0x37a0a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A0A8u;
        goto label_37a0a8;
    }
    ctx->pc = 0x37A0A0u;
    {
        const bool branch_taken_0x37a0a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        if (branch_taken_0x37a0a0) {
            ctx->pc = 0x37A0A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37A0A0u;
            // 0x37a0a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37C068u;
            return;
        }
    }
    ctx->pc = 0x37A0A8u;
label_37a0a8:
    // 0x37a0a8: 0x81e96b7d  lb          $t1, 0x6B7D($t7)
    ctx->pc = 0x37a0a8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 27517)));
label_37a0ac:
    // 0x37a0ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a0acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a0b0:
    // 0x37a0b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a0b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a0b4:
    // 0x37a0b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a0b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a0b8:
    // 0x37a0b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a0b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a0bc:
    // 0x37a0bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a0bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a0c0:
    // 0x37a0c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a0c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a0c4:
    // 0x37a0c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a0c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a0c8:
    // 0x37a0c8: 0x120a6801  beq         $s0, $t2, . + 4 + (0x6801 << 2)
label_37a0cc:
    if (ctx->pc == 0x37A0CCu) {
        ctx->pc = 0x37A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A0C8u;
        // 0x37a0cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A0D0u;
        goto label_37a0d0;
    }
    ctx->pc = 0x37A0C8u;
    {
        const bool branch_taken_0x37a0c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x37A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A0C8u;
        // 0x37a0cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a0c8) {
            ctx->pc = 0x3940D0u;
            return;
        }
    }
    ctx->pc = 0x37A0D0u;
label_37a0d0:
    // 0x37a0d0: 0x40000680  .word       0x40000680                   # mfc0        $zero, Index # 00000680 <InstrIdType: R5900_COP0>
    ctx->pc = 0x37a0d0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_37a0d4:
    // 0x37a0d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a0d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a0d8:
    // 0x37a0d8: 0x800056fc  lb          $zero, 0x56FC($zero)
    ctx->pc = 0x37a0d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x56FCu));
label_37a0dc:
    // 0x37a0dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a0dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x37a0e0u;
}
