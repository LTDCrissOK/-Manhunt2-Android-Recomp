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

// Function: sub_003AF018
// Address: 0x3af018 - 0x3af820
void sub_003AF018_0x3af018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AF018_0x3af018");
#endif

    switch (ctx->pc) {
        case 0x3af018u: goto label_3af018;
        case 0x3af01cu: goto label_3af01c;
        case 0x3af020u: goto label_3af020;
        case 0x3af024u: goto label_3af024;
        case 0x3af028u: goto label_3af028;
        case 0x3af02cu: goto label_3af02c;
        case 0x3af030u: goto label_3af030;
        case 0x3af034u: goto label_3af034;
        case 0x3af038u: goto label_3af038;
        case 0x3af03cu: goto label_3af03c;
        case 0x3af040u: goto label_3af040;
        case 0x3af044u: goto label_3af044;
        case 0x3af048u: goto label_3af048;
        case 0x3af04cu: goto label_3af04c;
        case 0x3af050u: goto label_3af050;
        case 0x3af054u: goto label_3af054;
        case 0x3af058u: goto label_3af058;
        case 0x3af05cu: goto label_3af05c;
        case 0x3af060u: goto label_3af060;
        case 0x3af064u: goto label_3af064;
        case 0x3af068u: goto label_3af068;
        case 0x3af06cu: goto label_3af06c;
        case 0x3af070u: goto label_3af070;
        case 0x3af074u: goto label_3af074;
        case 0x3af078u: goto label_3af078;
        case 0x3af07cu: goto label_3af07c;
        case 0x3af080u: goto label_3af080;
        case 0x3af084u: goto label_3af084;
        case 0x3af088u: goto label_3af088;
        case 0x3af08cu: goto label_3af08c;
        case 0x3af090u: goto label_3af090;
        case 0x3af094u: goto label_3af094;
        case 0x3af098u: goto label_3af098;
        case 0x3af09cu: goto label_3af09c;
        case 0x3af0a0u: goto label_3af0a0;
        case 0x3af0a4u: goto label_3af0a4;
        case 0x3af0a8u: goto label_3af0a8;
        case 0x3af0acu: goto label_3af0ac;
        case 0x3af0b0u: goto label_3af0b0;
        case 0x3af0b4u: goto label_3af0b4;
        case 0x3af0b8u: goto label_3af0b8;
        case 0x3af0bcu: goto label_3af0bc;
        case 0x3af0c0u: goto label_3af0c0;
        case 0x3af0c4u: goto label_3af0c4;
        case 0x3af0c8u: goto label_3af0c8;
        case 0x3af0ccu: goto label_3af0cc;
        case 0x3af0d0u: goto label_3af0d0;
        case 0x3af0d4u: goto label_3af0d4;
        case 0x3af0d8u: goto label_3af0d8;
        case 0x3af0dcu: goto label_3af0dc;
        case 0x3af0e0u: goto label_3af0e0;
        case 0x3af0e4u: goto label_3af0e4;
        case 0x3af0e8u: goto label_3af0e8;
        case 0x3af0ecu: goto label_3af0ec;
        case 0x3af0f0u: goto label_3af0f0;
        case 0x3af0f4u: goto label_3af0f4;
        case 0x3af0f8u: goto label_3af0f8;
        case 0x3af0fcu: goto label_3af0fc;
        case 0x3af100u: goto label_3af100;
        case 0x3af104u: goto label_3af104;
        case 0x3af108u: goto label_3af108;
        case 0x3af10cu: goto label_3af10c;
        case 0x3af110u: goto label_3af110;
        case 0x3af114u: goto label_3af114;
        case 0x3af118u: goto label_3af118;
        case 0x3af11cu: goto label_3af11c;
        case 0x3af120u: goto label_3af120;
        case 0x3af124u: goto label_3af124;
        case 0x3af128u: goto label_3af128;
        case 0x3af12cu: goto label_3af12c;
        case 0x3af130u: goto label_3af130;
        case 0x3af134u: goto label_3af134;
        case 0x3af138u: goto label_3af138;
        case 0x3af13cu: goto label_3af13c;
        case 0x3af140u: goto label_3af140;
        case 0x3af144u: goto label_3af144;
        case 0x3af148u: goto label_3af148;
        case 0x3af14cu: goto label_3af14c;
        case 0x3af150u: goto label_3af150;
        case 0x3af154u: goto label_3af154;
        case 0x3af158u: goto label_3af158;
        case 0x3af15cu: goto label_3af15c;
        case 0x3af160u: goto label_3af160;
        case 0x3af164u: goto label_3af164;
        case 0x3af168u: goto label_3af168;
        case 0x3af16cu: goto label_3af16c;
        case 0x3af170u: goto label_3af170;
        case 0x3af174u: goto label_3af174;
        case 0x3af178u: goto label_3af178;
        case 0x3af17cu: goto label_3af17c;
        case 0x3af180u: goto label_3af180;
        case 0x3af184u: goto label_3af184;
        case 0x3af188u: goto label_3af188;
        case 0x3af18cu: goto label_3af18c;
        case 0x3af190u: goto label_3af190;
        case 0x3af194u: goto label_3af194;
        case 0x3af198u: goto label_3af198;
        case 0x3af19cu: goto label_3af19c;
        case 0x3af1a0u: goto label_3af1a0;
        case 0x3af1a4u: goto label_3af1a4;
        case 0x3af1a8u: goto label_3af1a8;
        case 0x3af1acu: goto label_3af1ac;
        case 0x3af1b0u: goto label_3af1b0;
        case 0x3af1b4u: goto label_3af1b4;
        case 0x3af1b8u: goto label_3af1b8;
        case 0x3af1bcu: goto label_3af1bc;
        case 0x3af1c0u: goto label_3af1c0;
        case 0x3af1c4u: goto label_3af1c4;
        case 0x3af1c8u: goto label_3af1c8;
        case 0x3af1ccu: goto label_3af1cc;
        case 0x3af1d0u: goto label_3af1d0;
        case 0x3af1d4u: goto label_3af1d4;
        case 0x3af1d8u: goto label_3af1d8;
        case 0x3af1dcu: goto label_3af1dc;
        case 0x3af1e0u: goto label_3af1e0;
        case 0x3af1e4u: goto label_3af1e4;
        case 0x3af1e8u: goto label_3af1e8;
        case 0x3af1ecu: goto label_3af1ec;
        case 0x3af1f0u: goto label_3af1f0;
        case 0x3af1f4u: goto label_3af1f4;
        case 0x3af1f8u: goto label_3af1f8;
        case 0x3af1fcu: goto label_3af1fc;
        case 0x3af200u: goto label_3af200;
        case 0x3af204u: goto label_3af204;
        case 0x3af208u: goto label_3af208;
        case 0x3af20cu: goto label_3af20c;
        case 0x3af210u: goto label_3af210;
        case 0x3af214u: goto label_3af214;
        case 0x3af218u: goto label_3af218;
        case 0x3af21cu: goto label_3af21c;
        case 0x3af220u: goto label_3af220;
        case 0x3af224u: goto label_3af224;
        case 0x3af228u: goto label_3af228;
        case 0x3af22cu: goto label_3af22c;
        case 0x3af230u: goto label_3af230;
        case 0x3af234u: goto label_3af234;
        case 0x3af238u: goto label_3af238;
        case 0x3af23cu: goto label_3af23c;
        case 0x3af240u: goto label_3af240;
        case 0x3af244u: goto label_3af244;
        case 0x3af248u: goto label_3af248;
        case 0x3af24cu: goto label_3af24c;
        case 0x3af250u: goto label_3af250;
        case 0x3af254u: goto label_3af254;
        case 0x3af258u: goto label_3af258;
        case 0x3af25cu: goto label_3af25c;
        case 0x3af260u: goto label_3af260;
        case 0x3af264u: goto label_3af264;
        case 0x3af268u: goto label_3af268;
        case 0x3af26cu: goto label_3af26c;
        case 0x3af270u: goto label_3af270;
        case 0x3af274u: goto label_3af274;
        case 0x3af278u: goto label_3af278;
        case 0x3af27cu: goto label_3af27c;
        case 0x3af280u: goto label_3af280;
        case 0x3af284u: goto label_3af284;
        case 0x3af288u: goto label_3af288;
        case 0x3af28cu: goto label_3af28c;
        case 0x3af290u: goto label_3af290;
        case 0x3af294u: goto label_3af294;
        case 0x3af298u: goto label_3af298;
        case 0x3af29cu: goto label_3af29c;
        case 0x3af2a0u: goto label_3af2a0;
        case 0x3af2a4u: goto label_3af2a4;
        case 0x3af2a8u: goto label_3af2a8;
        case 0x3af2acu: goto label_3af2ac;
        case 0x3af2b0u: goto label_3af2b0;
        case 0x3af2b4u: goto label_3af2b4;
        case 0x3af2b8u: goto label_3af2b8;
        case 0x3af2bcu: goto label_3af2bc;
        case 0x3af2c0u: goto label_3af2c0;
        case 0x3af2c4u: goto label_3af2c4;
        case 0x3af2c8u: goto label_3af2c8;
        case 0x3af2ccu: goto label_3af2cc;
        case 0x3af2d0u: goto label_3af2d0;
        case 0x3af2d4u: goto label_3af2d4;
        case 0x3af2d8u: goto label_3af2d8;
        case 0x3af2dcu: goto label_3af2dc;
        case 0x3af2e0u: goto label_3af2e0;
        case 0x3af2e4u: goto label_3af2e4;
        case 0x3af2e8u: goto label_3af2e8;
        case 0x3af2ecu: goto label_3af2ec;
        case 0x3af2f0u: goto label_3af2f0;
        case 0x3af2f4u: goto label_3af2f4;
        case 0x3af2f8u: goto label_3af2f8;
        case 0x3af2fcu: goto label_3af2fc;
        case 0x3af300u: goto label_3af300;
        case 0x3af304u: goto label_3af304;
        case 0x3af308u: goto label_3af308;
        case 0x3af30cu: goto label_3af30c;
        case 0x3af310u: goto label_3af310;
        case 0x3af314u: goto label_3af314;
        case 0x3af318u: goto label_3af318;
        case 0x3af31cu: goto label_3af31c;
        case 0x3af320u: goto label_3af320;
        case 0x3af324u: goto label_3af324;
        case 0x3af328u: goto label_3af328;
        case 0x3af32cu: goto label_3af32c;
        case 0x3af330u: goto label_3af330;
        case 0x3af334u: goto label_3af334;
        case 0x3af338u: goto label_3af338;
        case 0x3af33cu: goto label_3af33c;
        case 0x3af340u: goto label_3af340;
        case 0x3af344u: goto label_3af344;
        case 0x3af348u: goto label_3af348;
        case 0x3af34cu: goto label_3af34c;
        case 0x3af350u: goto label_3af350;
        case 0x3af354u: goto label_3af354;
        case 0x3af358u: goto label_3af358;
        case 0x3af35cu: goto label_3af35c;
        case 0x3af360u: goto label_3af360;
        case 0x3af364u: goto label_3af364;
        case 0x3af368u: goto label_3af368;
        case 0x3af36cu: goto label_3af36c;
        case 0x3af370u: goto label_3af370;
        case 0x3af374u: goto label_3af374;
        case 0x3af378u: goto label_3af378;
        case 0x3af37cu: goto label_3af37c;
        case 0x3af380u: goto label_3af380;
        case 0x3af384u: goto label_3af384;
        case 0x3af388u: goto label_3af388;
        case 0x3af38cu: goto label_3af38c;
        case 0x3af390u: goto label_3af390;
        case 0x3af394u: goto label_3af394;
        case 0x3af398u: goto label_3af398;
        case 0x3af39cu: goto label_3af39c;
        case 0x3af3a0u: goto label_3af3a0;
        case 0x3af3a4u: goto label_3af3a4;
        case 0x3af3a8u: goto label_3af3a8;
        case 0x3af3acu: goto label_3af3ac;
        case 0x3af3b0u: goto label_3af3b0;
        case 0x3af3b4u: goto label_3af3b4;
        case 0x3af3b8u: goto label_3af3b8;
        case 0x3af3bcu: goto label_3af3bc;
        case 0x3af3c0u: goto label_3af3c0;
        case 0x3af3c4u: goto label_3af3c4;
        case 0x3af3c8u: goto label_3af3c8;
        case 0x3af3ccu: goto label_3af3cc;
        case 0x3af3d0u: goto label_3af3d0;
        case 0x3af3d4u: goto label_3af3d4;
        case 0x3af3d8u: goto label_3af3d8;
        case 0x3af3dcu: goto label_3af3dc;
        case 0x3af3e0u: goto label_3af3e0;
        case 0x3af3e4u: goto label_3af3e4;
        case 0x3af3e8u: goto label_3af3e8;
        case 0x3af3ecu: goto label_3af3ec;
        case 0x3af3f0u: goto label_3af3f0;
        case 0x3af3f4u: goto label_3af3f4;
        case 0x3af3f8u: goto label_3af3f8;
        case 0x3af3fcu: goto label_3af3fc;
        case 0x3af400u: goto label_3af400;
        case 0x3af404u: goto label_3af404;
        case 0x3af408u: goto label_3af408;
        case 0x3af40cu: goto label_3af40c;
        case 0x3af410u: goto label_3af410;
        case 0x3af414u: goto label_3af414;
        case 0x3af418u: goto label_3af418;
        case 0x3af41cu: goto label_3af41c;
        case 0x3af420u: goto label_3af420;
        case 0x3af424u: goto label_3af424;
        case 0x3af428u: goto label_3af428;
        case 0x3af42cu: goto label_3af42c;
        case 0x3af430u: goto label_3af430;
        case 0x3af434u: goto label_3af434;
        case 0x3af438u: goto label_3af438;
        case 0x3af43cu: goto label_3af43c;
        case 0x3af440u: goto label_3af440;
        case 0x3af444u: goto label_3af444;
        case 0x3af448u: goto label_3af448;
        case 0x3af44cu: goto label_3af44c;
        case 0x3af450u: goto label_3af450;
        case 0x3af454u: goto label_3af454;
        case 0x3af458u: goto label_3af458;
        case 0x3af45cu: goto label_3af45c;
        case 0x3af460u: goto label_3af460;
        case 0x3af464u: goto label_3af464;
        case 0x3af468u: goto label_3af468;
        case 0x3af46cu: goto label_3af46c;
        case 0x3af470u: goto label_3af470;
        case 0x3af474u: goto label_3af474;
        case 0x3af478u: goto label_3af478;
        case 0x3af47cu: goto label_3af47c;
        case 0x3af480u: goto label_3af480;
        case 0x3af484u: goto label_3af484;
        case 0x3af488u: goto label_3af488;
        case 0x3af48cu: goto label_3af48c;
        case 0x3af490u: goto label_3af490;
        case 0x3af494u: goto label_3af494;
        case 0x3af498u: goto label_3af498;
        case 0x3af49cu: goto label_3af49c;
        case 0x3af4a0u: goto label_3af4a0;
        case 0x3af4a4u: goto label_3af4a4;
        case 0x3af4a8u: goto label_3af4a8;
        case 0x3af4acu: goto label_3af4ac;
        case 0x3af4b0u: goto label_3af4b0;
        case 0x3af4b4u: goto label_3af4b4;
        case 0x3af4b8u: goto label_3af4b8;
        case 0x3af4bcu: goto label_3af4bc;
        case 0x3af4c0u: goto label_3af4c0;
        case 0x3af4c4u: goto label_3af4c4;
        case 0x3af4c8u: goto label_3af4c8;
        case 0x3af4ccu: goto label_3af4cc;
        case 0x3af4d0u: goto label_3af4d0;
        case 0x3af4d4u: goto label_3af4d4;
        case 0x3af4d8u: goto label_3af4d8;
        case 0x3af4dcu: goto label_3af4dc;
        case 0x3af4e0u: goto label_3af4e0;
        case 0x3af4e4u: goto label_3af4e4;
        case 0x3af4e8u: goto label_3af4e8;
        case 0x3af4ecu: goto label_3af4ec;
        case 0x3af4f0u: goto label_3af4f0;
        case 0x3af4f4u: goto label_3af4f4;
        case 0x3af4f8u: goto label_3af4f8;
        case 0x3af4fcu: goto label_3af4fc;
        case 0x3af500u: goto label_3af500;
        case 0x3af504u: goto label_3af504;
        case 0x3af508u: goto label_3af508;
        case 0x3af50cu: goto label_3af50c;
        case 0x3af510u: goto label_3af510;
        case 0x3af514u: goto label_3af514;
        case 0x3af518u: goto label_3af518;
        case 0x3af51cu: goto label_3af51c;
        case 0x3af520u: goto label_3af520;
        case 0x3af524u: goto label_3af524;
        case 0x3af528u: goto label_3af528;
        case 0x3af52cu: goto label_3af52c;
        case 0x3af530u: goto label_3af530;
        case 0x3af534u: goto label_3af534;
        case 0x3af538u: goto label_3af538;
        case 0x3af53cu: goto label_3af53c;
        case 0x3af540u: goto label_3af540;
        case 0x3af544u: goto label_3af544;
        case 0x3af548u: goto label_3af548;
        case 0x3af54cu: goto label_3af54c;
        case 0x3af550u: goto label_3af550;
        case 0x3af554u: goto label_3af554;
        case 0x3af558u: goto label_3af558;
        case 0x3af55cu: goto label_3af55c;
        case 0x3af560u: goto label_3af560;
        case 0x3af564u: goto label_3af564;
        case 0x3af568u: goto label_3af568;
        case 0x3af56cu: goto label_3af56c;
        case 0x3af570u: goto label_3af570;
        case 0x3af574u: goto label_3af574;
        case 0x3af578u: goto label_3af578;
        case 0x3af57cu: goto label_3af57c;
        case 0x3af580u: goto label_3af580;
        case 0x3af584u: goto label_3af584;
        case 0x3af588u: goto label_3af588;
        case 0x3af58cu: goto label_3af58c;
        case 0x3af590u: goto label_3af590;
        case 0x3af594u: goto label_3af594;
        case 0x3af598u: goto label_3af598;
        case 0x3af59cu: goto label_3af59c;
        case 0x3af5a0u: goto label_3af5a0;
        case 0x3af5a4u: goto label_3af5a4;
        case 0x3af5a8u: goto label_3af5a8;
        case 0x3af5acu: goto label_3af5ac;
        case 0x3af5b0u: goto label_3af5b0;
        case 0x3af5b4u: goto label_3af5b4;
        case 0x3af5b8u: goto label_3af5b8;
        case 0x3af5bcu: goto label_3af5bc;
        case 0x3af5c0u: goto label_3af5c0;
        case 0x3af5c4u: goto label_3af5c4;
        case 0x3af5c8u: goto label_3af5c8;
        case 0x3af5ccu: goto label_3af5cc;
        case 0x3af5d0u: goto label_3af5d0;
        case 0x3af5d4u: goto label_3af5d4;
        case 0x3af5d8u: goto label_3af5d8;
        case 0x3af5dcu: goto label_3af5dc;
        case 0x3af5e0u: goto label_3af5e0;
        case 0x3af5e4u: goto label_3af5e4;
        case 0x3af5e8u: goto label_3af5e8;
        case 0x3af5ecu: goto label_3af5ec;
        case 0x3af5f0u: goto label_3af5f0;
        case 0x3af5f4u: goto label_3af5f4;
        case 0x3af5f8u: goto label_3af5f8;
        case 0x3af5fcu: goto label_3af5fc;
        case 0x3af600u: goto label_3af600;
        case 0x3af604u: goto label_3af604;
        case 0x3af608u: goto label_3af608;
        case 0x3af60cu: goto label_3af60c;
        case 0x3af610u: goto label_3af610;
        case 0x3af614u: goto label_3af614;
        case 0x3af618u: goto label_3af618;
        case 0x3af61cu: goto label_3af61c;
        case 0x3af620u: goto label_3af620;
        case 0x3af624u: goto label_3af624;
        case 0x3af628u: goto label_3af628;
        case 0x3af62cu: goto label_3af62c;
        case 0x3af630u: goto label_3af630;
        case 0x3af634u: goto label_3af634;
        case 0x3af638u: goto label_3af638;
        case 0x3af63cu: goto label_3af63c;
        case 0x3af640u: goto label_3af640;
        case 0x3af644u: goto label_3af644;
        case 0x3af648u: goto label_3af648;
        case 0x3af64cu: goto label_3af64c;
        case 0x3af650u: goto label_3af650;
        case 0x3af654u: goto label_3af654;
        case 0x3af658u: goto label_3af658;
        case 0x3af65cu: goto label_3af65c;
        case 0x3af660u: goto label_3af660;
        case 0x3af664u: goto label_3af664;
        case 0x3af668u: goto label_3af668;
        case 0x3af66cu: goto label_3af66c;
        case 0x3af670u: goto label_3af670;
        case 0x3af674u: goto label_3af674;
        case 0x3af678u: goto label_3af678;
        case 0x3af67cu: goto label_3af67c;
        case 0x3af680u: goto label_3af680;
        case 0x3af684u: goto label_3af684;
        case 0x3af688u: goto label_3af688;
        case 0x3af68cu: goto label_3af68c;
        case 0x3af690u: goto label_3af690;
        case 0x3af694u: goto label_3af694;
        case 0x3af698u: goto label_3af698;
        case 0x3af69cu: goto label_3af69c;
        case 0x3af6a0u: goto label_3af6a0;
        case 0x3af6a4u: goto label_3af6a4;
        case 0x3af6a8u: goto label_3af6a8;
        case 0x3af6acu: goto label_3af6ac;
        case 0x3af6b0u: goto label_3af6b0;
        case 0x3af6b4u: goto label_3af6b4;
        case 0x3af6b8u: goto label_3af6b8;
        case 0x3af6bcu: goto label_3af6bc;
        case 0x3af6c0u: goto label_3af6c0;
        case 0x3af6c4u: goto label_3af6c4;
        case 0x3af6c8u: goto label_3af6c8;
        case 0x3af6ccu: goto label_3af6cc;
        case 0x3af6d0u: goto label_3af6d0;
        case 0x3af6d4u: goto label_3af6d4;
        case 0x3af6d8u: goto label_3af6d8;
        case 0x3af6dcu: goto label_3af6dc;
        case 0x3af6e0u: goto label_3af6e0;
        case 0x3af6e4u: goto label_3af6e4;
        case 0x3af6e8u: goto label_3af6e8;
        case 0x3af6ecu: goto label_3af6ec;
        case 0x3af6f0u: goto label_3af6f0;
        case 0x3af6f4u: goto label_3af6f4;
        case 0x3af6f8u: goto label_3af6f8;
        case 0x3af6fcu: goto label_3af6fc;
        case 0x3af700u: goto label_3af700;
        case 0x3af704u: goto label_3af704;
        case 0x3af708u: goto label_3af708;
        case 0x3af70cu: goto label_3af70c;
        case 0x3af710u: goto label_3af710;
        case 0x3af714u: goto label_3af714;
        case 0x3af718u: goto label_3af718;
        case 0x3af71cu: goto label_3af71c;
        case 0x3af720u: goto label_3af720;
        case 0x3af724u: goto label_3af724;
        case 0x3af728u: goto label_3af728;
        case 0x3af72cu: goto label_3af72c;
        case 0x3af730u: goto label_3af730;
        case 0x3af734u: goto label_3af734;
        case 0x3af738u: goto label_3af738;
        case 0x3af73cu: goto label_3af73c;
        case 0x3af740u: goto label_3af740;
        case 0x3af744u: goto label_3af744;
        case 0x3af748u: goto label_3af748;
        case 0x3af74cu: goto label_3af74c;
        case 0x3af750u: goto label_3af750;
        case 0x3af754u: goto label_3af754;
        case 0x3af758u: goto label_3af758;
        case 0x3af75cu: goto label_3af75c;
        case 0x3af760u: goto label_3af760;
        case 0x3af764u: goto label_3af764;
        case 0x3af768u: goto label_3af768;
        case 0x3af76cu: goto label_3af76c;
        case 0x3af770u: goto label_3af770;
        case 0x3af774u: goto label_3af774;
        case 0x3af778u: goto label_3af778;
        case 0x3af77cu: goto label_3af77c;
        case 0x3af780u: goto label_3af780;
        case 0x3af784u: goto label_3af784;
        case 0x3af788u: goto label_3af788;
        case 0x3af78cu: goto label_3af78c;
        case 0x3af790u: goto label_3af790;
        case 0x3af794u: goto label_3af794;
        case 0x3af798u: goto label_3af798;
        case 0x3af79cu: goto label_3af79c;
        case 0x3af7a0u: goto label_3af7a0;
        case 0x3af7a4u: goto label_3af7a4;
        case 0x3af7a8u: goto label_3af7a8;
        case 0x3af7acu: goto label_3af7ac;
        case 0x3af7b0u: goto label_3af7b0;
        case 0x3af7b4u: goto label_3af7b4;
        case 0x3af7b8u: goto label_3af7b8;
        case 0x3af7bcu: goto label_3af7bc;
        case 0x3af7c0u: goto label_3af7c0;
        case 0x3af7c4u: goto label_3af7c4;
        case 0x3af7c8u: goto label_3af7c8;
        case 0x3af7ccu: goto label_3af7cc;
        case 0x3af7d0u: goto label_3af7d0;
        case 0x3af7d4u: goto label_3af7d4;
        case 0x3af7d8u: goto label_3af7d8;
        case 0x3af7dcu: goto label_3af7dc;
        case 0x3af7e0u: goto label_3af7e0;
        case 0x3af7e4u: goto label_3af7e4;
        case 0x3af7e8u: goto label_3af7e8;
        case 0x3af7ecu: goto label_3af7ec;
        case 0x3af7f0u: goto label_3af7f0;
        case 0x3af7f4u: goto label_3af7f4;
        case 0x3af7f8u: goto label_3af7f8;
        case 0x3af7fcu: goto label_3af7fc;
        case 0x3af800u: goto label_3af800;
        case 0x3af804u: goto label_3af804;
        case 0x3af808u: goto label_3af808;
        case 0x3af80cu: goto label_3af80c;
        case 0x3af810u: goto label_3af810;
        case 0x3af814u: goto label_3af814;
        case 0x3af818u: goto label_3af818;
        case 0x3af81cu: goto label_3af81c;
        default: break;
    }

    ctx->pc = 0x3af018u;

