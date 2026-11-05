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

// Function: sub_003A9238
// Address: 0x3a9238 - 0x3a9848
void sub_003A9238_0x3a9238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9238_0x3a9238");
#endif

    switch (ctx->pc) {
        case 0x3a9238u: goto label_3a9238;
        case 0x3a923cu: goto label_3a923c;
        case 0x3a9240u: goto label_3a9240;
        case 0x3a9244u: goto label_3a9244;
        case 0x3a9248u: goto label_3a9248;
        case 0x3a924cu: goto label_3a924c;
        case 0x3a9250u: goto label_3a9250;
        case 0x3a9254u: goto label_3a9254;
        case 0x3a9258u: goto label_3a9258;
        case 0x3a925cu: goto label_3a925c;
        case 0x3a9260u: goto label_3a9260;
        case 0x3a9264u: goto label_3a9264;
        case 0x3a9268u: goto label_3a9268;
        case 0x3a926cu: goto label_3a926c;
        case 0x3a9270u: goto label_3a9270;
        case 0x3a9274u: goto label_3a9274;
        case 0x3a9278u: goto label_3a9278;
        case 0x3a927cu: goto label_3a927c;
        case 0x3a9280u: goto label_3a9280;
        case 0x3a9284u: goto label_3a9284;
        case 0x3a9288u: goto label_3a9288;
        case 0x3a928cu: goto label_3a928c;
        case 0x3a9290u: goto label_3a9290;
        case 0x3a9294u: goto label_3a9294;
        case 0x3a9298u: goto label_3a9298;
        case 0x3a929cu: goto label_3a929c;
        case 0x3a92a0u: goto label_3a92a0;
        case 0x3a92a4u: goto label_3a92a4;
        case 0x3a92a8u: goto label_3a92a8;
        case 0x3a92acu: goto label_3a92ac;
        case 0x3a92b0u: goto label_3a92b0;
        case 0x3a92b4u: goto label_3a92b4;
        case 0x3a92b8u: goto label_3a92b8;
        case 0x3a92bcu: goto label_3a92bc;
        case 0x3a92c0u: goto label_3a92c0;
        case 0x3a92c4u: goto label_3a92c4;
        case 0x3a92c8u: goto label_3a92c8;
        case 0x3a92ccu: goto label_3a92cc;
        case 0x3a92d0u: goto label_3a92d0;
        case 0x3a92d4u: goto label_3a92d4;
        case 0x3a92d8u: goto label_3a92d8;
        case 0x3a92dcu: goto label_3a92dc;
        case 0x3a92e0u: goto label_3a92e0;
        case 0x3a92e4u: goto label_3a92e4;
        case 0x3a92e8u: goto label_3a92e8;
        case 0x3a92ecu: goto label_3a92ec;
        case 0x3a92f0u: goto label_3a92f0;
        case 0x3a92f4u: goto label_3a92f4;
        case 0x3a92f8u: goto label_3a92f8;
        case 0x3a92fcu: goto label_3a92fc;
        case 0x3a9300u: goto label_3a9300;
        case 0x3a9304u: goto label_3a9304;
        case 0x3a9308u: goto label_3a9308;
        case 0x3a930cu: goto label_3a930c;
        case 0x3a9310u: goto label_3a9310;
        case 0x3a9314u: goto label_3a9314;
        case 0x3a9318u: goto label_3a9318;
        case 0x3a931cu: goto label_3a931c;
        case 0x3a9320u: goto label_3a9320;
        case 0x3a9324u: goto label_3a9324;
        case 0x3a9328u: goto label_3a9328;
        case 0x3a932cu: goto label_3a932c;
        case 0x3a9330u: goto label_3a9330;
        case 0x3a9334u: goto label_3a9334;
        case 0x3a9338u: goto label_3a9338;
        case 0x3a933cu: goto label_3a933c;
        case 0x3a9340u: goto label_3a9340;
        case 0x3a9344u: goto label_3a9344;
        case 0x3a9348u: goto label_3a9348;
        case 0x3a934cu: goto label_3a934c;
        case 0x3a9350u: goto label_3a9350;
        case 0x3a9354u: goto label_3a9354;
        case 0x3a9358u: goto label_3a9358;
        case 0x3a935cu: goto label_3a935c;
        case 0x3a9360u: goto label_3a9360;
        case 0x3a9364u: goto label_3a9364;
        case 0x3a9368u: goto label_3a9368;
        case 0x3a936cu: goto label_3a936c;
        case 0x3a9370u: goto label_3a9370;
        case 0x3a9374u: goto label_3a9374;
        case 0x3a9378u: goto label_3a9378;
        case 0x3a937cu: goto label_3a937c;
        case 0x3a9380u: goto label_3a9380;
        case 0x3a9384u: goto label_3a9384;
        case 0x3a9388u: goto label_3a9388;
        case 0x3a938cu: goto label_3a938c;
        case 0x3a9390u: goto label_3a9390;
        case 0x3a9394u: goto label_3a9394;
        case 0x3a9398u: goto label_3a9398;
        case 0x3a939cu: goto label_3a939c;
        case 0x3a93a0u: goto label_3a93a0;
        case 0x3a93a4u: goto label_3a93a4;
        case 0x3a93a8u: goto label_3a93a8;
        case 0x3a93acu: goto label_3a93ac;
        case 0x3a93b0u: goto label_3a93b0;
        case 0x3a93b4u: goto label_3a93b4;
        case 0x3a93b8u: goto label_3a93b8;
        case 0x3a93bcu: goto label_3a93bc;
        case 0x3a93c0u: goto label_3a93c0;
        case 0x3a93c4u: goto label_3a93c4;
        case 0x3a93c8u: goto label_3a93c8;
        case 0x3a93ccu: goto label_3a93cc;
        case 0x3a93d0u: goto label_3a93d0;
        case 0x3a93d4u: goto label_3a93d4;
        case 0x3a93d8u: goto label_3a93d8;
        case 0x3a93dcu: goto label_3a93dc;
        case 0x3a93e0u: goto label_3a93e0;
        case 0x3a93e4u: goto label_3a93e4;
        case 0x3a93e8u: goto label_3a93e8;
        case 0x3a93ecu: goto label_3a93ec;
        case 0x3a93f0u: goto label_3a93f0;
        case 0x3a93f4u: goto label_3a93f4;
        case 0x3a93f8u: goto label_3a93f8;
        case 0x3a93fcu: goto label_3a93fc;
        case 0x3a9400u: goto label_3a9400;
        case 0x3a9404u: goto label_3a9404;
        case 0x3a9408u: goto label_3a9408;
        case 0x3a940cu: goto label_3a940c;
        case 0x3a9410u: goto label_3a9410;
        case 0x3a9414u: goto label_3a9414;
        case 0x3a9418u: goto label_3a9418;
        case 0x3a941cu: goto label_3a941c;
        case 0x3a9420u: goto label_3a9420;
        case 0x3a9424u: goto label_3a9424;
        case 0x3a9428u: goto label_3a9428;
        case 0x3a942cu: goto label_3a942c;
        case 0x3a9430u: goto label_3a9430;
        case 0x3a9434u: goto label_3a9434;
        case 0x3a9438u: goto label_3a9438;
        case 0x3a943cu: goto label_3a943c;
        case 0x3a9440u: goto label_3a9440;
        case 0x3a9444u: goto label_3a9444;
        case 0x3a9448u: goto label_3a9448;
        case 0x3a944cu: goto label_3a944c;
        case 0x3a9450u: goto label_3a9450;
        case 0x3a9454u: goto label_3a9454;
        case 0x3a9458u: goto label_3a9458;
        case 0x3a945cu: goto label_3a945c;
        case 0x3a9460u: goto label_3a9460;
        case 0x3a9464u: goto label_3a9464;
        case 0x3a9468u: goto label_3a9468;
        case 0x3a946cu: goto label_3a946c;
        case 0x3a9470u: goto label_3a9470;
        case 0x3a9474u: goto label_3a9474;
        case 0x3a9478u: goto label_3a9478;
        case 0x3a947cu: goto label_3a947c;
        case 0x3a9480u: goto label_3a9480;
        case 0x3a9484u: goto label_3a9484;
        case 0x3a9488u: goto label_3a9488;
        case 0x3a948cu: goto label_3a948c;
        case 0x3a9490u: goto label_3a9490;
        case 0x3a9494u: goto label_3a9494;
        case 0x3a9498u: goto label_3a9498;
        case 0x3a949cu: goto label_3a949c;
        case 0x3a94a0u: goto label_3a94a0;
        case 0x3a94a4u: goto label_3a94a4;
        case 0x3a94a8u: goto label_3a94a8;
        case 0x3a94acu: goto label_3a94ac;
        case 0x3a94b0u: goto label_3a94b0;
        case 0x3a94b4u: goto label_3a94b4;
        case 0x3a94b8u: goto label_3a94b8;
        case 0x3a94bcu: goto label_3a94bc;
        case 0x3a94c0u: goto label_3a94c0;
        case 0x3a94c4u: goto label_3a94c4;
        case 0x3a94c8u: goto label_3a94c8;
        case 0x3a94ccu: goto label_3a94cc;
        case 0x3a94d0u: goto label_3a94d0;
        case 0x3a94d4u: goto label_3a94d4;
        case 0x3a94d8u: goto label_3a94d8;
        case 0x3a94dcu: goto label_3a94dc;
        case 0x3a94e0u: goto label_3a94e0;
        case 0x3a94e4u: goto label_3a94e4;
        case 0x3a94e8u: goto label_3a94e8;
        case 0x3a94ecu: goto label_3a94ec;
        case 0x3a94f0u: goto label_3a94f0;
        case 0x3a94f4u: goto label_3a94f4;
        case 0x3a94f8u: goto label_3a94f8;
        case 0x3a94fcu: goto label_3a94fc;
        case 0x3a9500u: goto label_3a9500;
        case 0x3a9504u: goto label_3a9504;
        case 0x3a9508u: goto label_3a9508;
        case 0x3a950cu: goto label_3a950c;
        case 0x3a9510u: goto label_3a9510;
        case 0x3a9514u: goto label_3a9514;
        case 0x3a9518u: goto label_3a9518;
        case 0x3a951cu: goto label_3a951c;
        case 0x3a9520u: goto label_3a9520;
        case 0x3a9524u: goto label_3a9524;
        case 0x3a9528u: goto label_3a9528;
        case 0x3a952cu: goto label_3a952c;
        case 0x3a9530u: goto label_3a9530;
        case 0x3a9534u: goto label_3a9534;
        case 0x3a9538u: goto label_3a9538;
        case 0x3a953cu: goto label_3a953c;
        case 0x3a9540u: goto label_3a9540;
        case 0x3a9544u: goto label_3a9544;
        case 0x3a9548u: goto label_3a9548;
        case 0x3a954cu: goto label_3a954c;
        case 0x3a9550u: goto label_3a9550;
        case 0x3a9554u: goto label_3a9554;
        case 0x3a9558u: goto label_3a9558;
        case 0x3a955cu: goto label_3a955c;
        case 0x3a9560u: goto label_3a9560;
        case 0x3a9564u: goto label_3a9564;
        case 0x3a9568u: goto label_3a9568;
        case 0x3a956cu: goto label_3a956c;
        case 0x3a9570u: goto label_3a9570;
        case 0x3a9574u: goto label_3a9574;
        case 0x3a9578u: goto label_3a9578;
        case 0x3a957cu: goto label_3a957c;
        case 0x3a9580u: goto label_3a9580;
        case 0x3a9584u: goto label_3a9584;
        case 0x3a9588u: goto label_3a9588;
        case 0x3a958cu: goto label_3a958c;
        case 0x3a9590u: goto label_3a9590;
        case 0x3a9594u: goto label_3a9594;
        case 0x3a9598u: goto label_3a9598;
        case 0x3a959cu: goto label_3a959c;
        case 0x3a95a0u: goto label_3a95a0;
        case 0x3a95a4u: goto label_3a95a4;
        case 0x3a95a8u: goto label_3a95a8;
        case 0x3a95acu: goto label_3a95ac;
        case 0x3a95b0u: goto label_3a95b0;
        case 0x3a95b4u: goto label_3a95b4;
        case 0x3a95b8u: goto label_3a95b8;
        case 0x3a95bcu: goto label_3a95bc;
        case 0x3a95c0u: goto label_3a95c0;
        case 0x3a95c4u: goto label_3a95c4;
        case 0x3a95c8u: goto label_3a95c8;
        case 0x3a95ccu: goto label_3a95cc;
        case 0x3a95d0u: goto label_3a95d0;
        case 0x3a95d4u: goto label_3a95d4;
        case 0x3a95d8u: goto label_3a95d8;
        case 0x3a95dcu: goto label_3a95dc;
        case 0x3a95e0u: goto label_3a95e0;
        case 0x3a95e4u: goto label_3a95e4;
        case 0x3a95e8u: goto label_3a95e8;
        case 0x3a95ecu: goto label_3a95ec;
        case 0x3a95f0u: goto label_3a95f0;
        case 0x3a95f4u: goto label_3a95f4;
        case 0x3a95f8u: goto label_3a95f8;
        case 0x3a95fcu: goto label_3a95fc;
        case 0x3a9600u: goto label_3a9600;
        case 0x3a9604u: goto label_3a9604;
        case 0x3a9608u: goto label_3a9608;
        case 0x3a960cu: goto label_3a960c;
        case 0x3a9610u: goto label_3a9610;
        case 0x3a9614u: goto label_3a9614;
        case 0x3a9618u: goto label_3a9618;
        case 0x3a961cu: goto label_3a961c;
        case 0x3a9620u: goto label_3a9620;
        case 0x3a9624u: goto label_3a9624;
        case 0x3a9628u: goto label_3a9628;
        case 0x3a962cu: goto label_3a962c;
        case 0x3a9630u: goto label_3a9630;
        case 0x3a9634u: goto label_3a9634;
        case 0x3a9638u: goto label_3a9638;
        case 0x3a963cu: goto label_3a963c;
        case 0x3a9640u: goto label_3a9640;
        case 0x3a9644u: goto label_3a9644;
        case 0x3a9648u: goto label_3a9648;
        case 0x3a964cu: goto label_3a964c;
        case 0x3a9650u: goto label_3a9650;
        case 0x3a9654u: goto label_3a9654;
        case 0x3a9658u: goto label_3a9658;
        case 0x3a965cu: goto label_3a965c;
        case 0x3a9660u: goto label_3a9660;
        case 0x3a9664u: goto label_3a9664;
        case 0x3a9668u: goto label_3a9668;
        case 0x3a966cu: goto label_3a966c;
        case 0x3a9670u: goto label_3a9670;
        case 0x3a9674u: goto label_3a9674;
        case 0x3a9678u: goto label_3a9678;
        case 0x3a967cu: goto label_3a967c;
        case 0x3a9680u: goto label_3a9680;
        case 0x3a9684u: goto label_3a9684;
        case 0x3a9688u: goto label_3a9688;
        case 0x3a968cu: goto label_3a968c;
        case 0x3a9690u: goto label_3a9690;
        case 0x3a9694u: goto label_3a9694;
        case 0x3a9698u: goto label_3a9698;
        case 0x3a969cu: goto label_3a969c;
        case 0x3a96a0u: goto label_3a96a0;
        case 0x3a96a4u: goto label_3a96a4;
        case 0x3a96a8u: goto label_3a96a8;
        case 0x3a96acu: goto label_3a96ac;
        case 0x3a96b0u: goto label_3a96b0;
        case 0x3a96b4u: goto label_3a96b4;
        case 0x3a96b8u: goto label_3a96b8;
        case 0x3a96bcu: goto label_3a96bc;
        case 0x3a96c0u: goto label_3a96c0;
        case 0x3a96c4u: goto label_3a96c4;
        case 0x3a96c8u: goto label_3a96c8;
        case 0x3a96ccu: goto label_3a96cc;
        case 0x3a96d0u: goto label_3a96d0;
        case 0x3a96d4u: goto label_3a96d4;
        case 0x3a96d8u: goto label_3a96d8;
        case 0x3a96dcu: goto label_3a96dc;
        case 0x3a96e0u: goto label_3a96e0;
        case 0x3a96e4u: goto label_3a96e4;
        case 0x3a96e8u: goto label_3a96e8;
        case 0x3a96ecu: goto label_3a96ec;
        case 0x3a96f0u: goto label_3a96f0;
        case 0x3a96f4u: goto label_3a96f4;
        case 0x3a96f8u: goto label_3a96f8;
        case 0x3a96fcu: goto label_3a96fc;
        case 0x3a9700u: goto label_3a9700;
        case 0x3a9704u: goto label_3a9704;
        case 0x3a9708u: goto label_3a9708;
        case 0x3a970cu: goto label_3a970c;
        case 0x3a9710u: goto label_3a9710;
        case 0x3a9714u: goto label_3a9714;
        case 0x3a9718u: goto label_3a9718;
        case 0x3a971cu: goto label_3a971c;
        case 0x3a9720u: goto label_3a9720;
        case 0x3a9724u: goto label_3a9724;
        case 0x3a9728u: goto label_3a9728;
        case 0x3a972cu: goto label_3a972c;
        case 0x3a9730u: goto label_3a9730;
        case 0x3a9734u: goto label_3a9734;
        case 0x3a9738u: goto label_3a9738;
        case 0x3a973cu: goto label_3a973c;
        case 0x3a9740u: goto label_3a9740;
        case 0x3a9744u: goto label_3a9744;
        case 0x3a9748u: goto label_3a9748;
        case 0x3a974cu: goto label_3a974c;
        case 0x3a9750u: goto label_3a9750;
        case 0x3a9754u: goto label_3a9754;
        case 0x3a9758u: goto label_3a9758;
        case 0x3a975cu: goto label_3a975c;
        case 0x3a9760u: goto label_3a9760;
        case 0x3a9764u: goto label_3a9764;
        case 0x3a9768u: goto label_3a9768;
        case 0x3a976cu: goto label_3a976c;
        case 0x3a9770u: goto label_3a9770;
        case 0x3a9774u: goto label_3a9774;
        case 0x3a9778u: goto label_3a9778;
        case 0x3a977cu: goto label_3a977c;
        case 0x3a9780u: goto label_3a9780;
        case 0x3a9784u: goto label_3a9784;
        case 0x3a9788u: goto label_3a9788;
        case 0x3a978cu: goto label_3a978c;
        case 0x3a9790u: goto label_3a9790;
        case 0x3a9794u: goto label_3a9794;
        case 0x3a9798u: goto label_3a9798;
        case 0x3a979cu: goto label_3a979c;
        case 0x3a97a0u: goto label_3a97a0;
        case 0x3a97a4u: goto label_3a97a4;
        case 0x3a97a8u: goto label_3a97a8;
        case 0x3a97acu: goto label_3a97ac;
        case 0x3a97b0u: goto label_3a97b0;
        case 0x3a97b4u: goto label_3a97b4;
        case 0x3a97b8u: goto label_3a97b8;
        case 0x3a97bcu: goto label_3a97bc;
        case 0x3a97c0u: goto label_3a97c0;
        case 0x3a97c4u: goto label_3a97c4;
        case 0x3a97c8u: goto label_3a97c8;
        case 0x3a97ccu: goto label_3a97cc;
        case 0x3a97d0u: goto label_3a97d0;
        case 0x3a97d4u: goto label_3a97d4;
        case 0x3a97d8u: goto label_3a97d8;
        case 0x3a97dcu: goto label_3a97dc;
        case 0x3a97e0u: goto label_3a97e0;
        case 0x3a97e4u: goto label_3a97e4;
        case 0x3a97e8u: goto label_3a97e8;
        case 0x3a97ecu: goto label_3a97ec;
        case 0x3a97f0u: goto label_3a97f0;
        case 0x3a97f4u: goto label_3a97f4;
        case 0x3a97f8u: goto label_3a97f8;
        case 0x3a97fcu: goto label_3a97fc;
        case 0x3a9800u: goto label_3a9800;
        case 0x3a9804u: goto label_3a9804;
        case 0x3a9808u: goto label_3a9808;
        case 0x3a980cu: goto label_3a980c;
        case 0x3a9810u: goto label_3a9810;
        case 0x3a9814u: goto label_3a9814;
        case 0x3a9818u: goto label_3a9818;
        case 0x3a981cu: goto label_3a981c;
        case 0x3a9820u: goto label_3a9820;
        case 0x3a9824u: goto label_3a9824;
        case 0x3a9828u: goto label_3a9828;
        case 0x3a982cu: goto label_3a982c;
        case 0x3a9830u: goto label_3a9830;
        case 0x3a9834u: goto label_3a9834;
        case 0x3a9838u: goto label_3a9838;
        case 0x3a983cu: goto label_3a983c;
        case 0x3a9840u: goto label_3a9840;
        case 0x3a9844u: goto label_3a9844;
        default: break;
    }

    ctx->pc = 0x3a9238u;

