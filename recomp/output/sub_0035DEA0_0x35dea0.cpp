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

// Function: sub_0035DEA0
// Address: 0x35dea0 - 0x35e978
void sub_0035DEA0_0x35dea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035DEA0_0x35dea0");
#endif

    switch (ctx->pc) {
        case 0x35dea0u: goto label_35dea0;
        case 0x35dea4u: goto label_35dea4;
        case 0x35dea8u: goto label_35dea8;
        case 0x35deacu: goto label_35deac;
        case 0x35deb0u: goto label_35deb0;
        case 0x35deb4u: goto label_35deb4;
        case 0x35deb8u: goto label_35deb8;
        case 0x35debcu: goto label_35debc;
        case 0x35dec0u: goto label_35dec0;
        case 0x35dec4u: goto label_35dec4;
        case 0x35dec8u: goto label_35dec8;
        case 0x35deccu: goto label_35decc;
        case 0x35ded0u: goto label_35ded0;
        case 0x35ded4u: goto label_35ded4;
        case 0x35ded8u: goto label_35ded8;
        case 0x35dedcu: goto label_35dedc;
        case 0x35dee0u: goto label_35dee0;
        case 0x35dee4u: goto label_35dee4;
        case 0x35dee8u: goto label_35dee8;
        case 0x35deecu: goto label_35deec;
        case 0x35def0u: goto label_35def0;
        case 0x35def4u: goto label_35def4;
        case 0x35def8u: goto label_35def8;
        case 0x35defcu: goto label_35defc;
        case 0x35df00u: goto label_35df00;
        case 0x35df04u: goto label_35df04;
        case 0x35df08u: goto label_35df08;
        case 0x35df0cu: goto label_35df0c;
        case 0x35df10u: goto label_35df10;
        case 0x35df14u: goto label_35df14;
        case 0x35df18u: goto label_35df18;
        case 0x35df1cu: goto label_35df1c;
        case 0x35df20u: goto label_35df20;
        case 0x35df24u: goto label_35df24;
        case 0x35df28u: goto label_35df28;
        case 0x35df2cu: goto label_35df2c;
        case 0x35df30u: goto label_35df30;
        case 0x35df34u: goto label_35df34;
        case 0x35df38u: goto label_35df38;
        case 0x35df3cu: goto label_35df3c;
        case 0x35df40u: goto label_35df40;
        case 0x35df44u: goto label_35df44;
        case 0x35df48u: goto label_35df48;
        case 0x35df4cu: goto label_35df4c;
        case 0x35df50u: goto label_35df50;
        case 0x35df54u: goto label_35df54;
        case 0x35df58u: goto label_35df58;
        case 0x35df5cu: goto label_35df5c;
        case 0x35df60u: goto label_35df60;
        case 0x35df64u: goto label_35df64;
        case 0x35df68u: goto label_35df68;
        case 0x35df6cu: goto label_35df6c;
        case 0x35df70u: goto label_35df70;
        case 0x35df74u: goto label_35df74;
        case 0x35df78u: goto label_35df78;
        case 0x35df7cu: goto label_35df7c;
        case 0x35df80u: goto label_35df80;
        case 0x35df84u: goto label_35df84;
        case 0x35df88u: goto label_35df88;
        case 0x35df8cu: goto label_35df8c;
        case 0x35df90u: goto label_35df90;
        case 0x35df94u: goto label_35df94;
        case 0x35df98u: goto label_35df98;
        case 0x35df9cu: goto label_35df9c;
        case 0x35dfa0u: goto label_35dfa0;
        case 0x35dfa4u: goto label_35dfa4;
        case 0x35dfa8u: goto label_35dfa8;
        case 0x35dfacu: goto label_35dfac;
        case 0x35dfb0u: goto label_35dfb0;
        case 0x35dfb4u: goto label_35dfb4;
        case 0x35dfb8u: goto label_35dfb8;
        case 0x35dfbcu: goto label_35dfbc;
        case 0x35dfc0u: goto label_35dfc0;
        case 0x35dfc4u: goto label_35dfc4;
        case 0x35dfc8u: goto label_35dfc8;
        case 0x35dfccu: goto label_35dfcc;
        case 0x35dfd0u: goto label_35dfd0;
        case 0x35dfd4u: goto label_35dfd4;
        case 0x35dfd8u: goto label_35dfd8;
        case 0x35dfdcu: goto label_35dfdc;
        case 0x35dfe0u: goto label_35dfe0;
        case 0x35dfe4u: goto label_35dfe4;
        case 0x35dfe8u: goto label_35dfe8;
        case 0x35dfecu: goto label_35dfec;
        case 0x35dff0u: goto label_35dff0;
        case 0x35dff4u: goto label_35dff4;
        case 0x35dff8u: goto label_35dff8;
        case 0x35dffcu: goto label_35dffc;
        case 0x35e000u: goto label_35e000;
        case 0x35e004u: goto label_35e004;
        case 0x35e008u: goto label_35e008;
        case 0x35e00cu: goto label_35e00c;
        case 0x35e010u: goto label_35e010;
        case 0x35e014u: goto label_35e014;
        case 0x35e018u: goto label_35e018;
        case 0x35e01cu: goto label_35e01c;
        case 0x35e020u: goto label_35e020;
        case 0x35e024u: goto label_35e024;
        case 0x35e028u: goto label_35e028;
        case 0x35e02cu: goto label_35e02c;
        case 0x35e030u: goto label_35e030;
        case 0x35e034u: goto label_35e034;
        case 0x35e038u: goto label_35e038;
        case 0x35e03cu: goto label_35e03c;
        case 0x35e040u: goto label_35e040;
        case 0x35e044u: goto label_35e044;
        case 0x35e048u: goto label_35e048;
        case 0x35e04cu: goto label_35e04c;
        case 0x35e050u: goto label_35e050;
        case 0x35e054u: goto label_35e054;
        case 0x35e058u: goto label_35e058;
        case 0x35e05cu: goto label_35e05c;
        case 0x35e060u: goto label_35e060;
        case 0x35e064u: goto label_35e064;
        case 0x35e068u: goto label_35e068;
        case 0x35e06cu: goto label_35e06c;
        case 0x35e070u: goto label_35e070;
        case 0x35e074u: goto label_35e074;
        case 0x35e078u: goto label_35e078;
        case 0x35e07cu: goto label_35e07c;
        case 0x35e080u: goto label_35e080;
        case 0x35e084u: goto label_35e084;
        case 0x35e088u: goto label_35e088;
        case 0x35e08cu: goto label_35e08c;
        case 0x35e090u: goto label_35e090;
        case 0x35e094u: goto label_35e094;
        case 0x35e098u: goto label_35e098;
        case 0x35e09cu: goto label_35e09c;
        case 0x35e0a0u: goto label_35e0a0;
        case 0x35e0a4u: goto label_35e0a4;
        case 0x35e0a8u: goto label_35e0a8;
        case 0x35e0acu: goto label_35e0ac;
        case 0x35e0b0u: goto label_35e0b0;
        case 0x35e0b4u: goto label_35e0b4;
        case 0x35e0b8u: goto label_35e0b8;
        case 0x35e0bcu: goto label_35e0bc;
        case 0x35e0c0u: goto label_35e0c0;
        case 0x35e0c4u: goto label_35e0c4;
        case 0x35e0c8u: goto label_35e0c8;
        case 0x35e0ccu: goto label_35e0cc;
        case 0x35e0d0u: goto label_35e0d0;
        case 0x35e0d4u: goto label_35e0d4;
        case 0x35e0d8u: goto label_35e0d8;
        case 0x35e0dcu: goto label_35e0dc;
        case 0x35e0e0u: goto label_35e0e0;
        case 0x35e0e4u: goto label_35e0e4;
        case 0x35e0e8u: goto label_35e0e8;
        case 0x35e0ecu: goto label_35e0ec;
        case 0x35e0f0u: goto label_35e0f0;
        case 0x35e0f4u: goto label_35e0f4;
        case 0x35e0f8u: goto label_35e0f8;
        case 0x35e0fcu: goto label_35e0fc;
        case 0x35e100u: goto label_35e100;
        case 0x35e104u: goto label_35e104;
        case 0x35e108u: goto label_35e108;
        case 0x35e10cu: goto label_35e10c;
        case 0x35e110u: goto label_35e110;
        case 0x35e114u: goto label_35e114;
        case 0x35e118u: goto label_35e118;
        case 0x35e11cu: goto label_35e11c;
        case 0x35e120u: goto label_35e120;
        case 0x35e124u: goto label_35e124;
        case 0x35e128u: goto label_35e128;
        case 0x35e12cu: goto label_35e12c;
        case 0x35e130u: goto label_35e130;
        case 0x35e134u: goto label_35e134;
        case 0x35e138u: goto label_35e138;
        case 0x35e13cu: goto label_35e13c;
        case 0x35e140u: goto label_35e140;
        case 0x35e144u: goto label_35e144;
        case 0x35e148u: goto label_35e148;
        case 0x35e14cu: goto label_35e14c;
        case 0x35e150u: goto label_35e150;
        case 0x35e154u: goto label_35e154;
        case 0x35e158u: goto label_35e158;
        case 0x35e15cu: goto label_35e15c;
        case 0x35e160u: goto label_35e160;
        case 0x35e164u: goto label_35e164;
        case 0x35e168u: goto label_35e168;
        case 0x35e16cu: goto label_35e16c;
        case 0x35e170u: goto label_35e170;
        case 0x35e174u: goto label_35e174;
        case 0x35e178u: goto label_35e178;
        case 0x35e17cu: goto label_35e17c;
        case 0x35e180u: goto label_35e180;
        case 0x35e184u: goto label_35e184;
        case 0x35e188u: goto label_35e188;
        case 0x35e18cu: goto label_35e18c;
        case 0x35e190u: goto label_35e190;
        case 0x35e194u: goto label_35e194;
        case 0x35e198u: goto label_35e198;
        case 0x35e19cu: goto label_35e19c;
        case 0x35e1a0u: goto label_35e1a0;
        case 0x35e1a4u: goto label_35e1a4;
        case 0x35e1a8u: goto label_35e1a8;
        case 0x35e1acu: goto label_35e1ac;
        case 0x35e1b0u: goto label_35e1b0;
        case 0x35e1b4u: goto label_35e1b4;
        case 0x35e1b8u: goto label_35e1b8;
        case 0x35e1bcu: goto label_35e1bc;
        case 0x35e1c0u: goto label_35e1c0;
        case 0x35e1c4u: goto label_35e1c4;
        case 0x35e1c8u: goto label_35e1c8;
        case 0x35e1ccu: goto label_35e1cc;
        case 0x35e1d0u: goto label_35e1d0;
        case 0x35e1d4u: goto label_35e1d4;
        case 0x35e1d8u: goto label_35e1d8;
        case 0x35e1dcu: goto label_35e1dc;
        case 0x35e1e0u: goto label_35e1e0;
        case 0x35e1e4u: goto label_35e1e4;
        case 0x35e1e8u: goto label_35e1e8;
        case 0x35e1ecu: goto label_35e1ec;
        case 0x35e1f0u: goto label_35e1f0;
        case 0x35e1f4u: goto label_35e1f4;
        case 0x35e1f8u: goto label_35e1f8;
        case 0x35e1fcu: goto label_35e1fc;
        case 0x35e200u: goto label_35e200;
        case 0x35e204u: goto label_35e204;
        case 0x35e208u: goto label_35e208;
        case 0x35e20cu: goto label_35e20c;
        case 0x35e210u: goto label_35e210;
        case 0x35e214u: goto label_35e214;
        case 0x35e218u: goto label_35e218;
        case 0x35e21cu: goto label_35e21c;
        case 0x35e220u: goto label_35e220;
        case 0x35e224u: goto label_35e224;
        case 0x35e228u: goto label_35e228;
        case 0x35e22cu: goto label_35e22c;
        case 0x35e230u: goto label_35e230;
        case 0x35e234u: goto label_35e234;
        case 0x35e238u: goto label_35e238;
        case 0x35e23cu: goto label_35e23c;
        case 0x35e240u: goto label_35e240;
        case 0x35e244u: goto label_35e244;
        case 0x35e248u: goto label_35e248;
        case 0x35e24cu: goto label_35e24c;
        case 0x35e250u: goto label_35e250;
        case 0x35e254u: goto label_35e254;
        case 0x35e258u: goto label_35e258;
        case 0x35e25cu: goto label_35e25c;
        case 0x35e260u: goto label_35e260;
        case 0x35e264u: goto label_35e264;
        case 0x35e268u: goto label_35e268;
        case 0x35e26cu: goto label_35e26c;
        case 0x35e270u: goto label_35e270;
        case 0x35e274u: goto label_35e274;
        case 0x35e278u: goto label_35e278;
        case 0x35e27cu: goto label_35e27c;
        case 0x35e280u: goto label_35e280;
        case 0x35e284u: goto label_35e284;
        case 0x35e288u: goto label_35e288;
        case 0x35e28cu: goto label_35e28c;
        case 0x35e290u: goto label_35e290;
        case 0x35e294u: goto label_35e294;
        case 0x35e298u: goto label_35e298;
        case 0x35e29cu: goto label_35e29c;
        case 0x35e2a0u: goto label_35e2a0;
        case 0x35e2a4u: goto label_35e2a4;
        case 0x35e2a8u: goto label_35e2a8;
        case 0x35e2acu: goto label_35e2ac;
        case 0x35e2b0u: goto label_35e2b0;
        case 0x35e2b4u: goto label_35e2b4;
        case 0x35e2b8u: goto label_35e2b8;
        case 0x35e2bcu: goto label_35e2bc;
        case 0x35e2c0u: goto label_35e2c0;
        case 0x35e2c4u: goto label_35e2c4;
        case 0x35e2c8u: goto label_35e2c8;
        case 0x35e2ccu: goto label_35e2cc;
        case 0x35e2d0u: goto label_35e2d0;
        case 0x35e2d4u: goto label_35e2d4;
        case 0x35e2d8u: goto label_35e2d8;
        case 0x35e2dcu: goto label_35e2dc;
        case 0x35e2e0u: goto label_35e2e0;
        case 0x35e2e4u: goto label_35e2e4;
        case 0x35e2e8u: goto label_35e2e8;
        case 0x35e2ecu: goto label_35e2ec;
        case 0x35e2f0u: goto label_35e2f0;
        case 0x35e2f4u: goto label_35e2f4;
        case 0x35e2f8u: goto label_35e2f8;
        case 0x35e2fcu: goto label_35e2fc;
        case 0x35e300u: goto label_35e300;
        case 0x35e304u: goto label_35e304;
        case 0x35e308u: goto label_35e308;
        case 0x35e30cu: goto label_35e30c;
        case 0x35e310u: goto label_35e310;
        case 0x35e314u: goto label_35e314;
        case 0x35e318u: goto label_35e318;
        case 0x35e31cu: goto label_35e31c;
        case 0x35e320u: goto label_35e320;
        case 0x35e324u: goto label_35e324;
        case 0x35e328u: goto label_35e328;
        case 0x35e32cu: goto label_35e32c;
        case 0x35e330u: goto label_35e330;
        case 0x35e334u: goto label_35e334;
        case 0x35e338u: goto label_35e338;
        case 0x35e33cu: goto label_35e33c;
        case 0x35e340u: goto label_35e340;
        case 0x35e344u: goto label_35e344;
        case 0x35e348u: goto label_35e348;
        case 0x35e34cu: goto label_35e34c;
        case 0x35e350u: goto label_35e350;
        case 0x35e354u: goto label_35e354;
        case 0x35e358u: goto label_35e358;
        case 0x35e35cu: goto label_35e35c;
        case 0x35e360u: goto label_35e360;
        case 0x35e364u: goto label_35e364;
        case 0x35e368u: goto label_35e368;
        case 0x35e36cu: goto label_35e36c;
        case 0x35e370u: goto label_35e370;
        case 0x35e374u: goto label_35e374;
        case 0x35e378u: goto label_35e378;
        case 0x35e37cu: goto label_35e37c;
        case 0x35e380u: goto label_35e380;
        case 0x35e384u: goto label_35e384;
        case 0x35e388u: goto label_35e388;
        case 0x35e38cu: goto label_35e38c;
        case 0x35e390u: goto label_35e390;
        case 0x35e394u: goto label_35e394;
        case 0x35e398u: goto label_35e398;
        case 0x35e39cu: goto label_35e39c;
        case 0x35e3a0u: goto label_35e3a0;
        case 0x35e3a4u: goto label_35e3a4;
        case 0x35e3a8u: goto label_35e3a8;
        case 0x35e3acu: goto label_35e3ac;
        case 0x35e3b0u: goto label_35e3b0;
        case 0x35e3b4u: goto label_35e3b4;
        case 0x35e3b8u: goto label_35e3b8;
        case 0x35e3bcu: goto label_35e3bc;
        case 0x35e3c0u: goto label_35e3c0;
        case 0x35e3c4u: goto label_35e3c4;
        case 0x35e3c8u: goto label_35e3c8;
        case 0x35e3ccu: goto label_35e3cc;
        case 0x35e3d0u: goto label_35e3d0;
        case 0x35e3d4u: goto label_35e3d4;
        case 0x35e3d8u: goto label_35e3d8;
        case 0x35e3dcu: goto label_35e3dc;
        case 0x35e3e0u: goto label_35e3e0;
        case 0x35e3e4u: goto label_35e3e4;
        case 0x35e3e8u: goto label_35e3e8;
        case 0x35e3ecu: goto label_35e3ec;
        case 0x35e3f0u: goto label_35e3f0;
        case 0x35e3f4u: goto label_35e3f4;
        case 0x35e3f8u: goto label_35e3f8;
        case 0x35e3fcu: goto label_35e3fc;
        case 0x35e400u: goto label_35e400;
        case 0x35e404u: goto label_35e404;
        case 0x35e408u: goto label_35e408;
        case 0x35e40cu: goto label_35e40c;
        case 0x35e410u: goto label_35e410;
        case 0x35e414u: goto label_35e414;
        case 0x35e418u: goto label_35e418;
        case 0x35e41cu: goto label_35e41c;
        case 0x35e420u: goto label_35e420;
        case 0x35e424u: goto label_35e424;
        case 0x35e428u: goto label_35e428;
        case 0x35e42cu: goto label_35e42c;
        case 0x35e430u: goto label_35e430;
        case 0x35e434u: goto label_35e434;
        case 0x35e438u: goto label_35e438;
        case 0x35e43cu: goto label_35e43c;
        case 0x35e440u: goto label_35e440;
        case 0x35e444u: goto label_35e444;
        case 0x35e448u: goto label_35e448;
        case 0x35e44cu: goto label_35e44c;
        case 0x35e450u: goto label_35e450;
        case 0x35e454u: goto label_35e454;
        case 0x35e458u: goto label_35e458;
        case 0x35e45cu: goto label_35e45c;
        case 0x35e460u: goto label_35e460;
        case 0x35e464u: goto label_35e464;
        case 0x35e468u: goto label_35e468;
        case 0x35e46cu: goto label_35e46c;
        case 0x35e470u: goto label_35e470;
        case 0x35e474u: goto label_35e474;
        case 0x35e478u: goto label_35e478;
        case 0x35e47cu: goto label_35e47c;
        case 0x35e480u: goto label_35e480;
        case 0x35e484u: goto label_35e484;
        case 0x35e488u: goto label_35e488;
        case 0x35e48cu: goto label_35e48c;
        case 0x35e490u: goto label_35e490;
        case 0x35e494u: goto label_35e494;
        case 0x35e498u: goto label_35e498;
        case 0x35e49cu: goto label_35e49c;
        case 0x35e4a0u: goto label_35e4a0;
        case 0x35e4a4u: goto label_35e4a4;
        case 0x35e4a8u: goto label_35e4a8;
        case 0x35e4acu: goto label_35e4ac;
        case 0x35e4b0u: goto label_35e4b0;
        case 0x35e4b4u: goto label_35e4b4;
        case 0x35e4b8u: goto label_35e4b8;
        case 0x35e4bcu: goto label_35e4bc;
        case 0x35e4c0u: goto label_35e4c0;
        case 0x35e4c4u: goto label_35e4c4;
        case 0x35e4c8u: goto label_35e4c8;
        case 0x35e4ccu: goto label_35e4cc;
        case 0x35e4d0u: goto label_35e4d0;
        case 0x35e4d4u: goto label_35e4d4;
        case 0x35e4d8u: goto label_35e4d8;
        case 0x35e4dcu: goto label_35e4dc;
        case 0x35e4e0u: goto label_35e4e0;
        case 0x35e4e4u: goto label_35e4e4;
        case 0x35e4e8u: goto label_35e4e8;
        case 0x35e4ecu: goto label_35e4ec;
        case 0x35e4f0u: goto label_35e4f0;
        case 0x35e4f4u: goto label_35e4f4;
        case 0x35e4f8u: goto label_35e4f8;
        case 0x35e4fcu: goto label_35e4fc;
        case 0x35e500u: goto label_35e500;
        case 0x35e504u: goto label_35e504;
        case 0x35e508u: goto label_35e508;
        case 0x35e50cu: goto label_35e50c;
        case 0x35e510u: goto label_35e510;
        case 0x35e514u: goto label_35e514;
        case 0x35e518u: goto label_35e518;
        case 0x35e51cu: goto label_35e51c;
        case 0x35e520u: goto label_35e520;
        case 0x35e524u: goto label_35e524;
        case 0x35e528u: goto label_35e528;
        case 0x35e52cu: goto label_35e52c;
        case 0x35e530u: goto label_35e530;
        case 0x35e534u: goto label_35e534;
        case 0x35e538u: goto label_35e538;
        case 0x35e53cu: goto label_35e53c;
        case 0x35e540u: goto label_35e540;
        case 0x35e544u: goto label_35e544;
        case 0x35e548u: goto label_35e548;
        case 0x35e54cu: goto label_35e54c;
        case 0x35e550u: goto label_35e550;
        case 0x35e554u: goto label_35e554;
        case 0x35e558u: goto label_35e558;
        case 0x35e55cu: goto label_35e55c;
        case 0x35e560u: goto label_35e560;
        case 0x35e564u: goto label_35e564;
        case 0x35e568u: goto label_35e568;
        case 0x35e56cu: goto label_35e56c;
        case 0x35e570u: goto label_35e570;
        case 0x35e574u: goto label_35e574;
        case 0x35e578u: goto label_35e578;
        case 0x35e57cu: goto label_35e57c;
        case 0x35e580u: goto label_35e580;
        case 0x35e584u: goto label_35e584;
        case 0x35e588u: goto label_35e588;
        case 0x35e58cu: goto label_35e58c;
        case 0x35e590u: goto label_35e590;
        case 0x35e594u: goto label_35e594;
        case 0x35e598u: goto label_35e598;
        case 0x35e59cu: goto label_35e59c;
        case 0x35e5a0u: goto label_35e5a0;
        case 0x35e5a4u: goto label_35e5a4;
        case 0x35e5a8u: goto label_35e5a8;
        case 0x35e5acu: goto label_35e5ac;
        case 0x35e5b0u: goto label_35e5b0;
        case 0x35e5b4u: goto label_35e5b4;
        case 0x35e5b8u: goto label_35e5b8;
        case 0x35e5bcu: goto label_35e5bc;
        case 0x35e5c0u: goto label_35e5c0;
        case 0x35e5c4u: goto label_35e5c4;
        case 0x35e5c8u: goto label_35e5c8;
        case 0x35e5ccu: goto label_35e5cc;
        case 0x35e5d0u: goto label_35e5d0;
        case 0x35e5d4u: goto label_35e5d4;
        case 0x35e5d8u: goto label_35e5d8;
        case 0x35e5dcu: goto label_35e5dc;
        case 0x35e5e0u: goto label_35e5e0;
        case 0x35e5e4u: goto label_35e5e4;
        case 0x35e5e8u: goto label_35e5e8;
        case 0x35e5ecu: goto label_35e5ec;
        case 0x35e5f0u: goto label_35e5f0;
        case 0x35e5f4u: goto label_35e5f4;
        case 0x35e5f8u: goto label_35e5f8;
        case 0x35e5fcu: goto label_35e5fc;
        case 0x35e600u: goto label_35e600;
        case 0x35e604u: goto label_35e604;
        case 0x35e608u: goto label_35e608;
        case 0x35e60cu: goto label_35e60c;
        case 0x35e610u: goto label_35e610;
        case 0x35e614u: goto label_35e614;
        case 0x35e618u: goto label_35e618;
        case 0x35e61cu: goto label_35e61c;
        case 0x35e620u: goto label_35e620;
        case 0x35e624u: goto label_35e624;
        case 0x35e628u: goto label_35e628;
        case 0x35e62cu: goto label_35e62c;
        case 0x35e630u: goto label_35e630;
        case 0x35e634u: goto label_35e634;
        case 0x35e638u: goto label_35e638;
        case 0x35e63cu: goto label_35e63c;
        case 0x35e640u: goto label_35e640;
        case 0x35e644u: goto label_35e644;
        case 0x35e648u: goto label_35e648;
        case 0x35e64cu: goto label_35e64c;
        case 0x35e650u: goto label_35e650;
        case 0x35e654u: goto label_35e654;
        case 0x35e658u: goto label_35e658;
        case 0x35e65cu: goto label_35e65c;
        case 0x35e660u: goto label_35e660;
        case 0x35e664u: goto label_35e664;
        case 0x35e668u: goto label_35e668;
        case 0x35e66cu: goto label_35e66c;
        case 0x35e670u: goto label_35e670;
        case 0x35e674u: goto label_35e674;
        case 0x35e678u: goto label_35e678;
        case 0x35e67cu: goto label_35e67c;
        case 0x35e680u: goto label_35e680;
        case 0x35e684u: goto label_35e684;
        case 0x35e688u: goto label_35e688;
        case 0x35e68cu: goto label_35e68c;
        case 0x35e690u: goto label_35e690;
        case 0x35e694u: goto label_35e694;
        case 0x35e698u: goto label_35e698;
        case 0x35e69cu: goto label_35e69c;
        case 0x35e6a0u: goto label_35e6a0;
        case 0x35e6a4u: goto label_35e6a4;
        case 0x35e6a8u: goto label_35e6a8;
        case 0x35e6acu: goto label_35e6ac;
        case 0x35e6b0u: goto label_35e6b0;
        case 0x35e6b4u: goto label_35e6b4;
        case 0x35e6b8u: goto label_35e6b8;
        case 0x35e6bcu: goto label_35e6bc;
        case 0x35e6c0u: goto label_35e6c0;
        case 0x35e6c4u: goto label_35e6c4;
        case 0x35e6c8u: goto label_35e6c8;
        case 0x35e6ccu: goto label_35e6cc;
        case 0x35e6d0u: goto label_35e6d0;
        case 0x35e6d4u: goto label_35e6d4;
        case 0x35e6d8u: goto label_35e6d8;
        case 0x35e6dcu: goto label_35e6dc;
        case 0x35e6e0u: goto label_35e6e0;
        case 0x35e6e4u: goto label_35e6e4;
        case 0x35e6e8u: goto label_35e6e8;
        case 0x35e6ecu: goto label_35e6ec;
        case 0x35e6f0u: goto label_35e6f0;
        case 0x35e6f4u: goto label_35e6f4;
        case 0x35e6f8u: goto label_35e6f8;
        case 0x35e6fcu: goto label_35e6fc;
        case 0x35e700u: goto label_35e700;
        case 0x35e704u: goto label_35e704;
        case 0x35e708u: goto label_35e708;
        case 0x35e70cu: goto label_35e70c;
        case 0x35e710u: goto label_35e710;
        case 0x35e714u: goto label_35e714;
        case 0x35e718u: goto label_35e718;
        case 0x35e71cu: goto label_35e71c;
        case 0x35e720u: goto label_35e720;
        case 0x35e724u: goto label_35e724;
        case 0x35e728u: goto label_35e728;
        case 0x35e72cu: goto label_35e72c;
        case 0x35e730u: goto label_35e730;
        case 0x35e734u: goto label_35e734;
        case 0x35e738u: goto label_35e738;
        case 0x35e73cu: goto label_35e73c;
        case 0x35e740u: goto label_35e740;
        case 0x35e744u: goto label_35e744;
        case 0x35e748u: goto label_35e748;
        case 0x35e74cu: goto label_35e74c;
        case 0x35e750u: goto label_35e750;
        case 0x35e754u: goto label_35e754;
        case 0x35e758u: goto label_35e758;
        case 0x35e75cu: goto label_35e75c;
        case 0x35e760u: goto label_35e760;
        case 0x35e764u: goto label_35e764;
        case 0x35e768u: goto label_35e768;
        case 0x35e76cu: goto label_35e76c;
        case 0x35e770u: goto label_35e770;
        case 0x35e774u: goto label_35e774;
        case 0x35e778u: goto label_35e778;
        case 0x35e77cu: goto label_35e77c;
        case 0x35e780u: goto label_35e780;
        case 0x35e784u: goto label_35e784;
        case 0x35e788u: goto label_35e788;
        case 0x35e78cu: goto label_35e78c;
        case 0x35e790u: goto label_35e790;
        case 0x35e794u: goto label_35e794;
        case 0x35e798u: goto label_35e798;
        case 0x35e79cu: goto label_35e79c;
        case 0x35e7a0u: goto label_35e7a0;
        case 0x35e7a4u: goto label_35e7a4;
        case 0x35e7a8u: goto label_35e7a8;
        case 0x35e7acu: goto label_35e7ac;
        case 0x35e7b0u: goto label_35e7b0;
        case 0x35e7b4u: goto label_35e7b4;
        case 0x35e7b8u: goto label_35e7b8;
        case 0x35e7bcu: goto label_35e7bc;
        case 0x35e7c0u: goto label_35e7c0;
        case 0x35e7c4u: goto label_35e7c4;
        case 0x35e7c8u: goto label_35e7c8;
        case 0x35e7ccu: goto label_35e7cc;
        case 0x35e7d0u: goto label_35e7d0;
        case 0x35e7d4u: goto label_35e7d4;
        case 0x35e7d8u: goto label_35e7d8;
        case 0x35e7dcu: goto label_35e7dc;
        case 0x35e7e0u: goto label_35e7e0;
        case 0x35e7e4u: goto label_35e7e4;
        case 0x35e7e8u: goto label_35e7e8;
        case 0x35e7ecu: goto label_35e7ec;
        case 0x35e7f0u: goto label_35e7f0;
        case 0x35e7f4u: goto label_35e7f4;
        case 0x35e7f8u: goto label_35e7f8;
        case 0x35e7fcu: goto label_35e7fc;
        case 0x35e800u: goto label_35e800;
        case 0x35e804u: goto label_35e804;
        case 0x35e808u: goto label_35e808;
        case 0x35e80cu: goto label_35e80c;
        case 0x35e810u: goto label_35e810;
        case 0x35e814u: goto label_35e814;
        case 0x35e818u: goto label_35e818;
        case 0x35e81cu: goto label_35e81c;
        case 0x35e820u: goto label_35e820;
        case 0x35e824u: goto label_35e824;
        case 0x35e828u: goto label_35e828;
        case 0x35e82cu: goto label_35e82c;
        case 0x35e830u: goto label_35e830;
        case 0x35e834u: goto label_35e834;
        case 0x35e838u: goto label_35e838;
        case 0x35e83cu: goto label_35e83c;
        case 0x35e840u: goto label_35e840;
        case 0x35e844u: goto label_35e844;
        case 0x35e848u: goto label_35e848;
        case 0x35e84cu: goto label_35e84c;
        case 0x35e850u: goto label_35e850;
        case 0x35e854u: goto label_35e854;
        case 0x35e858u: goto label_35e858;
        case 0x35e85cu: goto label_35e85c;
        case 0x35e860u: goto label_35e860;
        case 0x35e864u: goto label_35e864;
        case 0x35e868u: goto label_35e868;
        case 0x35e86cu: goto label_35e86c;
        case 0x35e870u: goto label_35e870;
        case 0x35e874u: goto label_35e874;
        case 0x35e878u: goto label_35e878;
        case 0x35e87cu: goto label_35e87c;
        case 0x35e880u: goto label_35e880;
        case 0x35e884u: goto label_35e884;
        case 0x35e888u: goto label_35e888;
        case 0x35e88cu: goto label_35e88c;
        case 0x35e890u: goto label_35e890;
        case 0x35e894u: goto label_35e894;
        case 0x35e898u: goto label_35e898;
        case 0x35e89cu: goto label_35e89c;
        case 0x35e8a0u: goto label_35e8a0;
        case 0x35e8a4u: goto label_35e8a4;
        case 0x35e8a8u: goto label_35e8a8;
        case 0x35e8acu: goto label_35e8ac;
        case 0x35e8b0u: goto label_35e8b0;
        case 0x35e8b4u: goto label_35e8b4;
        case 0x35e8b8u: goto label_35e8b8;
        case 0x35e8bcu: goto label_35e8bc;
        case 0x35e8c0u: goto label_35e8c0;
        case 0x35e8c4u: goto label_35e8c4;
        case 0x35e8c8u: goto label_35e8c8;
        case 0x35e8ccu: goto label_35e8cc;
        case 0x35e8d0u: goto label_35e8d0;
        case 0x35e8d4u: goto label_35e8d4;
        case 0x35e8d8u: goto label_35e8d8;
        case 0x35e8dcu: goto label_35e8dc;
        case 0x35e8e0u: goto label_35e8e0;
        case 0x35e8e4u: goto label_35e8e4;
        case 0x35e8e8u: goto label_35e8e8;
        case 0x35e8ecu: goto label_35e8ec;
        case 0x35e8f0u: goto label_35e8f0;
        case 0x35e8f4u: goto label_35e8f4;
        case 0x35e8f8u: goto label_35e8f8;
        case 0x35e8fcu: goto label_35e8fc;
        case 0x35e900u: goto label_35e900;
        case 0x35e904u: goto label_35e904;
        case 0x35e908u: goto label_35e908;
        case 0x35e90cu: goto label_35e90c;
        case 0x35e910u: goto label_35e910;
        case 0x35e914u: goto label_35e914;
        case 0x35e918u: goto label_35e918;
        case 0x35e91cu: goto label_35e91c;
        case 0x35e920u: goto label_35e920;
        case 0x35e924u: goto label_35e924;
        case 0x35e928u: goto label_35e928;
        case 0x35e92cu: goto label_35e92c;
        case 0x35e930u: goto label_35e930;
        case 0x35e934u: goto label_35e934;
        case 0x35e938u: goto label_35e938;
        case 0x35e93cu: goto label_35e93c;
        case 0x35e940u: goto label_35e940;
        case 0x35e944u: goto label_35e944;
        case 0x35e948u: goto label_35e948;
        case 0x35e94cu: goto label_35e94c;
        case 0x35e950u: goto label_35e950;
        case 0x35e954u: goto label_35e954;
        case 0x35e958u: goto label_35e958;
        case 0x35e95cu: goto label_35e95c;
        case 0x35e960u: goto label_35e960;
        case 0x35e964u: goto label_35e964;
        case 0x35e968u: goto label_35e968;
        case 0x35e96cu: goto label_35e96c;
        case 0x35e970u: goto label_35e970;
        case 0x35e974u: goto label_35e974;
        default: break;
    }

    ctx->pc = 0x35dea0u;