label_3af018:
    // 0x3af018: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3af018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3af01c:
    // 0x3af01c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x3af01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_3af020:
    // 0x3af020: 0x8fbe0070  lw          $fp, 0x70($sp)
    ctx->pc = 0x3af020u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_3af024:
    // 0x3af024: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3af024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_3af028:
    // 0x3af028: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3af028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3af02c:
    // 0x3af02c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3af02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_3af030:
    // 0x3af030: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3af030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3af034:
    // 0x3af034: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3af034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3af038:
    // 0x3af038: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3af038u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3af03c:
    // 0x3af03c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3af03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_3af040:
    // 0x3af040: 0x3c130042  lui         $s3, 0x42
    ctx->pc = 0x3af040u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)66 << 16));
label_3af044:
    // 0x3af044: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3af044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_3af048:
    // 0x3af048: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x3af048u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3af04c:
    // 0x3af04c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x3af04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_3af050:
    // 0x3af050: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x3af050u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3af054:
    // 0x3af054: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x3af054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_3af058:
    // 0x3af058: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x3af058u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3af05c:
    // 0x3af05c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x3af05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_3af060:
    // 0x3af060: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x3af060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_3af064:
    // 0x3af064: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x3af064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_3af068:
    // 0x3af068: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x3af068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
label_3af06c:
    // 0x3af06c: 0xafab0008  sw          $t3, 0x8($sp)
    ctx->pc = 0x3af06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 11));