label_3a9238:
    // 0x3a9238: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a923c:
    // 0x3a923c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a923cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a9240:
    // 0x3a9240: 0x8c43a0d0  lw          $v1, -0x5F30($v0)
    ctx->pc = 0x3a9240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942928)));
label_3a9244:
    // 0x3a9244: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a9244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a9248:
    // 0x3a9248: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_3a924c:
    if (ctx->pc == 0x3A924Cu) {
        ctx->pc = 0x3A924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9248u;
        // 0x3a924c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9250u;
        goto label_3a9250;
    }
    ctx->pc = 0x3A9248u;
    {
        const bool branch_taken_0x3a9248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3A924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9248u;
        // 0x3a924c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9248) {
            ctx->pc = 0x3A9260u;
            goto label_3a9260;
        }
    }
    ctx->pc = 0x3A9250u;
label_3a9250:
    // 0x3a9250: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a9254:
    // 0x3a9254: 0x8c43a0c8  lw          $v1, -0x5F38($v0)
    ctx->pc = 0x3a9254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942920)));
label_3a9258:
    // 0x3a9258: 0x5860000e  blezl       $v1, . + 4 + (0xE << 2)
label_3a925c:
    if (ctx->pc == 0x3A925Cu) {
        ctx->pc = 0x3A925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9258u;
        // 0x3a925c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9260u;
        goto label_3a9260;
    }
    ctx->pc = 0x3A9258u;
    {
        const bool branch_taken_0x3a9258 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3a9258) {
            ctx->pc = 0x3A925Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9258u;
            // 0x3a925c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9294u;
            goto label_3a9294;
        }
    }
    ctx->pc = 0x3A9260u;