label_35dea0:
    // 0x35dea0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x35dea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_35dea4:
    // 0x35dea4: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x35dea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
label_35dea8:
    // 0x35dea8: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x35dea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
label_35deac:
    // 0x35deac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35deacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35deb0:
    // 0x35deb0: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x35deb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
label_35deb4:
    // 0x35deb4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x35deb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_35deb8:
    // 0x35deb8: 0xffb70148  sd          $s7, 0x148($sp)
    ctx->pc = 0x35deb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 23));
label_35debc:
    // 0x35debc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x35debcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_35dec0:
    // 0x35dec0: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x35dec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
label_35dec4:
    // 0x35dec4: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x35dec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
label_35dec8:
    // 0x35dec8: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x35dec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
label_35decc:
    // 0x35decc: 0xffbe0150  sd          $fp, 0x150($sp)
    ctx->pc = 0x35deccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 30));
label_35ded0:
    // 0x35ded0: 0xffbf0158  sd          $ra, 0x158($sp)
    ctx->pc = 0x35ded0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 31));
label_35ded4:
    // 0x35ded4: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x35ded4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_35ded8:
    // 0x35ded8: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x35ded8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
label_35dedc:
    // 0x35dedc: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x35dedcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_35dee0:
    // 0x35dee0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x35dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_35dee4:
    // 0x35dee4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_35dee8:
    if (ctx->pc == 0x35DEE8u) {
        ctx->pc = 0x35DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DEE4u;
        // 0x35dee8: 0xe0b82d  daddu       $s7, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DEECu;
        goto label_35deec;
    }
    ctx->pc = 0x35DEE4u;
    {
        const bool branch_taken_0x35dee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DEE4u;
        // 0x35dee8: 0xe0b82d  daddu       $s7, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dee4) {
            ctx->pc = 0x35DEF4u;
            goto label_35def4;
        }
    }
    ctx->pc = 0x35DEECu;