label_3af070:
    // 0x3af070: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x3af070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3af074:
    // 0x3af074: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3af078:
    if (ctx->pc == 0x3AF078u) {
        ctx->pc = 0x3AF078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF074u;
        // 0x3af078: 0x8e654760  lw          $a1, 0x4760($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF07Cu;
        goto label_3af07c;
    }
    ctx->pc = 0x3AF074u;
    {
        const bool branch_taken_0x3af074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF074u;
        // 0x3af078: 0x8e654760  lw          $a1, 0x4760($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af074) {
            ctx->pc = 0x3AF090u;
            goto label_3af090;
        }
    }
    ctx->pc = 0x3AF07Cu;
label_3af07c:
    // 0x3af07c: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x3af07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_3af080:
    // 0x3af080: 0xc0efa24  jal         func_3BE890
label_3af084:
    if (ctx->pc == 0x3AF084u) {
        ctx->pc = 0x3AF084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF080u;
        // 0x3af084: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF088u;
        goto label_3af088;
    }
    ctx->pc = 0x3AF080u;
    SET_GPR_U32(ctx, 31, 0x3AF088u);
    ctx->pc = 0x3AF084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF080u;
    // 0x3af084: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE890u, 0x3AF080u, 0x3AF088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF088u;
label_3af088:
    // 0x3af088: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_3af08c:
    if (ctx->pc == 0x3AF08Cu) {
        ctx->pc = 0x3AF08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF088u;
        // 0x3af08c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF090u;
        goto label_3af090;
    }
    ctx->pc = 0x3AF088u;
    {
        const bool branch_taken_0x3af088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3af088) {
            ctx->pc = 0x3AF08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AF088u;
            // 0x3af08c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AF070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3af070;
        }
    }
    ctx->pc = 0x3AF090u;
label_3af090:
    // 0x3af090: 0x1211006b  beq         $s0, $s1, . + 4 + (0x6B << 2)
label_3af094:
    if (ctx->pc == 0x3AF094u) {
        ctx->pc = 0x3AF094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF090u;
        // 0x3af094: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF098u;
        goto label_3af098;
    }
    ctx->pc = 0x3AF090u;
    {
        const bool branch_taken_0x3af090 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x3AF094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF090u;
        // 0x3af094: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af090) {
            ctx->pc = 0x3AF240u;
            goto label_3af240;
        }
    }
    ctx->pc = 0x3AF098u;
label_3af098:
    // 0x3af098: 0x32030003  andi        $v1, $s0, 0x3
    ctx->pc = 0x3af098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
label_3af09c:
    // 0x3af09c: 0x54600069  bnel        $v1, $zero, . + 4 + (0x69 << 2)
label_3af0a0:
    if (ctx->pc == 0x3AF0A0u) {
        ctx->pc = 0x3AF0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF09Cu;
        // 0x3af0a0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF0A4u;
        goto label_3af0a4;
    }
    ctx->pc = 0x3AF09Cu;
    {
        const bool branch_taken_0x3af09c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3af09c) {
            ctx->pc = 0x3AF0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AF09Cu;
            // 0x3af0a0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AF244u;
            goto label_3af244;
        }
    }
    ctx->pc = 0x3AF0A4u;
label_3af0a4:
    // 0x3af0a4: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x3af0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_3af0a8:
    // 0x3af0a8: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x3af0a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_3af0ac:
    // 0x3af0ac: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x3af0acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_3af0b0:
    // 0x3af0b0: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x3af0b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3af0b4:
    // 0x3af0b4: 0x50600063  beql        $v1, $zero, . + 4 + (0x63 << 2)
label_3af0b8:
    if (ctx->pc == 0x3AF0B8u) {
        ctx->pc = 0x3AF0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF0B4u;
        // 0x3af0b8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF0BCu;
        goto label_3af0bc;
    }
    ctx->pc = 0x3AF0B4u;
    {
        const bool branch_taken_0x3af0b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3af0b4) {
            ctx->pc = 0x3AF0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AF0B4u;
            // 0x3af0b8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AF244u;
            goto label_3af244;
        }
    }
    ctx->pc = 0x3AF0BCu;
label_3af0bc:
    // 0x3af0bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3af0bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3af0c0:
    // 0x3af0c0: 0x3c150042  lui         $s5, 0x42
    ctx->pc = 0x3af0c0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)66 << 16));
label_3af0c4:
    // 0x3af0c4: 0x0  nop
    ctx->pc = 0x3af0c4u;
    // NOP
label_3af0c8:
    // 0x3af0c8: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x3af0c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3af0cc:
    // 0x3af0cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3af0d0:
    if (ctx->pc == 0x3AF0D0u) {
        ctx->pc = 0x3AF0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF0CCu;
        // 0x3af0d0: 0x8ea54764  lw          $a1, 0x4764($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF0D4u;
        goto label_3af0d4;
    }
    ctx->pc = 0x3AF0CCu;
    {
        const bool branch_taken_0x3af0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF0CCu;
        // 0x3af0d0: 0x8ea54764  lw          $a1, 0x4764($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af0cc) {
            ctx->pc = 0x3AF0E8u;
            goto label_3af0e8;
        }
    }
    ctx->pc = 0x3AF0D4u;