label_3a9260:
    // 0x3a9260: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x3a9260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_3a9264:
    // 0x3a9264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a9264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a9268:
    // 0x3a9268: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a9268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a926c:
    // 0x3a926c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3a926cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a9270:
    // 0x3a9270: 0xc0e8f8a  jal         func_3A3E28
label_3a9274:
    if (ctx->pc == 0x3A9274u) {
        ctx->pc = 0x3A9274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9270u;
        // 0x3a9274: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9278u;
        goto label_3a9278;
    }
    ctx->pc = 0x3A9270u;
    SET_GPR_U32(ctx, 31, 0x3A9278u);
    ctx->pc = 0x3A9274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9270u;
    // 0x3a9274: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3E28u, 0x3A9270u, 0x3A9278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9278u;
label_3a9278:
    // 0x3a9278: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3a9278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_3a927c:
    // 0x3a927c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3a927cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3a9280:
    // 0x3a9280: 0x2463a108  addiu       $v1, $v1, -0x5EF8
    ctx->pc = 0x3a9280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942984));
label_3a9284:
    // 0x3a9284: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3a9284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3a9288:
    // 0x3a9288: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3a9288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_3a928c:
    // 0x3a928c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3a928cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3a9290:
    // 0x3a9290: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a9290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a9294:
    // 0x3a9294: 0x3e00008  jr          $ra
label_3a9298:
    if (ctx->pc == 0x3A9298u) {
        ctx->pc = 0x3A9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9294u;
        // 0x3a9298: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A929Cu;
        goto label_3a929c;
    }
    ctx->pc = 0x3A9294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9294u;
        // 0x3a9298: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A929Cu;
label_3a929c:
    // 0x3a929c: 0x0  nop
    ctx->pc = 0x3a929cu;
    // NOP
label_3a92a0:
    // 0x3a92a0: 0x0  nop
    ctx->pc = 0x3a92a0u;
    // NOP
label_3a92a4:
    // 0x3a92a4: 0x0  nop
    ctx->pc = 0x3a92a4u;
    // NOP
label_3a92a8:
    // 0x3a92a8: 0x0  nop
    ctx->pc = 0x3a92a8u;
    // NOP
label_3a92ac:
    // 0x3a92ac: 0x0  nop
    ctx->pc = 0x3a92acu;
    // NOP
label_3a92b0:
    // 0x3a92b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3a92b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a92b4:
    // 0x3a92b4: 0x0  nop
    ctx->pc = 0x3a92b4u;
    // NOP
label_3a92b8:
    // 0x3a92b8: 0x0  nop
    ctx->pc = 0x3a92b8u;
    // NOP
label_3a92bc:
    // 0x3a92bc: 0x0  nop
    ctx->pc = 0x3a92bcu;
    // NOP
label_3a92c0:
    // 0x3a92c0: 0xa4651006  sh          $a1, 0x1006($v1)
    ctx->pc = 0x3a92c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4102), (uint16_t)GPR_U32(ctx, 5));
label_3a92c4:
    // 0x3a92c4: 0x0  nop
    ctx->pc = 0x3a92c4u;
    // NOP
label_3a92c8:
    // 0x3a92c8: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a92c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a92cc:
    // 0x3a92cc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a92ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a92d0:
    // 0x3a92d0: 0x8c43a0d0  lw          $v1, -0x5F30($v0)
    ctx->pc = 0x3a92d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942928)));
label_3a92d4:
    // 0x3a92d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a92d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a92d8:
    // 0x3a92d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a92d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3a92dc:
    // 0x3a92dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a92dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3a92e0:
    // 0x3a92e0: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_3a92e4:
    if (ctx->pc == 0x3A92E4u) {
        ctx->pc = 0x3A92E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A92E0u;
        // 0x3a92e4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A92E8u;
        goto label_3a92e8;
    }
    ctx->pc = 0x3A92E0u;
    {
        const bool branch_taken_0x3a92e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3A92E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A92E0u;
        // 0x3a92e4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a92e0) {
            ctx->pc = 0x3A92F8u;
            goto label_3a92f8;
        }
    }
    ctx->pc = 0x3A92E8u;
label_3a92e8:
    // 0x3a92e8: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a92e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a92ec:
    // 0x3a92ec: 0x8c43a0c8  lw          $v1, -0x5F38($v0)
    ctx->pc = 0x3a92ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942920)));
label_3a92f0:
    // 0x3a92f0: 0x18600020  blez        $v1, . + 4 + (0x20 << 2)
label_3a92f4:
    if (ctx->pc == 0x3A92F4u) {
        ctx->pc = 0x3A92F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A92F0u;
        // 0x3a92f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A92F8u;
        goto label_3a92f8;
    }
    ctx->pc = 0x3A92F0u;
    {
        const bool branch_taken_0x3a92f0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3A92F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A92F0u;
        // 0x3a92f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a92f0) {
            ctx->pc = 0x3A9374u;
            goto label_3a9374;
        }
    }
    ctx->pc = 0x3A92F8u;
label_3a92f8:
    // 0x3a92f8: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3a92f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_3a92fc:
    // 0x3a92fc: 0x2463a114  addiu       $v1, $v1, -0x5EEC
    ctx->pc = 0x3a92fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942996));
label_3a9300:
    // 0x3a9300: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a9300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3a9304:
    // 0x3a9304: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a9304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3a9308:
    // 0x3a9308: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_3a930c:
    if (ctx->pc == 0x3A930Cu) {
        ctx->pc = 0x3A930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9308u;
        // 0x3a930c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9310u;
        goto label_3a9310;
    }
    ctx->pc = 0x3A9308u;
    {
        const bool branch_taken_0x3a9308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9308u;
        // 0x3a930c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9308) {
            ctx->pc = 0x3A9370u;
            goto label_3a9370;
        }
    }
    ctx->pc = 0x3A9310u;
label_3a9310:
    // 0x3a9310: 0x3c100042  lui         $s0, 0x42
    ctx->pc = 0x3a9310u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)66 << 16));
label_3a9314:
    // 0x3a9314: 0x3c110042  lui         $s1, 0x42
    ctx->pc = 0x3a9314u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)66 << 16));
label_3a9318:
    // 0x3a9318: 0x2610a0e4  addiu       $s0, $s0, -0x5F1C
    ctx->pc = 0x3a9318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942948));
label_3a931c:
    // 0x3a931c: 0x2631cb68  addiu       $s1, $s1, -0x3498
    ctx->pc = 0x3a931cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953832));
label_3a9320:
    // 0x3a9320: 0xc0f3e3a  jal         func_3CF8E8
label_3a9324:
    if (ctx->pc == 0x3A9324u) {
        ctx->pc = 0x3A9324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9320u;
        // 0x3a9324: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9328u;
        goto label_3a9328;
    }
    ctx->pc = 0x3A9320u;
    SET_GPR_U32(ctx, 31, 0x3A9328u);
    ctx->pc = 0x3A9324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9320u;
    // 0x3a9324: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CF8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CF8E8u, 0x3A9320u, 0x3A9328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9328u;
label_3a9328:
    // 0x3a9328: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3a9328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3a932c:
    // 0x3a932c: 0x3c100042  lui         $s0, 0x42
    ctx->pc = 0x3a932cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)66 << 16));
label_3a9330:
    // 0x3a9330: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3a9330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a9334:
    // 0x3a9334: 0xc0e8eb2  jal         func_3A3AC8
label_3a9338:
    if (ctx->pc == 0x3A9338u) {
        ctx->pc = 0x3A9338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9334u;
        // 0x3a9338: 0x2610a11c  addiu       $s0, $s0, -0x5EE4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943004));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A933Cu;
        goto label_3a933c;
    }
    ctx->pc = 0x3A9334u;
    SET_GPR_U32(ctx, 31, 0x3A933Cu);
    ctx->pc = 0x3A9338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9334u;
    // 0x3a9338: 0x2610a11c  addiu       $s0, $s0, -0x5EE4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943004));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3AC8u, 0x3A9334u, 0x3A933Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A933Cu;