label_35deec:
    // 0x35deec: 0x10000293  b           . + 4 + (0x293 << 2)
label_35def0:
    if (ctx->pc == 0x35DEF0u) {
        ctx->pc = 0x35DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DEECu;
        // 0x35def0: 0xae130054  sw          $s3, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DEF4u;
        goto label_35def4;
    }
    ctx->pc = 0x35DEECu;
    {
        const bool branch_taken_0x35deec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DEECu;
        // 0x35def0: 0xae130054  sw          $s3, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35deec) {
            ctx->pc = 0x35E93Cu;
            goto label_35e93c;
        }
    }
    ctx->pc = 0x35DEF4u;
label_35def4:
    // 0x35def4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35def4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35def8:
    // 0x35def8: 0xc0d8de2  jal         func_363788
label_35defc:
    if (ctx->pc == 0x35DEFCu) {
        ctx->pc = 0x35DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DEF8u;
        // 0x35defc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DF00u;
        goto label_35df00;
    }
    ctx->pc = 0x35DEF8u;
    SET_GPR_U32(ctx, 31, 0x35DF00u);
    ctx->pc = 0x35DEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DEF8u;
    // 0x35defc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x35DEF8u, 0x35DF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DF00u;
label_35df00:
    // 0x35df00: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_35df04:
    if (ctx->pc == 0x35DF04u) {
        ctx->pc = 0x35DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DF00u;
        // 0x35df04: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DF08u;
        goto label_35df08;
    }
    ctx->pc = 0x35DF00u;
    {
        const bool branch_taken_0x35df00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35df00) {
            ctx->pc = 0x35DF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DF00u;
            // 0x35df04: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DF1Cu;
            goto label_35df1c;
        }
    }
    ctx->pc = 0x35DF08u;
label_35df08:
    // 0x35df08: 0xc0d8de2  jal         func_363788
label_35df0c:
    if (ctx->pc == 0x35DF0Cu) {
        ctx->pc = 0x35DF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DF08u;
        // 0x35df0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DF10u;
        goto label_35df10;
    }
    ctx->pc = 0x35DF08u;
    SET_GPR_U32(ctx, 31, 0x35DF10u);
    ctx->pc = 0x35DF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DF08u;
    // 0x35df0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x35DF08u, 0x35DF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DF10u;
label_35df10:
    // 0x35df10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35df10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35df14:
    // 0x35df14: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_35df18:
    if (ctx->pc == 0x35DF18u) {
        ctx->pc = 0x35DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DF14u;
        // 0x35df18: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DF1Cu;
        goto label_35df1c;
    }
    ctx->pc = 0x35DF14u;
    {
        const bool branch_taken_0x35df14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x35df14) {
            ctx->pc = 0x35DF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DF14u;
            // 0x35df18: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DF1Cu;
            goto label_35df1c;
        }
    }
    ctx->pc = 0x35DF1Cu;
label_35df1c:
    // 0x35df1c: 0x52200015  beql        $s1, $zero, . + 4 + (0x15 << 2)
label_35df20:
    if (ctx->pc == 0x35DF20u) {
        ctx->pc = 0x35DF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DF1Cu;
        // 0x35df20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DF24u;
        goto label_35df24;
    }
    ctx->pc = 0x35DF1Cu;
    {
        const bool branch_taken_0x35df1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x35df1c) {
            ctx->pc = 0x35DF20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DF1Cu;
            // 0x35df20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DF74u;
            goto label_35df74;
        }
    }
    ctx->pc = 0x35DF24u;
label_35df24:
    // 0x35df24: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x35df24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_35df28:
    // 0x35df28: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35df28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_35df2c:
    // 0x35df2c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_35df30:
    if (ctx->pc == 0x35DF30u) {
        ctx->pc = 0x35DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DF2Cu;
        // 0x35df30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DF34u;
        goto label_35df34;
    }
    ctx->pc = 0x35DF2Cu;
    {
        const bool branch_taken_0x35df2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35df2c) {
            ctx->pc = 0x35DF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DF2Cu;
            // 0x35df30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DF74u;
            goto label_35df74;
        }
    }
    ctx->pc = 0x35DF34u;
label_35df34:
    // 0x35df34: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x35df34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_35df38:
    // 0x35df38: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x35df38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_35df3c:
    // 0x35df3c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_35df40:
    if (ctx->pc == 0x35DF40u) {
        ctx->pc = 0x35DF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DF3Cu;
        // 0x35df40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DF44u;
        goto label_35df44;
    }
    ctx->pc = 0x35DF3Cu;
    {
        const bool branch_taken_0x35df3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35df3c) {
            ctx->pc = 0x35DF40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DF3Cu;
            // 0x35df40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DF74u;
            goto label_35df74;
        }
    }
    ctx->pc = 0x35DF44u;
label_35df44:
    // 0x35df44: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x35df44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
label_35df48:
    // 0x35df48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35df48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35df4c:
    // 0x35df4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x35df4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_35df50:
    // 0x35df50: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x35df50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_35df54:
    // 0x35df54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35df54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35df58:
    // 0x35df58: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x35df58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_35df5c:
    // 0x35df5c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x35df5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_35df60:
    // 0x35df60: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x35df60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_35df64:
    // 0x35df64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x35df64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35df68:
    // 0x35df68: 0xc0b98b0  jal         func_2E62C0
label_35df6c:
    if (ctx->pc == 0x35DF6Cu) {
        ctx->pc = 0x35DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DF68u;
        // 0x35df6c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DF70u;
        goto label_35df70;
    }
    ctx->pc = 0x35DF68u;
    SET_GPR_U32(ctx, 31, 0x35DF70u);
    ctx->pc = 0x35DF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DF68u;
    // 0x35df6c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E62C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E62C0u, 0x35DF68u, 0x35DF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DF70u;
label_35df70:
    // 0x35df70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35df70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35df74:
    // 0x35df74: 0xc08a1f2  jal         func_2287C8
label_35df78:
    if (ctx->pc == 0x35DF78u) {
        ctx->pc = 0x35DF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DF74u;
        // 0x35df78: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DF7Cu;
        goto label_35df7c;
    }
    ctx->pc = 0x35DF74u;
    SET_GPR_U32(ctx, 31, 0x35DF7Cu);
    ctx->pc = 0x35DF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DF74u;
    // 0x35df78: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x35DF74u, 0x35DF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DF7Cu;
label_35df7c:
    // 0x35df7c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x35df7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35df80:
    // 0x35df80: 0xc0f70ce  jal         func_3DC338
label_35df84:
    if (ctx->pc == 0x35DF84u) {
        ctx->pc = 0x35DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DF80u;
        // 0x35df84: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DF88u;
        goto label_35df88;
    }
    ctx->pc = 0x35DF80u;
    SET_GPR_U32(ctx, 31, 0x35DF88u);
    ctx->pc = 0x35DF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DF80u;
    // 0x35df84: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x35DF80u, 0x35DF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DF88u;
label_35df88:
    // 0x35df88: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_35df8c:
    if (ctx->pc == 0x35DF8Cu) {
        ctx->pc = 0x35DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DF88u;
        // 0x35df8c: 0xc68000b0  lwc1        $f0, 0xB0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DF90u;
        goto label_35df90;
    }
    ctx->pc = 0x35DF88u;
    {
        const bool branch_taken_0x35df88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35df88) {
            ctx->pc = 0x35DF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DF88u;
            // 0x35df8c: 0xc68000b0  lwc1        $f0, 0xB0($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DF9Cu;
            goto label_35df9c;
        }
    }
    ctx->pc = 0x35DF90u;
label_35df90:
    // 0x35df90: 0xc0c4900  jal         func_312400
label_35df94:
    if (ctx->pc == 0x35DF94u) {
        ctx->pc = 0x35DF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DF90u;
        // 0x35df94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DF98u;
        goto label_35df98;
    }
    ctx->pc = 0x35DF90u;
    SET_GPR_U32(ctx, 31, 0x35DF98u);
    ctx->pc = 0x35DF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DF90u;
    // 0x35df94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x35DF90u, 0x35DF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DF98u;
label_35df98:
    // 0x35df98: 0xc68000b0  lwc1        $f0, 0xB0($s4)
    ctx->pc = 0x35df98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35df9c:
    // 0x35df9c: 0x268200b0  addiu       $v0, $s4, 0xB0
    ctx->pc = 0x35df9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
label_35dfa0:
    // 0x35dfa0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x35dfa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_35dfa4:
    // 0x35dfa4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35dfa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35dfa8:
    // 0x35dfa8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x35dfa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_35dfac:
    // 0x35dfac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35dfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35dfb0:
    // 0x35dfb0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x35dfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35dfb4:
    // 0x35dfb4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x35dfb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_35dfb8:
    // 0x35dfb8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x35dfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35dfbc:
    // 0x35dfbc: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x35dfbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_35dfc0:
    // 0x35dfc0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x35dfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35dfc4:
    // 0x35dfc4: 0xc0d765e  jal         func_35D978
label_35dfc8:
    if (ctx->pc == 0x35DFC8u) {
        ctx->pc = 0x35DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DFC4u;
        // 0x35dfc8: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DFCCu;
        goto label_35dfcc;
    }
    ctx->pc = 0x35DFC4u;
    SET_GPR_U32(ctx, 31, 0x35DFCCu);
    ctx->pc = 0x35DFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DFC4u;
    // 0x35dfc8: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D978u, 0x35DFC4u, 0x35DFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DFCCu;
label_35dfcc:
    // 0x35dfcc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x35dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_35dfd0:
    // 0x35dfd0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35dfd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35dfd4:
    // 0x35dfd4: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x35dfd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_35dfd8:
    // 0x35dfd8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35dfd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35dfdc:
    // 0x35dfdc: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x35dfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_35dfe0:
    // 0x35dfe0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x35dfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35dfe4:
    // 0x35dfe4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x35dfe4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35dfe8:
    // 0x35dfe8: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x35dfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35dfec:
    // 0x35dfec: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x35dfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35dff0:
    // 0x35dff0: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x35dff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_35dff4:
    // 0x35dff4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x35dff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_35dff8:
    // 0x35dff8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x35dff8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_35dffc:
    // 0x35dffc: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x35dffcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_35e000:
    // 0x35e000: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x35e000u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_35e004:
    // 0x35e004: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x35e004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35e008:
    // 0x35e008: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x35e008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35e00c:
    // 0x35e00c: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x35e00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_35e010:
    // 0x35e010: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x35e010u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_35e014:
    // 0x35e014: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x35e014u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_35e018:
    // 0x35e018: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x35e018u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_35e01c:
    // 0x35e01c: 0x46140504  c1          0x140504
    ctx->pc = 0x35e01cu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_35e020:
    // 0x35e020: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x35e020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_35e024:
    // 0x35e024: 0xc0d8de2  jal         func_363788
label_35e028:
    if (ctx->pc == 0x35E028u) {
        ctx->pc = 0x35E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E024u;
        // 0x35e028: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E02Cu;
        goto label_35e02c;
    }
    ctx->pc = 0x35E024u;
    SET_GPR_U32(ctx, 31, 0x35E02Cu);
    ctx->pc = 0x35E028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E024u;
    // 0x35e028: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x35E024u, 0x35E02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E02Cu;
label_35e02c:
    // 0x35e02c: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x35e02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_35e030:
    // 0x35e030: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_35e034:
    if (ctx->pc == 0x35E034u) {
        ctx->pc = 0x35E034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E030u;
        // 0x35e034: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E038u;
        goto label_35e038;
    }
    ctx->pc = 0x35E030u;
    {
        const bool branch_taken_0x35e030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e030) {
            ctx->pc = 0x35E034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E030u;
            // 0x35e034: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E074u;
            goto label_35e074;
        }
    }
    ctx->pc = 0x35E038u;
label_35e038:
    // 0x35e038: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x35e038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_35e03c:
    // 0x35e03c: 0x8c4300a0  lw          $v1, 0xA0($v0)
    ctx->pc = 0x35e03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_35e040:
    // 0x35e040: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
label_35e044:
    if (ctx->pc == 0x35E044u) {
        ctx->pc = 0x35E044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E040u;
        // 0x35e044: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E048u;
        goto label_35e048;
    }
    ctx->pc = 0x35E040u;
    {
        const bool branch_taken_0x35e040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e040) {
            ctx->pc = 0x35E044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E040u;
            // 0x35e044: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E074u;
            goto label_35e074;
        }
    }
    ctx->pc = 0x35E048u;
label_35e048:
    // 0x35e048: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x35e048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_35e04c:
    // 0x35e04c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35e04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35e050:
    // 0x35e050: 0x0  nop
    ctx->pc = 0x35e050u;
    // NOP