label_3af0d4:
    // 0x3af0d4: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x3af0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_3af0d8:
    // 0x3af0d8: 0xc0efa24  jal         func_3BE890
label_3af0dc:
    if (ctx->pc == 0x3AF0DCu) {
        ctx->pc = 0x3AF0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF0D8u;
        // 0x3af0dc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF0E0u;
        goto label_3af0e0;
    }
    ctx->pc = 0x3AF0D8u;
    SET_GPR_U32(ctx, 31, 0x3AF0E0u);
    ctx->pc = 0x3AF0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF0D8u;
    // 0x3af0dc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE890u, 0x3AF0D8u, 0x3AF0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF0E0u;
label_3af0e0:
    // 0x3af0e0: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_3af0e4:
    if (ctx->pc == 0x3AF0E4u) {
        ctx->pc = 0x3AF0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF0E0u;
        // 0x3af0e4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF0E8u;
        goto label_3af0e8;
    }
    ctx->pc = 0x3AF0E0u;
    {
        const bool branch_taken_0x3af0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3af0e0) {
            ctx->pc = 0x3AF0E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AF0E0u;
            // 0x3af0e4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AF0C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3af0c8;
        }
    }
    ctx->pc = 0x3AF0E8u;
label_3af0e8:
    // 0x3af0e8: 0x12110055  beq         $s0, $s1, . + 4 + (0x55 << 2)
label_3af0ec:
    if (ctx->pc == 0x3AF0ECu) {
        ctx->pc = 0x3AF0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF0E8u;
        // 0x3af0ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF0F0u;
        goto label_3af0f0;
    }
    ctx->pc = 0x3AF0E8u;
    {
        const bool branch_taken_0x3af0e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x3AF0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF0E8u;
        // 0x3af0ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af0e8) {
            ctx->pc = 0x3AF240u;
            goto label_3af240;
        }
    }
    ctx->pc = 0x3AF0F0u;
label_3af0f0:
    // 0x3af0f0: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x3af0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_3af0f4:
    // 0x3af0f4: 0x26070008  addiu       $a3, $s0, 0x8
    ctx->pc = 0x3af0f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3af0f8:
    // 0x3af0f8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3af0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3af0fc:
    // 0x3af0fc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3af0fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3af100:
    // 0x3af100: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x3af100u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3af104:
    // 0x3af104: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3af104u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3af108:
    // 0x3af108: 0x90650001  lbu         $a1, 0x1($v1)
    ctx->pc = 0x3af108u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_3af10c:
    // 0x3af10c: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x3af10cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3af110:
    // 0x3af110: 0x90640003  lbu         $a0, 0x3($v1)
    ctx->pc = 0x3af110u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_3af114:
    // 0x3af114: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3af114u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_3af118:
    // 0x3af118: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x3af118u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_3af11c:
    // 0x3af11c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3af11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3af120:
    // 0x3af120: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x3af120u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_3af124:
    // 0x3af124: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3af124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_3af128:
    // 0x3af128: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x3af128u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_3af12c:
    // 0x3af12c: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x3af12cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
label_3af130:
    // 0x3af130: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3af130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3af134:
    // 0x3af134: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3af134u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_3af138:
    // 0x3af138: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3af138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3af13c:
    // 0x3af13c: 0xa0680000  sb          $t0, 0x0($v1)
    ctx->pc = 0x3af13cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
label_3af140:
    // 0x3af140: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3af140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3af144:
    // 0x3af144: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3af144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3af148:
    // 0x3af148: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x3af148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_3af14c:
    // 0x3af14c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3af14cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3af150:
    // 0x3af150: 0xa2c30000  sb          $v1, 0x0($s6)
    ctx->pc = 0x3af150u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
label_3af154:
    // 0x3af154: 0x9262000e  lbu         $v0, 0xE($s3)
    ctx->pc = 0x3af154u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 14)));
label_3af158:
    // 0x3af158: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x3af158u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
label_3af15c:
    // 0x3af15c: 0x9263000c  lbu         $v1, 0xC($s3)
    ctx->pc = 0x3af15cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
label_3af160:
    // 0x3af160: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x3af160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_3af164:
    // 0x3af164: 0xa2e30000  sb          $v1, 0x0($s7)
    ctx->pc = 0x3af164u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 3));
label_3af168:
    // 0x3af168: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3af168u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_3af16c:
    // 0x3af16c: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x3af16cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3af170:
    // 0x3af170: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3af174:
    if (ctx->pc == 0x3AF174u) {
        ctx->pc = 0x3AF174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF170u;
        // 0x3af174: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF178u;
        goto label_3af178;
    }
    ctx->pc = 0x3AF170u;
    {
        const bool branch_taken_0x3af170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3af170) {
            ctx->pc = 0x3AF174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AF170u;
            // 0x3af174: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AF178u;
            goto label_3af178;
        }
    }
    ctx->pc = 0x3AF178u;
label_3af178:
    // 0x3af178: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x3af178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_3af17c:
    // 0x3af17c: 0x1812  mflo        $v1
    ctx->pc = 0x3af17cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_3af180:
    // 0x3af180: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3af180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3af184:
    // 0x3af184: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3af184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3af188:
    // 0x3af188: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x3af188u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
label_3af18c:
    // 0x3af18c: 0x82850000  lb          $a1, 0x0($s4)
    ctx->pc = 0x3af18cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_3af190:
    // 0x3af190: 0x14aa0003  bne         $a1, $t2, . + 4 + (0x3 << 2)
label_3af194:
    if (ctx->pc == 0x3AF194u) {
        ctx->pc = 0x3AF194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF190u;
        // 0x3af194: 0x92830000  lbu         $v1, 0x0($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF198u;
        goto label_3af198;
    }
    ctx->pc = 0x3AF190u;
    {
        const bool branch_taken_0x3af190 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 10));
        ctx->pc = 0x3AF194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF190u;
        // 0x3af194: 0x92830000  lbu         $v1, 0x0($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af190) {
            ctx->pc = 0x3AF1A0u;
            goto label_3af1a0;
        }
    }
    ctx->pc = 0x3AF198u;
label_3af198:
    // 0x3af198: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3af19c:
    if (ctx->pc == 0x3AF19Cu) {
        ctx->pc = 0x3AF19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF198u;
        // 0x3af19c: 0xa7c00000  sh          $zero, 0x0($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF1A0u;
        goto label_3af1a0;
    }
    ctx->pc = 0x3AF198u;
    {
        const bool branch_taken_0x3af198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF198u;
        // 0x3af19c: 0xa7c00000  sh          $zero, 0x0($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af198) {
            ctx->pc = 0x3AF204u;
            goto label_3af204;
        }
    }
    ctx->pc = 0x3AF1A0u;
label_3af1a0:
    // 0x3af1a0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3af1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3af1a4:
    // 0x3af1a4: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
label_3af1a8:
    if (ctx->pc == 0x3AF1A8u) {
        ctx->pc = 0x3AF1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF1A4u;
        // 0x3af1a8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF1ACu;
        goto label_3af1ac;
    }
    ctx->pc = 0x3AF1A4u;
    {
        const bool branch_taken_0x3af1a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AF1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF1A4u;
        // 0x3af1a8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af1a4) {
            ctx->pc = 0x3AF1B8u;
            goto label_3af1b8;
        }
    }
    ctx->pc = 0x3AF1ACu;
label_3af1ac:
    // 0x3af1ac: 0x10000015  b           . + 4 + (0x15 << 2)
label_3af1b0:
    if (ctx->pc == 0x3AF1B0u) {
        ctx->pc = 0x3AF1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF1ACu;
        // 0x3af1b0: 0xa7c90000  sh          $t1, 0x0($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF1B4u;
        goto label_3af1b4;
    }
    ctx->pc = 0x3AF1ACu;
    {
        const bool branch_taken_0x3af1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF1ACu;
        // 0x3af1b0: 0xa7c90000  sh          $t1, 0x0($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af1ac) {
            ctx->pc = 0x3AF204u;
            goto label_3af204;
        }
    }
    ctx->pc = 0x3AF1B4u;
label_3af1b4:
    // 0x3af1b4: 0x0  nop
    ctx->pc = 0x3af1b4u;
    // NOP
label_3af1b8:
    // 0x3af1b8: 0x14a20013  bne         $a1, $v0, . + 4 + (0x13 << 2)
label_3af1bc:
    if (ctx->pc == 0x3AF1BCu) {
        ctx->pc = 0x3AF1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF1B8u;
        // 0x3af1bc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF1C0u;
        goto label_3af1c0;
    }
    ctx->pc = 0x3AF1B8u;
    {
        const bool branch_taken_0x3af1b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AF1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF1B8u;
        // 0x3af1bc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af1b8) {
            ctx->pc = 0x3AF208u;
            goto label_3af208;
        }
    }
    ctx->pc = 0x3AF1C0u;
label_3af1c0:
    // 0x3af1c0: 0x82c20000  lb          $v0, 0x0($s6)
    ctx->pc = 0x3af1c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_3af1c4:
    // 0x3af1c4: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x3af1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_3af1c8:
    // 0x3af1c8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3af1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_3af1cc:
    // 0x3af1cc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3af1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3af1d0:
    // 0x3af1d0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x3af1d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_3af1d4:
    // 0x3af1d4: 0xa2e20000  sb          $v0, 0x0($s7)
    ctx->pc = 0x3af1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 2));
label_3af1d8:
    // 0x3af1d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3af1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3af1dc:
    // 0x3af1dc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3af1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3af1e0:
    // 0x3af1e0: 0x82c20000  lb          $v0, 0x0($s6)
    ctx->pc = 0x3af1e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_3af1e4:
    // 0x3af1e4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x3af1e4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3af1e8:
    // 0x3af1e8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3af1ec:
    if (ctx->pc == 0x3AF1ECu) {
        ctx->pc = 0x3AF1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF1E8u;
        // 0x3af1ec: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF1F0u;
        goto label_3af1f0;
    }
    ctx->pc = 0x3AF1E8u;
    {
        const bool branch_taken_0x3af1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3af1e8) {
            ctx->pc = 0x3AF1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AF1E8u;
            // 0x3af1ec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AF1F0u;
            goto label_3af1f0;
        }
    }
    ctx->pc = 0x3AF1F0u;
label_3af1f0:
    // 0x3af1f0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x3af1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_3af1f4:
    // 0x3af1f4: 0x1812  mflo        $v1
    ctx->pc = 0x3af1f4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_3af1f8:
    // 0x3af1f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3af1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3af1fc:
    // 0x3af1fc: 0xa28a0000  sb          $t2, 0x0($s4)
    ctx->pc = 0x3af1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 10));
label_3af200:
    // 0x3af200: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x3af200u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 4));