label_3a933c:
    // 0x3a933c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3a933cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3a9340:
    // 0x3a9340: 0xc0f3e3a  jal         func_3CF8E8
label_3a9344:
    if (ctx->pc == 0x3A9344u) {
        ctx->pc = 0x3A9344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9340u;
        // 0x3a9344: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9348u;
        goto label_3a9348;
    }
    ctx->pc = 0x3A9340u;
    SET_GPR_U32(ctx, 31, 0x3A9348u);
    ctx->pc = 0x3A9344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9340u;
    // 0x3a9344: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CF8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CF8E8u, 0x3A9340u, 0x3A9348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9348u;
label_3a9348:
    // 0x3a9348: 0xc0ea26c  jal         func_3A89B0
label_3a934c:
    if (ctx->pc == 0x3A934Cu) {
        ctx->pc = 0x3A934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9348u;
        // 0x3a934c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9350u;
        goto label_3a9350;
    }
    ctx->pc = 0x3A9348u;
    SET_GPR_U32(ctx, 31, 0x3A9350u);
    ctx->pc = 0x3A934Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9348u;
    // 0x3a934c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A89B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A89B0u, 0x3A9348u, 0x3A9350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9350u;
label_3a9350:
    // 0x3a9350: 0xc0ea48e  jal         func_3A9238
label_3a9354:
    if (ctx->pc == 0x3A9354u) {
        ctx->pc = 0x3A9358u;
        goto label_3a9358;
    }
    ctx->pc = 0x3A9350u;
    SET_GPR_U32(ctx, 31, 0x3A9358u);
    ctx->pc = 0x3A9238u;
    goto label_3a9238;
    ctx->pc = 0x3A9358u;
label_3a9358:
    // 0x3a9358: 0xc0e8f6c  jal         func_3A3DB0
label_3a935c:
    if (ctx->pc == 0x3A935Cu) {
        ctx->pc = 0x3A9360u;
        goto label_3a9360;
    }
    ctx->pc = 0x3A9358u;
    SET_GPR_U32(ctx, 31, 0x3A9360u);
    ctx->pc = 0x3A3DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3DB0u, 0x3A9358u, 0x3A9360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9360u;
label_3a9360:
    // 0x3a9360: 0xc0eb1c4  jal         func_3AC710
label_3a9364:
    if (ctx->pc == 0x3A9364u) {
        ctx->pc = 0x3A9368u;
        goto label_3a9368;
    }
    ctx->pc = 0x3A9360u;
    SET_GPR_U32(ctx, 31, 0x3A9368u);
    ctx->pc = 0x3AC710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC710u, 0x3A9360u, 0x3A9368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9368u;
label_3a9368:
    // 0x3a9368: 0xc0eb0dc  jal         func_3AC370
label_3a936c:
    if (ctx->pc == 0x3A936Cu) {
        ctx->pc = 0x3A9370u;
        goto label_3a9370;
    }
    ctx->pc = 0x3A9368u;
    SET_GPR_U32(ctx, 31, 0x3A9370u);
    ctx->pc = 0x3AC370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC370u, 0x3A9368u, 0x3A9370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9370u;
label_3a9370:
    // 0x3a9370: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a9370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a9374:
    // 0x3a9374: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a9374u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3a9378:
    // 0x3a9378: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a9378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a937c:
    // 0x3a937c: 0x3e00008  jr          $ra
label_3a9380:
    if (ctx->pc == 0x3A9380u) {
        ctx->pc = 0x3A9380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A937Cu;
        // 0x3a9380: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9384u;
        goto label_3a9384;
    }
    ctx->pc = 0x3A937Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A937Cu;
        // 0x3a9380: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A937Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9384u;
label_3a9384:
    // 0x3a9384: 0x0  nop
    ctx->pc = 0x3a9384u;
    // NOP
label_3a9388:
    // 0x3a9388: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3a9388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3a938c:
    // 0x3a938c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a938cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a9390:
    // 0x3a9390: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3a9390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_3a9394:
    // 0x3a9394: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a9394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a9398:
    // 0x3a9398: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3a9398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_3a939c:
    // 0x3a939c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3a939cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a93a0:
    // 0x3a93a0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x3a93a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_3a93a4:
    // 0x3a93a4: 0x2453c528  addiu       $s3, $v0, -0x3AD8
    ctx->pc = 0x3a93a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952232));
label_3a93a8:
    // 0x3a93a8: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x3a93a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_3a93ac:
    // 0x3a93ac: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3a93acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_3a93b0:
    // 0x3a93b0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3a93b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_3a93b4:
    // 0x3a93b4: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x3a93b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_3a93b8:
    // 0x3a93b8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x3a93b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_3a93bc:
    // 0x3a93bc: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x3a93bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3a93c0:
    // 0x3a93c0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3a93c4:
    if (ctx->pc == 0x3A93C4u) {
        ctx->pc = 0x3A93C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A93C0u;
        // 0x3a93c4: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A93C8u;
        goto label_3a93c8;
    }
    ctx->pc = 0x3A93C0u;
    {
        const bool branch_taken_0x3a93c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A93C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A93C0u;
        // 0x3a93c4: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a93c0) {
            ctx->pc = 0x3A93F4u;
            goto label_3a93f4;
        }
    }
    ctx->pc = 0x3A93C8u;
label_3a93c8:
    // 0x3a93c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a93c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a93cc:
    // 0x3a93cc: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x3a93ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a93d0:
    // 0x3a93d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a93d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3a93d4:
    // 0x3a93d4: 0x24840064  addiu       $a0, $a0, 0x64
    ctx->pc = 0x3a93d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
label_3a93d8:
    // 0x3a93d8: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x3a93d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_3a93dc:
    // 0x3a93dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3a93e0:
    if (ctx->pc == 0x3A93E0u) {
        ctx->pc = 0x3A93E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A93DCu;
        // 0x3a93e0: 0x24630064  addiu       $v1, $v1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A93E4u;
        goto label_3a93e4;
    }
    ctx->pc = 0x3A93DCu;
    {
        const bool branch_taken_0x3a93dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A93E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A93DCu;
        // 0x3a93e0: 0x24630064  addiu       $v1, $v1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a93dc) {
            ctx->pc = 0x3A93F4u;
            goto label_3a93f4;
        }
    }
    ctx->pc = 0x3A93E4u;
label_3a93e4:
    // 0x3a93e4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3a93e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3a93e8:
    // 0x3a93e8: 0x0  nop
    ctx->pc = 0x3a93e8u;
    // NOP
label_3a93ec:
    // 0x3a93ec: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_3a93f0:
    if (ctx->pc == 0x3A93F0u) {
        ctx->pc = 0x3A93F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A93ECu;
        // 0x3a93f0: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A93F4u;
        goto label_3a93f4;
    }
    ctx->pc = 0x3A93ECu;
    {
        const bool branch_taken_0x3a93ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A93F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A93ECu;
        // 0x3a93f0: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a93ec) {
            ctx->pc = 0x3A93D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a93d0;
        }
    }
    ctx->pc = 0x3A93F4u;
label_3a93f4:
    // 0x3a93f4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3a93f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3a93f8:
    // 0x3a93f8: 0x122300cd  beq         $s1, $v1, . + 4 + (0xCD << 2)
label_3a93fc:
    if (ctx->pc == 0x3A93FCu) {
        ctx->pc = 0x3A93FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A93F8u;
        // 0x3a93fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9400u;
        goto label_3a9400;
    }
    ctx->pc = 0x3A93F8u;
    {
        const bool branch_taken_0x3a93f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A93FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A93F8u;
        // 0x3a93fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a93f8) {
            ctx->pc = 0x3A9730u;
            goto label_3a9730;
        }
    }
    ctx->pc = 0x3A9400u;
label_3a9400:
    // 0x3a9400: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a9404:
    // 0x3a9404: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a9404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a9408:
    // 0x3a9408: 0x8c44a0d0  lw          $a0, -0x5F30($v0)
    ctx->pc = 0x3a9408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942928)));
label_3a940c:
    // 0x3a940c: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_3a9410:
    if (ctx->pc == 0x3A9410u) {
        ctx->pc = 0x3A9410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A940Cu;
        // 0x3a9410: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9414u;
        goto label_3a9414;
    }
    ctx->pc = 0x3A940Cu;
    {
        const bool branch_taken_0x3a940c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a940c) {
            ctx->pc = 0x3A9410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A940Cu;
            // 0x3a9410: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9430u;
            goto label_3a9430;
        }
    }
    ctx->pc = 0x3A9414u;
label_3a9414:
    // 0x3a9414: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a9418:
    // 0x3a9418: 0x8c43a0c8  lw          $v1, -0x5F38($v0)
    ctx->pc = 0x3a9418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942920)));
label_3a941c:
    // 0x3a941c: 0x5c600004  bgtzl       $v1, . + 4 + (0x4 << 2)
label_3a9420:
    if (ctx->pc == 0x3A9420u) {
        ctx->pc = 0x3A9420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A941Cu;
        // 0x3a9420: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9424u;
        goto label_3a9424;
    }
    ctx->pc = 0x3A941Cu;
    {
        const bool branch_taken_0x3a941c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x3a941c) {
            ctx->pc = 0x3A9420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A941Cu;
            // 0x3a9420: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9430u;
            goto label_3a9430;
        }
    }
    ctx->pc = 0x3A9424u;
label_3a9424:
    // 0x3a9424: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x3a9424u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
label_3a9428:
    // 0x3a9428: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_3a942c:
    if (ctx->pc == 0x3A942Cu) {
        ctx->pc = 0x3A942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9428u;
        // 0x3a942c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9430u;
        goto label_3a9430;
    }
    ctx->pc = 0x3A9428u;
    {
        const bool branch_taken_0x3a9428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9428u;
        // 0x3a942c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9428) {
            ctx->pc = 0x3A9730u;
            goto label_3a9730;
        }
    }
    ctx->pc = 0x3A9430u;
label_3a9430:
    // 0x3a9430: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a9430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a9434:
    // 0x3a9434: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x3a9434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_3a9438:
    // 0x3a9438: 0xc0efab3  jal         func_3BEACC