label_35e054:
    // 0x35e054: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x35e054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35e058:
    // 0x35e058: 0x0  nop
    ctx->pc = 0x35e058u;
    // NOP
label_35e05c:
    // 0x35e05c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_35e060:
    if (ctx->pc == 0x35E060u) {
        ctx->pc = 0x35E060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E05Cu;
        // 0x35e060: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E064u;
        goto label_35e064;
    }
    ctx->pc = 0x35E05Cu;
    {
        const bool branch_taken_0x35e05c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35E060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E05Cu;
        // 0x35e060: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e05c) {
            ctx->pc = 0x35E070u;
            goto label_35e070;
        }
    }
    ctx->pc = 0x35E064u;
label_35e064:
    // 0x35e064: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x35e064u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_35e068:
    // 0x35e068: 0xc0d7746  jal         func_35DD18
label_35e06c:
    if (ctx->pc == 0x35E06Cu) {
        ctx->pc = 0x35E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E068u;
        // 0x35e06c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E070u;
        goto label_35e070;
    }
    ctx->pc = 0x35E068u;
    SET_GPR_U32(ctx, 31, 0x35E070u);
    ctx->pc = 0x35E06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E068u;
    // 0x35e06c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35DD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DD18u, 0x35E068u, 0x35E070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E070u;
label_35e070:
    // 0x35e070: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x35e070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_35e074:
    // 0x35e074: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x35e074u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
label_35e078:
    // 0x35e078: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35e078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35e07c:
    // 0x35e07c: 0xc0d8de6  jal         func_363798
label_35e080:
    if (ctx->pc == 0x35E080u) {
        ctx->pc = 0x35E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E07Cu;
        // 0x35e080: 0x8c510008  lw          $s1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E084u;
        goto label_35e084;
    }
    ctx->pc = 0x35E07Cu;
    SET_GPR_U32(ctx, 31, 0x35E084u);
    ctx->pc = 0x35E080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E07Cu;
    // 0x35e080: 0x8c510008  lw          $s1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363798u, 0x35E07Cu, 0x35E084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E084u;
label_35e084:
    // 0x35e084: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35e084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35e088:
    // 0x35e088: 0xc0efb95  jal         func_3BEE54
label_35e08c:
    if (ctx->pc == 0x35E08Cu) {
        ctx->pc = 0x35E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E088u;
        // 0x35e08c: 0x26056bd0  addiu       $a1, $s0, 0x6BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 27600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E090u;
        goto label_35e090;
    }
    ctx->pc = 0x35E088u;
    SET_GPR_U32(ctx, 31, 0x35E090u);
    ctx->pc = 0x35E08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E088u;
    // 0x35e08c: 0x26056bd0  addiu       $a1, $s0, 0x6BD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 27600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x35E088u, 0x35E090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E090u;
label_35e090:
    // 0x35e090: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_35e094:
    if (ctx->pc == 0x35E094u) {
        ctx->pc = 0x35E098u;
        goto label_35e098;
    }
    ctx->pc = 0x35E090u;
    {
        const bool branch_taken_0x35e090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e090) {
            ctx->pc = 0x35E0F8u;
            goto label_35e0f8;
        }
    }
    ctx->pc = 0x35E098u;
label_35e098:
    // 0x35e098: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x35e098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_35e09c:
    // 0x35e09c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x35e09cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_35e0a0:
    // 0x35e0a0: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
label_35e0a4:
    if (ctx->pc == 0x35E0A4u) {
        ctx->pc = 0x35E0A8u;
        goto label_35e0a8;
    }
    ctx->pc = 0x35E0A0u;
    {
        const bool branch_taken_0x35e0a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e0a0) {
            ctx->pc = 0x35E0F8u;
            goto label_35e0f8;
        }
    }
    ctx->pc = 0x35E0A8u;
label_35e0a8:
    // 0x35e0a8: 0x9262047d  lbu         $v0, 0x47D($s3)
    ctx->pc = 0x35e0a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1149)));
label_35e0ac:
    // 0x35e0ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_35e0b0:
    if (ctx->pc == 0x35E0B0u) {
        ctx->pc = 0x35E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E0ACu;
        // 0x35e0b0: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E0B4u;
        goto label_35e0b4;
    }
    ctx->pc = 0x35E0ACu;
    {
        const bool branch_taken_0x35e0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E0ACu;
        // 0x35e0b0: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e0ac) {
            ctx->pc = 0x35E0CCu;
            goto label_35e0cc;
        }
    }
    ctx->pc = 0x35E0B4u;
label_35e0b4:
    // 0x35e0b4: 0x8e62036c  lw          $v0, 0x36C($s3)
    ctx->pc = 0x35e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 876)));
label_35e0b8:
    // 0x35e0b8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x35e0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_35e0bc:
    // 0x35e0bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x35e0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_35e0c0:
    // 0x35e0c0: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_35e0c4:
    if (ctx->pc == 0x35E0C4u) {
        ctx->pc = 0x35E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E0C0u;
        // 0x35e0c4: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E0C8u;
        goto label_35e0c8;
    }
    ctx->pc = 0x35E0C0u;
    {
        const bool branch_taken_0x35e0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E0C0u;
        // 0x35e0c4: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e0c0) {
            ctx->pc = 0x35E0E8u;
            goto label_35e0e8;
        }
    }
    ctx->pc = 0x35E0C8u;
label_35e0c8:
    // 0x35e0c8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x35e0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_35e0cc:
    // 0x35e0cc: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x35e0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_35e0d0:
    // 0x35e0d0: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x35e0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_35e0d4:
    // 0x35e0d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35e0d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35e0d8:
    // 0x35e0d8: 0xc046642  jal         func_119908
label_35e0dc:
    if (ctx->pc == 0x35E0DCu) {
        ctx->pc = 0x35E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E0D8u;
        // 0x35e0dc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E0E0u;
        goto label_35e0e0;
    }
    ctx->pc = 0x35E0D8u;
    SET_GPR_U32(ctx, 31, 0x35E0E0u);
    ctx->pc = 0x35E0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E0D8u;
    // 0x35e0dc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x35E0D8u, 0x35E0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E0E0u;
label_35e0e0:
    // 0x35e0e0: 0x10000005  b           . + 4 + (0x5 << 2)
label_35e0e4:
    if (ctx->pc == 0x35E0E4u) {
        ctx->pc = 0x35E0E8u;
        goto label_35e0e8;
    }
    ctx->pc = 0x35E0E0u;
    {
        const bool branch_taken_0x35e0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e0e0) {
            ctx->pc = 0x35E0F8u;
            goto label_35e0f8;
        }
    }
    ctx->pc = 0x35E0E8u;
label_35e0e8:
    // 0x35e0e8: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x35e0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_35e0ec:
    // 0x35e0ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35e0ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35e0f0:
    // 0x35e0f0: 0xc046642  jal         func_119908
label_35e0f4:
    if (ctx->pc == 0x35E0F4u) {
        ctx->pc = 0x35E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E0F0u;
        // 0x35e0f4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E0F8u;
        goto label_35e0f8;
    }
    ctx->pc = 0x35E0F0u;
    SET_GPR_U32(ctx, 31, 0x35E0F8u);
    ctx->pc = 0x35E0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E0F0u;
    // 0x35e0f4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x35E0F0u, 0x35E0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E0F8u;
label_35e0f8:
    // 0x35e0f8: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
label_35e0fc:
    if (ctx->pc == 0x35E0FCu) {
        ctx->pc = 0x35E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E0F8u;
        // 0x35e0fc: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E100u;
        goto label_35e100;
    }
    ctx->pc = 0x35E0F8u;
    {
        const bool branch_taken_0x35e0f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e0f8) {
            ctx->pc = 0x35E0FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E0F8u;
            // 0x35e0fc: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E114u;
            goto label_35e114;
        }
    }
    ctx->pc = 0x35E100u;
label_35e100:
    // 0x35e100: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x35e100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_35e104:
    // 0x35e104: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x35e104u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_35e108:
    // 0x35e108: 0x52200010  beql        $s1, $zero, . + 4 + (0x10 << 2)
label_35e10c:
    if (ctx->pc == 0x35E10Cu) {
        ctx->pc = 0x35E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E108u;
        // 0x35e10c: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E110u;
        goto label_35e110;
    }
    ctx->pc = 0x35E108u;
    {
        const bool branch_taken_0x35e108 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e108) {
            ctx->pc = 0x35E10Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E108u;
            // 0x35e10c: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E14Cu;
            goto label_35e14c;
        }
    }
    ctx->pc = 0x35E110u;
label_35e110:
    // 0x35e110: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x35e110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_35e114:
    // 0x35e114: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x35e114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_35e118:
    // 0x35e118: 0x8e6300b8  lw          $v1, 0xB8($s3)
    ctx->pc = 0x35e118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_35e11c:
    // 0x35e11c: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x35e11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
label_35e120:
    // 0x35e120: 0x90480054  lbu         $t0, 0x54($v0)
    ctx->pc = 0x35e120u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 84)));
label_35e124:
    // 0x35e124: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35e124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35e128:
    // 0x35e128: 0x90690054  lbu         $t1, 0x54($v1)
    ctx->pc = 0x35e128u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 84)));
label_35e12c:
    // 0x35e12c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x35e12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_35e130:
    // 0x35e130: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x35e130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_35e134:
    // 0x35e134: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x35e134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35e138:
    // 0x35e138: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x35e138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_35e13c:
    // 0x35e13c: 0xc07f550  jal         func_1FD540
label_35e140:
    if (ctx->pc == 0x35E140u) {
        ctx->pc = 0x35E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E13Cu;
        // 0x35e140: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E144u;
        goto label_35e144;
    }
    ctx->pc = 0x35E13Cu;
    SET_GPR_U32(ctx, 31, 0x35E144u);
    ctx->pc = 0x35E140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E13Cu;
    // 0x35e140: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD540u, 0x35E13Cu, 0x35E144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E144u;
label_35e144:
    // 0x35e144: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x35e144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_35e148:
    // 0x35e148: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x35e148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_35e14c:
    // 0x35e14c: 0x50800049  beql        $a0, $zero, . + 4 + (0x49 << 2)
label_35e150:
    if (ctx->pc == 0x35E150u) {
        ctx->pc = 0x35E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E14Cu;
        // 0x35e150: 0x8e630218  lw          $v1, 0x218($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E154u;
        goto label_35e154;
    }
    ctx->pc = 0x35E14Cu;
    {
        const bool branch_taken_0x35e14c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e14c) {
            ctx->pc = 0x35E150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E14Cu;
            // 0x35e150: 0x8e630218  lw          $v1, 0x218($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E274u;
            goto label_35e274;
        }
    }
    ctx->pc = 0x35E154u;
label_35e154:
    // 0x35e154: 0xc097f26  jal         func_25FC98
label_35e158:
    if (ctx->pc == 0x35E158u) {
        ctx->pc = 0x35E15Cu;
        goto label_35e15c;
    }
    ctx->pc = 0x35E154u;
    SET_GPR_U32(ctx, 31, 0x35E15Cu);
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x35E154u, 0x35E15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E15Cu;
label_35e15c:
    // 0x35e15c: 0x24030083  addiu       $v1, $zero, 0x83
    ctx->pc = 0x35e15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
label_35e160:
    // 0x35e160: 0x54430044  bnel        $v0, $v1, . + 4 + (0x44 << 2)
label_35e164:
    if (ctx->pc == 0x35E164u) {
        ctx->pc = 0x35E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E160u;
        // 0x35e164: 0x8e630218  lw          $v1, 0x218($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E168u;
        goto label_35e168;
    }
    ctx->pc = 0x35E160u;
    {
        const bool branch_taken_0x35e160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x35e160) {
            ctx->pc = 0x35E164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E160u;
            // 0x35e164: 0x8e630218  lw          $v1, 0x218($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E274u;
            goto label_35e274;
        }
    }
    ctx->pc = 0x35E168u;
label_35e168:
    // 0x35e168: 0x12e00041  beqz        $s7, . + 4 + (0x41 << 2)
label_35e16c:
    if (ctx->pc == 0x35E16Cu) {
        ctx->pc = 0x35E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E168u;
        // 0x35e16c: 0x26e30020  addiu       $v1, $s7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E170u;
        goto label_35e170;
    }
    ctx->pc = 0x35E168u;
    {
        const bool branch_taken_0x35e168 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E168u;
        // 0x35e16c: 0x26e30020  addiu       $v1, $s7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e168) {
            ctx->pc = 0x35E270u;
            goto label_35e270;
        }
    }
    ctx->pc = 0x35E170u;
label_35e170:
    // 0x35e170: 0x26e20010  addiu       $v0, $s7, 0x10
    ctx->pc = 0x35e170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_35e174:
    // 0x35e174: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x35e174u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_35e178:
    // 0x35e178: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x35e178u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35e17c:
    // 0x35e17c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35e17cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35e180:
    // 0x35e180: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x35e180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_35e184:
    // 0x35e184: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x35e184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35e188:
    // 0x35e188: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x35e188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35e18c:
    // 0x35e18c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x35e18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35e190:
    // 0x35e190: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x35e190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35e194:
    // 0x35e194: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x35e194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_35e198:
    // 0x35e198: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x35e198u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_35e19c:
    // 0x35e19c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x35e19cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_35e1a0:
    // 0x35e1a0: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x35e1a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_35e1a4:
    // 0x35e1a4: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x35e1a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_35e1a8:
    // 0x35e1a8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x35e1a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_35e1ac:
    // 0x35e1ac: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x35e1acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_35e1b0:
    // 0x35e1b0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x35e1b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_35e1b4:
    // 0x35e1b4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x35e1b4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_35e1b8:
    // 0x35e1b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x35e1b8u;
    // VWAITQ (Q already resolved in this runtime)
label_35e1bc:
    // 0x35e1bc: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x35e1bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35e1c0:
    // 0x35e1c0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x35e1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_35e1c4:
    // 0x35e1c4: 0xc0f6a96  jal         func_3DAA58
label_35e1c8:
    if (ctx->pc == 0x35E1C8u) {
        ctx->pc = 0x35E1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E1C4u;
        // 0x35e1c8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E1CCu;
        goto label_35e1cc;
    }
    ctx->pc = 0x35E1C4u;
    SET_GPR_U32(ctx, 31, 0x35E1CCu);
    ctx->pc = 0x35E1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E1C4u;
    // 0x35e1c8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35E1C4u, 0x35E1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E1CCu;
label_35e1cc:
    // 0x35e1cc: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x35e1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_35e1d0:
    // 0x35e1d0: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x35e1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_35e1d4:
    // 0x35e1d4: 0x7fa00060  sq          $zero, 0x60($sp)
    ctx->pc = 0x35e1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 0));
label_35e1d8:
    // 0x35e1d8: 0x7fa00090  sq          $zero, 0x90($sp)
    ctx->pc = 0x35e1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 0));
label_35e1dc:
    // 0x35e1dc: 0x240203e9  addiu       $v0, $zero, 0x3E9
    ctx->pc = 0x35e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
label_35e1e0:
    // 0x35e1e0: 0x16c20008  bne         $s6, $v0, . + 4 + (0x8 << 2)
label_35e1e4:
    if (ctx->pc == 0x35E1E4u) {
        ctx->pc = 0x35E1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E1E0u;
        // 0x35e1e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E1E8u;
        goto label_35e1e8;
    }
    ctx->pc = 0x35E1E0u;
    {
        const bool branch_taken_0x35e1e0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x35E1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E1E0u;
        // 0x35e1e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e1e0) {
            ctx->pc = 0x35E204u;
            goto label_35e204;
        }
    }
    ctx->pc = 0x35E1E8u;
label_35e1e8:
    // 0x35e1e8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x35e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_35e1ec:
    // 0x35e1ec: 0x8e64032c  lw          $a0, 0x32C($s3)
    ctx->pc = 0x35e1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 812)));
label_35e1f0:
    // 0x35e1f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35e1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35e1f4:
    // 0x35e1f4: 0xc096664  jal         func_259990
label_35e1f8:
    if (ctx->pc == 0x35E1F8u) {
        ctx->pc = 0x35E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E1F4u;
        // 0x35e1f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E1FCu;
        goto label_35e1fc;
    }
    ctx->pc = 0x35E1F4u;
    SET_GPR_U32(ctx, 31, 0x35E1FCu);
    ctx->pc = 0x35E1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E1F4u;
    // 0x35e1f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259990u, 0x35E1F4u, 0x35E1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E1FCu;
label_35e1fc:
    // 0x35e1fc: 0x10000005  b           . + 4 + (0x5 << 2)