label_3af204:
    // 0x3af204: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x3af204u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_3af208:
    // 0x3af208: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_3af20c:
    if (ctx->pc == 0x3AF20Cu) {
        ctx->pc = 0x3AF20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF208u;
        // 0x3af20c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF210u;
        goto label_3af210;
    }
    ctx->pc = 0x3AF208u;
    {
        const bool branch_taken_0x3af208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF208u;
        // 0x3af20c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af208) {
            ctx->pc = 0x3AF240u;
            goto label_3af240;
        }
    }
    ctx->pc = 0x3AF210u;
label_3af210:
    // 0x3af210: 0x82e30000  lb          $v1, 0x0($s7)
    ctx->pc = 0x3af210u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_3af214:
    // 0x3af214: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_3af218:
    if (ctx->pc == 0x3AF218u) {
        ctx->pc = 0x3AF218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF214u;
        // 0x3af218: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF21Cu;
        goto label_3af21c;
    }
    ctx->pc = 0x3AF214u;
    {
        const bool branch_taken_0x3af214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF214u;
        // 0x3af218: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af214) {
            ctx->pc = 0x3AF244u;
            goto label_3af244;
        }
    }
    ctx->pc = 0x3AF21Cu;
label_3af21c:
    // 0x3af21c: 0x92c30000  lbu         $v1, 0x0($s6)
    ctx->pc = 0x3af21cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_3af220:
    // 0x3af220: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3af220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3af224:
    // 0x3af224: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x3af224u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3af228:
    // 0x3af228: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3af22c:
    if (ctx->pc == 0x3AF22Cu) {
        ctx->pc = 0x3AF22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF228u;
        // 0x3af22c: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF230u;
        goto label_3af230;
    }
    ctx->pc = 0x3AF228u;
    {
        const bool branch_taken_0x3af228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF228u;
        // 0x3af22c: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af228) {
            ctx->pc = 0x3AF248u;
            goto label_3af248;
        }
    }
    ctx->pc = 0x3AF230u;
label_3af230:
    // 0x3af230: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3af230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3af234:
    // 0x3af234: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3af234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3af238:
    // 0x3af238: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3af238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3af23c:
    // 0x3af23c: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x3af23cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_3af240:
    // 0x3af240: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3af240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3af244:
    // 0x3af244: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3af244u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3af248:
    // 0x3af248: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3af248u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3af24c:
    // 0x3af24c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3af24cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3af250:
    // 0x3af250: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3af250u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3af254:
    // 0x3af254: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3af254u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3af258:
    // 0x3af258: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x3af258u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3af25c:
    // 0x3af25c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x3af25cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3af260:
    // 0x3af260: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x3af260u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3af264:
    // 0x3af264: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x3af264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_3af268:
    // 0x3af268: 0x3e00008  jr          $ra
label_3af26c:
    if (ctx->pc == 0x3AF26Cu) {
        ctx->pc = 0x3AF26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF268u;
        // 0x3af26c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF270u;
        goto label_3af270;
    }
    ctx->pc = 0x3AF268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF268u;
        // 0x3af26c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF270u;
label_3af270:
    // 0x3af270: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3af270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3af274:
    // 0x3af274: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3af274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_3af278:
    // 0x3af278: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3af278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3af27c:
    // 0x3af27c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x3af27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_3af280:
    // 0x3af280: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3af280u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3af284:
    // 0x3af284: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x3af284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_3af288:
    // 0x3af288: 0x2611000e  addiu       $s1, $s0, 0xE
    ctx->pc = 0x3af288u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
label_3af28c:
    // 0x3af28c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x3af28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_3af290:
    // 0x3af290: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x3af290u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3af294:
    // 0x3af294: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x3af294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_3af298:
    // 0x3af298: 0x2613000f  addiu       $s3, $s0, 0xF
    ctx->pc = 0x3af298u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
label_3af29c:
    // 0x3af29c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x3af29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_3af2a0:
    // 0x3af2a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3af2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3af2a4:
    // 0x3af2a4: 0xa6140002  sh          $s4, 0x2($s0)
    ctx->pc = 0x3af2a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 20));
label_3af2a8:
    // 0x3af2a8: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x3af2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_3af2ac:
    // 0x3af2ac: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3af2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3af2b0:
    // 0x3af2b0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3af2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3af2b4:
    // 0x3af2b4: 0x2603009c  addiu       $v1, $s0, 0x9C
    ctx->pc = 0x3af2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
label_3af2b8:
    // 0x3af2b8: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x3af2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_3af2bc:
    // 0x3af2bc: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x3af2bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
label_3af2c0:
    // 0x3af2c0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3af2c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3af2c4:
    // 0x3af2c4: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3af2c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3af2c8:
    // 0x3af2c8: 0x260b0014  addiu       $t3, $s0, 0x14
    ctx->pc = 0x3af2c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_3af2cc:
    // 0x3af2cc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3af2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3af2d0:
    // 0x3af2d0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x3af2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_3af2d4:
    // 0x3af2d4: 0xc0ebc06  jal         func_3AF018
label_3af2d8:
    if (ctx->pc == 0x3AF2D8u) {
        ctx->pc = 0x3AF2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF2D4u;
        // 0x3af2d8: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF2DCu;
        goto label_3af2dc;
    }
    ctx->pc = 0x3AF2D4u;
    SET_GPR_U32(ctx, 31, 0x3AF2DCu);
    ctx->pc = 0x3AF2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF2D4u;
    // 0x3af2d8: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF018u;
    goto label_3af018;
    ctx->pc = 0x3AF2DCu;
label_3af2dc:
    // 0x3af2dc: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
label_3af2e0:
    if (ctx->pc == 0x3AF2E0u) {
        ctx->pc = 0x3AF2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF2DCu;
        // 0x3af2e0: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF2E4u;
        goto label_3af2e4;
    }
    ctx->pc = 0x3AF2DCu;
    {
        const bool branch_taken_0x3af2dc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3af2dc) {
            ctx->pc = 0x3AF2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AF2DCu;
            // 0x3af2e0: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AF2F0u;
            goto label_3af2f0;
        }
    }
    ctx->pc = 0x3AF2E4u;
label_3af2e4:
    // 0x3af2e4: 0x10000019  b           . + 4 + (0x19 << 2)
label_3af2e8:
    if (ctx->pc == 0x3AF2E8u) {
        ctx->pc = 0x3AF2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF2E4u;
        // 0x3af2e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF2ECu;
        goto label_3af2ec;
    }
    ctx->pc = 0x3AF2E4u;
    {
        const bool branch_taken_0x3af2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF2E4u;
        // 0x3af2e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af2e4) {
            ctx->pc = 0x3AF34Cu;
            goto label_3af34c;
        }
    }
    ctx->pc = 0x3AF2ECu;
label_3af2ec:
    // 0x3af2ec: 0x0  nop
    ctx->pc = 0x3af2ecu;
    // NOP
label_3af2f0:
    // 0x3af2f0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x3af2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_3af2f4:
    // 0x3af2f4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x3af2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_3af2f8:
    // 0x3af2f8: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x3af2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_3af2fc:
    // 0x3af2fc: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x3af2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_3af300:
    // 0x3af300: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x3af300u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
label_3af304:
    // 0x3af304: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x3af304u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
label_3af308:
    // 0x3af308: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x3af308u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
label_3af30c:
    // 0x3af30c: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x3af30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3af310:
    // 0x3af310: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x3af310u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3af314:
    // 0x3af314: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x3af314u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_3af318:
    // 0x3af318: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x3af318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
label_3af31c:
    // 0x3af31c: 0x8e070044  lw          $a3, 0x44($s0)
    ctx->pc = 0x3af31cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_3af320:
    // 0x3af320: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x3af320u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3af324:
    // 0x3af324: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x3af324u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_3af328:
    // 0x3af328: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x3af328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_3af32c:
    // 0x3af32c: 0xa6140098  sh          $s4, 0x98($s0)
    ctx->pc = 0x3af32cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 20));
label_3af330:
    // 0x3af330: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3af330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3af334:
    // 0x3af334: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x3af334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
label_3af338:
    // 0x3af338: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x3af338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
label_3af33c:
    // 0x3af33c: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x3af33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
label_3af340:
    // 0x3af340: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x3af340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
label_3af344:
    // 0x3af344: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x3af344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_3af348:
    // 0x3af348: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x3af348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_3af34c:
    // 0x3af34c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3af34cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3af350:
    // 0x3af350: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x3af350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3af354:
    // 0x3af354: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3af354u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3af358:
    // 0x3af358: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x3af358u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3af35c:
    // 0x3af35c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x3af35cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3af360:
    // 0x3af360: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x3af360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_3af364:
    // 0x3af364: 0x3e00008  jr          $ra
label_3af368:
    if (ctx->pc == 0x3AF368u) {
        ctx->pc = 0x3AF368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF364u;
        // 0x3af368: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF36Cu;
        goto label_3af36c;
    }
    ctx->pc = 0x3AF364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF364u;
        // 0x3af368: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF36Cu;
label_3af36c:
    // 0x3af36c: 0x0  nop
    ctx->pc = 0x3af36cu;
    // NOP
label_3af370:
    // 0x3af370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3af370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3af374:
    // 0x3af374: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3af374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3af378:
    // 0x3af378: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3af378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3af37c:
    // 0x3af37c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3af37cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3af380:
    // 0x3af380: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3af380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3af384:
    // 0x3af384: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x3af384u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_3af388:
    // 0x3af388: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3af388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3af38c:
    // 0x3af38c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3af38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3af390:
    // 0x3af390: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3af390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3af394:
    // 0x3af394: 0x14620043  bne         $v1, $v0, . + 4 + (0x43 << 2)
label_3af398:
    if (ctx->pc == 0x3AF398u) {
        ctx->pc = 0x3AF398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF394u;
        // 0x3af398: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF39Cu;
        goto label_3af39c;
    }
    ctx->pc = 0x3AF394u;
    {
        const bool branch_taken_0x3af394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AF398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF394u;
        // 0x3af398: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af394) {
            ctx->pc = 0x3AF4A4u;
            goto label_3af4a4;
        }
    }
    ctx->pc = 0x3AF39Cu;
label_3af39c:
    // 0x3af39c: 0xc0ec416  jal         func_3B1058
label_3af3a0:
    if (ctx->pc == 0x3AF3A0u) {
        ctx->pc = 0x3AF3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF39Cu;
        // 0x3af3a0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF3A4u;
        goto label_3af3a4;
    }
    ctx->pc = 0x3AF39Cu;
    SET_GPR_U32(ctx, 31, 0x3AF3A4u);
    ctx->pc = 0x3AF3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF39Cu;
    // 0x3af3a0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1058u, 0x3AF39Cu, 0x3AF3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF3A4u;
label_3af3a4:
    // 0x3af3a4: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
label_3af3a8:
    if (ctx->pc == 0x3AF3A8u) {
        ctx->pc = 0x3AF3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF3A4u;
        // 0x3af3a8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF3ACu;
        goto label_3af3ac;
    }
    ctx->pc = 0x3AF3A4u;
    {
        const bool branch_taken_0x3af3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3af3a4) {
            ctx->pc = 0x3AF3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AF3A4u;
            // 0x3af3a8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AF4A4u;
            goto label_3af4a4;
        }
    }
    ctx->pc = 0x3AF3ACu;