label_3a943c:
    if (ctx->pc == 0x3A943Cu) {
        ctx->pc = 0x3A943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9438u;
        // 0x3a943c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9440u;
        goto label_3a9440;
    }
    ctx->pc = 0x3A9438u;
    SET_GPR_U32(ctx, 31, 0x3A9440u);
    ctx->pc = 0x3A943Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9438u;
    // 0x3a943c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3A9438u, 0x3A9440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9440u;
label_3a9440:
    // 0x3a9440: 0x1a40001f  blez        $s2, . + 4 + (0x1F << 2)
label_3a9444:
    if (ctx->pc == 0x3A9444u) {
        ctx->pc = 0x3A9444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9440u;
        // 0x3a9444: 0xae720004  sw          $s2, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9448u;
        goto label_3a9448;
    }
    ctx->pc = 0x3A9440u;
    {
        const bool branch_taken_0x3a9440 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x3A9444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9440u;
        // 0x3a9444: 0xae720004  sw          $s2, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9440) {
            ctx->pc = 0x3A94C0u;
            goto label_3a94c0;
        }
    }
    ctx->pc = 0x3A9448u;
label_3a9448:
    // 0x3a9448: 0x26740008  addiu       $s4, $s3, 0x8
    ctx->pc = 0x3a9448u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_3a944c:
    // 0x3a944c: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x3a944cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
label_3a9450:
    // 0x3a9450: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3a9450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a9454:
    // 0x3a9454: 0x0  nop
    ctx->pc = 0x3a9454u;
    // NOP
label_3a9458:
    // 0x3a9458: 0xc0ea2a4  jal         func_3A8A90
label_3a945c:
    if (ctx->pc == 0x3A945Cu) {
        ctx->pc = 0x3A9460u;
        goto label_3a9460;
    }
    ctx->pc = 0x3A9458u;
    SET_GPR_U32(ctx, 31, 0x3A9460u);
    ctx->pc = 0x3A8A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8A90u, 0x3A9458u, 0x3A9460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9460u;
label_3a9460:
    // 0x3a9460: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3a9460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3a9464:
    // 0x3a9464: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_3a9468:
    if (ctx->pc == 0x3A9468u) {
        ctx->pc = 0x3A9468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9464u;
        // 0x3a9468: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A946Cu;
        goto label_3a946c;
    }
    ctx->pc = 0x3A9464u;
    {
        const bool branch_taken_0x3a9464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9464u;
        // 0x3a9468: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9464) {
            ctx->pc = 0x3A94B0u;
            goto label_3a94b0;
        }
    }
    ctx->pc = 0x3A946Cu;
label_3a946c:
    // 0x3a946c: 0xc0e5ebe  jal         func_397AF8
label_3a9470:
    if (ctx->pc == 0x3A9470u) {
        ctx->pc = 0x3A9470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A946Cu;
        // 0x3a9470: 0x26a4eae8  addiu       $a0, $s5, -0x1518 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9474u;
        goto label_3a9474;
    }
    ctx->pc = 0x3A946Cu;
    SET_GPR_U32(ctx, 31, 0x3A9474u);
    ctx->pc = 0x3A9470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A946Cu;
    // 0x3a9470: 0x26a4eae8  addiu       $a0, $s5, -0x1518 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A946Cu, 0x3A9474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9474u;
label_3a9474:
    // 0x3a9474: 0x1a4000ae  blez        $s2, . + 4 + (0xAE << 2)
label_3a9478:
    if (ctx->pc == 0x3A9478u) {
        ctx->pc = 0x3A9478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9474u;
        // 0x3a9478: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A947Cu;
        goto label_3a947c;
    }
    ctx->pc = 0x3A9474u;
    {
        const bool branch_taken_0x3a9474 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x3A9478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9474u;
        // 0x3a9478: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9474) {
            ctx->pc = 0x3A9730u;
            goto label_3a9730;
        }
    }
    ctx->pc = 0x3A947Cu;
label_3a947c:
    // 0x3a947c: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x3a947cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a9480:
    // 0x3a9480: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x3a9480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a9484:
    // 0x3a9484: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3a9484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a9488:
    // 0x3a9488: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3a9488u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3a948c:
    // 0x3a948c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3a9490:
    if (ctx->pc == 0x3A9490u) {
        ctx->pc = 0x3A9490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A948Cu;
        // 0x3a9490: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9494u;
        goto label_3a9494;
    }
    ctx->pc = 0x3A948Cu;
    {
        const bool branch_taken_0x3a948c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A948Cu;
        // 0x3a9490: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a948c) {
            ctx->pc = 0x3A949Cu;
            goto label_3a949c;
        }
    }
    ctx->pc = 0x3A9494u;
label_3a9494:
    // 0x3a9494: 0xc0ea2c2  jal         func_3A8B08
label_3a9498:
    if (ctx->pc == 0x3A9498u) {
        ctx->pc = 0x3A949Cu;
        goto label_3a949c;
    }
    ctx->pc = 0x3A9494u;
    SET_GPR_U32(ctx, 31, 0x3A949Cu);
    ctx->pc = 0x3A8B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8B08u, 0x3A9494u, 0x3A949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A949Cu;
label_3a949c:
    // 0x3a949c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3a949cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3a94a0:
    // 0x3a94a0: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
label_3a94a4:
    if (ctx->pc == 0x3A94A4u) {
        ctx->pc = 0x3A94A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94A0u;
        // 0x3a94a4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A94A8u;
        goto label_3a94a8;
    }
    ctx->pc = 0x3A94A0u;
    {
        const bool branch_taken_0x3a94a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a94a0) {
            ctx->pc = 0x3A94A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A94A0u;
            // 0x3a94a4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9488;
        }
    }
    ctx->pc = 0x3A94A8u;
label_3a94a8:
    // 0x3a94a8: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_3a94ac:
    if (ctx->pc == 0x3A94ACu) {
        ctx->pc = 0x3A94ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94A8u;
        // 0x3a94ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A94B0u;
        goto label_3a94b0;
    }
    ctx->pc = 0x3A94A8u;
    {
        const bool branch_taken_0x3a94a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A94ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94A8u;
        // 0x3a94ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a94a8) {
            ctx->pc = 0x3A9730u;
            goto label_3a9730;
        }
    }
    ctx->pc = 0x3A94B0u;
label_3a94b0:
    // 0x3a94b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a94b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3a94b4:
    // 0x3a94b4: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x3a94b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_3a94b8:
    // 0x3a94b8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_3a94bc:
    if (ctx->pc == 0x3A94BCu) {
        ctx->pc = 0x3A94C0u;
        goto label_3a94c0;
    }
    ctx->pc = 0x3A94B8u;
    {
        const bool branch_taken_0x3a94b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a94b8) {
            ctx->pc = 0x3A9458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9458;
        }
    }
    ctx->pc = 0x3A94C0u;
label_3a94c0:
    // 0x3a94c0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a94c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a94c4:
    // 0x3a94c4: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x3a94c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_3a94c8:
    // 0x3a94c8: 0x2446a110  addiu       $a2, $v0, -0x5EF0
    ctx->pc = 0x3a94c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942992));
label_3a94cc:
    // 0x3a94cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a94ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a94d0:
    // 0x3a94d0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x3a94d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3a94d4:
    // 0x3a94d4: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
label_3a94d8:
    if (ctx->pc == 0x3A94D8u) {
        ctx->pc = 0x3A94D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94D4u;
        // 0x3a94d8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A94DCu;
        goto label_3a94dc;
    }
    ctx->pc = 0x3A94D4u;
    {
        const bool branch_taken_0x3a94d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A94D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94D4u;
        // 0x3a94d8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a94d4) {
            ctx->pc = 0x3A94ECu;
            goto label_3a94ec;
        }
    }
    ctx->pc = 0x3A94DCu;
label_3a94dc:
    // 0x3a94dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a94dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a94e0:
    // 0x3a94e0: 0x8c43a0f8  lw          $v1, -0x5F08($v0)
    ctx->pc = 0x3a94e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942968)));
label_3a94e4:
    // 0x3a94e4: 0x54640006  bnel        $v1, $a0, . + 4 + (0x6 << 2)
label_3a94e8:
    if (ctx->pc == 0x3A94E8u) {
        ctx->pc = 0x3A94E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94E4u;
        // 0x3a94e8: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A94ECu;
        goto label_3a94ec;
    }
    ctx->pc = 0x3A94E4u;
    {
        const bool branch_taken_0x3a94e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3a94e4) {
            ctx->pc = 0x3A94E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A94E4u;
            // 0x3a94e8: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9500u;
            goto label_3a9500;
        }
    }
    ctx->pc = 0x3A94ECu;
label_3a94ec:
    // 0x3a94ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a94ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a94f0:
    // 0x3a94f0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3a94f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_3a94f4:
    // 0x3a94f4: 0xa2620057  sb          $v0, 0x57($s3)
    ctx->pc = 0x3a94f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 87), (uint8_t)GPR_U32(ctx, 2));
label_3a94f8:
    // 0x3a94f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a94fc:
    if (ctx->pc == 0x3A94FCu) {
        ctx->pc = 0x3A94FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94F8u;
        // 0x3a94fc: 0xa2620056  sb          $v0, 0x56($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 86), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9500u;
        goto label_3a9500;
    }
    ctx->pc = 0x3A94F8u;
    {
        const bool branch_taken_0x3a94f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A94FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94F8u;
        // 0x3a94fc: 0xa2620056  sb          $v0, 0x56($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 86), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a94f8) {
            ctx->pc = 0x3A9510u;
            goto label_3a9510;
        }
    }
    ctx->pc = 0x3A9500u;
label_3a9500:
    // 0x3a9500: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x3a9500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_3a9504:
    // 0x3a9504: 0xa2630056  sb          $v1, 0x56($s3)
    ctx->pc = 0x3a9504u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 86), (uint8_t)GPR_U32(ctx, 3));
label_3a9508:
    // 0x3a9508: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3a9508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3a950c:
    // 0x3a950c: 0xa2620057  sb          $v0, 0x57($s3)
    ctx->pc = 0x3a950cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 87), (uint8_t)GPR_U32(ctx, 2));
label_3a9510:
    // 0x3a9510: 0x1a40000b  blez        $s2, . + 4 + (0xB << 2)