label_35e200:
    if (ctx->pc == 0x35E200u) {
        ctx->pc = 0x35E200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E1FCu;
        // 0x35e200: 0x27b000a0  addiu       $s0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E204u;
        goto label_35e204;
    }
    ctx->pc = 0x35E1FCu;
    {
        const bool branch_taken_0x35e1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E1FCu;
        // 0x35e200: 0x27b000a0  addiu       $s0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e1fc) {
            ctx->pc = 0x35E214u;
            goto label_35e214;
        }
    }
    ctx->pc = 0x35E204u;
label_35e204:
    // 0x35e204: 0xc08a1dc  jal         func_228770
label_35e208:
    if (ctx->pc == 0x35E208u) {
        ctx->pc = 0x35E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E204u;
        // 0x35e208: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E20Cu;
        goto label_35e20c;
    }
    ctx->pc = 0x35E204u;
    SET_GPR_U32(ctx, 31, 0x35E20Cu);
    ctx->pc = 0x35E208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E204u;
    // 0x35e208: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228770u, 0x35E204u, 0x35E20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E20Cu;
label_35e20c:
    // 0x35e20c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35e20cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35e210:
    // 0x35e210: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x35e210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_35e214:
    // 0x35e214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35e214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35e218:
    // 0x35e218: 0xc07a8b2  jal         func_1EA2C8
label_35e21c:
    if (ctx->pc == 0x35E21Cu) {
        ctx->pc = 0x35E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E218u;
        // 0x35e21c: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E220u;
        goto label_35e220;
    }
    ctx->pc = 0x35E218u;
    SET_GPR_U32(ctx, 31, 0x35E220u);
    ctx->pc = 0x35E21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E218u;
    // 0x35e21c: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x35E218u, 0x35E220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E220u;
label_35e220:
    // 0x35e220: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x35e220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_35e224:
    // 0x35e224: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x35e224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_35e228:
    // 0x35e228: 0xc4606bdc  lwc1        $f0, 0x6BDC($v1)
    ctx->pc = 0x35e228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 27612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35e22c:
    // 0x35e22c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35e22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35e230:
    // 0x35e230: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35e230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35e234:
    // 0x35e234: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x35e234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_35e238:
    // 0x35e238: 0xc0789d6  jal         func_1E2758
label_35e23c:
    if (ctx->pc == 0x35E23Cu) {
        ctx->pc = 0x35E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E238u;
        // 0x35e23c: 0xe7a00100  swc1        $f0, 0x100($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E240u;
        goto label_35e240;
    }
    ctx->pc = 0x35E238u;
    SET_GPR_U32(ctx, 31, 0x35E240u);
    ctx->pc = 0x35E23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E238u;
    // 0x35e23c: 0xe7a00100  swc1        $f0, 0x100($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2758u, 0x35E238u, 0x35E240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E240u;
label_35e240:
    // 0x35e240: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_35e244:
    if (ctx->pc == 0x35E244u) {
        ctx->pc = 0x35E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E240u;
        // 0x35e244: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E248u;
        goto label_35e248;
    }
    ctx->pc = 0x35E240u;
    {
        const bool branch_taken_0x35e240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E240u;
        // 0x35e244: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e240) {
            ctx->pc = 0x35E270u;
            goto label_35e270;
        }
    }
    ctx->pc = 0x35E248u;
label_35e248:
    // 0x35e248: 0xafb100cc  sw          $s1, 0xCC($sp)
    ctx->pc = 0x35e248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 17));
label_35e24c:
    // 0x35e24c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x35e24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_35e250:
    // 0x35e250: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x35e250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35e254:
    // 0x35e254: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x35e254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_35e258:
    // 0x35e258: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x35e258u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_35e25c:
    // 0x35e25c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x35e25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_35e260:
    // 0x35e260: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x35e260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35e264:
    // 0x35e264: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x35e264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_35e268:
    // 0x35e268: 0xc098e30  jal         func_2638C0
label_35e26c:
    if (ctx->pc == 0x35E26Cu) {
        ctx->pc = 0x35E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E268u;
        // 0x35e26c: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E270u;
        goto label_35e270;
    }
    ctx->pc = 0x35E268u;
    SET_GPR_U32(ctx, 31, 0x35E270u);
    ctx->pc = 0x35E26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E268u;
    // 0x35e26c: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2638C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2638C0u, 0x35E268u, 0x35E270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E270u;
label_35e270:
    // 0x35e270: 0x8e630218  lw          $v1, 0x218($s3)
    ctx->pc = 0x35e270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 536)));
label_35e274:
    // 0x35e274: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x35e274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_35e278:
    // 0x35e278: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35e278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35e27c:
    // 0x35e27c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35e27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35e280:
    // 0x35e280: 0x8c6201e4  lw          $v0, 0x1E4($v1)
    ctx->pc = 0x35e280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 484)));
label_35e284:
    // 0x35e284: 0x40f809  jalr        $v0
label_35e288:
    if (ctx->pc == 0x35E288u) {
        ctx->pc = 0x35E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E284u;
        // 0x35e288: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E28Cu;
        goto label_35e28c;
    }
    ctx->pc = 0x35E284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35E28Cu);
        ctx->pc = 0x35E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E284u;
        // 0x35e288: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E284u, 0x35E28Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35E28Cu;
label_35e28c:
    // 0x35e28c: 0x1040019b  beqz        $v0, . + 4 + (0x19B << 2)
label_35e290:
    if (ctx->pc == 0x35E290u) {
        ctx->pc = 0x35E294u;
        goto label_35e294;
    }
    ctx->pc = 0x35E28Cu;
    {
        const bool branch_taken_0x35e28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e28c) {
            ctx->pc = 0x35E8FCu;
            goto label_35e8fc;
        }
    }
    ctx->pc = 0x35E294u;
label_35e294:
    // 0x35e294: 0xc0d8de6  jal         func_363798
label_35e298:
    if (ctx->pc == 0x35E298u) {
        ctx->pc = 0x35E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E294u;
        // 0x35e298: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E29Cu;
        goto label_35e29c;
    }
    ctx->pc = 0x35E294u;
    SET_GPR_U32(ctx, 31, 0x35E29Cu);
    ctx->pc = 0x35E298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E294u;
    // 0x35e298: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363798u, 0x35E294u, 0x35E29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E29Cu;
label_35e29c:
    // 0x35e29c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35e29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35e2a0:
    // 0x35e2a0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x35e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_35e2a4:
    // 0x35e2a4: 0xc0efb95  jal         func_3BEE54
label_35e2a8:
    if (ctx->pc == 0x35E2A8u) {
        ctx->pc = 0x35E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E2A4u;
        // 0x35e2a8: 0x24456bd0  addiu       $a1, $v0, 0x6BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E2ACu;
        goto label_35e2ac;
    }
    ctx->pc = 0x35E2A4u;
    SET_GPR_U32(ctx, 31, 0x35E2ACu);
    ctx->pc = 0x35E2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E2A4u;
    // 0x35e2a8: 0x24456bd0  addiu       $a1, $v0, 0x6BD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x35E2A4u, 0x35E2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E2ACu;
label_35e2ac:
    // 0x35e2ac: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_35e2b0:
    if (ctx->pc == 0x35E2B0u) {
        ctx->pc = 0x35E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E2ACu;
        // 0x35e2b0: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E2B4u;
        goto label_35e2b4;
    }
    ctx->pc = 0x35E2ACu;
    {
        const bool branch_taken_0x35e2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e2ac) {
            ctx->pc = 0x35E2B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E2ACu;
            // 0x35e2b0: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E310u;
            goto label_35e310;
        }
    }
    ctx->pc = 0x35E2B4u;
label_35e2b4:
    // 0x35e2b4: 0xc66100d0  lwc1        $f1, 0xD0($s3)
    ctx->pc = 0x35e2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35e2b8:
    // 0x35e2b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35e2b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35e2bc:
    // 0x35e2bc: 0x0  nop
    ctx->pc = 0x35e2bcu;
    // NOP
label_35e2c0:
    // 0x35e2c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x35e2c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35e2c4:
    // 0x35e2c4: 0x0  nop
    ctx->pc = 0x35e2c4u;
    // NOP
label_35e2c8:
    // 0x35e2c8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_35e2cc:
    if (ctx->pc == 0x35E2CCu) {
        ctx->pc = 0x35E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E2C8u;
        // 0x35e2cc: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E2D0u;
        goto label_35e2d0;
    }
    ctx->pc = 0x35E2C8u;
    {
        const bool branch_taken_0x35e2c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E2C8u;
        // 0x35e2cc: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e2c8) {
            ctx->pc = 0x35E2F0u;
            goto label_35e2f0;
        }
    }
    ctx->pc = 0x35E2D0u;
label_35e2d0:
    // 0x35e2d0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x35e2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_35e2d4:
    // 0x35e2d4: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x35e2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_35e2d8:
    // 0x35e2d8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x35e2d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35e2dc:
    // 0x35e2dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35e2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35e2e0:
    // 0x35e2e0: 0xc046642  jal         func_119908
label_35e2e4:
    if (ctx->pc == 0x35E2E4u) {
        ctx->pc = 0x35E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E2E0u;
        // 0x35e2e4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E2E8u;
        goto label_35e2e8;
    }
    ctx->pc = 0x35E2E0u;
    SET_GPR_U32(ctx, 31, 0x35E2E8u);
    ctx->pc = 0x35E2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E2E0u;
    // 0x35e2e4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x35E2E0u, 0x35E2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E2E8u;
label_35e2e8:
    // 0x35e2e8: 0x10000009  b           . + 4 + (0x9 << 2)
label_35e2ec:
    if (ctx->pc == 0x35E2ECu) {
        ctx->pc = 0x35E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E2E8u;
        // 0x35e2ec: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E2F0u;
        goto label_35e2f0;
    }
    ctx->pc = 0x35E2E8u;
    {
        const bool branch_taken_0x35e2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E2E8u;
        // 0x35e2ec: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e2e8) {
            ctx->pc = 0x35E310u;
            goto label_35e310;
        }
    }
    ctx->pc = 0x35E2F0u;
label_35e2f0:
    // 0x35e2f0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x35e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_35e2f4:
    // 0x35e2f4: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x35e2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_35e2f8:
    // 0x35e2f8: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x35e2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_35e2fc:
    // 0x35e2fc: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x35e2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_35e300:
    // 0x35e300: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35e300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35e304:
    // 0x35e304: 0xc046642  jal         func_119908
label_35e308:
    if (ctx->pc == 0x35E308u) {
        ctx->pc = 0x35E308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E304u;
        // 0x35e308: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E30Cu;
        goto label_35e30c;
    }
    ctx->pc = 0x35E304u;
    SET_GPR_U32(ctx, 31, 0x35E30Cu);
    ctx->pc = 0x35E308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E304u;
    // 0x35e308: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x35E304u, 0x35E30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E30Cu;
label_35e30c:
    // 0x35e30c: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x35e30cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_35e310:
    // 0x35e310: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x35e310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_35e314:
    // 0x35e314: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_35e318:
    if (ctx->pc == 0x35E318u) {
        ctx->pc = 0x35E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E314u;
        // 0x35e318: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E31Cu;
        goto label_35e31c;
    }
    ctx->pc = 0x35E314u;
    {
        const bool branch_taken_0x35e314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E314u;
        // 0x35e318: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e314) {
            ctx->pc = 0x35E4B4u;
            goto label_35e4b4;
        }
    }
    ctx->pc = 0x35E31Cu;
label_35e31c:
    // 0x35e31c: 0x8c5100b8  lw          $s1, 0xB8($v0)
    ctx->pc = 0x35e31cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
label_35e320:
    // 0x35e320: 0xc0d8de2  jal         func_363788
label_35e324:
    if (ctx->pc == 0x35E324u) {
        ctx->pc = 0x35E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E320u;
        // 0x35e324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E328u;
        goto label_35e328;
    }
    ctx->pc = 0x35E320u;
    SET_GPR_U32(ctx, 31, 0x35E328u);
    ctx->pc = 0x35E324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E320u;
    // 0x35e324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x35E320u, 0x35E328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E328u;
label_35e328:
    // 0x35e328: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_35e32c:
    if (ctx->pc == 0x35E32Cu) {
        ctx->pc = 0x35E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E328u;
        // 0x35e32c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E330u;
        goto label_35e330;
    }
    ctx->pc = 0x35E328u;
    {
        const bool branch_taken_0x35e328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e328) {
            ctx->pc = 0x35E32Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E328u;
            // 0x35e32c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E344u;
            goto label_35e344;
        }
    }
    ctx->pc = 0x35E330u;
label_35e330:
    // 0x35e330: 0xc0d8de2  jal         func_363788
label_35e334:
    if (ctx->pc == 0x35E334u) {
        ctx->pc = 0x35E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E330u;
        // 0x35e334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E338u;
        goto label_35e338;
    }
    ctx->pc = 0x35E330u;
    SET_GPR_U32(ctx, 31, 0x35E338u);
    ctx->pc = 0x35E334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E330u;
    // 0x35e334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x35E330u, 0x35E338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E338u;
label_35e338:
    // 0x35e338: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35e338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35e33c:
    // 0x35e33c: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_35e340:
    if (ctx->pc == 0x35E340u) {
        ctx->pc = 0x35E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E33Cu;
        // 0x35e340: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E344u;
        goto label_35e344;
    }
    ctx->pc = 0x35E33Cu;
    {
        const bool branch_taken_0x35e33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x35e33c) {
            ctx->pc = 0x35E340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E33Cu;
            // 0x35e340: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E344u;
            goto label_35e344;
        }
    }
    ctx->pc = 0x35E344u;
label_35e344:
    // 0x35e344: 0x5280005c  beql        $s4, $zero, . + 4 + (0x5C << 2)
label_35e348:
    if (ctx->pc == 0x35E348u) {
        ctx->pc = 0x35E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E344u;
        // 0x35e348: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E34Cu;
        goto label_35e34c;
    }
    ctx->pc = 0x35E344u;
    {
        const bool branch_taken_0x35e344 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e344) {
            ctx->pc = 0x35E348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E344u;
            // 0x35e348: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E4B8u;
            goto label_35e4b8;
        }
    }
    ctx->pc = 0x35E34Cu;
label_35e34c:
    // 0x35e34c: 0x8e220620  lw          $v0, 0x620($s1)
    ctx->pc = 0x35e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
label_35e350:
    // 0x35e350: 0x50400059  beql        $v0, $zero, . + 4 + (0x59 << 2)
label_35e354:
    if (ctx->pc == 0x35E354u) {
        ctx->pc = 0x35E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E350u;
        // 0x35e354: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E358u;
        goto label_35e358;
    }
    ctx->pc = 0x35E350u;
    {
        const bool branch_taken_0x35e350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e350) {
            ctx->pc = 0x35E354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E350u;
            // 0x35e354: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E4B8u;
            goto label_35e4b8;
        }
    }
    ctx->pc = 0x35E358u;
label_35e358:
    // 0x35e358: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x35e358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_35e35c:
    // 0x35e35c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x35e35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_35e360:
    // 0x35e360: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x35e360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
label_35e364:
    // 0x35e364: 0x54400054  bnel        $v0, $zero, . + 4 + (0x54 << 2)
label_35e368:
    if (ctx->pc == 0x35E368u) {
        ctx->pc = 0x35E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E364u;
        // 0x35e368: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E36Cu;
        goto label_35e36c;
    }
    ctx->pc = 0x35E364u;
    {
        const bool branch_taken_0x35e364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e364) {
            ctx->pc = 0x35E368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E364u;
            // 0x35e368: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E4B8u;
            goto label_35e4b8;
        }
    }
    ctx->pc = 0x35E36Cu;
label_35e36c:
    // 0x35e36c: 0xc66000d0  lwc1        $f0, 0xD0($s3)
    ctx->pc = 0x35e36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35e370:
    // 0x35e370: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x35e370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_35e374:
    // 0x35e374: 0x0  nop
    ctx->pc = 0x35e374u;
    // NOP
label_35e378:
    // 0x35e378: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x35e378u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35e37c:
    // 0x35e37c: 0x0  nop
    ctx->pc = 0x35e37cu;
    // NOP
label_35e380:
    // 0x35e380: 0x4500004d  bc1f        . + 4 + (0x4D << 2)
label_35e384:
    if (ctx->pc == 0x35E384u) {
        ctx->pc = 0x35E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E380u;
        // 0x35e384: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E388u;
        goto label_35e388;
    }
    ctx->pc = 0x35E380u;
    {
        const bool branch_taken_0x35e380 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E380u;
        // 0x35e384: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e380) {
            ctx->pc = 0x35E4B8u;
            goto label_35e4b8;
        }
    }
    ctx->pc = 0x35E388u;
