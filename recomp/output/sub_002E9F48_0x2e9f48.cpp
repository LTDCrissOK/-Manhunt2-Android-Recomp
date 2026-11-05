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

// Function: sub_002E9F48
// Address: 0x2e9f48 - 0x2ebbe0
void sub_002E9F48_0x2e9f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9F48_0x2e9f48");
#endif

    switch (ctx->pc) {
        case 0x2e9f48u: goto label_2e9f48;
        case 0x2e9f4cu: goto label_2e9f4c;
        case 0x2e9f50u: goto label_2e9f50;
        case 0x2e9f54u: goto label_2e9f54;
        case 0x2e9f58u: goto label_2e9f58;
        case 0x2e9f5cu: goto label_2e9f5c;
        case 0x2e9f60u: goto label_2e9f60;
        case 0x2e9f64u: goto label_2e9f64;
        case 0x2e9f68u: goto label_2e9f68;
        case 0x2e9f6cu: goto label_2e9f6c;
        case 0x2e9f70u: goto label_2e9f70;
        case 0x2e9f74u: goto label_2e9f74;
        case 0x2e9f78u: goto label_2e9f78;
        case 0x2e9f7cu: goto label_2e9f7c;
        case 0x2e9f80u: goto label_2e9f80;
        case 0x2e9f84u: goto label_2e9f84;
        case 0x2e9f88u: goto label_2e9f88;
        case 0x2e9f8cu: goto label_2e9f8c;
        case 0x2e9f90u: goto label_2e9f90;
        case 0x2e9f94u: goto label_2e9f94;
        case 0x2e9f98u: goto label_2e9f98;
        case 0x2e9f9cu: goto label_2e9f9c;
        case 0x2e9fa0u: goto label_2e9fa0;
        case 0x2e9fa4u: goto label_2e9fa4;
        case 0x2e9fa8u: goto label_2e9fa8;
        case 0x2e9facu: goto label_2e9fac;
        case 0x2e9fb0u: goto label_2e9fb0;
        case 0x2e9fb4u: goto label_2e9fb4;
        case 0x2e9fb8u: goto label_2e9fb8;
        case 0x2e9fbcu: goto label_2e9fbc;
        case 0x2e9fc0u: goto label_2e9fc0;
        case 0x2e9fc4u: goto label_2e9fc4;
        case 0x2e9fc8u: goto label_2e9fc8;
        case 0x2e9fccu: goto label_2e9fcc;
        case 0x2e9fd0u: goto label_2e9fd0;
        case 0x2e9fd4u: goto label_2e9fd4;
        case 0x2e9fd8u: goto label_2e9fd8;
        case 0x2e9fdcu: goto label_2e9fdc;
        case 0x2e9fe0u: goto label_2e9fe0;
        case 0x2e9fe4u: goto label_2e9fe4;
        case 0x2e9fe8u: goto label_2e9fe8;
        case 0x2e9fecu: goto label_2e9fec;
        case 0x2e9ff0u: goto label_2e9ff0;
        case 0x2e9ff4u: goto label_2e9ff4;
        case 0x2e9ff8u: goto label_2e9ff8;
        case 0x2e9ffcu: goto label_2e9ffc;
        case 0x2ea000u: goto label_2ea000;
        case 0x2ea004u: goto label_2ea004;
        case 0x2ea008u: goto label_2ea008;
        case 0x2ea00cu: goto label_2ea00c;
        case 0x2ea010u: goto label_2ea010;
        case 0x2ea014u: goto label_2ea014;
        case 0x2ea018u: goto label_2ea018;
        case 0x2ea01cu: goto label_2ea01c;
        case 0x2ea020u: goto label_2ea020;
        case 0x2ea024u: goto label_2ea024;
        case 0x2ea028u: goto label_2ea028;
        case 0x2ea02cu: goto label_2ea02c;
        case 0x2ea030u: goto label_2ea030;
        case 0x2ea034u: goto label_2ea034;
        case 0x2ea038u: goto label_2ea038;
        case 0x2ea03cu: goto label_2ea03c;
        case 0x2ea040u: goto label_2ea040;
        case 0x2ea044u: goto label_2ea044;
        case 0x2ea048u: goto label_2ea048;
        case 0x2ea04cu: goto label_2ea04c;
        case 0x2ea050u: goto label_2ea050;
        case 0x2ea054u: goto label_2ea054;
        case 0x2ea058u: goto label_2ea058;
        case 0x2ea05cu: goto label_2ea05c;
        case 0x2ea060u: goto label_2ea060;
        case 0x2ea064u: goto label_2ea064;
        case 0x2ea068u: goto label_2ea068;
        case 0x2ea06cu: goto label_2ea06c;
        case 0x2ea070u: goto label_2ea070;
        case 0x2ea074u: goto label_2ea074;
        case 0x2ea078u: goto label_2ea078;
        case 0x2ea07cu: goto label_2ea07c;
        case 0x2ea080u: goto label_2ea080;
        case 0x2ea084u: goto label_2ea084;
        case 0x2ea088u: goto label_2ea088;
        case 0x2ea08cu: goto label_2ea08c;
        case 0x2ea090u: goto label_2ea090;
        case 0x2ea094u: goto label_2ea094;
        case 0x2ea098u: goto label_2ea098;
        case 0x2ea09cu: goto label_2ea09c;
        case 0x2ea0a0u: goto label_2ea0a0;
        case 0x2ea0a4u: goto label_2ea0a4;
        case 0x2ea0a8u: goto label_2ea0a8;
        case 0x2ea0acu: goto label_2ea0ac;
        case 0x2ea0b0u: goto label_2ea0b0;
        case 0x2ea0b4u: goto label_2ea0b4;
        case 0x2ea0b8u: goto label_2ea0b8;
        case 0x2ea0bcu: goto label_2ea0bc;
        case 0x2ea0c0u: goto label_2ea0c0;
        case 0x2ea0c4u: goto label_2ea0c4;
        case 0x2ea0c8u: goto label_2ea0c8;
        case 0x2ea0ccu: goto label_2ea0cc;
        case 0x2ea0d0u: goto label_2ea0d0;
        case 0x2ea0d4u: goto label_2ea0d4;
        case 0x2ea0d8u: goto label_2ea0d8;
        case 0x2ea0dcu: goto label_2ea0dc;
        case 0x2ea0e0u: goto label_2ea0e0;
        case 0x2ea0e4u: goto label_2ea0e4;
        case 0x2ea0e8u: goto label_2ea0e8;
        case 0x2ea0ecu: goto label_2ea0ec;
        case 0x2ea0f0u: goto label_2ea0f0;
        case 0x2ea0f4u: goto label_2ea0f4;
        case 0x2ea0f8u: goto label_2ea0f8;
        case 0x2ea0fcu: goto label_2ea0fc;
        case 0x2ea100u: goto label_2ea100;
        case 0x2ea104u: goto label_2ea104;
        case 0x2ea108u: goto label_2ea108;
        case 0x2ea10cu: goto label_2ea10c;
        case 0x2ea110u: goto label_2ea110;
        case 0x2ea114u: goto label_2ea114;
        case 0x2ea118u: goto label_2ea118;
        case 0x2ea11cu: goto label_2ea11c;
        case 0x2ea120u: goto label_2ea120;
        case 0x2ea124u: goto label_2ea124;
        case 0x2ea128u: goto label_2ea128;
        case 0x2ea12cu: goto label_2ea12c;
        case 0x2ea130u: goto label_2ea130;
        case 0x2ea134u: goto label_2ea134;
        case 0x2ea138u: goto label_2ea138;
        case 0x2ea13cu: goto label_2ea13c;
        case 0x2ea140u: goto label_2ea140;
        case 0x2ea144u: goto label_2ea144;
        case 0x2ea148u: goto label_2ea148;
        case 0x2ea14cu: goto label_2ea14c;
        case 0x2ea150u: goto label_2ea150;
        case 0x2ea154u: goto label_2ea154;
        case 0x2ea158u: goto label_2ea158;
        case 0x2ea15cu: goto label_2ea15c;
        case 0x2ea160u: goto label_2ea160;
        case 0x2ea164u: goto label_2ea164;
        case 0x2ea168u: goto label_2ea168;
        case 0x2ea16cu: goto label_2ea16c;
        case 0x2ea170u: goto label_2ea170;
        case 0x2ea174u: goto label_2ea174;
        case 0x2ea178u: goto label_2ea178;
        case 0x2ea17cu: goto label_2ea17c;
        case 0x2ea180u: goto label_2ea180;
        case 0x2ea184u: goto label_2ea184;
        case 0x2ea188u: goto label_2ea188;
        case 0x2ea18cu: goto label_2ea18c;
        case 0x2ea190u: goto label_2ea190;
        case 0x2ea194u: goto label_2ea194;
        case 0x2ea198u: goto label_2ea198;
        case 0x2ea19cu: goto label_2ea19c;
        case 0x2ea1a0u: goto label_2ea1a0;
        case 0x2ea1a4u: goto label_2ea1a4;
        case 0x2ea1a8u: goto label_2ea1a8;
        case 0x2ea1acu: goto label_2ea1ac;
        case 0x2ea1b0u: goto label_2ea1b0;
        case 0x2ea1b4u: goto label_2ea1b4;
        case 0x2ea1b8u: goto label_2ea1b8;
        case 0x2ea1bcu: goto label_2ea1bc;
        case 0x2ea1c0u: goto label_2ea1c0;
        case 0x2ea1c4u: goto label_2ea1c4;
        case 0x2ea1c8u: goto label_2ea1c8;
        case 0x2ea1ccu: goto label_2ea1cc;
        case 0x2ea1d0u: goto label_2ea1d0;
        case 0x2ea1d4u: goto label_2ea1d4;
        case 0x2ea1d8u: goto label_2ea1d8;
        case 0x2ea1dcu: goto label_2ea1dc;
        case 0x2ea1e0u: goto label_2ea1e0;
        case 0x2ea1e4u: goto label_2ea1e4;
        case 0x2ea1e8u: goto label_2ea1e8;
        case 0x2ea1ecu: goto label_2ea1ec;
        case 0x2ea1f0u: goto label_2ea1f0;
        case 0x2ea1f4u: goto label_2ea1f4;
        case 0x2ea1f8u: goto label_2ea1f8;
        case 0x2ea1fcu: goto label_2ea1fc;
        case 0x2ea200u: goto label_2ea200;
        case 0x2ea204u: goto label_2ea204;
        case 0x2ea208u: goto label_2ea208;
        case 0x2ea20cu: goto label_2ea20c;
        case 0x2ea210u: goto label_2ea210;
        case 0x2ea214u: goto label_2ea214;
        case 0x2ea218u: goto label_2ea218;
        case 0x2ea21cu: goto label_2ea21c;
        case 0x2ea220u: goto label_2ea220;
        case 0x2ea224u: goto label_2ea224;
        case 0x2ea228u: goto label_2ea228;
        case 0x2ea22cu: goto label_2ea22c;
        case 0x2ea230u: goto label_2ea230;
        case 0x2ea234u: goto label_2ea234;
        case 0x2ea238u: goto label_2ea238;
        case 0x2ea23cu: goto label_2ea23c;
        case 0x2ea240u: goto label_2ea240;
        case 0x2ea244u: goto label_2ea244;
        case 0x2ea248u: goto label_2ea248;
        case 0x2ea24cu: goto label_2ea24c;
        case 0x2ea250u: goto label_2ea250;
        case 0x2ea254u: goto label_2ea254;
        case 0x2ea258u: goto label_2ea258;
        case 0x2ea25cu: goto label_2ea25c;
        case 0x2ea260u: goto label_2ea260;
        case 0x2ea264u: goto label_2ea264;
        case 0x2ea268u: goto label_2ea268;
        case 0x2ea26cu: goto label_2ea26c;
        case 0x2ea270u: goto label_2ea270;
        case 0x2ea274u: goto label_2ea274;
        case 0x2ea278u: goto label_2ea278;
        case 0x2ea27cu: goto label_2ea27c;
        case 0x2ea280u: goto label_2ea280;
        case 0x2ea284u: goto label_2ea284;
        case 0x2ea288u: goto label_2ea288;
        case 0x2ea28cu: goto label_2ea28c;
        case 0x2ea290u: goto label_2ea290;
        case 0x2ea294u: goto label_2ea294;
        case 0x2ea298u: goto label_2ea298;
        case 0x2ea29cu: goto label_2ea29c;
        case 0x2ea2a0u: goto label_2ea2a0;
        case 0x2ea2a4u: goto label_2ea2a4;
        case 0x2ea2a8u: goto label_2ea2a8;
        case 0x2ea2acu: goto label_2ea2ac;
        case 0x2ea2b0u: goto label_2ea2b0;
        case 0x2ea2b4u: goto label_2ea2b4;
        case 0x2ea2b8u: goto label_2ea2b8;
        case 0x2ea2bcu: goto label_2ea2bc;
        case 0x2ea2c0u: goto label_2ea2c0;
        case 0x2ea2c4u: goto label_2ea2c4;
        case 0x2ea2c8u: goto label_2ea2c8;
        case 0x2ea2ccu: goto label_2ea2cc;
        case 0x2ea2d0u: goto label_2ea2d0;
        case 0x2ea2d4u: goto label_2ea2d4;
        case 0x2ea2d8u: goto label_2ea2d8;
        case 0x2ea2dcu: goto label_2ea2dc;
        case 0x2ea2e0u: goto label_2ea2e0;
        case 0x2ea2e4u: goto label_2ea2e4;
        case 0x2ea2e8u: goto label_2ea2e8;
        case 0x2ea2ecu: goto label_2ea2ec;
        case 0x2ea2f0u: goto label_2ea2f0;
        case 0x2ea2f4u: goto label_2ea2f4;
        case 0x2ea2f8u: goto label_2ea2f8;
        case 0x2ea2fcu: goto label_2ea2fc;
        case 0x2ea300u: goto label_2ea300;
        case 0x2ea304u: goto label_2ea304;
        case 0x2ea308u: goto label_2ea308;
        case 0x2ea30cu: goto label_2ea30c;
        case 0x2ea310u: goto label_2ea310;
        case 0x2ea314u: goto label_2ea314;
        case 0x2ea318u: goto label_2ea318;
        case 0x2ea31cu: goto label_2ea31c;
        case 0x2ea320u: goto label_2ea320;
        case 0x2ea324u: goto label_2ea324;
        case 0x2ea328u: goto label_2ea328;
        case 0x2ea32cu: goto label_2ea32c;
        case 0x2ea330u: goto label_2ea330;
        case 0x2ea334u: goto label_2ea334;
        case 0x2ea338u: goto label_2ea338;
        case 0x2ea33cu: goto label_2ea33c;
        case 0x2ea340u: goto label_2ea340;
        case 0x2ea344u: goto label_2ea344;
        case 0x2ea348u: goto label_2ea348;
        case 0x2ea34cu: goto label_2ea34c;
        case 0x2ea350u: goto label_2ea350;
        case 0x2ea354u: goto label_2ea354;
        case 0x2ea358u: goto label_2ea358;
        case 0x2ea35cu: goto label_2ea35c;
        case 0x2ea360u: goto label_2ea360;
        case 0x2ea364u: goto label_2ea364;
        case 0x2ea368u: goto label_2ea368;
        case 0x2ea36cu: goto label_2ea36c;
        case 0x2ea370u: goto label_2ea370;
        case 0x2ea374u: goto label_2ea374;
        case 0x2ea378u: goto label_2ea378;
        case 0x2ea37cu: goto label_2ea37c;
        case 0x2ea380u: goto label_2ea380;
        case 0x2ea384u: goto label_2ea384;
        case 0x2ea388u: goto label_2ea388;
        case 0x2ea38cu: goto label_2ea38c;
        case 0x2ea390u: goto label_2ea390;
        case 0x2ea394u: goto label_2ea394;
        case 0x2ea398u: goto label_2ea398;
        case 0x2ea39cu: goto label_2ea39c;
        case 0x2ea3a0u: goto label_2ea3a0;
        case 0x2ea3a4u: goto label_2ea3a4;
        case 0x2ea3a8u: goto label_2ea3a8;
        case 0x2ea3acu: goto label_2ea3ac;
        case 0x2ea3b0u: goto label_2ea3b0;
        case 0x2ea3b4u: goto label_2ea3b4;
        case 0x2ea3b8u: goto label_2ea3b8;
        case 0x2ea3bcu: goto label_2ea3bc;
        case 0x2ea3c0u: goto label_2ea3c0;
        case 0x2ea3c4u: goto label_2ea3c4;
        case 0x2ea3c8u: goto label_2ea3c8;
        case 0x2ea3ccu: goto label_2ea3cc;
        case 0x2ea3d0u: goto label_2ea3d0;
        case 0x2ea3d4u: goto label_2ea3d4;
        case 0x2ea3d8u: goto label_2ea3d8;
        case 0x2ea3dcu: goto label_2ea3dc;
        case 0x2ea3e0u: goto label_2ea3e0;
        case 0x2ea3e4u: goto label_2ea3e4;
        case 0x2ea3e8u: goto label_2ea3e8;
        case 0x2ea3ecu: goto label_2ea3ec;
        case 0x2ea3f0u: goto label_2ea3f0;
        case 0x2ea3f4u: goto label_2ea3f4;
        case 0x2ea3f8u: goto label_2ea3f8;
        case 0x2ea3fcu: goto label_2ea3fc;
        case 0x2ea400u: goto label_2ea400;
        case 0x2ea404u: goto label_2ea404;
        case 0x2ea408u: goto label_2ea408;
        case 0x2ea40cu: goto label_2ea40c;
        case 0x2ea410u: goto label_2ea410;
        case 0x2ea414u: goto label_2ea414;
        case 0x2ea418u: goto label_2ea418;
        case 0x2ea41cu: goto label_2ea41c;
        case 0x2ea420u: goto label_2ea420;
        case 0x2ea424u: goto label_2ea424;
        case 0x2ea428u: goto label_2ea428;
        case 0x2ea42cu: goto label_2ea42c;
        case 0x2ea430u: goto label_2ea430;
        case 0x2ea434u: goto label_2ea434;
        case 0x2ea438u: goto label_2ea438;
        case 0x2ea43cu: goto label_2ea43c;
        case 0x2ea440u: goto label_2ea440;
        case 0x2ea444u: goto label_2ea444;
        case 0x2ea448u: goto label_2ea448;
        case 0x2ea44cu: goto label_2ea44c;
        case 0x2ea450u: goto label_2ea450;
        case 0x2ea454u: goto label_2ea454;
        case 0x2ea458u: goto label_2ea458;
        case 0x2ea45cu: goto label_2ea45c;
        case 0x2ea460u: goto label_2ea460;
        case 0x2ea464u: goto label_2ea464;
        case 0x2ea468u: goto label_2ea468;
        case 0x2ea46cu: goto label_2ea46c;
        case 0x2ea470u: goto label_2ea470;
        case 0x2ea474u: goto label_2ea474;
        case 0x2ea478u: goto label_2ea478;
        case 0x2ea47cu: goto label_2ea47c;
        case 0x2ea480u: goto label_2ea480;
        case 0x2ea484u: goto label_2ea484;
        case 0x2ea488u: goto label_2ea488;
        case 0x2ea48cu: goto label_2ea48c;
        case 0x2ea490u: goto label_2ea490;
        case 0x2ea494u: goto label_2ea494;
        case 0x2ea498u: goto label_2ea498;
        case 0x2ea49cu: goto label_2ea49c;
        case 0x2ea4a0u: goto label_2ea4a0;
        case 0x2ea4a4u: goto label_2ea4a4;
        case 0x2ea4a8u: goto label_2ea4a8;
        case 0x2ea4acu: goto label_2ea4ac;
        case 0x2ea4b0u: goto label_2ea4b0;
        case 0x2ea4b4u: goto label_2ea4b4;
        case 0x2ea4b8u: goto label_2ea4b8;
        case 0x2ea4bcu: goto label_2ea4bc;
        case 0x2ea4c0u: goto label_2ea4c0;
        case 0x2ea4c4u: goto label_2ea4c4;
        case 0x2ea4c8u: goto label_2ea4c8;
        case 0x2ea4ccu: goto label_2ea4cc;
        case 0x2ea4d0u: goto label_2ea4d0;
        case 0x2ea4d4u: goto label_2ea4d4;
        case 0x2ea4d8u: goto label_2ea4d8;
        case 0x2ea4dcu: goto label_2ea4dc;
        case 0x2ea4e0u: goto label_2ea4e0;
        case 0x2ea4e4u: goto label_2ea4e4;
        case 0x2ea4e8u: goto label_2ea4e8;
        case 0x2ea4ecu: goto label_2ea4ec;
        case 0x2ea4f0u: goto label_2ea4f0;
        case 0x2ea4f4u: goto label_2ea4f4;
        case 0x2ea4f8u: goto label_2ea4f8;
        case 0x2ea4fcu: goto label_2ea4fc;
        case 0x2ea500u: goto label_2ea500;
        case 0x2ea504u: goto label_2ea504;
        case 0x2ea508u: goto label_2ea508;
        case 0x2ea50cu: goto label_2ea50c;
        case 0x2ea510u: goto label_2ea510;
        case 0x2ea514u: goto label_2ea514;
        case 0x2ea518u: goto label_2ea518;
        case 0x2ea51cu: goto label_2ea51c;
        case 0x2ea520u: goto label_2ea520;
        case 0x2ea524u: goto label_2ea524;
        case 0x2ea528u: goto label_2ea528;
        case 0x2ea52cu: goto label_2ea52c;
        case 0x2ea530u: goto label_2ea530;
        case 0x2ea534u: goto label_2ea534;
        case 0x2ea538u: goto label_2ea538;
        case 0x2ea53cu: goto label_2ea53c;
        case 0x2ea540u: goto label_2ea540;
        case 0x2ea544u: goto label_2ea544;
        case 0x2ea548u: goto label_2ea548;
        case 0x2ea54cu: goto label_2ea54c;
        case 0x2ea550u: goto label_2ea550;
        case 0x2ea554u: goto label_2ea554;
        case 0x2ea558u: goto label_2ea558;
        case 0x2ea55cu: goto label_2ea55c;
        case 0x2ea560u: goto label_2ea560;
        case 0x2ea564u: goto label_2ea564;
        case 0x2ea568u: goto label_2ea568;
        case 0x2ea56cu: goto label_2ea56c;
        case 0x2ea570u: goto label_2ea570;
        case 0x2ea574u: goto label_2ea574;
        case 0x2ea578u: goto label_2ea578;
        case 0x2ea57cu: goto label_2ea57c;
        case 0x2ea580u: goto label_2ea580;
        case 0x2ea584u: goto label_2ea584;
        case 0x2ea588u: goto label_2ea588;
        case 0x2ea58cu: goto label_2ea58c;
        case 0x2ea590u: goto label_2ea590;
        case 0x2ea594u: goto label_2ea594;
        case 0x2ea598u: goto label_2ea598;
        case 0x2ea59cu: goto label_2ea59c;
        case 0x2ea5a0u: goto label_2ea5a0;
        case 0x2ea5a4u: goto label_2ea5a4;
        case 0x2ea5a8u: goto label_2ea5a8;
        case 0x2ea5acu: goto label_2ea5ac;
        case 0x2ea5b0u: goto label_2ea5b0;
        case 0x2ea5b4u: goto label_2ea5b4;
        case 0x2ea5b8u: goto label_2ea5b8;
        case 0x2ea5bcu: goto label_2ea5bc;
        case 0x2ea5c0u: goto label_2ea5c0;
        case 0x2ea5c4u: goto label_2ea5c4;
        case 0x2ea5c8u: goto label_2ea5c8;
        case 0x2ea5ccu: goto label_2ea5cc;
        case 0x2ea5d0u: goto label_2ea5d0;
        case 0x2ea5d4u: goto label_2ea5d4;
        case 0x2ea5d8u: goto label_2ea5d8;
        case 0x2ea5dcu: goto label_2ea5dc;
        case 0x2ea5e0u: goto label_2ea5e0;
        case 0x2ea5e4u: goto label_2ea5e4;
        case 0x2ea5e8u: goto label_2ea5e8;
        case 0x2ea5ecu: goto label_2ea5ec;
        case 0x2ea5f0u: goto label_2ea5f0;
        case 0x2ea5f4u: goto label_2ea5f4;
        case 0x2ea5f8u: goto label_2ea5f8;
        case 0x2ea5fcu: goto label_2ea5fc;
        case 0x2ea600u: goto label_2ea600;
        case 0x2ea604u: goto label_2ea604;
        case 0x2ea608u: goto label_2ea608;
        case 0x2ea60cu: goto label_2ea60c;
        case 0x2ea610u: goto label_2ea610;
        case 0x2ea614u: goto label_2ea614;
        case 0x2ea618u: goto label_2ea618;
        case 0x2ea61cu: goto label_2ea61c;
        case 0x2ea620u: goto label_2ea620;
        case 0x2ea624u: goto label_2ea624;
        case 0x2ea628u: goto label_2ea628;
        case 0x2ea62cu: goto label_2ea62c;
        case 0x2ea630u: goto label_2ea630;
        case 0x2ea634u: goto label_2ea634;
        case 0x2ea638u: goto label_2ea638;
        case 0x2ea63cu: goto label_2ea63c;
        case 0x2ea640u: goto label_2ea640;
        case 0x2ea644u: goto label_2ea644;
        case 0x2ea648u: goto label_2ea648;
        case 0x2ea64cu: goto label_2ea64c;
        case 0x2ea650u: goto label_2ea650;
        case 0x2ea654u: goto label_2ea654;
        case 0x2ea658u: goto label_2ea658;
        case 0x2ea65cu: goto label_2ea65c;
        case 0x2ea660u: goto label_2ea660;
        case 0x2ea664u: goto label_2ea664;
        case 0x2ea668u: goto label_2ea668;
        case 0x2ea66cu: goto label_2ea66c;
        case 0x2ea670u: goto label_2ea670;
        case 0x2ea674u: goto label_2ea674;
        case 0x2ea678u: goto label_2ea678;
        case 0x2ea67cu: goto label_2ea67c;
        case 0x2ea680u: goto label_2ea680;
        case 0x2ea684u: goto label_2ea684;
        case 0x2ea688u: goto label_2ea688;
        case 0x2ea68cu: goto label_2ea68c;
        case 0x2ea690u: goto label_2ea690;
        case 0x2ea694u: goto label_2ea694;
        case 0x2ea698u: goto label_2ea698;
        case 0x2ea69cu: goto label_2ea69c;
        case 0x2ea6a0u: goto label_2ea6a0;
        case 0x2ea6a4u: goto label_2ea6a4;
        case 0x2ea6a8u: goto label_2ea6a8;
        case 0x2ea6acu: goto label_2ea6ac;
        case 0x2ea6b0u: goto label_2ea6b0;
        case 0x2ea6b4u: goto label_2ea6b4;
        case 0x2ea6b8u: goto label_2ea6b8;
        case 0x2ea6bcu: goto label_2ea6bc;
        case 0x2ea6c0u: goto label_2ea6c0;
        case 0x2ea6c4u: goto label_2ea6c4;
        case 0x2ea6c8u: goto label_2ea6c8;
        case 0x2ea6ccu: goto label_2ea6cc;
        case 0x2ea6d0u: goto label_2ea6d0;
        case 0x2ea6d4u: goto label_2ea6d4;
        case 0x2ea6d8u: goto label_2ea6d8;
        case 0x2ea6dcu: goto label_2ea6dc;
        case 0x2ea6e0u: goto label_2ea6e0;
        case 0x2ea6e4u: goto label_2ea6e4;
        case 0x2ea6e8u: goto label_2ea6e8;
        case 0x2ea6ecu: goto label_2ea6ec;
        case 0x2ea6f0u: goto label_2ea6f0;
        case 0x2ea6f4u: goto label_2ea6f4;
        case 0x2ea6f8u: goto label_2ea6f8;
        case 0x2ea6fcu: goto label_2ea6fc;
        case 0x2ea700u: goto label_2ea700;
        case 0x2ea704u: goto label_2ea704;
        case 0x2ea708u: goto label_2ea708;
        case 0x2ea70cu: goto label_2ea70c;
        case 0x2ea710u: goto label_2ea710;
        case 0x2ea714u: goto label_2ea714;
        case 0x2ea718u: goto label_2ea718;
        case 0x2ea71cu: goto label_2ea71c;
        case 0x2ea720u: goto label_2ea720;
        case 0x2ea724u: goto label_2ea724;
        case 0x2ea728u: goto label_2ea728;
        case 0x2ea72cu: goto label_2ea72c;
        case 0x2ea730u: goto label_2ea730;
        case 0x2ea734u: goto label_2ea734;
        case 0x2ea738u: goto label_2ea738;
        case 0x2ea73cu: goto label_2ea73c;
        case 0x2ea740u: goto label_2ea740;
        case 0x2ea744u: goto label_2ea744;
        case 0x2ea748u: goto label_2ea748;
        case 0x2ea74cu: goto label_2ea74c;
        case 0x2ea750u: goto label_2ea750;
        case 0x2ea754u: goto label_2ea754;
        case 0x2ea758u: goto label_2ea758;
        case 0x2ea75cu: goto label_2ea75c;
        case 0x2ea760u: goto label_2ea760;
        case 0x2ea764u: goto label_2ea764;
        case 0x2ea768u: goto label_2ea768;
        case 0x2ea76cu: goto label_2ea76c;
        case 0x2ea770u: goto label_2ea770;
        case 0x2ea774u: goto label_2ea774;
        case 0x2ea778u: goto label_2ea778;
        case 0x2ea77cu: goto label_2ea77c;
        case 0x2ea780u: goto label_2ea780;
        case 0x2ea784u: goto label_2ea784;
        case 0x2ea788u: goto label_2ea788;
        case 0x2ea78cu: goto label_2ea78c;
        case 0x2ea790u: goto label_2ea790;
        case 0x2ea794u: goto label_2ea794;
        case 0x2ea798u: goto label_2ea798;
        case 0x2ea79cu: goto label_2ea79c;
        case 0x2ea7a0u: goto label_2ea7a0;
        case 0x2ea7a4u: goto label_2ea7a4;
        case 0x2ea7a8u: goto label_2ea7a8;
        case 0x2ea7acu: goto label_2ea7ac;
        case 0x2ea7b0u: goto label_2ea7b0;
        case 0x2ea7b4u: goto label_2ea7b4;
        case 0x2ea7b8u: goto label_2ea7b8;
        case 0x2ea7bcu: goto label_2ea7bc;
        case 0x2ea7c0u: goto label_2ea7c0;
        case 0x2ea7c4u: goto label_2ea7c4;
        case 0x2ea7c8u: goto label_2ea7c8;
        case 0x2ea7ccu: goto label_2ea7cc;
        case 0x2ea7d0u: goto label_2ea7d0;
        case 0x2ea7d4u: goto label_2ea7d4;
        case 0x2ea7d8u: goto label_2ea7d8;
        case 0x2ea7dcu: goto label_2ea7dc;
        case 0x2ea7e0u: goto label_2ea7e0;
        case 0x2ea7e4u: goto label_2ea7e4;
        case 0x2ea7e8u: goto label_2ea7e8;
        case 0x2ea7ecu: goto label_2ea7ec;
        case 0x2ea7f0u: goto label_2ea7f0;
        case 0x2ea7f4u: goto label_2ea7f4;
        case 0x2ea7f8u: goto label_2ea7f8;
        case 0x2ea7fcu: goto label_2ea7fc;
        case 0x2ea800u: goto label_2ea800;
        case 0x2ea804u: goto label_2ea804;
        case 0x2ea808u: goto label_2ea808;
        case 0x2ea80cu: goto label_2ea80c;
        case 0x2ea810u: goto label_2ea810;
        case 0x2ea814u: goto label_2ea814;
        case 0x2ea818u: goto label_2ea818;
        case 0x2ea81cu: goto label_2ea81c;
        case 0x2ea820u: goto label_2ea820;
        case 0x2ea824u: goto label_2ea824;
        case 0x2ea828u: goto label_2ea828;
        case 0x2ea82cu: goto label_2ea82c;
        case 0x2ea830u: goto label_2ea830;
        case 0x2ea834u: goto label_2ea834;
        case 0x2ea838u: goto label_2ea838;
        case 0x2ea83cu: goto label_2ea83c;
        case 0x2ea840u: goto label_2ea840;
        case 0x2ea844u: goto label_2ea844;
        case 0x2ea848u: goto label_2ea848;
        case 0x2ea84cu: goto label_2ea84c;
        case 0x2ea850u: goto label_2ea850;
        case 0x2ea854u: goto label_2ea854;
        case 0x2ea858u: goto label_2ea858;
        case 0x2ea85cu: goto label_2ea85c;
        case 0x2ea860u: goto label_2ea860;
        case 0x2ea864u: goto label_2ea864;
        case 0x2ea868u: goto label_2ea868;
        case 0x2ea86cu: goto label_2ea86c;
        case 0x2ea870u: goto label_2ea870;
        case 0x2ea874u: goto label_2ea874;
        case 0x2ea878u: goto label_2ea878;
        case 0x2ea87cu: goto label_2ea87c;
        case 0x2ea880u: goto label_2ea880;
        case 0x2ea884u: goto label_2ea884;
        case 0x2ea888u: goto label_2ea888;
        case 0x2ea88cu: goto label_2ea88c;
        case 0x2ea890u: goto label_2ea890;
        case 0x2ea894u: goto label_2ea894;
        case 0x2ea898u: goto label_2ea898;
        case 0x2ea89cu: goto label_2ea89c;
        case 0x2ea8a0u: goto label_2ea8a0;
        case 0x2ea8a4u: goto label_2ea8a4;
        case 0x2ea8a8u: goto label_2ea8a8;
        case 0x2ea8acu: goto label_2ea8ac;
        case 0x2ea8b0u: goto label_2ea8b0;
        case 0x2ea8b4u: goto label_2ea8b4;
        case 0x2ea8b8u: goto label_2ea8b8;
        case 0x2ea8bcu: goto label_2ea8bc;
        case 0x2ea8c0u: goto label_2ea8c0;
        case 0x2ea8c4u: goto label_2ea8c4;
        case 0x2ea8c8u: goto label_2ea8c8;
        case 0x2ea8ccu: goto label_2ea8cc;
        case 0x2ea8d0u: goto label_2ea8d0;
        case 0x2ea8d4u: goto label_2ea8d4;
        case 0x2ea8d8u: goto label_2ea8d8;
        case 0x2ea8dcu: goto label_2ea8dc;
        case 0x2ea8e0u: goto label_2ea8e0;
        case 0x2ea8e4u: goto label_2ea8e4;
        case 0x2ea8e8u: goto label_2ea8e8;
        case 0x2ea8ecu: goto label_2ea8ec;
        case 0x2ea8f0u: goto label_2ea8f0;
        case 0x2ea8f4u: goto label_2ea8f4;
        case 0x2ea8f8u: goto label_2ea8f8;
        case 0x2ea8fcu: goto label_2ea8fc;
        case 0x2ea900u: goto label_2ea900;
        case 0x2ea904u: goto label_2ea904;
        case 0x2ea908u: goto label_2ea908;
        case 0x2ea90cu: goto label_2ea90c;
        case 0x2ea910u: goto label_2ea910;
        case 0x2ea914u: goto label_2ea914;
        case 0x2ea918u: goto label_2ea918;
        case 0x2ea91cu: goto label_2ea91c;
        case 0x2ea920u: goto label_2ea920;
        case 0x2ea924u: goto label_2ea924;
        case 0x2ea928u: goto label_2ea928;
        case 0x2ea92cu: goto label_2ea92c;
        case 0x2ea930u: goto label_2ea930;
        case 0x2ea934u: goto label_2ea934;
        case 0x2ea938u: goto label_2ea938;
        case 0x2ea93cu: goto label_2ea93c;
        case 0x2ea940u: goto label_2ea940;
        case 0x2ea944u: goto label_2ea944;
        case 0x2ea948u: goto label_2ea948;
        case 0x2ea94cu: goto label_2ea94c;
        case 0x2ea950u: goto label_2ea950;
        case 0x2ea954u: goto label_2ea954;
        case 0x2ea958u: goto label_2ea958;
        case 0x2ea95cu: goto label_2ea95c;
        case 0x2ea960u: goto label_2ea960;
        case 0x2ea964u: goto label_2ea964;
        case 0x2ea968u: goto label_2ea968;
        case 0x2ea96cu: goto label_2ea96c;
        case 0x2ea970u: goto label_2ea970;
        case 0x2ea974u: goto label_2ea974;
        case 0x2ea978u: goto label_2ea978;
        case 0x2ea97cu: goto label_2ea97c;
        case 0x2ea980u: goto label_2ea980;
        case 0x2ea984u: goto label_2ea984;
        case 0x2ea988u: goto label_2ea988;
        case 0x2ea98cu: goto label_2ea98c;
        case 0x2ea990u: goto label_2ea990;
        case 0x2ea994u: goto label_2ea994;
        case 0x2ea998u: goto label_2ea998;
        case 0x2ea99cu: goto label_2ea99c;
        case 0x2ea9a0u: goto label_2ea9a0;
        case 0x2ea9a4u: goto label_2ea9a4;
        case 0x2ea9a8u: goto label_2ea9a8;
        case 0x2ea9acu: goto label_2ea9ac;
        case 0x2ea9b0u: goto label_2ea9b0;
        case 0x2ea9b4u: goto label_2ea9b4;
        case 0x2ea9b8u: goto label_2ea9b8;
        case 0x2ea9bcu: goto label_2ea9bc;
        case 0x2ea9c0u: goto label_2ea9c0;
        case 0x2ea9c4u: goto label_2ea9c4;
        case 0x2ea9c8u: goto label_2ea9c8;
        case 0x2ea9ccu: goto label_2ea9cc;
        case 0x2ea9d0u: goto label_2ea9d0;
        case 0x2ea9d4u: goto label_2ea9d4;
        case 0x2ea9d8u: goto label_2ea9d8;
        case 0x2ea9dcu: goto label_2ea9dc;
        case 0x2ea9e0u: goto label_2ea9e0;
        case 0x2ea9e4u: goto label_2ea9e4;
        case 0x2ea9e8u: goto label_2ea9e8;
        case 0x2ea9ecu: goto label_2ea9ec;
        case 0x2ea9f0u: goto label_2ea9f0;
        case 0x2ea9f4u: goto label_2ea9f4;
        case 0x2ea9f8u: goto label_2ea9f8;
        case 0x2ea9fcu: goto label_2ea9fc;
        case 0x2eaa00u: goto label_2eaa00;
        case 0x2eaa04u: goto label_2eaa04;
        case 0x2eaa08u: goto label_2eaa08;
        case 0x2eaa0cu: goto label_2eaa0c;
        case 0x2eaa10u: goto label_2eaa10;
        case 0x2eaa14u: goto label_2eaa14;
        case 0x2eaa18u: goto label_2eaa18;
        case 0x2eaa1cu: goto label_2eaa1c;
        case 0x2eaa20u: goto label_2eaa20;
        case 0x2eaa24u: goto label_2eaa24;
        case 0x2eaa28u: goto label_2eaa28;
        case 0x2eaa2cu: goto label_2eaa2c;
        case 0x2eaa30u: goto label_2eaa30;
        case 0x2eaa34u: goto label_2eaa34;
        case 0x2eaa38u: goto label_2eaa38;
        case 0x2eaa3cu: goto label_2eaa3c;
        case 0x2eaa40u: goto label_2eaa40;
        case 0x2eaa44u: goto label_2eaa44;
        case 0x2eaa48u: goto label_2eaa48;
        case 0x2eaa4cu: goto label_2eaa4c;
        case 0x2eaa50u: goto label_2eaa50;
        case 0x2eaa54u: goto label_2eaa54;
        case 0x2eaa58u: goto label_2eaa58;
        case 0x2eaa5cu: goto label_2eaa5c;
        case 0x2eaa60u: goto label_2eaa60;
        case 0x2eaa64u: goto label_2eaa64;
        case 0x2eaa68u: goto label_2eaa68;
        case 0x2eaa6cu: goto label_2eaa6c;
        case 0x2eaa70u: goto label_2eaa70;
        case 0x2eaa74u: goto label_2eaa74;
        case 0x2eaa78u: goto label_2eaa78;
        case 0x2eaa7cu: goto label_2eaa7c;
        case 0x2eaa80u: goto label_2eaa80;
        case 0x2eaa84u: goto label_2eaa84;
        case 0x2eaa88u: goto label_2eaa88;
        case 0x2eaa8cu: goto label_2eaa8c;
        case 0x2eaa90u: goto label_2eaa90;
        case 0x2eaa94u: goto label_2eaa94;
        case 0x2eaa98u: goto label_2eaa98;
        case 0x2eaa9cu: goto label_2eaa9c;
        case 0x2eaaa0u: goto label_2eaaa0;
        case 0x2eaaa4u: goto label_2eaaa4;
        case 0x2eaaa8u: goto label_2eaaa8;
        case 0x2eaaacu: goto label_2eaaac;
        case 0x2eaab0u: goto label_2eaab0;
        case 0x2eaab4u: goto label_2eaab4;
        case 0x2eaab8u: goto label_2eaab8;
        case 0x2eaabcu: goto label_2eaabc;
        case 0x2eaac0u: goto label_2eaac0;
        case 0x2eaac4u: goto label_2eaac4;
        case 0x2eaac8u: goto label_2eaac8;
        case 0x2eaaccu: goto label_2eaacc;
        case 0x2eaad0u: goto label_2eaad0;
        case 0x2eaad4u: goto label_2eaad4;
        case 0x2eaad8u: goto label_2eaad8;
        case 0x2eaadcu: goto label_2eaadc;
        case 0x2eaae0u: goto label_2eaae0;
        case 0x2eaae4u: goto label_2eaae4;
        case 0x2eaae8u: goto label_2eaae8;
        case 0x2eaaecu: goto label_2eaaec;
        case 0x2eaaf0u: goto label_2eaaf0;
        case 0x2eaaf4u: goto label_2eaaf4;
        case 0x2eaaf8u: goto label_2eaaf8;
        case 0x2eaafcu: goto label_2eaafc;
        case 0x2eab00u: goto label_2eab00;
        case 0x2eab04u: goto label_2eab04;
        case 0x2eab08u: goto label_2eab08;
        case 0x2eab0cu: goto label_2eab0c;
        case 0x2eab10u: goto label_2eab10;
        case 0x2eab14u: goto label_2eab14;
        case 0x2eab18u: goto label_2eab18;
        case 0x2eab1cu: goto label_2eab1c;
        case 0x2eab20u: goto label_2eab20;
        case 0x2eab24u: goto label_2eab24;
        case 0x2eab28u: goto label_2eab28;
        case 0x2eab2cu: goto label_2eab2c;
        case 0x2eab30u: goto label_2eab30;
        case 0x2eab34u: goto label_2eab34;
        case 0x2eab38u: goto label_2eab38;
        case 0x2eab3cu: goto label_2eab3c;
        case 0x2eab40u: goto label_2eab40;
        case 0x2eab44u: goto label_2eab44;
        case 0x2eab48u: goto label_2eab48;
        case 0x2eab4cu: goto label_2eab4c;
        case 0x2eab50u: goto label_2eab50;
        case 0x2eab54u: goto label_2eab54;
        case 0x2eab58u: goto label_2eab58;
        case 0x2eab5cu: goto label_2eab5c;
        case 0x2eab60u: goto label_2eab60;
        case 0x2eab64u: goto label_2eab64;
        case 0x2eab68u: goto label_2eab68;
        case 0x2eab6cu: goto label_2eab6c;
        case 0x2eab70u: goto label_2eab70;
        case 0x2eab74u: goto label_2eab74;
        case 0x2eab78u: goto label_2eab78;
        case 0x2eab7cu: goto label_2eab7c;
        case 0x2eab80u: goto label_2eab80;
        case 0x2eab84u: goto label_2eab84;
        case 0x2eab88u: goto label_2eab88;
        case 0x2eab8cu: goto label_2eab8c;
        case 0x2eab90u: goto label_2eab90;
        case 0x2eab94u: goto label_2eab94;
        case 0x2eab98u: goto label_2eab98;
        case 0x2eab9cu: goto label_2eab9c;
        case 0x2eaba0u: goto label_2eaba0;
        case 0x2eaba4u: goto label_2eaba4;
        case 0x2eaba8u: goto label_2eaba8;
        case 0x2eabacu: goto label_2eabac;
        case 0x2eabb0u: goto label_2eabb0;
        case 0x2eabb4u: goto label_2eabb4;
        case 0x2eabb8u: goto label_2eabb8;
        case 0x2eabbcu: goto label_2eabbc;
        case 0x2eabc0u: goto label_2eabc0;
        case 0x2eabc4u: goto label_2eabc4;
        case 0x2eabc8u: goto label_2eabc8;
        case 0x2eabccu: goto label_2eabcc;
        case 0x2eabd0u: goto label_2eabd0;
        case 0x2eabd4u: goto label_2eabd4;
        case 0x2eabd8u: goto label_2eabd8;
        case 0x2eabdcu: goto label_2eabdc;
        case 0x2eabe0u: goto label_2eabe0;
        case 0x2eabe4u: goto label_2eabe4;
        case 0x2eabe8u: goto label_2eabe8;
        case 0x2eabecu: goto label_2eabec;
        case 0x2eabf0u: goto label_2eabf0;
        case 0x2eabf4u: goto label_2eabf4;
        case 0x2eabf8u: goto label_2eabf8;
        case 0x2eabfcu: goto label_2eabfc;
        case 0x2eac00u: goto label_2eac00;
        case 0x2eac04u: goto label_2eac04;
        case 0x2eac08u: goto label_2eac08;
        case 0x2eac0cu: goto label_2eac0c;
        case 0x2eac10u: goto label_2eac10;
        case 0x2eac14u: goto label_2eac14;
        case 0x2eac18u: goto label_2eac18;
        case 0x2eac1cu: goto label_2eac1c;
        case 0x2eac20u: goto label_2eac20;
        case 0x2eac24u: goto label_2eac24;
        case 0x2eac28u: goto label_2eac28;
        case 0x2eac2cu: goto label_2eac2c;
        case 0x2eac30u: goto label_2eac30;
        case 0x2eac34u: goto label_2eac34;
        case 0x2eac38u: goto label_2eac38;
        case 0x2eac3cu: goto label_2eac3c;
        case 0x2eac40u: goto label_2eac40;
        case 0x2eac44u: goto label_2eac44;
        case 0x2eac48u: goto label_2eac48;
        case 0x2eac4cu: goto label_2eac4c;
        case 0x2eac50u: goto label_2eac50;
        case 0x2eac54u: goto label_2eac54;
        case 0x2eac58u: goto label_2eac58;
        case 0x2eac5cu: goto label_2eac5c;
        case 0x2eac60u: goto label_2eac60;
        case 0x2eac64u: goto label_2eac64;
        case 0x2eac68u: goto label_2eac68;
        case 0x2eac6cu: goto label_2eac6c;
        case 0x2eac70u: goto label_2eac70;
        case 0x2eac74u: goto label_2eac74;
        case 0x2eac78u: goto label_2eac78;
        case 0x2eac7cu: goto label_2eac7c;
        case 0x2eac80u: goto label_2eac80;
        case 0x2eac84u: goto label_2eac84;
        case 0x2eac88u: goto label_2eac88;
        case 0x2eac8cu: goto label_2eac8c;
        case 0x2eac90u: goto label_2eac90;
        case 0x2eac94u: goto label_2eac94;
        case 0x2eac98u: goto label_2eac98;
        case 0x2eac9cu: goto label_2eac9c;
        case 0x2eaca0u: goto label_2eaca0;
        case 0x2eaca4u: goto label_2eaca4;
        case 0x2eaca8u: goto label_2eaca8;
        case 0x2eacacu: goto label_2eacac;
        case 0x2eacb0u: goto label_2eacb0;
        case 0x2eacb4u: goto label_2eacb4;
        case 0x2eacb8u: goto label_2eacb8;
        case 0x2eacbcu: goto label_2eacbc;
        case 0x2eacc0u: goto label_2eacc0;
        case 0x2eacc4u: goto label_2eacc4;
        case 0x2eacc8u: goto label_2eacc8;
        case 0x2eacccu: goto label_2eaccc;
        case 0x2eacd0u: goto label_2eacd0;
        case 0x2eacd4u: goto label_2eacd4;
        case 0x2eacd8u: goto label_2eacd8;
        case 0x2eacdcu: goto label_2eacdc;
        case 0x2eace0u: goto label_2eace0;
        case 0x2eace4u: goto label_2eace4;
        case 0x2eace8u: goto label_2eace8;
        case 0x2eacecu: goto label_2eacec;
        case 0x2eacf0u: goto label_2eacf0;
        case 0x2eacf4u: goto label_2eacf4;
        case 0x2eacf8u: goto label_2eacf8;
        case 0x2eacfcu: goto label_2eacfc;
        case 0x2ead00u: goto label_2ead00;
        case 0x2ead04u: goto label_2ead04;
        case 0x2ead08u: goto label_2ead08;
        case 0x2ead0cu: goto label_2ead0c;
        case 0x2ead10u: goto label_2ead10;
        case 0x2ead14u: goto label_2ead14;
        case 0x2ead18u: goto label_2ead18;
        case 0x2ead1cu: goto label_2ead1c;
        case 0x2ead20u: goto label_2ead20;
        case 0x2ead24u: goto label_2ead24;
        case 0x2ead28u: goto label_2ead28;
        case 0x2ead2cu: goto label_2ead2c;
        case 0x2ead30u: goto label_2ead30;
        case 0x2ead34u: goto label_2ead34;
        case 0x2ead38u: goto label_2ead38;
        case 0x2ead3cu: goto label_2ead3c;
        case 0x2ead40u: goto label_2ead40;
        case 0x2ead44u: goto label_2ead44;
        case 0x2ead48u: goto label_2ead48;
        case 0x2ead4cu: goto label_2ead4c;
        case 0x2ead50u: goto label_2ead50;
        case 0x2ead54u: goto label_2ead54;
        case 0x2ead58u: goto label_2ead58;
        case 0x2ead5cu: goto label_2ead5c;
        case 0x2ead60u: goto label_2ead60;
        case 0x2ead64u: goto label_2ead64;
        case 0x2ead68u: goto label_2ead68;
        case 0x2ead6cu: goto label_2ead6c;
        case 0x2ead70u: goto label_2ead70;
        case 0x2ead74u: goto label_2ead74;
        case 0x2ead78u: goto label_2ead78;
        case 0x2ead7cu: goto label_2ead7c;
        case 0x2ead80u: goto label_2ead80;
        case 0x2ead84u: goto label_2ead84;
        case 0x2ead88u: goto label_2ead88;
        case 0x2ead8cu: goto label_2ead8c;
        case 0x2ead90u: goto label_2ead90;
        case 0x2ead94u: goto label_2ead94;
        case 0x2ead98u: goto label_2ead98;
        case 0x2ead9cu: goto label_2ead9c;
        case 0x2eada0u: goto label_2eada0;
        case 0x2eada4u: goto label_2eada4;
        case 0x2eada8u: goto label_2eada8;
        case 0x2eadacu: goto label_2eadac;
        case 0x2eadb0u: goto label_2eadb0;
        case 0x2eadb4u: goto label_2eadb4;
        case 0x2eadb8u: goto label_2eadb8;
        case 0x2eadbcu: goto label_2eadbc;
        case 0x2eadc0u: goto label_2eadc0;
        case 0x2eadc4u: goto label_2eadc4;
        case 0x2eadc8u: goto label_2eadc8;
        case 0x2eadccu: goto label_2eadcc;
        case 0x2eadd0u: goto label_2eadd0;
        case 0x2eadd4u: goto label_2eadd4;
        case 0x2eadd8u: goto label_2eadd8;
        case 0x2eaddcu: goto label_2eaddc;
        case 0x2eade0u: goto label_2eade0;
        case 0x2eade4u: goto label_2eade4;
        case 0x2eade8u: goto label_2eade8;
        case 0x2eadecu: goto label_2eadec;
        case 0x2eadf0u: goto label_2eadf0;
        case 0x2eadf4u: goto label_2eadf4;
        case 0x2eadf8u: goto label_2eadf8;
        case 0x2eadfcu: goto label_2eadfc;
        case 0x2eae00u: goto label_2eae00;
        case 0x2eae04u: goto label_2eae04;
        case 0x2eae08u: goto label_2eae08;
        case 0x2eae0cu: goto label_2eae0c;
        case 0x2eae10u: goto label_2eae10;
        case 0x2eae14u: goto label_2eae14;
        case 0x2eae18u: goto label_2eae18;
        case 0x2eae1cu: goto label_2eae1c;
        case 0x2eae20u: goto label_2eae20;
        case 0x2eae24u: goto label_2eae24;
        case 0x2eae28u: goto label_2eae28;
        case 0x2eae2cu: goto label_2eae2c;
        case 0x2eae30u: goto label_2eae30;
        case 0x2eae34u: goto label_2eae34;
        case 0x2eae38u: goto label_2eae38;
        case 0x2eae3cu: goto label_2eae3c;
        case 0x2eae40u: goto label_2eae40;
        case 0x2eae44u: goto label_2eae44;
        case 0x2eae48u: goto label_2eae48;
        case 0x2eae4cu: goto label_2eae4c;
        case 0x2eae50u: goto label_2eae50;
        case 0x2eae54u: goto label_2eae54;
        case 0x2eae58u: goto label_2eae58;
        case 0x2eae5cu: goto label_2eae5c;
        case 0x2eae60u: goto label_2eae60;
        case 0x2eae64u: goto label_2eae64;
        case 0x2eae68u: goto label_2eae68;
        case 0x2eae6cu: goto label_2eae6c;
        case 0x2eae70u: goto label_2eae70;
        case 0x2eae74u: goto label_2eae74;
        case 0x2eae78u: goto label_2eae78;
        case 0x2eae7cu: goto label_2eae7c;
        case 0x2eae80u: goto label_2eae80;
        case 0x2eae84u: goto label_2eae84;
        case 0x2eae88u: goto label_2eae88;
        case 0x2eae8cu: goto label_2eae8c;
        case 0x2eae90u: goto label_2eae90;
        case 0x2eae94u: goto label_2eae94;
        case 0x2eae98u: goto label_2eae98;
        case 0x2eae9cu: goto label_2eae9c;
        case 0x2eaea0u: goto label_2eaea0;
        case 0x2eaea4u: goto label_2eaea4;
        case 0x2eaea8u: goto label_2eaea8;
        case 0x2eaeacu: goto label_2eaeac;
        case 0x2eaeb0u: goto label_2eaeb0;
        case 0x2eaeb4u: goto label_2eaeb4;
        case 0x2eaeb8u: goto label_2eaeb8;
        case 0x2eaebcu: goto label_2eaebc;
        case 0x2eaec0u: goto label_2eaec0;
        case 0x2eaec4u: goto label_2eaec4;
        case 0x2eaec8u: goto label_2eaec8;
        case 0x2eaeccu: goto label_2eaecc;
        case 0x2eaed0u: goto label_2eaed0;
        case 0x2eaed4u: goto label_2eaed4;
        case 0x2eaed8u: goto label_2eaed8;
        case 0x2eaedcu: goto label_2eaedc;
        case 0x2eaee0u: goto label_2eaee0;
        case 0x2eaee4u: goto label_2eaee4;
        case 0x2eaee8u: goto label_2eaee8;
        case 0x2eaeecu: goto label_2eaeec;
        case 0x2eaef0u: goto label_2eaef0;
        case 0x2eaef4u: goto label_2eaef4;
        case 0x2eaef8u: goto label_2eaef8;
        case 0x2eaefcu: goto label_2eaefc;
        case 0x2eaf00u: goto label_2eaf00;
        case 0x2eaf04u: goto label_2eaf04;
        case 0x2eaf08u: goto label_2eaf08;
        case 0x2eaf0cu: goto label_2eaf0c;
        case 0x2eaf10u: goto label_2eaf10;
        case 0x2eaf14u: goto label_2eaf14;
        case 0x2eaf18u: goto label_2eaf18;
        case 0x2eaf1cu: goto label_2eaf1c;
        case 0x2eaf20u: goto label_2eaf20;
        case 0x2eaf24u: goto label_2eaf24;
        case 0x2eaf28u: goto label_2eaf28;
        case 0x2eaf2cu: goto label_2eaf2c;
        case 0x2eaf30u: goto label_2eaf30;
        case 0x2eaf34u: goto label_2eaf34;
        case 0x2eaf38u: goto label_2eaf38;
        case 0x2eaf3cu: goto label_2eaf3c;
        case 0x2eaf40u: goto label_2eaf40;
        case 0x2eaf44u: goto label_2eaf44;
        case 0x2eaf48u: goto label_2eaf48;
        case 0x2eaf4cu: goto label_2eaf4c;
        case 0x2eaf50u: goto label_2eaf50;
        case 0x2eaf54u: goto label_2eaf54;
        case 0x2eaf58u: goto label_2eaf58;
        case 0x2eaf5cu: goto label_2eaf5c;
        case 0x2eaf60u: goto label_2eaf60;
        case 0x2eaf64u: goto label_2eaf64;
        case 0x2eaf68u: goto label_2eaf68;
        case 0x2eaf6cu: goto label_2eaf6c;
        case 0x2eaf70u: goto label_2eaf70;
        case 0x2eaf74u: goto label_2eaf74;
        case 0x2eaf78u: goto label_2eaf78;
        case 0x2eaf7cu: goto label_2eaf7c;
        case 0x2eaf80u: goto label_2eaf80;
        case 0x2eaf84u: goto label_2eaf84;
        case 0x2eaf88u: goto label_2eaf88;
        case 0x2eaf8cu: goto label_2eaf8c;
        case 0x2eaf90u: goto label_2eaf90;
        case 0x2eaf94u: goto label_2eaf94;
        case 0x2eaf98u: goto label_2eaf98;
        case 0x2eaf9cu: goto label_2eaf9c;
        case 0x2eafa0u: goto label_2eafa0;
        case 0x2eafa4u: goto label_2eafa4;
        case 0x2eafa8u: goto label_2eafa8;
        case 0x2eafacu: goto label_2eafac;
        case 0x2eafb0u: goto label_2eafb0;
        case 0x2eafb4u: goto label_2eafb4;
        case 0x2eafb8u: goto label_2eafb8;
        case 0x2eafbcu: goto label_2eafbc;
        case 0x2eafc0u: goto label_2eafc0;
        case 0x2eafc4u: goto label_2eafc4;
        case 0x2eafc8u: goto label_2eafc8;
        case 0x2eafccu: goto label_2eafcc;
        case 0x2eafd0u: goto label_2eafd0;
        case 0x2eafd4u: goto label_2eafd4;
        case 0x2eafd8u: goto label_2eafd8;
        case 0x2eafdcu: goto label_2eafdc;
        case 0x2eafe0u: goto label_2eafe0;
        case 0x2eafe4u: goto label_2eafe4;
        case 0x2eafe8u: goto label_2eafe8;
        case 0x2eafecu: goto label_2eafec;
        case 0x2eaff0u: goto label_2eaff0;
        case 0x2eaff4u: goto label_2eaff4;
        case 0x2eaff8u: goto label_2eaff8;
        case 0x2eaffcu: goto label_2eaffc;
        case 0x2eb000u: goto label_2eb000;
        case 0x2eb004u: goto label_2eb004;
        case 0x2eb008u: goto label_2eb008;
        case 0x2eb00cu: goto label_2eb00c;
        case 0x2eb010u: goto label_2eb010;
        case 0x2eb014u: goto label_2eb014;
        case 0x2eb018u: goto label_2eb018;
        case 0x2eb01cu: goto label_2eb01c;
        case 0x2eb020u: goto label_2eb020;
        case 0x2eb024u: goto label_2eb024;
        case 0x2eb028u: goto label_2eb028;
        case 0x2eb02cu: goto label_2eb02c;
        case 0x2eb030u: goto label_2eb030;
        case 0x2eb034u: goto label_2eb034;
        case 0x2eb038u: goto label_2eb038;
        case 0x2eb03cu: goto label_2eb03c;
        case 0x2eb040u: goto label_2eb040;
        case 0x2eb044u: goto label_2eb044;
        case 0x2eb048u: goto label_2eb048;
        case 0x2eb04cu: goto label_2eb04c;
        case 0x2eb050u: goto label_2eb050;
        case 0x2eb054u: goto label_2eb054;
        case 0x2eb058u: goto label_2eb058;
        case 0x2eb05cu: goto label_2eb05c;
        case 0x2eb060u: goto label_2eb060;
        case 0x2eb064u: goto label_2eb064;
        case 0x2eb068u: goto label_2eb068;
        case 0x2eb06cu: goto label_2eb06c;
        case 0x2eb070u: goto label_2eb070;
        case 0x2eb074u: goto label_2eb074;
        case 0x2eb078u: goto label_2eb078;
        case 0x2eb07cu: goto label_2eb07c;
        case 0x2eb080u: goto label_2eb080;
        case 0x2eb084u: goto label_2eb084;
        case 0x2eb088u: goto label_2eb088;
        case 0x2eb08cu: goto label_2eb08c;
        case 0x2eb090u: goto label_2eb090;
        case 0x2eb094u: goto label_2eb094;
        case 0x2eb098u: goto label_2eb098;
        case 0x2eb09cu: goto label_2eb09c;
        case 0x2eb0a0u: goto label_2eb0a0;
        case 0x2eb0a4u: goto label_2eb0a4;
        case 0x2eb0a8u: goto label_2eb0a8;
        case 0x2eb0acu: goto label_2eb0ac;
        case 0x2eb0b0u: goto label_2eb0b0;
        case 0x2eb0b4u: goto label_2eb0b4;
        case 0x2eb0b8u: goto label_2eb0b8;
        case 0x2eb0bcu: goto label_2eb0bc;
        case 0x2eb0c0u: goto label_2eb0c0;
        case 0x2eb0c4u: goto label_2eb0c4;
        case 0x2eb0c8u: goto label_2eb0c8;
        case 0x2eb0ccu: goto label_2eb0cc;
        case 0x2eb0d0u: goto label_2eb0d0;
        case 0x2eb0d4u: goto label_2eb0d4;
        case 0x2eb0d8u: goto label_2eb0d8;
        case 0x2eb0dcu: goto label_2eb0dc;
        case 0x2eb0e0u: goto label_2eb0e0;
        case 0x2eb0e4u: goto label_2eb0e4;
        case 0x2eb0e8u: goto label_2eb0e8;
        case 0x2eb0ecu: goto label_2eb0ec;
        case 0x2eb0f0u: goto label_2eb0f0;
        case 0x2eb0f4u: goto label_2eb0f4;
        case 0x2eb0f8u: goto label_2eb0f8;
        case 0x2eb0fcu: goto label_2eb0fc;
        case 0x2eb100u: goto label_2eb100;
        case 0x2eb104u: goto label_2eb104;
        case 0x2eb108u: goto label_2eb108;
        case 0x2eb10cu: goto label_2eb10c;
        case 0x2eb110u: goto label_2eb110;
        case 0x2eb114u: goto label_2eb114;
        case 0x2eb118u: goto label_2eb118;
        case 0x2eb11cu: goto label_2eb11c;
        case 0x2eb120u: goto label_2eb120;
        case 0x2eb124u: goto label_2eb124;
        case 0x2eb128u: goto label_2eb128;
        case 0x2eb12cu: goto label_2eb12c;
        case 0x2eb130u: goto label_2eb130;
        case 0x2eb134u: goto label_2eb134;
        case 0x2eb138u: goto label_2eb138;
        case 0x2eb13cu: goto label_2eb13c;
        case 0x2eb140u: goto label_2eb140;
        case 0x2eb144u: goto label_2eb144;
        case 0x2eb148u: goto label_2eb148;
        case 0x2eb14cu: goto label_2eb14c;
        case 0x2eb150u: goto label_2eb150;
        case 0x2eb154u: goto label_2eb154;
        case 0x2eb158u: goto label_2eb158;
        case 0x2eb15cu: goto label_2eb15c;
        case 0x2eb160u: goto label_2eb160;
        case 0x2eb164u: goto label_2eb164;
        case 0x2eb168u: goto label_2eb168;
        case 0x2eb16cu: goto label_2eb16c;
        case 0x2eb170u: goto label_2eb170;
        case 0x2eb174u: goto label_2eb174;
        case 0x2eb178u: goto label_2eb178;
        case 0x2eb17cu: goto label_2eb17c;
        case 0x2eb180u: goto label_2eb180;
        case 0x2eb184u: goto label_2eb184;
        case 0x2eb188u: goto label_2eb188;
        case 0x2eb18cu: goto label_2eb18c;
        case 0x2eb190u: goto label_2eb190;
        case 0x2eb194u: goto label_2eb194;
        case 0x2eb198u: goto label_2eb198;
        case 0x2eb19cu: goto label_2eb19c;
        case 0x2eb1a0u: goto label_2eb1a0;
        case 0x2eb1a4u: goto label_2eb1a4;
        case 0x2eb1a8u: goto label_2eb1a8;
        case 0x2eb1acu: goto label_2eb1ac;
        case 0x2eb1b0u: goto label_2eb1b0;
        case 0x2eb1b4u: goto label_2eb1b4;
        case 0x2eb1b8u: goto label_2eb1b8;
        case 0x2eb1bcu: goto label_2eb1bc;
        case 0x2eb1c0u: goto label_2eb1c0;
        case 0x2eb1c4u: goto label_2eb1c4;
        case 0x2eb1c8u: goto label_2eb1c8;
        case 0x2eb1ccu: goto label_2eb1cc;
        case 0x2eb1d0u: goto label_2eb1d0;
        case 0x2eb1d4u: goto label_2eb1d4;
        case 0x2eb1d8u: goto label_2eb1d8;
        case 0x2eb1dcu: goto label_2eb1dc;
        case 0x2eb1e0u: goto label_2eb1e0;
        case 0x2eb1e4u: goto label_2eb1e4;
        case 0x2eb1e8u: goto label_2eb1e8;
        case 0x2eb1ecu: goto label_2eb1ec;
        case 0x2eb1f0u: goto label_2eb1f0;
        case 0x2eb1f4u: goto label_2eb1f4;
        case 0x2eb1f8u: goto label_2eb1f8;
        case 0x2eb1fcu: goto label_2eb1fc;
        case 0x2eb200u: goto label_2eb200;
        case 0x2eb204u: goto label_2eb204;
        case 0x2eb208u: goto label_2eb208;
        case 0x2eb20cu: goto label_2eb20c;
        case 0x2eb210u: goto label_2eb210;
        case 0x2eb214u: goto label_2eb214;
        case 0x2eb218u: goto label_2eb218;
        case 0x2eb21cu: goto label_2eb21c;
        case 0x2eb220u: goto label_2eb220;
        case 0x2eb224u: goto label_2eb224;
        case 0x2eb228u: goto label_2eb228;
        case 0x2eb22cu: goto label_2eb22c;
        case 0x2eb230u: goto label_2eb230;
        case 0x2eb234u: goto label_2eb234;
        case 0x2eb238u: goto label_2eb238;
        case 0x2eb23cu: goto label_2eb23c;
        case 0x2eb240u: goto label_2eb240;
        case 0x2eb244u: goto label_2eb244;
        case 0x2eb248u: goto label_2eb248;
        case 0x2eb24cu: goto label_2eb24c;
        case 0x2eb250u: goto label_2eb250;
        case 0x2eb254u: goto label_2eb254;
        case 0x2eb258u: goto label_2eb258;
        case 0x2eb25cu: goto label_2eb25c;
        case 0x2eb260u: goto label_2eb260;
        case 0x2eb264u: goto label_2eb264;
        case 0x2eb268u: goto label_2eb268;
        case 0x2eb26cu: goto label_2eb26c;
        case 0x2eb270u: goto label_2eb270;
        case 0x2eb274u: goto label_2eb274;
        case 0x2eb278u: goto label_2eb278;
        case 0x2eb27cu: goto label_2eb27c;
        case 0x2eb280u: goto label_2eb280;
        case 0x2eb284u: goto label_2eb284;
        case 0x2eb288u: goto label_2eb288;
        case 0x2eb28cu: goto label_2eb28c;
        case 0x2eb290u: goto label_2eb290;
        case 0x2eb294u: goto label_2eb294;
        case 0x2eb298u: goto label_2eb298;
        case 0x2eb29cu: goto label_2eb29c;
        case 0x2eb2a0u: goto label_2eb2a0;
        case 0x2eb2a4u: goto label_2eb2a4;
        case 0x2eb2a8u: goto label_2eb2a8;
        case 0x2eb2acu: goto label_2eb2ac;
        case 0x2eb2b0u: goto label_2eb2b0;
        case 0x2eb2b4u: goto label_2eb2b4;
        case 0x2eb2b8u: goto label_2eb2b8;
        case 0x2eb2bcu: goto label_2eb2bc;
        case 0x2eb2c0u: goto label_2eb2c0;
        case 0x2eb2c4u: goto label_2eb2c4;
        case 0x2eb2c8u: goto label_2eb2c8;
        case 0x2eb2ccu: goto label_2eb2cc;
        case 0x2eb2d0u: goto label_2eb2d0;
        case 0x2eb2d4u: goto label_2eb2d4;
        case 0x2eb2d8u: goto label_2eb2d8;
        case 0x2eb2dcu: goto label_2eb2dc;
        case 0x2eb2e0u: goto label_2eb2e0;
        case 0x2eb2e4u: goto label_2eb2e4;
        case 0x2eb2e8u: goto label_2eb2e8;
        case 0x2eb2ecu: goto label_2eb2ec;
        case 0x2eb2f0u: goto label_2eb2f0;
        case 0x2eb2f4u: goto label_2eb2f4;
        case 0x2eb2f8u: goto label_2eb2f8;
        case 0x2eb2fcu: goto label_2eb2fc;
        case 0x2eb300u: goto label_2eb300;
        case 0x2eb304u: goto label_2eb304;
        case 0x2eb308u: goto label_2eb308;
        case 0x2eb30cu: goto label_2eb30c;
        case 0x2eb310u: goto label_2eb310;
        case 0x2eb314u: goto label_2eb314;
        case 0x2eb318u: goto label_2eb318;
        case 0x2eb31cu: goto label_2eb31c;
        case 0x2eb320u: goto label_2eb320;
        case 0x2eb324u: goto label_2eb324;
        case 0x2eb328u: goto label_2eb328;
        case 0x2eb32cu: goto label_2eb32c;
        case 0x2eb330u: goto label_2eb330;
        case 0x2eb334u: goto label_2eb334;
        case 0x2eb338u: goto label_2eb338;
        case 0x2eb33cu: goto label_2eb33c;
        case 0x2eb340u: goto label_2eb340;
        case 0x2eb344u: goto label_2eb344;
        case 0x2eb348u: goto label_2eb348;
        case 0x2eb34cu: goto label_2eb34c;
        case 0x2eb350u: goto label_2eb350;
        case 0x2eb354u: goto label_2eb354;
        case 0x2eb358u: goto label_2eb358;
        case 0x2eb35cu: goto label_2eb35c;
        case 0x2eb360u: goto label_2eb360;
        case 0x2eb364u: goto label_2eb364;
        case 0x2eb368u: goto label_2eb368;
        case 0x2eb36cu: goto label_2eb36c;
        case 0x2eb370u: goto label_2eb370;
        case 0x2eb374u: goto label_2eb374;
        case 0x2eb378u: goto label_2eb378;
        case 0x2eb37cu: goto label_2eb37c;
        case 0x2eb380u: goto label_2eb380;
        case 0x2eb384u: goto label_2eb384;
        case 0x2eb388u: goto label_2eb388;
        case 0x2eb38cu: goto label_2eb38c;
        case 0x2eb390u: goto label_2eb390;
        case 0x2eb394u: goto label_2eb394;
        case 0x2eb398u: goto label_2eb398;
        case 0x2eb39cu: goto label_2eb39c;
        case 0x2eb3a0u: goto label_2eb3a0;
        case 0x2eb3a4u: goto label_2eb3a4;
        case 0x2eb3a8u: goto label_2eb3a8;
        case 0x2eb3acu: goto label_2eb3ac;
        case 0x2eb3b0u: goto label_2eb3b0;
        case 0x2eb3b4u: goto label_2eb3b4;
        case 0x2eb3b8u: goto label_2eb3b8;
        case 0x2eb3bcu: goto label_2eb3bc;
        case 0x2eb3c0u: goto label_2eb3c0;
        case 0x2eb3c4u: goto label_2eb3c4;
        case 0x2eb3c8u: goto label_2eb3c8;
        case 0x2eb3ccu: goto label_2eb3cc;
        case 0x2eb3d0u: goto label_2eb3d0;
        case 0x2eb3d4u: goto label_2eb3d4;
        case 0x2eb3d8u: goto label_2eb3d8;
        case 0x2eb3dcu: goto label_2eb3dc;
        case 0x2eb3e0u: goto label_2eb3e0;
        case 0x2eb3e4u: goto label_2eb3e4;
        case 0x2eb3e8u: goto label_2eb3e8;
        case 0x2eb3ecu: goto label_2eb3ec;
        case 0x2eb3f0u: goto label_2eb3f0;
        case 0x2eb3f4u: goto label_2eb3f4;
        case 0x2eb3f8u: goto label_2eb3f8;
        case 0x2eb3fcu: goto label_2eb3fc;
        case 0x2eb400u: goto label_2eb400;
        case 0x2eb404u: goto label_2eb404;
        case 0x2eb408u: goto label_2eb408;
        case 0x2eb40cu: goto label_2eb40c;
        case 0x2eb410u: goto label_2eb410;
        case 0x2eb414u: goto label_2eb414;
        case 0x2eb418u: goto label_2eb418;
        case 0x2eb41cu: goto label_2eb41c;
        case 0x2eb420u: goto label_2eb420;
        case 0x2eb424u: goto label_2eb424;
        case 0x2eb428u: goto label_2eb428;
        case 0x2eb42cu: goto label_2eb42c;
        case 0x2eb430u: goto label_2eb430;
        case 0x2eb434u: goto label_2eb434;
        case 0x2eb438u: goto label_2eb438;
        case 0x2eb43cu: goto label_2eb43c;
        case 0x2eb440u: goto label_2eb440;
        case 0x2eb444u: goto label_2eb444;
        case 0x2eb448u: goto label_2eb448;
        case 0x2eb44cu: goto label_2eb44c;
        case 0x2eb450u: goto label_2eb450;
        case 0x2eb454u: goto label_2eb454;
        case 0x2eb458u: goto label_2eb458;
        case 0x2eb45cu: goto label_2eb45c;
        case 0x2eb460u: goto label_2eb460;
        case 0x2eb464u: goto label_2eb464;
        case 0x2eb468u: goto label_2eb468;
        case 0x2eb46cu: goto label_2eb46c;
        case 0x2eb470u: goto label_2eb470;
        case 0x2eb474u: goto label_2eb474;
        case 0x2eb478u: goto label_2eb478;
        case 0x2eb47cu: goto label_2eb47c;
        case 0x2eb480u: goto label_2eb480;
        case 0x2eb484u: goto label_2eb484;
        case 0x2eb488u: goto label_2eb488;
        case 0x2eb48cu: goto label_2eb48c;
        case 0x2eb490u: goto label_2eb490;
        case 0x2eb494u: goto label_2eb494;
        case 0x2eb498u: goto label_2eb498;
        case 0x2eb49cu: goto label_2eb49c;
        case 0x2eb4a0u: goto label_2eb4a0;
        case 0x2eb4a4u: goto label_2eb4a4;
        case 0x2eb4a8u: goto label_2eb4a8;
        case 0x2eb4acu: goto label_2eb4ac;
        case 0x2eb4b0u: goto label_2eb4b0;
        case 0x2eb4b4u: goto label_2eb4b4;
        case 0x2eb4b8u: goto label_2eb4b8;
        case 0x2eb4bcu: goto label_2eb4bc;
        case 0x2eb4c0u: goto label_2eb4c0;
        case 0x2eb4c4u: goto label_2eb4c4;
        case 0x2eb4c8u: goto label_2eb4c8;
        case 0x2eb4ccu: goto label_2eb4cc;
        case 0x2eb4d0u: goto label_2eb4d0;
        case 0x2eb4d4u: goto label_2eb4d4;
        case 0x2eb4d8u: goto label_2eb4d8;
        case 0x2eb4dcu: goto label_2eb4dc;
        case 0x2eb4e0u: goto label_2eb4e0;
        case 0x2eb4e4u: goto label_2eb4e4;
        case 0x2eb4e8u: goto label_2eb4e8;
        case 0x2eb4ecu: goto label_2eb4ec;
        case 0x2eb4f0u: goto label_2eb4f0;
        case 0x2eb4f4u: goto label_2eb4f4;
        case 0x2eb4f8u: goto label_2eb4f8;
        case 0x2eb4fcu: goto label_2eb4fc;
        case 0x2eb500u: goto label_2eb500;
        case 0x2eb504u: goto label_2eb504;
        case 0x2eb508u: goto label_2eb508;
        case 0x2eb50cu: goto label_2eb50c;
        case 0x2eb510u: goto label_2eb510;
        case 0x2eb514u: goto label_2eb514;
        case 0x2eb518u: goto label_2eb518;
        case 0x2eb51cu: goto label_2eb51c;
        case 0x2eb520u: goto label_2eb520;
        case 0x2eb524u: goto label_2eb524;
        case 0x2eb528u: goto label_2eb528;
        case 0x2eb52cu: goto label_2eb52c;
        case 0x2eb530u: goto label_2eb530;
        case 0x2eb534u: goto label_2eb534;
        case 0x2eb538u: goto label_2eb538;
        case 0x2eb53cu: goto label_2eb53c;
        case 0x2eb540u: goto label_2eb540;
        case 0x2eb544u: goto label_2eb544;
        case 0x2eb548u: goto label_2eb548;
        case 0x2eb54cu: goto label_2eb54c;
        case 0x2eb550u: goto label_2eb550;
        case 0x2eb554u: goto label_2eb554;
        case 0x2eb558u: goto label_2eb558;
        case 0x2eb55cu: goto label_2eb55c;
        case 0x2eb560u: goto label_2eb560;
        case 0x2eb564u: goto label_2eb564;
        case 0x2eb568u: goto label_2eb568;
        case 0x2eb56cu: goto label_2eb56c;
        case 0x2eb570u: goto label_2eb570;
        case 0x2eb574u: goto label_2eb574;
        case 0x2eb578u: goto label_2eb578;
        case 0x2eb57cu: goto label_2eb57c;
        case 0x2eb580u: goto label_2eb580;
        case 0x2eb584u: goto label_2eb584;
        case 0x2eb588u: goto label_2eb588;
        case 0x2eb58cu: goto label_2eb58c;
        case 0x2eb590u: goto label_2eb590;
        case 0x2eb594u: goto label_2eb594;
        case 0x2eb598u: goto label_2eb598;
        case 0x2eb59cu: goto label_2eb59c;
        case 0x2eb5a0u: goto label_2eb5a0;
        case 0x2eb5a4u: goto label_2eb5a4;
        case 0x2eb5a8u: goto label_2eb5a8;
        case 0x2eb5acu: goto label_2eb5ac;
        case 0x2eb5b0u: goto label_2eb5b0;
        case 0x2eb5b4u: goto label_2eb5b4;
        case 0x2eb5b8u: goto label_2eb5b8;
        case 0x2eb5bcu: goto label_2eb5bc;
        case 0x2eb5c0u: goto label_2eb5c0;
        case 0x2eb5c4u: goto label_2eb5c4;
        case 0x2eb5c8u: goto label_2eb5c8;
        case 0x2eb5ccu: goto label_2eb5cc;
        case 0x2eb5d0u: goto label_2eb5d0;
        case 0x2eb5d4u: goto label_2eb5d4;
        case 0x2eb5d8u: goto label_2eb5d8;
        case 0x2eb5dcu: goto label_2eb5dc;
        case 0x2eb5e0u: goto label_2eb5e0;
        case 0x2eb5e4u: goto label_2eb5e4;
        case 0x2eb5e8u: goto label_2eb5e8;
        case 0x2eb5ecu: goto label_2eb5ec;
        case 0x2eb5f0u: goto label_2eb5f0;
        case 0x2eb5f4u: goto label_2eb5f4;
        case 0x2eb5f8u: goto label_2eb5f8;
        case 0x2eb5fcu: goto label_2eb5fc;
        case 0x2eb600u: goto label_2eb600;
        case 0x2eb604u: goto label_2eb604;
        case 0x2eb608u: goto label_2eb608;
        case 0x2eb60cu: goto label_2eb60c;
        case 0x2eb610u: goto label_2eb610;
        case 0x2eb614u: goto label_2eb614;
        case 0x2eb618u: goto label_2eb618;
        case 0x2eb61cu: goto label_2eb61c;
        case 0x2eb620u: goto label_2eb620;
        case 0x2eb624u: goto label_2eb624;
        case 0x2eb628u: goto label_2eb628;
        case 0x2eb62cu: goto label_2eb62c;
        case 0x2eb630u: goto label_2eb630;
        case 0x2eb634u: goto label_2eb634;
        case 0x2eb638u: goto label_2eb638;
        case 0x2eb63cu: goto label_2eb63c;
        case 0x2eb640u: goto label_2eb640;
        case 0x2eb644u: goto label_2eb644;
        case 0x2eb648u: goto label_2eb648;
        case 0x2eb64cu: goto label_2eb64c;
        case 0x2eb650u: goto label_2eb650;
        case 0x2eb654u: goto label_2eb654;
        case 0x2eb658u: goto label_2eb658;
        case 0x2eb65cu: goto label_2eb65c;
        case 0x2eb660u: goto label_2eb660;
        case 0x2eb664u: goto label_2eb664;
        case 0x2eb668u: goto label_2eb668;
        case 0x2eb66cu: goto label_2eb66c;
        case 0x2eb670u: goto label_2eb670;
        case 0x2eb674u: goto label_2eb674;
        case 0x2eb678u: goto label_2eb678;
        case 0x2eb67cu: goto label_2eb67c;
        case 0x2eb680u: goto label_2eb680;
        case 0x2eb684u: goto label_2eb684;
        case 0x2eb688u: goto label_2eb688;
        case 0x2eb68cu: goto label_2eb68c;
        case 0x2eb690u: goto label_2eb690;
        case 0x2eb694u: goto label_2eb694;
        case 0x2eb698u: goto label_2eb698;
        case 0x2eb69cu: goto label_2eb69c;
        case 0x2eb6a0u: goto label_2eb6a0;
        case 0x2eb6a4u: goto label_2eb6a4;
        case 0x2eb6a8u: goto label_2eb6a8;
        case 0x2eb6acu: goto label_2eb6ac;
        case 0x2eb6b0u: goto label_2eb6b0;
        case 0x2eb6b4u: goto label_2eb6b4;
        case 0x2eb6b8u: goto label_2eb6b8;
        case 0x2eb6bcu: goto label_2eb6bc;
        case 0x2eb6c0u: goto label_2eb6c0;
        case 0x2eb6c4u: goto label_2eb6c4;
        case 0x2eb6c8u: goto label_2eb6c8;
        case 0x2eb6ccu: goto label_2eb6cc;
        case 0x2eb6d0u: goto label_2eb6d0;
        case 0x2eb6d4u: goto label_2eb6d4;
        case 0x2eb6d8u: goto label_2eb6d8;
        case 0x2eb6dcu: goto label_2eb6dc;
        case 0x2eb6e0u: goto label_2eb6e0;
        case 0x2eb6e4u: goto label_2eb6e4;
        case 0x2eb6e8u: goto label_2eb6e8;
        case 0x2eb6ecu: goto label_2eb6ec;
        case 0x2eb6f0u: goto label_2eb6f0;
        case 0x2eb6f4u: goto label_2eb6f4;
        case 0x2eb6f8u: goto label_2eb6f8;
        case 0x2eb6fcu: goto label_2eb6fc;
        case 0x2eb700u: goto label_2eb700;
        case 0x2eb704u: goto label_2eb704;
        case 0x2eb708u: goto label_2eb708;
        case 0x2eb70cu: goto label_2eb70c;
        case 0x2eb710u: goto label_2eb710;
        case 0x2eb714u: goto label_2eb714;
        case 0x2eb718u: goto label_2eb718;
        case 0x2eb71cu: goto label_2eb71c;
        case 0x2eb720u: goto label_2eb720;
        case 0x2eb724u: goto label_2eb724;
        case 0x2eb728u: goto label_2eb728;
        case 0x2eb72cu: goto label_2eb72c;
        case 0x2eb730u: goto label_2eb730;
        case 0x2eb734u: goto label_2eb734;
        case 0x2eb738u: goto label_2eb738;
        case 0x2eb73cu: goto label_2eb73c;
        case 0x2eb740u: goto label_2eb740;
        case 0x2eb744u: goto label_2eb744;
        case 0x2eb748u: goto label_2eb748;
        case 0x2eb74cu: goto label_2eb74c;
        case 0x2eb750u: goto label_2eb750;
        case 0x2eb754u: goto label_2eb754;
        case 0x2eb758u: goto label_2eb758;
        case 0x2eb75cu: goto label_2eb75c;
        case 0x2eb760u: goto label_2eb760;
        case 0x2eb764u: goto label_2eb764;
        case 0x2eb768u: goto label_2eb768;
        case 0x2eb76cu: goto label_2eb76c;
        case 0x2eb770u: goto label_2eb770;
        case 0x2eb774u: goto label_2eb774;
        case 0x2eb778u: goto label_2eb778;
        case 0x2eb77cu: goto label_2eb77c;
        case 0x2eb780u: goto label_2eb780;
        case 0x2eb784u: goto label_2eb784;
        case 0x2eb788u: goto label_2eb788;
        case 0x2eb78cu: goto label_2eb78c;
        case 0x2eb790u: goto label_2eb790;
        case 0x2eb794u: goto label_2eb794;
        case 0x2eb798u: goto label_2eb798;
        case 0x2eb79cu: goto label_2eb79c;
        case 0x2eb7a0u: goto label_2eb7a0;
        case 0x2eb7a4u: goto label_2eb7a4;
        case 0x2eb7a8u: goto label_2eb7a8;
        case 0x2eb7acu: goto label_2eb7ac;
        case 0x2eb7b0u: goto label_2eb7b0;
        case 0x2eb7b4u: goto label_2eb7b4;
        case 0x2eb7b8u: goto label_2eb7b8;
        case 0x2eb7bcu: goto label_2eb7bc;
        case 0x2eb7c0u: goto label_2eb7c0;
        case 0x2eb7c4u: goto label_2eb7c4;
        case 0x2eb7c8u: goto label_2eb7c8;
        case 0x2eb7ccu: goto label_2eb7cc;
        case 0x2eb7d0u: goto label_2eb7d0;
        case 0x2eb7d4u: goto label_2eb7d4;
        case 0x2eb7d8u: goto label_2eb7d8;
        case 0x2eb7dcu: goto label_2eb7dc;
        case 0x2eb7e0u: goto label_2eb7e0;
        case 0x2eb7e4u: goto label_2eb7e4;
        case 0x2eb7e8u: goto label_2eb7e8;
        case 0x2eb7ecu: goto label_2eb7ec;
        case 0x2eb7f0u: goto label_2eb7f0;
        case 0x2eb7f4u: goto label_2eb7f4;
        case 0x2eb7f8u: goto label_2eb7f8;
        case 0x2eb7fcu: goto label_2eb7fc;
        case 0x2eb800u: goto label_2eb800;
        case 0x2eb804u: goto label_2eb804;
        case 0x2eb808u: goto label_2eb808;
        case 0x2eb80cu: goto label_2eb80c;
        case 0x2eb810u: goto label_2eb810;
        case 0x2eb814u: goto label_2eb814;
        case 0x2eb818u: goto label_2eb818;
        case 0x2eb81cu: goto label_2eb81c;
        case 0x2eb820u: goto label_2eb820;
        case 0x2eb824u: goto label_2eb824;
        case 0x2eb828u: goto label_2eb828;
        case 0x2eb82cu: goto label_2eb82c;
        case 0x2eb830u: goto label_2eb830;
        case 0x2eb834u: goto label_2eb834;
        case 0x2eb838u: goto label_2eb838;
        case 0x2eb83cu: goto label_2eb83c;
        case 0x2eb840u: goto label_2eb840;
        case 0x2eb844u: goto label_2eb844;
        case 0x2eb848u: goto label_2eb848;
        case 0x2eb84cu: goto label_2eb84c;
        case 0x2eb850u: goto label_2eb850;
        case 0x2eb854u: goto label_2eb854;
        case 0x2eb858u: goto label_2eb858;
        case 0x2eb85cu: goto label_2eb85c;
        case 0x2eb860u: goto label_2eb860;
        case 0x2eb864u: goto label_2eb864;
        case 0x2eb868u: goto label_2eb868;
        case 0x2eb86cu: goto label_2eb86c;
        case 0x2eb870u: goto label_2eb870;
        case 0x2eb874u: goto label_2eb874;
        case 0x2eb878u: goto label_2eb878;
        case 0x2eb87cu: goto label_2eb87c;
        case 0x2eb880u: goto label_2eb880;
        case 0x2eb884u: goto label_2eb884;
        case 0x2eb888u: goto label_2eb888;
        case 0x2eb88cu: goto label_2eb88c;
        case 0x2eb890u: goto label_2eb890;
        case 0x2eb894u: goto label_2eb894;
        case 0x2eb898u: goto label_2eb898;
        case 0x2eb89cu: goto label_2eb89c;
        case 0x2eb8a0u: goto label_2eb8a0;
        case 0x2eb8a4u: goto label_2eb8a4;
        case 0x2eb8a8u: goto label_2eb8a8;
        case 0x2eb8acu: goto label_2eb8ac;
        case 0x2eb8b0u: goto label_2eb8b0;
        case 0x2eb8b4u: goto label_2eb8b4;
        case 0x2eb8b8u: goto label_2eb8b8;
        case 0x2eb8bcu: goto label_2eb8bc;
        case 0x2eb8c0u: goto label_2eb8c0;
        case 0x2eb8c4u: goto label_2eb8c4;
        case 0x2eb8c8u: goto label_2eb8c8;
        case 0x2eb8ccu: goto label_2eb8cc;
        case 0x2eb8d0u: goto label_2eb8d0;
        case 0x2eb8d4u: goto label_2eb8d4;
        case 0x2eb8d8u: goto label_2eb8d8;
        case 0x2eb8dcu: goto label_2eb8dc;
        case 0x2eb8e0u: goto label_2eb8e0;
        case 0x2eb8e4u: goto label_2eb8e4;
        case 0x2eb8e8u: goto label_2eb8e8;
        case 0x2eb8ecu: goto label_2eb8ec;
        case 0x2eb8f0u: goto label_2eb8f0;
        case 0x2eb8f4u: goto label_2eb8f4;
        case 0x2eb8f8u: goto label_2eb8f8;
        case 0x2eb8fcu: goto label_2eb8fc;
        case 0x2eb900u: goto label_2eb900;
        case 0x2eb904u: goto label_2eb904;
        case 0x2eb908u: goto label_2eb908;
        case 0x2eb90cu: goto label_2eb90c;
        case 0x2eb910u: goto label_2eb910;
        case 0x2eb914u: goto label_2eb914;
        case 0x2eb918u: goto label_2eb918;
        case 0x2eb91cu: goto label_2eb91c;
        case 0x2eb920u: goto label_2eb920;
        case 0x2eb924u: goto label_2eb924;
        case 0x2eb928u: goto label_2eb928;
        case 0x2eb92cu: goto label_2eb92c;
        case 0x2eb930u: goto label_2eb930;
        case 0x2eb934u: goto label_2eb934;
        case 0x2eb938u: goto label_2eb938;
        case 0x2eb93cu: goto label_2eb93c;
        case 0x2eb940u: goto label_2eb940;
        case 0x2eb944u: goto label_2eb944;
        case 0x2eb948u: goto label_2eb948;
        case 0x2eb94cu: goto label_2eb94c;
        case 0x2eb950u: goto label_2eb950;
        case 0x2eb954u: goto label_2eb954;
        case 0x2eb958u: goto label_2eb958;
        case 0x2eb95cu: goto label_2eb95c;
        case 0x2eb960u: goto label_2eb960;
        case 0x2eb964u: goto label_2eb964;
        case 0x2eb968u: goto label_2eb968;
        case 0x2eb96cu: goto label_2eb96c;
        case 0x2eb970u: goto label_2eb970;
        case 0x2eb974u: goto label_2eb974;
        case 0x2eb978u: goto label_2eb978;
        case 0x2eb97cu: goto label_2eb97c;
        case 0x2eb980u: goto label_2eb980;
        case 0x2eb984u: goto label_2eb984;
        case 0x2eb988u: goto label_2eb988;
        case 0x2eb98cu: goto label_2eb98c;
        case 0x2eb990u: goto label_2eb990;
        case 0x2eb994u: goto label_2eb994;
        case 0x2eb998u: goto label_2eb998;
        case 0x2eb99cu: goto label_2eb99c;
        case 0x2eb9a0u: goto label_2eb9a0;
        case 0x2eb9a4u: goto label_2eb9a4;
        case 0x2eb9a8u: goto label_2eb9a8;
        case 0x2eb9acu: goto label_2eb9ac;
        case 0x2eb9b0u: goto label_2eb9b0;
        case 0x2eb9b4u: goto label_2eb9b4;
        case 0x2eb9b8u: goto label_2eb9b8;
        case 0x2eb9bcu: goto label_2eb9bc;
        case 0x2eb9c0u: goto label_2eb9c0;
        case 0x2eb9c4u: goto label_2eb9c4;
        case 0x2eb9c8u: goto label_2eb9c8;
        case 0x2eb9ccu: goto label_2eb9cc;
        case 0x2eb9d0u: goto label_2eb9d0;
        case 0x2eb9d4u: goto label_2eb9d4;
        case 0x2eb9d8u: goto label_2eb9d8;
        case 0x2eb9dcu: goto label_2eb9dc;
        case 0x2eb9e0u: goto label_2eb9e0;
        case 0x2eb9e4u: goto label_2eb9e4;
        case 0x2eb9e8u: goto label_2eb9e8;
        case 0x2eb9ecu: goto label_2eb9ec;
        case 0x2eb9f0u: goto label_2eb9f0;
        case 0x2eb9f4u: goto label_2eb9f4;
        case 0x2eb9f8u: goto label_2eb9f8;
        case 0x2eb9fcu: goto label_2eb9fc;
        case 0x2eba00u: goto label_2eba00;
        case 0x2eba04u: goto label_2eba04;
        case 0x2eba08u: goto label_2eba08;
        case 0x2eba0cu: goto label_2eba0c;
        case 0x2eba10u: goto label_2eba10;
        case 0x2eba14u: goto label_2eba14;
        case 0x2eba18u: goto label_2eba18;
        case 0x2eba1cu: goto label_2eba1c;
        case 0x2eba20u: goto label_2eba20;
        case 0x2eba24u: goto label_2eba24;
        case 0x2eba28u: goto label_2eba28;
        case 0x2eba2cu: goto label_2eba2c;
        case 0x2eba30u: goto label_2eba30;
        case 0x2eba34u: goto label_2eba34;
        case 0x2eba38u: goto label_2eba38;
        case 0x2eba3cu: goto label_2eba3c;
        case 0x2eba40u: goto label_2eba40;
        case 0x2eba44u: goto label_2eba44;
        case 0x2eba48u: goto label_2eba48;
        case 0x2eba4cu: goto label_2eba4c;
        case 0x2eba50u: goto label_2eba50;
        case 0x2eba54u: goto label_2eba54;
        case 0x2eba58u: goto label_2eba58;
        case 0x2eba5cu: goto label_2eba5c;
        case 0x2eba60u: goto label_2eba60;
        case 0x2eba64u: goto label_2eba64;
        case 0x2eba68u: goto label_2eba68;
        case 0x2eba6cu: goto label_2eba6c;
        case 0x2eba70u: goto label_2eba70;
        case 0x2eba74u: goto label_2eba74;
        case 0x2eba78u: goto label_2eba78;
        case 0x2eba7cu: goto label_2eba7c;
        case 0x2eba80u: goto label_2eba80;
        case 0x2eba84u: goto label_2eba84;
        case 0x2eba88u: goto label_2eba88;
        case 0x2eba8cu: goto label_2eba8c;
        case 0x2eba90u: goto label_2eba90;
        case 0x2eba94u: goto label_2eba94;
        case 0x2eba98u: goto label_2eba98;
        case 0x2eba9cu: goto label_2eba9c;
        case 0x2ebaa0u: goto label_2ebaa0;
        case 0x2ebaa4u: goto label_2ebaa4;
        case 0x2ebaa8u: goto label_2ebaa8;
        case 0x2ebaacu: goto label_2ebaac;
        case 0x2ebab0u: goto label_2ebab0;
        case 0x2ebab4u: goto label_2ebab4;
        case 0x2ebab8u: goto label_2ebab8;
        case 0x2ebabcu: goto label_2ebabc;
        case 0x2ebac0u: goto label_2ebac0;
        case 0x2ebac4u: goto label_2ebac4;
        case 0x2ebac8u: goto label_2ebac8;
        case 0x2ebaccu: goto label_2ebacc;
        case 0x2ebad0u: goto label_2ebad0;
        case 0x2ebad4u: goto label_2ebad4;
        case 0x2ebad8u: goto label_2ebad8;
        case 0x2ebadcu: goto label_2ebadc;
        case 0x2ebae0u: goto label_2ebae0;
        case 0x2ebae4u: goto label_2ebae4;
        case 0x2ebae8u: goto label_2ebae8;
        case 0x2ebaecu: goto label_2ebaec;
        case 0x2ebaf0u: goto label_2ebaf0;
        case 0x2ebaf4u: goto label_2ebaf4;
        case 0x2ebaf8u: goto label_2ebaf8;
        case 0x2ebafcu: goto label_2ebafc;
        case 0x2ebb00u: goto label_2ebb00;
        case 0x2ebb04u: goto label_2ebb04;
        case 0x2ebb08u: goto label_2ebb08;
        case 0x2ebb0cu: goto label_2ebb0c;
        case 0x2ebb10u: goto label_2ebb10;
        case 0x2ebb14u: goto label_2ebb14;
        case 0x2ebb18u: goto label_2ebb18;
        case 0x2ebb1cu: goto label_2ebb1c;
        case 0x2ebb20u: goto label_2ebb20;
        case 0x2ebb24u: goto label_2ebb24;
        case 0x2ebb28u: goto label_2ebb28;
        case 0x2ebb2cu: goto label_2ebb2c;
        case 0x2ebb30u: goto label_2ebb30;
        case 0x2ebb34u: goto label_2ebb34;
        case 0x2ebb38u: goto label_2ebb38;
        case 0x2ebb3cu: goto label_2ebb3c;
        case 0x2ebb40u: goto label_2ebb40;
        case 0x2ebb44u: goto label_2ebb44;
        case 0x2ebb48u: goto label_2ebb48;
        case 0x2ebb4cu: goto label_2ebb4c;
        case 0x2ebb50u: goto label_2ebb50;
        case 0x2ebb54u: goto label_2ebb54;
        case 0x2ebb58u: goto label_2ebb58;
        case 0x2ebb5cu: goto label_2ebb5c;
        case 0x2ebb60u: goto label_2ebb60;
        case 0x2ebb64u: goto label_2ebb64;
        case 0x2ebb68u: goto label_2ebb68;
        case 0x2ebb6cu: goto label_2ebb6c;
        case 0x2ebb70u: goto label_2ebb70;
        case 0x2ebb74u: goto label_2ebb74;
        case 0x2ebb78u: goto label_2ebb78;
        case 0x2ebb7cu: goto label_2ebb7c;
        case 0x2ebb80u: goto label_2ebb80;
        case 0x2ebb84u: goto label_2ebb84;
        case 0x2ebb88u: goto label_2ebb88;
        case 0x2ebb8cu: goto label_2ebb8c;
        case 0x2ebb90u: goto label_2ebb90;
        case 0x2ebb94u: goto label_2ebb94;
        case 0x2ebb98u: goto label_2ebb98;
        case 0x2ebb9cu: goto label_2ebb9c;
        case 0x2ebba0u: goto label_2ebba0;
        case 0x2ebba4u: goto label_2ebba4;
        case 0x2ebba8u: goto label_2ebba8;
        case 0x2ebbacu: goto label_2ebbac;
        case 0x2ebbb0u: goto label_2ebbb0;
        case 0x2ebbb4u: goto label_2ebbb4;
        case 0x2ebbb8u: goto label_2ebbb8;
        case 0x2ebbbcu: goto label_2ebbbc;
        case 0x2ebbc0u: goto label_2ebbc0;
        case 0x2ebbc4u: goto label_2ebbc4;
        case 0x2ebbc8u: goto label_2ebbc8;
        case 0x2ebbccu: goto label_2ebbcc;
        case 0x2ebbd0u: goto label_2ebbd0;
        case 0x2ebbd4u: goto label_2ebbd4;
        case 0x2ebbd8u: goto label_2ebbd8;
        case 0x2ebbdcu: goto label_2ebbdc;
        default: break;
    }

    ctx->pc = 0x2e9f48u;

label_2e9f48:
    // 0x2e9f48: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e9f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2e9f4c:
    // 0x2e9f4c: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2e9f4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2e9f50:
    // 0x2e9f50: 0x9043b834  lbu         $v1, -0x47CC($v0)
    ctx->pc = 0x2e9f50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948916)));
label_2e9f54:
    // 0x2e9f54: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2e9f54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
label_2e9f58:
    // 0x2e9f58: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2e9f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_2e9f5c:
    // 0x2e9f5c: 0xa0c3b835  sb          $v1, -0x47CB($a2)
    ctx->pc = 0x2e9f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294948917), (uint8_t)GPR_U32(ctx, 3));
label_2e9f60:
    // 0x2e9f60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e9f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e9f64:
    // 0x2e9f64: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2e9f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_2e9f68:
    // 0x2e9f68: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2e9f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_2e9f6c:
    // 0x2e9f6c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2e9f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_2e9f70:
    // 0x2e9f70: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2e9f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2e9f74:
    // 0x2e9f74: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2e9f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_2e9f78:
    // 0x2e9f78: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2e9f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2e9f7c:
    // 0x2e9f7c: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x2e9f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
label_2e9f80:
    // 0x2e9f80: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x2e9f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
label_2e9f84:
    // 0x2e9f84: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x2e9f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_2e9f88:
    // 0x2e9f88: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2e9f88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2e9f8c:
    // 0x2e9f8c: 0xa040b834  sb          $zero, -0x47CC($v0)
    ctx->pc = 0x2e9f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948916), (uint8_t)GPR_U32(ctx, 0));
label_2e9f90:
    // 0x2e9f90: 0x922213f4  lbu         $v0, 0x13F4($s1)
    ctx->pc = 0x2e9f90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5108)));
label_2e9f94:
    // 0x2e9f94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2e9f98:
    if (ctx->pc == 0x2E9F98u) {
        ctx->pc = 0x2E9F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F94u;
        // 0x2e9f98: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9F9Cu;
        goto label_2e9f9c;
    }
    ctx->pc = 0x2E9F94u;
    {
        const bool branch_taken_0x2e9f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F94u;
        // 0x2e9f98: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f94) {
            ctx->pc = 0x2E9FB8u;
            goto label_2e9fb8;
        }
    }
    ctx->pc = 0x2E9F9Cu;
label_2e9f9c:
    // 0x2e9f9c: 0xc62113f8  lwc1        $f1, 0x13F8($s1)
    ctx->pc = 0x2e9f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e9fa0:
    // 0x2e9fa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e9fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e9fa4:
    // 0x2e9fa4: 0x0  nop
    ctx->pc = 0x2e9fa4u;
    // NOP
label_2e9fa8:
    // 0x2e9fa8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e9fa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e9fac:
    // 0x2e9fac: 0x0  nop
    ctx->pc = 0x2e9facu;
    // NOP
label_2e9fb0:
    // 0x2e9fb0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2e9fb4:
    if (ctx->pc == 0x2E9FB4u) {
        ctx->pc = 0x2E9FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9FB0u;
        // 0x2e9fb4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9FB8u;
        goto label_2e9fb8;
    }
    ctx->pc = 0x2E9FB0u;
    {
        const bool branch_taken_0x2e9fb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e9fb0) {
            ctx->pc = 0x2E9FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9FB0u;
            // 0x2e9fb4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9FB8u;
            goto label_2e9fb8;
        }
    }
    ctx->pc = 0x2E9FB8u;
label_2e9fb8:
    // 0x2e9fb8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2e9fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e9fbc:
    // 0x2e9fbc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2e9fc0:
    if (ctx->pc == 0x2E9FC0u) {
        ctx->pc = 0x2E9FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9FBCu;
        // 0x2e9fc0: 0x26230534  addiu       $v1, $s1, 0x534 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1332));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9FC4u;
        goto label_2e9fc4;
    }
    ctx->pc = 0x2E9FBCu;
    {
        const bool branch_taken_0x2e9fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9FBCu;
        // 0x2e9fc0: 0x26230534  addiu       $v1, $s1, 0x534 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9fbc) {
            ctx->pc = 0x2E9FF4u;
            goto label_2e9ff4;
        }
    }
    ctx->pc = 0x2E9FC4u;
label_2e9fc4:
    // 0x2e9fc4: 0x26240608  addiu       $a0, $s1, 0x608
    ctx->pc = 0x2e9fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1544));
label_2e9fc8:
    // 0x2e9fc8: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x2e9fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_2e9fcc:
    // 0x2e9fcc: 0x0  nop
    ctx->pc = 0x2e9fccu;
    // NOP
label_2e9fd0:
    // 0x2e9fd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e9fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e9fd4:
    // 0x2e9fd4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2e9fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_2e9fd8:
    // 0x2e9fd8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2e9fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2e9fdc:
    // 0x2e9fdc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2e9fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2e9fe0:
    // 0x2e9fe0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2e9fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2e9fe4:
    // 0x2e9fe4: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
label_2e9fe8:
    if (ctx->pc == 0x2E9FE8u) {
        ctx->pc = 0x2E9FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9FE4u;
        // 0x2e9fe8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9FECu;
        goto label_2e9fec;
    }
    ctx->pc = 0x2E9FE4u;
    {
        const bool branch_taken_0x2e9fe4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2E9FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9FE4u;
        // 0x2e9fe8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9fe4) {
            ctx->pc = 0x2E9FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9fd0;
        }
    }
    ctx->pc = 0x2E9FECu;
label_2e9fec:
    // 0x2e9fec: 0x100006ef  b           . + 4 + (0x6EF << 2)
label_2e9ff0:
    if (ctx->pc == 0x2E9FF0u) {
        ctx->pc = 0x2E9FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9FECu;
        // 0x2e9ff0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9FF4u;
        goto label_2e9ff4;
    }
    ctx->pc = 0x2E9FECu;
    {
        const bool branch_taken_0x2e9fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9FECu;
        // 0x2e9ff0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9fec) {
            ctx->pc = 0x2EBBACu;
            goto label_2ebbac;
        }
    }
    ctx->pc = 0x2E9FF4u;
label_2e9ff4:
    // 0x2e9ff4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2e9ff4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9ff8:
    // 0x2e9ff8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2e9ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_2e9ffc:
    // 0x2e9ffc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2e9ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_2ea000:
    // 0x2ea000: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2ea000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_2ea004:
    // 0x2ea004: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_2ea008:
    if (ctx->pc == 0x2EA008u) {
        ctx->pc = 0x2EA008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA004u;
        // 0x2ea008: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA00Cu;
        goto label_2ea00c;
    }
    ctx->pc = 0x2EA004u;
    {
        const bool branch_taken_0x2ea004 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA004u;
        // 0x2ea008: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea004) {
            ctx->pc = 0x2EA020u;
            goto label_2ea020;
        }
    }
    ctx->pc = 0x2EA00Cu;
label_2ea00c:
    // 0x2ea00c: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x2ea00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
label_2ea010:
    // 0x2ea010: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x2ea010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
label_2ea014:
    // 0x2ea014: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x2ea014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
label_2ea018:
    // 0x2ea018: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2ea01c:
    if (ctx->pc == 0x2EA01Cu) {
        ctx->pc = 0x2EA01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA018u;
        // 0x2ea01c: 0x8cb60274  lw          $s6, 0x274($a1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA020u;
        goto label_2ea020;
    }
    ctx->pc = 0x2EA018u;
    {
        const bool branch_taken_0x2ea018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea018) {
            ctx->pc = 0x2EA01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA018u;
            // 0x2ea01c: 0x8cb60274  lw          $s6, 0x274($a1) (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA020u;
            goto label_2ea020;
        }
    }
    ctx->pc = 0x2EA020u;
label_2ea020:
    // 0x2ea020: 0x12c0005f  beqz        $s6, . + 4 + (0x5F << 2)
label_2ea024:
    if (ctx->pc == 0x2EA024u) {
        ctx->pc = 0x2EA024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA020u;
        // 0x2ea024: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA028u;
        goto label_2ea028;
    }
    ctx->pc = 0x2EA020u;
    {
        const bool branch_taken_0x2ea020 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA020u;
        // 0x2ea024: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea020) {
            ctx->pc = 0x2EA1A0u;
            goto label_2ea1a0;
        }
    }
    ctx->pc = 0x2EA028u;
label_2ea028:
    // 0x2ea028: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ea028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea02c:
    // 0x2ea02c: 0xc0d8de2  jal         func_363788
label_2ea030:
    if (ctx->pc == 0x2EA030u) {
        ctx->pc = 0x2EA030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA02Cu;
        // 0x2ea030: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA034u;
        goto label_2ea034;
    }
    ctx->pc = 0x2EA02Cu;
    SET_GPR_U32(ctx, 31, 0x2EA034u);
    ctx->pc = 0x2EA030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA02Cu;
    // 0x2ea030: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2EA02Cu, 0x2EA034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA034u;
label_2ea034:
    // 0x2ea034: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2ea038:
    if (ctx->pc == 0x2EA038u) {
        ctx->pc = 0x2EA038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA034u;
        // 0x2ea038: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA03Cu;
        goto label_2ea03c;
    }
    ctx->pc = 0x2EA034u;
    {
        const bool branch_taken_0x2ea034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea034) {
            ctx->pc = 0x2EA038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA034u;
            // 0x2ea038: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA050u;
            goto label_2ea050;
        }
    }
    ctx->pc = 0x2EA03Cu;
label_2ea03c:
    // 0x2ea03c: 0xc0d8de2  jal         func_363788
label_2ea040:
    if (ctx->pc == 0x2EA040u) {
        ctx->pc = 0x2EA040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA03Cu;
        // 0x2ea040: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA044u;
        goto label_2ea044;
    }
    ctx->pc = 0x2EA03Cu;
    SET_GPR_U32(ctx, 31, 0x2EA044u);
    ctx->pc = 0x2EA040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA03Cu;
    // 0x2ea040: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2EA03Cu, 0x2EA044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA044u;
label_2ea044:
    // 0x2ea044: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ea044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea048:
    // 0x2ea048: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_2ea04c:
    if (ctx->pc == 0x2EA04Cu) {
        ctx->pc = 0x2EA04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA048u;
        // 0x2ea04c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA050u;
        goto label_2ea050;
    }
    ctx->pc = 0x2EA048u;
    {
        const bool branch_taken_0x2ea048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ea048) {
            ctx->pc = 0x2EA04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA048u;
            // 0x2ea04c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA050u;
            goto label_2ea050;
        }
    }
    ctx->pc = 0x2EA050u;
label_2ea050:
    // 0x2ea050: 0x12000053  beqz        $s0, . + 4 + (0x53 << 2)
label_2ea054:
    if (ctx->pc == 0x2EA054u) {
        ctx->pc = 0x2EA054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA050u;
        // 0x2ea054: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA058u;
        goto label_2ea058;
    }
    ctx->pc = 0x2EA050u;
    {
        const bool branch_taken_0x2ea050 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA050u;
        // 0x2ea054: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea050) {
            ctx->pc = 0x2EA1A0u;
            goto label_2ea1a0;
        }
    }
    ctx->pc = 0x2EA058u;
label_2ea058:
    // 0x2ea058: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2ea058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2ea05c:
    // 0x2ea05c: 0xc0bb5de  jal         func_2ED778
label_2ea060:
    if (ctx->pc == 0x2EA060u) {
        ctx->pc = 0x2EA060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA05Cu;
        // 0x2ea060: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA064u;
        goto label_2ea064;
    }
    ctx->pc = 0x2EA05Cu;
    SET_GPR_U32(ctx, 31, 0x2EA064u);
    ctx->pc = 0x2EA060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA05Cu;
    // 0x2ea060: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED778u, 0x2EA05Cu, 0x2EA064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA064u;
label_2ea064:
    // 0x2ea064: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2ea068:
    if (ctx->pc == 0x2EA068u) {
        ctx->pc = 0x2EA068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA064u;
        // 0x2ea068: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA06Cu;
        goto label_2ea06c;
    }
    ctx->pc = 0x2EA064u;
    {
        const bool branch_taken_0x2ea064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea064) {
            ctx->pc = 0x2EA068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA064u;
            // 0x2ea068: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA084u;
            goto label_2ea084;
        }
    }
    ctx->pc = 0x2EA06Cu;
label_2ea06c:
    // 0x2ea06c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2ea06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2ea070:
    // 0x2ea070: 0xc0bb5de  jal         func_2ED778
label_2ea074:
    if (ctx->pc == 0x2EA074u) {
        ctx->pc = 0x2EA074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA070u;
        // 0x2ea074: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA078u;
        goto label_2ea078;
    }
    ctx->pc = 0x2EA070u;
    SET_GPR_U32(ctx, 31, 0x2EA078u);
    ctx->pc = 0x2EA074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA070u;
    // 0x2ea074: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED778u, 0x2EA070u, 0x2EA078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA078u;
label_2ea078:
    // 0x2ea078: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ea07c:
    if (ctx->pc == 0x2EA07Cu) {
        ctx->pc = 0x2EA07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA078u;
        // 0x2ea07c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA080u;
        goto label_2ea080;
    }
    ctx->pc = 0x2EA078u;
    {
        const bool branch_taken_0x2ea078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA078u;
        // 0x2ea07c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea078) {
            ctx->pc = 0x2EA088u;
            goto label_2ea088;
        }
    }
    ctx->pc = 0x2EA080u;
label_2ea080:
    // 0x2ea080: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ea080u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea084:
    // 0x2ea084: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ea084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea088:
    // 0x2ea088: 0xc0f7da4  jal         func_3DF690
label_2ea08c:
    if (ctx->pc == 0x2EA08Cu) {
        ctx->pc = 0x2EA08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA088u;
        // 0x2ea08c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA090u;
        goto label_2ea090;
    }
    ctx->pc = 0x2EA088u;
    SET_GPR_U32(ctx, 31, 0x2EA090u);
    ctx->pc = 0x2EA08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA088u;
    // 0x2ea08c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF690u, 0x2EA088u, 0x2EA090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA090u;
label_2ea090:
    // 0x2ea090: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2ea094:
    if (ctx->pc == 0x2EA094u) {
        ctx->pc = 0x2EA094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA090u;
        // 0x2ea094: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA098u;
        goto label_2ea098;
    }
    ctx->pc = 0x2EA090u;
    {
        const bool branch_taken_0x2ea090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea090) {
            ctx->pc = 0x2EA094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA090u;
            // 0x2ea094: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA0B8u;
            goto label_2ea0b8;
        }
    }
    ctx->pc = 0x2EA098u;
label_2ea098:
    // 0x2ea098: 0xc0f7da0  jal         func_3DF680
label_2ea09c:
    if (ctx->pc == 0x2EA09Cu) {
        ctx->pc = 0x2EA09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA098u;
        // 0x2ea09c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA0A0u;
        goto label_2ea0a0;
    }
    ctx->pc = 0x2EA098u;
    SET_GPR_U32(ctx, 31, 0x2EA0A0u);
    ctx->pc = 0x2EA09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA098u;
    // 0x2ea09c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF680u, 0x2EA098u, 0x2EA0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA0A0u;
label_2ea0a0:
    // 0x2ea0a0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2ea0a4:
    if (ctx->pc == 0x2EA0A4u) {
        ctx->pc = 0x2EA0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA0A0u;
        // 0x2ea0a4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA0A8u;
        goto label_2ea0a8;
    }
    ctx->pc = 0x2EA0A0u;
    {
        const bool branch_taken_0x2ea0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea0a0) {
            ctx->pc = 0x2EA0A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA0A0u;
            // 0x2ea0a4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA0B8u;
            goto label_2ea0b8;
        }
    }
    ctx->pc = 0x2EA0A8u;
label_2ea0a8:
    // 0x2ea0a8: 0xc0f7da8  jal         func_3DF6A0
label_2ea0ac:
    if (ctx->pc == 0x2EA0ACu) {
        ctx->pc = 0x2EA0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA0A8u;
        // 0x2ea0ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA0B0u;
        goto label_2ea0b0;
    }
    ctx->pc = 0x2EA0A8u;
    SET_GPR_U32(ctx, 31, 0x2EA0B0u);
    ctx->pc = 0x2EA0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA0A8u;
    // 0x2ea0ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF6A0u, 0x2EA0A8u, 0x2EA0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA0B0u;
label_2ea0b0:
    // 0x2ea0b0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2ea0b4:
    if (ctx->pc == 0x2EA0B4u) {
        ctx->pc = 0x2EA0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA0B0u;
        // 0x2ea0b4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA0B8u;
        goto label_2ea0b8;
    }
    ctx->pc = 0x2EA0B0u;
    {
        const bool branch_taken_0x2ea0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea0b0) {
            ctx->pc = 0x2EA0B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA0B0u;
            // 0x2ea0b4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA0B8u;
            goto label_2ea0b8;
        }
    }
    ctx->pc = 0x2EA0B8u;
label_2ea0b8:
    // 0x2ea0b8: 0x56000039  bnel        $s0, $zero, . + 4 + (0x39 << 2)
label_2ea0bc:
    if (ctx->pc == 0x2EA0BCu) {
        ctx->pc = 0x2EA0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA0B8u;
        // 0x2ea0bc: 0xa232138c  sb          $s2, 0x138C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 5004), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA0C0u;
        goto label_2ea0c0;
    }
    ctx->pc = 0x2EA0B8u;
    {
        const bool branch_taken_0x2ea0b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea0b8) {
            ctx->pc = 0x2EA0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA0B8u;
            // 0x2ea0bc: 0xa232138c  sb          $s2, 0x138C($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 5004), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA1A0u;
            goto label_2ea1a0;
        }
    }
    ctx->pc = 0x2EA0C0u;
label_2ea0c0:
    // 0x2ea0c0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2ea0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_2ea0c4:
    // 0x2ea0c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ea0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea0c8:
    // 0x2ea0c8: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x2ea0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_2ea0cc:
    // 0x2ea0cc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2ea0d0:
    if (ctx->pc == 0x2EA0D0u) {
        ctx->pc = 0x2EA0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA0CCu;
        // 0x2ea0d0: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA0D4u;
        goto label_2ea0d4;
    }
    ctx->pc = 0x2EA0CCu;
    {
        const bool branch_taken_0x2ea0cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2EA0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA0CCu;
        // 0x2ea0d0: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea0cc) {
            ctx->pc = 0x2EA0E8u;
            goto label_2ea0e8;
        }
    }
    ctx->pc = 0x2EA0D4u;
label_2ea0d4:
    // 0x2ea0d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea0d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ea0d8:
    // 0x2ea0d8: 0x0  nop
    ctx->pc = 0x2ea0d8u;
    // NOP
label_2ea0dc:
    // 0x2ea0dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ea0dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2ea0e0:
    // 0x2ea0e0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ea0e4:
    if (ctx->pc == 0x2EA0E4u) {
        ctx->pc = 0x2EA0E8u;
        goto label_2ea0e8;
    }
    ctx->pc = 0x2EA0E0u;
    {
        const bool branch_taken_0x2ea0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea0e0) {
            ctx->pc = 0x2EA104u;
            goto label_2ea104;
        }
    }
    ctx->pc = 0x2EA0E8u;
label_2ea0e8:
    // 0x2ea0e8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2ea0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2ea0ec:
    // 0x2ea0ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ea0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ea0f0:
    // 0x2ea0f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ea0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2ea0f4:
    // 0x2ea0f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea0f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ea0f8:
    // 0x2ea0f8: 0x0  nop
    ctx->pc = 0x2ea0f8u;
    // NOP
label_2ea0fc:
    // 0x2ea0fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ea0fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2ea100:
    // 0x2ea100: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2ea100u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2ea104:
    // 0x2ea104: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2ea104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_2ea108:
    // 0x2ea108: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2ea108u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_2ea10c:
    // 0x2ea10c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ea10cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ea110:
    // 0x2ea110: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_2ea114:
    if (ctx->pc == 0x2EA114u) {
        ctx->pc = 0x2EA114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA110u;
        // 0x2ea114: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA118u;
        goto label_2ea118;
    }
    ctx->pc = 0x2EA110u;
    {
        const bool branch_taken_0x2ea110 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA110u;
        // 0x2ea114: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea110) {
            ctx->pc = 0x2EA12Cu;
            goto label_2ea12c;
        }
    }
    ctx->pc = 0x2EA118u;
label_2ea118:
    // 0x2ea118: 0x9222138c  lbu         $v0, 0x138C($s1)
    ctx->pc = 0x2ea118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5004)));
label_2ea11c:
    // 0x2ea11c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2ea120:
    if (ctx->pc == 0x2EA120u) {
        ctx->pc = 0x2EA120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA11Cu;
        // 0x2ea120: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA124u;
        goto label_2ea124;
    }
    ctx->pc = 0x2EA11Cu;
    {
        const bool branch_taken_0x2ea11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA11Cu;
        // 0x2ea120: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea11c) {
            ctx->pc = 0x2EA138u;
            goto label_2ea138;
        }
    }
    ctx->pc = 0x2EA124u;
label_2ea124:
    // 0x2ea124: 0xe6341388  swc1        $f20, 0x1388($s1)
    ctx->pc = 0x2ea124u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5000), bits); }
label_2ea128:
    // 0x2ea128: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x2ea128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
label_2ea12c:
    // 0x2ea12c: 0x9222138c  lbu         $v0, 0x138C($s1)
    ctx->pc = 0x2ea12cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5004)));
label_2ea130:
    // 0x2ea130: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_2ea134:
    if (ctx->pc == 0x2EA134u) {
        ctx->pc = 0x2EA134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA130u;
        // 0x2ea134: 0xa232138c  sb          $s2, 0x138C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 5004), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA138u;
        goto label_2ea138;
    }
    ctx->pc = 0x2EA130u;
    {
        const bool branch_taken_0x2ea130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea130) {
            ctx->pc = 0x2EA134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA130u;
            // 0x2ea134: 0xa232138c  sb          $s2, 0x138C($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 5004), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA1A0u;
            goto label_2ea1a0;
        }
    }
    ctx->pc = 0x2EA138u;
label_2ea138:
    // 0x2ea138: 0xc06c16e  jal         func_1B05B8
label_2ea13c:
    if (ctx->pc == 0x2EA13Cu) {
        ctx->pc = 0x2EA13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA138u;
        // 0x2ea13c: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA140u;
        goto label_2ea140;
    }
    ctx->pc = 0x2EA138u;
    SET_GPR_U32(ctx, 31, 0x2EA140u);
    ctx->pc = 0x2EA13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA138u;
    // 0x2ea13c: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B05B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05B8u, 0x2EA138u, 0x2EA140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA140u;
label_2ea140:
    // 0x2ea140: 0x16400010  bnez        $s2, . + 4 + (0x10 << 2)
label_2ea144:
    if (ctx->pc == 0x2EA144u) {
        ctx->pc = 0x2EA144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA140u;
        // 0x2ea144: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA148u;
        goto label_2ea148;
    }
    ctx->pc = 0x2EA140u;
    {
        const bool branch_taken_0x2ea140 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA140u;
        // 0x2ea144: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea140) {
            ctx->pc = 0x2EA184u;
            goto label_2ea184;
        }
    }
    ctx->pc = 0x2EA148u;
label_2ea148:
    // 0x2ea148: 0xc6201388  lwc1        $f0, 0x1388($s1)
    ctx->pc = 0x2ea148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ea14c:
    // 0x2ea14c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2ea14cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2ea150:
    // 0x2ea150: 0x0  nop
    ctx->pc = 0x2ea150u;
    // NOP
label_2ea154:
    // 0x2ea154: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2ea154u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ea158:
    // 0x2ea158: 0x0  nop
    ctx->pc = 0x2ea158u;
    // NOP
label_2ea15c:
    // 0x2ea15c: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
label_2ea160:
    if (ctx->pc == 0x2EA160u) {
        ctx->pc = 0x2EA160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA15Cu;
        // 0x2ea160: 0xa232138c  sb          $s2, 0x138C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 5004), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA164u;
        goto label_2ea164;
    }
    ctx->pc = 0x2EA15Cu;
    {
        const bool branch_taken_0x2ea15c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ea15c) {
            ctx->pc = 0x2EA160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA15Cu;
            // 0x2ea160: 0xa232138c  sb          $s2, 0x138C($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 5004), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA1A0u;
            goto label_2ea1a0;
        }
    }
    ctx->pc = 0x2EA164u;
label_2ea164:
    // 0x2ea164: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ea164u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2ea168:
    // 0x2ea168: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2ea168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ea16c:
    // 0x2ea16c: 0x0  nop
    ctx->pc = 0x2ea16cu;
    // NOP
label_2ea170:
    // 0x2ea170: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2ea174:
    if (ctx->pc == 0x2EA174u) {
        ctx->pc = 0x2EA174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA170u;
        // 0x2ea174: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA178u;
        goto label_2ea178;
    }
    ctx->pc = 0x2EA170u;
    {
        const bool branch_taken_0x2ea170 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EA174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA170u;
        // 0x2ea174: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea170) {
            ctx->pc = 0x2EA19Cu;
            goto label_2ea19c;
        }
    }
    ctx->pc = 0x2EA178u;
label_2ea178:
    // 0x2ea178: 0xe6221388  swc1        $f2, 0x1388($s1)
    ctx->pc = 0x2ea178u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5000), bits); }
label_2ea17c:
    // 0x2ea17c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2ea180:
    if (ctx->pc == 0x2EA180u) {
        ctx->pc = 0x2EA180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA17Cu;
        // 0x2ea180: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA184u;
        goto label_2ea184;
    }
    ctx->pc = 0x2EA17Cu;
    {
        const bool branch_taken_0x2ea17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA17Cu;
        // 0x2ea180: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea17c) {
            ctx->pc = 0x2EA19Cu;
            goto label_2ea19c;
        }
    }
    ctx->pc = 0x2EA184u;
label_2ea184:
    // 0x2ea184: 0xc6201388  lwc1        $f0, 0x1388($s1)
    ctx->pc = 0x2ea184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ea188:
    // 0x2ea188: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ea188u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2ea18c:
    // 0x2ea18c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2ea18cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ea190:
    // 0x2ea190: 0x0  nop
    ctx->pc = 0x2ea190u;
    // NOP
label_2ea194:
    // 0x2ea194: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2ea198:
    if (ctx->pc == 0x2EA198u) {
        ctx->pc = 0x2EA198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA194u;
        // 0x2ea198: 0xae201388  sw          $zero, 0x1388($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5000), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA19Cu;
        goto label_2ea19c;
    }
    ctx->pc = 0x2EA194u;
    {
        const bool branch_taken_0x2ea194 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ea194) {
            ctx->pc = 0x2EA198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA194u;
            // 0x2ea198: 0xae201388  sw          $zero, 0x1388($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 5000), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA19Cu;
            goto label_2ea19c;
        }
    }
    ctx->pc = 0x2EA19Cu;
label_2ea19c:
    // 0x2ea19c: 0xa232138c  sb          $s2, 0x138C($s1)
    ctx->pc = 0x2ea19cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5004), (uint8_t)GPR_U32(ctx, 18));
label_2ea1a0:
    // 0x2ea1a0: 0x26230608  addiu       $v1, $s1, 0x608
    ctx->pc = 0x2ea1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1544));
label_2ea1a4:
    // 0x2ea1a4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ea1a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea1a8:
    // 0x2ea1a8: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x2ea1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_2ea1ac:
    // 0x2ea1ac: 0x263e0534  addiu       $fp, $s1, 0x534
    ctx->pc = 0x2ea1acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 1332));
label_2ea1b0:
    // 0x2ea1b0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ea1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2ea1b4:
    // 0x2ea1b4: 0x0  nop
    ctx->pc = 0x2ea1b4u;
    // NOP
label_2ea1b8:
    // 0x2ea1b8: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2ea1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_2ea1bc:
    // 0x2ea1bc: 0x2483b840  addiu       $v1, $a0, -0x47C0
    ctx->pc = 0x2ea1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948928));
label_2ea1c0:
    // 0x2ea1c0: 0x3c22821  addu        $a1, $fp, $v0
    ctx->pc = 0x2ea1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_2ea1c4:
    // 0x2ea1c4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2ea1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ea1c8:
    // 0x2ea1c8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ea1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ea1cc:
    // 0x2ea1cc: 0x8c750000  lw          $s5, 0x0($v1)
    ctx->pc = 0x2ea1ccu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ea1d0:
    // 0x2ea1d0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2ea1d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ea1d4:
    // 0x2ea1d4: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2ea1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2ea1d8:
    // 0x2ea1d8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ea1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ea1dc:
    // 0x2ea1dc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2ea1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2ea1e0:
    // 0x2ea1e0: 0x2683fffd  addiu       $v1, $s4, -0x3
    ctx->pc = 0x2ea1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967293));
label_2ea1e4:
    // 0x2ea1e4: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x2ea1e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
label_2ea1e8:
    // 0x2ea1e8: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
label_2ea1ec:
    if (ctx->pc == 0x2EA1ECu) {
        ctx->pc = 0x2EA1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1E8u;
        // 0x2ea1ec: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA1F0u;
        goto label_2ea1f0;
    }
    ctx->pc = 0x2EA1E8u;
    {
        const bool branch_taken_0x2ea1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1E8u;
        // 0x2ea1ec: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea1e8) {
            ctx->pc = 0x2EA38Cu;
            goto label_2ea38c;
        }
    }
    ctx->pc = 0x2EA1F0u;
label_2ea1f0:
    // 0x2ea1f0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2ea1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_2ea1f4:
    // 0x2ea1f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ea1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2ea1f8:
    // 0x2ea1f8: 0x244218e0  addiu       $v0, $v0, 0x18E0
    ctx->pc = 0x2ea1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6368));
label_2ea1fc:
    // 0x2ea1fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ea1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ea200:
    // 0x2ea200: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ea200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ea204:
    // 0x2ea204: 0x800008  jr          $a0
label_2ea208:
    if (ctx->pc == 0x2EA208u) {
        ctx->pc = 0x2EA20Cu;
        goto label_2ea20c;
    }
    ctx->pc = 0x2EA204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EA20Cu: goto label_2ea20c;
            case 0x2EA310u: goto label_2ea310;
            case 0x2EA320u: goto label_2ea320;
            case 0x2EA38Cu: goto label_2ea38c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA204u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2EA20Cu;
label_2ea20c:
    // 0x2ea20c: 0x12c00060  beqz        $s6, . + 4 + (0x60 << 2)
label_2ea210:
    if (ctx->pc == 0x2EA210u) {
        ctx->pc = 0x2EA210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA20Cu;
        // 0x2ea210: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA214u;
        goto label_2ea214;
    }
    ctx->pc = 0x2EA20Cu;
    {
        const bool branch_taken_0x2ea20c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA20Cu;
        // 0x2ea210: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea20c) {
            ctx->pc = 0x2EA390u;
            goto label_2ea390;
        }
    }
    ctx->pc = 0x2EA214u;
label_2ea214:
    // 0x2ea214: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x2ea214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2ea218:
    // 0x2ea218: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x2ea218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2ea21c:
    // 0x2ea21c: 0x2462ffcf  addiu       $v0, $v1, -0x31
    ctx->pc = 0x2ea21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
label_2ea220:
    // 0x2ea220: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x2ea220u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2ea224:
    // 0x2ea224: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2ea228:
    if (ctx->pc == 0x2EA228u) {
        ctx->pc = 0x2EA228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA224u;
        // 0x2ea228: 0x38620037  xori        $v0, $v1, 0x37 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)55);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA22Cu;
        goto label_2ea22c;
    }
    ctx->pc = 0x2EA224u;
    {
        const bool branch_taken_0x2ea224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA224u;
        // 0x2ea228: 0x38620037  xori        $v0, $v1, 0x37 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)55);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea224) {
            ctx->pc = 0x2EA230u;
            goto label_2ea230;
        }
    }
    ctx->pc = 0x2EA22Cu;
label_2ea22c:
    // 0x2ea22c: 0x2a80b  movn        $s5, $zero, $v0
    ctx->pc = 0x2ea22cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_2ea230:
    // 0x2ea230: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ea230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ea234:
    // 0x2ea234: 0xc092786  jal         func_249E18
label_2ea238:
    if (ctx->pc == 0x2EA238u) {
        ctx->pc = 0x2EA238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA234u;
        // 0x2ea238: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA23Cu;
        goto label_2ea23c;
    }
    ctx->pc = 0x2EA234u;
    SET_GPR_U32(ctx, 31, 0x2EA23Cu);
    ctx->pc = 0x2EA238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA234u;
    // 0x2ea238: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249E18u, 0x2EA234u, 0x2EA23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA23Cu;
label_2ea23c:
    // 0x2ea23c: 0x2a80b  movn        $s5, $zero, $v0
    ctx->pc = 0x2ea23cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_2ea240:
    // 0x2ea240: 0xc0d8de2  jal         func_363788
label_2ea244:
    if (ctx->pc == 0x2EA244u) {
        ctx->pc = 0x2EA244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA240u;
        // 0x2ea244: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA248u;
        goto label_2ea248;
    }
    ctx->pc = 0x2EA240u;
    SET_GPR_U32(ctx, 31, 0x2EA248u);
    ctx->pc = 0x2EA244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA240u;
    // 0x2ea244: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2EA240u, 0x2EA248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA248u;
label_2ea248:
    // 0x2ea248: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2ea24c:
    if (ctx->pc == 0x2EA24Cu) {
        ctx->pc = 0x2EA24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA248u;
        // 0x2ea24c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA250u;
        goto label_2ea250;
    }
    ctx->pc = 0x2EA248u;
    {
        const bool branch_taken_0x2ea248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea248) {
            ctx->pc = 0x2EA24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA248u;
            // 0x2ea24c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA264u;
            goto label_2ea264;
        }
    }
    ctx->pc = 0x2EA250u;
label_2ea250:
    // 0x2ea250: 0xc0d8de2  jal         func_363788
label_2ea254:
    if (ctx->pc == 0x2EA254u) {
        ctx->pc = 0x2EA254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA250u;
        // 0x2ea254: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA258u;
        goto label_2ea258;
    }
    ctx->pc = 0x2EA250u;
    SET_GPR_U32(ctx, 31, 0x2EA258u);
    ctx->pc = 0x2EA254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA250u;
    // 0x2ea254: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2EA250u, 0x2EA258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA258u;
label_2ea258:
    // 0x2ea258: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ea258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea25c:
    // 0x2ea25c: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_2ea260:
    if (ctx->pc == 0x2EA260u) {
        ctx->pc = 0x2EA260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA25Cu;
        // 0x2ea260: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA264u;
        goto label_2ea264;
    }
    ctx->pc = 0x2EA25Cu;
    {
        const bool branch_taken_0x2ea25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ea25c) {
            ctx->pc = 0x2EA260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA25Cu;
            // 0x2ea260: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA264u;
            goto label_2ea264;
        }
    }
    ctx->pc = 0x2EA264u;
label_2ea264:
    // 0x2ea264: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2ea268:
    if (ctx->pc == 0x2EA268u) {
        ctx->pc = 0x2EA268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA264u;
        // 0x2ea268: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA26Cu;
        goto label_2ea26c;
    }
    ctx->pc = 0x2EA264u;
    {
        const bool branch_taken_0x2ea264 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA264u;
        // 0x2ea268: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea264) {
            ctx->pc = 0x2EA280u;
            goto label_2ea280;
        }
    }
    ctx->pc = 0x2EA26Cu;
label_2ea26c:
    // 0x2ea26c: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x2ea26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_2ea270:
    // 0x2ea270: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ea270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ea274:
    // 0x2ea274: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2ea274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_2ea278:
    // 0x2ea278: 0x10000044  b           . + 4 + (0x44 << 2)
label_2ea27c:
    if (ctx->pc == 0x2EA27Cu) {
        ctx->pc = 0x2EA27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA278u;
        // 0x2ea27c: 0x2a80a  movz        $s5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA280u;
        goto label_2ea280;
    }
    ctx->pc = 0x2EA278u;
    {
        const bool branch_taken_0x2ea278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA278u;
        // 0x2ea27c: 0x2a80a  movz        $s5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea278) {
            ctx->pc = 0x2EA38Cu;
            goto label_2ea38c;
        }
    }
    ctx->pc = 0x2EA280u;
label_2ea280:
    // 0x2ea280: 0xc0d8de2  jal         func_363788
label_2ea284:
    if (ctx->pc == 0x2EA284u) {
        ctx->pc = 0x2EA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA280u;
        // 0x2ea284: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA288u;
        goto label_2ea288;
    }
    ctx->pc = 0x2EA280u;
    SET_GPR_U32(ctx, 31, 0x2EA288u);
    ctx->pc = 0x2EA284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA280u;
    // 0x2ea284: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2EA280u, 0x2EA288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA288u;
label_2ea288:
    // 0x2ea288: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2ea288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_2ea28c:
    // 0x2ea28c: 0x54400040  bnel        $v0, $zero, . + 4 + (0x40 << 2)
label_2ea290:
    if (ctx->pc == 0x2EA290u) {
        ctx->pc = 0x2EA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA28Cu;
        // 0x2ea290: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA294u;
        goto label_2ea294;
    }
    ctx->pc = 0x2EA28Cu;
    {
        const bool branch_taken_0x2ea28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea28c) {
            ctx->pc = 0x2EA290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA28Cu;
            // 0x2ea290: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA390u;
            goto label_2ea390;
        }
    }
    ctx->pc = 0x2EA294u;
label_2ea294:
    // 0x2ea294: 0x8ec20068  lw          $v0, 0x68($s6)
    ctx->pc = 0x2ea294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_2ea298:
    // 0x2ea298: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2ea29c:
    if (ctx->pc == 0x2EA29Cu) {
        ctx->pc = 0x2EA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA298u;
        // 0x2ea29c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA2A0u;
        goto label_2ea2a0;
    }
    ctx->pc = 0x2EA298u;
    {
        const bool branch_taken_0x2ea298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA298u;
        // 0x2ea29c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea298) {
            ctx->pc = 0x2EA2B0u;
            goto label_2ea2b0;
        }
    }
    ctx->pc = 0x2EA2A0u;
label_2ea2a0:
    // 0x2ea2a0: 0x8ec20070  lw          $v0, 0x70($s6)
    ctx->pc = 0x2ea2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_2ea2a4:
    // 0x2ea2a4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2ea2a8:
    if (ctx->pc == 0x2EA2A8u) {
        ctx->pc = 0x2EA2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA2A4u;
        // 0x2ea2a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA2ACu;
        goto label_2ea2ac;
    }
    ctx->pc = 0x2EA2A4u;
    {
        const bool branch_taken_0x2ea2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA2A4u;
        // 0x2ea2a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea2a4) {
            ctx->pc = 0x2EA2B0u;
            goto label_2ea2b0;
        }
    }
    ctx->pc = 0x2EA2ACu;
label_2ea2ac:
    // 0x2ea2ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ea2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea2b0:
    // 0x2ea2b0: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
label_2ea2b4:
    if (ctx->pc == 0x2EA2B4u) {
        ctx->pc = 0x2EA2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA2B0u;
        // 0x2ea2b4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA2B8u;
        goto label_2ea2b8;
    }
    ctx->pc = 0x2EA2B0u;
    {
        const bool branch_taken_0x2ea2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea2b0) {
            ctx->pc = 0x2EA2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA2B0u;
            // 0x2ea2b4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA38Cu;
            goto label_2ea38c;
        }
    }
    ctx->pc = 0x2EA2B8u;
label_2ea2b8:
    // 0x2ea2b8: 0x8e230338  lw          $v1, 0x338($s1)
    ctx->pc = 0x2ea2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_2ea2bc:
    // 0x2ea2bc: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2ea2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2ea2c0:
    // 0x2ea2c0: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x2ea2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2ea2c4:
    // 0x2ea2c4: 0x10450010  beq         $v0, $a1, . + 4 + (0x10 << 2)
label_2ea2c8:
    if (ctx->pc == 0x2EA2C8u) {
        ctx->pc = 0x2EA2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA2C4u;
        // 0x2ea2c8: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA2CCu;
        goto label_2ea2cc;
    }
    ctx->pc = 0x2EA2C4u;
    {
        const bool branch_taken_0x2ea2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2EA2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA2C4u;
        // 0x2ea2c8: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea2c4) {
            ctx->pc = 0x2EA308u;
            goto label_2ea308;
        }
    }
    ctx->pc = 0x2EA2CCu;
label_2ea2cc:
    // 0x2ea2cc: 0x5044002f  beql        $v0, $a0, . + 4 + (0x2F << 2)
label_2ea2d0:
    if (ctx->pc == 0x2EA2D0u) {
        ctx->pc = 0x2EA2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA2CCu;
        // 0x2ea2d0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA2D4u;
        goto label_2ea2d4;
    }
    ctx->pc = 0x2EA2CCu;
    {
        const bool branch_taken_0x2ea2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ea2cc) {
            ctx->pc = 0x2EA2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA2CCu;
            // 0x2ea2d0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA38Cu;
            goto label_2ea38c;
        }
    }
    ctx->pc = 0x2EA2D4u;
label_2ea2d4:
    // 0x2ea2d4: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x2ea2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_2ea2d8:
    // 0x2ea2d8: 0x5045002c  beql        $v0, $a1, . + 4 + (0x2C << 2)
label_2ea2dc:
    if (ctx->pc == 0x2EA2DCu) {
        ctx->pc = 0x2EA2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA2D8u;
        // 0x2ea2dc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA2E0u;
        goto label_2ea2e0;
    }
    ctx->pc = 0x2EA2D8u;
    {
        const bool branch_taken_0x2ea2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2ea2d8) {
            ctx->pc = 0x2EA2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA2D8u;
            // 0x2ea2dc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA38Cu;
            goto label_2ea38c;
        }
    }
    ctx->pc = 0x2EA2E0u;
label_2ea2e0:
    // 0x2ea2e0: 0x5044002a  beql        $v0, $a0, . + 4 + (0x2A << 2)
label_2ea2e4:
    if (ctx->pc == 0x2EA2E4u) {
        ctx->pc = 0x2EA2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA2E0u;
        // 0x2ea2e4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA2E8u;
        goto label_2ea2e8;
    }
    ctx->pc = 0x2EA2E0u;
    {
        const bool branch_taken_0x2ea2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ea2e0) {
            ctx->pc = 0x2EA2E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA2E0u;
            // 0x2ea2e4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA38Cu;
            goto label_2ea38c;
        }
    }
    ctx->pc = 0x2EA2E8u;
label_2ea2e8:
    // 0x2ea2e8: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x2ea2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2ea2ec:
    // 0x2ea2ec: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x2ea2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2ea2f0:
    // 0x2ea2f0: 0x2462ffcf  addiu       $v0, $v1, -0x31
    ctx->pc = 0x2ea2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
label_2ea2f4:
    // 0x2ea2f4: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x2ea2f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2ea2f8:
    // 0x2ea2f8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_2ea2fc:
    if (ctx->pc == 0x2EA2FCu) {
        ctx->pc = 0x2EA2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA2F8u;
        // 0x2ea2fc: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA300u;
        goto label_2ea300;
    }
    ctx->pc = 0x2EA2F8u;
    {
        const bool branch_taken_0x2ea2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA2F8u;
        // 0x2ea2fc: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea2f8) {
            ctx->pc = 0x2EA38Cu;
            goto label_2ea38c;
        }
    }
    ctx->pc = 0x2EA300u;
label_2ea300:
    // 0x2ea300: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
label_2ea304:
    if (ctx->pc == 0x2EA304u) {
        ctx->pc = 0x2EA304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA300u;
        // 0x2ea304: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA308u;
        goto label_2ea308;
    }
    ctx->pc = 0x2EA300u;
    {
        const bool branch_taken_0x2ea300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA300u;
        // 0x2ea304: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea300) {
            ctx->pc = 0x2EA390u;
            goto label_2ea390;
        }
    }
    ctx->pc = 0x2EA308u;
label_2ea308:
    // 0x2ea308: 0x10000020  b           . + 4 + (0x20 << 2)
label_2ea30c:
    if (ctx->pc == 0x2EA30Cu) {
        ctx->pc = 0x2EA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA308u;
        // 0x2ea30c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA310u;
        goto label_2ea310;
    }
    ctx->pc = 0x2EA308u;
    {
        const bool branch_taken_0x2ea308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA308u;
        // 0x2ea30c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea308) {
            ctx->pc = 0x2EA38Cu;
            goto label_2ea38c;
        }
    }
    ctx->pc = 0x2EA310u;
label_2ea310:
    // 0x2ea310: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2ea310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2ea314:
    // 0x2ea314: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ea314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ea318:
    // 0x2ea318: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2ea31c:
    if (ctx->pc == 0x2EA31Cu) {
        ctx->pc = 0x2EA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA318u;
        // 0x2ea31c: 0x2a80b  movn        $s5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA320u;
        goto label_2ea320;
    }
    ctx->pc = 0x2EA318u;
    {
        const bool branch_taken_0x2ea318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA318u;
        // 0x2ea31c: 0x2a80b  movn        $s5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea318) {
            ctx->pc = 0x2EA38Cu;
            goto label_2ea38c;
        }
    }
    ctx->pc = 0x2EA320u;
label_2ea320:
    // 0x2ea320: 0xc0899bc  jal         func_2266F0
label_2ea324:
    if (ctx->pc == 0x2EA324u) {
        ctx->pc = 0x2EA324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA320u;
        // 0x2ea324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA328u;
        goto label_2ea328;
    }
    ctx->pc = 0x2EA320u;
    SET_GPR_U32(ctx, 31, 0x2EA328u);
    ctx->pc = 0x2EA324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA320u;
    // 0x2ea324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2EA320u, 0x2EA328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA328u;
label_2ea328:
    // 0x2ea328: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2ea32c:
    if (ctx->pc == 0x2EA32Cu) {
        ctx->pc = 0x2EA32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA328u;
        // 0x2ea32c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA330u;
        goto label_2ea330;
    }
    ctx->pc = 0x2EA328u;
    {
        const bool branch_taken_0x2ea328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA328u;
        // 0x2ea32c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea328) {
            ctx->pc = 0x2EA390u;
            goto label_2ea390;
        }
    }
    ctx->pc = 0x2EA330u;
label_2ea330:
    // 0x2ea330: 0xc0899bc  jal         func_2266F0
label_2ea334:
    if (ctx->pc == 0x2EA334u) {
        ctx->pc = 0x2EA334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA330u;
        // 0x2ea334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA338u;
        goto label_2ea338;
    }
    ctx->pc = 0x2EA330u;
    SET_GPR_U32(ctx, 31, 0x2EA338u);
    ctx->pc = 0x2EA334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA330u;
    // 0x2ea334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2EA330u, 0x2EA338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA338u;
label_2ea338:
    // 0x2ea338: 0xc097f26  jal         func_25FC98
label_2ea33c:
    if (ctx->pc == 0x2EA33Cu) {
        ctx->pc = 0x2EA33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA338u;
        // 0x2ea33c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA340u;
        goto label_2ea340;
    }
    ctx->pc = 0x2EA338u;
    SET_GPR_U32(ctx, 31, 0x2EA340u);
    ctx->pc = 0x2EA33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA338u;
    // 0x2ea33c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2EA338u, 0x2EA340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA340u;
label_2ea340:
    // 0x2ea340: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x2ea340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_2ea344:
    // 0x2ea344: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
label_2ea348:
    if (ctx->pc == 0x2EA348u) {
        ctx->pc = 0x2EA348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA344u;
        // 0x2ea348: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA34Cu;
        goto label_2ea34c;
    }
    ctx->pc = 0x2EA344u;
    {
        const bool branch_taken_0x2ea344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EA348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA344u;
        // 0x2ea348: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea344) {
            ctx->pc = 0x2EA390u;
            goto label_2ea390;
        }
    }
    ctx->pc = 0x2EA34Cu;
label_2ea34c:
    // 0x2ea34c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ea34cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea350:
    // 0x2ea350: 0xc0f7da4  jal         func_3DF690
label_2ea354:
    if (ctx->pc == 0x2EA354u) {
        ctx->pc = 0x2EA354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA350u;
        // 0x2ea354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA358u;
        goto label_2ea358;
    }
    ctx->pc = 0x2EA350u;
    SET_GPR_U32(ctx, 31, 0x2EA358u);
    ctx->pc = 0x2EA354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA350u;
    // 0x2ea354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF690u, 0x2EA350u, 0x2EA358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA358u;
label_2ea358:
    // 0x2ea358: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2ea35c:
    if (ctx->pc == 0x2EA35Cu) {
        ctx->pc = 0x2EA35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA358u;
        // 0x2ea35c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA360u;
        goto label_2ea360;
    }
    ctx->pc = 0x2EA358u;
    {
        const bool branch_taken_0x2ea358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea358) {
            ctx->pc = 0x2EA35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA358u;
            // 0x2ea35c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA384u;
            goto label_2ea384;
        }
    }
    ctx->pc = 0x2EA360u;
label_2ea360:
    // 0x2ea360: 0xc0f7da0  jal         func_3DF680
label_2ea364:
    if (ctx->pc == 0x2EA364u) {
        ctx->pc = 0x2EA364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA360u;
        // 0x2ea364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA368u;
        goto label_2ea368;
    }
    ctx->pc = 0x2EA360u;
    SET_GPR_U32(ctx, 31, 0x2EA368u);
    ctx->pc = 0x2EA364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA360u;
    // 0x2ea364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF680u, 0x2EA360u, 0x2EA368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA368u;
label_2ea368:
    // 0x2ea368: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2ea36c:
    if (ctx->pc == 0x2EA36Cu) {
        ctx->pc = 0x2EA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA368u;
        // 0x2ea36c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA370u;
        goto label_2ea370;
    }
    ctx->pc = 0x2EA368u;
    {
        const bool branch_taken_0x2ea368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea368) {
            ctx->pc = 0x2EA36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA368u;
            // 0x2ea36c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA384u;
            goto label_2ea384;
        }
    }
    ctx->pc = 0x2EA370u;
label_2ea370:
    // 0x2ea370: 0xc0f7da8  jal         func_3DF6A0
label_2ea374:
    if (ctx->pc == 0x2EA374u) {
        ctx->pc = 0x2EA374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA370u;
        // 0x2ea374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA378u;
        goto label_2ea378;
    }
    ctx->pc = 0x2EA370u;
    SET_GPR_U32(ctx, 31, 0x2EA378u);
    ctx->pc = 0x2EA374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA370u;
    // 0x2ea374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF6A0u, 0x2EA370u, 0x2EA378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA378u;
label_2ea378:
    // 0x2ea378: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ea37c:
    if (ctx->pc == 0x2EA37Cu) {
        ctx->pc = 0x2EA37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA378u;
        // 0x2ea37c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA380u;
        goto label_2ea380;
    }
    ctx->pc = 0x2EA378u;
    {
        const bool branch_taken_0x2ea378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA378u;
        // 0x2ea37c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea378) {
            ctx->pc = 0x2EA388u;
            goto label_2ea388;
        }
    }
    ctx->pc = 0x2EA380u;
label_2ea380:
    // 0x2ea380: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2ea380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea384:
    // 0x2ea384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ea384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea388:
    // 0x2ea388: 0x50a80b  movn        $s5, $v0, $s0
    ctx->pc = 0x2ea388u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
label_2ea38c:
    // 0x2ea38c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ea38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ea390:
    // 0x2ea390: 0xc0bb5de  jal         func_2ED778
label_2ea394:
    if (ctx->pc == 0x2EA394u) {
        ctx->pc = 0x2EA394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA390u;
        // 0x2ea394: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA398u;
        goto label_2ea398;
    }
    ctx->pc = 0x2EA390u;
    SET_GPR_U32(ctx, 31, 0x2EA398u);
    ctx->pc = 0x2EA394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA390u;
    // 0x2ea394: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED778u, 0x2EA390u, 0x2EA398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA398u;
label_2ea398:
    // 0x2ea398: 0x1040050a  beqz        $v0, . + 4 + (0x50A << 2)
label_2ea39c:
    if (ctx->pc == 0x2EA39Cu) {
        ctx->pc = 0x2EA39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA398u;
        // 0x2ea39c: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA3A0u;
        goto label_2ea3a0;
    }
    ctx->pc = 0x2EA398u;
    {
        const bool branch_taken_0x2ea398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA398u;
        // 0x2ea39c: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea398) {
            ctx->pc = 0x2EB7C4u;
            goto label_2eb7c4;
        }
    }
    ctx->pc = 0x2EA3A0u;
label_2ea3a0:
    // 0x2ea3a0: 0x2683fff7  addiu       $v1, $s4, -0x9
    ctx->pc = 0x2ea3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967287));
label_2ea3a4:
    // 0x2ea3a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ea3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea3a8:
    // 0x2ea3a8: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x2ea3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_2ea3ac:
    // 0x2ea3ac: 0x3d71021  addu        $v0, $fp, $s7
    ctx->pc = 0x2ea3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
label_2ea3b0:
    // 0x2ea3b0: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x2ea3b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2ea3b4:
    // 0x2ea3b4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_2ea3b8:
    if (ctx->pc == 0x2EA3B8u) {
        ctx->pc = 0x2EA3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA3B4u;
        // 0x2ea3b8: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA3BCu;
        goto label_2ea3bc;
    }
    ctx->pc = 0x2EA3B4u;
    {
        const bool branch_taken_0x2ea3b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA3B4u;
        // 0x2ea3b8: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea3b4) {
            ctx->pc = 0x2EA3C0u;
            goto label_2ea3c0;
        }
    }
    ctx->pc = 0x2EA3BCu;
label_2ea3bc:
    // 0x2ea3bc: 0xae240550  sw          $a0, 0x550($s1)
    ctx->pc = 0x2ea3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 4));
label_2ea3c0:
    // 0x2ea3c0: 0x2e820033  sltiu       $v0, $s4, 0x33
    ctx->pc = 0x2ea3c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
label_2ea3c4:
    // 0x2ea3c4: 0x104004f2  beqz        $v0, . + 4 + (0x4F2 << 2)
label_2ea3c8:
    if (ctx->pc == 0x2EA3C8u) {
        ctx->pc = 0x2EA3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA3C4u;
        // 0x2ea3c8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA3CCu;
        goto label_2ea3cc;
    }
    ctx->pc = 0x2EA3C4u;
    {
        const bool branch_taken_0x2ea3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA3C4u;
        // 0x2ea3c8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea3c4) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EA3CCu;
label_2ea3cc:
    // 0x2ea3cc: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2ea3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_2ea3d0:
    // 0x2ea3d0: 0x24421940  addiu       $v0, $v0, 0x1940
    ctx->pc = 0x2ea3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6464));
label_2ea3d4:
    // 0x2ea3d4: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x2ea3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_2ea3d8:
    // 0x2ea3d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ea3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ea3dc:
    // 0x2ea3dc: 0x600008  jr          $v1
label_2ea3e0:
    if (ctx->pc == 0x2EA3E0u) {
        ctx->pc = 0x2EA3E4u;
        goto label_2ea3e4;
    }
    ctx->pc = 0x2EA3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EA3E4u: goto label_2ea3e4;
            case 0x2EA3F8u: goto label_2ea3f8;
            case 0x2EA42Cu: goto label_2ea42c;
            case 0x2EA7F0u: goto label_2ea7f0;
            case 0x2EA964u: goto label_2ea964;
            case 0x2EA980u: goto label_2ea980;
            case 0x2EA9D4u: goto label_2ea9d4;
            case 0x2EAA7Cu: goto label_2eaa7c;
            case 0x2EAB08u: goto label_2eab08;
            case 0x2EAB40u: goto label_2eab40;
            case 0x2EAB60u: goto label_2eab60;
            case 0x2EAB94u: goto label_2eab94;
            case 0x2EABB8u: goto label_2eabb8;
            case 0x2EAC54u: goto label_2eac54;
            case 0x2EAC8Cu: goto label_2eac8c;
            case 0x2EAD0Cu: goto label_2ead0c;
            case 0x2EAD90u: goto label_2ead90;
            case 0x2EADF4u: goto label_2eadf4;
            case 0x2EAF18u: goto label_2eaf18;
            case 0x2EAFE8u: goto label_2eafe8;
            case 0x2EB120u: goto label_2eb120;
            case 0x2EB154u: goto label_2eb154;
            case 0x2EB264u: goto label_2eb264;
            case 0x2EB2C4u: goto label_2eb2c4;
            case 0x2EB300u: goto label_2eb300;
            case 0x2EB328u: goto label_2eb328;
            case 0x2EB3A8u: goto label_2eb3a8;
            case 0x2EB59Cu: goto label_2eb59c;
            case 0x2EB5A8u: goto label_2eb5a8;
            case 0x2EB790u: goto label_2eb790;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA3DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2EA3E4u;
label_2ea3e4:
    // 0x2ea3e4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2ea3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2ea3e8:
    // 0x2ea3e8: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x2ea3e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2ea3ec:
    // 0x2ea3ec: 0x9062b821  lbu         $v0, -0x47DF($v1)
    ctx->pc = 0x2ea3ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948897)));
label_2ea3f0:
    // 0x2ea3f0: 0x100004e7  b           . + 4 + (0x4E7 << 2)
label_2ea3f4:
    if (ctx->pc == 0x2EA3F4u) {
        ctx->pc = 0x2EA3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA3F0u;
        // 0x2ea3f4: 0x2c530001  sltiu       $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA3F8u;
        goto label_2ea3f8;
    }
    ctx->pc = 0x2EA3F0u;
    {
        const bool branch_taken_0x2ea3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA3F0u;
        // 0x2ea3f4: 0x2c530001  sltiu       $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea3f0) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EA3F8u;
label_2ea3f8:
    // 0x2ea3f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ea3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ea3fc:
    // 0x2ea3fc: 0xc0b93e0  jal         func_2E4F80
label_2ea400:
    if (ctx->pc == 0x2EA400u) {
        ctx->pc = 0x2EA400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA3FCu;
        // 0x2ea400: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA404u;
        goto label_2ea404;
    }
    ctx->pc = 0x2EA3FCu;
    SET_GPR_U32(ctx, 31, 0x2EA404u);
    ctx->pc = 0x2EA400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA3FCu;
    // 0x2ea400: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x2EA3FCu, 0x2EA404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA404u;
label_2ea404:
    // 0x2ea404: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ea404u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea408:
    // 0x2ea408: 0x202980b  movn        $s3, $s0, $v0
    ctx->pc = 0x2ea408u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 16));
label_2ea40c:
    // 0x2ea40c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ea40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ea410:
    // 0x2ea410: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea414:
    // 0x2ea414: 0xc0b9f4e  jal         func_2E7D38
label_2ea418:
    if (ctx->pc == 0x2EA418u) {
        ctx->pc = 0x2EA418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA414u;
        // 0x2ea418: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA41Cu;
        goto label_2ea41c;
    }
    ctx->pc = 0x2EA414u;
    SET_GPR_U32(ctx, 31, 0x2EA41Cu);
    ctx->pc = 0x2EA418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA414u;
    // 0x2ea418: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7D38u, 0x2EA414u, 0x2EA41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA41Cu;
label_2ea41c:
    // 0x2ea41c: 0x8e2212bc  lw          $v0, 0x12BC($s1)
    ctx->pc = 0x2ea41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4796)));
label_2ea420:
    // 0x2ea420: 0x3842000d  xori        $v0, $v0, 0xD
    ctx->pc = 0x2ea420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)13);
label_2ea424:
    // 0x2ea424: 0x100004da  b           . + 4 + (0x4DA << 2)
label_2ea428:
    if (ctx->pc == 0x2EA428u) {
        ctx->pc = 0x2EA428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA424u;
        // 0x2ea428: 0x202980a  movz        $s3, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA42Cu;
        goto label_2ea42c;
    }
    ctx->pc = 0x2EA424u;
    {
        const bool branch_taken_0x2ea424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA424u;
        // 0x2ea428: 0x202980a  movz        $s3, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea424) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EA42Cu;
label_2ea42c:
    // 0x2ea42c: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x2ea42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2ea430:
    // 0x2ea430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ea430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ea434:
    // 0x2ea434: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea438:
    // 0x2ea438: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x2ea438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
label_2ea43c:
    // 0x2ea43c: 0x40f809  jalr        $v0
label_2ea440:
    if (ctx->pc == 0x2EA440u) {
        ctx->pc = 0x2EA440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA43Cu;
        // 0x2ea440: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA444u;
        goto label_2ea444;
    }
    ctx->pc = 0x2EA43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EA444u);
        ctx->pc = 0x2EA440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA43Cu;
        // 0x2ea440: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA43Cu, 0x2EA444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EA444u;
label_2ea444:
    // 0x2ea444: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
label_2ea448:
    if (ctx->pc == 0x2EA448u) {
        ctx->pc = 0x2EA448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA444u;
        // 0x2ea448: 0x8e220534  lw          $v0, 0x534($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA44Cu;
        goto label_2ea44c;
    }
    ctx->pc = 0x2EA444u;
    {
        const bool branch_taken_0x2ea444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea444) {
            ctx->pc = 0x2EA448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA444u;
            // 0x2ea448: 0x8e220534  lw          $v0, 0x534($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA4D0u;
            goto label_2ea4d0;
        }
    }
    ctx->pc = 0x2EA44Cu;
label_2ea44c:
    // 0x2ea44c: 0xc092786  jal         func_249E18
label_2ea450:
    if (ctx->pc == 0x2EA450u) {
        ctx->pc = 0x2EA450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA44Cu;
        // 0x2ea450: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA454u;
        goto label_2ea454;
    }
    ctx->pc = 0x2EA44Cu;
    SET_GPR_U32(ctx, 31, 0x2EA454u);
    ctx->pc = 0x2EA450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA44Cu;
    // 0x2ea450: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249E18u, 0x2EA44Cu, 0x2EA454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA454u;
label_2ea454:
    // 0x2ea454: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_2ea458:
    if (ctx->pc == 0x2EA458u) {
        ctx->pc = 0x2EA458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA454u;
        // 0x2ea458: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA45Cu;
        goto label_2ea45c;
    }
    ctx->pc = 0x2EA454u;
    {
        const bool branch_taken_0x2ea454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA454u;
        // 0x2ea458: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea454) {
            ctx->pc = 0x2EA4CCu;
            goto label_2ea4cc;
        }
    }
    ctx->pc = 0x2EA45Cu;
label_2ea45c:
    // 0x2ea45c: 0xc0f7da4  jal         func_3DF690
label_2ea460:
    if (ctx->pc == 0x2EA460u) {
        ctx->pc = 0x2EA460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA45Cu;
        // 0x2ea460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA464u;
        goto label_2ea464;
    }
    ctx->pc = 0x2EA45Cu;
    SET_GPR_U32(ctx, 31, 0x2EA464u);
    ctx->pc = 0x2EA460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA45Cu;
    // 0x2ea460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF690u, 0x2EA45Cu, 0x2EA464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA464u;
label_2ea464:
    // 0x2ea464: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2ea468:
    if (ctx->pc == 0x2EA468u) {
        ctx->pc = 0x2EA468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA464u;
        // 0x2ea468: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA46Cu;
        goto label_2ea46c;
    }
    ctx->pc = 0x2EA464u;
    {
        const bool branch_taken_0x2ea464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea464) {
            ctx->pc = 0x2EA468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA464u;
            // 0x2ea468: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA48Cu;
            goto label_2ea48c;
        }
    }
    ctx->pc = 0x2EA46Cu;
label_2ea46c:
    // 0x2ea46c: 0xc0f7da0  jal         func_3DF680
label_2ea470:
    if (ctx->pc == 0x2EA470u) {
        ctx->pc = 0x2EA470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA46Cu;
        // 0x2ea470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA474u;
        goto label_2ea474;
    }
    ctx->pc = 0x2EA46Cu;
    SET_GPR_U32(ctx, 31, 0x2EA474u);
    ctx->pc = 0x2EA470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA46Cu;
    // 0x2ea470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF680u, 0x2EA46Cu, 0x2EA474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA474u;
label_2ea474:
    // 0x2ea474: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2ea478:
    if (ctx->pc == 0x2EA478u) {
        ctx->pc = 0x2EA478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA474u;
        // 0x2ea478: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA47Cu;
        goto label_2ea47c;
    }
    ctx->pc = 0x2EA474u;
    {
        const bool branch_taken_0x2ea474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea474) {
            ctx->pc = 0x2EA478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA474u;
            // 0x2ea478: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA48Cu;
            goto label_2ea48c;
        }
    }
    ctx->pc = 0x2EA47Cu;
label_2ea47c:
    // 0x2ea47c: 0xc0f7da8  jal         func_3DF6A0
label_2ea480:
    if (ctx->pc == 0x2EA480u) {
        ctx->pc = 0x2EA480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA47Cu;
        // 0x2ea480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA484u;
        goto label_2ea484;
    }
    ctx->pc = 0x2EA47Cu;
    SET_GPR_U32(ctx, 31, 0x2EA484u);
    ctx->pc = 0x2EA480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA47Cu;
    // 0x2ea480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF6A0u, 0x2EA47Cu, 0x2EA484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA484u;
label_2ea484:
    // 0x2ea484: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2ea488:
    if (ctx->pc == 0x2EA488u) {
        ctx->pc = 0x2EA488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA484u;
        // 0x2ea488: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA48Cu;
        goto label_2ea48c;
    }
    ctx->pc = 0x2EA484u;
    {
        const bool branch_taken_0x2ea484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea484) {
            ctx->pc = 0x2EA488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA484u;
            // 0x2ea488: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA48Cu;
            goto label_2ea48c;
        }
    }
    ctx->pc = 0x2EA48Cu;
label_2ea48c:
    // 0x2ea48c: 0x56000010  bnel        $s0, $zero, . + 4 + (0x10 << 2)
label_2ea490:
    if (ctx->pc == 0x2EA490u) {
        ctx->pc = 0x2EA490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA48Cu;
        // 0x2ea490: 0x8e220534  lw          $v0, 0x534($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA494u;
        goto label_2ea494;
    }
    ctx->pc = 0x2EA48Cu;
    {
        const bool branch_taken_0x2ea48c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea48c) {
            ctx->pc = 0x2EA490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA48Cu;
            // 0x2ea490: 0x8e220534  lw          $v0, 0x534($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA4D0u;
            goto label_2ea4d0;
        }
    }
    ctx->pc = 0x2EA494u;
label_2ea494:
    // 0x2ea494: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x2ea494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2ea498:
    // 0x2ea498: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2ea498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2ea49c:
    // 0x2ea49c: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x2ea49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_2ea4a0:
    // 0x2ea4a0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_2ea4a4:
    if (ctx->pc == 0x2EA4A4u) {
        ctx->pc = 0x2EA4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4A0u;
        // 0x2ea4a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA4A8u;
        goto label_2ea4a8;
    }
    ctx->pc = 0x2EA4A0u;
    {
        const bool branch_taken_0x2ea4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EA4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4A0u;
        // 0x2ea4a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea4a0) {
            ctx->pc = 0x2EA4B0u;
            goto label_2ea4b0;
        }
    }
    ctx->pc = 0x2EA4A8u;
label_2ea4a8:
    // 0x2ea4a8: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x2ea4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_2ea4ac:
    // 0x2ea4ac: 0x284506b8  slti        $a1, $v0, 0x6B8
    ctx->pc = 0x2ea4acu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1720) ? 1 : 0);
label_2ea4b0:
    // 0x2ea4b0: 0x54a00007  bnel        $a1, $zero, . + 4 + (0x7 << 2)
label_2ea4b4:
    if (ctx->pc == 0x2EA4B4u) {
        ctx->pc = 0x2EA4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4B0u;
        // 0x2ea4b4: 0x8e220534  lw          $v0, 0x534($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA4B8u;
        goto label_2ea4b8;
    }
    ctx->pc = 0x2EA4B0u;
    {
        const bool branch_taken_0x2ea4b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea4b0) {
            ctx->pc = 0x2EA4B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA4B0u;
            // 0x2ea4b4: 0x8e220534  lw          $v0, 0x534($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA4D0u;
            goto label_2ea4d0;
        }
    }
    ctx->pc = 0x2EA4B8u;
label_2ea4b8:
    // 0x2ea4b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ea4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ea4bc:
    // 0x2ea4bc: 0xc092796  jal         func_249E58
label_2ea4c0:
    if (ctx->pc == 0x2EA4C0u) {
        ctx->pc = 0x2EA4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4BCu;
        // 0x2ea4c0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA4C4u;
        goto label_2ea4c4;
    }
    ctx->pc = 0x2EA4BCu;
    SET_GPR_U32(ctx, 31, 0x2EA4C4u);
    ctx->pc = 0x2EA4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA4BCu;
    // 0x2ea4c0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249E58u, 0x2EA4BCu, 0x2EA4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA4C4u;
label_2ea4c4:
    // 0x2ea4c4: 0x100004b2  b           . + 4 + (0x4B2 << 2)
label_2ea4c8:
    if (ctx->pc == 0x2EA4C8u) {
        ctx->pc = 0x2EA4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4C4u;
        // 0x2ea4c8: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA4CCu;
        goto label_2ea4cc;
    }
    ctx->pc = 0x2EA4C4u;
    {
        const bool branch_taken_0x2ea4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4C4u;
        // 0x2ea4c8: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea4c4) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EA4CCu;
label_2ea4cc:
    // 0x2ea4cc: 0x8e220534  lw          $v0, 0x534($s1)
    ctx->pc = 0x2ea4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1332)));
label_2ea4d0:
    // 0x2ea4d0: 0x54400432  bnel        $v0, $zero, . + 4 + (0x432 << 2)
label_2ea4d4:
    if (ctx->pc == 0x2EA4D4u) {
        ctx->pc = 0x2EA4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4D0u;
        // 0x2ea4d4: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA4D8u;
        goto label_2ea4d8;
    }
    ctx->pc = 0x2EA4D0u;
    {
        const bool branch_taken_0x2ea4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea4d0) {
            ctx->pc = 0x2EA4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA4D0u;
            // 0x2ea4d4: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB59Cu;
            goto label_2eb59c;
        }
    }
    ctx->pc = 0x2EA4D8u;
label_2ea4d8:
    // 0x2ea4d8: 0x8e22056c  lw          $v0, 0x56C($s1)
    ctx->pc = 0x2ea4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1388)));
label_2ea4dc:
    // 0x2ea4dc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2ea4e0:
    if (ctx->pc == 0x2EA4E0u) {
        ctx->pc = 0x2EA4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4DCu;
        // 0x2ea4e0: 0x8e220338  lw          $v0, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA4E4u;
        goto label_2ea4e4;
    }
    ctx->pc = 0x2EA4DCu;
    {
        const bool branch_taken_0x2ea4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea4dc) {
            ctx->pc = 0x2EA4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA4DCu;
            // 0x2ea4e0: 0x8e220338  lw          $v0, 0x338($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA4ECu;
            goto label_2ea4ec;
        }
    }
    ctx->pc = 0x2EA4E4u;
label_2ea4e4:
    // 0x2ea4e4: 0x1000042d  b           . + 4 + (0x42D << 2)
label_2ea4e8:
    if (ctx->pc == 0x2EA4E8u) {
        ctx->pc = 0x2EA4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4E4u;
        // 0x2ea4e8: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA4ECu;
        goto label_2ea4ec;
    }
    ctx->pc = 0x2EA4E4u;
    {
        const bool branch_taken_0x2ea4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4E4u;
        // 0x2ea4e8: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea4e4) {
            ctx->pc = 0x2EB59Cu;
            goto label_2eb59c;
        }
    }
    ctx->pc = 0x2EA4ECu;
label_2ea4ec:
    // 0x2ea4ec: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2ea4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2ea4f0:
    // 0x2ea4f0: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x2ea4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_2ea4f4:
    // 0x2ea4f4: 0x5064042a  beql        $v1, $a0, . + 4 + (0x42A << 2)
label_2ea4f8:
    if (ctx->pc == 0x2EA4F8u) {
        ctx->pc = 0x2EA4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4F4u;
        // 0x2ea4f8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA4FCu;
        goto label_2ea4fc;
    }
    ctx->pc = 0x2EA4F4u;
    {
        const bool branch_taken_0x2ea4f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ea4f4) {
            ctx->pc = 0x2EA4F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA4F4u;
            // 0x2ea4f8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EA4FCu;
label_2ea4fc:
    // 0x2ea4fc: 0xc08f672  jal         func_23D9C8
label_2ea500:
    if (ctx->pc == 0x2EA500u) {
        ctx->pc = 0x2EA500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4FCu;
        // 0x2ea500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA504u;
        goto label_2ea504;
    }
    ctx->pc = 0x2EA4FCu;
    SET_GPR_U32(ctx, 31, 0x2EA504u);
    ctx->pc = 0x2EA500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA4FCu;
    // 0x2ea500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x2EA4FCu, 0x2EA504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA504u;
label_2ea504:
    // 0x2ea504: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ea508:
    if (ctx->pc == 0x2EA508u) {
        ctx->pc = 0x2EA50Cu;
        goto label_2ea50c;
    }
    ctx->pc = 0x2EA504u;
    {
        const bool branch_taken_0x2ea504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea504) {
            ctx->pc = 0x2EA51Cu;
            goto label_2ea51c;
        }
    }
    ctx->pc = 0x2EA50Cu;
label_2ea50c:
    // 0x2ea50c: 0xc08dab6  jal         func_236AD8
label_2ea510:
    if (ctx->pc == 0x2EA510u) {
        ctx->pc = 0x2EA510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA50Cu;
        // 0x2ea510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA514u;
        goto label_2ea514;
    }
    ctx->pc = 0x2EA50Cu;
    SET_GPR_U32(ctx, 31, 0x2EA514u);
    ctx->pc = 0x2EA510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA50Cu;
    // 0x2ea510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x2EA50Cu, 0x2EA514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA514u;
label_2ea514:
    // 0x2ea514: 0x54400422  bnel        $v0, $zero, . + 4 + (0x422 << 2)
label_2ea518:
    if (ctx->pc == 0x2EA518u) {
        ctx->pc = 0x2EA518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA514u;
        // 0x2ea518: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA51Cu;
        goto label_2ea51c;
    }
    ctx->pc = 0x2EA514u;
    {
        const bool branch_taken_0x2ea514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea514) {
            ctx->pc = 0x2EA518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA514u;
            // 0x2ea518: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EA51Cu;
label_2ea51c:
    // 0x2ea51c: 0xc08f68a  jal         func_23DA28
label_2ea520:
    if (ctx->pc == 0x2EA520u) {
        ctx->pc = 0x2EA520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA51Cu;
        // 0x2ea520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA524u;
        goto label_2ea524;
    }
    ctx->pc = 0x2EA51Cu;
    SET_GPR_U32(ctx, 31, 0x2EA524u);
    ctx->pc = 0x2EA520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA51Cu;
    // 0x2ea520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA28u, 0x2EA51Cu, 0x2EA524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA524u;
label_2ea524:
    // 0x2ea524: 0x5440041e  bnel        $v0, $zero, . + 4 + (0x41E << 2)
label_2ea528:
    if (ctx->pc == 0x2EA528u) {
        ctx->pc = 0x2EA528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA524u;
        // 0x2ea528: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA52Cu;
        goto label_2ea52c;
    }
    ctx->pc = 0x2EA524u;
    {
        const bool branch_taken_0x2ea524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea524) {
            ctx->pc = 0x2EA528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA524u;
            // 0x2ea528: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EA52Cu;
label_2ea52c:
    // 0x2ea52c: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x2ea52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2ea530:
    // 0x2ea530: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x2ea530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_2ea534:
    // 0x2ea534: 0x8c440150  lw          $a0, 0x150($v0)
    ctx->pc = 0x2ea534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_2ea538:
    // 0x2ea538: 0x10830418  beq         $a0, $v1, . + 4 + (0x418 << 2)
label_2ea53c:
    if (ctx->pc == 0x2EA53Cu) {
        ctx->pc = 0x2EA53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA538u;
        // 0x2ea53c: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA540u;
        goto label_2ea540;
    }
    ctx->pc = 0x2EA538u;
    {
        const bool branch_taken_0x2ea538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EA53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA538u;
        // 0x2ea53c: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea538) {
            ctx->pc = 0x2EB59Cu;
            goto label_2eb59c;
        }
    }
    ctx->pc = 0x2EA540u;
label_2ea540:
    // 0x2ea540: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2ea540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2ea544:
    // 0x2ea544: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ea544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ea548:
    // 0x2ea548: 0x10430414  beq         $v0, $v1, . + 4 + (0x414 << 2)
label_2ea54c:
    if (ctx->pc == 0x2EA54Cu) {
        ctx->pc = 0x2EA54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA548u;
        // 0x2ea54c: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA550u;
        goto label_2ea550;
    }
    ctx->pc = 0x2EA548u;
    {
        const bool branch_taken_0x2ea548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EA54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA548u;
        // 0x2ea54c: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea548) {
            ctx->pc = 0x2EB59Cu;
            goto label_2eb59c;
        }
    }
    ctx->pc = 0x2EA550u;
label_2ea550:
    // 0x2ea550: 0x1482000e  bne         $a0, $v0, . + 4 + (0xE << 2)
label_2ea554:
    if (ctx->pc == 0x2EA554u) {
        ctx->pc = 0x2EA558u;
        goto label_2ea558;
    }
    ctx->pc = 0x2EA550u;
    {
        const bool branch_taken_0x2ea550 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ea550) {
            ctx->pc = 0x2EA58Cu;
            goto label_2ea58c;
        }
    }
    ctx->pc = 0x2EA558u;
label_2ea558:
    // 0x2ea558: 0x12c0000c  beqz        $s6, . + 4 + (0xC << 2)
label_2ea55c:
    if (ctx->pc == 0x2EA55Cu) {
        ctx->pc = 0x2EA55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA558u;
        // 0x2ea55c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA560u;
        goto label_2ea560;
    }
    ctx->pc = 0x2EA558u;
    {
        const bool branch_taken_0x2ea558 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA558u;
        // 0x2ea55c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea558) {
            ctx->pc = 0x2EA58Cu;
            goto label_2ea58c;
        }
    }
    ctx->pc = 0x2EA560u;
label_2ea560:
    // 0x2ea560: 0xc0d8de2  jal         func_363788
label_2ea564:
    if (ctx->pc == 0x2EA564u) {
        ctx->pc = 0x2EA564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA560u;
        // 0x2ea564: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA568u;
        goto label_2ea568;
    }
    ctx->pc = 0x2EA560u;
    SET_GPR_U32(ctx, 31, 0x2EA568u);
    ctx->pc = 0x2EA564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA560u;
    // 0x2ea564: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2EA560u, 0x2EA568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA568u;
label_2ea568:
    // 0x2ea568: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2ea56c:
    if (ctx->pc == 0x2EA56Cu) {
        ctx->pc = 0x2EA56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA568u;
        // 0x2ea56c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA570u;
        goto label_2ea570;
    }
    ctx->pc = 0x2EA568u;
    {
        const bool branch_taken_0x2ea568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea568) {
            ctx->pc = 0x2EA56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA568u;
            // 0x2ea56c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA584u;
            goto label_2ea584;
        }
    }
    ctx->pc = 0x2EA570u;
label_2ea570:
    // 0x2ea570: 0xc0d8de2  jal         func_363788
label_2ea574:
    if (ctx->pc == 0x2EA574u) {
        ctx->pc = 0x2EA574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA570u;
        // 0x2ea574: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA578u;
        goto label_2ea578;
    }
    ctx->pc = 0x2EA570u;
    SET_GPR_U32(ctx, 31, 0x2EA578u);
    ctx->pc = 0x2EA574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA570u;
    // 0x2ea574: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2EA570u, 0x2EA578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA578u;
label_2ea578:
    // 0x2ea578: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ea578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea57c:
    // 0x2ea57c: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_2ea580:
    if (ctx->pc == 0x2EA580u) {
        ctx->pc = 0x2EA580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA57Cu;
        // 0x2ea580: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA584u;
        goto label_2ea584;
    }
    ctx->pc = 0x2EA57Cu;
    {
        const bool branch_taken_0x2ea57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ea57c) {
            ctx->pc = 0x2EA580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA57Cu;
            // 0x2ea580: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA584u;
            goto label_2ea584;
        }
    }
    ctx->pc = 0x2EA584u;
label_2ea584:
    // 0x2ea584: 0x56000406  bnel        $s0, $zero, . + 4 + (0x406 << 2)
label_2ea588:
    if (ctx->pc == 0x2EA588u) {
        ctx->pc = 0x2EA588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA584u;
        // 0x2ea588: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA58Cu;
        goto label_2ea58c;
    }
    ctx->pc = 0x2EA584u;
    {
        const bool branch_taken_0x2ea584 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea584) {
            ctx->pc = 0x2EA588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA584u;
            // 0x2ea588: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EA58Cu;
label_2ea58c:
    // 0x2ea58c: 0xc0a2bbc  jal         func_28AEF0
label_2ea590:
    if (ctx->pc == 0x2EA590u) {
        ctx->pc = 0x2EA594u;
        goto label_2ea594;
    }
    ctx->pc = 0x2EA58Cu;
    SET_GPR_U32(ctx, 31, 0x2EA594u);
    ctx->pc = 0x28AEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AEF0u, 0x2EA58Cu, 0x2EA594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA594u;
label_2ea594:
    // 0x2ea594: 0x54400402  bnel        $v0, $zero, . + 4 + (0x402 << 2)
label_2ea598:
    if (ctx->pc == 0x2EA598u) {
        ctx->pc = 0x2EA598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA594u;
        // 0x2ea598: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA59Cu;
        goto label_2ea59c;
    }
    ctx->pc = 0x2EA594u;
    {
        const bool branch_taken_0x2ea594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea594) {
            ctx->pc = 0x2EA598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA594u;
            // 0x2ea598: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EA59Cu;
label_2ea59c:
    // 0x2ea59c: 0x8e2211e4  lw          $v0, 0x11E4($s1)
    ctx->pc = 0x2ea59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
label_2ea5a0:
    // 0x2ea5a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2ea5a4:
    if (ctx->pc == 0x2EA5A4u) {
        ctx->pc = 0x2EA5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA5A0u;
        // 0x2ea5a4: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA5A8u;
        goto label_2ea5a8;
    }
    ctx->pc = 0x2EA5A0u;
    {
        const bool branch_taken_0x2ea5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA5A0u;
        // 0x2ea5a4: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea5a0) {
            ctx->pc = 0x2EA5BCu;
            goto label_2ea5bc;
        }
    }
    ctx->pc = 0x2EA5A8u;
label_2ea5a8:
    // 0x2ea5a8: 0x8c4200b8  lw          $v0, 0xB8($v0)
    ctx->pc = 0x2ea5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
label_2ea5ac:
    // 0x2ea5ac: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x2ea5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_2ea5b0:
    // 0x2ea5b0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2ea5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2ea5b4:
    // 0x2ea5b4: 0x546403fa  bnel        $v1, $a0, . + 4 + (0x3FA << 2)
label_2ea5b8:
    if (ctx->pc == 0x2EA5B8u) {
        ctx->pc = 0x2EA5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA5B4u;
        // 0x2ea5b8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA5BCu;
        goto label_2ea5bc;
    }
    ctx->pc = 0x2EA5B4u;
    {
        const bool branch_taken_0x2ea5b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ea5b4) {
            ctx->pc = 0x2EA5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA5B4u;
            // 0x2ea5b8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EA5BCu;
label_2ea5bc:
    // 0x2ea5bc: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x2ea5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_2ea5c0:
    // 0x2ea5c0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2ea5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2ea5c4:
    // 0x2ea5c4: 0x506203f6  beql        $v1, $v0, . + 4 + (0x3F6 << 2)
label_2ea5c8:
    if (ctx->pc == 0x2EA5C8u) {
        ctx->pc = 0x2EA5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA5C4u;
        // 0x2ea5c8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA5CCu;
        goto label_2ea5cc;
    }
    ctx->pc = 0x2EA5C4u;
    {
        const bool branch_taken_0x2ea5c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ea5c4) {
            ctx->pc = 0x2EA5C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA5C4u;
            // 0x2ea5c8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EA5CCu;
label_2ea5cc:
    // 0x2ea5cc: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2ea5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2ea5d0:
    // 0x2ea5d0: 0x4430017  bgezl       $v0, . + 4 + (0x17 << 2)
label_2ea5d4:
    if (ctx->pc == 0x2EA5D4u) {
        ctx->pc = 0x2EA5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA5D0u;
        // 0x2ea5d4: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA5D8u;
        goto label_2ea5d8;
    }
    ctx->pc = 0x2EA5D0u;
    {
        const bool branch_taken_0x2ea5d0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2ea5d0) {
            ctx->pc = 0x2EA5D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA5D0u;
            // 0x2ea5d4: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA630u;
            goto label_2ea630;
        }
    }
    ctx->pc = 0x2EA5D8u;
label_2ea5d8:
    // 0x2ea5d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ea5d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea5dc:
    // 0x2ea5dc: 0xc0f7da4  jal         func_3DF690
label_2ea5e0:
    if (ctx->pc == 0x2EA5E0u) {
        ctx->pc = 0x2EA5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA5DCu;
        // 0x2ea5e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA5E4u;
        goto label_2ea5e4;
    }
    ctx->pc = 0x2EA5DCu;
    SET_GPR_U32(ctx, 31, 0x2EA5E4u);
    ctx->pc = 0x2EA5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA5DCu;
    // 0x2ea5e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF690u, 0x2EA5DCu, 0x2EA5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA5E4u;
label_2ea5e4:
    // 0x2ea5e4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2ea5e8:
    if (ctx->pc == 0x2EA5E8u) {
        ctx->pc = 0x2EA5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA5E4u;
        // 0x2ea5e8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA5ECu;
        goto label_2ea5ec;
    }
    ctx->pc = 0x2EA5E4u;
    {
        const bool branch_taken_0x2ea5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea5e4) {
            ctx->pc = 0x2EA5E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA5E4u;
            // 0x2ea5e8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA60Cu;
            goto label_2ea60c;
        }
    }
    ctx->pc = 0x2EA5ECu;
label_2ea5ec:
    // 0x2ea5ec: 0xc0f7da0  jal         func_3DF680
label_2ea5f0:
    if (ctx->pc == 0x2EA5F0u) {
        ctx->pc = 0x2EA5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA5ECu;
        // 0x2ea5f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA5F4u;
        goto label_2ea5f4;
    }
    ctx->pc = 0x2EA5ECu;
    SET_GPR_U32(ctx, 31, 0x2EA5F4u);
    ctx->pc = 0x2EA5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA5ECu;
    // 0x2ea5f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF680u, 0x2EA5ECu, 0x2EA5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA5F4u;
label_2ea5f4:
    // 0x2ea5f4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2ea5f8:
    if (ctx->pc == 0x2EA5F8u) {
        ctx->pc = 0x2EA5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA5F4u;
        // 0x2ea5f8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA5FCu;
        goto label_2ea5fc;
    }
    ctx->pc = 0x2EA5F4u;
    {
        const bool branch_taken_0x2ea5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea5f4) {
            ctx->pc = 0x2EA5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA5F4u;
            // 0x2ea5f8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA60Cu;
            goto label_2ea60c;
        }
    }
    ctx->pc = 0x2EA5FCu;
label_2ea5fc:
    // 0x2ea5fc: 0xc0f7da8  jal         func_3DF6A0
label_2ea600:
    if (ctx->pc == 0x2EA600u) {
        ctx->pc = 0x2EA600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA5FCu;
        // 0x2ea600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA604u;
        goto label_2ea604;
    }
    ctx->pc = 0x2EA5FCu;
    SET_GPR_U32(ctx, 31, 0x2EA604u);
    ctx->pc = 0x2EA600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA5FCu;
    // 0x2ea600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF6A0u, 0x2EA5FCu, 0x2EA604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA604u;
label_2ea604:
    // 0x2ea604: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2ea608:
    if (ctx->pc == 0x2EA608u) {
        ctx->pc = 0x2EA608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA604u;
        // 0x2ea608: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA60Cu;
        goto label_2ea60c;
    }
    ctx->pc = 0x2EA604u;
    {
        const bool branch_taken_0x2ea604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea604) {
            ctx->pc = 0x2EA608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA604u;
            // 0x2ea608: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA60Cu;
            goto label_2ea60c;
        }
    }
    ctx->pc = 0x2EA60Cu;
label_2ea60c:
    // 0x2ea60c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2ea610:
    if (ctx->pc == 0x2EA610u) {
        ctx->pc = 0x2EA610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA60Cu;
        // 0x2ea610: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA614u;
        goto label_2ea614;
    }
    ctx->pc = 0x2EA60Cu;
    {
        const bool branch_taken_0x2ea60c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA60Cu;
        // 0x2ea610: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea60c) {
            ctx->pc = 0x2EA628u;
            goto label_2ea628;
        }
    }
    ctx->pc = 0x2EA614u;
label_2ea614:
    // 0x2ea614: 0x8e2311c0  lw          $v1, 0x11C0($s1)
    ctx->pc = 0x2ea614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2ea618:
    // 0x2ea618: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ea618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2ea61c:
    // 0x2ea61c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2ea61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ea620:
    // 0x2ea620: 0x1000002b  b           . + 4 + (0x2B << 2)
label_2ea624:
    if (ctx->pc == 0x2EA624u) {
        ctx->pc = 0x2EA624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA620u;
        // 0x2ea624: 0xae2311c0  sw          $v1, 0x11C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA628u;
        goto label_2ea628;
    }
    ctx->pc = 0x2EA620u;
    {
        const bool branch_taken_0x2ea620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA620u;
        // 0x2ea624: 0xae2311c0  sw          $v1, 0x11C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea620) {
            ctx->pc = 0x2EA6D0u;
            goto label_2ea6d0;
        }
    }
    ctx->pc = 0x2EA628u;
label_2ea628:
    // 0x2ea628: 0x10000029  b           . + 4 + (0x29 << 2)
label_2ea62c:
    if (ctx->pc == 0x2EA62Cu) {
        ctx->pc = 0x2EA62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA628u;
        // 0x2ea62c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA630u;
        goto label_2ea630;
    }
    ctx->pc = 0x2EA628u;
    {
        const bool branch_taken_0x2ea628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA628u;
        // 0x2ea62c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea628) {
            ctx->pc = 0x2EA6D0u;
            goto label_2ea6d0;
        }
    }
    ctx->pc = 0x2EA630u;
label_2ea630:
    // 0x2ea630: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2ea630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_2ea634:
    // 0x2ea634: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ea634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ea638:
    // 0x2ea638: 0x54430026  bnel        $v0, $v1, . + 4 + (0x26 << 2)
label_2ea63c:
    if (ctx->pc == 0x2EA63Cu) {
        ctx->pc = 0x2EA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA638u;
        // 0x2ea63c: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA640u;
        goto label_2ea640;
    }
    ctx->pc = 0x2EA638u;
    {
        const bool branch_taken_0x2ea638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ea638) {
            ctx->pc = 0x2EA63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA638u;
            // 0x2ea63c: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA6D4u;
            goto label_2ea6d4;
        }
    }
    ctx->pc = 0x2EA640u;
label_2ea640:
    // 0x2ea640: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ea640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea644:
    // 0x2ea644: 0xc0f7da4  jal         func_3DF690
label_2ea648:
    if (ctx->pc == 0x2EA648u) {
        ctx->pc = 0x2EA648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA644u;
        // 0x2ea648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA64Cu;
        goto label_2ea64c;
    }
    ctx->pc = 0x2EA644u;
    SET_GPR_U32(ctx, 31, 0x2EA64Cu);
    ctx->pc = 0x2EA648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA644u;
    // 0x2ea648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF690u, 0x2EA644u, 0x2EA64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA64Cu;
label_2ea64c:
    // 0x2ea64c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2ea650:
    if (ctx->pc == 0x2EA650u) {
        ctx->pc = 0x2EA650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA64Cu;
        // 0x2ea650: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA654u;
        goto label_2ea654;
    }
    ctx->pc = 0x2EA64Cu;
    {
        const bool branch_taken_0x2ea64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea64c) {
            ctx->pc = 0x2EA650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA64Cu;
            // 0x2ea650: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA674u;
            goto label_2ea674;
        }
    }
    ctx->pc = 0x2EA654u;
label_2ea654:
    // 0x2ea654: 0xc0f7da0  jal         func_3DF680
label_2ea658:
    if (ctx->pc == 0x2EA658u) {
        ctx->pc = 0x2EA658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA654u;
        // 0x2ea658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA65Cu;
        goto label_2ea65c;
    }
    ctx->pc = 0x2EA654u;
    SET_GPR_U32(ctx, 31, 0x2EA65Cu);
    ctx->pc = 0x2EA658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA654u;
    // 0x2ea658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF680u, 0x2EA654u, 0x2EA65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA65Cu;
label_2ea65c:
    // 0x2ea65c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2ea660:
    if (ctx->pc == 0x2EA660u) {
        ctx->pc = 0x2EA660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA65Cu;
        // 0x2ea660: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA664u;
        goto label_2ea664;
    }
    ctx->pc = 0x2EA65Cu;
    {
        const bool branch_taken_0x2ea65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea65c) {
            ctx->pc = 0x2EA660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA65Cu;
            // 0x2ea660: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA674u;
            goto label_2ea674;
        }
    }
    ctx->pc = 0x2EA664u;
label_2ea664:
    // 0x2ea664: 0xc0f7da8  jal         func_3DF6A0
label_2ea668:
    if (ctx->pc == 0x2EA668u) {
        ctx->pc = 0x2EA668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA664u;
        // 0x2ea668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA66Cu;
        goto label_2ea66c;
    }
    ctx->pc = 0x2EA664u;
    SET_GPR_U32(ctx, 31, 0x2EA66Cu);
    ctx->pc = 0x2EA668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA664u;
    // 0x2ea668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF6A0u, 0x2EA664u, 0x2EA66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA66Cu;
label_2ea66c:
    // 0x2ea66c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2ea670:
    if (ctx->pc == 0x2EA670u) {
        ctx->pc = 0x2EA670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA66Cu;
        // 0x2ea670: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA674u;
        goto label_2ea674;
    }
    ctx->pc = 0x2EA66Cu;
    {
        const bool branch_taken_0x2ea66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea66c) {
            ctx->pc = 0x2EA670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA66Cu;
            // 0x2ea670: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA674u;
            goto label_2ea674;
        }
    }
    ctx->pc = 0x2EA674u;
label_2ea674:
    // 0x2ea674: 0x56000017  bnel        $s0, $zero, . + 4 + (0x17 << 2)
label_2ea678:
    if (ctx->pc == 0x2EA678u) {
        ctx->pc = 0x2EA678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA674u;
        // 0x2ea678: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA67Cu;
        goto label_2ea67c;
    }
    ctx->pc = 0x2EA674u;
    {
        const bool branch_taken_0x2ea674 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea674) {
            ctx->pc = 0x2EA678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA674u;
            // 0x2ea678: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA6D4u;
            goto label_2ea6d4;
        }
    }
    ctx->pc = 0x2EA67Cu;
label_2ea67c:
    // 0x2ea67c: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
label_2ea680:
    if (ctx->pc == 0x2EA680u) {
        ctx->pc = 0x2EA680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA67Cu;
        // 0x2ea680: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA684u;
        goto label_2ea684;
    }
    ctx->pc = 0x2EA67Cu;
    {
        const bool branch_taken_0x2ea67c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA67Cu;
        // 0x2ea680: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea67c) {
            ctx->pc = 0x2EA698u;
            goto label_2ea698;
        }
    }
    ctx->pc = 0x2EA684u;
label_2ea684:
    // 0x2ea684: 0xc0d8de2  jal         func_363788
label_2ea688:
    if (ctx->pc == 0x2EA688u) {
        ctx->pc = 0x2EA688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA684u;
        // 0x2ea688: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA68Cu;
        goto label_2ea68c;
    }
    ctx->pc = 0x2EA684u;
    SET_GPR_U32(ctx, 31, 0x2EA68Cu);
    ctx->pc = 0x2EA688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA684u;
    // 0x2ea688: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2EA684u, 0x2EA68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA68Cu;
label_2ea68c:
    // 0x2ea68c: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2ea68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_2ea690:
    // 0x2ea690: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2ea694:
    if (ctx->pc == 0x2EA694u) {
        ctx->pc = 0x2EA694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA690u;
        // 0x2ea694: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA698u;
        goto label_2ea698;
    }
    ctx->pc = 0x2EA690u;
    {
        const bool branch_taken_0x2ea690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA690u;
        // 0x2ea694: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea690) {
            ctx->pc = 0x2EA6D0u;
            goto label_2ea6d0;
        }
    }
    ctx->pc = 0x2EA698u;
label_2ea698:
    // 0x2ea698: 0xc0bb5de  jal         func_2ED778
label_2ea69c:
    if (ctx->pc == 0x2EA69Cu) {
        ctx->pc = 0x2EA69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA698u;
        // 0x2ea69c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA6A0u;
        goto label_2ea6a0;
    }
    ctx->pc = 0x2EA698u;
    SET_GPR_U32(ctx, 31, 0x2EA6A0u);
    ctx->pc = 0x2EA69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA698u;
    // 0x2ea69c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED778u, 0x2EA698u, 0x2EA6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA6A0u;
label_2ea6a0:
    // 0x2ea6a0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_2ea6a4:
    if (ctx->pc == 0x2EA6A4u) {
        ctx->pc = 0x2EA6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6A0u;
        // 0x2ea6a4: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA6A8u;
        goto label_2ea6a8;
    }
    ctx->pc = 0x2EA6A0u;
    {
        const bool branch_taken_0x2ea6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea6a0) {
            ctx->pc = 0x2EA6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA6A0u;
            // 0x2ea6a4: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA6D4u;
            goto label_2ea6d4;
        }
    }
    ctx->pc = 0x2EA6A8u;
label_2ea6a8:
    // 0x2ea6a8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2ea6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2ea6ac:
    // 0x2ea6ac: 0xc0bb5de  jal         func_2ED778
label_2ea6b0:
    if (ctx->pc == 0x2EA6B0u) {
        ctx->pc = 0x2EA6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6ACu;
        // 0x2ea6b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA6B4u;
        goto label_2ea6b4;
    }
    ctx->pc = 0x2EA6ACu;
    SET_GPR_U32(ctx, 31, 0x2EA6B4u);
    ctx->pc = 0x2EA6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA6ACu;
    // 0x2ea6b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED778u, 0x2EA6ACu, 0x2EA6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA6B4u;
label_2ea6b4:
    // 0x2ea6b4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2ea6b8:
    if (ctx->pc == 0x2EA6B8u) {
        ctx->pc = 0x2EA6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6B4u;
        // 0x2ea6b8: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA6BCu;
        goto label_2ea6bc;
    }
    ctx->pc = 0x2EA6B4u;
    {
        const bool branch_taken_0x2ea6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea6b4) {
            ctx->pc = 0x2EA6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA6B4u;
            // 0x2ea6b8: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA6D4u;
            goto label_2ea6d4;
        }
    }
    ctx->pc = 0x2EA6BCu;
label_2ea6bc:
    // 0x2ea6bc: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2ea6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2ea6c0:
    // 0x2ea6c0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ea6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2ea6c4:
    // 0x2ea6c4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ea6c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea6c8:
    // 0x2ea6c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ea6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2ea6cc:
    // 0x2ea6cc: 0xae2211c0  sw          $v0, 0x11C0($s1)
    ctx->pc = 0x2ea6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 2));
label_2ea6d0:
    // 0x2ea6d0: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x2ea6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2ea6d4:
    // 0x2ea6d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ea6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea6d8:
    // 0x2ea6d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2ea6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2ea6dc:
    // 0x2ea6dc: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2ea6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2ea6e0:
    // 0x2ea6e0: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x2ea6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
label_2ea6e4:
    // 0x2ea6e4: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x2ea6e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2ea6e8:
    // 0x2ea6e8: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_2ea6ec:
    if (ctx->pc == 0x2EA6ECu) {
        ctx->pc = 0x2EA6F0u;
        goto label_2ea6f0;
    }
    ctx->pc = 0x2EA6E8u;
    {
        const bool branch_taken_0x2ea6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea6e8) {
            ctx->pc = 0x2EA7D8u;
            goto label_2ea7d8;
        }
    }
    ctx->pc = 0x2EA6F0u;
label_2ea6f0:
    // 0x2ea6f0: 0x12c00039  beqz        $s6, . + 4 + (0x39 << 2)
label_2ea6f4:
    if (ctx->pc == 0x2EA6F4u) {
        ctx->pc = 0x2EA6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6F0u;
        // 0x2ea6f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA6F8u;
        goto label_2ea6f8;
    }
    ctx->pc = 0x2EA6F0u;
    {
        const bool branch_taken_0x2ea6f0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6F0u;
        // 0x2ea6f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea6f0) {
            ctx->pc = 0x2EA7D8u;
            goto label_2ea7d8;
        }
    }
    ctx->pc = 0x2EA6F8u;
label_2ea6f8:
    // 0x2ea6f8: 0xc0d8de2  jal         func_363788
label_2ea6fc:
    if (ctx->pc == 0x2EA6FCu) {
        ctx->pc = 0x2EA6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6F8u;
        // 0x2ea6fc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA700u;
        goto label_2ea700;
    }
    ctx->pc = 0x2EA6F8u;
    SET_GPR_U32(ctx, 31, 0x2EA700u);
    ctx->pc = 0x2EA6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA6F8u;
    // 0x2ea6fc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2EA6F8u, 0x2EA700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA700u;
label_2ea700:
    // 0x2ea700: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2ea704:
    if (ctx->pc == 0x2EA704u) {
        ctx->pc = 0x2EA704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA700u;
        // 0x2ea704: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA708u;
        goto label_2ea708;
    }
    ctx->pc = 0x2EA700u;
    {
        const bool branch_taken_0x2ea700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea700) {
            ctx->pc = 0x2EA704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA700u;
            // 0x2ea704: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA71Cu;
            goto label_2ea71c;
        }
    }
    ctx->pc = 0x2EA708u;
label_2ea708:
    // 0x2ea708: 0xc0d8de2  jal         func_363788
label_2ea70c:
    if (ctx->pc == 0x2EA70Cu) {
        ctx->pc = 0x2EA70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA708u;
        // 0x2ea70c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA710u;
        goto label_2ea710;
    }
    ctx->pc = 0x2EA708u;
    SET_GPR_U32(ctx, 31, 0x2EA710u);
    ctx->pc = 0x2EA70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA708u;
    // 0x2ea70c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2EA708u, 0x2EA710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA710u;
label_2ea710:
    // 0x2ea710: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2ea710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2ea714:
    // 0x2ea714: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_2ea718:
    if (ctx->pc == 0x2EA718u) {
        ctx->pc = 0x2EA718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA714u;
        // 0x2ea718: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA71Cu;
        goto label_2ea71c;
    }
    ctx->pc = 0x2EA714u;
    {
        const bool branch_taken_0x2ea714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ea714) {
            ctx->pc = 0x2EA718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA714u;
            // 0x2ea718: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA71Cu;
            goto label_2ea71c;
        }
    }
    ctx->pc = 0x2EA71Cu;
label_2ea71c:
    // 0x2ea71c: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
label_2ea720:
    if (ctx->pc == 0x2EA720u) {
        ctx->pc = 0x2EA720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA71Cu;
        // 0x2ea720: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA724u;
        goto label_2ea724;
    }
    ctx->pc = 0x2EA71Cu;
    {
        const bool branch_taken_0x2ea71c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA71Cu;
        // 0x2ea720: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea71c) {
            ctx->pc = 0x2EA7D8u;
            goto label_2ea7d8;
        }
    }
    ctx->pc = 0x2EA724u;
label_2ea724:
    // 0x2ea724: 0xc0f7da4  jal         func_3DF690
label_2ea728:
    if (ctx->pc == 0x2EA728u) {
        ctx->pc = 0x2EA728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA724u;
        // 0x2ea728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA72Cu;
        goto label_2ea72c;
    }
    ctx->pc = 0x2EA724u;
    SET_GPR_U32(ctx, 31, 0x2EA72Cu);
    ctx->pc = 0x2EA728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA724u;
    // 0x2ea728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF690u, 0x2EA724u, 0x2EA72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA72Cu;
label_2ea72c:
    // 0x2ea72c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2ea730:
    if (ctx->pc == 0x2EA730u) {
        ctx->pc = 0x2EA730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA72Cu;
        // 0x2ea730: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA734u;
        goto label_2ea734;
    }
    ctx->pc = 0x2EA72Cu;
    {
        const bool branch_taken_0x2ea72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea72c) {
            ctx->pc = 0x2EA730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA72Cu;
            // 0x2ea730: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA754u;
            goto label_2ea754;
        }
    }
    ctx->pc = 0x2EA734u;
label_2ea734:
    // 0x2ea734: 0xc0f7da0  jal         func_3DF680
label_2ea738:
    if (ctx->pc == 0x2EA738u) {
        ctx->pc = 0x2EA738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA734u;
        // 0x2ea738: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA73Cu;
        goto label_2ea73c;
    }
    ctx->pc = 0x2EA734u;
    SET_GPR_U32(ctx, 31, 0x2EA73Cu);
    ctx->pc = 0x2EA738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA734u;
    // 0x2ea738: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF680u, 0x2EA734u, 0x2EA73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA73Cu;
label_2ea73c:
    // 0x2ea73c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2ea740:
    if (ctx->pc == 0x2EA740u) {
        ctx->pc = 0x2EA740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA73Cu;
        // 0x2ea740: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA744u;
        goto label_2ea744;
    }
    ctx->pc = 0x2EA73Cu;
    {
        const bool branch_taken_0x2ea73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea73c) {
            ctx->pc = 0x2EA740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA73Cu;
            // 0x2ea740: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA754u;
            goto label_2ea754;
        }
    }
    ctx->pc = 0x2EA744u;
label_2ea744:
    // 0x2ea744: 0xc0f7da8  jal         func_3DF6A0
label_2ea748:
    if (ctx->pc == 0x2EA748u) {
        ctx->pc = 0x2EA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA744u;
        // 0x2ea748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA74Cu;
        goto label_2ea74c;
    }
    ctx->pc = 0x2EA744u;
    SET_GPR_U32(ctx, 31, 0x2EA74Cu);
    ctx->pc = 0x2EA748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA744u;
    // 0x2ea748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF6A0u, 0x2EA744u, 0x2EA74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA74Cu;
label_2ea74c:
    // 0x2ea74c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2ea750:
    if (ctx->pc == 0x2EA750u) {
        ctx->pc = 0x2EA750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA74Cu;
        // 0x2ea750: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA754u;
        goto label_2ea754;
    }
    ctx->pc = 0x2EA74Cu;
    {
        const bool branch_taken_0x2ea74c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea74c) {
            ctx->pc = 0x2EA750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA74Cu;
            // 0x2ea750: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA754u;
            goto label_2ea754;
        }
    }
    ctx->pc = 0x2EA754u;
label_2ea754:
    // 0x2ea754: 0x16000020  bnez        $s0, . + 4 + (0x20 << 2)
label_2ea758:
    if (ctx->pc == 0x2EA758u) {
        ctx->pc = 0x2EA758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA754u;
        // 0x2ea758: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA75Cu;
        goto label_2ea75c;
    }
    ctx->pc = 0x2EA754u;
    {
        const bool branch_taken_0x2ea754 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA754u;
        // 0x2ea758: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea754) {
            ctx->pc = 0x2EA7D8u;
            goto label_2ea7d8;
        }
    }
    ctx->pc = 0x2EA75Cu;
label_2ea75c:
    // 0x2ea75c: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x2ea75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_2ea760:
    // 0x2ea760: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ea760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ea764:
    // 0x2ea764: 0x1043001c  beq         $v0, $v1, . + 4 + (0x1C << 2)
label_2ea768:
    if (ctx->pc == 0x2EA768u) {
        ctx->pc = 0x2EA76Cu;
        goto label_2ea76c;
    }
    ctx->pc = 0x2EA764u;
    {
        const bool branch_taken_0x2ea764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ea764) {
            ctx->pc = 0x2EA7D8u;
            goto label_2ea7d8;
        }
    }
    ctx->pc = 0x2EA76Cu;
label_2ea76c:
    // 0x2ea76c: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x2ea76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2ea770:
    // 0x2ea770: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2ea770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2ea774:
    // 0x2ea774: 0x2442ffdd  addiu       $v0, $v0, -0x23
    ctx->pc = 0x2ea774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967261));
label_2ea778:
    // 0x2ea778: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x2ea778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_2ea77c:
    // 0x2ea77c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_2ea780:
    if (ctx->pc == 0x2EA780u) {
        ctx->pc = 0x2EA780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA77Cu;
        // 0x2ea780: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA784u;
        goto label_2ea784;
    }
    ctx->pc = 0x2EA77Cu;
    {
        const bool branch_taken_0x2ea77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA77Cu;
        // 0x2ea780: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea77c) {
            ctx->pc = 0x2EA7D8u;
            goto label_2ea7d8;
        }
    }
    ctx->pc = 0x2EA784u;
label_2ea784:
    // 0x2ea784: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x2ea784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_2ea788:
    // 0x2ea788: 0x24844dd0  addiu       $a0, $a0, 0x4DD0
    ctx->pc = 0x2ea788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19920));
label_2ea78c:
    // 0x2ea78c: 0xc0abfc6  jal         func_2AFF18
label_2ea790:
    if (ctx->pc == 0x2EA790u) {
        ctx->pc = 0x2EA790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA78Cu;
        // 0x2ea790: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA794u;
        goto label_2ea794;
    }
    ctx->pc = 0x2EA78Cu;
    SET_GPR_U32(ctx, 31, 0x2EA794u);
    ctx->pc = 0x2EA790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA78Cu;
    // 0x2ea790: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AFF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFF18u, 0x2EA78Cu, 0x2EA794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA794u;
label_2ea794:
    // 0x2ea794: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_2ea798:
    if (ctx->pc == 0x2EA798u) {
        ctx->pc = 0x2EA79Cu;
        goto label_2ea79c;
    }
    ctx->pc = 0x2EA794u;
    {
        const bool branch_taken_0x2ea794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea794) {
            ctx->pc = 0x2EA7D8u;
            goto label_2ea7d8;
        }
    }
    ctx->pc = 0x2EA79Cu;
label_2ea79c:
    // 0x2ea79c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2ea79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2ea7a0:
    // 0x2ea7a0: 0xc0bb5de  jal         func_2ED778
label_2ea7a4:
    if (ctx->pc == 0x2EA7A4u) {
        ctx->pc = 0x2EA7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7A0u;
        // 0x2ea7a4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA7A8u;
        goto label_2ea7a8;
    }
    ctx->pc = 0x2EA7A0u;
    SET_GPR_U32(ctx, 31, 0x2EA7A8u);
    ctx->pc = 0x2EA7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA7A0u;
    // 0x2ea7a4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED778u, 0x2EA7A0u, 0x2EA7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA7A8u;
label_2ea7a8:
    // 0x2ea7a8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2ea7ac:
    if (ctx->pc == 0x2EA7ACu) {
        ctx->pc = 0x2EA7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7A8u;
        // 0x2ea7ac: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA7B0u;
        goto label_2ea7b0;
    }
    ctx->pc = 0x2EA7A8u;
    {
        const bool branch_taken_0x2ea7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea7a8) {
            ctx->pc = 0x2EA7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA7A8u;
            // 0x2ea7ac: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA7C8u;
            goto label_2ea7c8;
        }
    }
    ctx->pc = 0x2EA7B0u;
label_2ea7b0:
    // 0x2ea7b0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2ea7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ea7b4:
    // 0x2ea7b4: 0xc0bb5de  jal         func_2ED778
label_2ea7b8:
    if (ctx->pc == 0x2EA7B8u) {
        ctx->pc = 0x2EA7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7B4u;
        // 0x2ea7b8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA7BCu;
        goto label_2ea7bc;
    }
    ctx->pc = 0x2EA7B4u;
    SET_GPR_U32(ctx, 31, 0x2EA7BCu);
    ctx->pc = 0x2EA7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA7B4u;
    // 0x2ea7b8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED778u, 0x2EA7B4u, 0x2EA7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA7BCu;
label_2ea7bc:
    // 0x2ea7bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2ea7c0:
    if (ctx->pc == 0x2EA7C0u) {
        ctx->pc = 0x2EA7C4u;
        goto label_2ea7c4;
    }
    ctx->pc = 0x2EA7BCu;
    {
        const bool branch_taken_0x2ea7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea7bc) {
            ctx->pc = 0x2EA7D8u;
            goto label_2ea7d8;
        }
    }
    ctx->pc = 0x2EA7C4u;
label_2ea7c4:
    // 0x2ea7c4: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x2ea7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_2ea7c8:
    // 0x2ea7c8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2ea7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_2ea7cc:
    // 0x2ea7cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ea7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ea7d0:
    // 0x2ea7d0: 0x104303ef  beq         $v0, $v1, . + 4 + (0x3EF << 2)
label_2ea7d4:
    if (ctx->pc == 0x2EA7D4u) {
        ctx->pc = 0x2EA7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7D0u;
        // 0x2ea7d4: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA7D8u;
        goto label_2ea7d8;
    }
    ctx->pc = 0x2EA7D0u;
    {
        const bool branch_taken_0x2ea7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EA7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7D0u;
        // 0x2ea7d4: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea7d0) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EA7D8u;
label_2ea7d8:
    // 0x2ea7d8: 0x166003ef  bnez        $s3, . + 4 + (0x3EF << 2)
label_2ea7dc:
    if (ctx->pc == 0x2EA7DCu) {
        ctx->pc = 0x2EA7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7D8u;
        // 0x2ea7dc: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA7E0u;
        goto label_2ea7e0;
    }
    ctx->pc = 0x2EA7D8u;
    {
        const bool branch_taken_0x2ea7d8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7D8u;
        // 0x2ea7dc: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea7d8) {
            ctx->pc = 0x2EB798u;
            goto label_2eb798;
        }
    }
    ctx->pc = 0x2EA7E0u;
label_2ea7e0:
    // 0x2ea7e0: 0xc0baef8  jal         func_2EBBE0
label_2ea7e4:
    if (ctx->pc == 0x2EA7E4u) {
        ctx->pc = 0x2EA7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7E0u;
        // 0x2ea7e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA7E8u;
        goto label_2ea7e8;
    }
    ctx->pc = 0x2EA7E0u;
    SET_GPR_U32(ctx, 31, 0x2EA7E8u);
    ctx->pc = 0x2EA7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA7E0u;
    // 0x2ea7e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBBE0u, 0x2EA7E0u, 0x2EA7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA7E8u;
label_2ea7e8:
    // 0x2ea7e8: 0x100003e9  b           . + 4 + (0x3E9 << 2)
label_2ea7ec:
    if (ctx->pc == 0x2EA7ECu) {
        ctx->pc = 0x2EA7F0u;
        goto label_2ea7f0;
    }
    ctx->pc = 0x2EA7E8u;
    {
        const bool branch_taken_0x2ea7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea7e8) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EA7F0u;
label_2ea7f0:
    // 0x2ea7f0: 0x8e2211e4  lw          $v0, 0x11E4($s1)
    ctx->pc = 0x2ea7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
label_2ea7f4:
    // 0x2ea7f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2ea7f8:
    if (ctx->pc == 0x2EA7F8u) {
        ctx->pc = 0x2EA7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7F4u;
        // 0x2ea7f8: 0x8e260334  lw          $a2, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA7FCu;
        goto label_2ea7fc;
    }
    ctx->pc = 0x2EA7F4u;
    {
        const bool branch_taken_0x2ea7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7F4u;
        // 0x2ea7f8: 0x8e260334  lw          $a2, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea7f4) {
            ctx->pc = 0x2EA80Cu;
            goto label_2ea80c;
        }
    }
    ctx->pc = 0x2EA7FCu;
label_2ea7fc:
    // 0x2ea7fc: 0x8cc30150  lw          $v1, 0x150($a2)
    ctx->pc = 0x2ea7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
label_2ea800:
    // 0x2ea800: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x2ea800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_2ea804:
    // 0x2ea804: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2ea808:
    if (ctx->pc == 0x2EA808u) {
        ctx->pc = 0x2EA808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA804u;
        // 0x2ea808: 0x24020036  addiu       $v0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA80Cu;
        goto label_2ea80c;
    }
    ctx->pc = 0x2EA804u;
    {
        const bool branch_taken_0x2ea804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EA808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA804u;
        // 0x2ea808: 0x24020036  addiu       $v0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea804) {
            ctx->pc = 0x2EA818u;
            goto label_2ea818;
        }
    }
    ctx->pc = 0x2EA80Cu;
label_2ea80c:
    // 0x2ea80c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ea80cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea810:
    // 0x2ea810: 0x8cc30150  lw          $v1, 0x150($a2)
    ctx->pc = 0x2ea810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
label_2ea814:
    // 0x2ea814: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x2ea814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_2ea818:
    // 0x2ea818: 0x10620360  beq         $v1, $v0, . + 4 + (0x360 << 2)
label_2ea81c:
    if (ctx->pc == 0x2EA81Cu) {
        ctx->pc = 0x2EA81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA818u;
        // 0x2ea81c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA820u;
        goto label_2ea820;
    }
    ctx->pc = 0x2EA818u;
    {
        const bool branch_taken_0x2ea818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA818u;
        // 0x2ea81c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea818) {
            ctx->pc = 0x2EB59Cu;
            goto label_2eb59c;
        }
    }
    ctx->pc = 0x2EA820u;
label_2ea820:
    // 0x2ea820: 0x922210ce  lbu         $v0, 0x10CE($s1)
    ctx->pc = 0x2ea820u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4302)));
label_2ea824:
    // 0x2ea824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ea824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ea828:
    // 0x2ea828: 0xc08da92  jal         func_236A48
label_2ea82c:
    if (ctx->pc == 0x2EA82Cu) {
        ctx->pc = 0x2EA82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA828u;
        // 0x2ea82c: 0x202980b  movn        $s3, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA830u;
        goto label_2ea830;
    }
    ctx->pc = 0x2EA828u;
    SET_GPR_U32(ctx, 31, 0x2EA830u);
    ctx->pc = 0x2EA82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA828u;
    // 0x2ea82c: 0x202980b  movn        $s3, $s0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x2EA828u, 0x2EA830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA830u;
label_2ea830:
    // 0x2ea830: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ea834:
    if (ctx->pc == 0x2EA834u) {
        ctx->pc = 0x2EA834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA830u;
        // 0x2ea834: 0x8e230418  lw          $v1, 0x418($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA838u;
        goto label_2ea838;
    }
    ctx->pc = 0x2EA830u;
    {
        const bool branch_taken_0x2ea830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA830u;
        // 0x2ea834: 0x8e230418  lw          $v1, 0x418($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea830) {
            ctx->pc = 0x2EA840u;
            goto label_2ea840;
        }
    }
    ctx->pc = 0x2EA838u;
label_2ea838:
    // 0x2ea838: 0x9222047d  lbu         $v0, 0x47D($s1)
    ctx->pc = 0x2ea838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
label_2ea83c:
    // 0x2ea83c: 0x202980b  movn        $s3, $s0, $v0
    ctx->pc = 0x2ea83cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 16));
label_2ea840:
    // 0x2ea840: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2ea840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2ea844:
    // 0x2ea844: 0x10620355  beq         $v1, $v0, . + 4 + (0x355 << 2)
label_2ea848:
    if (ctx->pc == 0x2EA848u) {
        ctx->pc = 0x2EA848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA844u;
        // 0x2ea848: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA84Cu;
        goto label_2ea84c;
    }
    ctx->pc = 0x2EA844u;
    {
        const bool branch_taken_0x2ea844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA844u;
        // 0x2ea848: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea844) {
            ctx->pc = 0x2EB59Cu;
            goto label_2eb59c;
        }
    }
    ctx->pc = 0x2EA84Cu;
label_2ea84c:
    // 0x2ea84c: 0x8e2411c0  lw          $a0, 0x11C0($s1)
    ctx->pc = 0x2ea84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2ea850:
    // 0x2ea850: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2ea850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2ea854:
    // 0x2ea854: 0x50430352  beql        $v0, $v1, . + 4 + (0x352 << 2)
label_2ea858:
    if (ctx->pc == 0x2EA858u) {
        ctx->pc = 0x2EA858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA854u;
        // 0x2ea858: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA85Cu;
        goto label_2ea85c;
    }
    ctx->pc = 0x2EA854u;
    {
        const bool branch_taken_0x2ea854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ea854) {
            ctx->pc = 0x2EA858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA854u;
            // 0x2ea858: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EA85Cu;
label_2ea85c:
    // 0x2ea85c: 0x4830017  bgezl       $a0, . + 4 + (0x17 << 2)
label_2ea860:
    if (ctx->pc == 0x2EA860u) {
        ctx->pc = 0x2EA860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA85Cu;
        // 0x2ea860: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA864u;
        goto label_2ea864;
    }
    ctx->pc = 0x2EA85Cu;
    {
        const bool branch_taken_0x2ea85c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2ea85c) {
            ctx->pc = 0x2EA860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA85Cu;
            // 0x2ea860: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA8BCu;
            goto label_2ea8bc;
        }
    }
    ctx->pc = 0x2EA864u;
label_2ea864:
    // 0x2ea864: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ea864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea868:
    // 0x2ea868: 0xc0f7da4  jal         func_3DF690
label_2ea86c:
    if (ctx->pc == 0x2EA86Cu) {
        ctx->pc = 0x2EA86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA868u;
        // 0x2ea86c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA870u;
        goto label_2ea870;
    }
    ctx->pc = 0x2EA868u;
    SET_GPR_U32(ctx, 31, 0x2EA870u);
    ctx->pc = 0x2EA86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA868u;
    // 0x2ea86c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF690u, 0x2EA868u, 0x2EA870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA870u;
label_2ea870:
    // 0x2ea870: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2ea874:
    if (ctx->pc == 0x2EA874u) {
        ctx->pc = 0x2EA874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA870u;
        // 0x2ea874: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA878u;
        goto label_2ea878;
    }
    ctx->pc = 0x2EA870u;
    {
        const bool branch_taken_0x2ea870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea870) {
            ctx->pc = 0x2EA874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA870u;
            // 0x2ea874: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA898u;
            goto label_2ea898;
        }
    }
    ctx->pc = 0x2EA878u;
label_2ea878:
    // 0x2ea878: 0xc0f7da0  jal         func_3DF680
label_2ea87c:
    if (ctx->pc == 0x2EA87Cu) {
        ctx->pc = 0x2EA87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA878u;
        // 0x2ea87c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA880u;
        goto label_2ea880;
    }
    ctx->pc = 0x2EA878u;
    SET_GPR_U32(ctx, 31, 0x2EA880u);
    ctx->pc = 0x2EA87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA878u;
    // 0x2ea87c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF680u, 0x2EA878u, 0x2EA880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA880u;
label_2ea880:
    // 0x2ea880: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2ea884:
    if (ctx->pc == 0x2EA884u) {
        ctx->pc = 0x2EA884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA880u;
        // 0x2ea884: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA888u;
        goto label_2ea888;
    }
    ctx->pc = 0x2EA880u;
    {
        const bool branch_taken_0x2ea880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea880) {
            ctx->pc = 0x2EA884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA880u;
            // 0x2ea884: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA898u;
            goto label_2ea898;
        }
    }
    ctx->pc = 0x2EA888u;
label_2ea888:
    // 0x2ea888: 0xc0f7da8  jal         func_3DF6A0
label_2ea88c:
    if (ctx->pc == 0x2EA88Cu) {
        ctx->pc = 0x2EA88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA888u;
        // 0x2ea88c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA890u;
        goto label_2ea890;
    }
    ctx->pc = 0x2EA888u;
    SET_GPR_U32(ctx, 31, 0x2EA890u);
    ctx->pc = 0x2EA88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA888u;
    // 0x2ea88c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF6A0u, 0x2EA888u, 0x2EA890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA890u;
label_2ea890:
    // 0x2ea890: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2ea894:
    if (ctx->pc == 0x2EA894u) {
        ctx->pc = 0x2EA894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA890u;
        // 0x2ea894: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA898u;
        goto label_2ea898;
    }
    ctx->pc = 0x2EA890u;
    {
        const bool branch_taken_0x2ea890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea890) {
            ctx->pc = 0x2EA894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA890u;
            // 0x2ea894: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA898u;
            goto label_2ea898;
        }
    }
    ctx->pc = 0x2EA898u;
label_2ea898:
    // 0x2ea898: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2ea89c:
    if (ctx->pc == 0x2EA89Cu) {
        ctx->pc = 0x2EA89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA898u;
        // 0x2ea89c: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA8A0u;
        goto label_2ea8a0;
    }
    ctx->pc = 0x2EA898u;
    {
        const bool branch_taken_0x2ea898 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA898u;
        // 0x2ea89c: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea898) {
            ctx->pc = 0x2EA8B4u;
            goto label_2ea8b4;
        }
    }
    ctx->pc = 0x2EA8A0u;
label_2ea8a0:
    // 0x2ea8a0: 0x8e2311c0  lw          $v1, 0x11C0($s1)
    ctx->pc = 0x2ea8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2ea8a4:
    // 0x2ea8a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ea8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2ea8a8:
    // 0x2ea8a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2ea8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ea8ac:
    // 0x2ea8ac: 0x10000025  b           . + 4 + (0x25 << 2)
label_2ea8b0:
    if (ctx->pc == 0x2EA8B0u) {
        ctx->pc = 0x2EA8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8ACu;
        // 0x2ea8b0: 0xae2311c0  sw          $v1, 0x11C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA8B4u;
        goto label_2ea8b4;
    }
    ctx->pc = 0x2EA8ACu;
    {
        const bool branch_taken_0x2ea8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8ACu;
        // 0x2ea8b0: 0xae2311c0  sw          $v1, 0x11C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea8ac) {
            ctx->pc = 0x2EA944u;
            goto label_2ea944;
        }
    }
    ctx->pc = 0x2EA8B4u;
label_2ea8b4:
    // 0x2ea8b4: 0x10000023  b           . + 4 + (0x23 << 2)
label_2ea8b8:
    if (ctx->pc == 0x2EA8B8u) {
        ctx->pc = 0x2EA8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8B4u;
        // 0x2ea8b8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA8BCu;
        goto label_2ea8bc;
    }
    ctx->pc = 0x2EA8B4u;
    {
        const bool branch_taken_0x2ea8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8B4u;
        // 0x2ea8b8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea8b4) {
            ctx->pc = 0x2EA944u;
            goto label_2ea944;
        }
    }
    ctx->pc = 0x2EA8BCu;
label_2ea8bc:
    // 0x2ea8bc: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2ea8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_2ea8c0:
    // 0x2ea8c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ea8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ea8c4:
    // 0x2ea8c4: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
label_2ea8c8:
    if (ctx->pc == 0x2EA8C8u) {
        ctx->pc = 0x2EA8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8C4u;
        // 0x2ea8c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA8CCu;
        goto label_2ea8cc;
    }
    ctx->pc = 0x2EA8C4u;
    {
        const bool branch_taken_0x2ea8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EA8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8C4u;
        // 0x2ea8c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea8c4) {
            ctx->pc = 0x2EA944u;
            goto label_2ea944;
        }
    }
    ctx->pc = 0x2EA8CCu;
label_2ea8cc:
    // 0x2ea8cc: 0xc0f7da4  jal         func_3DF690
label_2ea8d0:
    if (ctx->pc == 0x2EA8D0u) {
        ctx->pc = 0x2EA8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8CCu;
        // 0x2ea8d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA8D4u;
        goto label_2ea8d4;
    }
    ctx->pc = 0x2EA8CCu;
    SET_GPR_U32(ctx, 31, 0x2EA8D4u);
    ctx->pc = 0x2EA8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA8CCu;
    // 0x2ea8d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF690u, 0x2EA8CCu, 0x2EA8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA8D4u;
label_2ea8d4:
    // 0x2ea8d4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2ea8d8:
    if (ctx->pc == 0x2EA8D8u) {
        ctx->pc = 0x2EA8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8D4u;
        // 0x2ea8d8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA8DCu;
        goto label_2ea8dc;
    }
    ctx->pc = 0x2EA8D4u;
    {
        const bool branch_taken_0x2ea8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea8d4) {
            ctx->pc = 0x2EA8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA8D4u;
            // 0x2ea8d8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA8FCu;
            goto label_2ea8fc;
        }
    }
    ctx->pc = 0x2EA8DCu;
label_2ea8dc:
    // 0x2ea8dc: 0xc0f7da0  jal         func_3DF680
label_2ea8e0:
    if (ctx->pc == 0x2EA8E0u) {
        ctx->pc = 0x2EA8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8DCu;
        // 0x2ea8e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA8E4u;
        goto label_2ea8e4;
    }
    ctx->pc = 0x2EA8DCu;
    SET_GPR_U32(ctx, 31, 0x2EA8E4u);
    ctx->pc = 0x2EA8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA8DCu;
    // 0x2ea8e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF680u, 0x2EA8DCu, 0x2EA8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA8E4u;
label_2ea8e4:
    // 0x2ea8e4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2ea8e8:
    if (ctx->pc == 0x2EA8E8u) {
        ctx->pc = 0x2EA8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8E4u;
        // 0x2ea8e8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA8ECu;
        goto label_2ea8ec;
    }
    ctx->pc = 0x2EA8E4u;
    {
        const bool branch_taken_0x2ea8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea8e4) {
            ctx->pc = 0x2EA8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA8E4u;
            // 0x2ea8e8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA8FCu;
            goto label_2ea8fc;
        }
    }
    ctx->pc = 0x2EA8ECu;
label_2ea8ec:
    // 0x2ea8ec: 0xc0f7da8  jal         func_3DF6A0
label_2ea8f0:
    if (ctx->pc == 0x2EA8F0u) {
        ctx->pc = 0x2EA8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8ECu;
        // 0x2ea8f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA8F4u;
        goto label_2ea8f4;
    }
    ctx->pc = 0x2EA8ECu;
    SET_GPR_U32(ctx, 31, 0x2EA8F4u);
    ctx->pc = 0x2EA8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA8ECu;
    // 0x2ea8f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF6A0u, 0x2EA8ECu, 0x2EA8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA8F4u;
label_2ea8f4:
    // 0x2ea8f4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2ea8f8:
    if (ctx->pc == 0x2EA8F8u) {
        ctx->pc = 0x2EA8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8F4u;
        // 0x2ea8f8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA8FCu;
        goto label_2ea8fc;
    }
    ctx->pc = 0x2EA8F4u;
    {
        const bool branch_taken_0x2ea8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea8f4) {
            ctx->pc = 0x2EA8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA8F4u;
            // 0x2ea8f8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA8FCu;
            goto label_2ea8fc;
        }
    }
    ctx->pc = 0x2EA8FCu;
label_2ea8fc:
    // 0x2ea8fc: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
label_2ea900:
    if (ctx->pc == 0x2EA900u) {
        ctx->pc = 0x2EA904u;
        goto label_2ea904;
    }
    ctx->pc = 0x2EA8FCu;
    {
        const bool branch_taken_0x2ea8fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea8fc) {
            ctx->pc = 0x2EA944u;
            goto label_2ea944;
        }
    }
    ctx->pc = 0x2EA904u;
label_2ea904:
    // 0x2ea904: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
label_2ea908:
    if (ctx->pc == 0x2EA908u) {
        ctx->pc = 0x2EA908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA904u;
        // 0x2ea908: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA90Cu;
        goto label_2ea90c;
    }
    ctx->pc = 0x2EA904u;
    {
        const bool branch_taken_0x2ea904 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA904u;
        // 0x2ea908: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea904) {
            ctx->pc = 0x2EA920u;
            goto label_2ea920;
        }
    }
    ctx->pc = 0x2EA90Cu;
label_2ea90c:
    // 0x2ea90c: 0xc0d8de2  jal         func_363788
label_2ea910:
    if (ctx->pc == 0x2EA910u) {
        ctx->pc = 0x2EA910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA90Cu;
        // 0x2ea910: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA914u;
        goto label_2ea914;
    }
    ctx->pc = 0x2EA90Cu;
    SET_GPR_U32(ctx, 31, 0x2EA914u);
    ctx->pc = 0x2EA910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA90Cu;
    // 0x2ea910: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2EA90Cu, 0x2EA914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA914u;
label_2ea914:
    // 0x2ea914: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2ea914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_2ea918:
    // 0x2ea918: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2ea91c:
    if (ctx->pc == 0x2EA91Cu) {
        ctx->pc = 0x2EA91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA918u;
        // 0x2ea91c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA920u;
        goto label_2ea920;
    }
    ctx->pc = 0x2EA918u;
    {
        const bool branch_taken_0x2ea918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA918u;
        // 0x2ea91c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea918) {
            ctx->pc = 0x2EA944u;
            goto label_2ea944;
        }
    }
    ctx->pc = 0x2EA920u;
label_2ea920:
    // 0x2ea920: 0xc0bb5de  jal         func_2ED778
label_2ea924:
    if (ctx->pc == 0x2EA924u) {
        ctx->pc = 0x2EA924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA920u;
        // 0x2ea924: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA928u;
        goto label_2ea928;
    }
    ctx->pc = 0x2EA920u;
    SET_GPR_U32(ctx, 31, 0x2EA928u);
    ctx->pc = 0x2EA924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA920u;
    // 0x2ea924: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED778u, 0x2EA920u, 0x2EA928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA928u;
label_2ea928:
    // 0x2ea928: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2ea92c:
    if (ctx->pc == 0x2EA92Cu) {
        ctx->pc = 0x2EA930u;
        goto label_2ea930;
    }
    ctx->pc = 0x2EA928u;
    {
        const bool branch_taken_0x2ea928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea928) {
            ctx->pc = 0x2EA944u;
            goto label_2ea944;
        }
    }
    ctx->pc = 0x2EA930u;
label_2ea930:
    // 0x2ea930: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2ea930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2ea934:
    // 0x2ea934: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ea934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2ea938:
    // 0x2ea938: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ea938u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea93c:
    // 0x2ea93c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ea93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2ea940:
    // 0x2ea940: 0xae2211c0  sw          $v0, 0x11C0($s1)
    ctx->pc = 0x2ea940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 2));
label_2ea944:
    // 0x2ea944: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
label_2ea948:
    if (ctx->pc == 0x2EA948u) {
        ctx->pc = 0x2EA948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA944u;
        // 0x2ea948: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA94Cu;
        goto label_2ea94c;
    }
    ctx->pc = 0x2EA944u;
    {
        const bool branch_taken_0x2ea944 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA944u;
        // 0x2ea948: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea944) {
            ctx->pc = 0x2EA958u;
            goto label_2ea958;
        }
    }
    ctx->pc = 0x2EA94Cu;
label_2ea94c:
    // 0x2ea94c: 0xc0baef8  jal         func_2EBBE0
label_2ea950:
    if (ctx->pc == 0x2EA950u) {
        ctx->pc = 0x2EA950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA94Cu;
        // 0x2ea950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA954u;
        goto label_2ea954;
    }
    ctx->pc = 0x2EA94Cu;
    SET_GPR_U32(ctx, 31, 0x2EA954u);
    ctx->pc = 0x2EA950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA94Cu;
    // 0x2ea950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBBE0u, 0x2EA94Cu, 0x2EA954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA954u;
label_2ea954:
    // 0x2ea954: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ea954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea958:
    // 0x2ea958: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x2ea958u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2ea95c:
    // 0x2ea95c: 0x1000038c  b           . + 4 + (0x38C << 2)
label_2ea960:
    if (ctx->pc == 0x2EA960u) {
        ctx->pc = 0x2EA960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA95Cu;
        // 0x2ea960: 0xafa40014  sw          $a0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA964u;
        goto label_2ea964;
    }
    ctx->pc = 0x2EA95Cu;
    {
        const bool branch_taken_0x2ea95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA95Cu;
        // 0x2ea960: 0xafa40014  sw          $a0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea95c) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EA964u;
label_2ea964:
    // 0x2ea964: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2ea964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2ea968:
    // 0x2ea968: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2ea968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_2ea96c:
    // 0x2ea96c: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x2ea96cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2ea970:
    // 0x2ea970: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ea970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ea974:
    // 0x2ea974: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2ea974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_2ea978:
    // 0x2ea978: 0x10000385  b           . + 4 + (0x385 << 2)
label_2ea97c:
    if (ctx->pc == 0x2EA97Cu) {
        ctx->pc = 0x2EA97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA978u;
        // 0x2ea97c: 0x2c530001  sltiu       $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA980u;
        goto label_2ea980;
    }
    ctx->pc = 0x2EA978u;
    {
        const bool branch_taken_0x2ea978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA978u;
        // 0x2ea97c: 0x2c530001  sltiu       $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea978) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EA980u;
label_2ea980:
    // 0x2ea980: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ea980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ea984:
    // 0x2ea984: 0xc0bb5de  jal         func_2ED778
label_2ea988:
    if (ctx->pc == 0x2EA988u) {
        ctx->pc = 0x2EA988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA984u;
        // 0x2ea988: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA98Cu;
        goto label_2ea98c;
    }
    ctx->pc = 0x2EA984u;
    SET_GPR_U32(ctx, 31, 0x2EA98Cu);
    ctx->pc = 0x2EA988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA984u;
    // 0x2ea988: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED778u, 0x2EA984u, 0x2EA98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA98Cu;
label_2ea98c:
    // 0x2ea98c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ea98cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea990:
    // 0x2ea990: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ea990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea994:
    // 0x2ea994: 0x8e230534  lw          $v1, 0x534($s1)
    ctx->pc = 0x2ea994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1332)));
label_2ea998:
    // 0x2ea998: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2ea99c:
    if (ctx->pc == 0x2EA99Cu) {
        ctx->pc = 0x2EA99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA998u;
        // 0x2ea99c: 0x82980b  movn        $s3, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA9A0u;
        goto label_2ea9a0;
    }
    ctx->pc = 0x2EA998u;
    {
        const bool branch_taken_0x2ea998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA998u;
        // 0x2ea99c: 0x82980b  movn        $s3, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea998) {
            ctx->pc = 0x2EA9BCu;
            goto label_2ea9bc;
        }
    }
    ctx->pc = 0x2EA9A0u;
label_2ea9a0:
    // 0x2ea9a0: 0x8e2312bc  lw          $v1, 0x12BC($s1)
    ctx->pc = 0x2ea9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4796)));
label_2ea9a4:
    // 0x2ea9a4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2ea9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2ea9a8:
    // 0x2ea9a8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2ea9ac:
    if (ctx->pc == 0x2EA9ACu) {
        ctx->pc = 0x2EA9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9A8u;
        // 0x2ea9ac: 0x8e22121c  lw          $v0, 0x121C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA9B0u;
        goto label_2ea9b0;
    }
    ctx->pc = 0x2EA9A8u;
    {
        const bool branch_taken_0x2ea9a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ea9a8) {
            ctx->pc = 0x2EA9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA9A8u;
            // 0x2ea9ac: 0x8e22121c  lw          $v0, 0x121C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA9C0u;
            goto label_2ea9c0;
        }
    }
    ctx->pc = 0x2EA9B0u;
label_2ea9b0:
    // 0x2ea9b0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_2ea9b4:
    if (ctx->pc == 0x2EA9B4u) {
        ctx->pc = 0x2EA9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9B0u;
        // 0x2ea9b4: 0x38620006  xori        $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA9B8u;
        goto label_2ea9b8;
    }
    ctx->pc = 0x2EA9B0u;
    {
        const bool branch_taken_0x2ea9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9B0u;
        // 0x2ea9b4: 0x38620006  xori        $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea9b0) {
            ctx->pc = 0x2EA9BCu;
            goto label_2ea9bc;
        }
    }
    ctx->pc = 0x2EA9B8u;
label_2ea9b8:
    // 0x2ea9b8: 0x82980b  movn        $s3, $a0, $v0
    ctx->pc = 0x2ea9b8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
label_2ea9bc:
    // 0x2ea9bc: 0x8e22121c  lw          $v0, 0x121C($s1)
    ctx->pc = 0x2ea9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
label_2ea9c0:
    // 0x2ea9c0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2ea9c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea9c4:
    // 0x2ea9c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ea9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ea9c8:
    // 0x2ea9c8: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x2ea9c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2ea9cc:
    // 0x2ea9cc: 0x1000006d  b           . + 4 + (0x6D << 2)
label_2ea9d0:
    if (ctx->pc == 0x2EA9D0u) {
        ctx->pc = 0x2EA9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9CCu;
        // 0x2ea9d0: 0x202980b  movn        $s3, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA9D4u;
        goto label_2ea9d4;
    }
    ctx->pc = 0x2EA9CCu;
    {
        const bool branch_taken_0x2ea9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9CCu;
        // 0x2ea9d0: 0x202980b  movn        $s3, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea9cc) {
            ctx->pc = 0x2EAB84u;
            goto label_2eab84;
        }
    }
    ctx->pc = 0x2EA9D4u;
label_2ea9d4:
    // 0x2ea9d4: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2ea9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2ea9d8:
    // 0x2ea9d8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2ea9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_2ea9dc:
    // 0x2ea9dc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2ea9dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ea9e0:
    // 0x2ea9e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ea9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ea9e4:
    // 0x2ea9e4: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
label_2ea9e8:
    if (ctx->pc == 0x2EA9E8u) {
        ctx->pc = 0x2EA9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9E4u;
        // 0x2ea9e8: 0x30e20100  andi        $v0, $a3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA9ECu;
        goto label_2ea9ec;
    }
    ctx->pc = 0x2EA9E4u;
    {
        const bool branch_taken_0x2ea9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EA9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9E4u;
        // 0x2ea9e8: 0x30e20100  andi        $v0, $a3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea9e4) {
            ctx->pc = 0x2EAA68u;
            goto label_2eaa68;
        }
    }
    ctx->pc = 0x2EA9ECu;
label_2ea9ec:
    // 0x2ea9ec: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
label_2ea9f0:
    if (ctx->pc == 0x2EA9F0u) {
        ctx->pc = 0x2EA9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9ECu;
        // 0x2ea9f0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA9F4u;
        goto label_2ea9f4;
    }
    ctx->pc = 0x2EA9ECu;
    {
        const bool branch_taken_0x2ea9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea9ec) {
            ctx->pc = 0x2EA9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA9ECu;
            // 0x2ea9f0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAA6Cu;
            goto label_2eaa6c;
        }
    }
    ctx->pc = 0x2EA9F4u;
label_2ea9f4:
    // 0x2ea9f4: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x2ea9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2ea9f8:
    // 0x2ea9f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea9fc:
    // 0x2ea9fc: 0x8c640150  lw          $a0, 0x150($v1)
    ctx->pc = 0x2ea9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2eaa00:
    // 0x2eaa00: 0x2482ffbd  addiu       $v0, $a0, -0x43
    ctx->pc = 0x2eaa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967229));
label_2eaa04:
    // 0x2eaa04: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2eaa04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2eaa08:
    // 0x2eaa08: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2eaa0c:
    if (ctx->pc == 0x2EAA0Cu) {
        ctx->pc = 0x2EAA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA08u;
        // 0x2eaa0c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAA10u;
        goto label_2eaa10;
    }
    ctx->pc = 0x2EAA08u;
    {
        const bool branch_taken_0x2eaa08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA08u;
        // 0x2eaa0c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaa08) {
            ctx->pc = 0x2EAA24u;
            goto label_2eaa24;
        }
    }
    ctx->pc = 0x2EAA10u;
label_2eaa10:
    // 0x2eaa10: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x2eaa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_2eaa14:
    // 0x2eaa14: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_2eaa18:
    if (ctx->pc == 0x2EAA18u) {
        ctx->pc = 0x2EAA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA14u;
        // 0x2eaa18: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAA1Cu;
        goto label_2eaa1c;
    }
    ctx->pc = 0x2EAA14u;
    {
        const bool branch_taken_0x2eaa14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EAA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA14u;
        // 0x2eaa18: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaa14) {
            ctx->pc = 0x2EAA24u;
            goto label_2eaa24;
        }
    }
    ctx->pc = 0x2EAA1Cu;
label_2eaa1c:
    // 0x2eaa1c: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
label_2eaa20:
    if (ctx->pc == 0x2EAA20u) {
        ctx->pc = 0x2EAA24u;
        goto label_2eaa24;
    }
    ctx->pc = 0x2EAA1Cu;
    {
        const bool branch_taken_0x2eaa1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2eaa1c) {
            ctx->pc = 0x2EAA28u;
            goto label_2eaa28;
        }
    }
    ctx->pc = 0x2EAA24u;
label_2eaa24:
    // 0x2eaa24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2eaa24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eaa28:
    // 0x2eaa28: 0x54a00010  bnel        $a1, $zero, . + 4 + (0x10 << 2)
label_2eaa2c:
    if (ctx->pc == 0x2EAA2Cu) {
        ctx->pc = 0x2EAA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA28u;
        // 0x2eaa2c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAA30u;
        goto label_2eaa30;
    }
    ctx->pc = 0x2EAA28u;
    {
        const bool branch_taken_0x2eaa28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eaa28) {
            ctx->pc = 0x2EAA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAA28u;
            // 0x2eaa2c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAA6Cu;
            goto label_2eaa6c;
        }
    }
    ctx->pc = 0x2EAA30u;
label_2eaa30:
    // 0x2eaa30: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x2eaa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_2eaa34:
    // 0x2eaa34: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2eaa34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_2eaa38:
    // 0x2eaa38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eaa38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2eaa3c:
    // 0x2eaa3c: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
label_2eaa40:
    if (ctx->pc == 0x2EAA40u) {
        ctx->pc = 0x2EAA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA3Cu;
        // 0x2eaa40: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAA44u;
        goto label_2eaa44;
    }
    ctx->pc = 0x2EAA3Cu;
    {
        const bool branch_taken_0x2eaa3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EAA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA3Cu;
        // 0x2eaa40: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaa3c) {
            ctx->pc = 0x2EAA68u;
            goto label_2eaa68;
        }
    }
    ctx->pc = 0x2EAA44u;
label_2eaa44:
    // 0x2eaa44: 0xe31024  and         $v0, $a3, $v1
    ctx->pc = 0x2eaa44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_2eaa48:
    // 0x2eaa48: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
label_2eaa4c:
    if (ctx->pc == 0x2EAA4Cu) {
        ctx->pc = 0x2EAA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA48u;
        // 0x2eaa4c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAA50u;
        goto label_2eaa50;
    }
    ctx->pc = 0x2EAA48u;
    {
        const bool branch_taken_0x2eaa48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eaa48) {
            ctx->pc = 0x2EAA4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAA48u;
            // 0x2eaa4c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAA6Cu;
            goto label_2eaa6c;
        }
    }
    ctx->pc = 0x2EAA50u;
label_2eaa50:
    // 0x2eaa50: 0x8e22121c  lw          $v0, 0x121C($s1)
    ctx->pc = 0x2eaa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
label_2eaa54:
    // 0x2eaa54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2eaa58:
    if (ctx->pc == 0x2EAA58u) {
        ctx->pc = 0x2EAA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA54u;
        // 0x2eaa58: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAA5Cu;
        goto label_2eaa5c;
    }
    ctx->pc = 0x2EAA54u;
    {
        const bool branch_taken_0x2eaa54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA54u;
        // 0x2eaa58: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaa54) {
            ctx->pc = 0x2EAA68u;
            goto label_2eaa68;
        }
    }
    ctx->pc = 0x2EAA5Cu;
label_2eaa5c:
    // 0x2eaa5c: 0x8cc30150  lw          $v1, 0x150($a2)
    ctx->pc = 0x2eaa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
label_2eaa60:
    // 0x2eaa60: 0x1462034b  bne         $v1, $v0, . + 4 + (0x34B << 2)
label_2eaa64:
    if (ctx->pc == 0x2EAA64u) {
        ctx->pc = 0x2EAA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA60u;
        // 0x2eaa64: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAA68u;
        goto label_2eaa68;
    }
    ctx->pc = 0x2EAA60u;
    {
        const bool branch_taken_0x2eaa60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EAA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA60u;
        // 0x2eaa64: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaa60) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EAA68u;
label_2eaa68:
    // 0x2eaa68: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2eaa68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eaa6c:
    // 0x2eaa6c: 0xae200550  sw          $zero, 0x550($s1)
    ctx->pc = 0x2eaa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 0));
label_2eaa70:
    // 0x2eaa70: 0xae200554  sw          $zero, 0x554($s1)
    ctx->pc = 0x2eaa70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1364), GPR_U32(ctx, 0));
label_2eaa74:
    // 0x2eaa74: 0x10000346  b           . + 4 + (0x346 << 2)
label_2eaa78:
    if (ctx->pc == 0x2EAA78u) {
        ctx->pc = 0x2EAA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA74u;
        // 0x2eaa78: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAA7Cu;
        goto label_2eaa7c;
    }
    ctx->pc = 0x2EAA74u;
    {
        const bool branch_taken_0x2eaa74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA74u;
        // 0x2eaa78: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaa74) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EAA7Cu;
label_2eaa7c:
    // 0x2eaa7c: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2eaa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2eaa80:
    // 0x2eaa80: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2eaa80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_2eaa84:
    // 0x2eaa84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eaa84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2eaa88:
    // 0x2eaa88: 0x104302c4  beq         $v0, $v1, . + 4 + (0x2C4 << 2)
label_2eaa8c:
    if (ctx->pc == 0x2EAA8Cu) {
        ctx->pc = 0x2EAA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA88u;
        // 0x2eaa8c: 0x24040045  addiu       $a0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAA90u;
        goto label_2eaa90;
    }
    ctx->pc = 0x2EAA88u;
    {
        const bool branch_taken_0x2eaa88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EAA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA88u;
        // 0x2eaa8c: 0x24040045  addiu       $a0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaa88) {
            ctx->pc = 0x2EB59Cu;
            goto label_2eb59c;
        }
    }
    ctx->pc = 0x2EAA90u;
label_2eaa90:
    // 0x2eaa90: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x2eaa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2eaa94:
    // 0x2eaa94: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x2eaa94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_2eaa98:
    // 0x2eaa98: 0x506402c1  beql        $v1, $a0, . + 4 + (0x2C1 << 2)
label_2eaa9c:
    if (ctx->pc == 0x2EAA9Cu) {
        ctx->pc = 0x2EAA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA98u;
        // 0x2eaa9c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAAA0u;
        goto label_2eaaa0;
    }
    ctx->pc = 0x2EAA98u;
    {
        const bool branch_taken_0x2eaa98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2eaa98) {
            ctx->pc = 0x2EAA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAA98u;
            // 0x2eaa9c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EAAA0u;
label_2eaaa0:
    // 0x2eaaa0: 0x8e22121c  lw          $v0, 0x121C($s1)
    ctx->pc = 0x2eaaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
label_2eaaa4:
    // 0x2eaaa4: 0x104002bd  beqz        $v0, . + 4 + (0x2BD << 2)
label_2eaaa8:
    if (ctx->pc == 0x2EAAA8u) {
        ctx->pc = 0x2EAAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAAA4u;
        // 0x2eaaa8: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAAACu;
        goto label_2eaaac;
    }
    ctx->pc = 0x2EAAA4u;
    {
        const bool branch_taken_0x2eaaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAAA4u;
        // 0x2eaaa8: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaaa4) {
            ctx->pc = 0x2EB59Cu;
            goto label_2eb59c;
        }
    }
    ctx->pc = 0x2EAAACu;
label_2eaaac:
    // 0x2eaaac: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x2eaaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_2eaab0:
    // 0x2eaab0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eaab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2eaab4:
    // 0x2eaab4: 0x104302b9  beq         $v0, $v1, . + 4 + (0x2B9 << 2)
label_2eaab8:
    if (ctx->pc == 0x2EAAB8u) {
        ctx->pc = 0x2EAAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAAB4u;
        // 0x2eaab8: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAABCu;
        goto label_2eaabc;
    }
    ctx->pc = 0x2EAAB4u;
    {
        const bool branch_taken_0x2eaab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EAAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAAB4u;
        // 0x2eaab8: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaab4) {
            ctx->pc = 0x2EB59Cu;
            goto label_2eb59c;
        }
    }
    ctx->pc = 0x2EAABCu;
label_2eaabc:
    // 0x2eaabc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2eaabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2eaac0:
    // 0x2eaac0: 0x24844dd0  addiu       $a0, $a0, 0x4DD0
    ctx->pc = 0x2eaac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19920));
label_2eaac4:
    // 0x2eaac4: 0xc0abfc6  jal         func_2AFF18
label_2eaac8:
    if (ctx->pc == 0x2EAAC8u) {
        ctx->pc = 0x2EAAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAAC4u;
        // 0x2eaac8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAACCu;
        goto label_2eaacc;
    }
    ctx->pc = 0x2EAAC4u;
    SET_GPR_U32(ctx, 31, 0x2EAACCu);
    ctx->pc = 0x2EAAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAAC4u;
    // 0x2eaac8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AFF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFF18u, 0x2EAAC4u, 0x2EAACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAACCu;
label_2eaacc:
    // 0x2eaacc: 0x544002b4  bnel        $v0, $zero, . + 4 + (0x2B4 << 2)
label_2eaad0:
    if (ctx->pc == 0x2EAAD0u) {
        ctx->pc = 0x2EAAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAACCu;
        // 0x2eaad0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAAD4u;
        goto label_2eaad4;
    }
    ctx->pc = 0x2EAACCu;
    {
        const bool branch_taken_0x2eaacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eaacc) {
            ctx->pc = 0x2EAAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAACCu;
            // 0x2eaad0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EAAD4u;
label_2eaad4:
    // 0x2eaad4: 0x8e230338  lw          $v1, 0x338($s1)
    ctx->pc = 0x2eaad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_2eaad8:
    // 0x2eaad8: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x2eaad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_2eaadc:
    // 0x2eaadc: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x2eaadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_2eaae0:
    // 0x2eaae0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2eaae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2eaae4:
    // 0x2eaae4: 0x544002ae  bnel        $v0, $zero, . + 4 + (0x2AE << 2)
label_2eaae8:
    if (ctx->pc == 0x2EAAE8u) {
        ctx->pc = 0x2EAAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAAE4u;
        // 0x2eaae8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAAECu;
        goto label_2eaaec;
    }
    ctx->pc = 0x2EAAE4u;
    {
        const bool branch_taken_0x2eaae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eaae4) {
            ctx->pc = 0x2EAAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAAE4u;
            // 0x2eaae8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EAAECu;
label_2eaaec:
    // 0x2eaaec: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x2eaaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2eaaf0:
    // 0x2eaaf0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x2eaaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_2eaaf4:
    // 0x2eaaf4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2eaaf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2eaaf8:
    // 0x2eaaf8: 0x10400325  beqz        $v0, . + 4 + (0x325 << 2)
label_2eaafc:
    if (ctx->pc == 0x2EAAFCu) {
        ctx->pc = 0x2EAAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAAF8u;
        // 0x2eaafc: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAB00u;
        goto label_2eab00;
    }
    ctx->pc = 0x2EAAF8u;
    {
        const bool branch_taken_0x2eaaf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAAF8u;
        // 0x2eaafc: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaaf8) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EAB00u;
label_2eab00:
    // 0x2eab00: 0x10000323  b           . + 4 + (0x323 << 2)
label_2eab04:
    if (ctx->pc == 0x2EAB04u) {
        ctx->pc = 0x2EAB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB00u;
        // 0x2eab04: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAB08u;
        goto label_2eab08;
    }
    ctx->pc = 0x2EAB00u;
    {
        const bool branch_taken_0x2eab00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB00u;
        // 0x2eab04: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eab00) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EAB08u;
label_2eab08:
    // 0x2eab08: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x2eab08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_2eab0c:
    // 0x2eab0c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2eab0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eab10:
    // 0x2eab10: 0x8e230560  lw          $v1, 0x560($s1)
    ctx->pc = 0x2eab10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
label_2eab14:
    // 0x2eab14: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2eab14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eab18:
    // 0x2eab18: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2eab18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_2eab1c:
    // 0x2eab1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eab1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2eab20:
    // 0x2eab20: 0x202980b  movn        $s3, $s0, $v0
    ctx->pc = 0x2eab20u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 16));
label_2eab24:
    // 0x2eab24: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x2eab24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2eab28:
    // 0x2eab28: 0xc08f68a  jal         func_23DA28
label_2eab2c:
    if (ctx->pc == 0x2EAB2Cu) {
        ctx->pc = 0x2EAB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB28u;
        // 0x2eab2c: 0x203980b  movn        $s3, $s0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAB30u;
        goto label_2eab30;
    }
    ctx->pc = 0x2EAB28u;
    SET_GPR_U32(ctx, 31, 0x2EAB30u);
    ctx->pc = 0x2EAB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB28u;
    // 0x2eab2c: 0x203980b  movn        $s3, $s0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA28u, 0x2EAB28u, 0x2EAB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAB30u;
label_2eab30:
    // 0x2eab30: 0x8e23121c  lw          $v1, 0x121C($s1)
    ctx->pc = 0x2eab30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
label_2eab34:
    // 0x2eab34: 0x202980b  movn        $s3, $s0, $v0
    ctx->pc = 0x2eab34u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 16));
label_2eab38:
    // 0x2eab38: 0x10000315  b           . + 4 + (0x315 << 2)
label_2eab3c:
    if (ctx->pc == 0x2EAB3Cu) {
        ctx->pc = 0x2EAB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB38u;
        // 0x2eab3c: 0x203980b  movn        $s3, $s0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAB40u;
        goto label_2eab40;
    }
    ctx->pc = 0x2EAB38u;
    {
        const bool branch_taken_0x2eab38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB38u;
        // 0x2eab3c: 0x203980b  movn        $s3, $s0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eab38) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EAB40u;
label_2eab40:
    // 0x2eab40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eab40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eab44:
    // 0x2eab44: 0x8e23053c  lw          $v1, 0x53C($s1)
    ctx->pc = 0x2eab44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1340)));
label_2eab48:
    // 0x2eab48: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2eab48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eab4c:
    // 0x2eab4c: 0x8e2405c8  lw          $a0, 0x5C8($s1)
    ctx->pc = 0x2eab4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
label_2eab50:
    // 0x2eab50: 0x3980a  movz        $s3, $zero, $v1
    ctx->pc = 0x2eab50u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
label_2eab54:
    // 0x2eab54: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x2eab54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2eab58:
    // 0x2eab58: 0x1000030d  b           . + 4 + (0x30D << 2)
label_2eab5c:
    if (ctx->pc == 0x2EAB5Cu) {
        ctx->pc = 0x2EAB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB58u;
        // 0x2eab5c: 0x44980b  movn        $s3, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAB60u;
        goto label_2eab60;
    }
    ctx->pc = 0x2EAB58u;
    {
        const bool branch_taken_0x2eab58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB58u;
        // 0x2eab5c: 0x44980b  movn        $s3, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eab58) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EAB60u;
label_2eab60:
    // 0x2eab60: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2eab60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2eab64:
    // 0x2eab64: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2eab64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eab68:
    // 0x2eab68: 0x9043b837  lbu         $v1, -0x47C9($v0)
    ctx->pc = 0x2eab68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948919)));
label_2eab6c:
    // 0x2eab6c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2eab6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eab70:
    // 0x2eab70: 0x8e22121c  lw          $v0, 0x121C($s1)
    ctx->pc = 0x2eab70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
label_2eab74:
    // 0x2eab74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eab74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2eab78:
    // 0x2eab78: 0x3980a  movz        $s3, $zero, $v1
    ctx->pc = 0x2eab78u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
label_2eab7c:
    // 0x2eab7c: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x2eab7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2eab80:
    // 0x2eab80: 0x202980a  movz        $s3, $s0, $v0
    ctx->pc = 0x2eab80u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 16));
label_2eab84:
    // 0x2eab84: 0xc0b93e0  jal         func_2E4F80
label_2eab88:
    if (ctx->pc == 0x2EAB88u) {
        ctx->pc = 0x2EAB8Cu;
        goto label_2eab8c;
    }
    ctx->pc = 0x2EAB84u;
    SET_GPR_U32(ctx, 31, 0x2EAB8Cu);
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x2EAB84u, 0x2EAB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAB8Cu;
label_2eab8c:
    // 0x2eab8c: 0x10000300  b           . + 4 + (0x300 << 2)
label_2eab90:
    if (ctx->pc == 0x2EAB90u) {
        ctx->pc = 0x2EAB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB8Cu;
        // 0x2eab90: 0x202980b  movn        $s3, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAB94u;
        goto label_2eab94;
    }
    ctx->pc = 0x2EAB8Cu;
    {
        const bool branch_taken_0x2eab8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB8Cu;
        // 0x2eab90: 0x202980b  movn        $s3, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eab8c) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EAB94u;
label_2eab94:
    // 0x2eab94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eab94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2eab98:
    // 0x2eab98: 0xc0b93e0  jal         func_2E4F80
label_2eab9c:
    if (ctx->pc == 0x2EAB9Cu) {
        ctx->pc = 0x2EAB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB98u;
        // 0x2eab9c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EABA0u;
        goto label_2eaba0;
    }
    ctx->pc = 0x2EAB98u;
    SET_GPR_U32(ctx, 31, 0x2EABA0u);
    ctx->pc = 0x2EAB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB98u;
    // 0x2eab9c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x2EAB98u, 0x2EABA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EABA0u;
label_2eaba0:
    // 0x2eaba0: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x2eaba0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2eaba4:
    // 0x2eaba4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eaba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eaba8:
    // 0x2eaba8: 0x8e24121c  lw          $a0, 0x121C($s1)
    ctx->pc = 0x2eaba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
label_2eabac:
    // 0x2eabac: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x2eabacu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_2eabb0:
    // 0x2eabb0: 0x100002f7  b           . + 4 + (0x2F7 << 2)
label_2eabb4:
    if (ctx->pc == 0x2EABB4u) {
        ctx->pc = 0x2EABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EABB0u;
        // 0x2eabb4: 0x64980b  movn        $s3, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EABB8u;
        goto label_2eabb8;
    }
    ctx->pc = 0x2EABB0u;
    {
        const bool branch_taken_0x2eabb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EABB0u;
        // 0x2eabb4: 0x64980b  movn        $s3, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eabb0) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EABB8u;
label_2eabb8:
    // 0x2eabb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2eabb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eabbc:
    // 0x2eabbc: 0x8e2305c8  lw          $v1, 0x5C8($s1)
    ctx->pc = 0x2eabbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
label_2eabc0:
    // 0x2eabc0: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x2eabc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_2eabc4:
    // 0x2eabc4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2eabc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2eabc8:
    // 0x2eabc8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2eabc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_2eabcc:
    // 0x2eabcc: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_2eabd0:
    if (ctx->pc == 0x2EABD0u) {
        ctx->pc = 0x2EABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EABCCu;
        // 0x2eabd0: 0x3980a  movz        $s3, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EABD4u;
        goto label_2eabd4;
    }
    ctx->pc = 0x2EABCCu;
    {
        const bool branch_taken_0x2eabcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EABCCu;
        // 0x2eabd0: 0x3980a  movz        $s3, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eabcc) {
            ctx->pc = 0x2EAC1Cu;
            goto label_2eac1c;
        }
    }
    ctx->pc = 0x2EABD4u;
label_2eabd4:
    // 0x2eabd4: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2eabd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2eabd8:
    // 0x2eabd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2eabd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2eabdc:
    // 0x2eabdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2eabe0:
    if (ctx->pc == 0x2EABE0u) {
        ctx->pc = 0x2EABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EABDCu;
        // 0x2eabe0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EABE4u;
        goto label_2eabe4;
    }
    ctx->pc = 0x2EABDCu;
    {
        const bool branch_taken_0x2eabdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EABDCu;
        // 0x2eabe0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eabdc) {
            ctx->pc = 0x2EABF0u;
            goto label_2eabf0;
        }
    }
    ctx->pc = 0x2EABE4u;
label_2eabe4:
    // 0x2eabe4: 0x8e221208  lw          $v0, 0x1208($s1)
    ctx->pc = 0x2eabe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4616)));
label_2eabe8:
    // 0x2eabe8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2eabe8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2eabec:
    // 0x2eabec: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x2eabecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_2eabf0:
    // 0x2eabf0: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_2eabf4:
    if (ctx->pc == 0x2EABF4u) {
        ctx->pc = 0x2EABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EABF0u;
        // 0x2eabf4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EABF8u;
        goto label_2eabf8;
    }
    ctx->pc = 0x2EABF0u;
    {
        const bool branch_taken_0x2eabf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eabf0) {
            ctx->pc = 0x2EABF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EABF0u;
            // 0x2eabf4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAC20u;
            goto label_2eac20;
        }
    }
    ctx->pc = 0x2EABF8u;
label_2eabf8:
    // 0x2eabf8: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x2eabf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2eabfc:
    // 0x2eabfc: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x2eabfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2eac00:
    // 0x2eac00: 0x2462ffcf  addiu       $v0, $v1, -0x31
    ctx->pc = 0x2eac00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
label_2eac04:
    // 0x2eac04: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x2eac04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2eac08:
    // 0x2eac08: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2eac0c:
    if (ctx->pc == 0x2EAC0Cu) {
        ctx->pc = 0x2EAC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC08u;
        // 0x2eac0c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAC10u;
        goto label_2eac10;
    }
    ctx->pc = 0x2EAC08u;
    {
        const bool branch_taken_0x2eac08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eac08) {
            ctx->pc = 0x2EAC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAC08u;
            // 0x2eac0c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAC20u;
            goto label_2eac20;
        }
    }
    ctx->pc = 0x2EAC10u;
label_2eac10:
    // 0x2eac10: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x2eac10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_2eac14:
    // 0x2eac14: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2eac18:
    if (ctx->pc == 0x2EAC18u) {
        ctx->pc = 0x2EAC1Cu;
        goto label_2eac1c;
    }
    ctx->pc = 0x2EAC14u;
    {
        const bool branch_taken_0x2eac14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2eac14) {
            ctx->pc = 0x2EAC20u;
            goto label_2eac20;
        }
    }
    ctx->pc = 0x2EAC1Cu;
label_2eac1c:
    // 0x2eac1c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2eac1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eac20:
    // 0x2eac20: 0xc0bf868  jal         func_2FE1A0
label_2eac24:
    if (ctx->pc == 0x2EAC24u) {
        ctx->pc = 0x2EAC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC20u;
        // 0x2eac24: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAC28u;
        goto label_2eac28;
    }
    ctx->pc = 0x2EAC20u;
    SET_GPR_U32(ctx, 31, 0x2EAC28u);
    ctx->pc = 0x2EAC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC20u;
    // 0x2eac24: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1A0u, 0x2EAC20u, 0x2EAC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC28u;
label_2eac28:
    // 0x2eac28: 0x104002d9  beqz        $v0, . + 4 + (0x2D9 << 2)
label_2eac2c:
    if (ctx->pc == 0x2EAC2Cu) {
        ctx->pc = 0x2EAC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC28u;
        // 0x2eac2c: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAC30u;
        goto label_2eac30;
    }
    ctx->pc = 0x2EAC28u;
    {
        const bool branch_taken_0x2eac28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC28u;
        // 0x2eac2c: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac28) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EAC30u;
label_2eac30:
    // 0x2eac30: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2eac30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2eac34:
    // 0x2eac34: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2eac34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2eac38:
    // 0x2eac38: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x2eac38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
label_2eac3c:
    // 0x2eac3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2eac3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2eac40:
    // 0x2eac40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2eac40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2eac44:
    // 0x2eac44: 0xae201264  sw          $zero, 0x1264($s1)
    ctx->pc = 0x2eac44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4708), GPR_U32(ctx, 0));
label_2eac48:
    // 0x2eac48: 0xae2211c0  sw          $v0, 0x11C0($s1)
    ctx->pc = 0x2eac48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 2));
label_2eac4c:
    // 0x2eac4c: 0x100002d0  b           . + 4 + (0x2D0 << 2)
label_2eac50:
    if (ctx->pc == 0x2EAC50u) {
        ctx->pc = 0x2EAC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC4Cu;
        // 0x2eac50: 0xe6201268  swc1        $f0, 0x1268($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4712), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAC54u;
        goto label_2eac54;
    }
    ctx->pc = 0x2EAC4Cu;
    {
        const bool branch_taken_0x2eac4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC4Cu;
        // 0x2eac50: 0xe6201268  swc1        $f0, 0x1268($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4712), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac4c) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EAC54u;
label_2eac54:
    // 0x2eac54: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x2eac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_2eac58:
    // 0x2eac58: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2eac58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_2eac5c:
    // 0x2eac5c: 0x1040024f  beqz        $v0, . + 4 + (0x24F << 2)
label_2eac60:
    if (ctx->pc == 0x2EAC60u) {
        ctx->pc = 0x2EAC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC5Cu;
        // 0x2eac60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAC64u;
        goto label_2eac64;
    }
    ctx->pc = 0x2EAC5Cu;
    {
        const bool branch_taken_0x2eac5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC5Cu;
        // 0x2eac60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac5c) {
            ctx->pc = 0x2EB59Cu;
            goto label_2eb59c;
        }
    }
    ctx->pc = 0x2EAC64u;
label_2eac64:
    // 0x2eac64: 0xc08dab6  jal         func_236AD8
label_2eac68:
    if (ctx->pc == 0x2EAC68u) {
        ctx->pc = 0x2EAC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC64u;
        // 0x2eac68: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAC6Cu;
        goto label_2eac6c;
    }
    ctx->pc = 0x2EAC64u;
    SET_GPR_U32(ctx, 31, 0x2EAC6Cu);
    ctx->pc = 0x2EAC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC64u;
    // 0x2eac68: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x2EAC64u, 0x2EAC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC6Cu;
label_2eac6c:
    // 0x2eac6c: 0x144002c8  bnez        $v0, . + 4 + (0x2C8 << 2)
label_2eac70:
    if (ctx->pc == 0x2EAC70u) {
        ctx->pc = 0x2EAC74u;
        goto label_2eac74;
    }
    ctx->pc = 0x2EAC6Cu;
    {
        const bool branch_taken_0x2eac6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eac6c) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EAC74u;
label_2eac74:
    // 0x2eac74: 0xc08dada  jal         func_236B68
label_2eac78:
    if (ctx->pc == 0x2EAC78u) {
        ctx->pc = 0x2EAC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC74u;
        // 0x2eac78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAC7Cu;
        goto label_2eac7c;
    }
    ctx->pc = 0x2EAC74u;
    SET_GPR_U32(ctx, 31, 0x2EAC7Cu);
    ctx->pc = 0x2EAC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC74u;
    // 0x2eac78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x2EAC74u, 0x2EAC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC7Cu;
label_2eac7c:
    // 0x2eac7c: 0x144002c4  bnez        $v0, . + 4 + (0x2C4 << 2)
label_2eac80:
    if (ctx->pc == 0x2EAC80u) {
        ctx->pc = 0x2EAC84u;
        goto label_2eac84;
    }
    ctx->pc = 0x2EAC7Cu;
    {
        const bool branch_taken_0x2eac7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eac7c) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EAC84u;
label_2eac84:
    // 0x2eac84: 0x10000246  b           . + 4 + (0x246 << 2)
label_2eac88:
    if (ctx->pc == 0x2EAC88u) {
        ctx->pc = 0x2EAC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC84u;
        // 0x2eac88: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAC8Cu;
        goto label_2eac8c;
    }
    ctx->pc = 0x2EAC84u;
    {
        const bool branch_taken_0x2eac84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC84u;
        // 0x2eac88: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac84) {
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EAC8Cu;
label_2eac8c:
    // 0x2eac8c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2eac8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2eac90:
    // 0x2eac90: 0xc0bb5de  jal         func_2ED778
label_2eac94:
    if (ctx->pc == 0x2EAC94u) {
        ctx->pc = 0x2EAC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC90u;
        // 0x2eac94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAC98u;
        goto label_2eac98;
    }
    ctx->pc = 0x2EAC90u;
    SET_GPR_U32(ctx, 31, 0x2EAC98u);
    ctx->pc = 0x2EAC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC90u;
    // 0x2eac94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED778u, 0x2EAC90u, 0x2EAC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC98u;
label_2eac98:
    // 0x2eac98: 0x50400241  beql        $v0, $zero, . + 4 + (0x241 << 2)
label_2eac9c:
    if (ctx->pc == 0x2EAC9Cu) {
        ctx->pc = 0x2EAC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC98u;
        // 0x2eac9c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EACA0u;
        goto label_2eaca0;
    }
    ctx->pc = 0x2EAC98u;
    {
        const bool branch_taken_0x2eac98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eac98) {
            ctx->pc = 0x2EAC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAC98u;
            // 0x2eac9c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EACA0u;
label_2eaca0:
    // 0x2eaca0: 0xc08dab6  jal         func_236AD8
label_2eaca4:
    if (ctx->pc == 0x2EACA4u) {
        ctx->pc = 0x2EACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EACA0u;
        // 0x2eaca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EACA8u;
        goto label_2eaca8;
    }
    ctx->pc = 0x2EACA0u;
    SET_GPR_U32(ctx, 31, 0x2EACA8u);
    ctx->pc = 0x2EACA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EACA0u;
    // 0x2eaca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x2EACA0u, 0x2EACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EACA8u;
label_2eaca8:
    // 0x2eaca8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2eacac:
    if (ctx->pc == 0x2EACACu) {
        ctx->pc = 0x2EACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EACA8u;
        // 0x2eacac: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EACB0u;
        goto label_2eacb0;
    }
    ctx->pc = 0x2EACA8u;
    {
        const bool branch_taken_0x2eaca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EACA8u;
        // 0x2eacac: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaca8) {
            ctx->pc = 0x2EACC0u;
            goto label_2eacc0;
        }
    }
    ctx->pc = 0x2EACB0u;
label_2eacb0:
    // 0x2eacb0: 0xc08dada  jal         func_236B68
label_2eacb4:
    if (ctx->pc == 0x2EACB4u) {
        ctx->pc = 0x2EACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EACB0u;
        // 0x2eacb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EACB8u;
        goto label_2eacb8;
    }
    ctx->pc = 0x2EACB0u;
    SET_GPR_U32(ctx, 31, 0x2EACB8u);
    ctx->pc = 0x2EACB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EACB0u;
    // 0x2eacb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x2EACB0u, 0x2EACB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EACB8u;
label_2eacb8:
    // 0x2eacb8: 0x10400238  beqz        $v0, . + 4 + (0x238 << 2)
label_2eacbc:
    if (ctx->pc == 0x2EACBCu) {
        ctx->pc = 0x2EACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EACB8u;
        // 0x2eacbc: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EACC0u;
        goto label_2eacc0;
    }
    ctx->pc = 0x2EACB8u;
    {
        const bool branch_taken_0x2eacb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EACB8u;
        // 0x2eacbc: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eacb8) {
            ctx->pc = 0x2EB59Cu;
            goto label_2eb59c;
        }
    }
    ctx->pc = 0x2EACC0u;
label_2eacc0:
    // 0x2eacc0: 0x9062b837  lbu         $v0, -0x47C9($v1)
    ctx->pc = 0x2eacc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948919)));
label_2eacc4:
    // 0x2eacc4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2eacc8:
    if (ctx->pc == 0x2EACC8u) {
        ctx->pc = 0x2EACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EACC4u;
        // 0x2eacc8: 0xa060b837  sb          $zero, -0x47C9($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294948919), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EACCCu;
        goto label_2eaccc;
    }
    ctx->pc = 0x2EACC4u;
    {
        const bool branch_taken_0x2eacc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eacc4) {
            ctx->pc = 0x2EACC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EACC4u;
            // 0x2eacc8: 0xa060b837  sb          $zero, -0x47C9($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 4294948919), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EACECu;
            goto label_2eacec;
        }
    }
    ctx->pc = 0x2EACCCu;
label_2eaccc:
    // 0x2eaccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eacccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eacd0:
    // 0x2eacd0: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x2eacd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2eacd4:
    // 0x2eacd4: 0xa062b837  sb          $v0, -0x47C9($v1)
    ctx->pc = 0x2eacd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294948919), (uint8_t)GPR_U32(ctx, 2));
label_2eacd8:
    // 0x2eacd8: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x2eacd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2eacdc:
    // 0x2eacdc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2eacdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_2eace0:
    // 0x2eace0: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2eace0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2eace4:
    // 0x2eace4: 0x1000010b  b           . + 4 + (0x10B << 2)
label_2eace8:
    if (ctx->pc == 0x2EACE8u) {
        ctx->pc = 0x2EACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EACE4u;
        // 0x2eace8: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EACECu;
        goto label_2eacec;
    }
    ctx->pc = 0x2EACE4u;
    {
        const bool branch_taken_0x2eace4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EACE4u;
        // 0x2eace8: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eace4) {
            ctx->pc = 0x2EB114u;
            goto label_2eb114;
        }
    }
    ctx->pc = 0x2EACECu;
label_2eacec:
    // 0x2eacec: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x2eacecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2eacf0:
    // 0x2eacf0: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x2eacf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
label_2eacf4:
    // 0x2eacf4: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2eacf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2eacf8:
    // 0x2eacf8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2eacf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2eacfc:
    // 0x2eacfc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2eacfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2ead00:
    // 0x2ead00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ead00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ead04:
    // 0x2ead04: 0x100002a2  b           . + 4 + (0x2A2 << 2)
label_2ead08:
    if (ctx->pc == 0x2EAD08u) {
        ctx->pc = 0x2EAD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD04u;
        // 0x2ead08: 0xae2211c0  sw          $v0, 0x11C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAD0Cu;
        goto label_2ead0c;
    }
    ctx->pc = 0x2EAD04u;
    {
        const bool branch_taken_0x2ead04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD04u;
        // 0x2ead08: 0xae2211c0  sw          $v0, 0x11C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ead04) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EAD0Cu;
label_2ead0c:
    // 0x2ead0c: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2ead0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2ead10:
    // 0x2ead10: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2ead10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_2ead14:
    // 0x2ead14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ead14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ead18:
    // 0x2ead18: 0x10430220  beq         $v0, $v1, . + 4 + (0x220 << 2)
label_2ead1c:
    if (ctx->pc == 0x2EAD1Cu) {
        ctx->pc = 0x2EAD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD18u;
        // 0x2ead1c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAD20u;
        goto label_2ead20;
    }
    ctx->pc = 0x2EAD18u;
    {
        const bool branch_taken_0x2ead18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EAD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD18u;
        // 0x2ead1c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ead18) {
            ctx->pc = 0x2EB59Cu;
            goto label_2eb59c;
        }
    }
    ctx->pc = 0x2EAD20u;
label_2ead20:
    // 0x2ead20: 0xc0bb5de  jal         func_2ED778
label_2ead24:
    if (ctx->pc == 0x2EAD24u) {
        ctx->pc = 0x2EAD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD20u;
        // 0x2ead24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAD28u;
        goto label_2ead28;
    }
    ctx->pc = 0x2EAD20u;
    SET_GPR_U32(ctx, 31, 0x2EAD28u);
    ctx->pc = 0x2EAD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD20u;
    // 0x2ead24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED778u, 0x2EAD20u, 0x2EAD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD28u;
label_2ead28:
    // 0x2ead28: 0x5040021d  beql        $v0, $zero, . + 4 + (0x21D << 2)
label_2ead2c:
    if (ctx->pc == 0x2EAD2Cu) {
        ctx->pc = 0x2EAD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD28u;
        // 0x2ead2c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAD30u;
        goto label_2ead30;
    }
    ctx->pc = 0x2EAD28u;
    {
        const bool branch_taken_0x2ead28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ead28) {
            ctx->pc = 0x2EAD2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAD28u;
            // 0x2ead2c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EAD30u;
label_2ead30:
    // 0x2ead30: 0xc08dab6  jal         func_236AD8
label_2ead34:
    if (ctx->pc == 0x2EAD34u) {
        ctx->pc = 0x2EAD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD30u;
        // 0x2ead34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAD38u;
        goto label_2ead38;
    }
    ctx->pc = 0x2EAD30u;
    SET_GPR_U32(ctx, 31, 0x2EAD38u);
    ctx->pc = 0x2EAD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD30u;
    // 0x2ead34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x2EAD30u, 0x2EAD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD38u;
label_2ead38:
    // 0x2ead38: 0x50400219  beql        $v0, $zero, . + 4 + (0x219 << 2)
label_2ead3c:
    if (ctx->pc == 0x2EAD3Cu) {
        ctx->pc = 0x2EAD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD38u;
        // 0x2ead3c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAD40u;
        goto label_2ead40;
    }
    ctx->pc = 0x2EAD38u;
    {
        const bool branch_taken_0x2ead38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ead38) {
            ctx->pc = 0x2EAD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAD38u;
            // 0x2ead3c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EAD40u;
label_2ead40:
    // 0x2ead40: 0x8e22121c  lw          $v0, 0x121C($s1)
    ctx->pc = 0x2ead40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
label_2ead44:
    // 0x2ead44: 0x10400215  beqz        $v0, . + 4 + (0x215 << 2)
label_2ead48:
    if (ctx->pc == 0x2EAD48u) {
        ctx->pc = 0x2EAD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD44u;
        // 0x2ead48: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAD4Cu;
        goto label_2ead4c;
    }
    ctx->pc = 0x2EAD44u;
    {
        const bool branch_taken_0x2ead44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD44u;
        // 0x2ead48: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ead44) {
            ctx->pc = 0x2EB59Cu;
            goto label_2eb59c;
        }
    }
    ctx->pc = 0x2EAD4Cu;
label_2ead4c:
    // 0x2ead4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ead4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ead50:
    // 0x2ead50: 0xa202b838  sb          $v0, -0x47C8($s0)
    ctx->pc = 0x2ead50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294948920), (uint8_t)GPR_U32(ctx, 2));
label_2ead54:
    // 0x2ead54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ead54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ead58:
    // 0x2ead58: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2ead58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2ead5c:
    // 0x2ead5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ead5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ead60:
    // 0x2ead60: 0x8e25121c  lw          $a1, 0x121C($s1)
    ctx->pc = 0x2ead60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
label_2ead64:
    // 0x2ead64: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x2ead64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2ead68:
    // 0x2ead68: 0xc0bce40  jal         func_2F3900
label_2ead6c:
    if (ctx->pc == 0x2EAD6Cu) {
        ctx->pc = 0x2EAD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD68u;
        // 0x2ead6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAD70u;
        goto label_2ead70;
    }
    ctx->pc = 0x2EAD68u;
    SET_GPR_U32(ctx, 31, 0x2EAD70u);
    ctx->pc = 0x2EAD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD68u;
    // 0x2ead6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3900u, 0x2EAD68u, 0x2EAD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD70u;
label_2ead70:
    // 0x2ead70: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ead70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ead74:
    // 0x2ead74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ead74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2ead78:
    // 0x2ead78: 0xa202b838  sb          $v0, -0x47C8($s0)
    ctx->pc = 0x2ead78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294948920), (uint8_t)GPR_U32(ctx, 2));
label_2ead7c:
    // 0x2ead7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ead7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ead80:
    // 0x2ead80: 0xc0bd5f6  jal         func_2F57D8
label_2ead84:
    if (ctx->pc == 0x2EAD84u) {
        ctx->pc = 0x2EAD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD80u;
        // 0x2ead84: 0x8e25121c  lw          $a1, 0x121C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAD88u;
        goto label_2ead88;
    }
    ctx->pc = 0x2EAD80u;
    SET_GPR_U32(ctx, 31, 0x2EAD88u);
    ctx->pc = 0x2EAD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD80u;
    // 0x2ead84: 0x8e25121c  lw          $a1, 0x121C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F57D8u, 0x2EAD80u, 0x2EAD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD88u;
label_2ead88:
    // 0x2ead88: 0x10000281  b           . + 4 + (0x281 << 2)
label_2ead8c:
    if (ctx->pc == 0x2EAD8Cu) {
        ctx->pc = 0x2EAD90u;
        goto label_2ead90;
    }
    ctx->pc = 0x2EAD88u;
    {
        const bool branch_taken_0x2ead88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ead88) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EAD90u;
label_2ead90:
    // 0x2ead90: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2ead90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2ead94:
    // 0x2ead94: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2ead94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_2ead98:
    // 0x2ead98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ead98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ead9c:
    // 0x2ead9c: 0x104301ff  beq         $v0, $v1, . + 4 + (0x1FF << 2)
label_2eada0:
    if (ctx->pc == 0x2EADA0u) {
        ctx->pc = 0x2EADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD9Cu;
        // 0x2eada0: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EADA4u;
        goto label_2eada4;
    }
    ctx->pc = 0x2EAD9Cu;
    {
        const bool branch_taken_0x2ead9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD9Cu;
        // 0x2eada0: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ead9c) {
            ctx->pc = 0x2EB59Cu;
            goto label_2eb59c;
        }
    }
    ctx->pc = 0x2EADA4u;
label_2eada4:
    // 0x2eada4: 0xc0bb5de  jal         func_2ED778
label_2eada8:
    if (ctx->pc == 0x2EADA8u) {
        ctx->pc = 0x2EADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EADA4u;
        // 0x2eada8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EADACu;
        goto label_2eadac;
    }
    ctx->pc = 0x2EADA4u;
    SET_GPR_U32(ctx, 31, 0x2EADACu);
    ctx->pc = 0x2EADA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EADA4u;
    // 0x2eada8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED778u, 0x2EADA4u, 0x2EADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EADACu;
label_2eadac:
    // 0x2eadac: 0x504001fc  beql        $v0, $zero, . + 4 + (0x1FC << 2)
label_2eadb0:
    if (ctx->pc == 0x2EADB0u) {
        ctx->pc = 0x2EADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EADACu;
        // 0x2eadb0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EADB4u;
        goto label_2eadb4;
    }
    ctx->pc = 0x2EADACu;
    {
        const bool branch_taken_0x2eadac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eadac) {
            ctx->pc = 0x2EADB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EADACu;
            // 0x2eadb0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EADB4u;
label_2eadb4:
    // 0x2eadb4: 0xc08dab6  jal         func_236AD8
label_2eadb8:
    if (ctx->pc == 0x2EADB8u) {
        ctx->pc = 0x2EADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EADB4u;
        // 0x2eadb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EADBCu;
        goto label_2eadbc;
    }
    ctx->pc = 0x2EADB4u;
    SET_GPR_U32(ctx, 31, 0x2EADBCu);
    ctx->pc = 0x2EADB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EADB4u;
    // 0x2eadb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x2EADB4u, 0x2EADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EADBCu;
label_2eadbc:
    // 0x2eadbc: 0x504001f8  beql        $v0, $zero, . + 4 + (0x1F8 << 2)
label_2eadc0:
    if (ctx->pc == 0x2EADC0u) {
        ctx->pc = 0x2EADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EADBCu;
        // 0x2eadc0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EADC4u;
        goto label_2eadc4;
    }
    ctx->pc = 0x2EADBCu;
    {
        const bool branch_taken_0x2eadbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eadbc) {
            ctx->pc = 0x2EADC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EADBCu;
            // 0x2eadc0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EADC4u;
label_2eadc4:
    // 0x2eadc4: 0x8e22121c  lw          $v0, 0x121C($s1)
    ctx->pc = 0x2eadc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
label_2eadc8:
    // 0x2eadc8: 0x104001f4  beqz        $v0, . + 4 + (0x1F4 << 2)
label_2eadcc:
    if (ctx->pc == 0x2EADCCu) {
        ctx->pc = 0x2EADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EADC8u;
        // 0x2eadcc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EADD0u;
        goto label_2eadd0;
    }
    ctx->pc = 0x2EADC8u;
    {
        const bool branch_taken_0x2eadc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EADC8u;
        // 0x2eadcc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eadc8) {
            ctx->pc = 0x2EB59Cu;
            goto label_2eb59c;
        }
    }
    ctx->pc = 0x2EADD0u;
label_2eadd0:
    // 0x2eadd0: 0xa040b838  sb          $zero, -0x47C8($v0)
    ctx->pc = 0x2eadd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948920), (uint8_t)GPR_U32(ctx, 0));
label_2eadd4:
    // 0x2eadd4: 0x8e25121c  lw          $a1, 0x121C($s1)
    ctx->pc = 0x2eadd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
label_2eadd8:
    // 0x2eadd8: 0x10a0026d  beqz        $a1, . + 4 + (0x26D << 2)
label_2eaddc:
    if (ctx->pc == 0x2EADDCu) {
        ctx->pc = 0x2EADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EADD8u;
        // 0x2eaddc: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EADE0u;
        goto label_2eade0;
    }
    ctx->pc = 0x2EADD8u;
    {
        const bool branch_taken_0x2eadd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EADD8u;
        // 0x2eaddc: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eadd8) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EADE0u;
label_2eade0:
    // 0x2eade0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2eade0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2eade4:
    // 0x2eade4: 0xc0bd5f6  jal         func_2F57D8
label_2eade8:
    if (ctx->pc == 0x2EADE8u) {
        ctx->pc = 0x2EADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EADE4u;
        // 0x2eade8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EADECu;
        goto label_2eadec;
    }
    ctx->pc = 0x2EADE4u;
    SET_GPR_U32(ctx, 31, 0x2EADECu);
    ctx->pc = 0x2EADE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EADE4u;
    // 0x2eade8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F57D8u, 0x2EADE4u, 0x2EADECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EADECu;
label_2eadec:
    // 0x2eadec: 0x10000268  b           . + 4 + (0x268 << 2)
label_2eadf0:
    if (ctx->pc == 0x2EADF0u) {
        ctx->pc = 0x2EADF4u;
        goto label_2eadf4;
    }
    ctx->pc = 0x2EADECu;
    {
        const bool branch_taken_0x2eadec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eadec) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EADF4u;
label_2eadf4:
    // 0x2eadf4: 0xc0bf868  jal         func_2FE1A0
label_2eadf8:
    if (ctx->pc == 0x2EADF8u) {
        ctx->pc = 0x2EADFCu;
        goto label_2eadfc;
    }
    ctx->pc = 0x2EADF4u;
    SET_GPR_U32(ctx, 31, 0x2EADFCu);
    ctx->pc = 0x2FE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1A0u, 0x2EADF4u, 0x2EADFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EADFCu;
label_2eadfc:
    // 0x2eadfc: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_2eae00:
    if (ctx->pc == 0x2EAE00u) {
        ctx->pc = 0x2EAE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EADFCu;
        // 0x2eae00: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAE04u;
        goto label_2eae04;
    }
    ctx->pc = 0x2EADFCu;
    {
        const bool branch_taken_0x2eadfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EADFCu;
        // 0x2eae00: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eadfc) {
            ctx->pc = 0x2EAEFCu;
            goto label_2eaefc;
        }
    }
    ctx->pc = 0x2EAE04u;
label_2eae04:
    // 0x2eae04: 0x8c43aa88  lw          $v1, -0x5578($v0)
    ctx->pc = 0x2eae04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945416)));
label_2eae08:
    // 0x2eae08: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2eae0c:
    if (ctx->pc == 0x2EAE0Cu) {
        ctx->pc = 0x2EAE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE08u;
        // 0x2eae0c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAE10u;
        goto label_2eae10;
    }
    ctx->pc = 0x2EAE08u;
    {
        const bool branch_taken_0x2eae08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE08u;
        // 0x2eae0c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae08) {
            ctx->pc = 0x2EAE28u;
            goto label_2eae28;
        }
    }
    ctx->pc = 0x2EAE10u;
label_2eae10:
    // 0x2eae10: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2eae10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_2eae14:
    // 0x2eae14: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x2eae14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
label_2eae18:
    // 0x2eae18: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2eae18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2eae1c:
    // 0x2eae1c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2eae1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_2eae20:
    // 0x2eae20: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2eae24:
    if (ctx->pc == 0x2EAE24u) {
        ctx->pc = 0x2EAE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE20u;
        // 0x2eae24: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAE28u;
        goto label_2eae28;
    }
    ctx->pc = 0x2EAE20u;
    {
        const bool branch_taken_0x2eae20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eae20) {
            ctx->pc = 0x2EAE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAE20u;
            // 0x2eae24: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAE30u;
            goto label_2eae30;
        }
    }
    ctx->pc = 0x2EAE28u;
label_2eae28:
    // 0x2eae28: 0x10000002  b           . + 4 + (0x2 << 2)
label_2eae2c:
    if (ctx->pc == 0x2EAE2Cu) {
        ctx->pc = 0x2EAE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE28u;
        // 0x2eae2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAE30u;
        goto label_2eae30;
    }
    ctx->pc = 0x2EAE28u;
    {
        const bool branch_taken_0x2eae28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE28u;
        // 0x2eae2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae28) {
            ctx->pc = 0x2EAE34u;
            goto label_2eae34;
        }
    }
    ctx->pc = 0x2EAE30u;
label_2eae30:
    // 0x2eae30: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2eae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_2eae34:
    // 0x2eae34: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
label_2eae38:
    if (ctx->pc == 0x2EAE38u) {
        ctx->pc = 0x2EAE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE34u;
        // 0x2eae38: 0x8e220674  lw          $v0, 0x674($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAE3Cu;
        goto label_2eae3c;
    }
    ctx->pc = 0x2EAE34u;
    {
        const bool branch_taken_0x2eae34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eae34) {
            ctx->pc = 0x2EAE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAE34u;
            // 0x2eae38: 0x8e220674  lw          $v0, 0x674($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAF00u;
            goto label_2eaf00;
        }
    }
    ctx->pc = 0x2EAE3Cu;
label_2eae3c:
    // 0x2eae3c: 0xc08dab6  jal         func_236AD8
label_2eae40:
    if (ctx->pc == 0x2EAE40u) {
        ctx->pc = 0x2EAE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE3Cu;
        // 0x2eae40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAE44u;
        goto label_2eae44;
    }
    ctx->pc = 0x2EAE3Cu;
    SET_GPR_U32(ctx, 31, 0x2EAE44u);
    ctx->pc = 0x2EAE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAE3Cu;
    // 0x2eae40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x2EAE3Cu, 0x2EAE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE44u;
label_2eae44:
    // 0x2eae44: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_2eae48:
    if (ctx->pc == 0x2EAE48u) {
        ctx->pc = 0x2EAE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE44u;
        // 0x2eae48: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAE4Cu;
        goto label_2eae4c;
    }
    ctx->pc = 0x2EAE44u;
    {
        const bool branch_taken_0x2eae44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE44u;
        // 0x2eae48: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae44) {
            ctx->pc = 0x2EAEFCu;
            goto label_2eaefc;
        }
    }
    ctx->pc = 0x2EAE4Cu;
label_2eae4c:
    // 0x2eae4c: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x2eae4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2eae50:
    // 0x2eae50: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x2eae50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2eae54:
    // 0x2eae54: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_2eae58:
    if (ctx->pc == 0x2EAE58u) {
        ctx->pc = 0x2EAE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE54u;
        // 0x2eae58: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAE5Cu;
        goto label_2eae5c;
    }
    ctx->pc = 0x2EAE54u;
    {
        const bool branch_taken_0x2eae54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EAE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE54u;
        // 0x2eae58: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae54) {
            ctx->pc = 0x2EAE70u;
            goto label_2eae70;
        }
    }
    ctx->pc = 0x2EAE5Cu;
label_2eae5c:
    // 0x2eae5c: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2eae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_2eae60:
    // 0x2eae60: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2eae64:
    if (ctx->pc == 0x2EAE64u) {
        ctx->pc = 0x2EAE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE60u;
        // 0x2eae64: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAE68u;
        goto label_2eae68;
    }
    ctx->pc = 0x2EAE60u;
    {
        const bool branch_taken_0x2eae60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EAE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE60u;
        // 0x2eae64: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae60) {
            ctx->pc = 0x2EAE70u;
            goto label_2eae70;
        }
    }
    ctx->pc = 0x2EAE68u;
label_2eae68:
    // 0x2eae68: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2eae6c:
    if (ctx->pc == 0x2EAE6Cu) {
        ctx->pc = 0x2EAE70u;
        goto label_2eae70;
    }
    ctx->pc = 0x2EAE68u;
    {
        const bool branch_taken_0x2eae68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2eae68) {
            ctx->pc = 0x2EAE74u;
            goto label_2eae74;
        }
    }
    ctx->pc = 0x2EAE70u;
label_2eae70:
    // 0x2eae70: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2eae70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eae74:
    // 0x2eae74: 0xc08f68a  jal         func_23DA28
label_2eae78:
    if (ctx->pc == 0x2EAE78u) {
        ctx->pc = 0x2EAE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE74u;
        // 0x2eae78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAE7Cu;
        goto label_2eae7c;
    }
    ctx->pc = 0x2EAE74u;
    SET_GPR_U32(ctx, 31, 0x2EAE7Cu);
    ctx->pc = 0x2EAE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAE74u;
    // 0x2eae78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA28u, 0x2EAE74u, 0x2EAE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE7Cu;
label_2eae7c:
    // 0x2eae7c: 0x544001c8  bnel        $v0, $zero, . + 4 + (0x1C8 << 2)
label_2eae80:
    if (ctx->pc == 0x2EAE80u) {
        ctx->pc = 0x2EAE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE7Cu;
        // 0x2eae80: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAE84u;
        goto label_2eae84;
    }
    ctx->pc = 0x2EAE7Cu;
    {
        const bool branch_taken_0x2eae7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eae7c) {
            ctx->pc = 0x2EAE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAE7Cu;
            // 0x2eae80: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EAE84u;
label_2eae84:
    // 0x2eae84: 0x560001c6  bnel        $s0, $zero, . + 4 + (0x1C6 << 2)
label_2eae88:
    if (ctx->pc == 0x2EAE88u) {
        ctx->pc = 0x2EAE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE84u;
        // 0x2eae88: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAE8Cu;
        goto label_2eae8c;
    }
    ctx->pc = 0x2EAE84u;
    {
        const bool branch_taken_0x2eae84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eae84) {
            ctx->pc = 0x2EAE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAE84u;
            // 0x2eae88: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EAE8Cu;
label_2eae8c:
    // 0x2eae8c: 0x8e42aa88  lw          $v0, -0x5578($s2)
    ctx->pc = 0x2eae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945416)));
label_2eae90:
    // 0x2eae90: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2eae94:
    if (ctx->pc == 0x2EAE94u) {
        ctx->pc = 0x2EAE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE90u;
        // 0x2eae94: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAE98u;
        goto label_2eae98;
    }
    ctx->pc = 0x2EAE90u;
    {
        const bool branch_taken_0x2eae90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE90u;
        // 0x2eae94: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae90) {
            ctx->pc = 0x2EAEBCu;
            goto label_2eaebc;
        }
    }
    ctx->pc = 0x2EAE98u;
label_2eae98:
    // 0x2eae98: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x2eae98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
label_2eae9c:
    // 0x2eae9c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2eae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2eaea0:
    // 0x2eaea0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2eaea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_2eaea4:
    // 0x2eaea4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2eaea8:
    if (ctx->pc == 0x2EAEA8u) {
        ctx->pc = 0x2EAEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEA4u;
        // 0x2eaea8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAEACu;
        goto label_2eaeac;
    }
    ctx->pc = 0x2EAEA4u;
    {
        const bool branch_taken_0x2eaea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEA4u;
        // 0x2eaea8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaea4) {
            ctx->pc = 0x2EAEB4u;
            goto label_2eaeb4;
        }
    }
    ctx->pc = 0x2EAEACu;
label_2eaeac:
    // 0x2eaeac: 0x90620010  lbu         $v0, 0x10($v1)
    ctx->pc = 0x2eaeacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_2eaeb0:
    // 0x2eaeb0: 0x221fa  dsrl        $a0, $v0, 7
    ctx->pc = 0x2eaeb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> 7);
label_2eaeb4:
    // 0x2eaeb4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2eaeb8:
    if (ctx->pc == 0x2EAEB8u) {
        ctx->pc = 0x2EAEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEB4u;
        // 0x2eaeb8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAEBCu;
        goto label_2eaebc;
    }
    ctx->pc = 0x2EAEB4u;
    {
        const bool branch_taken_0x2eaeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEB4u;
        // 0x2eaeb8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaeb4) {
            ctx->pc = 0x2EAEC0u;
            goto label_2eaec0;
        }
    }
    ctx->pc = 0x2EAEBCu;
label_2eaebc:
    // 0x2eaebc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2eaebcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eaec0:
    // 0x2eaec0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2eaec4:
    if (ctx->pc == 0x2EAEC4u) {
        ctx->pc = 0x2EAEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEC0u;
        // 0x2eaec4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAEC8u;
        goto label_2eaec8;
    }
    ctx->pc = 0x2EAEC0u;
    {
        const bool branch_taken_0x2eaec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eaec0) {
            ctx->pc = 0x2EAEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAEC0u;
            // 0x2eaec4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAED8u;
            goto label_2eaed8;
        }
    }
    ctx->pc = 0x2EAEC8u;
label_2eaec8:
    // 0x2eaec8: 0x922211bb  lbu         $v0, 0x11BB($s1)
    ctx->pc = 0x2eaec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4539)));
label_2eaecc:
    // 0x2eaecc: 0x10400230  beqz        $v0, . + 4 + (0x230 << 2)
label_2eaed0:
    if (ctx->pc == 0x2EAED0u) {
        ctx->pc = 0x2EAED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAECCu;
        // 0x2eaed0: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAED4u;
        goto label_2eaed4;
    }
    ctx->pc = 0x2EAECCu;
    {
        const bool branch_taken_0x2eaecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAECCu;
        // 0x2eaed0: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaecc) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EAED4u;
label_2eaed4:
    // 0x2eaed4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2eaed4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eaed8:
    // 0x2eaed8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eaed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2eaedc:
    // 0x2eaedc: 0xc08dab6  jal         func_236AD8
label_2eaee0:
    if (ctx->pc == 0x2EAEE0u) {
        ctx->pc = 0x2EAEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEDCu;
        // 0x2eaee0: 0xae330550  sw          $s3, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAEE4u;
        goto label_2eaee4;
    }
    ctx->pc = 0x2EAEDCu;
    SET_GPR_U32(ctx, 31, 0x2EAEE4u);
    ctx->pc = 0x2EAEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAEDCu;
    // 0x2eaee0: 0xae330550  sw          $s3, 0x550($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x2EAEDCu, 0x2EAEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAEE4u;
label_2eaee4:
    // 0x2eaee4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2eaee8:
    if (ctx->pc == 0x2EAEE8u) {
        ctx->pc = 0x2EAEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEE4u;
        // 0x2eaee8: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAEECu;
        goto label_2eaeec;
    }
    ctx->pc = 0x2EAEE4u;
    {
        const bool branch_taken_0x2eaee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEE4u;
        // 0x2eaee8: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaee4) {
            ctx->pc = 0x2EAEF4u;
            goto label_2eaef4;
        }
    }
    ctx->pc = 0x2EAEECu;
label_2eaeec:
    // 0x2eaeec: 0x10000228  b           . + 4 + (0x228 << 2)
label_2eaef0:
    if (ctx->pc == 0x2EAEF0u) {
        ctx->pc = 0x2EAEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEECu;
        // 0x2eaef0: 0xa23311bb  sb          $s3, 0x11BB($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4539), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAEF4u;
        goto label_2eaef4;
    }
    ctx->pc = 0x2EAEECu;
    {
        const bool branch_taken_0x2eaeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEECu;
        // 0x2eaef0: 0xa23311bb  sb          $s3, 0x11BB($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4539), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaeec) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EAEF4u;
label_2eaef4:
    // 0x2eaef4: 0x10000226  b           . + 4 + (0x226 << 2)
label_2eaef8:
    if (ctx->pc == 0x2EAEF8u) {
        ctx->pc = 0x2EAEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEF4u;
        // 0x2eaef8: 0xa22011bb  sb          $zero, 0x11BB($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4539), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAEFCu;
        goto label_2eaefc;
    }
    ctx->pc = 0x2EAEF4u;
    {
        const bool branch_taken_0x2eaef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEF4u;
        // 0x2eaef8: 0xa22011bb  sb          $zero, 0x11BB($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4539), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaef4) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EAEFCu;
label_2eaefc:
    // 0x2eaefc: 0x8e220674  lw          $v0, 0x674($s1)
    ctx->pc = 0x2eaefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
label_2eaf00:
    // 0x2eaf00: 0x14400223  bnez        $v0, . + 4 + (0x223 << 2)
label_2eaf04:
    if (ctx->pc == 0x2EAF04u) {
        ctx->pc = 0x2EAF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF00u;
        // 0x2eaf04: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF08u;
        goto label_2eaf08;
    }
    ctx->pc = 0x2EAF00u;
    {
        const bool branch_taken_0x2eaf00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF00u;
        // 0x2eaf04: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf00) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EAF08u;
label_2eaf08:
    // 0x2eaf08: 0xc0bf1ee  jal         func_2FC7B8
label_2eaf0c:
    if (ctx->pc == 0x2EAF0Cu) {
        ctx->pc = 0x2EAF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF08u;
        // 0x2eaf0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF10u;
        goto label_2eaf10;
    }
    ctx->pc = 0x2EAF08u;
    SET_GPR_U32(ctx, 31, 0x2EAF10u);
    ctx->pc = 0x2EAF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAF08u;
    // 0x2eaf0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC7B8u, 0x2EAF08u, 0x2EAF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAF10u;
label_2eaf10:
    // 0x2eaf10: 0x1000021f  b           . + 4 + (0x21F << 2)
label_2eaf14:
    if (ctx->pc == 0x2EAF14u) {
        ctx->pc = 0x2EAF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF10u;
        // 0x2eaf14: 0x2c530001  sltiu       $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF18u;
        goto label_2eaf18;
    }
    ctx->pc = 0x2EAF10u;
    {
        const bool branch_taken_0x2eaf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF10u;
        // 0x2eaf14: 0x2c530001  sltiu       $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf10) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EAF18u;
label_2eaf18:
    // 0x2eaf18: 0x8e22065c  lw          $v0, 0x65C($s1)
    ctx->pc = 0x2eaf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1628)));
label_2eaf1c:
    // 0x2eaf1c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2eaf20:
    if (ctx->pc == 0x2EAF20u) {
        ctx->pc = 0x2EAF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF1Cu;
        // 0x2eaf20: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF24u;
        goto label_2eaf24;
    }
    ctx->pc = 0x2EAF1Cu;
    {
        const bool branch_taken_0x2eaf1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF1Cu;
        // 0x2eaf20: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf1c) {
            ctx->pc = 0x2EAF48u;
            goto label_2eaf48;
        }
    }
    ctx->pc = 0x2EAF24u;
label_2eaf24:
    // 0x2eaf24: 0x8e220660  lw          $v0, 0x660($s1)
    ctx->pc = 0x2eaf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1632)));
label_2eaf28:
    // 0x2eaf28: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2eaf2c:
    if (ctx->pc == 0x2EAF2Cu) {
        ctx->pc = 0x2EAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF28u;
        // 0x2eaf2c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF30u;
        goto label_2eaf30;
    }
    ctx->pc = 0x2EAF28u;
    {
        const bool branch_taken_0x2eaf28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eaf28) {
            ctx->pc = 0x2EAF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAF28u;
            // 0x2eaf2c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAF4Cu;
            goto label_2eaf4c;
        }
    }
    ctx->pc = 0x2EAF30u;
label_2eaf30:
    // 0x2eaf30: 0x8e220588  lw          $v0, 0x588($s1)
    ctx->pc = 0x2eaf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1416)));
label_2eaf34:
    // 0x2eaf34: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2eaf38:
    if (ctx->pc == 0x2EAF38u) {
        ctx->pc = 0x2EAF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF34u;
        // 0x2eaf38: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF3Cu;
        goto label_2eaf3c;
    }
    ctx->pc = 0x2EAF34u;
    {
        const bool branch_taken_0x2eaf34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eaf34) {
            ctx->pc = 0x2EAF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAF34u;
            // 0x2eaf38: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAF4Cu;
            goto label_2eaf4c;
        }
    }
    ctx->pc = 0x2EAF3Cu;
label_2eaf3c:
    // 0x2eaf3c: 0x8e22058c  lw          $v0, 0x58C($s1)
    ctx->pc = 0x2eaf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1420)));
label_2eaf40:
    // 0x2eaf40: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2eaf44:
    if (ctx->pc == 0x2EAF44u) {
        ctx->pc = 0x2EAF48u;
        goto label_2eaf48;
    }
    ctx->pc = 0x2EAF40u;
    {
        const bool branch_taken_0x2eaf40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eaf40) {
            ctx->pc = 0x2EAF4Cu;
            goto label_2eaf4c;
        }
    }
    ctx->pc = 0x2EAF48u;
label_2eaf48:
    // 0x2eaf48: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2eaf48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eaf4c:
    // 0x2eaf4c: 0xc0b93e0  jal         func_2E4F80
label_2eaf50:
    if (ctx->pc == 0x2EAF50u) {
        ctx->pc = 0x2EAF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF4Cu;
        // 0x2eaf50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF54u;
        goto label_2eaf54;
    }
    ctx->pc = 0x2EAF4Cu;
    SET_GPR_U32(ctx, 31, 0x2EAF54u);
    ctx->pc = 0x2EAF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAF4Cu;
    // 0x2eaf50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x2EAF4Cu, 0x2EAF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAF54u;
label_2eaf54:
    // 0x2eaf54: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_2eaf58:
    if (ctx->pc == 0x2EAF58u) {
        ctx->pc = 0x2EAF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF54u;
        // 0x2eaf58: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF5Cu;
        goto label_2eaf5c;
    }
    ctx->pc = 0x2EAF54u;
    {
        const bool branch_taken_0x2eaf54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eaf54) {
            ctx->pc = 0x2EAF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAF54u;
            // 0x2eaf58: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAFA0u;
            goto label_2eafa0;
        }
    }
    ctx->pc = 0x2EAF5Cu;
label_2eaf5c:
    // 0x2eaf5c: 0x56000010  bnel        $s0, $zero, . + 4 + (0x10 << 2)
label_2eaf60:
    if (ctx->pc == 0x2EAF60u) {
        ctx->pc = 0x2EAF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF5Cu;
        // 0x2eaf60: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF64u;
        goto label_2eaf64;
    }
    ctx->pc = 0x2EAF5Cu;
    {
        const bool branch_taken_0x2eaf5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eaf5c) {
            ctx->pc = 0x2EAF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAF5Cu;
            // 0x2eaf60: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAFA0u;
            goto label_2eafa0;
        }
    }
    ctx->pc = 0x2EAF64u;
label_2eaf64:
    // 0x2eaf64: 0x8e2411c0  lw          $a0, 0x11C0($s1)
    ctx->pc = 0x2eaf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2eaf68:
    // 0x2eaf68: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2eaf68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_2eaf6c:
    // 0x2eaf6c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2eaf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2eaf70:
    // 0x2eaf70: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
label_2eaf74:
    if (ctx->pc == 0x2EAF74u) {
        ctx->pc = 0x2EAF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF70u;
        // 0x2eaf74: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF78u;
        goto label_2eaf78;
    }
    ctx->pc = 0x2EAF70u;
    {
        const bool branch_taken_0x2eaf70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EAF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF70u;
        // 0x2eaf74: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf70) {
            ctx->pc = 0x2EAF9Cu;
            goto label_2eaf9c;
        }
    }
    ctx->pc = 0x2EAF78u;
label_2eaf78:
    // 0x2eaf78: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2eaf78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2eaf7c:
    // 0x2eaf7c: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_2eaf80:
    if (ctx->pc == 0x2EAF80u) {
        ctx->pc = 0x2EAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF7Cu;
        // 0x2eaf80: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF84u;
        goto label_2eaf84;
    }
    ctx->pc = 0x2EAF7Cu;
    {
        const bool branch_taken_0x2eaf7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF7Cu;
        // 0x2eaf80: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf7c) {
            ctx->pc = 0x2EAF9Cu;
            goto label_2eaf9c;
        }
    }
    ctx->pc = 0x2EAF84u;
label_2eaf84:
    // 0x2eaf84: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2eaf88:
    if (ctx->pc == 0x2EAF88u) {
        ctx->pc = 0x2EAF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF84u;
        // 0x2eaf88: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF8Cu;
        goto label_2eaf8c;
    }
    ctx->pc = 0x2EAF84u;
    {
        const bool branch_taken_0x2eaf84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eaf84) {
            ctx->pc = 0x2EAF88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAF84u;
            // 0x2eaf88: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAFA0u;
            goto label_2eafa0;
        }
    }
    ctx->pc = 0x2EAF8Cu;
label_2eaf8c:
    // 0x2eaf8c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2eaf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2eaf90:
    // 0x2eaf90: 0x9043b837  lbu         $v1, -0x47C9($v0)
    ctx->pc = 0x2eaf90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948919)));
label_2eaf94:
    // 0x2eaf94: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2eaf98:
    if (ctx->pc == 0x2EAF98u) {
        ctx->pc = 0x2EAF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF94u;
        // 0x2eaf98: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF9Cu;
        goto label_2eaf9c;
    }
    ctx->pc = 0x2EAF94u;
    {
        const bool branch_taken_0x2eaf94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF94u;
        // 0x2eaf98: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf94) {
            ctx->pc = 0x2EAFA4u;
            goto label_2eafa4;
        }
    }
    ctx->pc = 0x2EAF9Cu;
label_2eaf9c:
    // 0x2eaf9c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2eaf9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eafa0:
    // 0x2eafa0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2eafa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_2eafa4:
    // 0x2eafa4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2eafa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2eafa8:
    // 0x2eafa8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2eafa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2eafac:
    // 0x2eafac: 0x24432458  addiu       $v1, $v0, 0x2458
    ctx->pc = 0x2eafacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9304));
label_2eafb0:
    // 0x2eafb0: 0xc4402458  lwc1        $f0, 0x2458($v0)
    ctx->pc = 0x2eafb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2eafb4:
    // 0x2eafb4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2eafb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2eafb8:
    // 0x2eafb8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2eafb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2eafbc:
    // 0x2eafbc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2eafbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2eafc0:
    // 0x2eafc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eafc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2eafc4:
    // 0x2eafc4: 0x0  nop
    ctx->pc = 0x2eafc4u;
    // NOP
label_2eafc8:
    // 0x2eafc8: 0x0  nop
    ctx->pc = 0x2eafc8u;
    // NOP
label_2eafcc:
    // 0x2eafcc: 0x46000004  c1          0x4
    ctx->pc = 0x2eafccu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_2eafd0:
    // 0x2eafd0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2eafd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2eafd4:
    // 0x2eafd4: 0x0  nop
    ctx->pc = 0x2eafd4u;
    // NOP
label_2eafd8:
    // 0x2eafd8: 0x450001ed  bc1f        . + 4 + (0x1ED << 2)
label_2eafdc:
    if (ctx->pc == 0x2EAFDCu) {
        ctx->pc = 0x2EAFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFD8u;
        // 0x2eafdc: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAFE0u;
        goto label_2eafe0;
    }
    ctx->pc = 0x2EAFD8u;
    {
        const bool branch_taken_0x2eafd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EAFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFD8u;
        // 0x2eafdc: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eafd8) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EAFE0u;
label_2eafe0:
    // 0x2eafe0: 0x100001eb  b           . + 4 + (0x1EB << 2)
label_2eafe4:
    if (ctx->pc == 0x2EAFE4u) {
        ctx->pc = 0x2EAFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFE0u;
        // 0x2eafe4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAFE8u;
        goto label_2eafe8;
    }
    ctx->pc = 0x2EAFE0u;
    {
        const bool branch_taken_0x2eafe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFE0u;
        // 0x2eafe4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eafe0) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EAFE8u;
label_2eafe8:
    // 0x2eafe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eafe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2eafec:
    // 0x2eafec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2eafecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eaff0:
    // 0x2eaff0: 0xc0bc120  jal         func_2F0480
label_2eaff4:
    if (ctx->pc == 0x2EAFF4u) {
        ctx->pc = 0x2EAFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFF0u;
        // 0x2eaff4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAFF8u;
        goto label_2eaff8;
    }
    ctx->pc = 0x2EAFF0u;
    SET_GPR_U32(ctx, 31, 0x2EAFF8u);
    ctx->pc = 0x2EAFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAFF0u;
    // 0x2eaff4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0480u, 0x2EAFF0u, 0x2EAFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAFF8u;
label_2eaff8:
    // 0x2eaff8: 0x54400169  bnel        $v0, $zero, . + 4 + (0x169 << 2)
label_2eaffc:
    if (ctx->pc == 0x2EAFFCu) {
        ctx->pc = 0x2EAFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFF8u;
        // 0x2eaffc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB000u;
        goto label_2eb000;
    }
    ctx->pc = 0x2EAFF8u;
    {
        const bool branch_taken_0x2eaff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eaff8) {
            ctx->pc = 0x2EAFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAFF8u;
            // 0x2eaffc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EB000u;
label_2eb000:
    // 0x2eb000: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x2eb000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2eb004:
    // 0x2eb004: 0x8c4201e8  lw          $v0, 0x1E8($v0)
    ctx->pc = 0x2eb004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
label_2eb008:
    // 0x2eb008: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2eb00c:
    if (ctx->pc == 0x2EB00Cu) {
        ctx->pc = 0x2EB00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB008u;
        // 0x2eb00c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB010u;
        goto label_2eb010;
    }
    ctx->pc = 0x2EB008u;
    {
        const bool branch_taken_0x2eb008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB008u;
        // 0x2eb00c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb008) {
            ctx->pc = 0x2EB050u;
            goto label_2eb050;
        }
    }
    ctx->pc = 0x2EB010u;
label_2eb010:
    // 0x2eb010: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2eb010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2eb014:
    // 0x2eb014: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2eb014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_2eb018:
    // 0x2eb018: 0xc0d73cc  jal         func_35CF30
label_2eb01c:
    if (ctx->pc == 0x2EB01Cu) {
        ctx->pc = 0x2EB01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB018u;
        // 0x2eb01c: 0x24a518b8  addiu       $a1, $a1, 0x18B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB020u;
        goto label_2eb020;
    }
    ctx->pc = 0x2EB018u;
    SET_GPR_U32(ctx, 31, 0x2EB020u);
    ctx->pc = 0x2EB01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB018u;
    // 0x2eb01c: 0x24a518b8  addiu       $a1, $a1, 0x18B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2EB018u, 0x2EB020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB020u;
label_2eb020:
    // 0x2eb020: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2eb020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2eb024:
    // 0x2eb024: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2eb028:
    if (ctx->pc == 0x2EB028u) {
        ctx->pc = 0x2EB028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB024u;
        // 0x2eb028: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB02Cu;
        goto label_2eb02c;
    }
    ctx->pc = 0x2EB024u;
    {
        const bool branch_taken_0x2eb024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb024) {
            ctx->pc = 0x2EB028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB024u;
            // 0x2eb028: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB050u;
            goto label_2eb050;
        }
    }
    ctx->pc = 0x2EB02Cu;
label_2eb02c:
    // 0x2eb02c: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x2eb02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2eb030:
    // 0x2eb030: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2eb030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_2eb034:
    // 0x2eb034: 0x24a518c8  addiu       $a1, $a1, 0x18C8
    ctx->pc = 0x2eb034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6344));
label_2eb038:
    // 0x2eb038: 0x8c6201e8  lw          $v0, 0x1E8($v1)
    ctx->pc = 0x2eb038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 488)));
label_2eb03c:
    // 0x2eb03c: 0xc0d73cc  jal         func_35CF30
label_2eb040:
    if (ctx->pc == 0x2EB040u) {
        ctx->pc = 0x2EB040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB03Cu;
        // 0x2eb040: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB044u;
        goto label_2eb044;
    }
    ctx->pc = 0x2EB03Cu;
    SET_GPR_U32(ctx, 31, 0x2EB044u);
    ctx->pc = 0x2EB040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB03Cu;
    // 0x2eb040: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2EB03Cu, 0x2EB044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB044u;
label_2eb044:
    // 0x2eb044: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2eb044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2eb048:
    // 0x2eb048: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2eb04c:
    if (ctx->pc == 0x2EB04Cu) {
        ctx->pc = 0x2EB04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB048u;
        // 0x2eb04c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB050u;
        goto label_2eb050;
    }
    ctx->pc = 0x2EB048u;
    {
        const bool branch_taken_0x2eb048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb048) {
            ctx->pc = 0x2EB04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB048u;
            // 0x2eb04c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB050u;
            goto label_2eb050;
        }
    }
    ctx->pc = 0x2EB050u;
label_2eb050:
    // 0x2eb050: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_2eb054:
    if (ctx->pc == 0x2EB054u) {
        ctx->pc = 0x2EB054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB050u;
        // 0x2eb054: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB058u;
        goto label_2eb058;
    }
    ctx->pc = 0x2EB050u;
    {
        const bool branch_taken_0x2eb050 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB050u;
        // 0x2eb054: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb050) {
            ctx->pc = 0x2EB090u;
            goto label_2eb090;
        }
    }
    ctx->pc = 0x2EB058u;
label_2eb058:
    // 0x2eb058: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x2eb058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2eb05c:
    // 0x2eb05c: 0x8c6301e8  lw          $v1, 0x1E8($v1)
    ctx->pc = 0x2eb05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 488)));
label_2eb060:
    // 0x2eb060: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x2eb060u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
label_2eb064:
    // 0x2eb064: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2eb064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2eb068:
    // 0x2eb068: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2eb06c:
    if (ctx->pc == 0x2EB06Cu) {
        ctx->pc = 0x2EB070u;
        goto label_2eb070;
    }
    ctx->pc = 0x2EB068u;
    {
        const bool branch_taken_0x2eb068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb068) {
            ctx->pc = 0x2EB090u;
            goto label_2eb090;
        }
    }
    ctx->pc = 0x2EB070u;
label_2eb070:
    // 0x2eb070: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x2eb070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2eb074:
    // 0x2eb074: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2eb074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2eb078:
    // 0x2eb078: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2eb078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2eb07c:
    // 0x2eb07c: 0x0  nop
    ctx->pc = 0x2eb07cu;
    // NOP
label_2eb080:
    // 0x2eb080: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2eb080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2eb084:
    // 0x2eb084: 0x0  nop
    ctx->pc = 0x2eb084u;
    // NOP
label_2eb088:
    // 0x2eb088: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2eb08c:
    if (ctx->pc == 0x2EB08Cu) {
        ctx->pc = 0x2EB08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB088u;
        // 0x2eb08c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB090u;
        goto label_2eb090;
    }
    ctx->pc = 0x2EB088u;
    {
        const bool branch_taken_0x2eb088 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eb088) {
            ctx->pc = 0x2EB08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB088u;
            // 0x2eb08c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB090u;
            goto label_2eb090;
        }
    }
    ctx->pc = 0x2EB090u;
label_2eb090:
    // 0x2eb090: 0xc0b93e0  jal         func_2E4F80
label_2eb094:
    if (ctx->pc == 0x2EB094u) {
        ctx->pc = 0x2EB094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB090u;
        // 0x2eb094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB098u;
        goto label_2eb098;
    }
    ctx->pc = 0x2EB090u;
    SET_GPR_U32(ctx, 31, 0x2EB098u);
    ctx->pc = 0x2EB094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB090u;
    // 0x2eb094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x2EB090u, 0x2EB098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB098u;
label_2eb098:
    // 0x2eb098: 0x54400141  bnel        $v0, $zero, . + 4 + (0x141 << 2)
label_2eb09c:
    if (ctx->pc == 0x2EB09Cu) {
        ctx->pc = 0x2EB09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB098u;
        // 0x2eb09c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB0A0u;
        goto label_2eb0a0;
    }
    ctx->pc = 0x2EB098u;
    {
        const bool branch_taken_0x2eb098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb098) {
            ctx->pc = 0x2EB09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB098u;
            // 0x2eb09c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EB0A0u;
label_2eb0a0:
    // 0x2eb0a0: 0x8e2411c0  lw          $a0, 0x11C0($s1)
    ctx->pc = 0x2eb0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2eb0a4:
    // 0x2eb0a4: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2eb0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_2eb0a8:
    // 0x2eb0a8: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2eb0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2eb0ac:
    // 0x2eb0ac: 0x5043013c  beql        $v0, $v1, . + 4 + (0x13C << 2)
label_2eb0b0:
    if (ctx->pc == 0x2EB0B0u) {
        ctx->pc = 0x2EB0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB0ACu;
        // 0x2eb0b0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB0B4u;
        goto label_2eb0b4;
    }
    ctx->pc = 0x2EB0ACu;
    {
        const bool branch_taken_0x2eb0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eb0ac) {
            ctx->pc = 0x2EB0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB0ACu;
            // 0x2eb0b0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EB0B4u;
label_2eb0b4:
    // 0x2eb0b4: 0x8e22053c  lw          $v0, 0x53C($s1)
    ctx->pc = 0x2eb0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1340)));
label_2eb0b8:
    // 0x2eb0b8: 0x54400139  bnel        $v0, $zero, . + 4 + (0x139 << 2)
label_2eb0bc:
    if (ctx->pc == 0x2EB0BCu) {
        ctx->pc = 0x2EB0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB0B8u;
        // 0x2eb0bc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB0C0u;
        goto label_2eb0c0;
    }
    ctx->pc = 0x2EB0B8u;
    {
        const bool branch_taken_0x2eb0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb0b8) {
            ctx->pc = 0x2EB0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB0B8u;
            // 0x2eb0bc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EB0C0u;
label_2eb0c0:
    // 0x2eb0c0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2eb0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_2eb0c4:
    // 0x2eb0c4: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2eb0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2eb0c8:
    // 0x2eb0c8: 0x10430134  beq         $v0, $v1, . + 4 + (0x134 << 2)
label_2eb0cc:
    if (ctx->pc == 0x2EB0CCu) {
        ctx->pc = 0x2EB0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB0C8u;
        // 0x2eb0cc: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB0D0u;
        goto label_2eb0d0;
    }
    ctx->pc = 0x2EB0C8u;
    {
        const bool branch_taken_0x2eb0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EB0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB0C8u;
        // 0x2eb0cc: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb0c8) {
            ctx->pc = 0x2EB59Cu;
            goto label_2eb59c;
        }
    }
    ctx->pc = 0x2EB0D0u;
label_2eb0d0:
    // 0x2eb0d0: 0x54400133  bnel        $v0, $zero, . + 4 + (0x133 << 2)
label_2eb0d4:
    if (ctx->pc == 0x2EB0D4u) {
        ctx->pc = 0x2EB0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB0D0u;
        // 0x2eb0d4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB0D8u;
        goto label_2eb0d8;
    }
    ctx->pc = 0x2EB0D0u;
    {
        const bool branch_taken_0x2eb0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb0d0) {
            ctx->pc = 0x2EB0D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB0D0u;
            // 0x2eb0d4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EB0D8u;
label_2eb0d8:
    // 0x2eb0d8: 0x56400131  bnel        $s2, $zero, . + 4 + (0x131 << 2)
label_2eb0dc:
    if (ctx->pc == 0x2EB0DCu) {
        ctx->pc = 0x2EB0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB0D8u;
        // 0x2eb0dc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB0E0u;
        goto label_2eb0e0;
    }
    ctx->pc = 0x2EB0D8u;
    {
        const bool branch_taken_0x2eb0d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb0d8) {
            ctx->pc = 0x2EB0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB0D8u;
            // 0x2eb0dc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EB0E0u;
label_2eb0e0:
    // 0x2eb0e0: 0xae200578  sw          $zero, 0x578($s1)
    ctx->pc = 0x2eb0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1400), GPR_U32(ctx, 0));
label_2eb0e4:
    // 0x2eb0e4: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x2eb0e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2eb0e8:
    // 0x2eb0e8: 0xae20057c  sw          $zero, 0x57C($s1)
    ctx->pc = 0x2eb0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1404), GPR_U32(ctx, 0));
label_2eb0ec:
    // 0x2eb0ec: 0xae200580  sw          $zero, 0x580($s1)
    ctx->pc = 0x2eb0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1408), GPR_U32(ctx, 0));
label_2eb0f0:
    // 0x2eb0f0: 0xc0bf868  jal         func_2FE1A0
label_2eb0f4:
    if (ctx->pc == 0x2EB0F4u) {
        ctx->pc = 0x2EB0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB0F0u;
        // 0x2eb0f4: 0xae200584  sw          $zero, 0x584($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB0F8u;
        goto label_2eb0f8;
    }
    ctx->pc = 0x2EB0F0u;
    SET_GPR_U32(ctx, 31, 0x2EB0F8u);
    ctx->pc = 0x2EB0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB0F0u;
    // 0x2eb0f4: 0xae200584  sw          $zero, 0x584($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1412), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1A0u, 0x2EB0F0u, 0x2EB0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB0F8u;
label_2eb0f8:
    // 0x2eb0f8: 0x104001a5  beqz        $v0, . + 4 + (0x1A5 << 2)
label_2eb0fc:
    if (ctx->pc == 0x2EB0FCu) {
        ctx->pc = 0x2EB0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB0F8u;
        // 0x2eb0fc: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB100u;
        goto label_2eb100;
    }
    ctx->pc = 0x2EB0F8u;
    {
        const bool branch_taken_0x2eb0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB0F8u;
        // 0x2eb0fc: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb0f8) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB100u;
label_2eb100:
    // 0x2eb100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eb100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2eb104:
    // 0x2eb104: 0xc0bcc6a  jal         func_2F31A8
label_2eb108:
    if (ctx->pc == 0x2EB108u) {
        ctx->pc = 0x2EB108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB104u;
        // 0x2eb108: 0xc44c18d8  lwc1        $f12, 0x18D8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB10Cu;
        goto label_2eb10c;
    }
    ctx->pc = 0x2EB104u;
    SET_GPR_U32(ctx, 31, 0x2EB10Cu);
    ctx->pc = 0x2EB108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB104u;
    // 0x2eb108: 0xc44c18d8  lwc1        $f12, 0x18D8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F31A8u, 0x2EB104u, 0x2EB10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB10Cu;
label_2eb10c:
    // 0x2eb10c: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2eb10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2eb110:
    // 0x2eb110: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2eb110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2eb114:
    // 0x2eb114: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2eb114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2eb118:
    // 0x2eb118: 0x1000019d  b           . + 4 + (0x19D << 2)
label_2eb11c:
    if (ctx->pc == 0x2EB11Cu) {
        ctx->pc = 0x2EB11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB118u;
        // 0x2eb11c: 0xae2211c0  sw          $v0, 0x11C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB120u;
        goto label_2eb120;
    }
    ctx->pc = 0x2EB118u;
    {
        const bool branch_taken_0x2eb118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB118u;
        // 0x2eb11c: 0xae2211c0  sw          $v0, 0x11C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb118) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB120u;
label_2eb120:
    // 0x2eb120: 0xc0b93e0  jal         func_2E4F80
label_2eb124:
    if (ctx->pc == 0x2EB124u) {
        ctx->pc = 0x2EB124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB120u;
        // 0x2eb124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB128u;
        goto label_2eb128;
    }
    ctx->pc = 0x2EB120u;
    SET_GPR_U32(ctx, 31, 0x2EB128u);
    ctx->pc = 0x2EB124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB120u;
    // 0x2eb124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x2EB120u, 0x2EB128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB128u;
label_2eb128:
    // 0x2eb128: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2eb12c:
    if (ctx->pc == 0x2EB12Cu) {
        ctx->pc = 0x2EB12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB128u;
        // 0x2eb12c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB130u;
        goto label_2eb130;
    }
    ctx->pc = 0x2EB128u;
    {
        const bool branch_taken_0x2eb128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB128u;
        // 0x2eb12c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb128) {
            ctx->pc = 0x2EB140u;
            goto label_2eb140;
        }
    }
    ctx->pc = 0x2EB130u;
label_2eb130:
    // 0x2eb130: 0xc0bf868  jal         func_2FE1A0
label_2eb134:
    if (ctx->pc == 0x2EB134u) {
        ctx->pc = 0x2EB138u;
        goto label_2eb138;
    }
    ctx->pc = 0x2EB130u;
    SET_GPR_U32(ctx, 31, 0x2EB138u);
    ctx->pc = 0x2FE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1A0u, 0x2EB130u, 0x2EB138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB138u;
label_2eb138:
    // 0x2eb138: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x2eb138u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2eb13c:
    // 0x2eb13c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eb13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2eb140:
    // 0x2eb140: 0xc0b93e0  jal         func_2E4F80
label_2eb144:
    if (ctx->pc == 0x2EB144u) {
        ctx->pc = 0x2EB144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB140u;
        // 0x2eb144: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB148u;
        goto label_2eb148;
    }
    ctx->pc = 0x2EB140u;
    SET_GPR_U32(ctx, 31, 0x2EB148u);
    ctx->pc = 0x2EB144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB140u;
    // 0x2eb144: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x2EB140u, 0x2EB148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB148u;
label_2eb148:
    // 0x2eb148: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eb148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb14c:
    // 0x2eb14c: 0x10000190  b           . + 4 + (0x190 << 2)
label_2eb150:
    if (ctx->pc == 0x2EB150u) {
        ctx->pc = 0x2EB150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB14Cu;
        // 0x2eb150: 0x62980a  movz        $s3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB154u;
        goto label_2eb154;
    }
    ctx->pc = 0x2EB14Cu;
    {
        const bool branch_taken_0x2eb14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB14Cu;
        // 0x2eb150: 0x62980a  movz        $s3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb14c) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB154u;
label_2eb154:
    // 0x2eb154: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2eb154u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb158:
    // 0x2eb158: 0xc08f672  jal         func_23D9C8
label_2eb15c:
    if (ctx->pc == 0x2EB15Cu) {
        ctx->pc = 0x2EB15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB158u;
        // 0x2eb15c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB160u;
        goto label_2eb160;
    }
    ctx->pc = 0x2EB158u;
    SET_GPR_U32(ctx, 31, 0x2EB160u);
    ctx->pc = 0x2EB15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB158u;
    // 0x2eb15c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x2EB158u, 0x2EB160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB160u;
label_2eb160:
    // 0x2eb160: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2eb164:
    if (ctx->pc == 0x2EB164u) {
        ctx->pc = 0x2EB164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB160u;
        // 0x2eb164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB168u;
        goto label_2eb168;
    }
    ctx->pc = 0x2EB160u;
    {
        const bool branch_taken_0x2eb160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB160u;
        // 0x2eb164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb160) {
            ctx->pc = 0x2EB178u;
            goto label_2eb178;
        }
    }
    ctx->pc = 0x2EB168u;
label_2eb168:
    // 0x2eb168: 0xc08fc7c  jal         func_23F1F0
label_2eb16c:
    if (ctx->pc == 0x2EB16Cu) {
        ctx->pc = 0x2EB16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB168u;
        // 0x2eb16c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB170u;
        goto label_2eb170;
    }
    ctx->pc = 0x2EB168u;
    SET_GPR_U32(ctx, 31, 0x2EB170u);
    ctx->pc = 0x2EB16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB168u;
    // 0x2eb16c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F1F0u, 0x2EB168u, 0x2EB170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB170u;
label_2eb170:
    // 0x2eb170: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2eb170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2eb174:
    // 0x2eb174: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x2eb174u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2eb178:
    // 0x2eb178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eb178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2eb17c:
    // 0x2eb17c: 0xc08db10  jal         func_236C40
label_2eb180:
    if (ctx->pc == 0x2EB180u) {
        ctx->pc = 0x2EB180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB17Cu;
        // 0x2eb180: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB184u;
        goto label_2eb184;
    }
    ctx->pc = 0x2EB17Cu;
    SET_GPR_U32(ctx, 31, 0x2EB184u);
    ctx->pc = 0x2EB180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB17Cu;
    // 0x2eb180: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C40u, 0x2EB17Cu, 0x2EB184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB184u;
label_2eb184:
    // 0x2eb184: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2eb188:
    if (ctx->pc == 0x2EB188u) {
        ctx->pc = 0x2EB188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB184u;
        // 0x2eb188: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB18Cu;
        goto label_2eb18c;
    }
    ctx->pc = 0x2EB184u;
    {
        const bool branch_taken_0x2eb184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB184u;
        // 0x2eb188: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb184) {
            ctx->pc = 0x2EB1F8u;
            goto label_2eb1f8;
        }
    }
    ctx->pc = 0x2EB18Cu;
label_2eb18c:
    // 0x2eb18c: 0x8e250334  lw          $a1, 0x334($s1)
    ctx->pc = 0x2eb18cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2eb190:
    // 0x2eb190: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x2eb190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_2eb194:
    // 0x2eb194: 0x8ca20150  lw          $v0, 0x150($a1)
    ctx->pc = 0x2eb194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
label_2eb198:
    // 0x2eb198: 0x54430018  bnel        $v0, $v1, . + 4 + (0x18 << 2)
label_2eb19c:
    if (ctx->pc == 0x2EB19Cu) {
        ctx->pc = 0x2EB19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB198u;
        // 0x2eb19c: 0x8e2211c0  lw          $v0, 0x11C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB1A0u;
        goto label_2eb1a0;
    }
    ctx->pc = 0x2EB198u;
    {
        const bool branch_taken_0x2eb198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2eb198) {
            ctx->pc = 0x2EB19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB198u;
            // 0x2eb19c: 0x8e2211c0  lw          $v0, 0x11C0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB1FCu;
            goto label_2eb1fc;
        }
    }
    ctx->pc = 0x2EB1A0u;
label_2eb1a0:
    // 0x2eb1a0: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x2eb1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
label_2eb1a4:
    // 0x2eb1a4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_2eb1a8:
    if (ctx->pc == 0x2EB1A8u) {
        ctx->pc = 0x2EB1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB1A4u;
        // 0x2eb1a8: 0xc4410014  lwc1        $f1, 0x14($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB1ACu;
        goto label_2eb1ac;
    }
    ctx->pc = 0x2EB1A4u;
    {
        const bool branch_taken_0x2eb1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb1a4) {
            ctx->pc = 0x2EB1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB1A4u;
            // 0x2eb1a8: 0xc4410014  lwc1        $f1, 0x14($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB1DCu;
            goto label_2eb1dc;
        }
    }
    ctx->pc = 0x2EB1ACu;
label_2eb1ac:
    // 0x2eb1ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eb1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb1b0:
    // 0x2eb1b0: 0x24a301ec  addiu       $v1, $a1, 0x1EC
    ctx->pc = 0x2eb1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 492));
label_2eb1b4:
    // 0x2eb1b4: 0x0  nop
    ctx->pc = 0x2eb1b4u;
    // NOP
label_2eb1b8:
    // 0x2eb1b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2eb1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2eb1bc:
    // 0x2eb1bc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2eb1c0:
    if (ctx->pc == 0x2EB1C0u) {
        ctx->pc = 0x2EB1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB1BCu;
        // 0x2eb1c0: 0xc4410014  lwc1        $f1, 0x14($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB1C4u;
        goto label_2eb1c4;
    }
    ctx->pc = 0x2EB1BCu;
    {
        const bool branch_taken_0x2eb1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb1bc) {
            ctx->pc = 0x2EB1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB1BCu;
            // 0x2eb1c0: 0xc4410014  lwc1        $f1, 0x14($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB1DCu;
            goto label_2eb1dc;
        }
    }
    ctx->pc = 0x2EB1C4u;
label_2eb1c4:
    // 0x2eb1c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2eb1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2eb1c8:
    // 0x2eb1c8: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2eb1c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_2eb1cc:
    // 0x2eb1cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2eb1d0:
    if (ctx->pc == 0x2EB1D0u) {
        ctx->pc = 0x2EB1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB1CCu;
        // 0x2eb1d0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB1D4u;
        goto label_2eb1d4;
    }
    ctx->pc = 0x2EB1CCu;
    {
        const bool branch_taken_0x2eb1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB1CCu;
        // 0x2eb1d0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb1cc) {
            ctx->pc = 0x2EB1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb1b8;
        }
    }
    ctx->pc = 0x2EB1D4u;
label_2eb1d4:
    // 0x2eb1d4: 0x8ca201e8  lw          $v0, 0x1E8($a1)
    ctx->pc = 0x2eb1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
label_2eb1d8:
    // 0x2eb1d8: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2eb1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2eb1dc:
    // 0x2eb1dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2eb1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2eb1e0:
    // 0x2eb1e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2eb1e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2eb1e4:
    // 0x2eb1e4: 0x0  nop
    ctx->pc = 0x2eb1e4u;
    // NOP
label_2eb1e8:
    // 0x2eb1e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2eb1e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2eb1ec:
    // 0x2eb1ec: 0x0  nop
    ctx->pc = 0x2eb1ecu;
    // NOP
label_2eb1f0:
    // 0x2eb1f0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2eb1f4:
    if (ctx->pc == 0x2EB1F4u) {
        ctx->pc = 0x2EB1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB1F0u;
        // 0x2eb1f4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB1F8u;
        goto label_2eb1f8;
    }
    ctx->pc = 0x2EB1F0u;
    {
        const bool branch_taken_0x2eb1f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eb1f0) {
            ctx->pc = 0x2EB1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB1F0u;
            // 0x2eb1f4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB1F8u;
            goto label_2eb1f8;
        }
    }
    ctx->pc = 0x2EB1F8u;
label_2eb1f8:
    // 0x2eb1f8: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2eb1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2eb1fc:
    // 0x2eb1fc: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2eb1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_2eb200:
    // 0x2eb200: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eb200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2eb204:
    // 0x2eb204: 0x50430162  beql        $v0, $v1, . + 4 + (0x162 << 2)
label_2eb208:
    if (ctx->pc == 0x2EB208u) {
        ctx->pc = 0x2EB208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB204u;
        // 0x2eb208: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB20Cu;
        goto label_2eb20c;
    }
    ctx->pc = 0x2EB204u;
    {
        const bool branch_taken_0x2eb204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eb204) {
            ctx->pc = 0x2EB208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB204u;
            // 0x2eb208: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB20Cu;
label_2eb20c:
    // 0x2eb20c: 0x9222047d  lbu         $v0, 0x47D($s1)
    ctx->pc = 0x2eb20cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
label_2eb210:
    // 0x2eb210: 0x5440015f  bnel        $v0, $zero, . + 4 + (0x15F << 2)
label_2eb214:
    if (ctx->pc == 0x2EB214u) {
        ctx->pc = 0x2EB214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB210u;
        // 0x2eb214: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB218u;
        goto label_2eb218;
    }
    ctx->pc = 0x2EB210u;
    {
        const bool branch_taken_0x2eb210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb210) {
            ctx->pc = 0x2EB214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB210u;
            // 0x2eb214: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB218u;
label_2eb218:
    // 0x2eb218: 0xc0894f6  jal         func_2253D8
label_2eb21c:
    if (ctx->pc == 0x2EB21Cu) {
        ctx->pc = 0x2EB21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB218u;
        // 0x2eb21c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB220u;
        goto label_2eb220;
    }
    ctx->pc = 0x2EB218u;
    SET_GPR_U32(ctx, 31, 0x2EB220u);
    ctx->pc = 0x2EB21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB218u;
    // 0x2eb21c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2253D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2253D8u, 0x2EB218u, 0x2EB220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB220u;
label_2eb220:
    // 0x2eb220: 0x5440015b  bnel        $v0, $zero, . + 4 + (0x15B << 2)
label_2eb224:
    if (ctx->pc == 0x2EB224u) {
        ctx->pc = 0x2EB224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB220u;
        // 0x2eb224: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB228u;
        goto label_2eb228;
    }
    ctx->pc = 0x2EB220u;
    {
        const bool branch_taken_0x2eb220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb220) {
            ctx->pc = 0x2EB224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB220u;
            // 0x2eb224: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB228u;
label_2eb228:
    // 0x2eb228: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x2eb228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2eb22c:
    // 0x2eb22c: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x2eb22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_2eb230:
    // 0x2eb230: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x2eb230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_2eb234:
    // 0x2eb234: 0x1064ff6a  beq         $v1, $a0, . + 4 + (-0x96 << 2)
label_2eb238:
    if (ctx->pc == 0x2EB238u) {
        ctx->pc = 0x2EB238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB234u;
        // 0x2eb238: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB23Cu;
        goto label_2eb23c;
    }
    ctx->pc = 0x2EB234u;
    {
        const bool branch_taken_0x2eb234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2EB238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB234u;
        // 0x2eb238: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb234) {
            ctx->pc = 0x2EAFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eafe0;
        }
    }
    ctx->pc = 0x2EB23Cu;
label_2eb23c:
    // 0x2eb23c: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x2eb23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_2eb240:
    // 0x2eb240: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eb240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2eb244:
    // 0x2eb244: 0x50430152  beql        $v0, $v1, . + 4 + (0x152 << 2)
label_2eb248:
    if (ctx->pc == 0x2EB248u) {
        ctx->pc = 0x2EB248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB244u;
        // 0x2eb248: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB24Cu;
        goto label_2eb24c;
    }
    ctx->pc = 0x2EB244u;
    {
        const bool branch_taken_0x2eb244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eb244) {
            ctx->pc = 0x2EB248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB244u;
            // 0x2eb248: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB24Cu;
label_2eb24c:
    // 0x2eb24c: 0x52a00150  beql        $s5, $zero, . + 4 + (0x150 << 2)
label_2eb250:
    if (ctx->pc == 0x2EB250u) {
        ctx->pc = 0x2EB250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB24Cu;
        // 0x2eb250: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB254u;
        goto label_2eb254;
    }
    ctx->pc = 0x2EB24Cu;
    {
        const bool branch_taken_0x2eb24c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb24c) {
            ctx->pc = 0x2EB250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB24Cu;
            // 0x2eb250: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB254u;
label_2eb254:
    // 0x2eb254: 0x1200014e  beqz        $s0, . + 4 + (0x14E << 2)
label_2eb258:
    if (ctx->pc == 0x2EB258u) {
        ctx->pc = 0x2EB25Cu;
        goto label_2eb25c;
    }
    ctx->pc = 0x2EB254u;
    {
        const bool branch_taken_0x2eb254 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb254) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB25Cu;
label_2eb25c:
    // 0x2eb25c: 0x1000014c  b           . + 4 + (0x14C << 2)
label_2eb260:
    if (ctx->pc == 0x2EB260u) {
        ctx->pc = 0x2EB260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB25Cu;
        // 0x2eb260: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB264u;
        goto label_2eb264;
    }
    ctx->pc = 0x2EB25Cu;
    {
        const bool branch_taken_0x2eb25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB25Cu;
        // 0x2eb260: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb25c) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB264u;
label_2eb264:
    // 0x2eb264: 0x8e2411c0  lw          $a0, 0x11C0($s1)
    ctx->pc = 0x2eb264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2eb268:
    // 0x2eb268: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2eb268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_2eb26c:
    // 0x2eb26c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2eb26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2eb270:
    // 0x2eb270: 0x504300cb  beql        $v0, $v1, . + 4 + (0xCB << 2)
label_2eb274:
    if (ctx->pc == 0x2EB274u) {
        ctx->pc = 0x2EB274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB270u;
        // 0x2eb274: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB278u;
        goto label_2eb278;
    }
    ctx->pc = 0x2EB270u;
    {
        const bool branch_taken_0x2eb270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eb270) {
            ctx->pc = 0x2EB274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB270u;
            // 0x2eb274: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EB278u;
label_2eb278:
    // 0x2eb278: 0x8e230338  lw          $v1, 0x338($s1)
    ctx->pc = 0x2eb278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_2eb27c:
    // 0x2eb27c: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x2eb27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_2eb280:
    // 0x2eb280: 0x2442ffeb  addiu       $v0, $v0, -0x15
    ctx->pc = 0x2eb280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967275));
label_2eb284:
    // 0x2eb284: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2eb284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2eb288:
    // 0x2eb288: 0x544000c5  bnel        $v0, $zero, . + 4 + (0xC5 << 2)
label_2eb28c:
    if (ctx->pc == 0x2EB28Cu) {
        ctx->pc = 0x2EB28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB288u;
        // 0x2eb28c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB290u;
        goto label_2eb290;
    }
    ctx->pc = 0x2EB288u;
    {
        const bool branch_taken_0x2eb288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb288) {
            ctx->pc = 0x2EB28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB288u;
            // 0x2eb28c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EB290u;
label_2eb290:
    // 0x2eb290: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x2eb290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2eb294:
    // 0x2eb294: 0x2442ffeb  addiu       $v0, $v0, -0x15
    ctx->pc = 0x2eb294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967275));
label_2eb298:
    // 0x2eb298: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2eb298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2eb29c:
    // 0x2eb29c: 0x544000c0  bnel        $v0, $zero, . + 4 + (0xC0 << 2)
label_2eb2a0:
    if (ctx->pc == 0x2EB2A0u) {
        ctx->pc = 0x2EB2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB29Cu;
        // 0x2eb2a0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB2A4u;
        goto label_2eb2a4;
    }
    ctx->pc = 0x2EB29Cu;
    {
        const bool branch_taken_0x2eb29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb29c) {
            ctx->pc = 0x2EB2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB29Cu;
            // 0x2eb2a0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EB2A4u;
label_2eb2a4:
    // 0x2eb2a4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2eb2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_2eb2a8:
    // 0x2eb2a8: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2eb2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2eb2ac:
    // 0x2eb2ac: 0x504300bc  beql        $v0, $v1, . + 4 + (0xBC << 2)
label_2eb2b0:
    if (ctx->pc == 0x2EB2B0u) {
        ctx->pc = 0x2EB2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB2ACu;
        // 0x2eb2b0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB2B4u;
        goto label_2eb2b4;
    }
    ctx->pc = 0x2EB2ACu;
    {
        const bool branch_taken_0x2eb2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eb2ac) {
            ctx->pc = 0x2EB2B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB2ACu;
            // 0x2eb2b0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EB2B4u;
label_2eb2b4:
    // 0x2eb2b4: 0xc0bf868  jal         func_2FE1A0
label_2eb2b8:
    if (ctx->pc == 0x2EB2B8u) {
        ctx->pc = 0x2EB2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB2B4u;
        // 0x2eb2b8: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB2BCu;
        goto label_2eb2bc;
    }
    ctx->pc = 0x2EB2B4u;
    SET_GPR_U32(ctx, 31, 0x2EB2BCu);
    ctx->pc = 0x2EB2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB2B4u;
    // 0x2eb2b8: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1A0u, 0x2EB2B4u, 0x2EB2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB2BCu;
label_2eb2bc:
    // 0x2eb2bc: 0x10000016  b           . + 4 + (0x16 << 2)
label_2eb2c0:
    if (ctx->pc == 0x2EB2C0u) {
        ctx->pc = 0x2EB2C4u;
        goto label_2eb2c4;
    }
    ctx->pc = 0x2EB2BCu;
    {
        const bool branch_taken_0x2eb2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb2bc) {
            ctx->pc = 0x2EB318u;
            goto label_2eb318;
        }
    }
    ctx->pc = 0x2EB2C4u;
label_2eb2c4:
    // 0x2eb2c4: 0xc0894f6  jal         func_2253D8
label_2eb2c8:
    if (ctx->pc == 0x2EB2C8u) {
        ctx->pc = 0x2EB2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB2C4u;
        // 0x2eb2c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB2CCu;
        goto label_2eb2cc;
    }
    ctx->pc = 0x2EB2C4u;
    SET_GPR_U32(ctx, 31, 0x2EB2CCu);
    ctx->pc = 0x2EB2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB2C4u;
    // 0x2eb2c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2253D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2253D8u, 0x2EB2C4u, 0x2EB2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB2CCu;
label_2eb2cc:
    // 0x2eb2cc: 0x544000b4  bnel        $v0, $zero, . + 4 + (0xB4 << 2)
label_2eb2d0:
    if (ctx->pc == 0x2EB2D0u) {
        ctx->pc = 0x2EB2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB2CCu;
        // 0x2eb2d0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB2D4u;
        goto label_2eb2d4;
    }
    ctx->pc = 0x2EB2CCu;
    {
        const bool branch_taken_0x2eb2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb2cc) {
            ctx->pc = 0x2EB2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB2CCu;
            // 0x2eb2d0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EB2D4u;
label_2eb2d4:
    // 0x2eb2d4: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x2eb2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_2eb2d8:
    // 0x2eb2d8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2eb2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_2eb2dc:
    // 0x2eb2dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eb2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2eb2e0:
    // 0x2eb2e0: 0x104300ae  beq         $v0, $v1, . + 4 + (0xAE << 2)
label_2eb2e4:
    if (ctx->pc == 0x2EB2E4u) {
        ctx->pc = 0x2EB2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB2E0u;
        // 0x2eb2e4: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB2E8u;
        goto label_2eb2e8;
    }
    ctx->pc = 0x2EB2E0u;
    {
        const bool branch_taken_0x2eb2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EB2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB2E0u;
        // 0x2eb2e4: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb2e0) {
            ctx->pc = 0x2EB59Cu;
            goto label_2eb59c;
        }
    }
    ctx->pc = 0x2EB2E8u;
label_2eb2e8:
    // 0x2eb2e8: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2eb2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2eb2ec:
    // 0x2eb2ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eb2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2eb2f0:
    // 0x2eb2f0: 0x504300ab  beql        $v0, $v1, . + 4 + (0xAB << 2)
label_2eb2f4:
    if (ctx->pc == 0x2EB2F4u) {
        ctx->pc = 0x2EB2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB2F0u;
        // 0x2eb2f4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB2F8u;
        goto label_2eb2f8;
    }
    ctx->pc = 0x2EB2F0u;
    {
        const bool branch_taken_0x2eb2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eb2f0) {
            ctx->pc = 0x2EB2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB2F0u;
            // 0x2eb2f4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EB2F8u;
label_2eb2f8:
    // 0x2eb2f8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2eb2fc:
    if (ctx->pc == 0x2EB2FCu) {
        ctx->pc = 0x2EB2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB2F8u;
        // 0x2eb2fc: 0x922210ce  lbu         $v0, 0x10CE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4302)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB300u;
        goto label_2eb300;
    }
    ctx->pc = 0x2EB2F8u;
    {
        const bool branch_taken_0x2eb2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB2F8u;
        // 0x2eb2fc: 0x922210ce  lbu         $v0, 0x10CE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4302)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb2f8) {
            ctx->pc = 0x2EB314u;
            goto label_2eb314;
        }
    }
    ctx->pc = 0x2EB300u;
label_2eb300:
    // 0x2eb300: 0xc0b93e0  jal         func_2E4F80
label_2eb304:
    if (ctx->pc == 0x2EB304u) {
        ctx->pc = 0x2EB304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB300u;
        // 0x2eb304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB308u;
        goto label_2eb308;
    }
    ctx->pc = 0x2EB300u;
    SET_GPR_U32(ctx, 31, 0x2EB308u);
    ctx->pc = 0x2EB304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB300u;
    // 0x2eb304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x2EB300u, 0x2EB308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB308u;
label_2eb308:
    // 0x2eb308: 0x544000a5  bnel        $v0, $zero, . + 4 + (0xA5 << 2)
label_2eb30c:
    if (ctx->pc == 0x2EB30Cu) {
        ctx->pc = 0x2EB30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB308u;
        // 0x2eb30c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB310u;
        goto label_2eb310;
    }
    ctx->pc = 0x2EB308u;
    {
        const bool branch_taken_0x2eb308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb308) {
            ctx->pc = 0x2EB30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB308u;
            // 0x2eb30c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EB310u;
label_2eb310:
    // 0x2eb310: 0x922210ce  lbu         $v0, 0x10CE($s1)
    ctx->pc = 0x2eb310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4302)));
label_2eb314:
    // 0x2eb314: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x2eb314u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2eb318:
    // 0x2eb318: 0x1040011d  beqz        $v0, . + 4 + (0x11D << 2)
label_2eb31c:
    if (ctx->pc == 0x2EB31Cu) {
        ctx->pc = 0x2EB320u;
        goto label_2eb320;
    }
    ctx->pc = 0x2EB318u;
    {
        const bool branch_taken_0x2eb318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb318) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB320u;
label_2eb320:
    // 0x2eb320: 0x1000009f  b           . + 4 + (0x9F << 2)
label_2eb324:
    if (ctx->pc == 0x2EB324u) {
        ctx->pc = 0x2EB324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB320u;
        // 0x2eb324: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB328u;
        goto label_2eb328;
    }
    ctx->pc = 0x2EB320u;
    {
        const bool branch_taken_0x2eb320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB320u;
        // 0x2eb324: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb320) {
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EB328u;
label_2eb328:
    // 0x2eb328: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x2eb328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2eb32c:
    // 0x2eb32c: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x2eb32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2eb330:
    // 0x2eb330: 0x2462ffcf  addiu       $v0, $v1, -0x31
    ctx->pc = 0x2eb330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
label_2eb334:
    // 0x2eb334: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x2eb334u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2eb338:
    // 0x2eb338: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2eb33c:
    if (ctx->pc == 0x2EB33Cu) {
        ctx->pc = 0x2EB33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB338u;
        // 0x2eb33c: 0x2462ffce  addiu       $v0, $v1, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB340u;
        goto label_2eb340;
    }
    ctx->pc = 0x2EB338u;
    {
        const bool branch_taken_0x2eb338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB338u;
        // 0x2eb33c: 0x2462ffce  addiu       $v0, $v1, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb338) {
            ctx->pc = 0x2EB34Cu;
            goto label_2eb34c;
        }
    }
    ctx->pc = 0x2EB340u;
label_2eb340:
    // 0x2eb340: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x2eb340u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2eb344:
    // 0x2eb344: 0x50400096  beql        $v0, $zero, . + 4 + (0x96 << 2)
label_2eb348:
    if (ctx->pc == 0x2EB348u) {
        ctx->pc = 0x2EB348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB344u;
        // 0x2eb348: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB34Cu;
        goto label_2eb34c;
    }
    ctx->pc = 0x2EB344u;
    {
        const bool branch_taken_0x2eb344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb344) {
            ctx->pc = 0x2EB348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB344u;
            // 0x2eb348: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EB34Cu;
label_2eb34c:
    // 0x2eb34c: 0xc0b93e0  jal         func_2E4F80
label_2eb350:
    if (ctx->pc == 0x2EB350u) {
        ctx->pc = 0x2EB350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB34Cu;
        // 0x2eb350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB354u;
        goto label_2eb354;
    }
    ctx->pc = 0x2EB34Cu;
    SET_GPR_U32(ctx, 31, 0x2EB354u);
    ctx->pc = 0x2EB350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB34Cu;
    // 0x2eb350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x2EB34Cu, 0x2EB354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB354u;
label_2eb354:
    // 0x2eb354: 0x54400092  bnel        $v0, $zero, . + 4 + (0x92 << 2)
label_2eb358:
    if (ctx->pc == 0x2EB358u) {
        ctx->pc = 0x2EB358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB354u;
        // 0x2eb358: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB35Cu;
        goto label_2eb35c;
    }
    ctx->pc = 0x2EB354u;
    {
        const bool branch_taken_0x2eb354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb354) {
            ctx->pc = 0x2EB358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB354u;
            // 0x2eb358: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EB35Cu;
label_2eb35c:
    // 0x2eb35c: 0x8e2211d8  lw          $v0, 0x11D8($s1)
    ctx->pc = 0x2eb35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4568)));
label_2eb360:
    // 0x2eb360: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2eb364:
    if (ctx->pc == 0x2EB364u) {
        ctx->pc = 0x2EB364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB360u;
        // 0x2eb364: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB368u;
        goto label_2eb368;
    }
    ctx->pc = 0x2EB360u;
    {
        const bool branch_taken_0x2eb360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB360u;
        // 0x2eb364: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb360) {
            ctx->pc = 0x2EB378u;
            goto label_2eb378;
        }
    }
    ctx->pc = 0x2EB368u;
label_2eb368:
    // 0x2eb368: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2eb368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2eb36c:
    // 0x2eb36c: 0x8c62b958  lw          $v0, -0x46A8($v1)
    ctx->pc = 0x2eb36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949208)));
label_2eb370:
    // 0x2eb370: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2eb370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2eb374:
    // 0x2eb374: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2eb374u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2eb378:
    // 0x2eb378: 0x50600089  beql        $v1, $zero, . + 4 + (0x89 << 2)
label_2eb37c:
    if (ctx->pc == 0x2EB37Cu) {
        ctx->pc = 0x2EB37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB378u;
        // 0x2eb37c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB380u;
        goto label_2eb380;
    }
    ctx->pc = 0x2EB378u;
    {
        const bool branch_taken_0x2eb378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb378) {
            ctx->pc = 0x2EB37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB378u;
            // 0x2eb37c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EB380u;
label_2eb380:
    // 0x2eb380: 0x922210ce  lbu         $v0, 0x10CE($s1)
    ctx->pc = 0x2eb380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4302)));
label_2eb384:
    // 0x2eb384: 0x54400086  bnel        $v0, $zero, . + 4 + (0x86 << 2)
label_2eb388:
    if (ctx->pc == 0x2EB388u) {
        ctx->pc = 0x2EB388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB384u;
        // 0x2eb388: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB38Cu;
        goto label_2eb38c;
    }
    ctx->pc = 0x2EB384u;
    {
        const bool branch_taken_0x2eb384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb384) {
            ctx->pc = 0x2EB388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB384u;
            // 0x2eb388: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EB38Cu;
label_2eb38c:
    // 0x2eb38c: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x2eb38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2eb390:
    // 0x2eb390: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x2eb390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_2eb394:
    // 0x2eb394: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x2eb394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_2eb398:
    // 0x2eb398: 0x10640080  beq         $v1, $a0, . + 4 + (0x80 << 2)
label_2eb39c:
    if (ctx->pc == 0x2EB39Cu) {
        ctx->pc = 0x2EB39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB398u;
        // 0x2eb39c: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB3A0u;
        goto label_2eb3a0;
    }
    ctx->pc = 0x2EB398u;
    {
        const bool branch_taken_0x2eb398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2EB39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB398u;
        // 0x2eb39c: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb398) {
            ctx->pc = 0x2EB59Cu;
            goto label_2eb59c;
        }
    }
    ctx->pc = 0x2EB3A0u;
label_2eb3a0:
    // 0x2eb3a0: 0x100000fb  b           . + 4 + (0xFB << 2)
label_2eb3a4:
    if (ctx->pc == 0x2EB3A4u) {
        ctx->pc = 0x2EB3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB3A0u;
        // 0x2eb3a4: 0xae2005ec  sw          $zero, 0x5EC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1516), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB3A8u;
        goto label_2eb3a8;
    }
    ctx->pc = 0x2EB3A0u;
    {
        const bool branch_taken_0x2eb3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB3A0u;
        // 0x2eb3a4: 0xae2005ec  sw          $zero, 0x5EC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1516), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb3a0) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB3A8u;
label_2eb3a8:
    // 0x2eb3a8: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2eb3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2eb3ac:
    // 0x2eb3ac: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2eb3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_2eb3b0:
    // 0x2eb3b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eb3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2eb3b4:
    // 0x2eb3b4: 0x1043ff0a  beq         $v0, $v1, . + 4 + (-0xF6 << 2)
label_2eb3b8:
    if (ctx->pc == 0x2EB3B8u) {
        ctx->pc = 0x2EB3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB3B4u;
        // 0x2eb3b8: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB3BCu;
        goto label_2eb3bc;
    }
    ctx->pc = 0x2EB3B4u;
    {
        const bool branch_taken_0x2eb3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EB3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB3B4u;
        // 0x2eb3b8: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb3b4) {
            ctx->pc = 0x2EAFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eafe0;
        }
    }
    ctx->pc = 0x2EB3BCu;
label_2eb3bc:
    // 0x2eb3bc: 0x922310cc  lbu         $v1, 0x10CC($s1)
    ctx->pc = 0x2eb3bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4300)));
label_2eb3c0:
    // 0x2eb3c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eb3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb3c4:
    // 0x2eb3c4: 0x1062ff06  beq         $v1, $v0, . + 4 + (-0xFA << 2)
label_2eb3c8:
    if (ctx->pc == 0x2EB3C8u) {
        ctx->pc = 0x2EB3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB3C4u;
        // 0x2eb3c8: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB3CCu;
        goto label_2eb3cc;
    }
    ctx->pc = 0x2EB3C4u;
    {
        const bool branch_taken_0x2eb3c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EB3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB3C4u;
        // 0x2eb3c8: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb3c4) {
            ctx->pc = 0x2EAFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eafe0;
        }
    }
    ctx->pc = 0x2EB3CCu;
label_2eb3cc:
    // 0x2eb3cc: 0x8e220418  lw          $v0, 0x418($s1)
    ctx->pc = 0x2eb3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_2eb3d0:
    // 0x2eb3d0: 0x505000ef  beql        $v0, $s0, . + 4 + (0xEF << 2)
label_2eb3d4:
    if (ctx->pc == 0x2EB3D4u) {
        ctx->pc = 0x2EB3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB3D0u;
        // 0x2eb3d4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB3D8u;
        goto label_2eb3d8;
    }
    ctx->pc = 0x2EB3D0u;
    {
        const bool branch_taken_0x2eb3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2eb3d0) {
            ctx->pc = 0x2EB3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB3D0u;
            // 0x2eb3d4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB3D8u;
label_2eb3d8:
    // 0x2eb3d8: 0xc0954fe  jal         func_2553F8
label_2eb3dc:
    if (ctx->pc == 0x2EB3DCu) {
        ctx->pc = 0x2EB3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB3D8u;
        // 0x2eb3dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB3E0u;
        goto label_2eb3e0;
    }
    ctx->pc = 0x2EB3D8u;
    SET_GPR_U32(ctx, 31, 0x2EB3E0u);
    ctx->pc = 0x2EB3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB3D8u;
    // 0x2eb3dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2553F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2553F8u, 0x2EB3D8u, 0x2EB3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB3E0u;
label_2eb3e0:
    // 0x2eb3e0: 0x544000eb  bnel        $v0, $zero, . + 4 + (0xEB << 2)
label_2eb3e4:
    if (ctx->pc == 0x2EB3E4u) {
        ctx->pc = 0x2EB3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB3E0u;
        // 0x2eb3e4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB3E8u;
        goto label_2eb3e8;
    }
    ctx->pc = 0x2EB3E0u;
    {
        const bool branch_taken_0x2eb3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb3e0) {
            ctx->pc = 0x2EB3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB3E0u;
            // 0x2eb3e4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB3E8u;
label_2eb3e8:
    // 0x2eb3e8: 0xc095506  jal         func_255418
label_2eb3ec:
    if (ctx->pc == 0x2EB3ECu) {
        ctx->pc = 0x2EB3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB3E8u;
        // 0x2eb3ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB3F0u;
        goto label_2eb3f0;
    }
    ctx->pc = 0x2EB3E8u;
    SET_GPR_U32(ctx, 31, 0x2EB3F0u);
    ctx->pc = 0x2EB3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB3E8u;
    // 0x2eb3ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255418u, 0x2EB3E8u, 0x2EB3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB3F0u;
label_2eb3f0:
    // 0x2eb3f0: 0x544000e7  bnel        $v0, $zero, . + 4 + (0xE7 << 2)
label_2eb3f4:
    if (ctx->pc == 0x2EB3F4u) {
        ctx->pc = 0x2EB3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB3F0u;
        // 0x2eb3f4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB3F8u;
        goto label_2eb3f8;
    }
    ctx->pc = 0x2EB3F0u;
    {
        const bool branch_taken_0x2eb3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb3f0) {
            ctx->pc = 0x2EB3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB3F0u;
            // 0x2eb3f4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB3F8u;
label_2eb3f8:
    // 0x2eb3f8: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x2eb3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_2eb3fc:
    // 0x2eb3fc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2eb3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2eb400:
    // 0x2eb400: 0x506200e3  beql        $v1, $v0, . + 4 + (0xE3 << 2)
label_2eb404:
    if (ctx->pc == 0x2EB404u) {
        ctx->pc = 0x2EB404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB400u;
        // 0x2eb404: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB408u;
        goto label_2eb408;
    }
    ctx->pc = 0x2EB400u;
    {
        const bool branch_taken_0x2eb400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eb400) {
            ctx->pc = 0x2EB404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB400u;
            // 0x2eb404: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB408u;
label_2eb408:
    // 0x2eb408: 0x8e230338  lw          $v1, 0x338($s1)
    ctx->pc = 0x2eb408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_2eb40c:
    // 0x2eb40c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x2eb40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2eb410:
    // 0x2eb410: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x2eb410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
label_2eb414:
    // 0x2eb414: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2eb414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2eb418:
    // 0x2eb418: 0x544000dd  bnel        $v0, $zero, . + 4 + (0xDD << 2)
label_2eb41c:
    if (ctx->pc == 0x2EB41Cu) {
        ctx->pc = 0x2EB41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB418u;
        // 0x2eb41c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB420u;
        goto label_2eb420;
    }
    ctx->pc = 0x2EB418u;
    {
        const bool branch_taken_0x2eb418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb418) {
            ctx->pc = 0x2EB41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB418u;
            // 0x2eb41c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB420u;
label_2eb420:
    // 0x2eb420: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x2eb420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_2eb424:
    // 0x2eb424: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2eb424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2eb428:
    // 0x2eb428: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_2eb42c:
    if (ctx->pc == 0x2EB42Cu) {
        ctx->pc = 0x2EB42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB428u;
        // 0x2eb42c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB430u;
        goto label_2eb430;
    }
    ctx->pc = 0x2EB428u;
    {
        const bool branch_taken_0x2eb428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EB42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB428u;
        // 0x2eb42c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb428) {
            ctx->pc = 0x2EB44Cu;
            goto label_2eb44c;
        }
    }
    ctx->pc = 0x2EB430u;
label_2eb430:
    // 0x2eb430: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2eb430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2eb434:
    // 0x2eb434: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2eb438:
    if (ctx->pc == 0x2EB438u) {
        ctx->pc = 0x2EB438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB434u;
        // 0x2eb438: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB43Cu;
        goto label_2eb43c;
    }
    ctx->pc = 0x2EB434u;
    {
        const bool branch_taken_0x2eb434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EB438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB434u;
        // 0x2eb438: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb434) {
            ctx->pc = 0x2EB44Cu;
            goto label_2eb44c;
        }
    }
    ctx->pc = 0x2EB43Cu;
label_2eb43c:
    // 0x2eb43c: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_2eb440:
    if (ctx->pc == 0x2EB440u) {
        ctx->pc = 0x2EB440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB43Cu;
        // 0x2eb440: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB444u;
        goto label_2eb444;
    }
    ctx->pc = 0x2EB43Cu;
    {
        const bool branch_taken_0x2eb43c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eb43c) {
            ctx->pc = 0x2EB440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB43Cu;
            // 0x2eb440: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB450u;
            goto label_2eb450;
        }
    }
    ctx->pc = 0x2EB444u;
label_2eb444:
    // 0x2eb444: 0x14700002  bne         $v1, $s0, . + 4 + (0x2 << 2)
label_2eb448:
    if (ctx->pc == 0x2EB448u) {
        ctx->pc = 0x2EB44Cu;
        goto label_2eb44c;
    }
    ctx->pc = 0x2EB444u;
    {
        const bool branch_taken_0x2eb444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x2eb444) {
            ctx->pc = 0x2EB450u;
            goto label_2eb450;
        }
    }
    ctx->pc = 0x2EB44Cu;
label_2eb44c:
    // 0x2eb44c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2eb44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb450:
    // 0x2eb450: 0x1480fee3  bnez        $a0, . + 4 + (-0x11D << 2)
label_2eb454:
    if (ctx->pc == 0x2EB454u) {
        ctx->pc = 0x2EB454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB450u;
        // 0x2eb454: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB458u;
        goto label_2eb458;
    }
    ctx->pc = 0x2EB450u;
    {
        const bool branch_taken_0x2eb450 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB450u;
        // 0x2eb454: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb450) {
            ctx->pc = 0x2EAFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eafe0;
        }
    }
    ctx->pc = 0x2EB458u;
label_2eb458:
    // 0x2eb458: 0x8e220580  lw          $v0, 0x580($s1)
    ctx->pc = 0x2eb458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1408)));
label_2eb45c:
    // 0x2eb45c: 0x544000cc  bnel        $v0, $zero, . + 4 + (0xCC << 2)
label_2eb460:
    if (ctx->pc == 0x2EB460u) {
        ctx->pc = 0x2EB460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB45Cu;
        // 0x2eb460: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB464u;
        goto label_2eb464;
    }
    ctx->pc = 0x2EB45Cu;
    {
        const bool branch_taken_0x2eb45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb45c) {
            ctx->pc = 0x2EB460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB45Cu;
            // 0x2eb460: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB464u;
label_2eb464:
    // 0x2eb464: 0x8e220584  lw          $v0, 0x584($s1)
    ctx->pc = 0x2eb464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1412)));
label_2eb468:
    // 0x2eb468: 0x544000c9  bnel        $v0, $zero, . + 4 + (0xC9 << 2)
label_2eb46c:
    if (ctx->pc == 0x2EB46Cu) {
        ctx->pc = 0x2EB46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB468u;
        // 0x2eb46c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB470u;
        goto label_2eb470;
    }
    ctx->pc = 0x2EB468u;
    {
        const bool branch_taken_0x2eb468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb468) {
            ctx->pc = 0x2EB46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB468u;
            // 0x2eb46c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB470u;
label_2eb470:
    // 0x2eb470: 0x8e270334  lw          $a3, 0x334($s1)
    ctx->pc = 0x2eb470u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2eb474:
    // 0x2eb474: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2eb474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb478:
    // 0x2eb478: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2eb478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2eb47c:
    // 0x2eb47c: 0x8ce40150  lw          $a0, 0x150($a3)
    ctx->pc = 0x2eb47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 336)));
label_2eb480:
    // 0x2eb480: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_2eb484:
    if (ctx->pc == 0x2EB484u) {
        ctx->pc = 0x2EB484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB480u;
        // 0x2eb484: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB488u;
        goto label_2eb488;
    }
    ctx->pc = 0x2EB480u;
    {
        const bool branch_taken_0x2eb480 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EB484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB480u;
        // 0x2eb484: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb480) {
            ctx->pc = 0x2EB490u;
            goto label_2eb490;
        }
    }
    ctx->pc = 0x2EB488u;
label_2eb488:
    // 0x2eb488: 0x8cc200c0  lw          $v0, 0xC0($a2)
    ctx->pc = 0x2eb488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 192)));
label_2eb48c:
    // 0x2eb48c: 0x284206b8  slti        $v0, $v0, 0x6B8
    ctx->pc = 0x2eb48cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1720) ? 1 : 0);
label_2eb490:
    // 0x2eb490: 0x544000bf  bnel        $v0, $zero, . + 4 + (0xBF << 2)
label_2eb494:
    if (ctx->pc == 0x2EB494u) {
        ctx->pc = 0x2EB494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB490u;
        // 0x2eb494: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB498u;
        goto label_2eb498;
    }
    ctx->pc = 0x2EB490u;
    {
        const bool branch_taken_0x2eb490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb490) {
            ctx->pc = 0x2EB494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB490u;
            // 0x2eb494: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB498u;
label_2eb498:
    // 0x2eb498: 0x1083fed1  beq         $a0, $v1, . + 4 + (-0x12F << 2)
label_2eb49c:
    if (ctx->pc == 0x2EB49Cu) {
        ctx->pc = 0x2EB49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB498u;
        // 0x2eb49c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB4A0u;
        goto label_2eb4a0;
    }
    ctx->pc = 0x2EB498u;
    {
        const bool branch_taken_0x2eb498 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EB49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB498u;
        // 0x2eb49c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb498) {
            ctx->pc = 0x2EAFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eafe0;
        }
    }
    ctx->pc = 0x2EB4A0u;
label_2eb4a0:
    // 0x2eb4a0: 0x240304e5  addiu       $v1, $zero, 0x4E5
    ctx->pc = 0x2eb4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1253));
label_2eb4a4:
    // 0x2eb4a4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2eb4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2eb4a8:
    // 0x2eb4a8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2eb4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2eb4ac:
    // 0x2eb4ac: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
label_2eb4b0:
    if (ctx->pc == 0x2EB4B0u) {
        ctx->pc = 0x2EB4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB4ACu;
        // 0x2eb4b0: 0x240207eb  addiu       $v0, $zero, 0x7EB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2027));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB4B4u;
        goto label_2eb4b4;
    }
    ctx->pc = 0x2EB4ACu;
    {
        const bool branch_taken_0x2eb4ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EB4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB4ACu;
        // 0x2eb4b0: 0x240207eb  addiu       $v0, $zero, 0x7EB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2027));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb4ac) {
            ctx->pc = 0x2EB4C0u;
            goto label_2eb4c0;
        }
    }
    ctx->pc = 0x2EB4B4u;
label_2eb4b4:
    // 0x2eb4b4: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x2eb4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_2eb4b8:
    // 0x2eb4b8: 0x1082fec9  beq         $a0, $v0, . + 4 + (-0x137 << 2)
label_2eb4bc:
    if (ctx->pc == 0x2EB4BCu) {
        ctx->pc = 0x2EB4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB4B8u;
        // 0x2eb4bc: 0x240207eb  addiu       $v0, $zero, 0x7EB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2027));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB4C0u;
        goto label_2eb4c0;
    }
    ctx->pc = 0x2EB4B8u;
    {
        const bool branch_taken_0x2eb4b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EB4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB4B8u;
        // 0x2eb4bc: 0x240207eb  addiu       $v0, $zero, 0x7EB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2027));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb4b8) {
            ctx->pc = 0x2EAFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eafe0;
        }
    }
    ctx->pc = 0x2EB4C0u;
label_2eb4c0:
    // 0x2eb4c0: 0x14a20017  bne         $a1, $v0, . + 4 + (0x17 << 2)
label_2eb4c4:
    if (ctx->pc == 0x2EB4C4u) {
        ctx->pc = 0x2EB4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB4C0u;
        // 0x2eb4c4: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB4C8u;
        goto label_2eb4c8;
    }
    ctx->pc = 0x2EB4C0u;
    {
        const bool branch_taken_0x2eb4c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EB4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB4C0u;
        // 0x2eb4c4: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb4c0) {
            ctx->pc = 0x2EB520u;
            goto label_2eb520;
        }
    }
    ctx->pc = 0x2EB4C8u;
label_2eb4c8:
    // 0x2eb4c8: 0x8cc201e4  lw          $v0, 0x1E4($a2)
    ctx->pc = 0x2eb4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_2eb4cc:
    // 0x2eb4cc: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_2eb4d0:
    if (ctx->pc == 0x2EB4D0u) {
        ctx->pc = 0x2EB4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB4CCu;
        // 0x2eb4d0: 0xc4410014  lwc1        $f1, 0x14($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB4D4u;
        goto label_2eb4d4;
    }
    ctx->pc = 0x2EB4CCu;
    {
        const bool branch_taken_0x2eb4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb4cc) {
            ctx->pc = 0x2EB4D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB4CCu;
            // 0x2eb4d0: 0xc4410014  lwc1        $f1, 0x14($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB504u;
            goto label_2eb504;
        }
    }
    ctx->pc = 0x2EB4D4u;
label_2eb4d4:
    // 0x2eb4d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eb4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb4d8:
    // 0x2eb4d8: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x2eb4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_2eb4dc:
    // 0x2eb4dc: 0x0  nop
    ctx->pc = 0x2eb4dcu;
    // NOP
label_2eb4e0:
    // 0x2eb4e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2eb4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2eb4e4:
    // 0x2eb4e4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2eb4e8:
    if (ctx->pc == 0x2EB4E8u) {
        ctx->pc = 0x2EB4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB4E4u;
        // 0x2eb4e8: 0xc4410014  lwc1        $f1, 0x14($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB4ECu;
        goto label_2eb4ec;
    }
    ctx->pc = 0x2EB4E4u;
    {
        const bool branch_taken_0x2eb4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb4e4) {
            ctx->pc = 0x2EB4E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB4E4u;
            // 0x2eb4e8: 0xc4410014  lwc1        $f1, 0x14($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB504u;
            goto label_2eb504;
        }
    }
    ctx->pc = 0x2EB4ECu;
label_2eb4ec:
    // 0x2eb4ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2eb4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2eb4f0:
    // 0x2eb4f0: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2eb4f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_2eb4f4:
    // 0x2eb4f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2eb4f8:
    if (ctx->pc == 0x2EB4F8u) {
        ctx->pc = 0x2EB4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB4F4u;
        // 0x2eb4f8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB4FCu;
        goto label_2eb4fc;
    }
    ctx->pc = 0x2EB4F4u;
    {
        const bool branch_taken_0x2eb4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB4F4u;
        // 0x2eb4f8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb4f4) {
            ctx->pc = 0x2EB4E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb4e0;
        }
    }
    ctx->pc = 0x2EB4FCu;
label_2eb4fc:
    // 0x2eb4fc: 0x8ce201e8  lw          $v0, 0x1E8($a3)
    ctx->pc = 0x2eb4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_2eb500:
    // 0x2eb500: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2eb500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2eb504:
    // 0x2eb504: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2eb504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2eb508:
    // 0x2eb508: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2eb508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2eb50c:
    // 0x2eb50c: 0x0  nop
    ctx->pc = 0x2eb50cu;
    // NOP
label_2eb510:
    // 0x2eb510: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2eb510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2eb514:
    // 0x2eb514: 0x0  nop
    ctx->pc = 0x2eb514u;
    // NOP
label_2eb518:
    // 0x2eb518: 0x4503009d  bc1tl       . + 4 + (0x9D << 2)
label_2eb51c:
    if (ctx->pc == 0x2EB51Cu) {
        ctx->pc = 0x2EB51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB518u;
        // 0x2eb51c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB520u;
        goto label_2eb520;
    }
    ctx->pc = 0x2EB518u;
    {
        const bool branch_taken_0x2eb518 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eb518) {
            ctx->pc = 0x2EB51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB518u;
            // 0x2eb51c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB520u;
label_2eb520:
    // 0x2eb520: 0x8cc30150  lw          $v1, 0x150($a2)
    ctx->pc = 0x2eb520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
label_2eb524:
    // 0x2eb524: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2eb524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2eb528:
    // 0x2eb528: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2eb52c:
    if (ctx->pc == 0x2EB52Cu) {
        ctx->pc = 0x2EB52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB528u;
        // 0x2eb52c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB530u;
        goto label_2eb530;
    }
    ctx->pc = 0x2EB528u;
    {
        const bool branch_taken_0x2eb528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EB52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB528u;
        // 0x2eb52c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb528) {
            ctx->pc = 0x2EB53Cu;
            goto label_2eb53c;
        }
    }
    ctx->pc = 0x2EB530u;
label_2eb530:
    // 0x2eb530: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x2eb530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_2eb534:
    // 0x2eb534: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2eb538:
    if (ctx->pc == 0x2EB538u) {
        ctx->pc = 0x2EB53Cu;
        goto label_2eb53c;
    }
    ctx->pc = 0x2EB534u;
    {
        const bool branch_taken_0x2eb534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2eb534) {
            ctx->pc = 0x2EB540u;
            goto label_2eb540;
        }
    }
    ctx->pc = 0x2EB53Cu;
label_2eb53c:
    // 0x2eb53c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2eb53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb540:
    // 0x2eb540: 0x54800093  bnel        $a0, $zero, . + 4 + (0x93 << 2)
label_2eb544:
    if (ctx->pc == 0x2EB544u) {
        ctx->pc = 0x2EB544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB540u;
        // 0x2eb544: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB548u;
        goto label_2eb548;
    }
    ctx->pc = 0x2EB540u;
    {
        const bool branch_taken_0x2eb540 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb540) {
            ctx->pc = 0x2EB544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB540u;
            // 0x2eb544: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB548u;
label_2eb548:
    // 0x2eb548: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x2eb548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_2eb54c:
    // 0x2eb54c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2eb54cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_2eb550:
    // 0x2eb550: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eb550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2eb554:
    // 0x2eb554: 0x1043fea2  beq         $v0, $v1, . + 4 + (-0x15E << 2)
label_2eb558:
    if (ctx->pc == 0x2EB558u) {
        ctx->pc = 0x2EB558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB554u;
        // 0x2eb558: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB55Cu;
        goto label_2eb55c;
    }
    ctx->pc = 0x2EB554u;
    {
        const bool branch_taken_0x2eb554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EB558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB554u;
        // 0x2eb558: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb554) {
            ctx->pc = 0x2EAFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eafe0;
        }
    }
    ctx->pc = 0x2EB55Cu;
label_2eb55c:
    // 0x2eb55c: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x2eb55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
label_2eb560:
    // 0x2eb560: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2eb560u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2eb564:
    // 0x2eb564: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2eb564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2eb568:
    // 0x2eb568: 0xc4402454  lwc1        $f0, 0x2454($v0)
    ctx->pc = 0x2eb568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2eb56c:
    // 0x2eb56c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2eb56cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2eb570:
    // 0x2eb570: 0x0  nop
    ctx->pc = 0x2eb570u;
    // NOP
label_2eb574:
    // 0x2eb574: 0x45030086  bc1tl       . + 4 + (0x86 << 2)
label_2eb578:
    if (ctx->pc == 0x2EB578u) {
        ctx->pc = 0x2EB578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB574u;
        // 0x2eb578: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB57Cu;
        goto label_2eb57c;
    }
    ctx->pc = 0x2EB574u;
    {
        const bool branch_taken_0x2eb574 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eb574) {
            ctx->pc = 0x2EB578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB574u;
            // 0x2eb578: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB57Cu;
label_2eb57c:
    // 0x2eb57c: 0x8e22121c  lw          $v0, 0x121C($s1)
    ctx->pc = 0x2eb57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
label_2eb580:
    // 0x2eb580: 0x54400083  bnel        $v0, $zero, . + 4 + (0x83 << 2)
label_2eb584:
    if (ctx->pc == 0x2EB584u) {
        ctx->pc = 0x2EB584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB580u;
        // 0x2eb584: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB588u;
        goto label_2eb588;
    }
    ctx->pc = 0x2EB580u;
    {
        const bool branch_taken_0x2eb580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb580) {
            ctx->pc = 0x2EB584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB580u;
            // 0x2eb584: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB588u;
label_2eb588:
    // 0x2eb588: 0x922210ce  lbu         $v0, 0x10CE($s1)
    ctx->pc = 0x2eb588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4302)));
label_2eb58c:
    // 0x2eb58c: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
label_2eb590:
    if (ctx->pc == 0x2EB590u) {
        ctx->pc = 0x2EB594u;
        goto label_2eb594;
    }
    ctx->pc = 0x2EB58Cu;
    {
        const bool branch_taken_0x2eb58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb58c) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB594u;
label_2eb594:
    // 0x2eb594: 0x1000007e  b           . + 4 + (0x7E << 2)
label_2eb598:
    if (ctx->pc == 0x2EB598u) {
        ctx->pc = 0x2EB598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB594u;
        // 0x2eb598: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB59Cu;
        goto label_2eb59c;
    }
    ctx->pc = 0x2EB594u;
    {
        const bool branch_taken_0x2eb594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB594u;
        // 0x2eb598: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb594) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB59Cu;
label_2eb59c:
    // 0x2eb59c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2eb59cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb5a0:
    // 0x2eb5a0: 0x1000007b  b           . + 4 + (0x7B << 2)
label_2eb5a4:
    if (ctx->pc == 0x2EB5A4u) {
        ctx->pc = 0x2EB5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB5A0u;
        // 0x2eb5a4: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB5A8u;
        goto label_2eb5a8;
    }
    ctx->pc = 0x2EB5A0u;
    {
        const bool branch_taken_0x2eb5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB5A0u;
        // 0x2eb5a4: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb5a0) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB5A8u;
label_2eb5a8:
    // 0x2eb5a8: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x2eb5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2eb5ac:
    // 0x2eb5ac: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2eb5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2eb5b0:
    // 0x2eb5b0: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x2eb5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_2eb5b4:
    // 0x2eb5b4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_2eb5b8:
    if (ctx->pc == 0x2EB5B8u) {
        ctx->pc = 0x2EB5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB5B4u;
        // 0x2eb5b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB5BCu;
        goto label_2eb5bc;
    }
    ctx->pc = 0x2EB5B4u;
    {
        const bool branch_taken_0x2eb5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EB5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB5B4u;
        // 0x2eb5b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb5b4) {
            ctx->pc = 0x2EB5C8u;
            goto label_2eb5c8;
        }
    }
    ctx->pc = 0x2EB5BCu;
label_2eb5bc:
    // 0x2eb5bc: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x2eb5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_2eb5c0:
    // 0x2eb5c0: 0x2442f875  addiu       $v0, $v0, -0x78B
    ctx->pc = 0x2eb5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965365));
label_2eb5c4:
    // 0x2eb5c4: 0x2c500004  sltiu       $s0, $v0, 0x4
    ctx->pc = 0x2eb5c4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_2eb5c8:
    // 0x2eb5c8: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2eb5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2eb5cc:
    // 0x2eb5cc: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2eb5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_2eb5d0:
    // 0x2eb5d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eb5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2eb5d4:
    // 0x2eb5d4: 0x10430063  beq         $v0, $v1, . + 4 + (0x63 << 2)
label_2eb5d8:
    if (ctx->pc == 0x2EB5D8u) {
        ctx->pc = 0x2EB5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB5D4u;
        // 0x2eb5d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB5DCu;
        goto label_2eb5dc;
    }
    ctx->pc = 0x2EB5D4u;
    {
        const bool branch_taken_0x2eb5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EB5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB5D4u;
        // 0x2eb5d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb5d4) {
            ctx->pc = 0x2EB764u;
            goto label_2eb764;
        }
    }
    ctx->pc = 0x2EB5DCu;
label_2eb5dc:
    // 0x2eb5dc: 0xc0899bc  jal         func_2266F0
label_2eb5e0:
    if (ctx->pc == 0x2EB5E0u) {
        ctx->pc = 0x2EB5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB5DCu;
        // 0x2eb5e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB5E4u;
        goto label_2eb5e4;
    }
    ctx->pc = 0x2EB5DCu;
    SET_GPR_U32(ctx, 31, 0x2EB5E4u);
    ctx->pc = 0x2EB5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB5DCu;
    // 0x2eb5e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2EB5DCu, 0x2EB5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB5E4u;
label_2eb5e4:
    // 0x2eb5e4: 0xc097f76  jal         func_25FDD8
label_2eb5e8:
    if (ctx->pc == 0x2EB5E8u) {
        ctx->pc = 0x2EB5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB5E4u;
        // 0x2eb5e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB5ECu;
        goto label_2eb5ec;
    }
    ctx->pc = 0x2EB5E4u;
    SET_GPR_U32(ctx, 31, 0x2EB5ECu);
    ctx->pc = 0x2EB5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB5E4u;
    // 0x2eb5e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDD8u, 0x2EB5E4u, 0x2EB5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB5ECu;
label_2eb5ec:
    // 0x2eb5ec: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_2eb5f0:
    if (ctx->pc == 0x2EB5F0u) {
        ctx->pc = 0x2EB5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB5ECu;
        // 0x2eb5f0: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB5F4u;
        goto label_2eb5f4;
    }
    ctx->pc = 0x2EB5ECu;
    {
        const bool branch_taken_0x2eb5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb5ec) {
            ctx->pc = 0x2EB5F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB5ECu;
            // 0x2eb5f0: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB618u;
            goto label_2eb618;
        }
    }
    ctx->pc = 0x2EB5F4u;
label_2eb5f4:
    // 0x2eb5f4: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x2eb5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_2eb5f8:
    // 0x2eb5f8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2eb5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_2eb5fc:
    // 0x2eb5fc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2eb600:
    if (ctx->pc == 0x2EB600u) {
        ctx->pc = 0x2EB600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB5FCu;
        // 0x2eb600: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB604u;
        goto label_2eb604;
    }
    ctx->pc = 0x2EB5FCu;
    {
        const bool branch_taken_0x2eb5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb5fc) {
            ctx->pc = 0x2EB600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB5FCu;
            // 0x2eb600: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB618u;
            goto label_2eb618;
        }
    }
    ctx->pc = 0x2EB604u;
label_2eb604:
    // 0x2eb604: 0x8e2204f4  lw          $v0, 0x4F4($s1)
    ctx->pc = 0x2eb604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1268)));
label_2eb608:
    // 0x2eb608: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2eb608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_2eb60c:
    // 0x2eb60c: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
label_2eb610:
    if (ctx->pc == 0x2EB610u) {
        ctx->pc = 0x2EB610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB60Cu;
        // 0x2eb610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB614u;
        goto label_2eb614;
    }
    ctx->pc = 0x2EB60Cu;
    {
        const bool branch_taken_0x2eb60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB60Cu;
        // 0x2eb610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb60c) {
            ctx->pc = 0x2EB764u;
            goto label_2eb764;
        }
    }
    ctx->pc = 0x2EB614u;
label_2eb614:
    // 0x2eb614: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x2eb614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2eb618:
    // 0x2eb618: 0x8c640150  lw          $a0, 0x150($v1)
    ctx->pc = 0x2eb618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2eb61c:
    // 0x2eb61c: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x2eb61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_2eb620:
    // 0x2eb620: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x2eb620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2eb624:
    // 0x2eb624: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
label_2eb628:
    if (ctx->pc == 0x2EB628u) {
        ctx->pc = 0x2EB628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB624u;
        // 0x2eb628: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB62Cu;
        goto label_2eb62c;
    }
    ctx->pc = 0x2EB624u;
    {
        const bool branch_taken_0x2eb624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB624u;
        // 0x2eb628: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb624) {
            ctx->pc = 0x2EB760u;
            goto label_2eb760;
        }
    }
    ctx->pc = 0x2EB62Cu;
label_2eb62c:
    // 0x2eb62c: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2eb62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2eb630:
    // 0x2eb630: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2eb630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_2eb634:
    // 0x2eb634: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eb634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2eb638:
    // 0x2eb638: 0x10430049  beq         $v0, $v1, . + 4 + (0x49 << 2)
label_2eb63c:
    if (ctx->pc == 0x2EB63Cu) {
        ctx->pc = 0x2EB63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB638u;
        // 0x2eb63c: 0x2482ffd9  addiu       $v0, $a0, -0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967257));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB640u;
        goto label_2eb640;
    }
    ctx->pc = 0x2EB638u;
    {
        const bool branch_taken_0x2eb638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EB63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB638u;
        // 0x2eb63c: 0x2482ffd9  addiu       $v0, $a0, -0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb638) {
            ctx->pc = 0x2EB760u;
            goto label_2eb760;
        }
    }
    ctx->pc = 0x2EB640u;
label_2eb640:
    // 0x2eb640: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x2eb640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_2eb644:
    // 0x2eb644: 0x54400047  bnel        $v0, $zero, . + 4 + (0x47 << 2)
label_2eb648:
    if (ctx->pc == 0x2EB648u) {
        ctx->pc = 0x2EB648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB644u;
        // 0x2eb648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB64Cu;
        goto label_2eb64c;
    }
    ctx->pc = 0x2EB644u;
    {
        const bool branch_taken_0x2eb644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb644) {
            ctx->pc = 0x2EB648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB644u;
            // 0x2eb648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB764u;
            goto label_2eb764;
        }
    }
    ctx->pc = 0x2EB64Cu;
label_2eb64c:
    // 0x2eb64c: 0x2482ffed  addiu       $v0, $a0, -0x13
    ctx->pc = 0x2eb64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967277));
label_2eb650:
    // 0x2eb650: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2eb650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2eb654:
    // 0x2eb654: 0x54400043  bnel        $v0, $zero, . + 4 + (0x43 << 2)
label_2eb658:
    if (ctx->pc == 0x2EB658u) {
        ctx->pc = 0x2EB658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB654u;
        // 0x2eb658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB65Cu;
        goto label_2eb65c;
    }
    ctx->pc = 0x2EB654u;
    {
        const bool branch_taken_0x2eb654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb654) {
            ctx->pc = 0x2EB658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB654u;
            // 0x2eb658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB764u;
            goto label_2eb764;
        }
    }
    ctx->pc = 0x2EB65Cu;
label_2eb65c:
    // 0x2eb65c: 0x2482ffea  addiu       $v0, $a0, -0x16
    ctx->pc = 0x2eb65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967274));
label_2eb660:
    // 0x2eb660: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2eb660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2eb664:
    // 0x2eb664: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2eb668:
    if (ctx->pc == 0x2EB668u) {
        ctx->pc = 0x2EB668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB664u;
        // 0x2eb668: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB66Cu;
        goto label_2eb66c;
    }
    ctx->pc = 0x2EB664u;
    {
        const bool branch_taken_0x2eb664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB664u;
        // 0x2eb668: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb664) {
            ctx->pc = 0x2EB674u;
            goto label_2eb674;
        }
    }
    ctx->pc = 0x2EB66Cu;
label_2eb66c:
    // 0x2eb66c: 0x38820018  xori        $v0, $a0, 0x18
    ctx->pc = 0x2eb66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)24);
label_2eb670:
    // 0x2eb670: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2eb670u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2eb674:
    // 0x2eb674: 0x5460003b  bnel        $v1, $zero, . + 4 + (0x3B << 2)
label_2eb678:
    if (ctx->pc == 0x2EB678u) {
        ctx->pc = 0x2EB678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB674u;
        // 0x2eb678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB67Cu;
        goto label_2eb67c;
    }
    ctx->pc = 0x2EB674u;
    {
        const bool branch_taken_0x2eb674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb674) {
            ctx->pc = 0x2EB678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB674u;
            // 0x2eb678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB764u;
            goto label_2eb764;
        }
    }
    ctx->pc = 0x2EB67Cu;
label_2eb67c:
    // 0x2eb67c: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x2eb67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_2eb680:
    // 0x2eb680: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2eb680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2eb684:
    // 0x2eb684: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
label_2eb688:
    if (ctx->pc == 0x2EB688u) {
        ctx->pc = 0x2EB688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB684u;
        // 0x2eb688: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB68Cu;
        goto label_2eb68c;
    }
    ctx->pc = 0x2EB684u;
    {
        const bool branch_taken_0x2eb684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EB688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB684u;
        // 0x2eb688: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb684) {
            ctx->pc = 0x2EB760u;
            goto label_2eb760;
        }
    }
    ctx->pc = 0x2EB68Cu;
label_2eb68c:
    // 0x2eb68c: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
label_2eb690:
    if (ctx->pc == 0x2EB690u) {
        ctx->pc = 0x2EB690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB68Cu;
        // 0x2eb690: 0x2482ffe3  addiu       $v0, $a0, -0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967267));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB694u;
        goto label_2eb694;
    }
    ctx->pc = 0x2EB68Cu;
    {
        const bool branch_taken_0x2eb68c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EB690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB68Cu;
        // 0x2eb690: 0x2482ffe3  addiu       $v0, $a0, -0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967267));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb68c) {
            ctx->pc = 0x2EB760u;
            goto label_2eb760;
        }
    }
    ctx->pc = 0x2EB694u;
label_2eb694:
    // 0x2eb694: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2eb694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2eb698:
    // 0x2eb698: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
label_2eb69c:
    if (ctx->pc == 0x2EB69Cu) {
        ctx->pc = 0x2EB69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB698u;
        // 0x2eb69c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB6A0u;
        goto label_2eb6a0;
    }
    ctx->pc = 0x2EB698u;
    {
        const bool branch_taken_0x2eb698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb698) {
            ctx->pc = 0x2EB69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB698u;
            // 0x2eb69c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB764u;
            goto label_2eb764;
        }
    }
    ctx->pc = 0x2EB6A0u;
label_2eb6a0:
    // 0x2eb6a0: 0x8e220550  lw          $v0, 0x550($s1)
    ctx->pc = 0x2eb6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_2eb6a4:
    // 0x2eb6a4: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
label_2eb6a8:
    if (ctx->pc == 0x2EB6A8u) {
        ctx->pc = 0x2EB6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6A4u;
        // 0x2eb6a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB6ACu;
        goto label_2eb6ac;
    }
    ctx->pc = 0x2EB6A4u;
    {
        const bool branch_taken_0x2eb6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb6a4) {
            ctx->pc = 0x2EB6A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB6A4u;
            // 0x2eb6a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB764u;
            goto label_2eb764;
        }
    }
    ctx->pc = 0x2EB6ACu;
label_2eb6ac:
    // 0x2eb6ac: 0x8e220554  lw          $v0, 0x554($s1)
    ctx->pc = 0x2eb6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1364)));
label_2eb6b0:
    // 0x2eb6b0: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
label_2eb6b4:
    if (ctx->pc == 0x2EB6B4u) {
        ctx->pc = 0x2EB6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6B0u;
        // 0x2eb6b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB6B8u;
        goto label_2eb6b8;
    }
    ctx->pc = 0x2EB6B0u;
    {
        const bool branch_taken_0x2eb6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb6b0) {
            ctx->pc = 0x2EB6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB6B0u;
            // 0x2eb6b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB764u;
            goto label_2eb764;
        }
    }
    ctx->pc = 0x2EB6B8u;
label_2eb6b8:
    // 0x2eb6b8: 0x2482ffbd  addiu       $v0, $a0, -0x43
    ctx->pc = 0x2eb6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967229));
label_2eb6bc:
    // 0x2eb6bc: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2eb6bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2eb6c0:
    // 0x2eb6c0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2eb6c4:
    if (ctx->pc == 0x2EB6C4u) {
        ctx->pc = 0x2EB6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6C0u;
        // 0x2eb6c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB6C8u;
        goto label_2eb6c8;
    }
    ctx->pc = 0x2EB6C0u;
    {
        const bool branch_taken_0x2eb6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6C0u;
        // 0x2eb6c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb6c0) {
            ctx->pc = 0x2EB6DCu;
            goto label_2eb6dc;
        }
    }
    ctx->pc = 0x2EB6C8u;
label_2eb6c8:
    // 0x2eb6c8: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x2eb6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_2eb6cc:
    // 0x2eb6cc: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_2eb6d0:
    if (ctx->pc == 0x2EB6D0u) {
        ctx->pc = 0x2EB6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6CCu;
        // 0x2eb6d0: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB6D4u;
        goto label_2eb6d4;
    }
    ctx->pc = 0x2EB6CCu;
    {
        const bool branch_taken_0x2eb6cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EB6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6CCu;
        // 0x2eb6d0: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb6cc) {
            ctx->pc = 0x2EB6DCu;
            goto label_2eb6dc;
        }
    }
    ctx->pc = 0x2EB6D4u;
label_2eb6d4:
    // 0x2eb6d4: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
label_2eb6d8:
    if (ctx->pc == 0x2EB6D8u) {
        ctx->pc = 0x2EB6DCu;
        goto label_2eb6dc;
    }
    ctx->pc = 0x2EB6D4u;
    {
        const bool branch_taken_0x2eb6d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2eb6d4) {
            ctx->pc = 0x2EB6E0u;
            goto label_2eb6e0;
        }
    }
    ctx->pc = 0x2EB6DCu;
label_2eb6dc:
    // 0x2eb6dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2eb6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb6e0:
    // 0x2eb6e0: 0x14a00020  bnez        $a1, . + 4 + (0x20 << 2)
label_2eb6e4:
    if (ctx->pc == 0x2EB6E4u) {
        ctx->pc = 0x2EB6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6E0u;
        // 0x2eb6e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB6E8u;
        goto label_2eb6e8;
    }
    ctx->pc = 0x2EB6E0u;
    {
        const bool branch_taken_0x2eb6e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6E0u;
        // 0x2eb6e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb6e0) {
            ctx->pc = 0x2EB764u;
            goto label_2eb764;
        }
    }
    ctx->pc = 0x2EB6E8u;
label_2eb6e8:
    // 0x2eb6e8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2eb6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2eb6ec:
    // 0x2eb6ec: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_2eb6f0:
    if (ctx->pc == 0x2EB6F0u) {
        ctx->pc = 0x2EB6F4u;
        goto label_2eb6f4;
    }
    ctx->pc = 0x2EB6ECu;
    {
        const bool branch_taken_0x2eb6ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eb6ec) {
            ctx->pc = 0x2EB764u;
            goto label_2eb764;
        }
    }
    ctx->pc = 0x2EB6F4u;
label_2eb6f4:
    // 0x2eb6f4: 0x8e2205ec  lw          $v0, 0x5EC($s1)
    ctx->pc = 0x2eb6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1516)));
label_2eb6f8:
    // 0x2eb6f8: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_2eb6fc:
    if (ctx->pc == 0x2EB6FCu) {
        ctx->pc = 0x2EB700u;
        goto label_2eb700;
    }
    ctx->pc = 0x2EB6F8u;
    {
        const bool branch_taken_0x2eb6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb6f8) {
            ctx->pc = 0x2EB764u;
            goto label_2eb764;
        }
    }
    ctx->pc = 0x2EB700u;
label_2eb700:
    // 0x2eb700: 0x8cc20150  lw          $v0, 0x150($a2)
    ctx->pc = 0x2eb700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
label_2eb704:
    // 0x2eb704: 0x2442ffbf  addiu       $v0, $v0, -0x41
    ctx->pc = 0x2eb704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967231));
label_2eb708:
    // 0x2eb708: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2eb708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2eb70c:
    // 0x2eb70c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_2eb710:
    if (ctx->pc == 0x2EB710u) {
        ctx->pc = 0x2EB710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB70Cu;
        // 0x2eb710: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB714u;
        goto label_2eb714;
    }
    ctx->pc = 0x2EB70Cu;
    {
        const bool branch_taken_0x2eb70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB70Cu;
        // 0x2eb710: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb70c) {
            ctx->pc = 0x2EB764u;
            goto label_2eb764;
        }
    }
    ctx->pc = 0x2EB714u;
label_2eb714:
    // 0x2eb714: 0x3c01bcf5  lui         $at, 0xBCF5
    ctx->pc = 0x2eb714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48373 << 16));
label_2eb718:
    // 0x2eb718: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2eb718u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_2eb71c:
    // 0x2eb71c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2eb71cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2eb720:
    // 0x2eb720: 0xc4402454  lwc1        $f0, 0x2454($v0)
    ctx->pc = 0x2eb720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2eb724:
    // 0x2eb724: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2eb724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2eb728:
    // 0x2eb728: 0x0  nop
    ctx->pc = 0x2eb728u;
    // NOP
label_2eb72c:
    // 0x2eb72c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_2eb730:
    if (ctx->pc == 0x2EB730u) {
        ctx->pc = 0x2EB734u;
        goto label_2eb734;
    }
    ctx->pc = 0x2EB72Cu;
    {
        const bool branch_taken_0x2eb72c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eb72c) {
            ctx->pc = 0x2EB764u;
            goto label_2eb764;
        }
    }
    ctx->pc = 0x2EB734u;
label_2eb734:
    // 0x2eb734: 0x8e220294  lw          $v0, 0x294($s1)
    ctx->pc = 0x2eb734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 660)));
label_2eb738:
    // 0x2eb738: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2eb73c:
    if (ctx->pc == 0x2EB73Cu) {
        ctx->pc = 0x2EB73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB738u;
        // 0x2eb73c: 0x2402078f  addiu       $v0, $zero, 0x78F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1935));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB740u;
        goto label_2eb740;
    }
    ctx->pc = 0x2EB738u;
    {
        const bool branch_taken_0x2eb738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB738u;
        // 0x2eb73c: 0x2402078f  addiu       $v0, $zero, 0x78F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1935));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb738) {
            ctx->pc = 0x2EB764u;
            goto label_2eb764;
        }
    }
    ctx->pc = 0x2EB740u;
label_2eb740:
    // 0x2eb740: 0x8cc300c0  lw          $v1, 0xC0($a2)
    ctx->pc = 0x2eb740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 192)));
label_2eb744:
    // 0x2eb744: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2eb748:
    if (ctx->pc == 0x2EB748u) {
        ctx->pc = 0x2EB74Cu;
        goto label_2eb74c;
    }
    ctx->pc = 0x2EB744u;
    {
        const bool branch_taken_0x2eb744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eb744) {
            ctx->pc = 0x2EB764u;
            goto label_2eb764;
        }
    }
    ctx->pc = 0x2EB74Cu;
label_2eb74c:
    // 0x2eb74c: 0x8e22121c  lw          $v0, 0x121C($s1)
    ctx->pc = 0x2eb74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
label_2eb750:
    // 0x2eb750: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2eb754:
    if (ctx->pc == 0x2EB754u) {
        ctx->pc = 0x2EB758u;
        goto label_2eb758;
    }
    ctx->pc = 0x2EB750u;
    {
        const bool branch_taken_0x2eb750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb750) {
            ctx->pc = 0x2EB764u;
            goto label_2eb764;
        }
    }
    ctx->pc = 0x2EB758u;
label_2eb758:
    // 0x2eb758: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_2eb75c:
    if (ctx->pc == 0x2EB75Cu) {
        ctx->pc = 0x2EB75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB758u;
        // 0x2eb75c: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB760u;
        goto label_2eb760;
    }
    ctx->pc = 0x2EB758u;
    {
        const bool branch_taken_0x2eb758 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB758u;
        // 0x2eb75c: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb758) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB760u;
label_2eb760:
    // 0x2eb760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eb760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2eb764:
    // 0x2eb764: 0xc08f684  jal         func_23DA10
label_2eb768:
    if (ctx->pc == 0x2EB768u) {
        ctx->pc = 0x2EB768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB764u;
        // 0x2eb768: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB76Cu;
        goto label_2eb76c;
    }
    ctx->pc = 0x2EB764u;
    SET_GPR_U32(ctx, 31, 0x2EB76Cu);
    ctx->pc = 0x2EB768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB764u;
    // 0x2eb768: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA10u, 0x2EB764u, 0x2EB76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB76Cu;
label_2eb76c:
    // 0x2eb76c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2eb770:
    if (ctx->pc == 0x2EB770u) {
        ctx->pc = 0x2EB774u;
        goto label_2eb774;
    }
    ctx->pc = 0x2EB76Cu;
    {
        const bool branch_taken_0x2eb76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb76c) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB774u;
label_2eb774:
    // 0x2eb774: 0xc08f672  jal         func_23D9C8
label_2eb778:
    if (ctx->pc == 0x2EB778u) {
        ctx->pc = 0x2EB778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB774u;
        // 0x2eb778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB77Cu;
        goto label_2eb77c;
    }
    ctx->pc = 0x2EB774u;
    SET_GPR_U32(ctx, 31, 0x2EB77Cu);
    ctx->pc = 0x2EB778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB774u;
    // 0x2eb778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x2EB774u, 0x2EB77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB77Cu;
label_2eb77c:
    // 0x2eb77c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2eb780:
    if (ctx->pc == 0x2EB780u) {
        ctx->pc = 0x2EB784u;
        goto label_2eb784;
    }
    ctx->pc = 0x2EB77Cu;
    {
        const bool branch_taken_0x2eb77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb77c) {
            ctx->pc = 0x2EB790u;
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB784u;
label_2eb784:
    // 0x2eb784: 0x8e220418  lw          $v0, 0x418($s1)
    ctx->pc = 0x2eb784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_2eb788:
    // 0x2eb788: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x2eb788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_2eb78c:
    // 0x2eb78c: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x2eb78cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2eb790:
    // 0x2eb790: 0x5260000d  beql        $s3, $zero, . + 4 + (0xD << 2)
label_2eb794:
    if (ctx->pc == 0x2EB794u) {
        ctx->pc = 0x2EB794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB790u;
        // 0x2eb794: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB798u;
        goto label_2eb798;
    }
    ctx->pc = 0x2EB790u;
    {
        const bool branch_taken_0x2eb790 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb790) {
            ctx->pc = 0x2EB794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB790u;
            // 0x2eb794: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB7C8u;
            goto label_2eb7c8;
        }
    }
    ctx->pc = 0x2EB798u;
label_2eb798:
    // 0x2eb798: 0x3d71821  addu        $v1, $fp, $s7
    ctx->pc = 0x2eb798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
label_2eb79c:
    // 0x2eb79c: 0x2682fff9  addiu       $v0, $s4, -0x7
    ctx->pc = 0x2eb79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967289));
label_2eb7a0:
    // 0x2eb7a0: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x2eb7a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_2eb7a4:
    // 0x2eb7a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2eb7a8:
    if (ctx->pc == 0x2EB7A8u) {
        ctx->pc = 0x2EB7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7A4u;
        // 0x2eb7a8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB7ACu;
        goto label_2eb7ac;
    }
    ctx->pc = 0x2EB7A4u;
    {
        const bool branch_taken_0x2eb7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7A4u;
        // 0x2eb7a8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb7a4) {
            ctx->pc = 0x2EB7B4u;
            goto label_2eb7b4;
        }
    }
    ctx->pc = 0x2EB7ACu;
label_2eb7ac:
    // 0x2eb7ac: 0xae201388  sw          $zero, 0x1388($s1)
    ctx->pc = 0x2eb7acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5000), GPR_U32(ctx, 0));
label_2eb7b0:
    // 0x2eb7b0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2eb7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2eb7b4:
    // 0x2eb7b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2eb7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2eb7b8:
    // 0x2eb7b8: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2eb7b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2eb7bc:
    // 0x2eb7bc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2eb7c0:
    if (ctx->pc == 0x2EB7C0u) {
        ctx->pc = 0x2EB7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7BCu;
        // 0x2eb7c0: 0xae200550  sw          $zero, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB7C4u;
        goto label_2eb7c4;
    }
    ctx->pc = 0x2EB7BCu;
    {
        const bool branch_taken_0x2eb7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb7bc) {
            ctx->pc = 0x2EB7C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB7BCu;
            // 0x2eb7c0: 0xae200550  sw          $zero, 0x550($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB7C4u;
            goto label_2eb7c4;
        }
    }
    ctx->pc = 0x2EB7C4u;
label_2eb7c4:
    // 0x2eb7c4: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x2eb7c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eb7c8:
    // 0x2eb7c8: 0x2a820035  slti        $v0, $s4, 0x35
    ctx->pc = 0x2eb7c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)53) ? 1 : 0);
label_2eb7cc:
    // 0x2eb7cc: 0x1440fa7a  bnez        $v0, . + 4 + (-0x586 << 2)
label_2eb7d0:
    if (ctx->pc == 0x2EB7D0u) {
        ctx->pc = 0x2EB7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7CCu;
        // 0x2eb7d0: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB7D4u;
        goto label_2eb7d4;
    }
    ctx->pc = 0x2EB7CCu;
    {
        const bool branch_taken_0x2eb7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7CCu;
        // 0x2eb7d0: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb7cc) {
            ctx->pc = 0x2EA1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ea1b8;
        }
    }
    ctx->pc = 0x2EB7D4u;
label_2eb7d4:
    // 0x2eb7d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2eb7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2eb7d8:
    // 0x2eb7d8: 0x50800027  beql        $a0, $zero, . + 4 + (0x27 << 2)
label_2eb7dc:
    if (ctx->pc == 0x2EB7DCu) {
        ctx->pc = 0x2EB7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7D8u;
        // 0x2eb7dc: 0x8e230580  lw          $v1, 0x580($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB7E0u;
        goto label_2eb7e0;
    }
    ctx->pc = 0x2EB7D8u;
    {
        const bool branch_taken_0x2eb7d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb7d8) {
            ctx->pc = 0x2EB7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB7D8u;
            // 0x2eb7dc: 0x8e230580  lw          $v1, 0x580($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB878u;
            goto label_2eb878;
        }
    }
    ctx->pc = 0x2EB7E0u;
label_2eb7e0:
    // 0x2eb7e0: 0xc08da92  jal         func_236A48
label_2eb7e4:
    if (ctx->pc == 0x2EB7E4u) {
        ctx->pc = 0x2EB7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7E0u;
        // 0x2eb7e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB7E8u;
        goto label_2eb7e8;
    }
    ctx->pc = 0x2EB7E0u;
    SET_GPR_U32(ctx, 31, 0x2EB7E8u);
    ctx->pc = 0x2EB7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB7E0u;
    // 0x2eb7e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x2EB7E0u, 0x2EB7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB7E8u;
label_2eb7e8:
    // 0x2eb7e8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2eb7ec:
    if (ctx->pc == 0x2EB7ECu) {
        ctx->pc = 0x2EB7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7E8u;
        // 0x2eb7ec: 0xae201388  sw          $zero, 0x1388($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5000), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB7F0u;
        goto label_2eb7f0;
    }
    ctx->pc = 0x2EB7E8u;
    {
        const bool branch_taken_0x2eb7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb7e8) {
            ctx->pc = 0x2EB7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB7E8u;
            // 0x2eb7ec: 0xae201388  sw          $zero, 0x1388($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 5000), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB810u;
            goto label_2eb810;
        }
    }
    ctx->pc = 0x2EB7F0u;
label_2eb7f0:
    // 0x2eb7f0: 0xc06c268  jal         func_1B09A0
label_2eb7f4:
    if (ctx->pc == 0x2EB7F4u) {
        ctx->pc = 0x2EB7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7F0u;
        // 0x2eb7f4: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB7F8u;
        goto label_2eb7f8;
    }
    ctx->pc = 0x2EB7F0u;
    SET_GPR_U32(ctx, 31, 0x2EB7F8u);
    ctx->pc = 0x2EB7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB7F0u;
    // 0x2eb7f4: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B09A0u, 0x2EB7F0u, 0x2EB7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB7F8u;
label_2eb7f8:
    // 0x2eb7f8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2eb7fc:
    if (ctx->pc == 0x2EB7FCu) {
        ctx->pc = 0x2EB7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7F8u;
        // 0x2eb7fc: 0x8e230338  lw          $v1, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB800u;
        goto label_2eb800;
    }
    ctx->pc = 0x2EB7F8u;
    {
        const bool branch_taken_0x2eb7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb7f8) {
            ctx->pc = 0x2EB7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB7F8u;
            // 0x2eb7fc: 0x8e230338  lw          $v1, 0x338($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB81Cu;
            goto label_2eb81c;
        }
    }
    ctx->pc = 0x2EB800u;
label_2eb800:
    // 0x2eb800: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x2eb800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2eb804:
    // 0x2eb804: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2eb808:
    if (ctx->pc == 0x2EB808u) {
        ctx->pc = 0x2EB808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB804u;
        // 0x2eb808: 0x8e230338  lw          $v1, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB80Cu;
        goto label_2eb80c;
    }
    ctx->pc = 0x2EB804u;
    {
        const bool branch_taken_0x2eb804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb804) {
            ctx->pc = 0x2EB808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB804u;
            // 0x2eb808: 0x8e230338  lw          $v1, 0x338($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB81Cu;
            goto label_2eb81c;
        }
    }
    ctx->pc = 0x2EB80Cu;
label_2eb80c:
    // 0x2eb80c: 0xae201388  sw          $zero, 0x1388($s1)
    ctx->pc = 0x2eb80cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5000), GPR_U32(ctx, 0));
label_2eb810:
    // 0x2eb810: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x2eb810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_2eb814:
    // 0x2eb814: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2eb814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_2eb818:
    // 0x2eb818: 0x8e230338  lw          $v1, 0x338($s1)
    ctx->pc = 0x2eb818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_2eb81c:
    // 0x2eb81c: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x2eb81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_2eb820:
    // 0x2eb820: 0x2442ffeb  addiu       $v0, $v0, -0x15
    ctx->pc = 0x2eb820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967275));
label_2eb824:
    // 0x2eb824: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2eb824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2eb828:
    // 0x2eb828: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2eb82c:
    if (ctx->pc == 0x2EB82Cu) {
        ctx->pc = 0x2EB82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB828u;
        // 0x2eb82c: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB830u;
        goto label_2eb830;
    }
    ctx->pc = 0x2EB828u;
    {
        const bool branch_taken_0x2eb828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB828u;
        // 0x2eb82c: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb828) {
            ctx->pc = 0x2EB83Cu;
            goto label_2eb83c;
        }
    }
    ctx->pc = 0x2EB830u;
label_2eb830:
    // 0x2eb830: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x2eb830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_2eb834:
    // 0x2eb834: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2eb834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_2eb838:
    // 0x2eb838: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2eb838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2eb83c:
    // 0x2eb83c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_2eb840:
    if (ctx->pc == 0x2EB840u) {
        ctx->pc = 0x2EB840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB83Cu;
        // 0x2eb840: 0x8e2311c0  lw          $v1, 0x11C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB844u;
        goto label_2eb844;
    }
    ctx->pc = 0x2EB83Cu;
    {
        const bool branch_taken_0x2eb83c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb83c) {
            ctx->pc = 0x2EB840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB83Cu;
            // 0x2eb840: 0x8e2311c0  lw          $v1, 0x11C0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB854u;
            goto label_2eb854;
        }
    }
    ctx->pc = 0x2EB844u;
label_2eb844:
    // 0x2eb844: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2eb844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2eb848:
    // 0x2eb848: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2eb84c:
    if (ctx->pc == 0x2EB84Cu) {
        ctx->pc = 0x2EB84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB848u;
        // 0x2eb84c: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB850u;
        goto label_2eb850;
    }
    ctx->pc = 0x2EB848u;
    {
        const bool branch_taken_0x2eb848 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB848u;
        // 0x2eb84c: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb848) {
            ctx->pc = 0x2EB868u;
            goto label_2eb868;
        }
    }
    ctx->pc = 0x2EB850u;
label_2eb850:
    // 0x2eb850: 0x8e2311c0  lw          $v1, 0x11C0($s1)
    ctx->pc = 0x2eb850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2eb854:
    // 0x2eb854: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2eb854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_2eb858:
    // 0x2eb858: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2eb858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2eb85c:
    // 0x2eb85c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2eb85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2eb860:
    // 0x2eb860: 0xae2311c0  sw          $v1, 0x11C0($s1)
    ctx->pc = 0x2eb860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 3));
label_2eb864:
    // 0x2eb864: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2eb864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2eb868:
    // 0x2eb868: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x2eb868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
label_2eb86c:
    // 0x2eb86c: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x2eb86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2eb870:
    // 0x2eb870: 0xae230554  sw          $v1, 0x554($s1)
    ctx->pc = 0x2eb870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1364), GPR_U32(ctx, 3));
label_2eb874:
    // 0x2eb874: 0x8e230580  lw          $v1, 0x580($s1)
    ctx->pc = 0x2eb874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1408)));
label_2eb878:
    // 0x2eb878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eb878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb87c:
    // 0x2eb87c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_2eb880:
    if (ctx->pc == 0x2EB880u) {
        ctx->pc = 0x2EB880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB87Cu;
        // 0x2eb880: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB884u;
        goto label_2eb884;
    }
    ctx->pc = 0x2EB87Cu;
    {
        const bool branch_taken_0x2eb87c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EB880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB87Cu;
        // 0x2eb880: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb87c) {
            ctx->pc = 0x2EB89Cu;
            goto label_2eb89c;
        }
    }
    ctx->pc = 0x2EB884u;
label_2eb884:
    // 0x2eb884: 0x8e220584  lw          $v0, 0x584($s1)
    ctx->pc = 0x2eb884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1412)));
label_2eb888:
    // 0x2eb888: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_2eb88c:
    if (ctx->pc == 0x2EB88Cu) {
        ctx->pc = 0x2EB890u;
        goto label_2eb890;
    }
    ctx->pc = 0x2EB888u;
    {
        const bool branch_taken_0x2eb888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2eb888) {
            ctx->pc = 0x2EB89Cu;
            goto label_2eb89c;
        }
    }
    ctx->pc = 0x2EB890u;
label_2eb890:
    // 0x2eb890: 0xae200580  sw          $zero, 0x580($s1)
    ctx->pc = 0x2eb890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1408), GPR_U32(ctx, 0));
label_2eb894:
    // 0x2eb894: 0xae200584  sw          $zero, 0x584($s1)
    ctx->pc = 0x2eb894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1412), GPR_U32(ctx, 0));
label_2eb898:
    // 0x2eb898: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2eb898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2eb89c:
    // 0x2eb89c: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_2eb8a0:
    if (ctx->pc == 0x2EB8A0u) {
        ctx->pc = 0x2EB8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB89Cu;
        // 0x2eb8a0: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB8A4u;
        goto label_2eb8a4;
    }
    ctx->pc = 0x2EB89Cu;
    {
        const bool branch_taken_0x2eb89c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB89Cu;
        // 0x2eb8a0: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb89c) {
            ctx->pc = 0x2EB8BCu;
            goto label_2eb8bc;
        }
    }
    ctx->pc = 0x2EB8A4u;
label_2eb8a4:
    // 0x2eb8a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2eb8a8:
    if (ctx->pc == 0x2EB8A8u) {
        ctx->pc = 0x2EB8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8A4u;
        // 0x2eb8a8: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB8ACu;
        goto label_2eb8ac;
    }
    ctx->pc = 0x2EB8A4u;
    {
        const bool branch_taken_0x2eb8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8A4u;
        // 0x2eb8a8: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb8a4) {
            ctx->pc = 0x2EB8BCu;
            goto label_2eb8bc;
        }
    }
    ctx->pc = 0x2EB8ACu;
label_2eb8ac:
    // 0x2eb8ac: 0x8e2311c0  lw          $v1, 0x11C0($s1)
    ctx->pc = 0x2eb8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2eb8b0:
    // 0x2eb8b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2eb8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2eb8b4:
    // 0x2eb8b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2eb8b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2eb8b8:
    // 0x2eb8b8: 0xae2311c0  sw          $v1, 0x11C0($s1)
    ctx->pc = 0x2eb8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 3));
label_2eb8bc:
    // 0x2eb8bc: 0xc0bf868  jal         func_2FE1A0
label_2eb8c0:
    if (ctx->pc == 0x2EB8C0u) {
        ctx->pc = 0x2EB8C4u;
        goto label_2eb8c4;
    }
    ctx->pc = 0x2EB8BCu;
    SET_GPR_U32(ctx, 31, 0x2EB8C4u);
    ctx->pc = 0x2FE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1A0u, 0x2EB8BCu, 0x2EB8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB8C4u;
label_2eb8c4:
    // 0x2eb8c4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2eb8c8:
    if (ctx->pc == 0x2EB8C8u) {
        ctx->pc = 0x2EB8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8C4u;
        // 0x2eb8c8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB8CCu;
        goto label_2eb8cc;
    }
    ctx->pc = 0x2EB8C4u;
    {
        const bool branch_taken_0x2eb8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8C4u;
        // 0x2eb8c8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb8c4) {
            ctx->pc = 0x2EB900u;
            goto label_2eb900;
        }
    }
    ctx->pc = 0x2EB8CCu;
label_2eb8cc:
    // 0x2eb8cc: 0x8c43aa88  lw          $v1, -0x5578($v0)
    ctx->pc = 0x2eb8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945416)));
label_2eb8d0:
    // 0x2eb8d0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2eb8d4:
    if (ctx->pc == 0x2EB8D4u) {
        ctx->pc = 0x2EB8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8D0u;
        // 0x2eb8d4: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB8D8u;
        goto label_2eb8d8;
    }
    ctx->pc = 0x2EB8D0u;
    {
        const bool branch_taken_0x2eb8d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8D0u;
        // 0x2eb8d4: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb8d0) {
            ctx->pc = 0x2EB8ECu;
            goto label_2eb8ec;
        }
    }
    ctx->pc = 0x2EB8D8u;
label_2eb8d8:
    // 0x2eb8d8: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x2eb8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
label_2eb8dc:
    // 0x2eb8dc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2eb8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2eb8e0:
    // 0x2eb8e0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2eb8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_2eb8e4:
    // 0x2eb8e4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2eb8e8:
    if (ctx->pc == 0x2EB8E8u) {
        ctx->pc = 0x2EB8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8E4u;
        // 0x2eb8e8: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB8ECu;
        goto label_2eb8ec;
    }
    ctx->pc = 0x2EB8E4u;
    {
        const bool branch_taken_0x2eb8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb8e4) {
            ctx->pc = 0x2EB8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB8E4u;
            // 0x2eb8e8: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB8F4u;
            goto label_2eb8f4;
        }
    }
    ctx->pc = 0x2EB8ECu;
label_2eb8ec:
    // 0x2eb8ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_2eb8f0:
    if (ctx->pc == 0x2EB8F0u) {
        ctx->pc = 0x2EB8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8ECu;
        // 0x2eb8f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB8F4u;
        goto label_2eb8f4;
    }
    ctx->pc = 0x2EB8ECu;
    {
        const bool branch_taken_0x2eb8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8ECu;
        // 0x2eb8f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb8ec) {
            ctx->pc = 0x2EB8F8u;
            goto label_2eb8f8;
        }
    }
    ctx->pc = 0x2EB8F4u;
label_2eb8f4:
    // 0x2eb8f4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2eb8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_2eb8f8:
    // 0x2eb8f8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2eb8fc:
    if (ctx->pc == 0x2EB8FCu) {
        ctx->pc = 0x2EB8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8F8u;
        // 0x2eb8fc: 0xa22011bb  sb          $zero, 0x11BB($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4539), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB900u;
        goto label_2eb900;
    }
    ctx->pc = 0x2EB8F8u;
    {
        const bool branch_taken_0x2eb8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb8f8) {
            ctx->pc = 0x2EB8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB8F8u;
            // 0x2eb8fc: 0xa22011bb  sb          $zero, 0x11BB($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 4539), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB900u;
            goto label_2eb900;
        }
    }
    ctx->pc = 0x2EB900u;
label_2eb900:
    // 0x2eb900: 0xc0bf868  jal         func_2FE1A0
label_2eb904:
    if (ctx->pc == 0x2EB904u) {
        ctx->pc = 0x2EB908u;
        goto label_2eb908;
    }
    ctx->pc = 0x2EB900u;
    SET_GPR_U32(ctx, 31, 0x2EB908u);
    ctx->pc = 0x2FE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1A0u, 0x2EB900u, 0x2EB908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB908u;
label_2eb908:
    // 0x2eb908: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_2eb90c:
    if (ctx->pc == 0x2EB90Cu) {
        ctx->pc = 0x2EB90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB908u;
        // 0x2eb90c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB910u;
        goto label_2eb910;
    }
    ctx->pc = 0x2EB908u;
    {
        const bool branch_taken_0x2eb908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB908u;
        // 0x2eb90c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb908) {
            ctx->pc = 0x2EBA58u;
            goto label_2eba58;
        }
    }
    ctx->pc = 0x2EB910u;
label_2eb910:
    // 0x2eb910: 0x8c43aa88  lw          $v1, -0x5578($v0)
    ctx->pc = 0x2eb910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945416)));
label_2eb914:
    // 0x2eb914: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2eb918:
    if (ctx->pc == 0x2EB918u) {
        ctx->pc = 0x2EB918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB914u;
        // 0x2eb918: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB91Cu;
        goto label_2eb91c;
    }
    ctx->pc = 0x2EB914u;
    {
        const bool branch_taken_0x2eb914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB914u;
        // 0x2eb918: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb914) {
            ctx->pc = 0x2EB930u;
            goto label_2eb930;
        }
    }
    ctx->pc = 0x2EB91Cu;
label_2eb91c:
    // 0x2eb91c: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x2eb91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
label_2eb920:
    // 0x2eb920: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2eb920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2eb924:
    // 0x2eb924: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2eb924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2eb928:
    // 0x2eb928: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2eb92c:
    if (ctx->pc == 0x2EB92Cu) {
        ctx->pc = 0x2EB92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB928u;
        // 0x2eb92c: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB930u;
        goto label_2eb930;
    }
    ctx->pc = 0x2EB928u;
    {
        const bool branch_taken_0x2eb928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb928) {
            ctx->pc = 0x2EB92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB928u;
            // 0x2eb92c: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB938u;
            goto label_2eb938;
        }
    }
    ctx->pc = 0x2EB930u;
label_2eb930:
    // 0x2eb930: 0x10000002  b           . + 4 + (0x2 << 2)
label_2eb934:
    if (ctx->pc == 0x2EB934u) {
        ctx->pc = 0x2EB934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB930u;
        // 0x2eb934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB938u;
        goto label_2eb938;
    }
    ctx->pc = 0x2EB930u;
    {
        const bool branch_taken_0x2eb930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB930u;
        // 0x2eb934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb930) {
            ctx->pc = 0x2EB93Cu;
            goto label_2eb93c;
        }
    }
    ctx->pc = 0x2EB938u;
label_2eb938:
    // 0x2eb938: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2eb938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2eb93c:
    // 0x2eb93c: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_2eb940:
    if (ctx->pc == 0x2EB940u) {
        ctx->pc = 0x2EB940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB93Cu;
        // 0x2eb940: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB944u;
        goto label_2eb944;
    }
    ctx->pc = 0x2EB93Cu;
    {
        const bool branch_taken_0x2eb93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB93Cu;
        // 0x2eb940: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb93c) {
            ctx->pc = 0x2EBA58u;
            goto label_2eba58;
        }
    }
    ctx->pc = 0x2EB944u;
label_2eb944:
    // 0x2eb944: 0xc08f672  jal         func_23D9C8
label_2eb948:
    if (ctx->pc == 0x2EB948u) {
        ctx->pc = 0x2EB948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB944u;
        // 0x2eb948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB94Cu;
        goto label_2eb94c;
    }
    ctx->pc = 0x2EB944u;
    SET_GPR_U32(ctx, 31, 0x2EB94Cu);
    ctx->pc = 0x2EB948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB944u;
    // 0x2eb948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x2EB944u, 0x2EB94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB94Cu;
label_2eb94c:
    // 0x2eb94c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2eb950:
    if (ctx->pc == 0x2EB950u) {
        ctx->pc = 0x2EB950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB94Cu;
        // 0x2eb950: 0x8e260334  lw          $a2, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB954u;
        goto label_2eb954;
    }
    ctx->pc = 0x2EB94Cu;
    {
        const bool branch_taken_0x2eb94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb94c) {
            ctx->pc = 0x2EB950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB94Cu;
            // 0x2eb950: 0x8e260334  lw          $a2, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB96Cu;
            goto label_2eb96c;
        }
    }
    ctx->pc = 0x2EB954u;
label_2eb954:
    // 0x2eb954: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x2eb954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2eb958:
    // 0x2eb958: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x2eb958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_2eb95c:
    // 0x2eb95c: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x2eb95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_2eb960:
    // 0x2eb960: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_2eb964:
    if (ctx->pc == 0x2EB964u) {
        ctx->pc = 0x2EB964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB960u;
        // 0x2eb964: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB968u;
        goto label_2eb968;
    }
    ctx->pc = 0x2EB960u;
    {
        const bool branch_taken_0x2eb960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2EB964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB960u;
        // 0x2eb964: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb960) {
            ctx->pc = 0x2EB970u;
            goto label_2eb970;
        }
    }
    ctx->pc = 0x2EB968u;
label_2eb968:
    // 0x2eb968: 0x8e260334  lw          $a2, 0x334($s1)
    ctx->pc = 0x2eb968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2eb96c:
    // 0x2eb96c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2eb96cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb970:
    // 0x2eb970: 0x8cc30150  lw          $v1, 0x150($a2)
    ctx->pc = 0x2eb970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
label_2eb974:
    // 0x2eb974: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2eb974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2eb978:
    // 0x2eb978: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2eb97c:
    if (ctx->pc == 0x2EB97Cu) {
        ctx->pc = 0x2EB97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB978u;
        // 0x2eb97c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB980u;
        goto label_2eb980;
    }
    ctx->pc = 0x2EB978u;
    {
        const bool branch_taken_0x2eb978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB978u;
        // 0x2eb97c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb978) {
            ctx->pc = 0x2EB9ACu;
            goto label_2eb9ac;
        }
    }
    ctx->pc = 0x2EB980u;
label_2eb980:
    // 0x2eb980: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2eb980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_2eb984:
    // 0x2eb984: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_2eb988:
    if (ctx->pc == 0x2EB988u) {
        ctx->pc = 0x2EB988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB984u;
        // 0x2eb988: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB98Cu;
        goto label_2eb98c;
    }
    ctx->pc = 0x2EB984u;
    {
        const bool branch_taken_0x2eb984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EB988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB984u;
        // 0x2eb988: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb984) {
            ctx->pc = 0x2EB9ACu;
            goto label_2eb9ac;
        }
    }
    ctx->pc = 0x2EB98Cu;
label_2eb98c:
    // 0x2eb98c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2eb990:
    if (ctx->pc == 0x2EB990u) {
        ctx->pc = 0x2EB990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB98Cu;
        // 0x2eb990: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB994u;
        goto label_2eb994;
    }
    ctx->pc = 0x2EB98Cu;
    {
        const bool branch_taken_0x2eb98c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EB990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB98Cu;
        // 0x2eb990: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb98c) {
            ctx->pc = 0x2EB9ACu;
            goto label_2eb9ac;
        }
    }
    ctx->pc = 0x2EB994u;
label_2eb994:
    // 0x2eb994: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2eb998:
    if (ctx->pc == 0x2EB998u) {
        ctx->pc = 0x2EB998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB994u;
        // 0x2eb998: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB99Cu;
        goto label_2eb99c;
    }
    ctx->pc = 0x2EB994u;
    {
        const bool branch_taken_0x2eb994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EB998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB994u;
        // 0x2eb998: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb994) {
            ctx->pc = 0x2EB9ACu;
            goto label_2eb9ac;
        }
    }
    ctx->pc = 0x2EB99Cu;
label_2eb99c:
    // 0x2eb99c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2eb9a0:
    if (ctx->pc == 0x2EB9A0u) {
        ctx->pc = 0x2EB9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB99Cu;
        // 0x2eb9a0: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB9A4u;
        goto label_2eb9a4;
    }
    ctx->pc = 0x2EB99Cu;
    {
        const bool branch_taken_0x2eb99c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EB9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB99Cu;
        // 0x2eb9a0: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb99c) {
            ctx->pc = 0x2EB9ACu;
            goto label_2eb9ac;
        }
    }
    ctx->pc = 0x2EB9A4u;
label_2eb9a4:
    // 0x2eb9a4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2eb9a8:
    if (ctx->pc == 0x2EB9A8u) {
        ctx->pc = 0x2EB9ACu;
        goto label_2eb9ac;
    }
    ctx->pc = 0x2EB9A4u;
    {
        const bool branch_taken_0x2eb9a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2eb9a4) {
            ctx->pc = 0x2EB9B0u;
            goto label_2eb9b0;
        }
    }
    ctx->pc = 0x2EB9ACu;
label_2eb9ac:
    // 0x2eb9ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2eb9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb9b0:
    // 0x2eb9b0: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_2eb9b4:
    if (ctx->pc == 0x2EB9B4u) {
        ctx->pc = 0x2EB9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB9B0u;
        // 0x2eb9b4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB9B8u;
        goto label_2eb9b8;
    }
    ctx->pc = 0x2EB9B0u;
    {
        const bool branch_taken_0x2eb9b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB9B0u;
        // 0x2eb9b4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb9b0) {
            ctx->pc = 0x2EB9DCu;
            goto label_2eb9dc;
        }
    }
    ctx->pc = 0x2EB9B8u;
label_2eb9b8:
    // 0x2eb9b8: 0x8cc30150  lw          $v1, 0x150($a2)
    ctx->pc = 0x2eb9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
label_2eb9bc:
    // 0x2eb9bc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2eb9c0:
    if (ctx->pc == 0x2EB9C0u) {
        ctx->pc = 0x2EB9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB9BCu;
        // 0x2eb9c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB9C4u;
        goto label_2eb9c4;
    }
    ctx->pc = 0x2EB9BCu;
    {
        const bool branch_taken_0x2eb9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EB9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB9BCu;
        // 0x2eb9c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb9bc) {
            ctx->pc = 0x2EB9D0u;
            goto label_2eb9d0;
        }
    }
    ctx->pc = 0x2EB9C4u;
label_2eb9c4:
    // 0x2eb9c4: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x2eb9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_2eb9c8:
    // 0x2eb9c8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2eb9cc:
    if (ctx->pc == 0x2EB9CCu) {
        ctx->pc = 0x2EB9D0u;
        goto label_2eb9d0;
    }
    ctx->pc = 0x2EB9C8u;
    {
        const bool branch_taken_0x2eb9c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2eb9c8) {
            ctx->pc = 0x2EB9D4u;
            goto label_2eb9d4;
        }
    }
    ctx->pc = 0x2EB9D0u;
label_2eb9d0:
    // 0x2eb9d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2eb9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb9d4:
    // 0x2eb9d4: 0x50800021  beql        $a0, $zero, . + 4 + (0x21 << 2)
label_2eb9d8:
    if (ctx->pc == 0x2EB9D8u) {
        ctx->pc = 0x2EB9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB9D4u;
        // 0x2eb9d8: 0x8e2211d8  lw          $v0, 0x11D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB9DCu;
        goto label_2eb9dc;
    }
    ctx->pc = 0x2EB9D4u;
    {
        const bool branch_taken_0x2eb9d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb9d4) {
            ctx->pc = 0x2EB9D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB9D4u;
            // 0x2eb9d8: 0x8e2211d8  lw          $v0, 0x11D8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBA5Cu;
            goto label_2eba5c;
        }
    }
    ctx->pc = 0x2EB9DCu;
label_2eb9dc:
    // 0x2eb9dc: 0x5600001f  bnel        $s0, $zero, . + 4 + (0x1F << 2)
label_2eb9e0:
    if (ctx->pc == 0x2EB9E0u) {
        ctx->pc = 0x2EB9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB9DCu;
        // 0x2eb9e0: 0x8e2211d8  lw          $v0, 0x11D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB9E4u;
        goto label_2eb9e4;
    }
    ctx->pc = 0x2EB9DCu;
    {
        const bool branch_taken_0x2eb9dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb9dc) {
            ctx->pc = 0x2EB9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB9DCu;
            // 0x2eb9e0: 0x8e2211d8  lw          $v0, 0x11D8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBA5Cu;
            goto label_2eba5c;
        }
    }
    ctx->pc = 0x2EB9E4u;
label_2eb9e4:
    // 0x2eb9e4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2eb9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_2eb9e8:
    // 0x2eb9e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2eb9e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2eb9ec:
    // 0x2eb9ec: 0xc4412450  lwc1        $f1, 0x2450($v0)
    ctx->pc = 0x2eb9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2eb9f0:
    // 0x2eb9f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2eb9f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2eb9f4:
    // 0x2eb9f4: 0x0  nop
    ctx->pc = 0x2eb9f4u;
    // NOP
label_2eb9f8:
    // 0x2eb9f8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2eb9fc:
    if (ctx->pc == 0x2EB9FCu) {
        ctx->pc = 0x2EB9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB9F8u;
        // 0x2eb9fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBA00u;
        goto label_2eba00;
    }
    ctx->pc = 0x2EB9F8u;
    {
        const bool branch_taken_0x2eb9f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EB9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB9F8u;
        // 0x2eb9fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb9f8) {
            ctx->pc = 0x2EBA0Cu;
            goto label_2eba0c;
        }
    }
    ctx->pc = 0x2EBA00u;
label_2eba00:
    // 0x2eba00: 0xe6200500  swc1        $f0, 0x500($s1)
    ctx->pc = 0x2eba00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1280), bits); }
label_2eba04:
    // 0x2eba04: 0x10000007  b           . + 4 + (0x7 << 2)
label_2eba08:
    if (ctx->pc == 0x2EBA08u) {
        ctx->pc = 0x2EBA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA04u;
        // 0x2eba08: 0xae220588  sw          $v0, 0x588($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBA0Cu;
        goto label_2eba0c;
    }
    ctx->pc = 0x2EBA04u;
    {
        const bool branch_taken_0x2eba04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA04u;
        // 0x2eba08: 0xae220588  sw          $v0, 0x588($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eba04) {
            ctx->pc = 0x2EBA24u;
            goto label_2eba24;
        }
    }
    ctx->pc = 0x2EBA0Cu;
label_2eba0c:
    // 0x2eba0c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2eba0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2eba10:
    // 0x2eba10: 0x0  nop
    ctx->pc = 0x2eba10u;
    // NOP
label_2eba14:
    // 0x2eba14: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_2eba18:
    if (ctx->pc == 0x2EBA18u) {
        ctx->pc = 0x2EBA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA14u;
        // 0x2eba18: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBA1Cu;
        goto label_2eba1c;
    }
    ctx->pc = 0x2EBA14u;
    {
        const bool branch_taken_0x2eba14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eba14) {
            ctx->pc = 0x2EBA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBA14u;
            // 0x2eba18: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBA3Cu;
            goto label_2eba3c;
        }
    }
    ctx->pc = 0x2EBA1Cu;
label_2eba1c:
    // 0x2eba1c: 0xe6200500  swc1        $f0, 0x500($s1)
    ctx->pc = 0x2eba1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1280), bits); }
label_2eba20:
    // 0x2eba20: 0xae22058c  sw          $v0, 0x58C($s1)
    ctx->pc = 0x2eba20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1420), GPR_U32(ctx, 2));
label_2eba24:
    // 0x2eba24: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2eba24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2eba28:
    // 0x2eba28: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2eba28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2eba2c:
    // 0x2eba2c: 0xe62004fc  swc1        $f0, 0x4FC($s1)
    ctx->pc = 0x2eba2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1276), bits); }
label_2eba30:
    // 0x2eba30: 0xae200580  sw          $zero, 0x580($s1)
    ctx->pc = 0x2eba30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1408), GPR_U32(ctx, 0));
label_2eba34:
    // 0x2eba34: 0x10000008  b           . + 4 + (0x8 << 2)
label_2eba38:
    if (ctx->pc == 0x2EBA38u) {
        ctx->pc = 0x2EBA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA34u;
        // 0x2eba38: 0xae200584  sw          $zero, 0x584($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBA3Cu;
        goto label_2eba3c;
    }
    ctx->pc = 0x2EBA34u;
    {
        const bool branch_taken_0x2eba34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA34u;
        // 0x2eba38: 0xae200584  sw          $zero, 0x584($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eba34) {
            ctx->pc = 0x2EBA58u;
            goto label_2eba58;
        }
    }
    ctx->pc = 0x2EBA3Cu;
label_2eba3c:
    // 0x2eba3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eba3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2eba40:
    // 0x2eba40: 0xc0bcc6a  jal         func_2F31A8
label_2eba44:
    if (ctx->pc == 0x2EBA44u) {
        ctx->pc = 0x2EBA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA40u;
        // 0x2eba44: 0xc44c18d8  lwc1        $f12, 0x18D8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBA48u;
        goto label_2eba48;
    }
    ctx->pc = 0x2EBA40u;
    SET_GPR_U32(ctx, 31, 0x2EBA48u);
    ctx->pc = 0x2EBA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBA40u;
    // 0x2eba44: 0xc44c18d8  lwc1        $f12, 0x18D8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F31A8u, 0x2EBA40u, 0x2EBA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBA48u;
label_2eba48:
    // 0x2eba48: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2eba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2eba4c:
    // 0x2eba4c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2eba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2eba50:
    // 0x2eba50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2eba50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2eba54:
    // 0x2eba54: 0xae2211c0  sw          $v0, 0x11C0($s1)
    ctx->pc = 0x2eba54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 2));
label_2eba58:
    // 0x2eba58: 0x8e2211d8  lw          $v0, 0x11D8($s1)
    ctx->pc = 0x2eba58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4568)));
label_2eba5c:
    // 0x2eba5c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2eba60:
    if (ctx->pc == 0x2EBA60u) {
        ctx->pc = 0x2EBA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA5Cu;
        // 0x2eba60: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBA64u;
        goto label_2eba64;
    }
    ctx->pc = 0x2EBA5Cu;
    {
        const bool branch_taken_0x2eba5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA5Cu;
        // 0x2eba60: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eba5c) {
            ctx->pc = 0x2EBA74u;
            goto label_2eba74;
        }
    }
    ctx->pc = 0x2EBA64u;
label_2eba64:
    // 0x2eba64: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2eba64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2eba68:
    // 0x2eba68: 0x8c62b958  lw          $v0, -0x46A8($v1)
    ctx->pc = 0x2eba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949208)));
label_2eba6c:
    // 0x2eba6c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2eba6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2eba70:
    // 0x2eba70: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2eba70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2eba74:
    // 0x2eba74: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
label_2eba78:
    if (ctx->pc == 0x2EBA78u) {
        ctx->pc = 0x2EBA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA74u;
        // 0x2eba78: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBA7Cu;
        goto label_2eba7c;
    }
    ctx->pc = 0x2EBA74u;
    {
        const bool branch_taken_0x2eba74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA74u;
        // 0x2eba78: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eba74) {
            ctx->pc = 0x2EBB38u;
            goto label_2ebb38;
        }
    }
    ctx->pc = 0x2EBA7Cu;
label_2eba7c:
    // 0x2eba7c: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2eba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2eba80:
    // 0x2eba80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eba80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2eba84:
    // 0x2eba84: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_2eba88:
    if (ctx->pc == 0x2EBA88u) {
        ctx->pc = 0x2EBA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA84u;
        // 0x2eba88: 0x24040045  addiu       $a0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBA8Cu;
        goto label_2eba8c;
    }
    ctx->pc = 0x2EBA84u;
    {
        const bool branch_taken_0x2eba84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EBA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA84u;
        // 0x2eba88: 0x24040045  addiu       $a0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eba84) {
            ctx->pc = 0x2EBA9Cu;
            goto label_2eba9c;
        }
    }
    ctx->pc = 0x2EBA8Cu;
label_2eba8c:
    // 0x2eba8c: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x2eba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2eba90:
    // 0x2eba90: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x2eba90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_2eba94:
    // 0x2eba94: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_2eba98:
    if (ctx->pc == 0x2EBA98u) {
        ctx->pc = 0x2EBA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA94u;
        // 0x2eba98: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBA9Cu;
        goto label_2eba9c;
    }
    ctx->pc = 0x2EBA94u;
    {
        const bool branch_taken_0x2eba94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2EBA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA94u;
        // 0x2eba98: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eba94) {
            ctx->pc = 0x2EBAA8u;
            goto label_2ebaa8;
        }
    }
    ctx->pc = 0x2EBA9Cu;
label_2eba9c:
    // 0x2eba9c: 0xae2005e0  sw          $zero, 0x5E0($s1)
    ctx->pc = 0x2eba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1504), GPR_U32(ctx, 0));
label_2ebaa0:
    // 0x2ebaa0: 0x10000011  b           . + 4 + (0x11 << 2)
label_2ebaa4:
    if (ctx->pc == 0x2EBAA4u) {
        ctx->pc = 0x2EBAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBAA0u;
        // 0x2ebaa4: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBAA8u;
        goto label_2ebaa8;
    }
    ctx->pc = 0x2EBAA0u;
    {
        const bool branch_taken_0x2ebaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBAA0u;
        // 0x2ebaa4: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebaa0) {
            ctx->pc = 0x2EBAE8u;
            goto label_2ebae8;
        }
    }
    ctx->pc = 0x2EBAA8u;
label_2ebaa8:
    // 0x2ebaa8: 0x8c43aa88  lw          $v1, -0x5578($v0)
    ctx->pc = 0x2ebaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945416)));
label_2ebaac:
    // 0x2ebaac: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2ebab0:
    if (ctx->pc == 0x2EBAB0u) {
        ctx->pc = 0x2EBAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBAACu;
        // 0x2ebab0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBAB4u;
        goto label_2ebab4;
    }
    ctx->pc = 0x2EBAACu;
    {
        const bool branch_taken_0x2ebaac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBAACu;
        // 0x2ebab0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebaac) {
            ctx->pc = 0x2EBACCu;
            goto label_2ebacc;
        }
    }
    ctx->pc = 0x2EBAB4u;
label_2ebab4:
    // 0x2ebab4: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2ebab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_2ebab8:
    // 0x2ebab8: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x2ebab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
label_2ebabc:
    // 0x2ebabc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2ebabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2ebac0:
    // 0x2ebac0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2ebac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_2ebac4:
    // 0x2ebac4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2ebac8:
    if (ctx->pc == 0x2EBAC8u) {
        ctx->pc = 0x2EBAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBAC4u;
        // 0x2ebac8: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBACCu;
        goto label_2ebacc;
    }
    ctx->pc = 0x2EBAC4u;
    {
        const bool branch_taken_0x2ebac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebac4) {
            ctx->pc = 0x2EBAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBAC4u;
            // 0x2ebac8: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBAD4u;
            goto label_2ebad4;
        }
    }
    ctx->pc = 0x2EBACCu;
label_2ebacc:
    // 0x2ebacc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ebad0:
    if (ctx->pc == 0x2EBAD0u) {
        ctx->pc = 0x2EBAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBACCu;
        // 0x2ebad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBAD4u;
        goto label_2ebad4;
    }
    ctx->pc = 0x2EBACCu;
    {
        const bool branch_taken_0x2ebacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBACCu;
        // 0x2ebad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebacc) {
            ctx->pc = 0x2EBAD8u;
            goto label_2ebad8;
        }
    }
    ctx->pc = 0x2EBAD4u;
label_2ebad4:
    // 0x2ebad4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2ebad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_2ebad8:
    // 0x2ebad8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ebadc:
    if (ctx->pc == 0x2EBADCu) {
        ctx->pc = 0x2EBADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBAD8u;
        // 0x2ebadc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBAE0u;
        goto label_2ebae0;
    }
    ctx->pc = 0x2EBAD8u;
    {
        const bool branch_taken_0x2ebad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBAD8u;
        // 0x2ebadc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebad8) {
            ctx->pc = 0x2EBAE8u;
            goto label_2ebae8;
        }
    }
    ctx->pc = 0x2EBAE0u;
label_2ebae0:
    // 0x2ebae0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ebae4:
    if (ctx->pc == 0x2EBAE4u) {
        ctx->pc = 0x2EBAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBAE0u;
        // 0x2ebae4: 0xae2205e4  sw          $v0, 0x5E4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1508), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBAE8u;
        goto label_2ebae8;
    }
    ctx->pc = 0x2EBAE0u;
    {
        const bool branch_taken_0x2ebae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBAE0u;
        // 0x2ebae4: 0xae2205e4  sw          $v0, 0x5E4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1508), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebae0) {
            ctx->pc = 0x2EBAECu;
            goto label_2ebaec;
        }
    }
    ctx->pc = 0x2EBAE8u;
label_2ebae8:
    // 0x2ebae8: 0xae2005e4  sw          $zero, 0x5E4($s1)
    ctx->pc = 0x2ebae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1508), GPR_U32(ctx, 0));
label_2ebaec:
    // 0x2ebaec: 0x8e42aa88  lw          $v0, -0x5578($s2)
    ctx->pc = 0x2ebaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945416)));
label_2ebaf0:
    // 0x2ebaf0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2ebaf4:
    if (ctx->pc == 0x2EBAF4u) {
        ctx->pc = 0x2EBAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBAF0u;
        // 0x2ebaf4: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBAF8u;
        goto label_2ebaf8;
    }
    ctx->pc = 0x2EBAF0u;
    {
        const bool branch_taken_0x2ebaf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBAF0u;
        // 0x2ebaf4: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebaf0) {
            ctx->pc = 0x2EBB20u;
            goto label_2ebb20;
        }
    }
    ctx->pc = 0x2EBAF8u;
label_2ebaf8:
    // 0x2ebaf8: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x2ebaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
label_2ebafc:
    // 0x2ebafc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2ebafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2ebb00:
    // 0x2ebb00: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2ebb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_2ebb04:
    // 0x2ebb04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2ebb08:
    if (ctx->pc == 0x2EBB08u) {
        ctx->pc = 0x2EBB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB04u;
        // 0x2ebb08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBB0Cu;
        goto label_2ebb0c;
    }
    ctx->pc = 0x2EBB04u;
    {
        const bool branch_taken_0x2ebb04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB04u;
        // 0x2ebb08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebb04) {
            ctx->pc = 0x2EBB18u;
            goto label_2ebb18;
        }
    }
    ctx->pc = 0x2EBB0Cu;
label_2ebb0c:
    // 0x2ebb0c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2ebb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2ebb10:
    // 0x2ebb10: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2ebb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_2ebb14:
    // 0x2ebb14: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x2ebb14u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ebb18:
    // 0x2ebb18: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ebb1c:
    if (ctx->pc == 0x2EBB1Cu) {
        ctx->pc = 0x2EBB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB18u;
        // 0x2ebb1c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBB20u;
        goto label_2ebb20;
    }
    ctx->pc = 0x2EBB18u;
    {
        const bool branch_taken_0x2ebb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB18u;
        // 0x2ebb1c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebb18) {
            ctx->pc = 0x2EBB24u;
            goto label_2ebb24;
        }
    }
    ctx->pc = 0x2EBB20u;
label_2ebb20:
    // 0x2ebb20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ebb20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ebb24:
    // 0x2ebb24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ebb28:
    if (ctx->pc == 0x2EBB28u) {
        ctx->pc = 0x2EBB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB24u;
        // 0x2ebb28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBB2Cu;
        goto label_2ebb2c;
    }
    ctx->pc = 0x2EBB24u;
    {
        const bool branch_taken_0x2ebb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB24u;
        // 0x2ebb28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebb24) {
            ctx->pc = 0x2EBB34u;
            goto label_2ebb34;
        }
    }
    ctx->pc = 0x2EBB2Cu;
label_2ebb2c:
    // 0x2ebb2c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ebb30:
    if (ctx->pc == 0x2EBB30u) {
        ctx->pc = 0x2EBB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB2Cu;
        // 0x2ebb30: 0xae2205cc  sw          $v0, 0x5CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBB34u;
        goto label_2ebb34;
    }
    ctx->pc = 0x2EBB2Cu;
    {
        const bool branch_taken_0x2ebb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB2Cu;
        // 0x2ebb30: 0xae2205cc  sw          $v0, 0x5CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebb2c) {
            ctx->pc = 0x2EBB38u;
            goto label_2ebb38;
        }
    }
    ctx->pc = 0x2EBB34u;
label_2ebb34:
    // 0x2ebb34: 0xae2005cc  sw          $zero, 0x5CC($s1)
    ctx->pc = 0x2ebb34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1484), GPR_U32(ctx, 0));
label_2ebb38:
    // 0x2ebb38: 0xc0b93e0  jal         func_2E4F80
label_2ebb3c:
    if (ctx->pc == 0x2EBB3Cu) {
        ctx->pc = 0x2EBB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB38u;
        // 0x2ebb3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBB40u;
        goto label_2ebb40;
    }
    ctx->pc = 0x2EBB38u;
    SET_GPR_U32(ctx, 31, 0x2EBB40u);
    ctx->pc = 0x2EBB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBB38u;
    // 0x2ebb3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x2EBB38u, 0x2EBB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBB40u;
label_2ebb40:
    // 0x2ebb40: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_2ebb44:
    if (ctx->pc == 0x2EBB44u) {
        ctx->pc = 0x2EBB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB40u;
        // 0x2ebb44: 0x8e2205b4  lw          $v0, 0x5B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1460)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBB48u;
        goto label_2ebb48;
    }
    ctx->pc = 0x2EBB40u;
    {
        const bool branch_taken_0x2ebb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebb40) {
            ctx->pc = 0x2EBB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBB40u;
            // 0x2ebb44: 0x8e2205b4  lw          $v0, 0x5B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBB90u;
            goto label_2ebb90;
        }
    }
    ctx->pc = 0x2EBB48u;
label_2ebb48:
    // 0x2ebb48: 0xc0bf868  jal         func_2FE1A0
label_2ebb4c:
    if (ctx->pc == 0x2EBB4Cu) {
        ctx->pc = 0x2EBB50u;
        goto label_2ebb50;
    }
    ctx->pc = 0x2EBB48u;
    SET_GPR_U32(ctx, 31, 0x2EBB50u);
    ctx->pc = 0x2FE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1A0u, 0x2EBB48u, 0x2EBB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBB50u;
label_2ebb50:
    // 0x2ebb50: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2ebb54:
    if (ctx->pc == 0x2EBB54u) {
        ctx->pc = 0x2EBB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB50u;
        // 0x2ebb54: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBB58u;
        goto label_2ebb58;
    }
    ctx->pc = 0x2EBB50u;
    {
        const bool branch_taken_0x2ebb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB50u;
        // 0x2ebb54: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebb50) {
            ctx->pc = 0x2EBB8Cu;
            goto label_2ebb8c;
        }
    }
    ctx->pc = 0x2EBB58u;
label_2ebb58:
    // 0x2ebb58: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2ebb58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ebb5c:
    // 0x2ebb5c: 0xc4402454  lwc1        $f0, 0x2454($v0)
    ctx->pc = 0x2ebb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ebb60:
    // 0x2ebb60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ebb60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ebb64:
    // 0x2ebb64: 0x0  nop
    ctx->pc = 0x2ebb64u;
    // NOP
label_2ebb68:
    // 0x2ebb68: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2ebb6c:
    if (ctx->pc == 0x2EBB6Cu) {
        ctx->pc = 0x2EBB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB68u;
        // 0x2ebb6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBB70u;
        goto label_2ebb70;
    }
    ctx->pc = 0x2EBB68u;
    {
        const bool branch_taken_0x2ebb68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EBB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB68u;
        // 0x2ebb6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebb68) {
            ctx->pc = 0x2EBB78u;
            goto label_2ebb78;
        }
    }
    ctx->pc = 0x2EBB70u;
label_2ebb70:
    // 0x2ebb70: 0x10000006  b           . + 4 + (0x6 << 2)
label_2ebb74:
    if (ctx->pc == 0x2EBB74u) {
        ctx->pc = 0x2EBB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB70u;
        // 0x2ebb74: 0xae220598  sw          $v0, 0x598($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBB78u;
        goto label_2ebb78;
    }
    ctx->pc = 0x2EBB70u;
    {
        const bool branch_taken_0x2ebb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB70u;
        // 0x2ebb74: 0xae220598  sw          $v0, 0x598($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebb70) {
            ctx->pc = 0x2EBB8Cu;
            goto label_2ebb8c;
        }
    }
    ctx->pc = 0x2EBB78u;
label_2ebb78:
    // 0x2ebb78: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ebb78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ebb7c:
    // 0x2ebb7c: 0x0  nop
    ctx->pc = 0x2ebb7cu;
    // NOP
label_2ebb80:
    // 0x2ebb80: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_2ebb84:
    if (ctx->pc == 0x2EBB84u) {
        ctx->pc = 0x2EBB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB80u;
        // 0x2ebb84: 0x8e2205b4  lw          $v0, 0x5B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1460)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBB88u;
        goto label_2ebb88;
    }
    ctx->pc = 0x2EBB80u;
    {
        const bool branch_taken_0x2ebb80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ebb80) {
            ctx->pc = 0x2EBB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBB80u;
            // 0x2ebb84: 0x8e2205b4  lw          $v0, 0x5B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBB90u;
            goto label_2ebb90;
        }
    }
    ctx->pc = 0x2EBB88u;
label_2ebb88:
    // 0x2ebb88: 0xae22059c  sw          $v0, 0x59C($s1)
    ctx->pc = 0x2ebb88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1436), GPR_U32(ctx, 2));
label_2ebb8c:
    // 0x2ebb8c: 0x8e2205b4  lw          $v0, 0x5B4($s1)
    ctx->pc = 0x2ebb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1460)));
label_2ebb90:
    // 0x2ebb90: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2ebb94:
    if (ctx->pc == 0x2EBB94u) {
        ctx->pc = 0x2EBB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB90u;
        // 0x2ebb94: 0xae200590  sw          $zero, 0x590($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBB98u;
        goto label_2ebb98;
    }
    ctx->pc = 0x2EBB90u;
    {
        const bool branch_taken_0x2ebb90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebb90) {
            ctx->pc = 0x2EBB94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBB90u;
            // 0x2ebb94: 0xae200590  sw          $zero, 0x590($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1424), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBBA8u;
            goto label_2ebba8;
        }
    }
    ctx->pc = 0x2EBB98u;
label_2ebb98:
    // 0x2ebb98: 0x8e2205b0  lw          $v0, 0x5B0($s1)
    ctx->pc = 0x2ebb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
label_2ebb9c:
    // 0x2ebb9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ebba0:
    if (ctx->pc == 0x2EBBA0u) {
        ctx->pc = 0x2EBBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB9Cu;
        // 0x2ebba0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBBA4u;
        goto label_2ebba4;
    }
    ctx->pc = 0x2EBB9Cu;
    {
        const bool branch_taken_0x2ebb9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB9Cu;
        // 0x2ebba0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebb9c) {
            ctx->pc = 0x2EBBACu;
            goto label_2ebbac;
        }
    }
    ctx->pc = 0x2EBBA4u;
label_2ebba4:
    // 0x2ebba4: 0xae200590  sw          $zero, 0x590($s1)
    ctx->pc = 0x2ebba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1424), GPR_U32(ctx, 0));
label_2ebba8:
    // 0x2ebba8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2ebba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ebbac:
    // 0x2ebbac: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2ebbacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2ebbb0:
    // 0x2ebbb0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2ebbb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2ebbb4:
    // 0x2ebbb4: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2ebbb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2ebbb8:
    // 0x2ebbb8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2ebbb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2ebbbc:
    // 0x2ebbbc: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2ebbbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2ebbc0:
    // 0x2ebbc0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2ebbc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2ebbc4:
    // 0x2ebbc4: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x2ebbc4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_2ebbc8:
    // 0x2ebbc8: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x2ebbc8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2ebbcc:
    // 0x2ebbcc: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2ebbccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_2ebbd0:
    // 0x2ebbd0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2ebbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ebbd4:
    // 0x2ebbd4: 0x3e00008  jr          $ra
label_2ebbd8:
    if (ctx->pc == 0x2EBBD8u) {
        ctx->pc = 0x2EBBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBBD4u;
        // 0x2ebbd8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBBDCu;
        goto label_2ebbdc;
    }
    ctx->pc = 0x2EBBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBBD4u;
        // 0x2ebbd8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBBD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBBDCu;
label_2ebbdc:
    // 0x2ebbdc: 0x0  nop
    ctx->pc = 0x2ebbdcu;
    // NOP
    ctx->pc = 0x2ebbe0u;
}