label_3a9514:
    if (ctx->pc == 0x3A9514u) {
        ctx->pc = 0x3A9514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9510u;
        // 0x3a9514: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9518u;
        goto label_3a9518;
    }
    ctx->pc = 0x3A9510u;
    {
        const bool branch_taken_0x3a9510 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x3A9514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9510u;
        // 0x3a9514: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9510) {
            ctx->pc = 0x3A9540u;
            goto label_3a9540;
        }
    }
    ctx->pc = 0x3A9518u;
label_3a9518:
    // 0x3a9518: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x3a9518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_3a951c:
    // 0x3a951c: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x3a951cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_3a9520:
    // 0x3a9520: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3a9520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3a9524:
    // 0x3a9524: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3a9524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3a9528:
    // 0x3a9528: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a9528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3a952c:
    // 0x3a952c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3a952cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3a9530:
    // 0x3a9530: 0x232202a  slt         $a0, $s1, $s2
    ctx->pc = 0x3a9530u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_3a9534:
    // 0x3a9534: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x3a9534u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_3a9538:
    // 0x3a9538: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_3a953c:
    if (ctx->pc == 0x3A953Cu) {
        ctx->pc = 0x3A953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9538u;
        // 0x3a953c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9540u;
        goto label_3a9540;
    }
    ctx->pc = 0x3A9538u;
    {
        const bool branch_taken_0x3a9538 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9538u;
        // 0x3a953c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9538) {
            ctx->pc = 0x3A9520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9520;
        }
    }
    ctx->pc = 0x3A9540u;
label_3a9540:
    // 0x3a9540: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3a9540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3a9544:
    // 0x3a9544: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a9544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a9548:
    // 0x3a9548: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3a9548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a954c:
    // 0x3a954c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x3a954cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3a9550:
    // 0x3a9550: 0xc0e8f8a  jal         func_3A3E28
label_3a9554:
    if (ctx->pc == 0x3A9554u) {
        ctx->pc = 0x3A9554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9550u;
        // 0x3a9554: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9558u;
        goto label_3a9558;
    }
    ctx->pc = 0x3A9550u;
    SET_GPR_U32(ctx, 31, 0x3A9558u);
    ctx->pc = 0x3A9554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9550u;
    // 0x3a9554: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3E28u, 0x3A9550u, 0x3A9558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9558u;
label_3a9558:
    // 0x3a9558: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3a955c:
    if (ctx->pc == 0x3A955Cu) {
        ctx->pc = 0x3A955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9558u;
        // 0x3a955c: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9560u;
        goto label_3a9560;
    }
    ctx->pc = 0x3A9558u;
    {
        const bool branch_taken_0x3a9558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9558u;
        // 0x3a955c: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9558) {
            ctx->pc = 0x3A9578u;
            goto label_3a9578;
        }
    }
    ctx->pc = 0x3A9560u;
label_3a9560:
    // 0x3a9560: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a9560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3a9564:
    // 0x3a9564: 0xc0e5ebe  jal         func_397AF8
label_3a9568:
    if (ctx->pc == 0x3A9568u) {
        ctx->pc = 0x3A9568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9564u;
        // 0x3a9568: 0x2484eb10  addiu       $a0, $a0, -0x14F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A956Cu;
        goto label_3a956c;
    }
    ctx->pc = 0x3A9564u;
    SET_GPR_U32(ctx, 31, 0x3A956Cu);
    ctx->pc = 0x3A9568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9564u;
    // 0x3a9568: 0x2484eb10  addiu       $a0, $a0, -0x14F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A9564u, 0x3A956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A956Cu;
label_3a956c:
    // 0x3a956c: 0x10000070  b           . + 4 + (0x70 << 2)
label_3a9570:
    if (ctx->pc == 0x3A9570u) {
        ctx->pc = 0x3A9570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A956Cu;
        // 0x3a9570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9574u;
        goto label_3a9574;
    }
    ctx->pc = 0x3A956Cu;
    {
        const bool branch_taken_0x3a956c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A956Cu;
        // 0x3a9570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a956c) {
            ctx->pc = 0x3A9730u;
            goto label_3a9730;
        }
    }
    ctx->pc = 0x3A9574u;
label_3a9574:
    // 0x3a9574: 0x0  nop
    ctx->pc = 0x3a9574u;
    // NOP
label_3a9578:
    // 0x3a9578: 0x1a400035  blez        $s2, . + 4 + (0x35 << 2)
label_3a957c:
    if (ctx->pc == 0x3A957Cu) {
        ctx->pc = 0x3A957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9578u;
        // 0x3a957c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9580u;
        goto label_3a9580;
    }
    ctx->pc = 0x3A9578u;
    {
        const bool branch_taken_0x3a9578 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x3A957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9578u;
        // 0x3a957c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9578) {
            ctx->pc = 0x3A9650u;
            goto label_3a9650;
        }
    }
    ctx->pc = 0x3A9580u;
label_3a9580:
    // 0x3a9580: 0x26740008  addiu       $s4, $s3, 0x8
    ctx->pc = 0x3a9580u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_3a9584:
    // 0x3a9584: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x3a9584u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
label_3a9588:
    // 0x3a9588: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x3a9588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_3a958c:
    // 0x3a958c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x3a958cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3a9590:
    // 0x3a9590: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a9590u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3a9594:
    // 0x3a9594: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x3a9594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3a9598:
    // 0x3a9598: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x3a9598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_3a959c:
    // 0x3a959c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x3a959cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3a95a0:
    // 0x3a95a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a95a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a95a4:
    // 0x3a95a4: 0xc0ecd44  jal         func_3B3510
label_3a95a8:
    if (ctx->pc == 0x3A95A8u) {
        ctx->pc = 0x3A95A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A95A4u;
        // 0x3a95a8: 0x8cc50008  lw          $a1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A95ACu;
        goto label_3a95ac;
    }
    ctx->pc = 0x3A95A4u;
    SET_GPR_U32(ctx, 31, 0x3A95ACu);
    ctx->pc = 0x3A95A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A95A4u;
    // 0x3a95a8: 0x8cc50008  lw          $a1, 0x8($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3510u, 0x3A95A4u, 0x3A95ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A95ACu;
label_3a95ac:
    // 0x3a95ac: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x3a95acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_3a95b0:
    // 0x3a95b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3a95b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3a95b4:
    // 0x3a95b4: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_3a95b8:
    if (ctx->pc == 0x3A95B8u) {
        ctx->pc = 0x3A95B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A95B4u;
        // 0x3a95b8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A95BCu;
        goto label_3a95bc;
    }
    ctx->pc = 0x3A95B4u;
    {
        const bool branch_taken_0x3a95b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A95B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A95B4u;
        // 0x3a95b8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a95b4) {
            ctx->pc = 0x3A9648u;
            goto label_3a9648;
        }
    }
    ctx->pc = 0x3A95BCu;
label_3a95bc:
    // 0x3a95bc: 0x26a4eb38  addiu       $a0, $s5, -0x14C8
    ctx->pc = 0x3a95bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961976));
label_3a95c0:
    // 0x3a95c0: 0xc0e5ebe  jal         func_397AF8
label_3a95c4:
    if (ctx->pc == 0x3A95C4u) {
        ctx->pc = 0x3A95C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A95C0u;
        // 0x3a95c4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A95C8u;
        goto label_3a95c8;
    }
    ctx->pc = 0x3A95C0u;
    SET_GPR_U32(ctx, 31, 0x3A95C8u);
    ctx->pc = 0x3A95C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A95C0u;
    // 0x3a95c4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A95C0u, 0x3A95C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A95C8u;
label_3a95c8:
    // 0x3a95c8: 0x1a400059  blez        $s2, . + 4 + (0x59 << 2)
label_3a95cc:
    if (ctx->pc == 0x3A95CCu) {
        ctx->pc = 0x3A95CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A95C8u;
        // 0x3a95cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A95D0u;
        goto label_3a95d0;
    }
    ctx->pc = 0x3A95C8u;
    {
        const bool branch_taken_0x3a95c8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x3A95CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A95C8u;
        // 0x3a95cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a95c8) {
            ctx->pc = 0x3A9730u;
            goto label_3a9730;
        }
    }
    ctx->pc = 0x3A95D0u;
label_3a95d0:
    // 0x3a95d0: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x3a95d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a95d4:
    // 0x3a95d4: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x3a95d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_3a95d8:
    // 0x3a95d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a95dc:
    // 0x3a95dc: 0x0  nop
    ctx->pc = 0x3a95dcu;
    // NOP
label_3a95e0:
    // 0x3a95e0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3a95e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3a95e4:
    // 0x3a95e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3a95e8:
    if (ctx->pc == 0x3A95E8u) {
        ctx->pc = 0x3A95E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A95E4u;
        // 0x3a95e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A95ECu;
        goto label_3a95ec;
    }
    ctx->pc = 0x3A95E4u;
    {
        const bool branch_taken_0x3a95e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A95E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A95E4u;
        // 0x3a95e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a95e4) {
            ctx->pc = 0x3A95F4u;
            goto label_3a95f4;
        }
    }
    ctx->pc = 0x3A95ECu;
label_3a95ec:
    // 0x3a95ec: 0xc0ecd80  jal         func_3B3600
label_3a95f0:
    if (ctx->pc == 0x3A95F0u) {
        ctx->pc = 0x3A95F4u;
        goto label_3a95f4;
    }
    ctx->pc = 0x3A95ECu;
    SET_GPR_U32(ctx, 31, 0x3A95F4u);
    ctx->pc = 0x3B3600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3600u, 0x3A95ECu, 0x3A95F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A95F4u;
label_3a95f4:
    // 0x3a95f4: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x3a95f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_3a95f8:
    // 0x3a95f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3a95fc:
    if (ctx->pc == 0x3A95FCu) {
        ctx->pc = 0x3A95FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A95F8u;
        // 0x3a95fc: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9600u;
        goto label_3a9600;
    }
    ctx->pc = 0x3A95F8u;
    {
        const bool branch_taken_0x3a95f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A95FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A95F8u;
        // 0x3a95fc: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a95f8) {
            ctx->pc = 0x3A9618u;
            goto label_3a9618;
        }
    }
    ctx->pc = 0x3A9600u;
label_3a9600:
    // 0x3a9600: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a9600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a9604:
    // 0x3a9604: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3a9604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a9608:
    // 0x3a9608: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a9608u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a960c:
    // 0x3a960c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a960cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a9610:
    // 0x3a9610: 0xc0e8f8a  jal         func_3A3E28