label_3af3ac:
    // 0x3af3ac: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x3af3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_3af3b0:
    // 0x3af3b0: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x3af3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_3af3b4:
    // 0x3af3b4: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x3af3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_3af3b8:
    // 0x3af3b8: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x3af3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_3af3bc:
    // 0x3af3bc: 0x40f809  jalr        $v0
label_3af3c0:
    if (ctx->pc == 0x3AF3C0u) {
        ctx->pc = 0x3AF3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF3BCu;
        // 0x3af3c0: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF3C4u;
        goto label_3af3c4;
    }
    ctx->pc = 0x3AF3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AF3C4u);
        ctx->pc = 0x3AF3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF3BCu;
        // 0x3af3c0: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF3BCu, 0x3AF3C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AF3C4u;
label_3af3c4:
    // 0x3af3c4: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x3af3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3af3c8:
    // 0x3af3c8: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x3af3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3af3cc:
    // 0x3af3cc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3af3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3af3d0:
    // 0x3af3d0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3af3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3af3d4:
    // 0x3af3d4: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x3af3d4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_3af3d8:
    // 0x3af3d8: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x3af3d8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_3af3dc:
    // 0x3af3dc: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x3af3dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3af3e0:
    // 0x3af3e0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3af3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3af3e4:
    // 0x3af3e4: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x3af3e4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_3af3e8:
    // 0x3af3e8: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x3af3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_3af3ec:
    // 0x3af3ec: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x3af3ecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3af3f0:
    // 0x3af3f0: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x3af3f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3af3f4:
    // 0x3af3f4: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x3af3f4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_3af3f8:
    // 0x3af3f8: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x3af3f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_3af3fc:
    // 0x3af3fc: 0x14860016  bne         $a0, $a2, . + 4 + (0x16 << 2)
label_3af400:
    if (ctx->pc == 0x3AF400u) {
        ctx->pc = 0x3AF400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF3FCu;
        // 0x3af400: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF404u;
        goto label_3af404;
    }
    ctx->pc = 0x3AF3FCu;
    {
        const bool branch_taken_0x3af3fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x3AF400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF3FCu;
        // 0x3af400: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af3fc) {
            ctx->pc = 0x3AF458u;
            goto label_3af458;
        }
    }
    ctx->pc = 0x3AF404u;
label_3af404:
    // 0x3af404: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3af404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3af408:
    // 0x3af408: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3af408u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3af40c:
    // 0x3af40c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3af40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3af410:
    // 0x3af410: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3af410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3af414:
    // 0x3af414: 0x1920001b  blez        $t1, . + 4 + (0x1B << 2)
label_3af418:
    if (ctx->pc == 0x3AF418u) {
        ctx->pc = 0x3AF418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF414u;
        // 0x3af418: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF41Cu;
        goto label_3af41c;
    }
    ctx->pc = 0x3AF414u;
    {
        const bool branch_taken_0x3af414 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3AF418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF414u;
        // 0x3af418: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af414) {
            ctx->pc = 0x3AF484u;
            goto label_3af484;
        }
    }
    ctx->pc = 0x3AF41Cu;
label_3af41c:
    // 0x3af41c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3af41cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3af420:
    // 0x3af420: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x3af420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_3af424:
    // 0x3af424: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3af424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3af428:
    // 0x3af428: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x3af428u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_3af42c:
    // 0x3af42c: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x3af42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_3af430:
    // 0x3af430: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x3af430u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3af434:
    // 0x3af434: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x3af434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_3af438:
    // 0x3af438: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x3af438u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_3af43c:
    // 0x3af43c: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x3af43cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_3af440:
    // 0x3af440: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3af440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3af444:
    // 0x3af444: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
label_3af448:
    if (ctx->pc == 0x3AF448u) {
        ctx->pc = 0x3AF448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF444u;
        // 0x3af448: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF44Cu;
        goto label_3af44c;
    }
    ctx->pc = 0x3AF444u;
    {
        const bool branch_taken_0x3af444 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF444u;
        // 0x3af448: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af444) {
            ctx->pc = 0x3AF420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3af420;
        }
    }
    ctx->pc = 0x3AF44Cu;
label_3af44c:
    // 0x3af44c: 0x1000000d  b           . + 4 + (0xD << 2)
label_3af450:
    if (ctx->pc == 0x3AF450u) {
        ctx->pc = 0x3AF450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF44Cu;
        // 0x3af450: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF454u;
        goto label_3af454;
    }
    ctx->pc = 0x3AF44Cu;
    {
        const bool branch_taken_0x3af44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF44Cu;
        // 0x3af450: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af44c) {
            ctx->pc = 0x3AF484u;
            goto label_3af484;
        }
    }
    ctx->pc = 0x3AF454u;
label_3af454:
    // 0x3af454: 0x0  nop
    ctx->pc = 0x3af454u;
    // NOP
label_3af458:
    // 0x3af458: 0x1920000a  blez        $t1, . + 4 + (0xA << 2)
label_3af45c:
    if (ctx->pc == 0x3AF45Cu) {
        ctx->pc = 0x3AF45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF458u;
        // 0x3af45c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF460u;
        goto label_3af460;
    }
    ctx->pc = 0x3AF458u;
    {
        const bool branch_taken_0x3af458 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3AF45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF458u;
        // 0x3af45c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af458) {
            ctx->pc = 0x3AF484u;
            goto label_3af484;
        }
    }
    ctx->pc = 0x3AF460u;
label_3af460:
    // 0x3af460: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x3af460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_3af464:
    // 0x3af464: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3af464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3af468:
    // 0x3af468: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x3af468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3af46c:
    // 0x3af46c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x3af46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_3af470:
    // 0x3af470: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x3af470u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3af474:
    // 0x3af474: 0x109282a  slt         $a1, $t0, $t1
    ctx->pc = 0x3af474u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3af478:
    // 0x3af478: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
label_3af47c:
    if (ctx->pc == 0x3AF47Cu) {
        ctx->pc = 0x3AF47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF478u;
        // 0x3af47c: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF480u;
        goto label_3af480;
    }
    ctx->pc = 0x3AF478u;
    {
        const bool branch_taken_0x3af478 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF478u;
        // 0x3af47c: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af478) {
            ctx->pc = 0x3AF460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3af460;
        }
    }
    ctx->pc = 0x3AF480u;
label_3af480:
    // 0x3af480: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x3af480u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_3af484:
    // 0x3af484: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x3af484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_3af488:
    // 0x3af488: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3af488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3af48c:
    // 0x3af48c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3af48cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_3af490:
    // 0x3af490: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3af490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3af494:
    // 0x3af494: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x3af494u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3af498:
    // 0x3af498: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x3af498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_3af49c:
    // 0x3af49c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3af49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3af4a0:
    // 0x3af4a0: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x3af4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_3af4a4:
    // 0x3af4a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3af4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3af4a8:
    // 0x3af4a8: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_3af4ac:
    if (ctx->pc == 0x3AF4ACu) {
        ctx->pc = 0x3AF4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF4A8u;
        // 0x3af4ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF4B0u;
        goto label_3af4b0;
    }
    ctx->pc = 0x3AF4A8u;
    {
        const bool branch_taken_0x3af4a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3af4a8) {
            ctx->pc = 0x3AF4ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AF4A8u;
            // 0x3af4ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AF4D0u;
            goto label_3af4d0;
        }
    }
    ctx->pc = 0x3AF4B0u;
label_3af4b0:
    // 0x3af4b0: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x3af4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_3af4b4:
    // 0x3af4b4: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3af4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3af4b8:
    // 0x3af4b8: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x3af4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_3af4bc:
    // 0x3af4bc: 0x60f809  jalr        $v1
label_3af4c0:
    if (ctx->pc == 0x3AF4C0u) {
        ctx->pc = 0x3AF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF4BCu;
        // 0x3af4c0: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF4C4u;
        goto label_3af4c4;
    }
    ctx->pc = 0x3AF4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AF4C4u);
        ctx->pc = 0x3AF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF4BCu;
        // 0x3af4c0: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF4BCu, 0x3AF4C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AF4C4u;
label_3af4c4:
    // 0x3af4c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3af4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3af4c8:
    // 0x3af4c8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3af4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3af4cc:
    // 0x3af4cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3af4ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3af4d0:
    // 0x3af4d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3af4d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3af4d4:
    // 0x3af4d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3af4d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3af4d8:
    // 0x3af4d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3af4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3af4dc:
    // 0x3af4dc: 0x3e00008  jr          $ra
label_3af4e0:
    if (ctx->pc == 0x3AF4E0u) {
        ctx->pc = 0x3AF4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF4DCu;
        // 0x3af4e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF4E4u;
        goto label_3af4e4;
    }
    ctx->pc = 0x3AF4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF4DCu;
        // 0x3af4e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF4E4u;
label_3af4e4:
    // 0x3af4e4: 0x0  nop
    ctx->pc = 0x3af4e4u;
    // NOP
label_3af4e8:
    // 0x3af4e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3af4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3af4ec:
    // 0x3af4ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3af4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3af4f0:
    // 0x3af4f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3af4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3af4f4:
    // 0x3af4f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3af4f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3af4f8:
    // 0x3af4f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3af4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3af4fc:
    // 0x3af4fc: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x3af4fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_3af500:
    // 0x3af500: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3af500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3af504:
    // 0x3af504: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3af504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3af508:
    // 0x3af508: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3af508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3af50c:
    // 0x3af50c: 0x1462004b  bne         $v1, $v0, . + 4 + (0x4B << 2)
label_3af510:
    if (ctx->pc == 0x3AF510u) {
        ctx->pc = 0x3AF510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF50Cu;
        // 0x3af510: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF514u;
        goto label_3af514;
    }
    ctx->pc = 0x3AF50Cu;
    {
        const bool branch_taken_0x3af50c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AF510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF50Cu;
        // 0x3af510: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af50c) {
            ctx->pc = 0x3AF63Cu;
            goto label_3af63c;
        }
    }
    ctx->pc = 0x3AF514u;
label_3af514:
    // 0x3af514: 0xc0ec416  jal         func_3B1058
label_3af518:
    if (ctx->pc == 0x3AF518u) {
        ctx->pc = 0x3AF518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF514u;
        // 0x3af518: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF51Cu;
        goto label_3af51c;
    }
    ctx->pc = 0x3AF514u;
    SET_GPR_U32(ctx, 31, 0x3AF51Cu);
    ctx->pc = 0x3AF518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF514u;
    // 0x3af518: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1058u, 0x3AF514u, 0x3AF51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF51Cu;
label_3af51c:
    // 0x3af51c: 0x54400047  bnel        $v0, $zero, . + 4 + (0x47 << 2)