label_35e388:
    // 0x35e388: 0x8e63032c  lw          $v1, 0x32C($s3)
    ctx->pc = 0x35e388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 812)));
label_35e38c:
    // 0x35e38c: 0x8c620228  lw          $v0, 0x228($v1)
    ctx->pc = 0x35e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 552)));
label_35e390:
    // 0x35e390: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
label_35e394:
    if (ctx->pc == 0x35E394u) {
        ctx->pc = 0x35E398u;
        goto label_35e398;
    }
    ctx->pc = 0x35E390u;
    {
        const bool branch_taken_0x35e390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e390) {
            ctx->pc = 0x35E4B8u;
            goto label_35e4b8;
        }
    }
    ctx->pc = 0x35E398u;
label_35e398:
    // 0x35e398: 0x8c62022c  lw          $v0, 0x22C($v1)
    ctx->pc = 0x35e398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 556)));
label_35e39c:
    // 0x35e39c: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
label_35e3a0:
    if (ctx->pc == 0x35E3A0u) {
        ctx->pc = 0x35E3A4u;
        goto label_35e3a4;
    }
    ctx->pc = 0x35E39Cu;
    {
        const bool branch_taken_0x35e39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e39c) {
            ctx->pc = 0x35E4B8u;
            goto label_35e4b8;
        }
    }
    ctx->pc = 0x35E3A4u;
label_35e3a4:
    // 0x35e3a4: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x35e3a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_35e3a8:
    // 0x35e3a8: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x35e3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_35e3ac:
    // 0x35e3ac: 0x8d060004  lw          $a2, 0x4($t0)
    ctx->pc = 0x35e3acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_35e3b0:
    // 0x35e3b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35e3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35e3b4:
    // 0x35e3b4: 0x8cc40104  lw          $a0, 0x104($a2)
    ctx->pc = 0x35e3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
label_35e3b8:
    // 0x35e3b8: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x35e3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_35e3bc:
    // 0x35e3bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x35e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35e3c0:
    // 0x35e3c0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x35e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_35e3c4:
    // 0x35e3c4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x35e3c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_35e3c8:
    // 0x35e3c8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x35e3c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35e3cc:
    // 0x35e3cc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35e3ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35e3d0:
    // 0x35e3d0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x35e3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_35e3d4:
    // 0x35e3d4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x35e3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35e3d8:
    // 0x35e3d8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x35e3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_35e3dc:
    // 0x35e3dc: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x35e3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35e3e0:
    // 0x35e3e0: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x35e3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35e3e4:
    // 0x35e3e4: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x35e3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_35e3e8:
    // 0x35e3e8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x35e3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_35e3ec:
    // 0x35e3ec: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x35e3ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_35e3f0:
    // 0x35e3f0: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x35e3f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_35e3f4:
    // 0x35e3f4: 0xe7a5003c  swc1        $f5, 0x3C($sp)
    ctx->pc = 0x35e3f4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_35e3f8:
    // 0x35e3f8: 0xc7c20000  lwc1        $f2, 0x0($fp)
    ctx->pc = 0x35e3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35e3fc:
    // 0x35e3fc: 0xc7c30004  lwc1        $f3, 0x4($fp)
    ctx->pc = 0x35e3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35e400:
    // 0x35e400: 0xc7c40008  lwc1        $f4, 0x8($fp)
    ctx->pc = 0x35e400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_35e404:
    // 0x35e404: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x35e404u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_35e408:
    // 0x35e408: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x35e408u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_35e40c:
    // 0x35e40c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x35e40cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_35e410:
    // 0x35e410: 0x46010044  c1          0x10044
    ctx->pc = 0x35e410u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_35e414:
    // 0x35e414: 0x8cc40104  lw          $a0, 0x104($a2)
    ctx->pc = 0x35e414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
label_35e418:
    // 0x35e418: 0x8e650104  lw          $a1, 0x104($s3)
    ctx->pc = 0x35e418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_35e41c:
    // 0x35e41c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x35e41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35e420:
    // 0x35e420: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x35e420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_35e424:
    // 0x35e424: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x35e424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_35e428:
    // 0x35e428: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x35e428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_35e42c:
    // 0x35e42c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x35e42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35e430:
    // 0x35e430: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x35e430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35e434:
    // 0x35e434: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x35e434u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_35e438:
    // 0x35e438: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x35e438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35e43c:
    // 0x35e43c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x35e43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35e440:
    // 0x35e440: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x35e440u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_35e444:
    // 0x35e444: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x35e444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35e448:
    // 0x35e448: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x35e448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35e44c:
    // 0x35e44c: 0x4603111c  madd.s      $f4, $f2, $f3
    ctx->pc = 0x35e44cu;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_35e450:
    // 0x35e450: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x35e450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_35e454:
    // 0x35e454: 0xc480caf8  lwc1        $f0, -0x3508($a0)
    ctx->pc = 0x35e454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294953720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35e458:
    // 0x35e458: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35e458u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35e45c:
    // 0x35e45c: 0x0  nop
    ctx->pc = 0x35e45cu;
    // NOP
label_35e460:
    // 0x35e460: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_35e464:
    if (ctx->pc == 0x35E464u) {
        ctx->pc = 0x35E464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E460u;
        // 0x35e464: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E468u;
        goto label_35e468;
    }
    ctx->pc = 0x35E460u;
    {
        const bool branch_taken_0x35e460 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35E464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E460u;
        // 0x35e464: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e460) {
            ctx->pc = 0x35E4B4u;
            goto label_35e4b4;
        }
    }
    ctx->pc = 0x35E468u;
label_35e468:
    // 0x35e468: 0xc440cafc  lwc1        $f0, -0x3504($v0)
    ctx->pc = 0x35e468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35e46c:
    // 0x35e46c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x35e46cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35e470:
    // 0x35e470: 0x0  nop
    ctx->pc = 0x35e470u;
    // NOP
label_35e474:
    // 0x35e474: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
label_35e478:
    if (ctx->pc == 0x35E478u) {
        ctx->pc = 0x35E478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E474u;
        // 0x35e478: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E47Cu;
        goto label_35e47c;
    }
    ctx->pc = 0x35E474u;
    {
        const bool branch_taken_0x35e474 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x35e474) {
            ctx->pc = 0x35E478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E474u;
            // 0x35e478: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E4B8u;
            goto label_35e4b8;
        }
    }
    ctx->pc = 0x35E47Cu;
label_35e47c:
    // 0x35e47c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x35e47cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_35e480:
    // 0x35e480: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x35e480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35e484:
    // 0x35e484: 0x0  nop
    ctx->pc = 0x35e484u;
    // NOP
label_35e488:
    // 0x35e488: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_35e48c:
    if (ctx->pc == 0x35E48Cu) {
        ctx->pc = 0x35E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E488u;
        // 0x35e48c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E490u;
        goto label_35e490;
    }
    ctx->pc = 0x35E488u;
    {
        const bool branch_taken_0x35e488 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E488u;
        // 0x35e48c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e488) {
            ctx->pc = 0x35E4B4u;
            goto label_35e4b4;
        }
    }
    ctx->pc = 0x35E490u;
label_35e490:
    // 0x35e490: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x35e490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_35e494:
    // 0x35e494: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35e494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35e498:
    // 0x35e498: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x35e498u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_35e49c:
    // 0x35e49c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35e49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35e4a0:
    // 0x35e4a0: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x35e4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_35e4a4:
    // 0x35e4a4: 0xe7a6004c  swc1        $f6, 0x4C($sp)
    ctx->pc = 0x35e4a4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_35e4a8:
    // 0x35e4a8: 0xe7a60048  swc1        $f6, 0x48($sp)
    ctx->pc = 0x35e4a8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_35e4ac:
    // 0x35e4ac: 0xc08a0a8  jal         func_2282A0
label_35e4b0:
    if (ctx->pc == 0x35E4B0u) {
        ctx->pc = 0x35E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E4ACu;
        // 0x35e4b0: 0x8d060008  lw          $a2, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E4B4u;
        goto label_35e4b4;
    }
    ctx->pc = 0x35E4ACu;
    SET_GPR_U32(ctx, 31, 0x35E4B4u);
    ctx->pc = 0x35E4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E4ACu;
    // 0x35e4b0: 0x8d060008  lw          $a2, 0x8($t0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2282A0u, 0x35E4ACu, 0x35E4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E4B4u;
label_35e4b4:
    // 0x35e4b4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x35e4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_35e4b8:
    // 0x35e4b8: 0xc0f6a96  jal         func_3DAA58
label_35e4bc:
    if (ctx->pc == 0x35E4BCu) {
        ctx->pc = 0x35E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E4B8u;
        // 0x35e4bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E4C0u;
        goto label_35e4c0;
    }
    ctx->pc = 0x35E4B8u;
    SET_GPR_U32(ctx, 31, 0x35E4C0u);
    ctx->pc = 0x35E4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E4B8u;
    // 0x35e4bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35E4B8u, 0x35E4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E4C0u;
label_35e4c0:
    // 0x35e4c0: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x35e4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_35e4c4:
    // 0x35e4c4: 0xc0d8de2  jal         func_363788
label_35e4c8:
    if (ctx->pc == 0x35E4C8u) {
        ctx->pc = 0x35E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E4C4u;
        // 0x35e4c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E4CCu;
        goto label_35e4cc;
    }
    ctx->pc = 0x35E4C4u;
    SET_GPR_U32(ctx, 31, 0x35E4CCu);
    ctx->pc = 0x35E4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E4C4u;
    // 0x35e4c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x35E4C4u, 0x35E4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E4CCu;
label_35e4cc:
    // 0x35e4cc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_35e4d0:
    if (ctx->pc == 0x35E4D0u) {
        ctx->pc = 0x35E4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E4CCu;
        // 0x35e4d0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E4D4u;
        goto label_35e4d4;
    }
    ctx->pc = 0x35E4CCu;
    {
        const bool branch_taken_0x35e4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e4cc) {
            ctx->pc = 0x35E4D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E4CCu;
            // 0x35e4d0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E4E8u;
            goto label_35e4e8;
        }
    }
    ctx->pc = 0x35E4D4u;
label_35e4d4:
    // 0x35e4d4: 0xc0d8de2  jal         func_363788
label_35e4d8:
    if (ctx->pc == 0x35E4D8u) {
        ctx->pc = 0x35E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E4D4u;
        // 0x35e4d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E4DCu;
        goto label_35e4dc;
    }
    ctx->pc = 0x35E4D4u;
    SET_GPR_U32(ctx, 31, 0x35E4DCu);
    ctx->pc = 0x35E4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E4D4u;
    // 0x35e4d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x35E4D4u, 0x35E4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E4DCu;
label_35e4dc:
    // 0x35e4dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35e4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35e4e0:
    // 0x35e4e0: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_35e4e4:
    if (ctx->pc == 0x35E4E4u) {
        ctx->pc = 0x35E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E4E0u;
        // 0x35e4e4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E4E8u;
        goto label_35e4e8;
    }
    ctx->pc = 0x35E4E0u;
    {
        const bool branch_taken_0x35e4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x35e4e0) {
            ctx->pc = 0x35E4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E4E0u;
            // 0x35e4e4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E4E8u;
            goto label_35e4e8;
        }
    }
    ctx->pc = 0x35E4E8u;
label_35e4e8:
    // 0x35e4e8: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
label_35e4ec:
    if (ctx->pc == 0x35E4ECu) {
        ctx->pc = 0x35E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E4E8u;
        // 0x35e4ec: 0x27b10050  addiu       $s1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E4F0u;
        goto label_35e4f0;
    }
    ctx->pc = 0x35E4E8u;
    {
        const bool branch_taken_0x35e4e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E4E8u;
        // 0x35e4ec: 0x27b10050  addiu       $s1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e4e8) {
            ctx->pc = 0x35E540u;
            goto label_35e540;
        }
    }
    ctx->pc = 0x35E4F0u;
label_35e4f0:
    // 0x35e4f0: 0x8e620104  lw          $v0, 0x104($s3)
    ctx->pc = 0x35e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_35e4f4:
    // 0x35e4f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35e4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35e4f8:
    // 0x35e4f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35e4f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35e4fc:
    // 0x35e4fc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x35e4fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35e500:
    // 0x35e500: 0xc0d765e  jal         func_35D978
label_35e504:
    if (ctx->pc == 0x35E504u) {
        ctx->pc = 0x35E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E500u;
        // 0x35e504: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E508u;
        goto label_35e508;
    }
    ctx->pc = 0x35E500u;
    SET_GPR_U32(ctx, 31, 0x35E508u);
    ctx->pc = 0x35E504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E500u;
    // 0x35e504: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D978u, 0x35E500u, 0x35E508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E508u;
label_35e508:
    // 0x35e508: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35e508u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_35e50c:
    // 0x35e50c: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x35e50cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_35e510:
    // 0x35e510: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35e510u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35e514:
    // 0x35e514: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x35e514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_35e518:
    // 0x35e518: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x35e518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35e51c:
    // 0x35e51c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x35e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_35e520:
    // 0x35e520: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x35e520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35e524:
    // 0x35e524: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x35e524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35e528:
    // 0x35e528: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x35e528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35e52c:
    // 0x35e52c: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x35e52cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_35e530:
    // 0x35e530: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x35e530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_35e534:
    // 0x35e534: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x35e534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_35e538:
    // 0x35e538: 0x10000027  b           . + 4 + (0x27 << 2)
label_35e53c:
    if (ctx->pc == 0x35E53Cu) {
        ctx->pc = 0x35E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E538u;
        // 0x35e53c: 0xe7a2004c  swc1        $f2, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E540u;
        goto label_35e540;
    }
    ctx->pc = 0x35E538u;
    {
        const bool branch_taken_0x35e538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E538u;
        // 0x35e53c: 0xe7a2004c  swc1        $f2, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e538) {
            ctx->pc = 0x35E5D8u;
            goto label_35e5d8;
        }
    }
    ctx->pc = 0x35E540u;
label_35e540:
    // 0x35e540: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x35e540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_35e544:
    // 0x35e544: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x35e544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35e548:
    // 0x35e548: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x35e548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35e54c:
    // 0x35e54c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x35e54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_35e550:
    // 0x35e550: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x35e550u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_35e554:
    // 0x35e554: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x35e554u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_35e558:
    // 0x35e558: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x35e558u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_35e55c:
    // 0x35e55c: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x35e55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
label_35e560:
    // 0x35e560: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x35e560u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_35e564:
    // 0x35e564: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35e564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35e568:
    // 0x35e568: 0x0  nop
    ctx->pc = 0x35e568u;
    // NOP
label_35e56c:
    // 0x35e56c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35e56cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35e570:
    // 0x35e570: 0x0  nop
    ctx->pc = 0x35e570u;
    // NOP
label_35e574:
    // 0x35e574: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_35e578:
    if (ctx->pc == 0x35E578u) {
        ctx->pc = 0x35E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E574u;
        // 0x35e578: 0x27b10050  addiu       $s1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E57Cu;
        goto label_35e57c;
    }
    ctx->pc = 0x35E574u;
    {
        const bool branch_taken_0x35e574 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E574u;
        // 0x35e578: 0x27b10050  addiu       $s1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e574) {
            ctx->pc = 0x35E5D8u;
            goto label_35e5d8;
        }
    }
    ctx->pc = 0x35E57Cu;
label_35e57c:
    // 0x35e57c: 0x8e620104  lw          $v0, 0x104($s3)
    ctx->pc = 0x35e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_35e580:
    // 0x35e580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35e580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35e584:
    // 0x35e584: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35e584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35e588:
    // 0x35e588: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x35e588u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35e58c:
    // 0x35e58c: 0xc0d765e  jal         func_35D978
label_35e590:
    if (ctx->pc == 0x35E590u) {
        ctx->pc = 0x35E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E58Cu;
        // 0x35e590: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E594u;
        goto label_35e594;
    }
    ctx->pc = 0x35E58Cu;
    SET_GPR_U32(ctx, 31, 0x35E594u);
    ctx->pc = 0x35E590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E58Cu;
    // 0x35e590: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D978u, 0x35E58Cu, 0x35E594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E594u;