label_3a9614:
    if (ctx->pc == 0x3A9614u) {
        ctx->pc = 0x3A9614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9610u;
        // 0x3a9614: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9618u;
        goto label_3a9618;
    }
    ctx->pc = 0x3A9610u;
    SET_GPR_U32(ctx, 31, 0x3A9618u);
    ctx->pc = 0x3A9614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9610u;
    // 0x3a9614: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3E28u, 0x3A9610u, 0x3A9618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9618u;
label_3a9618:
    // 0x3a9618: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3a9618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a961c:
    // 0x3a961c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3a9620:
    if (ctx->pc == 0x3A9620u) {
        ctx->pc = 0x3A9620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A961Cu;
        // 0x3a9620: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9624u;
        goto label_3a9624;
    }
    ctx->pc = 0x3A961Cu;
    {
        const bool branch_taken_0x3a961c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A961Cu;
        // 0x3a9620: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a961c) {
            ctx->pc = 0x3A962Cu;
            goto label_3a962c;
        }
    }
    ctx->pc = 0x3A9624u;
label_3a9624:
    // 0x3a9624: 0xc0ea2c2  jal         func_3A8B08
label_3a9628:
    if (ctx->pc == 0x3A9628u) {
        ctx->pc = 0x3A962Cu;
        goto label_3a962c;
    }
    ctx->pc = 0x3A9624u;
    SET_GPR_U32(ctx, 31, 0x3A962Cu);
    ctx->pc = 0x3A8B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8B08u, 0x3A9624u, 0x3A962Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A962Cu;
label_3a962c:
    // 0x3a962c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3a962cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3a9630:
    // 0x3a9630: 0x2b2102a  slt         $v0, $s5, $s2
    ctx->pc = 0x3a9630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_3a9634:
    // 0x3a9634: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
label_3a9638:
    if (ctx->pc == 0x3A9638u) {
        ctx->pc = 0x3A9638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9634u;
        // 0x3a9638: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A963Cu;
        goto label_3a963c;
    }
    ctx->pc = 0x3A9634u;
    {
        const bool branch_taken_0x3a9634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a9634) {
            ctx->pc = 0x3A9638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9634u;
            // 0x3a9638: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A95E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a95e0;
        }
    }
    ctx->pc = 0x3A963Cu;
label_3a963c:
    // 0x3a963c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_3a9640:
    if (ctx->pc == 0x3A9640u) {
        ctx->pc = 0x3A9640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A963Cu;
        // 0x3a9640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9644u;
        goto label_3a9644;
    }
    ctx->pc = 0x3A963Cu;
    {
        const bool branch_taken_0x3a963c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A963Cu;
        // 0x3a9640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a963c) {
            ctx->pc = 0x3A9730u;
            goto label_3a9730;
        }
    }
    ctx->pc = 0x3A9644u;
label_3a9644:
    // 0x3a9644: 0x0  nop
    ctx->pc = 0x3a9644u;
    // NOP
label_3a9648:
    // 0x3a9648: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
label_3a964c:
    if (ctx->pc == 0x3A964Cu) {
        ctx->pc = 0x3A964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9648u;
        // 0x3a964c: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9650u;
        goto label_3a9650;
    }
    ctx->pc = 0x3A9648u;
    {
        const bool branch_taken_0x3a9648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9648u;
        // 0x3a964c: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9648) {
            ctx->pc = 0x3A9590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9590;
        }
    }
    ctx->pc = 0x3A9650u;
label_3a9650:
    // 0x3a9650: 0x1a40000a  blez        $s2, . + 4 + (0xA << 2)
label_3a9654:
    if (ctx->pc == 0x3A9654u) {
        ctx->pc = 0x3A9654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9650u;
        // 0x3a9654: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9658u;
        goto label_3a9658;
    }
    ctx->pc = 0x3A9650u;
    {
        const bool branch_taken_0x3a9650 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x3A9654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9650u;
        // 0x3a9654: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9650) {
            ctx->pc = 0x3A967Cu;
            goto label_3a967c;
        }
    }
    ctx->pc = 0x3A9658u;
label_3a9658:
    // 0x3a9658: 0x26650018  addiu       $a1, $s3, 0x18
    ctx->pc = 0x3a9658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_3a965c:
    // 0x3a965c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3a965cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3a9660:
    // 0x3a9660: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a9660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a9664:
    // 0x3a9664: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3a9664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3a9668:
    // 0x3a9668: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a9668u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3a966c:
    // 0x3a966c: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x3a966cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_3a9670:
    // 0x3a9670: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3a9670u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_3a9674:
    // 0x3a9674: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3a9678:
    if (ctx->pc == 0x3A9678u) {
        ctx->pc = 0x3A9678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9674u;
        // 0x3a9678: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A967Cu;
        goto label_3a967c;
    }
    ctx->pc = 0x3A9674u;
    {
        const bool branch_taken_0x3a9674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9674u;
        // 0x3a9678: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9674) {
            ctx->pc = 0x3A9660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9660;
        }
    }
    ctx->pc = 0x3A967Cu;
label_3a967c:
    // 0x3a967c: 0xa2600050  sb          $zero, 0x50($s3)
    ctx->pc = 0x3a967cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 80), (uint8_t)GPR_U32(ctx, 0));
label_3a9680:
    // 0x3a9680: 0xa2600051  sb          $zero, 0x51($s3)
    ctx->pc = 0x3a9680u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 81), (uint8_t)GPR_U32(ctx, 0));
label_3a9684:
    // 0x3a9684: 0xa2720052  sb          $s2, 0x52($s3)
    ctx->pc = 0x3a9684u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 82), (uint8_t)GPR_U32(ctx, 18));
label_3a9688:
    // 0x3a9688: 0xa2720053  sb          $s2, 0x53($s3)
    ctx->pc = 0x3a9688u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 83), (uint8_t)GPR_U32(ctx, 18));
label_3a968c:
    // 0x3a968c: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x3a968cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_3a9690:
    // 0x3a9690: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x3a9690u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
label_3a9694:
    // 0x3a9694: 0xa2600054  sb          $zero, 0x54($s3)
    ctx->pc = 0x3a9694u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 84), (uint8_t)GPR_U32(ctx, 0));
label_3a9698:
    // 0x3a9698: 0xa2600055  sb          $zero, 0x55($s3)
    ctx->pc = 0x3a9698u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 85), (uint8_t)GPR_U32(ctx, 0));
label_3a969c:
    // 0x3a969c: 0xa260005b  sb          $zero, 0x5B($s3)
    ctx->pc = 0x3a969cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 91), (uint8_t)GPR_U32(ctx, 0));
label_3a96a0:
    // 0x3a96a0: 0x1a40000c  blez        $s2, . + 4 + (0xC << 2)
label_3a96a4:
    if (ctx->pc == 0x3A96A4u) {
        ctx->pc = 0x3A96A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A96A0u;
        // 0x3a96a4: 0xa260005a  sb          $zero, 0x5A($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 90), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A96A8u;
        goto label_3a96a8;
    }
    ctx->pc = 0x3A96A0u;
    {
        const bool branch_taken_0x3a96a0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x3A96A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A96A0u;
        // 0x3a96a4: 0xa260005a  sb          $zero, 0x5A($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 90), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a96a0) {
            ctx->pc = 0x3A96D4u;
            goto label_3a96d4;
        }
    }
    ctx->pc = 0x3A96A8u;
label_3a96a8:
    // 0x3a96a8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x3a96a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a96ac:
    // 0x3a96ac: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x3a96acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_3a96b0:
    // 0x3a96b0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x3a96b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3a96b4:
    // 0x3a96b4: 0x0  nop
    ctx->pc = 0x3a96b4u;
    // NOP
label_3a96b8:
    // 0x3a96b8: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x3a96b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_3a96bc:
    // 0x3a96bc: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x3a96bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3a96c0:
    // 0x3a96c0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3a96c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3a96c4:
    // 0x3a96c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3a96c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_3a96c8:
    // 0x3a96c8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3a96c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3a96cc:
    // 0x3a96cc: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_3a96d0:
    if (ctx->pc == 0x3A96D0u) {
        ctx->pc = 0x3A96D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A96CCu;
        // 0x3a96d0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A96D4u;
        goto label_3a96d4;
    }
    ctx->pc = 0x3A96CCu;
    {
        const bool branch_taken_0x3a96cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A96D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A96CCu;
        // 0x3a96d0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a96cc) {
            ctx->pc = 0x3A96B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a96b8;
        }
    }
    ctx->pc = 0x3A96D4u;
label_3a96d4:
    // 0x3a96d4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3a96d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a96d8:
    // 0x3a96d8: 0xa2600058  sb          $zero, 0x58($s3)
    ctx->pc = 0x3a96d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 88), (uint8_t)GPR_U32(ctx, 0));
label_3a96dc:
    // 0x3a96dc: 0xa2710059  sb          $s1, 0x59($s3)
    ctx->pc = 0x3a96dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 89), (uint8_t)GPR_U32(ctx, 17));
label_3a96e0:
    // 0x3a96e0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x3a96e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_3a96e4:
    // 0x3a96e4: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x3a96e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3a96e8:
    // 0x3a96e8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x3a96e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_3a96ec:
    // 0x3a96ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a96ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a96f0:
    // 0x3a96f0: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x3a96f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_3a96f4:
    // 0x3a96f4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3a96f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3a96f8:
    // 0x3a96f8: 0x40f809  jalr        $v0
label_3a96fc:
    if (ctx->pc == 0x3A96FCu) {
        ctx->pc = 0x3A96FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A96F8u;
        // 0x3a96fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9700u;
        goto label_3a9700;
    }
    ctx->pc = 0x3A96F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A9700u);
        ctx->pc = 0x3A96FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A96F8u;
        // 0x3a96fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A96F8u, 0x3A9700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A9700u;
label_3a9700:
    // 0x3a9700: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x3a9700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3a9704:
    // 0x3a9704: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a9704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a9708:
    // 0x3a9708: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a9708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a970c:
    // 0x3a970c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3a970cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3a9710:
    // 0x3a9710: 0x40f809  jalr        $v0