label_3af520:
    if (ctx->pc == 0x3AF520u) {
        ctx->pc = 0x3AF520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF51Cu;
        // 0x3af520: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF524u;
        goto label_3af524;
    }
    ctx->pc = 0x3AF51Cu;
    {
        const bool branch_taken_0x3af51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3af51c) {
            ctx->pc = 0x3AF520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AF51Cu;
            // 0x3af520: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AF63Cu;
            goto label_3af63c;
        }
    }
    ctx->pc = 0x3AF524u;
label_3af524:
    // 0x3af524: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x3af524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_3af528:
    // 0x3af528: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x3af528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_3af52c:
    // 0x3af52c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x3af52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_3af530:
    // 0x3af530: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x3af530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_3af534:
    // 0x3af534: 0x40f809  jalr        $v0
label_3af538:
    if (ctx->pc == 0x3AF538u) {
        ctx->pc = 0x3AF538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF534u;
        // 0x3af538: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF53Cu;
        goto label_3af53c;
    }
    ctx->pc = 0x3AF534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AF53Cu);
        ctx->pc = 0x3AF538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF534u;
        // 0x3af538: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF534u, 0x3AF53Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AF53Cu;
label_3af53c:
    // 0x3af53c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x3af53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3af540:
    // 0x3af540: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x3af540u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3af544:
    // 0x3af544: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3af544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3af548:
    // 0x3af548: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3af548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3af54c:
    // 0x3af54c: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x3af54cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_3af550:
    // 0x3af550: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x3af550u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_3af554:
    // 0x3af554: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x3af554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3af558:
    // 0x3af558: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3af558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3af55c:
    // 0x3af55c: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x3af55cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_3af560:
    // 0x3af560: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x3af560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_3af564:
    // 0x3af564: 0x8e2a0014  lw          $t2, 0x14($s1)
    ctx->pc = 0x3af564u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3af568:
    // 0x3af568: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x3af568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3af56c:
    // 0x3af56c: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x3af56cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_3af570:
    // 0x3af570: 0x1435821  addu        $t3, $t2, $v1
    ctx->pc = 0x3af570u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_3af574:
    // 0x3af574: 0x1486001c  bne         $a0, $a2, . + 4 + (0x1C << 2)
label_3af578:
    if (ctx->pc == 0x3AF578u) {
        ctx->pc = 0x3AF578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF574u;
        // 0x3af578: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF57Cu;
        goto label_3af57c;
    }
    ctx->pc = 0x3AF574u;
    {
        const bool branch_taken_0x3af574 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x3AF578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF574u;
        // 0x3af578: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af574) {
            ctx->pc = 0x3AF5E8u;
            goto label_3af5e8;
        }
    }
    ctx->pc = 0x3AF57Cu;
label_3af57c:
    // 0x3af57c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3af57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3af580:
    // 0x3af580: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3af580u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3af584:
    // 0x3af584: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3af584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3af588:
    // 0x3af588: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3af588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3af58c:
    // 0x3af58c: 0x19200024  blez        $t1, . + 4 + (0x24 << 2)
label_3af590:
    if (ctx->pc == 0x3AF590u) {
        ctx->pc = 0x3AF590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF58Cu;
        // 0x3af590: 0x1426021  addu        $t4, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF594u;
        goto label_3af594;
    }
    ctx->pc = 0x3AF58Cu;
    {
        const bool branch_taken_0x3af58c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3AF590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF58Cu;
        // 0x3af590: 0x1426021  addu        $t4, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af58c) {
            ctx->pc = 0x3AF620u;
            goto label_3af620;
        }
    }
    ctx->pc = 0x3AF594u;
label_3af594:
    // 0x3af594: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3af594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3af598:
    // 0x3af598: 0x340aff80  ori         $t2, $zero, 0xFF80
    ctx->pc = 0x3af598u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
label_3af59c:
    // 0x3af59c: 0x0  nop
    ctx->pc = 0x3af59cu;
    // NOP
label_3af5a0:
    // 0x3af5a0: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3af5a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_3af5a4:
    // 0x3af5a4: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x3af5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_3af5a8:
    // 0x3af5a8: 0x8b2821  addu        $a1, $a0, $t3
    ctx->pc = 0x3af5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_3af5ac:
    // 0x3af5ac: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x3af5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_3af5b0:
    // 0x3af5b0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x3af5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_3af5b4:
    // 0x3af5b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3af5b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3af5b8:
    // 0x3af5b8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3af5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_3af5bc:
    // 0x3af5bc: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x3af5bcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3af5c0:
    // 0x3af5c0: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x3af5c0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_3af5c4:
    // 0x3af5c4: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x3af5c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_3af5c8:
    // 0x3af5c8: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x3af5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_3af5cc:
    // 0x3af5cc: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x3af5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_3af5d0:
    // 0x3af5d0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3af5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3af5d4:
    // 0x3af5d4: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
label_3af5d8:
    if (ctx->pc == 0x3AF5D8u) {
        ctx->pc = 0x3AF5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF5D4u;
        // 0x3af5d8: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF5DCu;
        goto label_3af5dc;
    }
    ctx->pc = 0x3AF5D4u;
    {
        const bool branch_taken_0x3af5d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF5D4u;
        // 0x3af5d8: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af5d4) {
            ctx->pc = 0x3AF5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3af5a0;
        }
    }
    ctx->pc = 0x3AF5DCu;
label_3af5dc:
    // 0x3af5dc: 0x10000010  b           . + 4 + (0x10 << 2)
label_3af5e0:
    if (ctx->pc == 0x3AF5E0u) {
        ctx->pc = 0x3AF5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF5DCu;
        // 0x3af5e0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF5E4u;
        goto label_3af5e4;
    }
    ctx->pc = 0x3AF5DCu;
    {
        const bool branch_taken_0x3af5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF5DCu;
        // 0x3af5e0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af5dc) {
            ctx->pc = 0x3AF620u;
            goto label_3af620;
        }
    }
    ctx->pc = 0x3AF5E4u;
label_3af5e4:
    // 0x3af5e4: 0x0  nop
    ctx->pc = 0x3af5e4u;
    // NOP
label_3af5e8:
    // 0x3af5e8: 0x1920000d  blez        $t1, . + 4 + (0xD << 2)
label_3af5ec:
    if (ctx->pc == 0x3AF5ECu) {
        ctx->pc = 0x3AF5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF5E8u;
        // 0x3af5ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF5F0u;
        goto label_3af5f0;
    }
    ctx->pc = 0x3AF5E8u;
    {
        const bool branch_taken_0x3af5e8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3AF5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF5E8u;
        // 0x3af5ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af5e8) {
            ctx->pc = 0x3AF620u;
            goto label_3af620;
        }
    }
    ctx->pc = 0x3AF5F0u;
label_3af5f0:
    // 0x3af5f0: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x3af5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3af5f4:
    // 0x3af5f4: 0x3406ff80  ori         $a2, $zero, 0xFF80
    ctx->pc = 0x3af5f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
label_3af5f8:
    // 0x3af5f8: 0x2481021  addu        $v0, $s2, $t0
    ctx->pc = 0x3af5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_3af5fc:
    // 0x3af5fc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3af5fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3af600:
    // 0x3af600: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3af600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3af604:
    // 0x3af604: 0x109202a  slt         $a0, $t0, $t1
    ctx->pc = 0x3af604u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3af608:
    // 0x3af608: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3af608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3af60c:
    // 0x3af60c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3af60cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_3af610:
    // 0x3af610: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x3af610u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_3af614:
    // 0x3af614: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
label_3af618:
    if (ctx->pc == 0x3AF618u) {
        ctx->pc = 0x3AF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF614u;
        // 0x3af618: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF61Cu;
        goto label_3af61c;
    }
    ctx->pc = 0x3AF614u;
    {
        const bool branch_taken_0x3af614 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF614u;
        // 0x3af618: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af614) {
            ctx->pc = 0x3AF5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3af5f8;
        }
    }
    ctx->pc = 0x3AF61Cu;
label_3af61c:
    // 0x3af61c: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x3af61cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_3af620:
    // 0x3af620: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x3af620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_3af624:
    // 0x3af624: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3af624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3af628:
    // 0x3af628: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3af628u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_3af62c:
    // 0x3af62c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3af62cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3af630:
    // 0x3af630: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x3af630u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3af634:
    // 0x3af634: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x3af634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_3af638:
    // 0x3af638: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x3af638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_3af63c:
    // 0x3af63c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3af63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3af640:
    // 0x3af640: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_3af644:
    if (ctx->pc == 0x3AF644u) {
        ctx->pc = 0x3AF644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF640u;
        // 0x3af644: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF648u;
        goto label_3af648;
    }
    ctx->pc = 0x3AF640u;
    {
        const bool branch_taken_0x3af640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3af640) {
            ctx->pc = 0x3AF644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AF640u;
            // 0x3af644: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AF668u;
            goto label_3af668;
        }
    }
    ctx->pc = 0x3AF648u;
label_3af648:
    // 0x3af648: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x3af648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_3af64c:
    // 0x3af64c: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3af64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3af650:
    // 0x3af650: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x3af650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_3af654:
    // 0x3af654: 0x60f809  jalr        $v1
label_3af658:
    if (ctx->pc == 0x3AF658u) {
        ctx->pc = 0x3AF658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF654u;
        // 0x3af658: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF65Cu;
        goto label_3af65c;
    }
    ctx->pc = 0x3AF654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AF65Cu);
        ctx->pc = 0x3AF658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF654u;
        // 0x3af658: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF654u, 0x3AF65Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AF65Cu;
label_3af65c:
    // 0x3af65c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3af65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3af660:
    // 0x3af660: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3af660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3af664:
    // 0x3af664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3af664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3af668:
    // 0x3af668: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3af668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3af66c:
    // 0x3af66c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3af66cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3af670:
    // 0x3af670: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3af670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3af674:
    // 0x3af674: 0x3e00008  jr          $ra
label_3af678:
    if (ctx->pc == 0x3AF678u) {
        ctx->pc = 0x3AF678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF674u;
        // 0x3af678: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF67Cu;
        goto label_3af67c;
    }
    ctx->pc = 0x3AF674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF674u;
        // 0x3af678: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF67Cu;
label_3af67c:
    // 0x3af67c: 0x0  nop
    ctx->pc = 0x3af67cu;
    // NOP
label_3af680:
    // 0x3af680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3af680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3af684:
    // 0x3af684: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3af684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3af688:
    // 0x3af688: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3af688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3af68c:
    // 0x3af68c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3af68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3af690:
    // 0x3af690: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3af690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3af694:
    // 0x3af694: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x3af694u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_3af698:
    // 0x3af698: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3af698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3af69c:
    // 0x3af69c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3af69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3af6a0:
    // 0x3af6a0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3af6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3af6a4:
    // 0x3af6a4: 0x1462004d  bne         $v1, $v0, . + 4 + (0x4D << 2)
label_3af6a8:
    if (ctx->pc == 0x3AF6A8u) {
        ctx->pc = 0x3AF6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF6A4u;
        // 0x3af6a8: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF6ACu;
        goto label_3af6ac;
    }
    ctx->pc = 0x3AF6A4u;
    {
        const bool branch_taken_0x3af6a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AF6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF6A4u;
        // 0x3af6a8: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af6a4) {
            ctx->pc = 0x3AF7DCu;
            goto label_3af7dc;
        }
    }
    ctx->pc = 0x3AF6ACu;