label_35e594:
    // 0x35e594: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35e594u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_35e598:
    // 0x35e598: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x35e598u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_35e59c:
    // 0x35e59c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35e59cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35e5a0:
    // 0x35e5a0: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x35e5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_35e5a4:
    // 0x35e5a4: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x35e5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35e5a8:
    // 0x35e5a8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x35e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_35e5ac:
    // 0x35e5ac: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x35e5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35e5b0:
    // 0x35e5b0: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x35e5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35e5b4:
    // 0x35e5b4: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x35e5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35e5b8:
    // 0x35e5b8: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x35e5b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_35e5bc:
    // 0x35e5bc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x35e5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_35e5c0:
    // 0x35e5c0: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x35e5c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_35e5c4:
    // 0x35e5c4: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x35e5c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_35e5c8:
    // 0x35e5c8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35e5c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35e5cc:
    // 0x35e5cc: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x35e5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_35e5d0:
    // 0x35e5d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_35e5d4:
    if (ctx->pc == 0x35E5D4u) {
        ctx->pc = 0x35E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E5D0u;
        // 0x35e5d4: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E5D8u;
        goto label_35e5d8;
    }
    ctx->pc = 0x35E5D0u;
    {
        const bool branch_taken_0x35e5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E5D0u;
        // 0x35e5d4: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e5d0) {
            ctx->pc = 0x35E5E0u;
            goto label_35e5e0;
        }
    }
    ctx->pc = 0x35E5D8u;
label_35e5d8:
    // 0x35e5d8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35e5d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35e5dc:
    // 0x35e5dc: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x35e5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_35e5e0:
    // 0x35e5e0: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x35e5e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_35e5e4:
    // 0x35e5e4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x35e5e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_35e5e8:
    // 0x35e5e8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x35e5e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_35e5ec:
    // 0x35e5ec: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x35e5ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_35e5f0:
    // 0x35e5f0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x35e5f0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_35e5f4:
    // 0x35e5f4: 0x4a0003bf  vwaitq
    ctx->pc = 0x35e5f4u;
    // VWAITQ (Q already resolved in this runtime)
label_35e5f8:
    // 0x35e5f8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x35e5f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35e5fc:
    // 0x35e5fc: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x35e5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_35e600:
    // 0x35e600: 0xc08f64a  jal         func_23D928
label_35e604:
    if (ctx->pc == 0x35E604u) {
        ctx->pc = 0x35E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E600u;
        // 0x35e604: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E608u;
        goto label_35e608;
    }
    ctx->pc = 0x35E600u;
    SET_GPR_U32(ctx, 31, 0x35E608u);
    ctx->pc = 0x35E604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E600u;
    // 0x35e604: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D928u, 0x35E600u, 0x35E608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E608u;
label_35e608:
    // 0x35e608: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_35e60c:
    if (ctx->pc == 0x35E60Cu) {
        ctx->pc = 0x35E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E608u;
        // 0x35e60c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E610u;
        goto label_35e610;
    }
    ctx->pc = 0x35E608u;
    {
        const bool branch_taken_0x35e608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e608) {
            ctx->pc = 0x35E60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E608u;
            // 0x35e60c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E624u;
            goto label_35e624;
        }
    }
    ctx->pc = 0x35E610u;
label_35e610:
    // 0x35e610: 0xc0d763e  jal         func_35D8F8
label_35e614:
    if (ctx->pc == 0x35E614u) {
        ctx->pc = 0x35E614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E610u;
        // 0x35e614: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E618u;
        goto label_35e618;
    }
    ctx->pc = 0x35E610u;
    SET_GPR_U32(ctx, 31, 0x35E618u);
    ctx->pc = 0x35E614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E610u;
    // 0x35e614: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D8F8u, 0x35E610u, 0x35E618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E618u;
label_35e618:
    // 0x35e618: 0x144000c9  bnez        $v0, . + 4 + (0xC9 << 2)
label_35e61c:
    if (ctx->pc == 0x35E61Cu) {
        ctx->pc = 0x35E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E618u;
        // 0x35e61c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E620u;
        goto label_35e620;
    }
    ctx->pc = 0x35E618u;
    {
        const bool branch_taken_0x35e618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E618u;
        // 0x35e61c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e618) {
            ctx->pc = 0x35E940u;
            goto label_35e940;
        }
    }
    ctx->pc = 0x35E620u;
label_35e620:
    // 0x35e620: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x35e620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_35e624:
    // 0x35e624: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x35e624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_35e628:
    // 0x35e628: 0x106000b2  beqz        $v1, . + 4 + (0xB2 << 2)
label_35e62c:
    if (ctx->pc == 0x35E62Cu) {
        ctx->pc = 0x35E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E628u;
        // 0x35e62c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E630u;
        goto label_35e630;
    }
    ctx->pc = 0x35E628u;
    {
        const bool branch_taken_0x35e628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E628u;
        // 0x35e62c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e628) {
            ctx->pc = 0x35E8F4u;
            goto label_35e8f4;
        }
    }
    ctx->pc = 0x35E630u;
label_35e630:
    // 0x35e630: 0xc08a1f2  jal         func_2287C8
label_35e634:
    if (ctx->pc == 0x35E634u) {
        ctx->pc = 0x35E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E630u;
        // 0x35e634: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E638u;
        goto label_35e638;
    }
    ctx->pc = 0x35E630u;
    SET_GPR_U32(ctx, 31, 0x35E638u);
    ctx->pc = 0x35E634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E630u;
    // 0x35e634: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x35E630u, 0x35E638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E638u;
label_35e638:
    // 0x35e638: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35e638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35e63c:
    // 0x35e63c: 0xc0f70ce  jal         func_3DC338
label_35e640:
    if (ctx->pc == 0x35E640u) {
        ctx->pc = 0x35E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E63Cu;
        // 0x35e640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E644u;
        goto label_35e644;
    }
    ctx->pc = 0x35E63Cu;
    SET_GPR_U32(ctx, 31, 0x35E644u);
    ctx->pc = 0x35E640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E63Cu;
    // 0x35e640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x35E63Cu, 0x35E644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E644u;
label_35e644:
    // 0x35e644: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_35e648:
    if (ctx->pc == 0x35E648u) {
        ctx->pc = 0x35E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E644u;
        // 0x35e648: 0xc60000b0  lwc1        $f0, 0xB0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E64Cu;
        goto label_35e64c;
    }
    ctx->pc = 0x35E644u;
    {
        const bool branch_taken_0x35e644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e644) {
            ctx->pc = 0x35E648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E644u;
            // 0x35e648: 0xc60000b0  lwc1        $f0, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E658u;
            goto label_35e658;
        }
    }
    ctx->pc = 0x35E64Cu;
label_35e64c:
    // 0x35e64c: 0xc0c4900  jal         func_312400
label_35e650:
    if (ctx->pc == 0x35E650u) {
        ctx->pc = 0x35E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E64Cu;
        // 0x35e650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E654u;
        goto label_35e654;
    }
    ctx->pc = 0x35E64Cu;
    SET_GPR_U32(ctx, 31, 0x35E654u);
    ctx->pc = 0x35E650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E64Cu;
    // 0x35e650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x35E64Cu, 0x35E654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E654u;
label_35e654:
    // 0x35e654: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x35e654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35e658:
    // 0x35e658: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x35e658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_35e65c:
    // 0x35e65c: 0xc6420010  lwc1        $f2, 0x10($s2)
    ctx->pc = 0x35e65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35e660:
    // 0x35e660: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x35e660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_35e664:
    // 0x35e664: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x35e664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_35e668:
    // 0x35e668: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x35e668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_35e66c:
    // 0x35e66c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x35e66cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_35e670:
    // 0x35e670: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x35e670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35e674:
    // 0x35e674: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x35e674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_35e678:
    // 0x35e678: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x35e678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35e67c:
    // 0x35e67c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x35e67cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_35e680:
    // 0x35e680: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x35e680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35e684:
    // 0x35e684: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x35e684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_35e688:
    // 0x35e688: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x35e688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35e68c:
    // 0x35e68c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x35e68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35e690:
    // 0x35e690: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x35e690u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_35e694:
    // 0x35e694: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x35e694u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_35e698:
    // 0x35e698: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x35e698u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_35e69c:
    // 0x35e69c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x35e69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_35e6a0:
    // 0x35e6a0: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x35e6a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_35e6a4:
    // 0x35e6a4: 0xc0b1488  jal         func_2C5220
label_35e6a8:
    if (ctx->pc == 0x35E6A8u) {
        ctx->pc = 0x35E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E6A4u;
        // 0x35e6a8: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E6ACu;
        goto label_35e6ac;
    }
    ctx->pc = 0x35E6A4u;
    SET_GPR_U32(ctx, 31, 0x35E6ACu);
    ctx->pc = 0x35E6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E6A4u;
    // 0x35e6a8: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x35E6A4u, 0x35E6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E6ACu;
label_35e6ac:
    // 0x35e6ac: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x35e6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_35e6b0:
    // 0x35e6b0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x35e6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_35e6b4:
    // 0x35e6b4: 0x24425b30  addiu       $v0, $v0, 0x5B30
    ctx->pc = 0x35e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23344));
label_35e6b8:
    // 0x35e6b8: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x35e6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35e6bc:
    // 0x35e6bc: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x35e6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35e6c0:
    // 0x35e6c0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x35e6c0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_35e6c4:
    // 0x35e6c4: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x35e6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35e6c8:
    // 0x35e6c8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x35e6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35e6cc:
    // 0x35e6cc: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x35e6ccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_35e6d0:
    // 0x35e6d0: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x35e6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35e6d4:
    // 0x35e6d4: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x35e6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35e6d8:
    // 0x35e6d8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x35e6d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_35e6dc:
    // 0x35e6dc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x35e6dcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_35e6e0:
    // 0x35e6e0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x35e6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_35e6e4:
    // 0x35e6e4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x35e6e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_35e6e8:
    // 0x35e6e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x35e6e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_35e6ec:
    // 0x35e6ec: 0x0  nop
    ctx->pc = 0x35e6ecu;
    // NOP
label_35e6f0:
    // 0x35e6f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35e6f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35e6f4:
    // 0x35e6f4: 0x0  nop
    ctx->pc = 0x35e6f4u;
    // NOP
label_35e6f8:
    // 0x35e6f8: 0x45000027  bc1f        . + 4 + (0x27 << 2)
label_35e6fc:
    if (ctx->pc == 0x35E6FCu) {
        ctx->pc = 0x35E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E6F8u;
        // 0x35e6fc: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E700u;
        goto label_35e700;
    }
    ctx->pc = 0x35E6F8u;
    {
        const bool branch_taken_0x35e6f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E6F8u;
        // 0x35e6fc: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e6f8) {
            ctx->pc = 0x35E798u;
            goto label_35e798;
        }
    }
    ctx->pc = 0x35E700u;
label_35e700:
    // 0x35e700: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x35e700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_35e704:
    // 0x35e704: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x35e704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
label_35e708:
    // 0x35e708: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x35e708u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_35e70c:
    // 0x35e70c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x35e70cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35e710:
    // 0x35e710: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x35e710u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_35e714:
    // 0x35e714: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x35e714u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35e718:
    // 0x35e718: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x35e718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_35e71c:
    // 0x35e71c: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x35e71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35e720:
    // 0x35e720: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x35e720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_35e724:
    // 0x35e724: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x35e724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35e728:
    // 0x35e728: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x35e728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35e72c:
    // 0x35e72c: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x35e72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35e730:
    // 0x35e730: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x35e730u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_35e734:
    // 0x35e734: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x35e734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_35e738:
    // 0x35e738: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x35e738u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_35e73c:
    // 0x35e73c: 0xe7a200ac  swc1        $f2, 0xAC($sp)
    ctx->pc = 0x35e73cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_35e740:
    // 0x35e740: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x35e740u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_35e744:
    // 0x35e744: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x35e744u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35e748:
    // 0x35e748: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x35e748u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_35e74c:
    // 0x35e74c: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x35e74cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35e750:
    // 0x35e750: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x35e750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
label_35e754:
    // 0x35e754: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x35e754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35e758:
    // 0x35e758: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x35e758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35e75c:
    // 0x35e75c: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x35e75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35e760:
    // 0x35e760: 0xc7a300cc  lwc1        $f3, 0xCC($sp)
    ctx->pc = 0x35e760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35e764:
    // 0x35e764: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x35e764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_35e768:
    // 0x35e768: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x35e768u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_35e76c:
    // 0x35e76c: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x35e76cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_35e770:
    // 0x35e770: 0xe7a300bc  swc1        $f3, 0xBC($sp)
    ctx->pc = 0x35e770u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_35e774:
    // 0x35e774: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x35e774u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_35e778:
    // 0x35e778: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x35e778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_35e77c:
    // 0x35e77c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35e77cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35e780:
    // 0x35e780: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x35e780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_35e784:
    // 0x35e784: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x35e784u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_35e788:
    // 0x35e788: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x35e788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_35e78c:
    // 0x35e78c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x35e78cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35e790:
    // 0x35e790: 0x10000006  b           . + 4 + (0x6 << 2)
label_35e794:
    if (ctx->pc == 0x35E794u) {
        ctx->pc = 0x35E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E790u;
        // 0x35e794: 0x27b70060  addiu       $s7, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E798u;
        goto label_35e798;
    }
    ctx->pc = 0x35E790u;
    {
        const bool branch_taken_0x35e790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E790u;
        // 0x35e794: 0x27b70060  addiu       $s7, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e790) {
            ctx->pc = 0x35E7ACu;
            goto label_35e7ac;
        }
    }
    ctx->pc = 0x35E798u;
label_35e798:
    // 0x35e798: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x35e798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_35e79c:
    // 0x35e79c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35e79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35e7a0:
    // 0x35e7a0: 0xc0b1488  jal         func_2C5220
label_35e7a4:
    if (ctx->pc == 0x35E7A4u) {
        ctx->pc = 0x35E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E7A0u;
        // 0x35e7a4: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E7A8u;
        goto label_35e7a8;
    }
    ctx->pc = 0x35E7A0u;
    SET_GPR_U32(ctx, 31, 0x35E7A8u);
    ctx->pc = 0x35E7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E7A0u;
    // 0x35e7a4: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x35E7A0u, 0x35E7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E7A8u;
label_35e7a8:
    // 0x35e7a8: 0x27b500a0  addiu       $s5, $sp, 0xA0
    ctx->pc = 0x35e7a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_35e7ac:
    // 0x35e7ac: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x35e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_35e7b0:
    // 0x35e7b0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35e7b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35e7b4:
    // 0x35e7b4: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x35e7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_35e7b8:
    // 0x35e7b8: 0xc0b1488  jal         func_2C5220
label_35e7bc:
    if (ctx->pc == 0x35E7BCu) {
        ctx->pc = 0x35E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E7B8u;
        // 0x35e7bc: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E7C0u;
        goto label_35e7c0;
    }
    ctx->pc = 0x35E7B8u;
    SET_GPR_U32(ctx, 31, 0x35E7C0u);
    ctx->pc = 0x35E7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E7B8u;
    // 0x35e7bc: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x35E7B8u, 0x35E7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E7C0u;
label_35e7c0:
    // 0x35e7c0: 0xc0f70ce  jal         func_3DC338
label_35e7c4:
    if (ctx->pc == 0x35E7C4u) {
        ctx->pc = 0x35E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E7C0u;
        // 0x35e7c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E7C8u;
        goto label_35e7c8;
    }
    ctx->pc = 0x35E7C0u;
    SET_GPR_U32(ctx, 31, 0x35E7C8u);
    ctx->pc = 0x35E7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E7C0u;
    // 0x35e7c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x35E7C0u, 0x35E7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E7C8u;
label_35e7c8:
    // 0x35e7c8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_35e7cc:
    if (ctx->pc == 0x35E7CCu) {
        ctx->pc = 0x35E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E7C8u;
        // 0x35e7cc: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E7D0u;
        goto label_35e7d0;
    }
    ctx->pc = 0x35E7C8u;
    {
        const bool branch_taken_0x35e7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e7c8) {
            ctx->pc = 0x35E7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E7C8u;
            // 0x35e7cc: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E7DCu;
            goto label_35e7dc;
        }
    }
    ctx->pc = 0x35E7D0u;
label_35e7d0:
    // 0x35e7d0: 0xc0c4900  jal         func_312400
label_35e7d4:
    if (ctx->pc == 0x35E7D4u) {
        ctx->pc = 0x35E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E7D0u;
        // 0x35e7d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E7D8u;
        goto label_35e7d8;
    }
    ctx->pc = 0x35E7D0u;
    SET_GPR_U32(ctx, 31, 0x35E7D8u);
    ctx->pc = 0x35E7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E7D0u;
    // 0x35e7d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x35E7D0u, 0x35E7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E7D8u;
label_35e7d8:
    // 0x35e7d8: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x35e7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_35e7dc:
    // 0x35e7dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x35e7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_35e7e0:
    // 0x35e7e0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x35e7e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_35e7e4:
    // 0x35e7e4: 0xc0b17fe  jal         func_2C5FF8