label_3a9714:
    if (ctx->pc == 0x3A9714u) {
        ctx->pc = 0x3A9714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9710u;
        // 0x3a9714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9718u;
        goto label_3a9718;
    }
    ctx->pc = 0x3A9710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A9718u);
        ctx->pc = 0x3A9714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9710u;
        // 0x3a9714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9710u, 0x3A9718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A9718u;
label_3a9718:
    // 0x3a9718: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x3a9718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_3a971c:
    // 0x3a971c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3a971cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3a9720:
    // 0x3a9720: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3a9720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a9724:
    // 0x3a9724: 0xae700028  sw          $s0, 0x28($s3)
    ctx->pc = 0x3a9724u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 16));
label_3a9728:
    // 0x3a9728: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x3a9728u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
label_3a972c:
    // 0x3a972c: 0xa2710000  sb          $s1, 0x0($s3)
    ctx->pc = 0x3a972cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 17));
label_3a9730:
    // 0x3a9730: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3a9730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3a9734:
    // 0x3a9734: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3a9734u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3a9738:
    // 0x3a9738: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3a9738u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3a973c:
    // 0x3a973c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x3a973cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3a9740:
    // 0x3a9740: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3a9740u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3a9744:
    // 0x3a9744: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x3a9744u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3a9748:
    // 0x3a9748: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x3a9748u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3a974c:
    // 0x3a974c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x3a974cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_3a9750:
    // 0x3a9750: 0x3e00008  jr          $ra
label_3a9754:
    if (ctx->pc == 0x3A9754u) {
        ctx->pc = 0x3A9754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9750u;
        // 0x3a9754: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9758u;
        goto label_3a9758;
    }
    ctx->pc = 0x3A9750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9750u;
        // 0x3a9754: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9758u;
label_3a9758:
    // 0x3a9758: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a975c:
    // 0x3a975c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a975cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a9760:
    // 0x3a9760: 0x8c43a0d0  lw          $v1, -0x5F30($v0)
    ctx->pc = 0x3a9760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942928)));
label_3a9764:
    // 0x3a9764: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a9764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a9768:
    // 0x3a9768: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3a9768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_3a976c:
    // 0x3a976c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a976cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a9770:
    // 0x3a9770: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3a9770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_3a9774:
    // 0x3a9774: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3a9774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3a9778:
    // 0x3a9778: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_3a977c:
    if (ctx->pc == 0x3A977Cu) {
        ctx->pc = 0x3A977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9778u;
        // 0x3a977c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9780u;
        goto label_3a9780;
    }
    ctx->pc = 0x3A9778u;
    {
        const bool branch_taken_0x3a9778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3A977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9778u;
        // 0x3a977c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9778) {
            ctx->pc = 0x3A9790u;
            goto label_3a9790;
        }
    }
    ctx->pc = 0x3A9780u;
label_3a9780:
    // 0x3a9780: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a9784:
    // 0x3a9784: 0x8c43a0c8  lw          $v1, -0x5F38($v0)
    ctx->pc = 0x3a9784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942920)));
label_3a9788:
    // 0x3a9788: 0x58600027  blezl       $v1, . + 4 + (0x27 << 2)
label_3a978c:
    if (ctx->pc == 0x3A978Cu) {
        ctx->pc = 0x3A978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9788u;
        // 0x3a978c: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9790u;
        goto label_3a9790;
    }
    ctx->pc = 0x3A9788u;
    {
        const bool branch_taken_0x3a9788 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3a9788) {
            ctx->pc = 0x3A978Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9788u;
            // 0x3a978c: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9828u;
            goto label_3a9828;
        }
    }
    ctx->pc = 0x3A9790u;
label_3a9790:
    // 0x3a9790: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3a9790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3a9794:
    // 0x3a9794: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_3a9798:
    if (ctx->pc == 0x3A9798u) {
        ctx->pc = 0x3A9798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9794u;
        // 0x3a9798: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A979Cu;
        goto label_3a979c;
    }
    ctx->pc = 0x3A9794u;
    {
        const bool branch_taken_0x3a9794 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3A9798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9794u;
        // 0x3a9798: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9794) {
            ctx->pc = 0x3A97CCu;
            goto label_3a97cc;
        }
    }
    ctx->pc = 0x3A979Cu;
label_3a979c:
    // 0x3a979c: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x3a979cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3a97a0:
    // 0x3a97a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3a97a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a97a4:
    // 0x3a97a4: 0x0  nop
    ctx->pc = 0x3a97a4u;
    // NOP
label_3a97a8:
    // 0x3a97a8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3a97ac:
    if (ctx->pc == 0x3A97ACu) {
        ctx->pc = 0x3A97ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A97A8u;
        // 0x3a97ac: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A97B0u;
        goto label_3a97b0;
    }
    ctx->pc = 0x3A97A8u;
    {
        const bool branch_taken_0x3a97a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A97ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A97A8u;
        // 0x3a97ac: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a97a8) {
            ctx->pc = 0x3A97BCu;
            goto label_3a97bc;
        }
    }
    ctx->pc = 0x3A97B0u;
label_3a97b0:
    // 0x3a97b0: 0xc0ecd80  jal         func_3B3600
label_3a97b4:
    if (ctx->pc == 0x3A97B4u) {
        ctx->pc = 0x3A97B8u;
        goto label_3a97b8;
    }
    ctx->pc = 0x3A97B0u;
    SET_GPR_U32(ctx, 31, 0x3A97B8u);
    ctx->pc = 0x3B3600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3600u, 0x3A97B0u, 0x3A97B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A97B8u;
label_3a97b8:
    // 0x3a97b8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3a97b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3a97bc:
    // 0x3a97bc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3a97bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3a97c0:
    // 0x3a97c0: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x3a97c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3a97c4:
    // 0x3a97c4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_3a97c8:
    if (ctx->pc == 0x3A97C8u) {
        ctx->pc = 0x3A97C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A97C4u;
        // 0x3a97c8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A97CCu;
        goto label_3a97cc;
    }
    ctx->pc = 0x3A97C4u;
    {
        const bool branch_taken_0x3a97c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a97c4) {
            ctx->pc = 0x3A97C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A97C4u;
            // 0x3a97c8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A97A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a97a8;
        }
    }
    ctx->pc = 0x3A97CCu;
label_3a97cc:
    // 0x3a97cc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x3a97ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3a97d0:
    // 0x3a97d0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x3a97d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3a97d4:
    // 0x3a97d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a97d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a97d8:
    // 0x3a97d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3a97d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a97dc:
    // 0x3a97dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a97dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a97e0:
    // 0x3a97e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a97e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a97e4:
    // 0x3a97e4: 0xc0e8f8a  jal         func_3A3E28
label_3a97e8:
    if (ctx->pc == 0x3A97E8u) {
        ctx->pc = 0x3A97E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A97E4u;
        // 0x3a97e8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A97ECu;
        goto label_3a97ec;
    }
    ctx->pc = 0x3A97E4u;
    SET_GPR_U32(ctx, 31, 0x3A97ECu);
    ctx->pc = 0x3A97E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A97E4u;
    // 0x3a97e8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3E28u, 0x3A97E4u, 0x3A97ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A97ECu;
label_3a97ec:
    // 0x3a97ec: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3a97ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3a97f0:
    // 0x3a97f0: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_3a97f4:
    if (ctx->pc == 0x3A97F4u) {
        ctx->pc = 0x3A97F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A97F0u;
        // 0x3a97f4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A97F8u;
        goto label_3a97f8;
    }
    ctx->pc = 0x3A97F0u;
    {
        const bool branch_taken_0x3a97f0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3A97F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A97F0u;
        // 0x3a97f4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a97f0) {
            ctx->pc = 0x3A9824u;
            goto label_3a9824;
        }
    }
    ctx->pc = 0x3A97F8u;
label_3a97f8:
    // 0x3a97f8: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x3a97f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3a97fc:
    // 0x3a97fc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3a97fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a9800:
    // 0x3a9800: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3a9804:
    if (ctx->pc == 0x3A9804u) {
        ctx->pc = 0x3A9804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9800u;
        // 0x3a9804: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9808u;
        goto label_3a9808;
    }
    ctx->pc = 0x3A9800u;
    {
        const bool branch_taken_0x3a9800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9800u;
        // 0x3a9804: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9800) {
            ctx->pc = 0x3A9814u;
            goto label_3a9814;
        }
    }
    ctx->pc = 0x3A9808u;
label_3a9808:
    // 0x3a9808: 0xc0ea2c2  jal         func_3A8B08
label_3a980c:
    if (ctx->pc == 0x3A980Cu) {
        ctx->pc = 0x3A9810u;
        goto label_3a9810;
    }
    ctx->pc = 0x3A9808u;
    SET_GPR_U32(ctx, 31, 0x3A9810u);
    ctx->pc = 0x3A8B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8B08u, 0x3A9808u, 0x3A9810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9810u;
label_3a9810:
    // 0x3a9810: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3a9810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3a9814:
    // 0x3a9814: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3a9814u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3a9818:
    // 0x3a9818: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x3a9818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3a981c:
    // 0x3a981c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_3a9820:
    if (ctx->pc == 0x3A9820u) {
        ctx->pc = 0x3A9820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A981Cu;
        // 0x3a9820: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9824u;
        goto label_3a9824;
    }
    ctx->pc = 0x3A981Cu;
    {
        const bool branch_taken_0x3a981c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a981c) {
            ctx->pc = 0x3A9820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A981Cu;
            // 0x3a9820: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9800;
        }
    }
    ctx->pc = 0x3A9824u;
label_3a9824:
    // 0x3a9824: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x3a9824u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_3a9828:
    // 0x3a9828: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3a9828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a982c:
    // 0x3a982c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3a982cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3a9830:
    // 0x3a9830: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3a9830u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3a9834:
    // 0x3a9834: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3a9834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3a9838:
    // 0x3a9838: 0x3e00008  jr          $ra
label_3a983c:
    if (ctx->pc == 0x3A983Cu) {
        ctx->pc = 0x3A983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9838u;
        // 0x3a983c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9840u;
        goto label_3a9840;
    }
    ctx->pc = 0x3A9838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9838u;
        // 0x3a983c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9840u;
label_3a9840:
    // 0x3a9840: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a9840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3a9844:
    // 0x3a9844: 0x0  nop
    ctx->pc = 0x3a9844u;
    // NOP
    ctx->pc = 0x3a9848u;
}