label_3af6ac:
    // 0x3af6ac: 0xc0ec416  jal         func_3B1058
label_3af6b0:
    if (ctx->pc == 0x3AF6B0u) {
        ctx->pc = 0x3AF6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF6ACu;
        // 0x3af6b0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF6B4u;
        goto label_3af6b4;
    }
    ctx->pc = 0x3AF6ACu;
    SET_GPR_U32(ctx, 31, 0x3AF6B4u);
    ctx->pc = 0x3AF6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF6ACu;
    // 0x3af6b0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1058u, 0x3AF6ACu, 0x3AF6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF6B4u;
label_3af6b4:
    // 0x3af6b4: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
label_3af6b8:
    if (ctx->pc == 0x3AF6B8u) {
        ctx->pc = 0x3AF6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF6B4u;
        // 0x3af6b8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF6BCu;
        goto label_3af6bc;
    }
    ctx->pc = 0x3AF6B4u;
    {
        const bool branch_taken_0x3af6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3af6b4) {
            ctx->pc = 0x3AF6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AF6B4u;
            // 0x3af6b8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AF7DCu;
            goto label_3af7dc;
        }
    }
    ctx->pc = 0x3AF6BCu;
label_3af6bc:
    // 0x3af6bc: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x3af6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_3af6c0:
    // 0x3af6c0: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x3af6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_3af6c4:
    // 0x3af6c4: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x3af6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_3af6c8:
    // 0x3af6c8: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x3af6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_3af6cc:
    // 0x3af6cc: 0x40f809  jalr        $v0
label_3af6d0:
    if (ctx->pc == 0x3AF6D0u) {
        ctx->pc = 0x3AF6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF6CCu;
        // 0x3af6d0: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF6D4u;
        goto label_3af6d4;
    }
    ctx->pc = 0x3AF6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AF6D4u);
        ctx->pc = 0x3AF6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF6CCu;
        // 0x3af6d0: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF6CCu, 0x3AF6D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AF6D4u;
label_3af6d4:
    // 0x3af6d4: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x3af6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3af6d8:
    // 0x3af6d8: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x3af6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3af6dc:
    // 0x3af6dc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3af6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3af6e0:
    // 0x3af6e0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3af6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3af6e4:
    // 0x3af6e4: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x3af6e4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_3af6e8:
    // 0x3af6e8: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x3af6e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_3af6ec:
    // 0x3af6ec: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x3af6ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3af6f0:
    // 0x3af6f0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3af6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3af6f4:
    // 0x3af6f4: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x3af6f4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_3af6f8:
    // 0x3af6f8: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x3af6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_3af6fc:
    // 0x3af6fc: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x3af6fcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3af700:
    // 0x3af700: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x3af700u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3af704:
    // 0x3af704: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x3af704u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_3af708:
    // 0x3af708: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x3af708u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_3af70c:
    // 0x3af70c: 0x1486001c  bne         $a0, $a2, . + 4 + (0x1C << 2)
label_3af710:
    if (ctx->pc == 0x3AF710u) {
        ctx->pc = 0x3AF710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF70Cu;
        // 0x3af710: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF714u;
        goto label_3af714;
    }
    ctx->pc = 0x3AF70Cu;
    {
        const bool branch_taken_0x3af70c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x3AF710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF70Cu;
        // 0x3af710: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af70c) {
            ctx->pc = 0x3AF780u;
            goto label_3af780;
        }
    }
    ctx->pc = 0x3AF714u;
label_3af714:
    // 0x3af714: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3af714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3af718:
    // 0x3af718: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3af718u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3af71c:
    // 0x3af71c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3af71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3af720:
    // 0x3af720: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3af720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3af724:
    // 0x3af724: 0x19200025  blez        $t1, . + 4 + (0x25 << 2)
label_3af728:
    if (ctx->pc == 0x3AF728u) {
        ctx->pc = 0x3AF728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF724u;
        // 0x3af728: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF72Cu;
        goto label_3af72c;
    }
    ctx->pc = 0x3AF724u;
    {
        const bool branch_taken_0x3af724 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3AF728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF724u;
        // 0x3af728: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af724) {
            ctx->pc = 0x3AF7BCu;
            goto label_3af7bc;
        }
    }
    ctx->pc = 0x3AF72Cu;
label_3af72c:
    // 0x3af72c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3af72cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3af730:
    // 0x3af730: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x3af730u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_3af734:
    // 0x3af734: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x3af734u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_3af738:
    // 0x3af738: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3af738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_3af73c:
    // 0x3af73c: 0x8a2821  addu        $a1, $a0, $t2
    ctx->pc = 0x3af73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_3af740:
    // 0x3af740: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3af740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3af744:
    // 0x3af744: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3af744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3af748:
    // 0x3af748: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3af748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3af74c:
    // 0x3af74c: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x3af74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_3af750:
    // 0x3af750: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x3af750u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_3af754:
    // 0x3af754: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x3af754u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3af758:
    // 0x3af758: 0x90e20003  lbu         $v0, 0x3($a3)
    ctx->pc = 0x3af758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
label_3af75c:
    // 0x3af75c: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x3af75cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_3af760:
    // 0x3af760: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3af760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3af764:
    // 0x3af764: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3af764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3af768:
    // 0x3af768: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3af768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3af76c:
    // 0x3af76c: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
label_3af770:
    if (ctx->pc == 0x3AF770u) {
        ctx->pc = 0x3AF770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF76Cu;
        // 0x3af770: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF774u;
        goto label_3af774;
    }
    ctx->pc = 0x3AF76Cu;
    {
        const bool branch_taken_0x3af76c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF76Cu;
        // 0x3af770: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af76c) {
            ctx->pc = 0x3AF730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3af730;
        }
    }
    ctx->pc = 0x3AF774u;
label_3af774:
    // 0x3af774: 0x10000011  b           . + 4 + (0x11 << 2)
label_3af778:
    if (ctx->pc == 0x3AF778u) {
        ctx->pc = 0x3AF778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF774u;
        // 0x3af778: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF77Cu;
        goto label_3af77c;
    }
    ctx->pc = 0x3AF774u;
    {
        const bool branch_taken_0x3af774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF774u;
        // 0x3af778: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af774) {
            ctx->pc = 0x3AF7BCu;
            goto label_3af7bc;
        }
    }
    ctx->pc = 0x3AF77Cu;
label_3af77c:
    // 0x3af77c: 0x0  nop
    ctx->pc = 0x3af77cu;
    // NOP
label_3af780:
    // 0x3af780: 0x1920000e  blez        $t1, . + 4 + (0xE << 2)
label_3af784:
    if (ctx->pc == 0x3AF784u) {
        ctx->pc = 0x3AF784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF780u;
        // 0x3af784: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF788u;
        goto label_3af788;
    }
    ctx->pc = 0x3AF780u;
    {
        const bool branch_taken_0x3af780 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3AF784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF780u;
        // 0x3af784: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af780) {
            ctx->pc = 0x3AF7BCu;
            goto label_3af7bc;
        }
    }
    ctx->pc = 0x3AF788u;
label_3af788:
    // 0x3af788: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3af788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3af78c:
    // 0x3af78c: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x3af78cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3af790:
    // 0x3af790: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x3af790u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_3af794:
    // 0x3af794: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3af794u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3af798:
    // 0x3af798: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3af798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3af79c:
    // 0x3af79c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3af79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_3af7a0:
    // 0x3af7a0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3af7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3af7a4:
    // 0x3af7a4: 0x109202a  slt         $a0, $t0, $t1
    ctx->pc = 0x3af7a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3af7a8:
    // 0x3af7a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3af7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3af7ac:
    // 0x3af7ac: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x3af7acu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_3af7b0:
    // 0x3af7b0: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
label_3af7b4:
    if (ctx->pc == 0x3AF7B4u) {
        ctx->pc = 0x3AF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF7B0u;
        // 0x3af7b4: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF7B8u;
        goto label_3af7b8;
    }
    ctx->pc = 0x3AF7B0u;
    {
        const bool branch_taken_0x3af7b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF7B0u;
        // 0x3af7b4: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af7b0) {
            ctx->pc = 0x3AF790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3af790;
        }
    }
    ctx->pc = 0x3AF7B8u;
label_3af7b8:
    // 0x3af7b8: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x3af7b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_3af7bc:
    // 0x3af7bc: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x3af7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_3af7c0:
    // 0x3af7c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3af7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3af7c4:
    // 0x3af7c4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3af7c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_3af7c8:
    // 0x3af7c8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3af7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3af7cc:
    // 0x3af7cc: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x3af7ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3af7d0:
    // 0x3af7d0: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x3af7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_3af7d4:
    // 0x3af7d4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3af7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3af7d8:
    // 0x3af7d8: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x3af7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_3af7dc:
    // 0x3af7dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3af7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3af7e0:
    // 0x3af7e0: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_3af7e4:
    if (ctx->pc == 0x3AF7E4u) {
        ctx->pc = 0x3AF7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF7E0u;
        // 0x3af7e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF7E8u;
        goto label_3af7e8;
    }
    ctx->pc = 0x3AF7E0u;
    {
        const bool branch_taken_0x3af7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3af7e0) {
            ctx->pc = 0x3AF7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AF7E0u;
            // 0x3af7e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AF808u;
            goto label_3af808;
        }
    }
    ctx->pc = 0x3AF7E8u;
label_3af7e8:
    // 0x3af7e8: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x3af7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_3af7ec:
    // 0x3af7ec: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3af7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3af7f0:
    // 0x3af7f0: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x3af7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_3af7f4:
    // 0x3af7f4: 0x60f809  jalr        $v1
label_3af7f8:
    if (ctx->pc == 0x3AF7F8u) {
        ctx->pc = 0x3AF7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF7F4u;
        // 0x3af7f8: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF7FCu;
        goto label_3af7fc;
    }
    ctx->pc = 0x3AF7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AF7FCu);
        ctx->pc = 0x3AF7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF7F4u;
        // 0x3af7f8: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF7F4u, 0x3AF7FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AF7FCu;
label_3af7fc:
    // 0x3af7fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3af7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3af800:
    // 0x3af800: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3af800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3af804:
    // 0x3af804: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3af804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3af808:
    // 0x3af808: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3af808u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3af80c:
    // 0x3af80c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3af80cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3af810:
    // 0x3af810: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3af810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3af814:
    // 0x3af814: 0x3e00008  jr          $ra
label_3af818:
    if (ctx->pc == 0x3AF818u) {
        ctx->pc = 0x3AF818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF814u;
        // 0x3af818: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF81Cu;
        goto label_3af81c;
    }
    ctx->pc = 0x3AF814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF814u;
        // 0x3af818: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF81Cu;
label_3af81c:
    // 0x3af81c: 0x0  nop
    ctx->pc = 0x3af81cu;
    // NOP
    ctx->pc = 0x3af820u;
}