label_35e7e8:
    if (ctx->pc == 0x35E7E8u) {
        ctx->pc = 0x35E7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E7E4u;
        // 0x35e7e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E7ECu;
        goto label_35e7ec;
    }
    ctx->pc = 0x35E7E4u;
    SET_GPR_U32(ctx, 31, 0x35E7ECu);
    ctx->pc = 0x35E7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E7E4u;
    // 0x35e7e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5FF8u, 0x35E7E4u, 0x35E7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E7ECu;
label_35e7ec:
    // 0x35e7ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35e7ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35e7f0:
    // 0x35e7f0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x35e7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_35e7f4:
    // 0x35e7f4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x35e7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_35e7f8:
    // 0x35e7f8: 0xc0b163c  jal         func_2C58F0
label_35e7fc:
    if (ctx->pc == 0x35E7FCu) {
        ctx->pc = 0x35E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E7F8u;
        // 0x35e7fc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E800u;
        goto label_35e800;
    }
    ctx->pc = 0x35E7F8u;
    SET_GPR_U32(ctx, 31, 0x35E800u);
    ctx->pc = 0x35E7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E7F8u;
    // 0x35e7fc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x35E7F8u, 0x35E800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E800u;
label_35e800:
    // 0x35e800: 0x8e6201d8  lw          $v0, 0x1D8($s3)
    ctx->pc = 0x35e800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 472)));
label_35e804:
    // 0x35e804: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_35e808:
    if (ctx->pc == 0x35E808u) {
        ctx->pc = 0x35E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E804u;
        // 0x35e808: 0x2a220010  slti        $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E80Cu;
        goto label_35e80c;
    }
    ctx->pc = 0x35E804u;
    {
        const bool branch_taken_0x35e804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E804u;
        // 0x35e808: 0x2a220010  slti        $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e804) {
            ctx->pc = 0x35E834u;
            goto label_35e834;
        }
    }
    ctx->pc = 0x35E80Cu;
label_35e80c:
    // 0x35e80c: 0x266301d8  addiu       $v1, $s3, 0x1D8
    ctx->pc = 0x35e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 472));
label_35e810:
    // 0x35e810: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x35e810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_35e814:
    // 0x35e814: 0x0  nop
    ctx->pc = 0x35e814u;
    // NOP
label_35e818:
    // 0x35e818: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x35e818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_35e81c:
    // 0x35e81c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_35e820:
    if (ctx->pc == 0x35E820u) {
        ctx->pc = 0x35E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E81Cu;
        // 0x35e820: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E824u;
        goto label_35e824;
    }
    ctx->pc = 0x35E81Cu;
    {
        const bool branch_taken_0x35e81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E81Cu;
        // 0x35e820: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e81c) {
            ctx->pc = 0x35E8F4u;
            goto label_35e8f4;
        }
    }
    ctx->pc = 0x35E824u;
label_35e824:
    // 0x35e824: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35e824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35e828:
    // 0x35e828: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_35e82c:
    if (ctx->pc == 0x35E82Cu) {
        ctx->pc = 0x35E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E828u;
        // 0x35e82c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E830u;
        goto label_35e830;
    }
    ctx->pc = 0x35E828u;
    {
        const bool branch_taken_0x35e828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e828) {
            ctx->pc = 0x35E82Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E828u;
            // 0x35e82c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35e818;
        }
    }
    ctx->pc = 0x35E830u;
label_35e830:
    // 0x35e830: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x35e830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_35e834:
    // 0x35e834: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_35e838:
    if (ctx->pc == 0x35E838u) {
        ctx->pc = 0x35E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E834u;
        // 0x35e838: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E83Cu;
        goto label_35e83c;
    }
    ctx->pc = 0x35E834u;
    {
        const bool branch_taken_0x35e834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E834u;
        // 0x35e838: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e834) {
            ctx->pc = 0x35E8F4u;
            goto label_35e8f4;
        }
    }
    ctx->pc = 0x35E83Cu;
label_35e83c:
    // 0x35e83c: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x35e83cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_35e840:
    // 0x35e840: 0x24544f20  addiu       $s4, $v0, 0x4F20
    ctx->pc = 0x35e840u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 20256));
label_35e844:
    // 0x35e844: 0xc0f70ce  jal         func_3DC338
label_35e848:
    if (ctx->pc == 0x35E848u) {
        ctx->pc = 0x35E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E844u;
        // 0x35e848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E84Cu;
        goto label_35e84c;
    }
    ctx->pc = 0x35E844u;
    SET_GPR_U32(ctx, 31, 0x35E84Cu);
    ctx->pc = 0x35E848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E844u;
    // 0x35e848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x35E844u, 0x35E84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E84Cu;
label_35e84c:
    // 0x35e84c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_35e850:
    if (ctx->pc == 0x35E850u) {
        ctx->pc = 0x35E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E84Cu;
        // 0x35e850: 0x8e45009c  lw          $a1, 0x9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E854u;
        goto label_35e854;
    }
    ctx->pc = 0x35E84Cu;
    {
        const bool branch_taken_0x35e84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e84c) {
            ctx->pc = 0x35E850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E84Cu;
            // 0x35e850: 0x8e45009c  lw          $a1, 0x9C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E860u;
            goto label_35e860;
        }
    }
    ctx->pc = 0x35E854u;
label_35e854:
    // 0x35e854: 0xc0c4900  jal         func_312400
label_35e858:
    if (ctx->pc == 0x35E858u) {
        ctx->pc = 0x35E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E854u;
        // 0x35e858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E85Cu;
        goto label_35e85c;
    }
    ctx->pc = 0x35E854u;
    SET_GPR_U32(ctx, 31, 0x35E85Cu);
    ctx->pc = 0x35E858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E854u;
    // 0x35e858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x35E854u, 0x35E85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E85Cu;
label_35e85c:
    // 0x35e85c: 0x8e45009c  lw          $a1, 0x9C($s2)
    ctx->pc = 0x35e85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_35e860:
    // 0x35e860: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x35e860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35e864:
    // 0x35e864: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x35e864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_35e868:
    // 0x35e868: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x35e868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_35e86c:
    // 0x35e86c: 0xc0b0a4e  jal         func_2C2938
label_35e870:
    if (ctx->pc == 0x35E870u) {
        ctx->pc = 0x35E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E86Cu;
        // 0x35e870: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E874u;
        goto label_35e874;
    }
    ctx->pc = 0x35E86Cu;
    SET_GPR_U32(ctx, 31, 0x35E874u);
    ctx->pc = 0x35E870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E86Cu;
    // 0x35e870: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2938u, 0x35E86Cu, 0x35E874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E874u;
label_35e874:
    // 0x35e874: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35e874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35e878:
    // 0x35e878: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_35e87c:
    if (ctx->pc == 0x35E87Cu) {
        ctx->pc = 0x35E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E878u;
        // 0x35e87c: 0x8e6200bc  lw          $v0, 0xBC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E880u;
        goto label_35e880;
    }
    ctx->pc = 0x35E878u;
    {
        const bool branch_taken_0x35e878 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e878) {
            ctx->pc = 0x35E87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E878u;
            // 0x35e87c: 0x8e6200bc  lw          $v0, 0xBC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E898u;
            goto label_35e898;
        }
    }
    ctx->pc = 0x35E880u;
label_35e880:
    // 0x35e880: 0xc0b0ef2  jal         func_2C3BC8
label_35e884:
    if (ctx->pc == 0x35E884u) {
        ctx->pc = 0x35E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E880u;
        // 0x35e884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E888u;
        goto label_35e888;
    }
    ctx->pc = 0x35E880u;
    SET_GPR_U32(ctx, 31, 0x35E888u);
    ctx->pc = 0x35E884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E880u;
    // 0x35e884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3BC8u, 0x35E880u, 0x35E888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E888u;
label_35e888:
    // 0x35e888: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x35e888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_35e88c:
    // 0x35e88c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x35e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_35e890:
    // 0x35e890: 0xac5001d8  sw          $s0, 0x1D8($v0)
    ctx->pc = 0x35e890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 472), GPR_U32(ctx, 16));
label_35e894:
    // 0x35e894: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x35e894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_35e898:
    // 0x35e898: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x35e898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_35e89c:
    // 0x35e89c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_35e8a0:
    if (ctx->pc == 0x35E8A0u) {
        ctx->pc = 0x35E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E89Cu;
        // 0x35e8a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E8A4u;
        goto label_35e8a4;
    }
    ctx->pc = 0x35E89Cu;
    {
        const bool branch_taken_0x35e89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E89Cu;
        // 0x35e8a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e89c) {
            ctx->pc = 0x35E940u;
            goto label_35e940;
        }
    }
    ctx->pc = 0x35E8A4u;
label_35e8a4:
    // 0x35e8a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35e8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35e8a8:
    // 0x35e8a8: 0xc08a1f2  jal         func_2287C8
label_35e8ac:
    if (ctx->pc == 0x35E8ACu) {
        ctx->pc = 0x35E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E8A8u;
        // 0x35e8ac: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E8B0u;
        goto label_35e8b0;
    }
    ctx->pc = 0x35E8A8u;
    SET_GPR_U32(ctx, 31, 0x35E8B0u);
    ctx->pc = 0x35E8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E8A8u;
    // 0x35e8ac: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x35E8A8u, 0x35E8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E8B0u;
label_35e8b0:
    // 0x35e8b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35e8b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35e8b4:
    // 0x35e8b4: 0xc0f70ce  jal         func_3DC338
label_35e8b8:
    if (ctx->pc == 0x35E8B8u) {
        ctx->pc = 0x35E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E8B4u;
        // 0x35e8b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E8BCu;
        goto label_35e8bc;
    }
    ctx->pc = 0x35E8B4u;
    SET_GPR_U32(ctx, 31, 0x35E8BCu);
    ctx->pc = 0x35E8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E8B4u;
    // 0x35e8b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x35E8B4u, 0x35E8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E8BCu;
label_35e8bc:
    // 0x35e8bc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_35e8c0:
    if (ctx->pc == 0x35E8C0u) {
        ctx->pc = 0x35E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E8BCu;
        // 0x35e8c0: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E8C4u;
        goto label_35e8c4;
    }
    ctx->pc = 0x35E8BCu;
    {
        const bool branch_taken_0x35e8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e8bc) {
            ctx->pc = 0x35E8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E8BCu;
            // 0x35e8c0: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E8D0u;
            goto label_35e8d0;
        }
    }
    ctx->pc = 0x35E8C4u;
label_35e8c4:
    // 0x35e8c4: 0xc0c4900  jal         func_312400
label_35e8c8:
    if (ctx->pc == 0x35E8C8u) {
        ctx->pc = 0x35E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E8C4u;
        // 0x35e8c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E8CCu;
        goto label_35e8cc;
    }
    ctx->pc = 0x35E8C4u;
    SET_GPR_U32(ctx, 31, 0x35E8CCu);
    ctx->pc = 0x35E8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E8C4u;
    // 0x35e8c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x35E8C4u, 0x35E8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E8CCu;
label_35e8cc:
    // 0x35e8cc: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x35e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_35e8d0:
    // 0x35e8d0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35e8d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35e8d4:
    // 0x35e8d4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x35e8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_35e8d8:
    // 0x35e8d8: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x35e8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
label_35e8dc:
    // 0x35e8dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x35e8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_35e8e0:
    // 0x35e8e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x35e8e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35e8e4:
    // 0x35e8e4: 0x24846920  addiu       $a0, $a0, 0x6920
    ctx->pc = 0x35e8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26912));
label_35e8e8:
    // 0x35e8e8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x35e8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_35e8ec:
    // 0x35e8ec: 0xc0c266a  jal         func_3099A8
label_35e8f0:
    if (ctx->pc == 0x35E8F0u) {
        ctx->pc = 0x35E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E8ECu;
        // 0x35e8f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E8F4u;
        goto label_35e8f4;
    }
    ctx->pc = 0x35E8ECu;
    SET_GPR_U32(ctx, 31, 0x35E8F4u);
    ctx->pc = 0x35E8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E8ECu;
    // 0x35e8f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3099A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3099A8u, 0x35E8ECu, 0x35E8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E8F4u;
label_35e8f4:
    // 0x35e8f4: 0x10000012  b           . + 4 + (0x12 << 2)
label_35e8f8:
    if (ctx->pc == 0x35E8F8u) {
        ctx->pc = 0x35E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E8F4u;
        // 0x35e8f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E8FCu;
        goto label_35e8fc;
    }
    ctx->pc = 0x35E8F4u;
    {
        const bool branch_taken_0x35e8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E8F4u;
        // 0x35e8f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e8f4) {
            ctx->pc = 0x35E940u;
            goto label_35e940;
        }
    }
    ctx->pc = 0x35E8FCu;
label_35e8fc:
    // 0x35e8fc: 0xc0d8de6  jal         func_363798
label_35e900:
    if (ctx->pc == 0x35E900u) {
        ctx->pc = 0x35E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E8FCu;
        // 0x35e900: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E904u;
        goto label_35e904;
    }
    ctx->pc = 0x35E8FCu;
    SET_GPR_U32(ctx, 31, 0x35E904u);
    ctx->pc = 0x35E900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E8FCu;
    // 0x35e900: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363798u, 0x35E8FCu, 0x35E904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E904u;
label_35e904:
    // 0x35e904: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35e904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35e908:
    // 0x35e908: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x35e908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_35e90c:
    // 0x35e90c: 0xc0efb95  jal         func_3BEE54
label_35e910:
    if (ctx->pc == 0x35E910u) {
        ctx->pc = 0x35E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E90Cu;
        // 0x35e910: 0x24456bd0  addiu       $a1, $v0, 0x6BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E914u;
        goto label_35e914;
    }
    ctx->pc = 0x35E90Cu;
    SET_GPR_U32(ctx, 31, 0x35E914u);
    ctx->pc = 0x35E910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E90Cu;
    // 0x35e910: 0x24456bd0  addiu       $a1, $v0, 0x6BD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x35E90Cu, 0x35E914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E914u;
label_35e914:
    // 0x35e914: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_35e918:
    if (ctx->pc == 0x35E918u) {
        ctx->pc = 0x35E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E914u;
        // 0x35e918: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E91Cu;
        goto label_35e91c;
    }
    ctx->pc = 0x35E914u;
    {
        const bool branch_taken_0x35e914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E914u;
        // 0x35e918: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e914) {
            ctx->pc = 0x35E940u;
            goto label_35e940;
        }
    }
    ctx->pc = 0x35E91Cu;
label_35e91c:
    // 0x35e91c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x35e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_35e920:
    // 0x35e920: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x35e920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_35e924:
    // 0x35e924: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x35e924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_35e928:
    // 0x35e928: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x35e928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_35e92c:
    // 0x35e92c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x35e92cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_35e930:
    // 0x35e930: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35e930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35e934:
    // 0x35e934: 0xc046642  jal         func_119908
label_35e938:
    if (ctx->pc == 0x35E938u) {
        ctx->pc = 0x35E938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E934u;
        // 0x35e938: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E93Cu;
        goto label_35e93c;
    }
    ctx->pc = 0x35E934u;
    SET_GPR_U32(ctx, 31, 0x35E93Cu);
    ctx->pc = 0x35E938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E934u;
    // 0x35e938: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x35E934u, 0x35E93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E93Cu;
label_35e93c:
    // 0x35e93c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e93cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35e940:
    // 0x35e940: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x35e940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_35e944:
    // 0x35e944: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x35e944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
label_35e948:
    // 0x35e948: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x35e948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_35e94c:
    // 0x35e94c: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x35e94cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
label_35e950:
    // 0x35e950: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x35e950u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_35e954:
    // 0x35e954: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x35e954u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
label_35e958:
    // 0x35e958: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x35e958u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_35e95c:
    // 0x35e95c: 0xdfb70148  ld          $s7, 0x148($sp)
    ctx->pc = 0x35e95cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 328)));
label_35e960:
    // 0x35e960: 0xdfbe0150  ld          $fp, 0x150($sp)
    ctx->pc = 0x35e960u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_35e964:
    // 0x35e964: 0xdfbf0158  ld          $ra, 0x158($sp)
    ctx->pc = 0x35e964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 344)));
label_35e968:
    // 0x35e968: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x35e968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_35e96c:
    // 0x35e96c: 0x3e00008  jr          $ra
label_35e970:
    if (ctx->pc == 0x35E970u) {
        ctx->pc = 0x35E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E96Cu;
        // 0x35e970: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E974u;
        goto label_35e974;
    }
    ctx->pc = 0x35E96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E96Cu;
        // 0x35e970: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E974u;
label_35e974:
    // 0x35e974: 0x0  nop
    ctx->pc = 0x35e974u;
    // NOP
    ctx->pc = 0x35e978u;
}
