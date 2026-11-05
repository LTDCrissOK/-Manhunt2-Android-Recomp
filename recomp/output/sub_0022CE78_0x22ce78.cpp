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

// Function: sub_0022CE78
// Address: 0x22ce78 - 0x22d980
void sub_0022CE78_0x22ce78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CE78_0x22ce78");
#endif

    switch (ctx->pc) {
        case 0x22ce78u: goto label_22ce78;
        case 0x22ce7cu: goto label_22ce7c;
        case 0x22ce80u: goto label_22ce80;
        case 0x22ce84u: goto label_22ce84;
        case 0x22ce88u: goto label_22ce88;
        case 0x22ce8cu: goto label_22ce8c;
        case 0x22ce90u: goto label_22ce90;
        case 0x22ce94u: goto label_22ce94;
        case 0x22ce98u: goto label_22ce98;
        case 0x22ce9cu: goto label_22ce9c;
        case 0x22cea0u: goto label_22cea0;
        case 0x22cea4u: goto label_22cea4;
        case 0x22cea8u: goto label_22cea8;
        case 0x22ceacu: goto label_22ceac;
        case 0x22ceb0u: goto label_22ceb0;
        case 0x22ceb4u: goto label_22ceb4;
        case 0x22ceb8u: goto label_22ceb8;
        case 0x22cebcu: goto label_22cebc;
        case 0x22cec0u: goto label_22cec0;
        case 0x22cec4u: goto label_22cec4;
        case 0x22cec8u: goto label_22cec8;
        case 0x22ceccu: goto label_22cecc;
        case 0x22ced0u: goto label_22ced0;
        case 0x22ced4u: goto label_22ced4;
        case 0x22ced8u: goto label_22ced8;
        case 0x22cedcu: goto label_22cedc;
        case 0x22cee0u: goto label_22cee0;
        case 0x22cee4u: goto label_22cee4;
        case 0x22cee8u: goto label_22cee8;
        case 0x22ceecu: goto label_22ceec;
        case 0x22cef0u: goto label_22cef0;
        case 0x22cef4u: goto label_22cef4;
        case 0x22cef8u: goto label_22cef8;
        case 0x22cefcu: goto label_22cefc;
        case 0x22cf00u: goto label_22cf00;
        case 0x22cf04u: goto label_22cf04;
        case 0x22cf08u: goto label_22cf08;
        case 0x22cf0cu: goto label_22cf0c;
        case 0x22cf10u: goto label_22cf10;
        case 0x22cf14u: goto label_22cf14;
        case 0x22cf18u: goto label_22cf18;
        case 0x22cf1cu: goto label_22cf1c;
        case 0x22cf20u: goto label_22cf20;
        case 0x22cf24u: goto label_22cf24;
        case 0x22cf28u: goto label_22cf28;
        case 0x22cf2cu: goto label_22cf2c;
        case 0x22cf30u: goto label_22cf30;
        case 0x22cf34u: goto label_22cf34;
        case 0x22cf38u: goto label_22cf38;
        case 0x22cf3cu: goto label_22cf3c;
        case 0x22cf40u: goto label_22cf40;
        case 0x22cf44u: goto label_22cf44;
        case 0x22cf48u: goto label_22cf48;
        case 0x22cf4cu: goto label_22cf4c;
        case 0x22cf50u: goto label_22cf50;
        case 0x22cf54u: goto label_22cf54;
        case 0x22cf58u: goto label_22cf58;
        case 0x22cf5cu: goto label_22cf5c;
        case 0x22cf60u: goto label_22cf60;
        case 0x22cf64u: goto label_22cf64;
        case 0x22cf68u: goto label_22cf68;
        case 0x22cf6cu: goto label_22cf6c;
        case 0x22cf70u: goto label_22cf70;
        case 0x22cf74u: goto label_22cf74;
        case 0x22cf78u: goto label_22cf78;
        case 0x22cf7cu: goto label_22cf7c;
        case 0x22cf80u: goto label_22cf80;
        case 0x22cf84u: goto label_22cf84;
        case 0x22cf88u: goto label_22cf88;
        case 0x22cf8cu: goto label_22cf8c;
        case 0x22cf90u: goto label_22cf90;
        case 0x22cf94u: goto label_22cf94;
        case 0x22cf98u: goto label_22cf98;
        case 0x22cf9cu: goto label_22cf9c;
        case 0x22cfa0u: goto label_22cfa0;
        case 0x22cfa4u: goto label_22cfa4;
        case 0x22cfa8u: goto label_22cfa8;
        case 0x22cfacu: goto label_22cfac;
        case 0x22cfb0u: goto label_22cfb0;
        case 0x22cfb4u: goto label_22cfb4;
        case 0x22cfb8u: goto label_22cfb8;
        case 0x22cfbcu: goto label_22cfbc;
        case 0x22cfc0u: goto label_22cfc0;
        case 0x22cfc4u: goto label_22cfc4;
        case 0x22cfc8u: goto label_22cfc8;
        case 0x22cfccu: goto label_22cfcc;
        case 0x22cfd0u: goto label_22cfd0;
        case 0x22cfd4u: goto label_22cfd4;
        case 0x22cfd8u: goto label_22cfd8;
        case 0x22cfdcu: goto label_22cfdc;
        case 0x22cfe0u: goto label_22cfe0;
        case 0x22cfe4u: goto label_22cfe4;
        case 0x22cfe8u: goto label_22cfe8;
        case 0x22cfecu: goto label_22cfec;
        case 0x22cff0u: goto label_22cff0;
        case 0x22cff4u: goto label_22cff4;
        case 0x22cff8u: goto label_22cff8;
        case 0x22cffcu: goto label_22cffc;
        case 0x22d000u: goto label_22d000;
        case 0x22d004u: goto label_22d004;
        case 0x22d008u: goto label_22d008;
        case 0x22d00cu: goto label_22d00c;
        case 0x22d010u: goto label_22d010;
        case 0x22d014u: goto label_22d014;
        case 0x22d018u: goto label_22d018;
        case 0x22d01cu: goto label_22d01c;
        case 0x22d020u: goto label_22d020;
        case 0x22d024u: goto label_22d024;
        case 0x22d028u: goto label_22d028;
        case 0x22d02cu: goto label_22d02c;
        case 0x22d030u: goto label_22d030;
        case 0x22d034u: goto label_22d034;
        case 0x22d038u: goto label_22d038;
        case 0x22d03cu: goto label_22d03c;
        case 0x22d040u: goto label_22d040;
        case 0x22d044u: goto label_22d044;
        case 0x22d048u: goto label_22d048;
        case 0x22d04cu: goto label_22d04c;
        case 0x22d050u: goto label_22d050;
        case 0x22d054u: goto label_22d054;
        case 0x22d058u: goto label_22d058;
        case 0x22d05cu: goto label_22d05c;
        case 0x22d060u: goto label_22d060;
        case 0x22d064u: goto label_22d064;
        case 0x22d068u: goto label_22d068;
        case 0x22d06cu: goto label_22d06c;
        case 0x22d070u: goto label_22d070;
        case 0x22d074u: goto label_22d074;
        case 0x22d078u: goto label_22d078;
        case 0x22d07cu: goto label_22d07c;
        case 0x22d080u: goto label_22d080;
        case 0x22d084u: goto label_22d084;
        case 0x22d088u: goto label_22d088;
        case 0x22d08cu: goto label_22d08c;
        case 0x22d090u: goto label_22d090;
        case 0x22d094u: goto label_22d094;
        case 0x22d098u: goto label_22d098;
        case 0x22d09cu: goto label_22d09c;
        case 0x22d0a0u: goto label_22d0a0;
        case 0x22d0a4u: goto label_22d0a4;
        case 0x22d0a8u: goto label_22d0a8;
        case 0x22d0acu: goto label_22d0ac;
        case 0x22d0b0u: goto label_22d0b0;
        case 0x22d0b4u: goto label_22d0b4;
        case 0x22d0b8u: goto label_22d0b8;
        case 0x22d0bcu: goto label_22d0bc;
        case 0x22d0c0u: goto label_22d0c0;
        case 0x22d0c4u: goto label_22d0c4;
        case 0x22d0c8u: goto label_22d0c8;
        case 0x22d0ccu: goto label_22d0cc;
        case 0x22d0d0u: goto label_22d0d0;
        case 0x22d0d4u: goto label_22d0d4;
        case 0x22d0d8u: goto label_22d0d8;
        case 0x22d0dcu: goto label_22d0dc;
        case 0x22d0e0u: goto label_22d0e0;
        case 0x22d0e4u: goto label_22d0e4;
        case 0x22d0e8u: goto label_22d0e8;
        case 0x22d0ecu: goto label_22d0ec;
        case 0x22d0f0u: goto label_22d0f0;
        case 0x22d0f4u: goto label_22d0f4;
        case 0x22d0f8u: goto label_22d0f8;
        case 0x22d0fcu: goto label_22d0fc;
        case 0x22d100u: goto label_22d100;
        case 0x22d104u: goto label_22d104;
        case 0x22d108u: goto label_22d108;
        case 0x22d10cu: goto label_22d10c;
        case 0x22d110u: goto label_22d110;
        case 0x22d114u: goto label_22d114;
        case 0x22d118u: goto label_22d118;
        case 0x22d11cu: goto label_22d11c;
        case 0x22d120u: goto label_22d120;
        case 0x22d124u: goto label_22d124;
        case 0x22d128u: goto label_22d128;
        case 0x22d12cu: goto label_22d12c;
        case 0x22d130u: goto label_22d130;
        case 0x22d134u: goto label_22d134;
        case 0x22d138u: goto label_22d138;
        case 0x22d13cu: goto label_22d13c;
        case 0x22d140u: goto label_22d140;
        case 0x22d144u: goto label_22d144;
        case 0x22d148u: goto label_22d148;
        case 0x22d14cu: goto label_22d14c;
        case 0x22d150u: goto label_22d150;
        case 0x22d154u: goto label_22d154;
        case 0x22d158u: goto label_22d158;
        case 0x22d15cu: goto label_22d15c;
        case 0x22d160u: goto label_22d160;
        case 0x22d164u: goto label_22d164;
        case 0x22d168u: goto label_22d168;
        case 0x22d16cu: goto label_22d16c;
        case 0x22d170u: goto label_22d170;
        case 0x22d174u: goto label_22d174;
        case 0x22d178u: goto label_22d178;
        case 0x22d17cu: goto label_22d17c;
        case 0x22d180u: goto label_22d180;
        case 0x22d184u: goto label_22d184;
        case 0x22d188u: goto label_22d188;
        case 0x22d18cu: goto label_22d18c;
        case 0x22d190u: goto label_22d190;
        case 0x22d194u: goto label_22d194;
        case 0x22d198u: goto label_22d198;
        case 0x22d19cu: goto label_22d19c;
        case 0x22d1a0u: goto label_22d1a0;
        case 0x22d1a4u: goto label_22d1a4;
        case 0x22d1a8u: goto label_22d1a8;
        case 0x22d1acu: goto label_22d1ac;
        case 0x22d1b0u: goto label_22d1b0;
        case 0x22d1b4u: goto label_22d1b4;
        case 0x22d1b8u: goto label_22d1b8;
        case 0x22d1bcu: goto label_22d1bc;
        case 0x22d1c0u: goto label_22d1c0;
        case 0x22d1c4u: goto label_22d1c4;
        case 0x22d1c8u: goto label_22d1c8;
        case 0x22d1ccu: goto label_22d1cc;
        case 0x22d1d0u: goto label_22d1d0;
        case 0x22d1d4u: goto label_22d1d4;
        case 0x22d1d8u: goto label_22d1d8;
        case 0x22d1dcu: goto label_22d1dc;
        case 0x22d1e0u: goto label_22d1e0;
        case 0x22d1e4u: goto label_22d1e4;
        case 0x22d1e8u: goto label_22d1e8;
        case 0x22d1ecu: goto label_22d1ec;
        case 0x22d1f0u: goto label_22d1f0;
        case 0x22d1f4u: goto label_22d1f4;
        case 0x22d1f8u: goto label_22d1f8;
        case 0x22d1fcu: goto label_22d1fc;
        case 0x22d200u: goto label_22d200;
        case 0x22d204u: goto label_22d204;
        case 0x22d208u: goto label_22d208;
        case 0x22d20cu: goto label_22d20c;
        case 0x22d210u: goto label_22d210;
        case 0x22d214u: goto label_22d214;
        case 0x22d218u: goto label_22d218;
        case 0x22d21cu: goto label_22d21c;
        case 0x22d220u: goto label_22d220;
        case 0x22d224u: goto label_22d224;
        case 0x22d228u: goto label_22d228;
        case 0x22d22cu: goto label_22d22c;
        case 0x22d230u: goto label_22d230;
        case 0x22d234u: goto label_22d234;
        case 0x22d238u: goto label_22d238;
        case 0x22d23cu: goto label_22d23c;
        case 0x22d240u: goto label_22d240;
        case 0x22d244u: goto label_22d244;
        case 0x22d248u: goto label_22d248;
        case 0x22d24cu: goto label_22d24c;
        case 0x22d250u: goto label_22d250;
        case 0x22d254u: goto label_22d254;
        case 0x22d258u: goto label_22d258;
        case 0x22d25cu: goto label_22d25c;
        case 0x22d260u: goto label_22d260;
        case 0x22d264u: goto label_22d264;
        case 0x22d268u: goto label_22d268;
        case 0x22d26cu: goto label_22d26c;
        case 0x22d270u: goto label_22d270;
        case 0x22d274u: goto label_22d274;
        case 0x22d278u: goto label_22d278;
        case 0x22d27cu: goto label_22d27c;
        case 0x22d280u: goto label_22d280;
        case 0x22d284u: goto label_22d284;
        case 0x22d288u: goto label_22d288;
        case 0x22d28cu: goto label_22d28c;
        case 0x22d290u: goto label_22d290;
        case 0x22d294u: goto label_22d294;
        case 0x22d298u: goto label_22d298;
        case 0x22d29cu: goto label_22d29c;
        case 0x22d2a0u: goto label_22d2a0;
        case 0x22d2a4u: goto label_22d2a4;
        case 0x22d2a8u: goto label_22d2a8;
        case 0x22d2acu: goto label_22d2ac;
        case 0x22d2b0u: goto label_22d2b0;
        case 0x22d2b4u: goto label_22d2b4;
        case 0x22d2b8u: goto label_22d2b8;
        case 0x22d2bcu: goto label_22d2bc;
        case 0x22d2c0u: goto label_22d2c0;
        case 0x22d2c4u: goto label_22d2c4;
        case 0x22d2c8u: goto label_22d2c8;
        case 0x22d2ccu: goto label_22d2cc;
        case 0x22d2d0u: goto label_22d2d0;
        case 0x22d2d4u: goto label_22d2d4;
        case 0x22d2d8u: goto label_22d2d8;
        case 0x22d2dcu: goto label_22d2dc;
        case 0x22d2e0u: goto label_22d2e0;
        case 0x22d2e4u: goto label_22d2e4;
        case 0x22d2e8u: goto label_22d2e8;
        case 0x22d2ecu: goto label_22d2ec;
        case 0x22d2f0u: goto label_22d2f0;
        case 0x22d2f4u: goto label_22d2f4;
        case 0x22d2f8u: goto label_22d2f8;
        case 0x22d2fcu: goto label_22d2fc;
        case 0x22d300u: goto label_22d300;
        case 0x22d304u: goto label_22d304;
        case 0x22d308u: goto label_22d308;
        case 0x22d30cu: goto label_22d30c;
        case 0x22d310u: goto label_22d310;
        case 0x22d314u: goto label_22d314;
        case 0x22d318u: goto label_22d318;
        case 0x22d31cu: goto label_22d31c;
        case 0x22d320u: goto label_22d320;
        case 0x22d324u: goto label_22d324;
        case 0x22d328u: goto label_22d328;
        case 0x22d32cu: goto label_22d32c;
        case 0x22d330u: goto label_22d330;
        case 0x22d334u: goto label_22d334;
        case 0x22d338u: goto label_22d338;
        case 0x22d33cu: goto label_22d33c;
        case 0x22d340u: goto label_22d340;
        case 0x22d344u: goto label_22d344;
        case 0x22d348u: goto label_22d348;
        case 0x22d34cu: goto label_22d34c;
        case 0x22d350u: goto label_22d350;
        case 0x22d354u: goto label_22d354;
        case 0x22d358u: goto label_22d358;
        case 0x22d35cu: goto label_22d35c;
        case 0x22d360u: goto label_22d360;
        case 0x22d364u: goto label_22d364;
        case 0x22d368u: goto label_22d368;
        case 0x22d36cu: goto label_22d36c;
        case 0x22d370u: goto label_22d370;
        case 0x22d374u: goto label_22d374;
        case 0x22d378u: goto label_22d378;
        case 0x22d37cu: goto label_22d37c;
        case 0x22d380u: goto label_22d380;
        case 0x22d384u: goto label_22d384;
        case 0x22d388u: goto label_22d388;
        case 0x22d38cu: goto label_22d38c;
        case 0x22d390u: goto label_22d390;
        case 0x22d394u: goto label_22d394;
        case 0x22d398u: goto label_22d398;
        case 0x22d39cu: goto label_22d39c;
        case 0x22d3a0u: goto label_22d3a0;
        case 0x22d3a4u: goto label_22d3a4;
        case 0x22d3a8u: goto label_22d3a8;
        case 0x22d3acu: goto label_22d3ac;
        case 0x22d3b0u: goto label_22d3b0;
        case 0x22d3b4u: goto label_22d3b4;
        case 0x22d3b8u: goto label_22d3b8;
        case 0x22d3bcu: goto label_22d3bc;
        case 0x22d3c0u: goto label_22d3c0;
        case 0x22d3c4u: goto label_22d3c4;
        case 0x22d3c8u: goto label_22d3c8;
        case 0x22d3ccu: goto label_22d3cc;
        case 0x22d3d0u: goto label_22d3d0;
        case 0x22d3d4u: goto label_22d3d4;
        case 0x22d3d8u: goto label_22d3d8;
        case 0x22d3dcu: goto label_22d3dc;
        case 0x22d3e0u: goto label_22d3e0;
        case 0x22d3e4u: goto label_22d3e4;
        case 0x22d3e8u: goto label_22d3e8;
        case 0x22d3ecu: goto label_22d3ec;
        case 0x22d3f0u: goto label_22d3f0;
        case 0x22d3f4u: goto label_22d3f4;
        case 0x22d3f8u: goto label_22d3f8;
        case 0x22d3fcu: goto label_22d3fc;
        case 0x22d400u: goto label_22d400;
        case 0x22d404u: goto label_22d404;
        case 0x22d408u: goto label_22d408;
        case 0x22d40cu: goto label_22d40c;
        case 0x22d410u: goto label_22d410;
        case 0x22d414u: goto label_22d414;
        case 0x22d418u: goto label_22d418;
        case 0x22d41cu: goto label_22d41c;
        case 0x22d420u: goto label_22d420;
        case 0x22d424u: goto label_22d424;
        case 0x22d428u: goto label_22d428;
        case 0x22d42cu: goto label_22d42c;
        case 0x22d430u: goto label_22d430;
        case 0x22d434u: goto label_22d434;
        case 0x22d438u: goto label_22d438;
        case 0x22d43cu: goto label_22d43c;
        case 0x22d440u: goto label_22d440;
        case 0x22d444u: goto label_22d444;
        case 0x22d448u: goto label_22d448;
        case 0x22d44cu: goto label_22d44c;
        case 0x22d450u: goto label_22d450;
        case 0x22d454u: goto label_22d454;
        case 0x22d458u: goto label_22d458;
        case 0x22d45cu: goto label_22d45c;
        case 0x22d460u: goto label_22d460;
        case 0x22d464u: goto label_22d464;
        case 0x22d468u: goto label_22d468;
        case 0x22d46cu: goto label_22d46c;
        case 0x22d470u: goto label_22d470;
        case 0x22d474u: goto label_22d474;
        case 0x22d478u: goto label_22d478;
        case 0x22d47cu: goto label_22d47c;
        case 0x22d480u: goto label_22d480;
        case 0x22d484u: goto label_22d484;
        case 0x22d488u: goto label_22d488;
        case 0x22d48cu: goto label_22d48c;
        case 0x22d490u: goto label_22d490;
        case 0x22d494u: goto label_22d494;
        case 0x22d498u: goto label_22d498;
        case 0x22d49cu: goto label_22d49c;
        case 0x22d4a0u: goto label_22d4a0;
        case 0x22d4a4u: goto label_22d4a4;
        case 0x22d4a8u: goto label_22d4a8;
        case 0x22d4acu: goto label_22d4ac;
        case 0x22d4b0u: goto label_22d4b0;
        case 0x22d4b4u: goto label_22d4b4;
        case 0x22d4b8u: goto label_22d4b8;
        case 0x22d4bcu: goto label_22d4bc;
        case 0x22d4c0u: goto label_22d4c0;
        case 0x22d4c4u: goto label_22d4c4;
        case 0x22d4c8u: goto label_22d4c8;
        case 0x22d4ccu: goto label_22d4cc;
        case 0x22d4d0u: goto label_22d4d0;
        case 0x22d4d4u: goto label_22d4d4;
        case 0x22d4d8u: goto label_22d4d8;
        case 0x22d4dcu: goto label_22d4dc;
        case 0x22d4e0u: goto label_22d4e0;
        case 0x22d4e4u: goto label_22d4e4;
        case 0x22d4e8u: goto label_22d4e8;
        case 0x22d4ecu: goto label_22d4ec;
        case 0x22d4f0u: goto label_22d4f0;
        case 0x22d4f4u: goto label_22d4f4;
        case 0x22d4f8u: goto label_22d4f8;
        case 0x22d4fcu: goto label_22d4fc;
        case 0x22d500u: goto label_22d500;
        case 0x22d504u: goto label_22d504;
        case 0x22d508u: goto label_22d508;
        case 0x22d50cu: goto label_22d50c;
        case 0x22d510u: goto label_22d510;
        case 0x22d514u: goto label_22d514;
        case 0x22d518u: goto label_22d518;
        case 0x22d51cu: goto label_22d51c;
        case 0x22d520u: goto label_22d520;
        case 0x22d524u: goto label_22d524;
        case 0x22d528u: goto label_22d528;
        case 0x22d52cu: goto label_22d52c;
        case 0x22d530u: goto label_22d530;
        case 0x22d534u: goto label_22d534;
        case 0x22d538u: goto label_22d538;
        case 0x22d53cu: goto label_22d53c;
        case 0x22d540u: goto label_22d540;
        case 0x22d544u: goto label_22d544;
        case 0x22d548u: goto label_22d548;
        case 0x22d54cu: goto label_22d54c;
        case 0x22d550u: goto label_22d550;
        case 0x22d554u: goto label_22d554;
        case 0x22d558u: goto label_22d558;
        case 0x22d55cu: goto label_22d55c;
        case 0x22d560u: goto label_22d560;
        case 0x22d564u: goto label_22d564;
        case 0x22d568u: goto label_22d568;
        case 0x22d56cu: goto label_22d56c;
        case 0x22d570u: goto label_22d570;
        case 0x22d574u: goto label_22d574;
        case 0x22d578u: goto label_22d578;
        case 0x22d57cu: goto label_22d57c;
        case 0x22d580u: goto label_22d580;
        case 0x22d584u: goto label_22d584;
        case 0x22d588u: goto label_22d588;
        case 0x22d58cu: goto label_22d58c;
        case 0x22d590u: goto label_22d590;
        case 0x22d594u: goto label_22d594;
        case 0x22d598u: goto label_22d598;
        case 0x22d59cu: goto label_22d59c;
        case 0x22d5a0u: goto label_22d5a0;
        case 0x22d5a4u: goto label_22d5a4;
        case 0x22d5a8u: goto label_22d5a8;
        case 0x22d5acu: goto label_22d5ac;
        case 0x22d5b0u: goto label_22d5b0;
        case 0x22d5b4u: goto label_22d5b4;
        case 0x22d5b8u: goto label_22d5b8;
        case 0x22d5bcu: goto label_22d5bc;
        case 0x22d5c0u: goto label_22d5c0;
        case 0x22d5c4u: goto label_22d5c4;
        case 0x22d5c8u: goto label_22d5c8;
        case 0x22d5ccu: goto label_22d5cc;
        case 0x22d5d0u: goto label_22d5d0;
        case 0x22d5d4u: goto label_22d5d4;
        case 0x22d5d8u: goto label_22d5d8;
        case 0x22d5dcu: goto label_22d5dc;
        case 0x22d5e0u: goto label_22d5e0;
        case 0x22d5e4u: goto label_22d5e4;
        case 0x22d5e8u: goto label_22d5e8;
        case 0x22d5ecu: goto label_22d5ec;
        case 0x22d5f0u: goto label_22d5f0;
        case 0x22d5f4u: goto label_22d5f4;
        case 0x22d5f8u: goto label_22d5f8;
        case 0x22d5fcu: goto label_22d5fc;
        case 0x22d600u: goto label_22d600;
        case 0x22d604u: goto label_22d604;
        case 0x22d608u: goto label_22d608;
        case 0x22d60cu: goto label_22d60c;
        case 0x22d610u: goto label_22d610;
        case 0x22d614u: goto label_22d614;
        case 0x22d618u: goto label_22d618;
        case 0x22d61cu: goto label_22d61c;
        case 0x22d620u: goto label_22d620;
        case 0x22d624u: goto label_22d624;
        case 0x22d628u: goto label_22d628;
        case 0x22d62cu: goto label_22d62c;
        case 0x22d630u: goto label_22d630;
        case 0x22d634u: goto label_22d634;
        case 0x22d638u: goto label_22d638;
        case 0x22d63cu: goto label_22d63c;
        case 0x22d640u: goto label_22d640;
        case 0x22d644u: goto label_22d644;
        case 0x22d648u: goto label_22d648;
        case 0x22d64cu: goto label_22d64c;
        case 0x22d650u: goto label_22d650;
        case 0x22d654u: goto label_22d654;
        case 0x22d658u: goto label_22d658;
        case 0x22d65cu: goto label_22d65c;
        case 0x22d660u: goto label_22d660;
        case 0x22d664u: goto label_22d664;
        case 0x22d668u: goto label_22d668;
        case 0x22d66cu: goto label_22d66c;
        case 0x22d670u: goto label_22d670;
        case 0x22d674u: goto label_22d674;
        case 0x22d678u: goto label_22d678;
        case 0x22d67cu: goto label_22d67c;
        case 0x22d680u: goto label_22d680;
        case 0x22d684u: goto label_22d684;
        case 0x22d688u: goto label_22d688;
        case 0x22d68cu: goto label_22d68c;
        case 0x22d690u: goto label_22d690;
        case 0x22d694u: goto label_22d694;
        case 0x22d698u: goto label_22d698;
        case 0x22d69cu: goto label_22d69c;
        case 0x22d6a0u: goto label_22d6a0;
        case 0x22d6a4u: goto label_22d6a4;
        case 0x22d6a8u: goto label_22d6a8;
        case 0x22d6acu: goto label_22d6ac;
        case 0x22d6b0u: goto label_22d6b0;
        case 0x22d6b4u: goto label_22d6b4;
        case 0x22d6b8u: goto label_22d6b8;
        case 0x22d6bcu: goto label_22d6bc;
        case 0x22d6c0u: goto label_22d6c0;
        case 0x22d6c4u: goto label_22d6c4;
        case 0x22d6c8u: goto label_22d6c8;
        case 0x22d6ccu: goto label_22d6cc;
        case 0x22d6d0u: goto label_22d6d0;
        case 0x22d6d4u: goto label_22d6d4;
        case 0x22d6d8u: goto label_22d6d8;
        case 0x22d6dcu: goto label_22d6dc;
        case 0x22d6e0u: goto label_22d6e0;
        case 0x22d6e4u: goto label_22d6e4;
        case 0x22d6e8u: goto label_22d6e8;
        case 0x22d6ecu: goto label_22d6ec;
        case 0x22d6f0u: goto label_22d6f0;
        case 0x22d6f4u: goto label_22d6f4;
        case 0x22d6f8u: goto label_22d6f8;
        case 0x22d6fcu: goto label_22d6fc;
        case 0x22d700u: goto label_22d700;
        case 0x22d704u: goto label_22d704;
        case 0x22d708u: goto label_22d708;
        case 0x22d70cu: goto label_22d70c;
        case 0x22d710u: goto label_22d710;
        case 0x22d714u: goto label_22d714;
        case 0x22d718u: goto label_22d718;
        case 0x22d71cu: goto label_22d71c;
        case 0x22d720u: goto label_22d720;
        case 0x22d724u: goto label_22d724;
        case 0x22d728u: goto label_22d728;
        case 0x22d72cu: goto label_22d72c;
        case 0x22d730u: goto label_22d730;
        case 0x22d734u: goto label_22d734;
        case 0x22d738u: goto label_22d738;
        case 0x22d73cu: goto label_22d73c;
        case 0x22d740u: goto label_22d740;
        case 0x22d744u: goto label_22d744;
        case 0x22d748u: goto label_22d748;
        case 0x22d74cu: goto label_22d74c;
        case 0x22d750u: goto label_22d750;
        case 0x22d754u: goto label_22d754;
        case 0x22d758u: goto label_22d758;
        case 0x22d75cu: goto label_22d75c;
        case 0x22d760u: goto label_22d760;
        case 0x22d764u: goto label_22d764;
        case 0x22d768u: goto label_22d768;
        case 0x22d76cu: goto label_22d76c;
        case 0x22d770u: goto label_22d770;
        case 0x22d774u: goto label_22d774;
        case 0x22d778u: goto label_22d778;
        case 0x22d77cu: goto label_22d77c;
        case 0x22d780u: goto label_22d780;
        case 0x22d784u: goto label_22d784;
        case 0x22d788u: goto label_22d788;
        case 0x22d78cu: goto label_22d78c;
        case 0x22d790u: goto label_22d790;
        case 0x22d794u: goto label_22d794;
        case 0x22d798u: goto label_22d798;
        case 0x22d79cu: goto label_22d79c;
        case 0x22d7a0u: goto label_22d7a0;
        case 0x22d7a4u: goto label_22d7a4;
        case 0x22d7a8u: goto label_22d7a8;
        case 0x22d7acu: goto label_22d7ac;
        case 0x22d7b0u: goto label_22d7b0;
        case 0x22d7b4u: goto label_22d7b4;
        case 0x22d7b8u: goto label_22d7b8;
        case 0x22d7bcu: goto label_22d7bc;
        case 0x22d7c0u: goto label_22d7c0;
        case 0x22d7c4u: goto label_22d7c4;
        case 0x22d7c8u: goto label_22d7c8;
        case 0x22d7ccu: goto label_22d7cc;
        case 0x22d7d0u: goto label_22d7d0;
        case 0x22d7d4u: goto label_22d7d4;
        case 0x22d7d8u: goto label_22d7d8;
        case 0x22d7dcu: goto label_22d7dc;
        case 0x22d7e0u: goto label_22d7e0;
        case 0x22d7e4u: goto label_22d7e4;
        case 0x22d7e8u: goto label_22d7e8;
        case 0x22d7ecu: goto label_22d7ec;
        case 0x22d7f0u: goto label_22d7f0;
        case 0x22d7f4u: goto label_22d7f4;
        case 0x22d7f8u: goto label_22d7f8;
        case 0x22d7fcu: goto label_22d7fc;
        case 0x22d800u: goto label_22d800;
        case 0x22d804u: goto label_22d804;
        case 0x22d808u: goto label_22d808;
        case 0x22d80cu: goto label_22d80c;
        case 0x22d810u: goto label_22d810;
        case 0x22d814u: goto label_22d814;
        case 0x22d818u: goto label_22d818;
        case 0x22d81cu: goto label_22d81c;
        case 0x22d820u: goto label_22d820;
        case 0x22d824u: goto label_22d824;
        case 0x22d828u: goto label_22d828;
        case 0x22d82cu: goto label_22d82c;
        case 0x22d830u: goto label_22d830;
        case 0x22d834u: goto label_22d834;
        case 0x22d838u: goto label_22d838;
        case 0x22d83cu: goto label_22d83c;
        case 0x22d840u: goto label_22d840;
        case 0x22d844u: goto label_22d844;
        case 0x22d848u: goto label_22d848;
        case 0x22d84cu: goto label_22d84c;
        case 0x22d850u: goto label_22d850;
        case 0x22d854u: goto label_22d854;
        case 0x22d858u: goto label_22d858;
        case 0x22d85cu: goto label_22d85c;
        case 0x22d860u: goto label_22d860;
        case 0x22d864u: goto label_22d864;
        case 0x22d868u: goto label_22d868;
        case 0x22d86cu: goto label_22d86c;
        case 0x22d870u: goto label_22d870;
        case 0x22d874u: goto label_22d874;
        case 0x22d878u: goto label_22d878;
        case 0x22d87cu: goto label_22d87c;
        case 0x22d880u: goto label_22d880;
        case 0x22d884u: goto label_22d884;
        case 0x22d888u: goto label_22d888;
        case 0x22d88cu: goto label_22d88c;
        case 0x22d890u: goto label_22d890;
        case 0x22d894u: goto label_22d894;
        case 0x22d898u: goto label_22d898;
        case 0x22d89cu: goto label_22d89c;
        case 0x22d8a0u: goto label_22d8a0;
        case 0x22d8a4u: goto label_22d8a4;
        case 0x22d8a8u: goto label_22d8a8;
        case 0x22d8acu: goto label_22d8ac;
        case 0x22d8b0u: goto label_22d8b0;
        case 0x22d8b4u: goto label_22d8b4;
        case 0x22d8b8u: goto label_22d8b8;
        case 0x22d8bcu: goto label_22d8bc;
        case 0x22d8c0u: goto label_22d8c0;
        case 0x22d8c4u: goto label_22d8c4;
        case 0x22d8c8u: goto label_22d8c8;
        case 0x22d8ccu: goto label_22d8cc;
        case 0x22d8d0u: goto label_22d8d0;
        case 0x22d8d4u: goto label_22d8d4;
        case 0x22d8d8u: goto label_22d8d8;
        case 0x22d8dcu: goto label_22d8dc;
        case 0x22d8e0u: goto label_22d8e0;
        case 0x22d8e4u: goto label_22d8e4;
        case 0x22d8e8u: goto label_22d8e8;
        case 0x22d8ecu: goto label_22d8ec;
        case 0x22d8f0u: goto label_22d8f0;
        case 0x22d8f4u: goto label_22d8f4;
        case 0x22d8f8u: goto label_22d8f8;
        case 0x22d8fcu: goto label_22d8fc;
        case 0x22d900u: goto label_22d900;
        case 0x22d904u: goto label_22d904;
        case 0x22d908u: goto label_22d908;
        case 0x22d90cu: goto label_22d90c;
        case 0x22d910u: goto label_22d910;
        case 0x22d914u: goto label_22d914;
        case 0x22d918u: goto label_22d918;
        case 0x22d91cu: goto label_22d91c;
        case 0x22d920u: goto label_22d920;
        case 0x22d924u: goto label_22d924;
        case 0x22d928u: goto label_22d928;
        case 0x22d92cu: goto label_22d92c;
        case 0x22d930u: goto label_22d930;
        case 0x22d934u: goto label_22d934;
        case 0x22d938u: goto label_22d938;
        case 0x22d93cu: goto label_22d93c;
        case 0x22d940u: goto label_22d940;
        case 0x22d944u: goto label_22d944;
        case 0x22d948u: goto label_22d948;
        case 0x22d94cu: goto label_22d94c;
        case 0x22d950u: goto label_22d950;
        case 0x22d954u: goto label_22d954;
        case 0x22d958u: goto label_22d958;
        case 0x22d95cu: goto label_22d95c;
        case 0x22d960u: goto label_22d960;
        case 0x22d964u: goto label_22d964;
        case 0x22d968u: goto label_22d968;
        case 0x22d96cu: goto label_22d96c;
        case 0x22d970u: goto label_22d970;
        case 0x22d974u: goto label_22d974;
        case 0x22d978u: goto label_22d978;
        case 0x22d97cu: goto label_22d97c;
        default: break;
    }

    ctx->pc = 0x22ce78u;

label_22ce78:
    // 0x22ce78: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x22ce78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
label_22ce7c:
    // 0x22ce7c: 0xffb101c8  sd          $s1, 0x1C8($sp)
    ctx->pc = 0x22ce7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 17));
label_22ce80:
    // 0x22ce80: 0xffb401e0  sd          $s4, 0x1E0($sp)
    ctx->pc = 0x22ce80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 20));
label_22ce84:
    // 0x22ce84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22ce84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22ce88:
    // 0x22ce88: 0xffb001c0  sd          $s0, 0x1C0($sp)
    ctx->pc = 0x22ce88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 16));
label_22ce8c:
    // 0x22ce8c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x22ce8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22ce90:
    // 0x22ce90: 0xffb201d0  sd          $s2, 0x1D0($sp)
    ctx->pc = 0x22ce90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 18));
label_22ce94:
    // 0x22ce94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22ce94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22ce98:
    // 0x22ce98: 0xffb301d8  sd          $s3, 0x1D8($sp)
    ctx->pc = 0x22ce98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 19));
label_22ce9c:
    // 0x22ce9c: 0xffb501e8  sd          $s5, 0x1E8($sp)
    ctx->pc = 0x22ce9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 21));
label_22cea0:
    // 0x22cea0: 0xffb601f0  sd          $s6, 0x1F0($sp)
    ctx->pc = 0x22cea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 22));
label_22cea4:
    // 0x22cea4: 0xffbf01f8  sd          $ra, 0x1F8($sp)
    ctx->pc = 0x22cea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 31));
label_22cea8:
    // 0x22cea8: 0xe7b40200  swc1        $f20, 0x200($sp)
    ctx->pc = 0x22cea8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_22ceac:
    // 0x22ceac: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x22ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22ceb0:
    // 0x22ceb0: 0xc07a8b2  jal         func_1EA2C8
label_22ceb4:
    if (ctx->pc == 0x22CEB4u) {
        ctx->pc = 0x22CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CEB0u;
        // 0x22ceb4: 0x8c56014c  lw          $s6, 0x14C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CEB8u;
        goto label_22ceb8;
    }
    ctx->pc = 0x22CEB0u;
    SET_GPR_U32(ctx, 31, 0x22CEB8u);
    ctx->pc = 0x22CEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CEB0u;
    // 0x22ceb4: 0x8c56014c  lw          $s6, 0x14C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x22CEB0u, 0x22CEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CEB8u;
label_22ceb8:
    // 0x22ceb8: 0xc0f6a96  jal         func_3DAA58
label_22cebc:
    if (ctx->pc == 0x22CEBCu) {
        ctx->pc = 0x22CEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CEB8u;
        // 0x22cebc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CEC0u;
        goto label_22cec0;
    }
    ctx->pc = 0x22CEB8u;
    SET_GPR_U32(ctx, 31, 0x22CEC0u);
    ctx->pc = 0x22CEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CEB8u;
    // 0x22cebc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x22CEB8u, 0x22CEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CEC0u;
label_22cec0:
    // 0x22cec0: 0xc0f6a96  jal         func_3DAA58
label_22cec4:
    if (ctx->pc == 0x22CEC4u) {
        ctx->pc = 0x22CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CEC0u;
        // 0x22cec4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CEC8u;
        goto label_22cec8;
    }
    ctx->pc = 0x22CEC0u;
    SET_GPR_U32(ctx, 31, 0x22CEC8u);
    ctx->pc = 0x22CEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CEC0u;
    // 0x22cec4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x22CEC0u, 0x22CEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CEC8u;
label_22cec8:
    // 0x22cec8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22cec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22cecc:
    // 0x22cecc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22ceccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22ced0:
    // 0x22ced0: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x22ced0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_22ced4:
    // 0x22ced4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x22ced4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_22ced8:
    // 0x22ced8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x22ced8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_22cedc:
    // 0x22cedc: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x22cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22cee0:
    // 0x22cee0: 0x8c440150  lw          $a0, 0x150($v0)
    ctx->pc = 0x22cee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_22cee4:
    // 0x22cee4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_22cee8:
    if (ctx->pc == 0x22CEE8u) {
        ctx->pc = 0x22CEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CEE4u;
        // 0x22cee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CEECu;
        goto label_22ceec;
    }
    ctx->pc = 0x22CEE4u;
    {
        const bool branch_taken_0x22cee4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x22CEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CEE4u;
        // 0x22cee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cee4) {
            ctx->pc = 0x22CEF8u;
            goto label_22cef8;
        }
    }
    ctx->pc = 0x22CEECu;
label_22ceec:
    // 0x22ceec: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x22ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_22cef0:
    // 0x22cef0: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
label_22cef4:
    if (ctx->pc == 0x22CEF4u) {
        ctx->pc = 0x22CEF8u;
        goto label_22cef8;
    }
    ctx->pc = 0x22CEF0u;
    {
        const bool branch_taken_0x22cef0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x22cef0) {
            ctx->pc = 0x22CEFCu;
            goto label_22cefc;
        }
    }
    ctx->pc = 0x22CEF8u;
label_22cef8:
    // 0x22cef8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22cef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22cefc:
    // 0x22cefc: 0x54a00045  bnel        $a1, $zero, . + 4 + (0x45 << 2)
label_22cf00:
    if (ctx->pc == 0x22CF00u) {
        ctx->pc = 0x22CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CEFCu;
        // 0x22cf00: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF04u;
        goto label_22cf04;
    }
    ctx->pc = 0x22CEFCu;
    {
        const bool branch_taken_0x22cefc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x22cefc) {
            ctx->pc = 0x22CF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CEFCu;
            // 0x22cf00: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D014u;
            goto label_22d014;
        }
    }
    ctx->pc = 0x22CF04u;
label_22cf04:
    // 0x22cf04: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x22cf04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22cf08:
    // 0x22cf08: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x22cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_22cf0c:
    // 0x22cf0c: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x22cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
label_22cf10:
    // 0x22cf10: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x22cf10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_22cf14:
    // 0x22cf14: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_22cf18:
    if (ctx->pc == 0x22CF18u) {
        ctx->pc = 0x22CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF14u;
        // 0x22cf18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF1Cu;
        goto label_22cf1c;
    }
    ctx->pc = 0x22CF14u;
    {
        const bool branch_taken_0x22cf14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF14u;
        // 0x22cf18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf14) {
            ctx->pc = 0x22CF40u;
            goto label_22cf40;
        }
    }
    ctx->pc = 0x22CF1Cu;
label_22cf1c:
    // 0x22cf1c: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x22cf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_22cf20:
    // 0x22cf20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22cf20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22cf24:
    // 0x22cf24: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x22cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
label_22cf28:
    // 0x22cf28: 0x40f809  jalr        $v0
label_22cf2c:
    if (ctx->pc == 0x22CF2Cu) {
        ctx->pc = 0x22CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF28u;
        // 0x22cf2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF30u;
        goto label_22cf30;
    }
    ctx->pc = 0x22CF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22CF30u);
        ctx->pc = 0x22CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF28u;
        // 0x22cf2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CF28u, 0x22CF30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22CF30u;
label_22cf30:
    // 0x22cf30: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
label_22cf34:
    if (ctx->pc == 0x22CF34u) {
        ctx->pc = 0x22CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF30u;
        // 0x22cf34: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF38u;
        goto label_22cf38;
    }
    ctx->pc = 0x22CF30u;
    {
        const bool branch_taken_0x22cf30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22cf30) {
            ctx->pc = 0x22CF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CF30u;
            // 0x22cf34: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D014u;
            goto label_22d014;
        }
    }
    ctx->pc = 0x22CF38u;
label_22cf38:
    // 0x22cf38: 0x10000287  b           . + 4 + (0x287 << 2)
label_22cf3c:
    if (ctx->pc == 0x22CF3Cu) {
        ctx->pc = 0x22CF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF38u;
        // 0x22cf3c: 0xdfb001c0  ld          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF40u;
        goto label_22cf40;
    }
    ctx->pc = 0x22CF38u;
    {
        const bool branch_taken_0x22cf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF38u;
        // 0x22cf3c: 0xdfb001c0  ld          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf38) {
            ctx->pc = 0x22D958u;
            goto label_22d958;
        }
    }
    ctx->pc = 0x22CF40u;
label_22cf40:
    // 0x22cf40: 0xc6200504  lwc1        $f0, 0x504($s1)
    ctx->pc = 0x22cf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22cf44:
    // 0x22cf44: 0xc6210508  lwc1        $f1, 0x508($s1)
    ctx->pc = 0x22cf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22cf48:
    // 0x22cf48: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x22cf48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_22cf4c:
    // 0x22cf4c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x22cf4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_22cf50:
    // 0x22cf50: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x22cf50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22cf54:
    // 0x22cf54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22cf54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22cf58:
    // 0x22cf58: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x22cf58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22cf5c:
    // 0x22cf5c: 0x0  nop
    ctx->pc = 0x22cf5cu;
    // NOP
label_22cf60:
    // 0x22cf60: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_22cf64:
    if (ctx->pc == 0x22CF64u) {
        ctx->pc = 0x22CF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF60u;
        // 0x22cf64: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF68u;
        goto label_22cf68;
    }
    ctx->pc = 0x22CF60u;
    {
        const bool branch_taken_0x22cf60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22CF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF60u;
        // 0x22cf64: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf60) {
            ctx->pc = 0x22CF6Cu;
            goto label_22cf6c;
        }
    }
    ctx->pc = 0x22CF68u;
label_22cf68:
    // 0x22cf68: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22cf68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22cf6c:
    // 0x22cf6c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x22cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_22cf70:
    // 0x22cf70: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22cf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_22cf74:
    // 0x22cf74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_22cf78:
    if (ctx->pc == 0x22CF78u) {
        ctx->pc = 0x22CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF74u;
        // 0x22cf78: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF7Cu;
        goto label_22cf7c;
    }
    ctx->pc = 0x22CF74u;
    {
        const bool branch_taken_0x22cf74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF74u;
        // 0x22cf78: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf74) {
            ctx->pc = 0x22CF88u;
            goto label_22cf88;
        }
    }
    ctx->pc = 0x22CF7Cu;
label_22cf7c:
    // 0x22cf7c: 0xc0bf868  jal         func_2FE1A0
label_22cf80:
    if (ctx->pc == 0x22CF80u) {
        ctx->pc = 0x22CF84u;
        goto label_22cf84;
    }
    ctx->pc = 0x22CF7Cu;
    SET_GPR_U32(ctx, 31, 0x22CF84u);
    ctx->pc = 0x2FE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1A0u, 0x22CF7Cu, 0x22CF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CF84u;
label_22cf84:
    // 0x22cf84: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x22cf84u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_22cf88:
    // 0x22cf88: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x22cf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_22cf8c:
    // 0x22cf8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22cf8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22cf90:
    // 0x22cf90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22cf90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22cf94:
    // 0x22cf94: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x22cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
label_22cf98:
    // 0x22cf98: 0x40f809  jalr        $v0
label_22cf9c:
    if (ctx->pc == 0x22CF9Cu) {
        ctx->pc = 0x22CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF98u;
        // 0x22cf9c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CFA0u;
        goto label_22cfa0;
    }
    ctx->pc = 0x22CF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22CFA0u);
        ctx->pc = 0x22CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF98u;
        // 0x22cf9c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CF98u, 0x22CFA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22CFA0u;
label_22cfa0:
    // 0x22cfa0: 0x1040026c  beqz        $v0, . + 4 + (0x26C << 2)
label_22cfa4:
    if (ctx->pc == 0x22CFA4u) {
        ctx->pc = 0x22CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFA0u;
        // 0x22cfa4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CFA8u;
        goto label_22cfa8;
    }
    ctx->pc = 0x22CFA0u;
    {
        const bool branch_taken_0x22cfa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFA0u;
        // 0x22cfa4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cfa0) {
            ctx->pc = 0x22D954u;
            goto label_22d954;
        }
    }
    ctx->pc = 0x22CFA8u;
label_22cfa8:
    // 0x22cfa8: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x22cfa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22cfac:
    // 0x22cfac: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x22cfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_22cfb0:
    // 0x22cfb0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_22cfb4:
    if (ctx->pc == 0x22CFB4u) {
        ctx->pc = 0x22CFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFB0u;
        // 0x22cfb4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CFB8u;
        goto label_22cfb8;
    }
    ctx->pc = 0x22CFB0u;
    {
        const bool branch_taken_0x22cfb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22CFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFB0u;
        // 0x22cfb4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cfb0) {
            ctx->pc = 0x22CFFCu;
            goto label_22cffc;
        }
    }
    ctx->pc = 0x22CFB8u;
label_22cfb8:
    // 0x22cfb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22cfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22cfbc:
    // 0x22cfbc: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_22cfc0:
    if (ctx->pc == 0x22CFC0u) {
        ctx->pc = 0x22CFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFBCu;
        // 0x22cfc0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CFC4u;
        goto label_22cfc4;
    }
    ctx->pc = 0x22CFBCu;
    {
        const bool branch_taken_0x22cfbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22CFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFBCu;
        // 0x22cfc0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cfbc) {
            ctx->pc = 0x22CFFCu;
            goto label_22cffc;
        }
    }
    ctx->pc = 0x22CFC4u;
label_22cfc4:
    // 0x22cfc4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_22cfc8:
    if (ctx->pc == 0x22CFC8u) {
        ctx->pc = 0x22CFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFC4u;
        // 0x22cfc8: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CFCCu;
        goto label_22cfcc;
    }
    ctx->pc = 0x22CFC4u;
    {
        const bool branch_taken_0x22cfc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22CFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFC4u;
        // 0x22cfc8: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cfc4) {
            ctx->pc = 0x22CFFCu;
            goto label_22cffc;
        }
    }
    ctx->pc = 0x22CFCCu;
label_22cfcc:
    // 0x22cfcc: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_22cfd0:
    if (ctx->pc == 0x22CFD0u) {
        ctx->pc = 0x22CFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFCCu;
        // 0x22cfd0: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CFD4u;
        goto label_22cfd4;
    }
    ctx->pc = 0x22CFCCu;
    {
        const bool branch_taken_0x22cfcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22CFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFCCu;
        // 0x22cfd0: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cfcc) {
            ctx->pc = 0x22CFFCu;
            goto label_22cffc;
        }
    }
    ctx->pc = 0x22CFD4u;
label_22cfd4:
    // 0x22cfd4: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
label_22cfd8:
    if (ctx->pc == 0x22CFD8u) {
        ctx->pc = 0x22CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFD4u;
        // 0x22cfd8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CFDCu;
        goto label_22cfdc;
    }
    ctx->pc = 0x22CFD4u;
    {
        const bool branch_taken_0x22cfd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22cfd4) {
            ctx->pc = 0x22CFD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CFD4u;
            // 0x22cfd8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D000u;
            goto label_22d000;
        }
    }
    ctx->pc = 0x22CFDCu;
label_22cfdc:
    // 0x22cfdc: 0xc0924a6  jal         func_249298
label_22cfe0:
    if (ctx->pc == 0x22CFE0u) {
        ctx->pc = 0x22CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFDCu;
        // 0x22cfe0: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CFE4u;
        goto label_22cfe4;
    }
    ctx->pc = 0x22CFDCu;
    SET_GPR_U32(ctx, 31, 0x22CFE4u);
    ctx->pc = 0x22CFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CFDCu;
    // 0x22cfe0: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249298u, 0x22CFDCu, 0x22CFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CFE4u;
label_22cfe4:
    // 0x22cfe4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_22cfe8:
    if (ctx->pc == 0x22CFE8u) {
        ctx->pc = 0x22CFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFE4u;
        // 0x22cfe8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CFECu;
        goto label_22cfec;
    }
    ctx->pc = 0x22CFE4u;
    {
        const bool branch_taken_0x22cfe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22cfe4) {
            ctx->pc = 0x22CFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CFE4u;
            // 0x22cfe8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D000u;
            goto label_22d000;
        }
    }
    ctx->pc = 0x22CFECu;
label_22cfec:
    // 0x22cfec: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x22cfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_22cff0:
    // 0x22cff0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x22cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_22cff4:
    // 0x22cff4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_22cff8:
    if (ctx->pc == 0x22CFF8u) {
        ctx->pc = 0x22CFFCu;
        goto label_22cffc;
    }
    ctx->pc = 0x22CFF4u;
    {
        const bool branch_taken_0x22cff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22cff4) {
            ctx->pc = 0x22D000u;
            goto label_22d000;
        }
    }
    ctx->pc = 0x22CFFCu;
label_22cffc:
    // 0x22cffc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x22cffcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d000:
    // 0x22d000: 0x16600255  bnez        $s3, . + 4 + (0x255 << 2)
label_22d004:
    if (ctx->pc == 0x22D004u) {
        ctx->pc = 0x22D004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D000u;
        // 0x22d004: 0xdfb001c0  ld          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D008u;
        goto label_22d008;
    }
    ctx->pc = 0x22D000u;
    {
        const bool branch_taken_0x22d000 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D000u;
        // 0x22d004: 0xdfb001c0  ld          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d000) {
            ctx->pc = 0x22D958u;
            goto label_22d958;
        }
    }
    ctx->pc = 0x22D008u;
label_22d008:
    // 0x22d008: 0x56400254  bnel        $s2, $zero, . + 4 + (0x254 << 2)
label_22d00c:
    if (ctx->pc == 0x22D00Cu) {
        ctx->pc = 0x22D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D008u;
        // 0x22d00c: 0xdfb101c8  ld          $s1, 0x1C8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D010u;
        goto label_22d010;
    }
    ctx->pc = 0x22D008u;
    {
        const bool branch_taken_0x22d008 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d008) {
            ctx->pc = 0x22D00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D008u;
            // 0x22d00c: 0xdfb101c8  ld          $s1, 0x1C8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D95Cu;
            goto label_22d95c;
        }
    }
    ctx->pc = 0x22D010u;
label_22d010:
    // 0x22d010: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x22d010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_22d014:
    // 0x22d014: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22d014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_22d018:
    // 0x22d018: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_22d01c:
    if (ctx->pc == 0x22D01Cu) {
        ctx->pc = 0x22D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D018u;
        // 0x22d01c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D020u;
        goto label_22d020;
    }
    ctx->pc = 0x22D018u;
    {
        const bool branch_taken_0x22d018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D018u;
        // 0x22d01c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d018) {
            ctx->pc = 0x22D048u;
            goto label_22d048;
        }
    }
    ctx->pc = 0x22D020u;
label_22d020:
    // 0x22d020: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x22d020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22d024:
    // 0x22d024: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x22d024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_22d028:
    // 0x22d028: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x22d028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_22d02c:
    // 0x22d02c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_22d030:
    if (ctx->pc == 0x22D030u) {
        ctx->pc = 0x22D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D02Cu;
        // 0x22d030: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D034u;
        goto label_22d034;
    }
    ctx->pc = 0x22D02Cu;
    {
        const bool branch_taken_0x22d02c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D02Cu;
        // 0x22d030: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d02c) {
            ctx->pc = 0x22D040u;
            goto label_22d040;
        }
    }
    ctx->pc = 0x22D034u;
label_22d034:
    // 0x22d034: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x22d034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_22d038:
    // 0x22d038: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_22d03c:
    if (ctx->pc == 0x22D03Cu) {
        ctx->pc = 0x22D03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D038u;
        // 0x22d03c: 0x38920001  xori        $s2, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D040u;
        goto label_22d040;
    }
    ctx->pc = 0x22D038u;
    {
        const bool branch_taken_0x22d038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22D03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D038u;
        // 0x22d03c: 0x38920001  xori        $s2, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d038) {
            ctx->pc = 0x22D048u;
            goto label_22d048;
        }
    }
    ctx->pc = 0x22D040u;
label_22d040:
    // 0x22d040: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22d040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d044:
    // 0x22d044: 0x38920001  xori        $s2, $a0, 0x1
    ctx->pc = 0x22d044u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_22d048:
    // 0x22d048: 0xc0f6a96  jal         func_3DAA58
label_22d04c:
    if (ctx->pc == 0x22D04Cu) {
        ctx->pc = 0x22D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D048u;
        // 0x22d04c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D050u;
        goto label_22d050;
    }
    ctx->pc = 0x22D048u;
    SET_GPR_U32(ctx, 31, 0x22D050u);
    ctx->pc = 0x22D04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D048u;
    // 0x22d04c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x22D048u, 0x22D050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D050u;
label_22d050:
    // 0x22d050: 0xc0f6a96  jal         func_3DAA58
label_22d054:
    if (ctx->pc == 0x22D054u) {
        ctx->pc = 0x22D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D050u;
        // 0x22d054: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D058u;
        goto label_22d058;
    }
    ctx->pc = 0x22D050u;
    SET_GPR_U32(ctx, 31, 0x22D058u);
    ctx->pc = 0x22D054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D050u;
    // 0x22d054: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x22D050u, 0x22D058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D058u;
label_22d058:
    // 0x22d058: 0x12400088  beqz        $s2, . + 4 + (0x88 << 2)
label_22d05c:
    if (ctx->pc == 0x22D05Cu) {
        ctx->pc = 0x22D05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D058u;
        // 0x22d05c: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D060u;
        goto label_22d060;
    }
    ctx->pc = 0x22D058u;
    {
        const bool branch_taken_0x22d058 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D058u;
        // 0x22d05c: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d058) {
            ctx->pc = 0x22D27Cu;
            goto label_22d27c;
        }
    }
    ctx->pc = 0x22D060u;
label_22d060:
    // 0x22d060: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x22d060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_22d064:
    // 0x22d064: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x22d064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22d068:
    // 0x22d068: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x22d068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_22d06c:
    // 0x22d06c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x22d06cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_22d070:
    // 0x22d070: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x22d070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_22d074:
    // 0x22d074: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x22d074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_22d078:
    // 0x22d078: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x22d078u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_22d07c:
    // 0x22d07c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x22d07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_22d080:
    // 0x22d080: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x22d080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22d084:
    // 0x22d084: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x22d084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_22d088:
    // 0x22d088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d08c:
    // 0x22d08c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22d08cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d090:
    // 0x22d090: 0xc0bff58  jal         func_2FFD60
label_22d094:
    if (ctx->pc == 0x22D094u) {
        ctx->pc = 0x22D094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D090u;
        // 0x22d094: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D098u;
        goto label_22d098;
    }
    ctx->pc = 0x22D090u;
    SET_GPR_U32(ctx, 31, 0x22D098u);
    ctx->pc = 0x22D094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D090u;
    // 0x22d094: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFD60u, 0x22D090u, 0x22D098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D098u;
label_22d098:
    // 0x22d098: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x22d098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22d09c:
    // 0x22d09c: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x22d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_22d0a0:
    // 0x22d0a0: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x22d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
label_22d0a4:
    // 0x22d0a4: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x22d0a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_22d0a8:
    // 0x22d0a8: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
label_22d0ac:
    if (ctx->pc == 0x22D0ACu) {
        ctx->pc = 0x22D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0A8u;
        // 0x22d0ac: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D0B0u;
        goto label_22d0b0;
    }
    ctx->pc = 0x22D0A8u;
    {
        const bool branch_taken_0x22d0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0A8u;
        // 0x22d0ac: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d0a8) {
            ctx->pc = 0x22D278u;
            goto label_22d278;
        }
    }
    ctx->pc = 0x22D0B0u;
label_22d0b0:
    // 0x22d0b0: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x22d0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_22d0b4:
    // 0x22d0b4: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x22d0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
label_22d0b8:
    // 0x22d0b8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x22d0b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_22d0bc:
    // 0x22d0bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22d0bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d0c0:
    // 0x22d0c0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_22d0c4:
    if (ctx->pc == 0x22D0C4u) {
        ctx->pc = 0x22D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0C0u;
        // 0x22d0c4: 0x8e260104  lw          $a2, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D0C8u;
        goto label_22d0c8;
    }
    ctx->pc = 0x22D0C0u;
    {
        const bool branch_taken_0x22d0c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0C0u;
        // 0x22d0c4: 0x8e260104  lw          $a2, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d0c0) {
            ctx->pc = 0x22D0D4u;
            goto label_22d0d4;
        }
    }
    ctx->pc = 0x22D0C8u;
label_22d0c8:
    // 0x22d0c8: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x22d0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_22d0cc:
    // 0x22d0cc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x22d0ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_22d0d0:
    // 0x22d0d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22d0d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d0d4:
    // 0x22d0d4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x22d0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_22d0d8:
    // 0x22d0d8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x22d0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_22d0dc:
    // 0x22d0dc: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x22d0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_22d0e0:
    // 0x22d0e0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x22d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_22d0e4:
    // 0x22d0e4: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x22d0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_22d0e8:
    // 0x22d0e8: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x22d0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_22d0ec:
    // 0x22d0ec: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x22d0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_22d0f0:
    // 0x22d0f0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x22d0f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_22d0f4:
    // 0x22d0f4: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x22d0f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_22d0f8:
    // 0x22d0f8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x22d0f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_22d0fc:
    // 0x22d0fc: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x22d0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
label_22d100:
    // 0x22d100: 0xc7a300d0  lwc1        $f3, 0xD0($sp)
    ctx->pc = 0x22d100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22d104:
    // 0x22d104: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x22d104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_22d108:
    // 0x22d108: 0xc7a200d4  lwc1        $f2, 0xD4($sp)
    ctx->pc = 0x22d108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22d10c:
    // 0x22d10c: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x22d10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_22d110:
    // 0x22d110: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x22d110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d114:
    // 0x22d114: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x22d114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d118:
    // 0x22d118: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x22d118u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_22d11c:
    // 0x22d11c: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x22d11cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_22d120:
    // 0x22d120: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x22d120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_22d124:
    // 0x22d124: 0xe7a100bc  swc1        $f1, 0xBC($sp)
    ctx->pc = 0x22d124u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_22d128:
    // 0x22d128: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x22d128u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_22d12c:
    // 0x22d12c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x22d12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_22d130:
    // 0x22d130: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22d130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22d134:
    // 0x22d134: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x22d134u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22d138:
    // 0x22d138: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x22d138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_22d13c:
    // 0x22d13c: 0x16820018  bne         $s4, $v0, . + 4 + (0x18 << 2)
label_22d140:
    if (ctx->pc == 0x22D140u) {
        ctx->pc = 0x22D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D13Cu;
        // 0x22d140: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D144u;
        goto label_22d144;
    }
    ctx->pc = 0x22D13Cu;
    {
        const bool branch_taken_0x22d13c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x22D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D13Cu;
        // 0x22d140: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d13c) {
            ctx->pc = 0x22D1A0u;
            goto label_22d1a0;
        }
    }
    ctx->pc = 0x22D144u;
label_22d144:
    // 0x22d144: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x22d144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_22d148:
    // 0x22d148: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x22d148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_22d14c:
    // 0x22d14c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x22d14cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_22d150:
    // 0x22d150: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22d150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22d154:
    // 0x22d154: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x22d154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_22d158:
    // 0x22d158: 0xc4620040  lwc1        $f2, 0x40($v1)
    ctx->pc = 0x22d158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22d15c:
    // 0x22d15c: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x22d15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22d160:
    // 0x22d160: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x22d160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_22d164:
    // 0x22d164: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x22d164u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_22d168:
    // 0x22d168: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x22d168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d16c:
    // 0x22d16c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x22d16cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_22d170:
    // 0x22d170: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x22d170u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_22d174:
    // 0x22d174: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22d174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22d178:
    // 0x22d178: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x22d178u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_22d17c:
    // 0x22d17c: 0xe7a300bc  swc1        $f3, 0xBC($sp)
    ctx->pc = 0x22d17cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_22d180:
    // 0x22d180: 0xe7a400b4  swc1        $f4, 0xB4($sp)
    ctx->pc = 0x22d180u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_22d184:
    // 0x22d184: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x22d184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_22d188:
    // 0x22d188: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x22d188u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_22d18c:
    // 0x22d18c: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x22d18cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_22d190:
    // 0x22d190: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x22d190u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_22d194:
    // 0x22d194: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x22d194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_22d198:
    // 0x22d198: 0x10000017  b           . + 4 + (0x17 << 2)
label_22d19c:
    if (ctx->pc == 0x22D19Cu) {
        ctx->pc = 0x22D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D198u;
        // 0x22d19c: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D1A0u;
        goto label_22d1a0;
    }
    ctx->pc = 0x22D198u;
    {
        const bool branch_taken_0x22d198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D198u;
        // 0x22d19c: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d198) {
            ctx->pc = 0x22D1F8u;
            goto label_22d1f8;
        }
    }
    ctx->pc = 0x22D1A0u;
label_22d1a0:
    // 0x22d1a0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x22d1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_22d1a4:
    // 0x22d1a4: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x22d1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_22d1a8:
    // 0x22d1a8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x22d1a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_22d1ac:
    // 0x22d1ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22d1acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22d1b0:
    // 0x22d1b0: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x22d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_22d1b4:
    // 0x22d1b4: 0xc4620040  lwc1        $f2, 0x40($v1)
    ctx->pc = 0x22d1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22d1b8:
    // 0x22d1b8: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x22d1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22d1bc:
    // 0x22d1bc: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x22d1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_22d1c0:
    // 0x22d1c0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x22d1c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_22d1c4:
    // 0x22d1c4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x22d1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d1c8:
    // 0x22d1c8: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x22d1c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_22d1cc:
    // 0x22d1cc: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x22d1ccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_22d1d0:
    // 0x22d1d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22d1d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22d1d4:
    // 0x22d1d4: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x22d1d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_22d1d8:
    // 0x22d1d8: 0xe7a300bc  swc1        $f3, 0xBC($sp)
    ctx->pc = 0x22d1d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_22d1dc:
    // 0x22d1dc: 0xe7a400b4  swc1        $f4, 0xB4($sp)
    ctx->pc = 0x22d1dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_22d1e0:
    // 0x22d1e0: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x22d1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_22d1e4:
    // 0x22d1e4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x22d1e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_22d1e8:
    // 0x22d1e8: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x22d1e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_22d1ec:
    // 0x22d1ec: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x22d1ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_22d1f0:
    // 0x22d1f0: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x22d1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_22d1f4:
    // 0x22d1f4: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x22d1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_22d1f8:
    // 0x22d1f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22d1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22d1fc:
    // 0x22d1fc: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x22d1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_22d200:
    // 0x22d200: 0xc4820060  lwc1        $f2, 0x60($a0)
    ctx->pc = 0x22d200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22d204:
    // 0x22d204: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x22d204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22d208:
    // 0x22d208: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x22d208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d20c:
    // 0x22d20c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x22d20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d210:
    // 0x22d210: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x22d210u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_22d214:
    // 0x22d214: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x22d214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_22d218:
    // 0x22d218: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x22d218u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_22d21c:
    // 0x22d21c: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x22d21cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_22d220:
    // 0x22d220: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x22d220u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_22d224:
    // 0x22d224: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x22d224u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_22d228:
    // 0x22d228: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x22d228u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_22d22c:
    // 0x22d22c: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x22d22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
label_22d230:
    // 0x22d230: 0xc7a300d0  lwc1        $f3, 0xD0($sp)
    ctx->pc = 0x22d230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22d234:
    // 0x22d234: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x22d234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_22d238:
    // 0x22d238: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x22d238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d23c:
    // 0x22d23c: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x22d23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d240:
    // 0x22d240: 0xc7a200dc  lwc1        $f2, 0xDC($sp)
    ctx->pc = 0x22d240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22d244:
    // 0x22d244: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x22d244u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_22d248:
    // 0x22d248: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x22d248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_22d24c:
    // 0x22d24c: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x22d24cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_22d250:
    // 0x22d250: 0xe7a200bc  swc1        $f2, 0xBC($sp)
    ctx->pc = 0x22d250u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_22d254:
    // 0x22d254: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x22d254u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_22d258:
    // 0x22d258: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x22d258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_22d25c:
    // 0x22d25c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d260:
    // 0x22d260: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x22d260u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22d264:
    // 0x22d264: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x22d264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d268:
    // 0x22d268: 0xc08c5e8  jal         func_2317A0
label_22d26c:
    if (ctx->pc == 0x22D26Cu) {
        ctx->pc = 0x22D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D268u;
        // 0x22d26c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D270u;
        goto label_22d270;
    }
    ctx->pc = 0x22D268u;
    SET_GPR_U32(ctx, 31, 0x22D270u);
    ctx->pc = 0x22D26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D268u;
    // 0x22d26c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2317A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2317A0u, 0x22D268u, 0x22D270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D270u;
label_22d270:
    // 0x22d270: 0x14400199  bnez        $v0, . + 4 + (0x199 << 2)
label_22d274:
    if (ctx->pc == 0x22D274u) {
        ctx->pc = 0x22D278u;
        goto label_22d278;
    }
    ctx->pc = 0x22D270u;
    {
        const bool branch_taken_0x22d270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d270) {
            ctx->pc = 0x22D8D8u;
            goto label_22d8d8;
        }
    }
    ctx->pc = 0x22D278u;
label_22d278:
    // 0x22d278: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x22d278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22d27c:
    // 0x22d27c: 0x12820056  beq         $s4, $v0, . + 4 + (0x56 << 2)
label_22d280:
    if (ctx->pc == 0x22D280u) {
        ctx->pc = 0x22D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D27Cu;
        // 0x22d280: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D284u;
        goto label_22d284;
    }
    ctx->pc = 0x22D27Cu;
    {
        const bool branch_taken_0x22d27c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D27Cu;
        // 0x22d280: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d27c) {
            ctx->pc = 0x22D3D8u;
            goto label_22d3d8;
        }
    }
    ctx->pc = 0x22D284u;
label_22d284:
    // 0x22d284: 0x168200b4  bne         $s4, $v0, . + 4 + (0xB4 << 2)
label_22d288:
    if (ctx->pc == 0x22D288u) {
        ctx->pc = 0x22D28Cu;
        goto label_22d28c;
    }
    ctx->pc = 0x22D284u;
    {
        const bool branch_taken_0x22d284 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x22d284) {
            ctx->pc = 0x22D558u;
            goto label_22d558;
        }
    }
    ctx->pc = 0x22D28Cu;
label_22d28c:
    // 0x22d28c: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x22d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22d290:
    // 0x22d290: 0x8c640150  lw          $a0, 0x150($v1)
    ctx->pc = 0x22d290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_22d294:
    // 0x22d294: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x22d294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_22d298:
    // 0x22d298: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x22d298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_22d29c:
    // 0x22d29c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_22d2a0:
    if (ctx->pc == 0x22D2A0u) {
        ctx->pc = 0x22D2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D29Cu;
        // 0x22d2a0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D2A4u;
        goto label_22d2a4;
    }
    ctx->pc = 0x22D29Cu;
    {
        const bool branch_taken_0x22d29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D29Cu;
        // 0x22d2a0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d29c) {
            ctx->pc = 0x22D2ECu;
            goto label_22d2ec;
        }
    }
    ctx->pc = 0x22D2A4u;
label_22d2a4:
    // 0x22d2a4: 0x8e300418  lw          $s0, 0x418($s1)
    ctx->pc = 0x22d2a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_22d2a8:
    // 0x22d2a8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x22d2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_22d2ac:
    // 0x22d2ac: 0x3a10000e  xori        $s0, $s0, 0xE
    ctx->pc = 0x22d2acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)14);
label_22d2b0:
    // 0x22d2b0: 0x2e100001  sltiu       $s0, $s0, 0x1
    ctx->pc = 0x22d2b0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22d2b4:
    // 0x22d2b4: 0xc069c50  jal         func_1A7140
label_22d2b8:
    if (ctx->pc == 0x22D2B8u) {
        ctx->pc = 0x22D2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2B4u;
        // 0x22d2b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D2BCu;
        goto label_22d2bc;
    }
    ctx->pc = 0x22D2B4u;
    SET_GPR_U32(ctx, 31, 0x22D2BCu);
    ctx->pc = 0x22D2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D2B4u;
    // 0x22d2b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7140u, 0x22D2B4u, 0x22D2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D2BCu;
label_22d2bc:
    // 0x22d2bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d2c0:
    // 0x22d2c0: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x22d2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_22d2c4:
    // 0x22d2c4: 0xc08fed2  jal         func_23FB48
label_22d2c8:
    if (ctx->pc == 0x22D2C8u) {
        ctx->pc = 0x22D2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2C4u;
        // 0x22d2c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D2CCu;
        goto label_22d2cc;
    }
    ctx->pc = 0x22D2C4u;
    SET_GPR_U32(ctx, 31, 0x22D2CCu);
    ctx->pc = 0x22D2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D2C4u;
    // 0x22d2c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x22D2C4u, 0x22D2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D2CCu;
label_22d2cc:
    // 0x22d2cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d2d0:
    // 0x22d2d0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x22d2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_22d2d4:
    // 0x22d2d4: 0xc08fed2  jal         func_23FB48
label_22d2d8:
    if (ctx->pc == 0x22D2D8u) {
        ctx->pc = 0x22D2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2D4u;
        // 0x22d2d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D2DCu;
        goto label_22d2dc;
    }
    ctx->pc = 0x22D2D4u;
    SET_GPR_U32(ctx, 31, 0x22D2DCu);
    ctx->pc = 0x22D2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D2D4u;
    // 0x22d2d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x22D2D4u, 0x22D2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D2DCu;
label_22d2dc:
    // 0x22d2dc: 0x16000054  bnez        $s0, . + 4 + (0x54 << 2)
label_22d2e0:
    if (ctx->pc == 0x22D2E0u) {
        ctx->pc = 0x22D2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2DCu;
        // 0x22d2e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D2E4u;
        goto label_22d2e4;
    }
    ctx->pc = 0x22D2DCu;
    {
        const bool branch_taken_0x22d2dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2DCu;
        // 0x22d2e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d2dc) {
            ctx->pc = 0x22D430u;
            goto label_22d430;
        }
    }
    ctx->pc = 0x22D2E4u;
label_22d2e4:
    // 0x22d2e4: 0x10000056  b           . + 4 + (0x56 << 2)
label_22d2e8:
    if (ctx->pc == 0x22D2E8u) {
        ctx->pc = 0x22D2ECu;
        goto label_22d2ec;
    }
    ctx->pc = 0x22D2E4u;
    {
        const bool branch_taken_0x22d2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d2e4) {
            ctx->pc = 0x22D440u;
            goto label_22d440;
        }
    }
    ctx->pc = 0x22D2ECu;
label_22d2ec:
    // 0x22d2ec: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_22d2f0:
    if (ctx->pc == 0x22D2F0u) {
        ctx->pc = 0x22D2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2ECu;
        // 0x22d2f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D2F4u;
        goto label_22d2f4;
    }
    ctx->pc = 0x22D2ECu;
    {
        const bool branch_taken_0x22d2ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x22D2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2ECu;
        // 0x22d2f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d2ec) {
            ctx->pc = 0x22D310u;
            goto label_22d310;
        }
    }
    ctx->pc = 0x22D2F4u;
label_22d2f4:
    // 0x22d2f4: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x22d2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_22d2f8:
    // 0x22d2f8: 0x24020450  addiu       $v0, $zero, 0x450
    ctx->pc = 0x22d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1104));
label_22d2fc:
    // 0x22d2fc: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_22d300:
    if (ctx->pc == 0x22D300u) {
        ctx->pc = 0x22D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2FCu;
        // 0x22d300: 0x24020452  addiu       $v0, $zero, 0x452 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1106));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D304u;
        goto label_22d304;
    }
    ctx->pc = 0x22D2FCu;
    {
        const bool branch_taken_0x22d2fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2FCu;
        // 0x22d300: 0x24020452  addiu       $v0, $zero, 0x452 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d2fc) {
            ctx->pc = 0x22D30Cu;
            goto label_22d30c;
        }
    }
    ctx->pc = 0x22D304u;
label_22d304:
    // 0x22d304: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
label_22d308:
    if (ctx->pc == 0x22D308u) {
        ctx->pc = 0x22D30Cu;
        goto label_22d30c;
    }
    ctx->pc = 0x22D304u;
    {
        const bool branch_taken_0x22d304 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x22d304) {
            ctx->pc = 0x22D310u;
            goto label_22d310;
        }
    }
    ctx->pc = 0x22D30Cu;
label_22d30c:
    // 0x22d30c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22d30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d310:
    // 0x22d310: 0x50a00016  beql        $a1, $zero, . + 4 + (0x16 << 2)
label_22d314:
    if (ctx->pc == 0x22D314u) {
        ctx->pc = 0x22D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D310u;
        // 0x22d314: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D318u;
        goto label_22d318;
    }
    ctx->pc = 0x22D310u;
    {
        const bool branch_taken_0x22d310 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d310) {
            ctx->pc = 0x22D314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D310u;
            // 0x22d314: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D36Cu;
            goto label_22d36c;
        }
    }
    ctx->pc = 0x22D318u;
label_22d318:
    // 0x22d318: 0x8c6201e4  lw          $v0, 0x1E4($v1)
    ctx->pc = 0x22d318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 484)));
label_22d31c:
    // 0x22d31c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22d320:
    if (ctx->pc == 0x22D320u) {
        ctx->pc = 0x22D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D31Cu;
        // 0x22d320: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D324u;
        goto label_22d324;
    }
    ctx->pc = 0x22D31Cu;
    {
        const bool branch_taken_0x22d31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D31Cu;
        // 0x22d320: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d31c) {
            ctx->pc = 0x22D32Cu;
            goto label_22d32c;
        }
    }
    ctx->pc = 0x22D324u;
label_22d324:
    // 0x22d324: 0x10000009  b           . + 4 + (0x9 << 2)
label_22d328:
    if (ctx->pc == 0x22D328u) {
        ctx->pc = 0x22D328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D324u;
        // 0x22d328: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D32Cu;
        goto label_22d32c;
    }
    ctx->pc = 0x22D324u;
    {
        const bool branch_taken_0x22d324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D324u;
        // 0x22d328: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d324) {
            ctx->pc = 0x22D34Cu;
            goto label_22d34c;
        }
    }
    ctx->pc = 0x22D32Cu;
label_22d32c:
    // 0x22d32c: 0x246501ec  addiu       $a1, $v1, 0x1EC
    ctx->pc = 0x22d32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 492));
label_22d330:
    // 0x22d330: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x22d330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_22d334:
    // 0x22d334: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_22d338:
    if (ctx->pc == 0x22D338u) {
        ctx->pc = 0x22D338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D334u;
        // 0x22d338: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D33Cu;
        goto label_22d33c;
    }
    ctx->pc = 0x22D334u;
    {
        const bool branch_taken_0x22d334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D334u;
        // 0x22d338: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d334) {
            ctx->pc = 0x22D324u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d324;
        }
    }
    ctx->pc = 0x22D33Cu;
label_22d33c:
    // 0x22d33c: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x22d33cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_22d340:
    // 0x22d340: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_22d344:
    if (ctx->pc == 0x22D344u) {
        ctx->pc = 0x22D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D340u;
        // 0x22d344: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D348u;
        goto label_22d348;
    }
    ctx->pc = 0x22D340u;
    {
        const bool branch_taken_0x22d340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D340u;
        // 0x22d344: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d340) {
            ctx->pc = 0x22D330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d330;
        }
    }
    ctx->pc = 0x22D348u;
label_22d348:
    // 0x22d348: 0x8c6301e8  lw          $v1, 0x1E8($v1)
    ctx->pc = 0x22d348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 488)));
label_22d34c:
    // 0x22d34c: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x22d34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d350:
    // 0x22d350: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x22d350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22d354:
    // 0x22d354: 0x0  nop
    ctx->pc = 0x22d354u;
    // NOP
label_22d358:
    // 0x22d358: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22d358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d35c:
    // 0x22d35c: 0x0  nop
    ctx->pc = 0x22d35cu;
    // NOP
label_22d360:
    // 0x22d360: 0x4503005c  bc1tl       . + 4 + (0x5C << 2)
label_22d364:
    if (ctx->pc == 0x22D364u) {
        ctx->pc = 0x22D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D360u;
        // 0x22d364: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D368u;
        goto label_22d368;
    }
    ctx->pc = 0x22D360u;
    {
        const bool branch_taken_0x22d360 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d360) {
            ctx->pc = 0x22D364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D360u;
            // 0x22d364: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D4D4u;
            goto label_22d4d4;
        }
    }
    ctx->pc = 0x22D368u;
label_22d368:
    // 0x22d368: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22d368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22d36c:
    // 0x22d36c: 0xc069942  jal         func_1A6508
label_22d370:
    if (ctx->pc == 0x22D370u) {
        ctx->pc = 0x22D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D36Cu;
        // 0x22d370: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D374u;
        goto label_22d374;
    }
    ctx->pc = 0x22D36Cu;
    SET_GPR_U32(ctx, 31, 0x22D374u);
    ctx->pc = 0x22D370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D36Cu;
    // 0x22d370: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6508u, 0x22D36Cu, 0x22D374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D374u;
label_22d374:
    // 0x22d374: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x22d374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22d378:
    // 0x22d378: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x22d378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_22d37c:
    // 0x22d37c: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x22d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_22d380:
    // 0x22d380: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_22d384:
    if (ctx->pc == 0x22D384u) {
        ctx->pc = 0x22D384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D380u;
        // 0x22d384: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D388u;
        goto label_22d388;
    }
    ctx->pc = 0x22D380u;
    {
        const bool branch_taken_0x22d380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D380u;
        // 0x22d384: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d380) {
            ctx->pc = 0x22D394u;
            goto label_22d394;
        }
    }
    ctx->pc = 0x22D388u;
label_22d388:
    // 0x22d388: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x22d388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_22d38c:
    // 0x22d38c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_22d390:
    if (ctx->pc == 0x22D390u) {
        ctx->pc = 0x22D394u;
        goto label_22d394;
    }
    ctx->pc = 0x22D38Cu;
    {
        const bool branch_taken_0x22d38c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22d38c) {
            ctx->pc = 0x22D398u;
            goto label_22d398;
        }
    }
    ctx->pc = 0x22D394u;
label_22d394:
    // 0x22d394: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22d394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d398:
    // 0x22d398: 0x1480006f  bnez        $a0, . + 4 + (0x6F << 2)
label_22d39c:
    if (ctx->pc == 0x22D39Cu) {
        ctx->pc = 0x22D3A0u;
        goto label_22d3a0;
    }
    ctx->pc = 0x22D398u;
    {
        const bool branch_taken_0x22d398 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d398) {
            ctx->pc = 0x22D558u;
            goto label_22d558;
        }
    }
    ctx->pc = 0x22D3A0u;
label_22d3a0:
    // 0x22d3a0: 0xc089490  jal         func_225240
label_22d3a4:
    if (ctx->pc == 0x22D3A4u) {
        ctx->pc = 0x22D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3A0u;
        // 0x22d3a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D3A8u;
        goto label_22d3a8;
    }
    ctx->pc = 0x22D3A0u;
    SET_GPR_U32(ctx, 31, 0x22D3A8u);
    ctx->pc = 0x22D3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D3A0u;
    // 0x22d3a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225240u, 0x22D3A0u, 0x22D3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D3A8u;
label_22d3a8:
    // 0x22d3a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_22d3ac:
    if (ctx->pc == 0x22D3ACu) {
        ctx->pc = 0x22D3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3A8u;
        // 0x22d3ac: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D3B0u;
        goto label_22d3b0;
    }
    ctx->pc = 0x22D3A8u;
    {
        const bool branch_taken_0x22d3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3A8u;
        // 0x22d3ac: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d3a8) {
            ctx->pc = 0x22D3C4u;
            goto label_22d3c4;
        }
    }
    ctx->pc = 0x22D3B0u;
label_22d3b0:
    // 0x22d3b0: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22d3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22d3b4:
    // 0x22d3b4: 0xc06a0cc  jal         func_1A8330
label_22d3b8:
    if (ctx->pc == 0x22D3B8u) {
        ctx->pc = 0x22D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3B4u;
        // 0x22d3b8: 0x24060453  addiu       $a2, $zero, 0x453 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1107));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D3BCu;
        goto label_22d3bc;
    }
    ctx->pc = 0x22D3B4u;
    SET_GPR_U32(ctx, 31, 0x22D3BCu);
    ctx->pc = 0x22D3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D3B4u;
    // 0x22d3b8: 0x24060453  addiu       $a2, $zero, 0x453 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1107));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22D3B4u, 0x22D3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D3BCu;
label_22d3bc:
    // 0x22d3bc: 0x10000066  b           . + 4 + (0x66 << 2)
label_22d3c0:
    if (ctx->pc == 0x22D3C0u) {
        ctx->pc = 0x22D3C4u;
        goto label_22d3c4;
    }
    ctx->pc = 0x22D3BCu;
    {
        const bool branch_taken_0x22d3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d3bc) {
            ctx->pc = 0x22D558u;
            goto label_22d558;
        }
    }
    ctx->pc = 0x22D3C4u;
label_22d3c4:
    // 0x22d3c4: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22d3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22d3c8:
    // 0x22d3c8: 0xc06a0cc  jal         func_1A8330
label_22d3cc:
    if (ctx->pc == 0x22D3CCu) {
        ctx->pc = 0x22D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3C8u;
        // 0x22d3cc: 0x24060451  addiu       $a2, $zero, 0x451 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1105));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D3D0u;
        goto label_22d3d0;
    }
    ctx->pc = 0x22D3C8u;
    SET_GPR_U32(ctx, 31, 0x22D3D0u);
    ctx->pc = 0x22D3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D3C8u;
    // 0x22d3cc: 0x24060451  addiu       $a2, $zero, 0x451 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1105));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22D3C8u, 0x22D3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D3D0u;
label_22d3d0:
    // 0x22d3d0: 0x10000061  b           . + 4 + (0x61 << 2)
label_22d3d4:
    if (ctx->pc == 0x22D3D4u) {
        ctx->pc = 0x22D3D8u;
        goto label_22d3d8;
    }
    ctx->pc = 0x22D3D0u;
    {
        const bool branch_taken_0x22d3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d3d0) {
            ctx->pc = 0x22D558u;
            goto label_22d558;
        }
    }
    ctx->pc = 0x22D3D8u;
label_22d3d8:
    // 0x22d3d8: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x22d3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22d3dc:
    // 0x22d3dc: 0x8c640150  lw          $a0, 0x150($v1)
    ctx->pc = 0x22d3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_22d3e0:
    // 0x22d3e0: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x22d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_22d3e4:
    // 0x22d3e4: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x22d3e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_22d3e8:
    // 0x22d3e8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_22d3ec:
    if (ctx->pc == 0x22D3ECu) {
        ctx->pc = 0x22D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3E8u;
        // 0x22d3ec: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D3F0u;
        goto label_22d3f0;
    }
    ctx->pc = 0x22D3E8u;
    {
        const bool branch_taken_0x22d3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3E8u;
        // 0x22d3ec: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d3e8) {
            ctx->pc = 0x22D450u;
            goto label_22d450;
        }
    }
    ctx->pc = 0x22D3F0u;
label_22d3f0:
    // 0x22d3f0: 0x8e300418  lw          $s0, 0x418($s1)
    ctx->pc = 0x22d3f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_22d3f4:
    // 0x22d3f4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x22d3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_22d3f8:
    // 0x22d3f8: 0x3a10000e  xori        $s0, $s0, 0xE
    ctx->pc = 0x22d3f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)14);
label_22d3fc:
    // 0x22d3fc: 0x2e100001  sltiu       $s0, $s0, 0x1
    ctx->pc = 0x22d3fcu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22d400:
    // 0x22d400: 0xc069c2c  jal         func_1A70B0
label_22d404:
    if (ctx->pc == 0x22D404u) {
        ctx->pc = 0x22D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D400u;
        // 0x22d404: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D408u;
        goto label_22d408;
    }
    ctx->pc = 0x22D400u;
    SET_GPR_U32(ctx, 31, 0x22D408u);
    ctx->pc = 0x22D404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D400u;
    // 0x22d404: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A70B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A70B0u, 0x22D400u, 0x22D408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D408u;
label_22d408:
    // 0x22d408: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d40c:
    // 0x22d40c: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x22d40cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_22d410:
    // 0x22d410: 0xc08fed2  jal         func_23FB48
label_22d414:
    if (ctx->pc == 0x22D414u) {
        ctx->pc = 0x22D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D410u;
        // 0x22d414: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D418u;
        goto label_22d418;
    }
    ctx->pc = 0x22D410u;
    SET_GPR_U32(ctx, 31, 0x22D418u);
    ctx->pc = 0x22D414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D410u;
    // 0x22d414: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x22D410u, 0x22D418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D418u;
label_22d418:
    // 0x22d418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d41c:
    // 0x22d41c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x22d41cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_22d420:
    // 0x22d420: 0xc08fed2  jal         func_23FB48
label_22d424:
    if (ctx->pc == 0x22D424u) {
        ctx->pc = 0x22D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D420u;
        // 0x22d424: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D428u;
        goto label_22d428;
    }
    ctx->pc = 0x22D420u;
    SET_GPR_U32(ctx, 31, 0x22D428u);
    ctx->pc = 0x22D424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D420u;
    // 0x22d424: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x22D420u, 0x22D428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D428u;
label_22d428:
    // 0x22d428: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_22d42c:
    if (ctx->pc == 0x22D42Cu) {
        ctx->pc = 0x22D42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D428u;
        // 0x22d42c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D430u;
        goto label_22d430;
    }
    ctx->pc = 0x22D428u;
    {
        const bool branch_taken_0x22d428 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D428u;
        // 0x22d42c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d428) {
            ctx->pc = 0x22D440u;
            goto label_22d440;
        }
    }
    ctx->pc = 0x22D430u;
label_22d430:
    // 0x22d430: 0xc08bd96  jal         func_22F658
label_22d434:
    if (ctx->pc == 0x22D434u) {
        ctx->pc = 0x22D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D430u;
        // 0x22d434: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D438u;
        goto label_22d438;
    }
    ctx->pc = 0x22D430u;
    SET_GPR_U32(ctx, 31, 0x22D438u);
    ctx->pc = 0x22D434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D430u;
    // 0x22d434: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x22D430u, 0x22D438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D438u;
label_22d438:
    // 0x22d438: 0x10000047  b           . + 4 + (0x47 << 2)
label_22d43c:
    if (ctx->pc == 0x22D43Cu) {
        ctx->pc = 0x22D440u;
        goto label_22d440;
    }
    ctx->pc = 0x22D438u;
    {
        const bool branch_taken_0x22d438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d438) {
            ctx->pc = 0x22D558u;
            goto label_22d558;
        }
    }
    ctx->pc = 0x22D440u;
label_22d440:
    // 0x22d440: 0xc08bd96  jal         func_22F658
label_22d444:
    if (ctx->pc == 0x22D444u) {
        ctx->pc = 0x22D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D440u;
        // 0x22d444: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D448u;
        goto label_22d448;
    }
    ctx->pc = 0x22D440u;
    SET_GPR_U32(ctx, 31, 0x22D448u);
    ctx->pc = 0x22D444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D440u;
    // 0x22d444: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x22D440u, 0x22D448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D448u;
label_22d448:
    // 0x22d448: 0x10000043  b           . + 4 + (0x43 << 2)
label_22d44c:
    if (ctx->pc == 0x22D44Cu) {
        ctx->pc = 0x22D450u;
        goto label_22d450;
    }
    ctx->pc = 0x22D448u;
    {
        const bool branch_taken_0x22d448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d448) {
            ctx->pc = 0x22D558u;
            goto label_22d558;
        }
    }
    ctx->pc = 0x22D450u;
label_22d450:
    // 0x22d450: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_22d454:
    if (ctx->pc == 0x22D454u) {
        ctx->pc = 0x22D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D450u;
        // 0x22d454: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D458u;
        goto label_22d458;
    }
    ctx->pc = 0x22D450u;
    {
        const bool branch_taken_0x22d450 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x22D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D450u;
        // 0x22d454: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d450) {
            ctx->pc = 0x22D474u;
            goto label_22d474;
        }
    }
    ctx->pc = 0x22D458u;
label_22d458:
    // 0x22d458: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x22d458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_22d45c:
    // 0x22d45c: 0x24020451  addiu       $v0, $zero, 0x451
    ctx->pc = 0x22d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1105));
label_22d460:
    // 0x22d460: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_22d464:
    if (ctx->pc == 0x22D464u) {
        ctx->pc = 0x22D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D460u;
        // 0x22d464: 0x24020453  addiu       $v0, $zero, 0x453 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1107));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D468u;
        goto label_22d468;
    }
    ctx->pc = 0x22D460u;
    {
        const bool branch_taken_0x22d460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D460u;
        // 0x22d464: 0x24020453  addiu       $v0, $zero, 0x453 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d460) {
            ctx->pc = 0x22D470u;
            goto label_22d470;
        }
    }
    ctx->pc = 0x22D468u;
label_22d468:
    // 0x22d468: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
label_22d46c:
    if (ctx->pc == 0x22D46Cu) {
        ctx->pc = 0x22D470u;
        goto label_22d470;
    }
    ctx->pc = 0x22D468u;
    {
        const bool branch_taken_0x22d468 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x22d468) {
            ctx->pc = 0x22D474u;
            goto label_22d474;
        }
    }
    ctx->pc = 0x22D470u;
label_22d470:
    // 0x22d470: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22d470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d474:
    // 0x22d474: 0x50a0001f  beql        $a1, $zero, . + 4 + (0x1F << 2)
label_22d478:
    if (ctx->pc == 0x22D478u) {
        ctx->pc = 0x22D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D474u;
        // 0x22d478: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D47Cu;
        goto label_22d47c;
    }
    ctx->pc = 0x22D474u;
    {
        const bool branch_taken_0x22d474 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d474) {
            ctx->pc = 0x22D478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D474u;
            // 0x22d478: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D4F4u;
            goto label_22d4f4;
        }
    }
    ctx->pc = 0x22D47Cu;
label_22d47c:
    // 0x22d47c: 0x8c6201e4  lw          $v0, 0x1E4($v1)
    ctx->pc = 0x22d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 484)));
label_22d480:
    // 0x22d480: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22d484:
    if (ctx->pc == 0x22D484u) {
        ctx->pc = 0x22D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D480u;
        // 0x22d484: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D488u;
        goto label_22d488;
    }
    ctx->pc = 0x22D480u;
    {
        const bool branch_taken_0x22d480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D480u;
        // 0x22d484: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d480) {
            ctx->pc = 0x22D490u;
            goto label_22d490;
        }
    }
    ctx->pc = 0x22D488u;
label_22d488:
    // 0x22d488: 0x1000000a  b           . + 4 + (0xA << 2)
label_22d48c:
    if (ctx->pc == 0x22D48Cu) {
        ctx->pc = 0x22D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D488u;
        // 0x22d48c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D490u;
        goto label_22d490;
    }
    ctx->pc = 0x22D488u;
    {
        const bool branch_taken_0x22d488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D488u;
        // 0x22d48c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d488) {
            ctx->pc = 0x22D4B4u;
            goto label_22d4b4;
        }
    }
    ctx->pc = 0x22D490u;
label_22d490:
    // 0x22d490: 0x246501ec  addiu       $a1, $v1, 0x1EC
    ctx->pc = 0x22d490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 492));
label_22d494:
    // 0x22d494: 0x0  nop
    ctx->pc = 0x22d494u;
    // NOP
label_22d498:
    // 0x22d498: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x22d498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_22d49c:
    // 0x22d49c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_22d4a0:
    if (ctx->pc == 0x22D4A0u) {
        ctx->pc = 0x22D4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D49Cu;
        // 0x22d4a0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D4A4u;
        goto label_22d4a4;
    }
    ctx->pc = 0x22D49Cu;
    {
        const bool branch_taken_0x22d49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D49Cu;
        // 0x22d4a0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d49c) {
            ctx->pc = 0x22D488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d488;
        }
    }
    ctx->pc = 0x22D4A4u;
label_22d4a4:
    // 0x22d4a4: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x22d4a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_22d4a8:
    // 0x22d4a8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_22d4ac:
    if (ctx->pc == 0x22D4ACu) {
        ctx->pc = 0x22D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4A8u;
        // 0x22d4ac: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D4B0u;
        goto label_22d4b0;
    }
    ctx->pc = 0x22D4A8u;
    {
        const bool branch_taken_0x22d4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4A8u;
        // 0x22d4ac: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d4a8) {
            ctx->pc = 0x22D498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d498;
        }
    }
    ctx->pc = 0x22D4B0u;
label_22d4b0:
    // 0x22d4b0: 0x8c6301e8  lw          $v1, 0x1E8($v1)
    ctx->pc = 0x22d4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 488)));
label_22d4b4:
    // 0x22d4b4: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x22d4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d4b8:
    // 0x22d4b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x22d4b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22d4bc:
    // 0x22d4bc: 0x0  nop
    ctx->pc = 0x22d4bcu;
    // NOP
label_22d4c0:
    // 0x22d4c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22d4c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d4c4:
    // 0x22d4c4: 0x0  nop
    ctx->pc = 0x22d4c4u;
    // NOP
label_22d4c8:
    // 0x22d4c8: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_22d4cc:
    if (ctx->pc == 0x22D4CCu) {
        ctx->pc = 0x22D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4C8u;
        // 0x22d4cc: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D4D0u;
        goto label_22d4d0;
    }
    ctx->pc = 0x22D4C8u;
    {
        const bool branch_taken_0x22d4c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d4c8) {
            ctx->pc = 0x22D4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D4C8u;
            // 0x22d4cc: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D4F4u;
            goto label_22d4f4;
        }
    }
    ctx->pc = 0x22D4D0u;
label_22d4d0:
    // 0x22d4d0: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x22d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22d4d4:
    // 0x22d4d4: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x22d4d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_22d4d8:
    // 0x22d4d8: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x22d4d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_22d4dc:
    // 0x22d4dc: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x22d4dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_22d4e0:
    // 0x22d4e0: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x22d4e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_22d4e4:
    // 0x22d4e4: 0xe4410174  swc1        $f1, 0x174($v0)
    ctx->pc = 0x22d4e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 372), bits); }
label_22d4e8:
    // 0x22d4e8: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x22d4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d4ec:
    // 0x22d4ec: 0x1000001a  b           . + 4 + (0x1A << 2)
label_22d4f0:
    if (ctx->pc == 0x22D4F0u) {
        ctx->pc = 0x22D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4ECu;
        // 0x22d4f0: 0xe4400178  swc1        $f0, 0x178($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 376), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D4F4u;
        goto label_22d4f4;
    }
    ctx->pc = 0x22D4ECu;
    {
        const bool branch_taken_0x22d4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4ECu;
        // 0x22d4f0: 0xe4400178  swc1        $f0, 0x178($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 376), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d4ec) {
            ctx->pc = 0x22D558u;
            goto label_22d558;
        }
    }
    ctx->pc = 0x22D4F4u;
label_22d4f4:
    // 0x22d4f4: 0xc069942  jal         func_1A6508
label_22d4f8:
    if (ctx->pc == 0x22D4F8u) {
        ctx->pc = 0x22D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4F4u;
        // 0x22d4f8: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D4FCu;
        goto label_22d4fc;
    }
    ctx->pc = 0x22D4F4u;
    SET_GPR_U32(ctx, 31, 0x22D4FCu);
    ctx->pc = 0x22D4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D4F4u;
    // 0x22d4f8: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6508u, 0x22D4F4u, 0x22D4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D4FCu;
label_22d4fc:
    // 0x22d4fc: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x22d4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22d500:
    // 0x22d500: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x22d500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_22d504:
    // 0x22d504: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x22d504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_22d508:
    // 0x22d508: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_22d50c:
    if (ctx->pc == 0x22D50Cu) {
        ctx->pc = 0x22D50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D508u;
        // 0x22d50c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D510u;
        goto label_22d510;
    }
    ctx->pc = 0x22D508u;
    {
        const bool branch_taken_0x22d508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D508u;
        // 0x22d50c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d508) {
            ctx->pc = 0x22D51Cu;
            goto label_22d51c;
        }
    }
    ctx->pc = 0x22D510u;
label_22d510:
    // 0x22d510: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x22d510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_22d514:
    // 0x22d514: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_22d518:
    if (ctx->pc == 0x22D518u) {
        ctx->pc = 0x22D51Cu;
        goto label_22d51c;
    }
    ctx->pc = 0x22D514u;
    {
        const bool branch_taken_0x22d514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22d514) {
            ctx->pc = 0x22D520u;
            goto label_22d520;
        }
    }
    ctx->pc = 0x22D51Cu;
label_22d51c:
    // 0x22d51c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22d51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d520:
    // 0x22d520: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
label_22d524:
    if (ctx->pc == 0x22D524u) {
        ctx->pc = 0x22D528u;
        goto label_22d528;
    }
    ctx->pc = 0x22D520u;
    {
        const bool branch_taken_0x22d520 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d520) {
            ctx->pc = 0x22D558u;
            goto label_22d558;
        }
    }
    ctx->pc = 0x22D528u;
label_22d528:
    // 0x22d528: 0xc089490  jal         func_225240
label_22d52c:
    if (ctx->pc == 0x22D52Cu) {
        ctx->pc = 0x22D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D528u;
        // 0x22d52c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D530u;
        goto label_22d530;
    }
    ctx->pc = 0x22D528u;
    SET_GPR_U32(ctx, 31, 0x22D530u);
    ctx->pc = 0x22D52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D528u;
    // 0x22d52c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225240u, 0x22D528u, 0x22D530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D530u;
label_22d530:
    // 0x22d530: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_22d534:
    if (ctx->pc == 0x22D534u) {
        ctx->pc = 0x22D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D530u;
        // 0x22d534: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D538u;
        goto label_22d538;
    }
    ctx->pc = 0x22D530u;
    {
        const bool branch_taken_0x22d530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D530u;
        // 0x22d534: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d530) {
            ctx->pc = 0x22D54Cu;
            goto label_22d54c;
        }
    }
    ctx->pc = 0x22D538u;
label_22d538:
    // 0x22d538: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22d538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22d53c:
    // 0x22d53c: 0xc06a0cc  jal         func_1A8330
label_22d540:
    if (ctx->pc == 0x22D540u) {
        ctx->pc = 0x22D540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D53Cu;
        // 0x22d540: 0x24060452  addiu       $a2, $zero, 0x452 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1106));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D544u;
        goto label_22d544;
    }
    ctx->pc = 0x22D53Cu;
    SET_GPR_U32(ctx, 31, 0x22D544u);
    ctx->pc = 0x22D540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D53Cu;
    // 0x22d540: 0x24060452  addiu       $a2, $zero, 0x452 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1106));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22D53Cu, 0x22D544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D544u;
label_22d544:
    // 0x22d544: 0x10000004  b           . + 4 + (0x4 << 2)
label_22d548:
    if (ctx->pc == 0x22D548u) {
        ctx->pc = 0x22D54Cu;
        goto label_22d54c;
    }
    ctx->pc = 0x22D544u;
    {
        const bool branch_taken_0x22d544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d544) {
            ctx->pc = 0x22D558u;
            goto label_22d558;
        }
    }
    ctx->pc = 0x22D54Cu;
label_22d54c:
    // 0x22d54c: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22d54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22d550:
    // 0x22d550: 0xc06a0cc  jal         func_1A8330
label_22d554:
    if (ctx->pc == 0x22D554u) {
        ctx->pc = 0x22D554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D550u;
        // 0x22d554: 0x24060450  addiu       $a2, $zero, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D558u;
        goto label_22d558;
    }
    ctx->pc = 0x22D550u;
    SET_GPR_U32(ctx, 31, 0x22D558u);
    ctx->pc = 0x22D554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D550u;
    // 0x22d554: 0x24060450  addiu       $a2, $zero, 0x450 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22D550u, 0x22D558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D558u;
label_22d558:
    // 0x22d558: 0x124000f1  beqz        $s2, . + 4 + (0xF1 << 2)
label_22d55c:
    if (ctx->pc == 0x22D55Cu) {
        ctx->pc = 0x22D55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D558u;
        // 0x22d55c: 0x27b000a0  addiu       $s0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D560u;
        goto label_22d560;
    }
    ctx->pc = 0x22D558u;
    {
        const bool branch_taken_0x22d558 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D558u;
        // 0x22d55c: 0x27b000a0  addiu       $s0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d558) {
            ctx->pc = 0x22D920u;
            goto label_22d920;
        }
    }
    ctx->pc = 0x22D560u;
label_22d560:
    // 0x22d560: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x22d560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_22d564:
    // 0x22d564: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d568:
    // 0x22d568: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22d568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22d56c:
    // 0x22d56c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x22d56cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22d570:
    // 0x22d570: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22d570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d574:
    // 0x22d574: 0xc0bff58  jal         func_2FFD60
label_22d578:
    if (ctx->pc == 0x22D578u) {
        ctx->pc = 0x22D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D574u;
        // 0x22d578: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D57Cu;
        goto label_22d57c;
    }
    ctx->pc = 0x22D574u;
    SET_GPR_U32(ctx, 31, 0x22D57Cu);
    ctx->pc = 0x22D578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D574u;
    // 0x22d578: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFD60u, 0x22D574u, 0x22D57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D57Cu;
label_22d57c:
    // 0x22d57c: 0x27b20090  addiu       $s2, $sp, 0x90
    ctx->pc = 0x22d57cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_22d580:
    // 0x22d580: 0x27b400c0  addiu       $s4, $sp, 0xC0
    ctx->pc = 0x22d580u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_22d584:
    // 0x22d584: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x22d584u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_22d588:
    // 0x22d588: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x22d588u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_22d58c:
    // 0x22d58c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x22d58cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_22d590:
    // 0x22d590: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x22d590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
label_22d594:
    // 0x22d594: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x22d594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22d598:
    // 0x22d598: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x22d598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_22d59c:
    // 0x22d59c: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x22d59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d5a0:
    // 0x22d5a0: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x22d5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d5a4:
    // 0x22d5a4: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x22d5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22d5a8:
    // 0x22d5a8: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x22d5a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_22d5ac:
    // 0x22d5ac: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x22d5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_22d5b0:
    // 0x22d5b0: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x22d5b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_22d5b4:
    // 0x22d5b4: 0xe7a200bc  swc1        $f2, 0xBC($sp)
    ctx->pc = 0x22d5b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_22d5b8:
    // 0x22d5b8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x22d5b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_22d5bc:
    // 0x22d5bc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x22d5bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_22d5c0:
    // 0x22d5c0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x22d5c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_22d5c4:
    // 0x22d5c4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x22d5c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_22d5c8:
    // 0x22d5c8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x22d5c8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_22d5cc:
    // 0x22d5cc: 0x4a0003bf  vwaitq
    ctx->pc = 0x22d5ccu;
    // VWAITQ (Q already resolved in this runtime)
label_22d5d0:
    // 0x22d5d0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x22d5d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_22d5d4:
    // 0x22d5d4: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x22d5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_22d5d8:
    // 0x22d5d8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x22d5d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_22d5dc:
    // 0x22d5dc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x22d5dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_22d5e0:
    // 0x22d5e0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x22d5e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_22d5e4:
    // 0x22d5e4: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x22d5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_22d5e8:
    // 0x22d5e8: 0xc0f6a96  jal         func_3DAA58
label_22d5ec:
    if (ctx->pc == 0x22D5ECu) {
        ctx->pc = 0x22D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5E8u;
        // 0x22d5ec: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D5F0u;
        goto label_22d5f0;
    }
    ctx->pc = 0x22D5E8u;
    SET_GPR_U32(ctx, 31, 0x22D5F0u);
    ctx->pc = 0x22D5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D5E8u;
    // 0x22d5ec: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x22D5E8u, 0x22D5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D5F0u;
label_22d5f0:
    // 0x22d5f0: 0xc0f6a96  jal         func_3DAA58
label_22d5f4:
    if (ctx->pc == 0x22D5F4u) {
        ctx->pc = 0x22D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5F0u;
        // 0x22d5f4: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D5F8u;
        goto label_22d5f8;
    }
    ctx->pc = 0x22D5F0u;
    SET_GPR_U32(ctx, 31, 0x22D5F8u);
    ctx->pc = 0x22D5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D5F0u;
    // 0x22d5f4: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x22D5F0u, 0x22D5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D5F8u;
label_22d5f8:
    // 0x22d5f8: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x22d5f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_22d5fc:
    // 0x22d5fc: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x22d5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_22d600:
    // 0x22d600: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x22d600u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_22d604:
    // 0x22d604: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x22d604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_22d608:
    // 0x22d608: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x22d608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_22d60c:
    // 0x22d60c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x22d60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_22d610:
    // 0x22d610: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x22d610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
label_22d614:
    // 0x22d614: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x22d614u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_22d618:
    // 0x22d618: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x22d618u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_22d61c:
    // 0x22d61c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x22d61cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_22d620:
    // 0x22d620: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x22d620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
label_22d624:
    // 0x22d624: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x22d624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22d628:
    // 0x22d628: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x22d628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22d62c:
    // 0x22d62c: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x22d62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_22d630:
    // 0x22d630: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x22d630u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_22d634:
    // 0x22d634: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x22d634u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_22d638:
    // 0x22d638: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x22d638u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_22d63c:
    // 0x22d63c: 0x0  nop
    ctx->pc = 0x22d63cu;
    // NOP
label_22d640:
    // 0x22d640: 0x0  nop
    ctx->pc = 0x22d640u;
    // NOP
label_22d644:
    // 0x22d644: 0x46000044  c1          0x44
    ctx->pc = 0x22d644u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_22d648:
    // 0x22d648: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x22d648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_22d64c:
    // 0x22d64c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x22d64cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_22d650:
    // 0x22d650: 0x0  nop
    ctx->pc = 0x22d650u;
    // NOP
label_22d654:
    // 0x22d654: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x22d654u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d658:
    // 0x22d658: 0x0  nop
    ctx->pc = 0x22d658u;
    // NOP
label_22d65c:
    // 0x22d65c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_22d660:
    if (ctx->pc == 0x22D660u) {
        ctx->pc = 0x22D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D65Cu;
        // 0x22d660: 0xe7a10130  swc1        $f1, 0x130($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D664u;
        goto label_22d664;
    }
    ctx->pc = 0x22D65Cu;
    {
        const bool branch_taken_0x22d65c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D65Cu;
        // 0x22d660: 0xe7a10130  swc1        $f1, 0x130($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d65c) {
            ctx->pc = 0x22D688u;
            goto label_22d688;
        }
    }
    ctx->pc = 0x22D664u;
label_22d664:
    // 0x22d664: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22d664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22d668:
    // 0x22d668: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22d668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d66c:
    // 0x22d66c: 0x0  nop
    ctx->pc = 0x22d66cu;
    // NOP
label_22d670:
    // 0x22d670: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x22d670u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_22d674:
    // 0x22d674: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x22d674u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_22d678:
    // 0x22d678: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x22d678u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_22d67c:
    // 0x22d67c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x22d67cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_22d680:
    // 0x22d680: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x22d680u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_22d684:
    // 0x22d684: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x22d684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
label_22d688:
    // 0x22d688: 0x27b30140  addiu       $s3, $sp, 0x140
    ctx->pc = 0x22d688u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_22d68c:
    // 0x22d68c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22d68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d690:
    // 0x22d690: 0xc076e46  jal         func_1DB918
label_22d694:
    if (ctx->pc == 0x22D694u) {
        ctx->pc = 0x22D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D690u;
        // 0x22d694: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D698u;
        goto label_22d698;
    }
    ctx->pc = 0x22D690u;
    SET_GPR_U32(ctx, 31, 0x22D698u);
    ctx->pc = 0x22D694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D690u;
    // 0x22d694: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x22D690u, 0x22D698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D698u;
label_22d698:
    // 0x22d698: 0x27b500e0  addiu       $s5, $sp, 0xE0
    ctx->pc = 0x22d698u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_22d69c:
    // 0x22d69c: 0xc07783e  jal         func_1DE0F8
label_22d6a0:
    if (ctx->pc == 0x22D6A0u) {
        ctx->pc = 0x22D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D69Cu;
        // 0x22d6a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D6A4u;
        goto label_22d6a4;
    }
    ctx->pc = 0x22D69Cu;
    SET_GPR_U32(ctx, 31, 0x22D6A4u);
    ctx->pc = 0x22D6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D69Cu;
    // 0x22d6a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0F8u, 0x22D69Cu, 0x22D6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D6A4u;
label_22d6a4:
    // 0x22d6a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22d6a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22d6a8:
    // 0x22d6a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22d6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22d6ac:
    // 0x22d6ac: 0xc076e38  jal         func_1DB8E0
label_22d6b0:
    if (ctx->pc == 0x22D6B0u) {
        ctx->pc = 0x22D6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6ACu;
        // 0x22d6b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D6B4u;
        goto label_22d6b4;
    }
    ctx->pc = 0x22D6ACu;
    SET_GPR_U32(ctx, 31, 0x22D6B4u);
    ctx->pc = 0x22D6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D6ACu;
    // 0x22d6b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x22D6ACu, 0x22D6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D6B4u;
label_22d6b4:
    // 0x22d6b4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_22d6b8:
    if (ctx->pc == 0x22D6B8u) {
        ctx->pc = 0x22D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6B4u;
        // 0x22d6b8: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D6BCu;
        goto label_22d6bc;
    }
    ctx->pc = 0x22D6B4u;
    {
        const bool branch_taken_0x22d6b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6B4u;
        // 0x22d6b8: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d6b4) {
            ctx->pc = 0x22D6DCu;
            goto label_22d6dc;
        }
    }
    ctx->pc = 0x22D6BCu;
label_22d6bc:
    // 0x22d6bc: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22d6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22d6c0:
    // 0x22d6c0: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x22d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_22d6c4:
    // 0x22d6c4: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x22d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
label_22d6c8:
    // 0x22d6c8: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x22d6c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_22d6cc:
    // 0x22d6cc: 0x14400082  bnez        $v0, . + 4 + (0x82 << 2)
label_22d6d0:
    if (ctx->pc == 0x22D6D0u) {
        ctx->pc = 0x22D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6CCu;
        // 0x22d6d0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D6D4u;
        goto label_22d6d4;
    }
    ctx->pc = 0x22D6CCu;
    {
        const bool branch_taken_0x22d6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6CCu;
        // 0x22d6d0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d6cc) {
            ctx->pc = 0x22D8D8u;
            goto label_22d8d8;
        }
    }
    ctx->pc = 0x22D6D4u;
label_22d6d4:
    // 0x22d6d4: 0x10000084  b           . + 4 + (0x84 << 2)
label_22d6d8:
    if (ctx->pc == 0x22D6D8u) {
        ctx->pc = 0x22D6DCu;
        goto label_22d6dc;
    }
    ctx->pc = 0x22D6D4u;
    {
        const bool branch_taken_0x22d6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d6d4) {
            ctx->pc = 0x22D8E8u;
            goto label_22d8e8;
        }
    }
    ctx->pc = 0x22D6DCu;
label_22d6dc:
    // 0x22d6dc: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x22d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
label_22d6e0:
    // 0x22d6e0: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x22d6e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_22d6e4:
    // 0x22d6e4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x22d6e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_22d6e8:
    // 0x22d6e8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x22d6e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_22d6ec:
    // 0x22d6ec: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x22d6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_22d6f0:
    // 0x22d6f0: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x22d6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_22d6f4:
    // 0x22d6f4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x22d6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_22d6f8:
    // 0x22d6f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x22d6f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_22d6fc:
    // 0x22d6fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22d6fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22d700:
    // 0x22d700: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22d700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22d704:
    // 0x22d704: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x22d704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_22d708:
    // 0x22d708: 0xc4620060  lwc1        $f2, 0x60($v1)
    ctx->pc = 0x22d708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22d70c:
    // 0x22d70c: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x22d70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22d710:
    // 0x22d710: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x22d710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_22d714:
    // 0x22d714: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x22d714u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_22d718:
    // 0x22d718: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x22d718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d71c:
    // 0x22d71c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x22d71cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_22d720:
    // 0x22d720: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x22d720u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_22d724:
    // 0x22d724: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22d724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22d728:
    // 0x22d728: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x22d728u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_22d72c:
    // 0x22d72c: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x22d72cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_22d730:
    // 0x22d730: 0xe7a400c4  swc1        $f4, 0xC4($sp)
    ctx->pc = 0x22d730u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_22d734:
    // 0x22d734: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x22d734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_22d738:
    // 0x22d738: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x22d738u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_22d73c:
    // 0x22d73c: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x22d73cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_22d740:
    // 0x22d740: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x22d740u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_22d744:
    // 0x22d744: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x22d744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_22d748:
    // 0x22d748: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x22d748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_22d74c:
    // 0x22d74c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x22d74cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_22d750:
    // 0x22d750: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22d750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22d754:
    // 0x22d754: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x22d754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_22d758:
    // 0x22d758: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x22d758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22d75c:
    // 0x22d75c: 0xc7a300b4  lwc1        $f3, 0xB4($sp)
    ctx->pc = 0x22d75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22d760:
    // 0x22d760: 0xc7a400b8  lwc1        $f4, 0xB8($sp)
    ctx->pc = 0x22d760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_22d764:
    // 0x22d764: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x22d764u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_22d768:
    // 0x22d768: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x22d768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d76c:
    // 0x22d76c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x22d76cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_22d770:
    // 0x22d770: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x22d770u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_22d774:
    // 0x22d774: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22d774u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22d778:
    // 0x22d778: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x22d778u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_22d77c:
    // 0x22d77c: 0xe7a300d4  swc1        $f3, 0xD4($sp)
    ctx->pc = 0x22d77cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_22d780:
    // 0x22d780: 0xe7a400d8  swc1        $f4, 0xD8($sp)
    ctx->pc = 0x22d780u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_22d784:
    // 0x22d784: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x22d784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_22d788:
    // 0x22d788: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x22d788u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_22d78c:
    // 0x22d78c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x22d78cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_22d790:
    // 0x22d790: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x22d790u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_22d794:
    // 0x22d794: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x22d794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
label_22d798:
    // 0x22d798: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x22d798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d79c:
    // 0x22d79c: 0xc7a10154  lwc1        $f1, 0x154($sp)
    ctx->pc = 0x22d79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d7a0:
    // 0x22d7a0: 0xc7a20158  lwc1        $f2, 0x158($sp)
    ctx->pc = 0x22d7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22d7a4:
    // 0x22d7a4: 0xc7a3015c  lwc1        $f3, 0x15C($sp)
    ctx->pc = 0x22d7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22d7a8:
    // 0x22d7a8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x22d7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_22d7ac:
    // 0x22d7ac: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x22d7acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_22d7b0:
    // 0x22d7b0: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x22d7b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_22d7b4:
    // 0x22d7b4: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x22d7b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_22d7b8:
    // 0x22d7b8: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x22d7b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_22d7bc:
    // 0x22d7bc: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x22d7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_22d7c0:
    // 0x22d7c0: 0xc0f6a96  jal         func_3DAA58
label_22d7c4:
    if (ctx->pc == 0x22D7C4u) {
        ctx->pc = 0x22D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D7C0u;
        // 0x22d7c4: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D7C8u;
        goto label_22d7c8;
    }
    ctx->pc = 0x22D7C0u;
    SET_GPR_U32(ctx, 31, 0x22D7C8u);
    ctx->pc = 0x22D7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D7C0u;
    // 0x22d7c4: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x22D7C0u, 0x22D7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D7C8u;
label_22d7c8:
    // 0x22d7c8: 0xc0f6a96  jal         func_3DAA58
label_22d7cc:
    if (ctx->pc == 0x22D7CCu) {
        ctx->pc = 0x22D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D7C8u;
        // 0x22d7cc: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D7D0u;
        goto label_22d7d0;
    }
    ctx->pc = 0x22D7C8u;
    SET_GPR_U32(ctx, 31, 0x22D7D0u);
    ctx->pc = 0x22D7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D7C8u;
    // 0x22d7cc: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x22D7C8u, 0x22D7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D7D0u;
label_22d7d0:
    // 0x22d7d0: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x22d7d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_22d7d4:
    // 0x22d7d4: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x22d7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_22d7d8:
    // 0x22d7d8: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x22d7d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_22d7dc:
    // 0x22d7dc: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x22d7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_22d7e0:
    // 0x22d7e0: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x22d7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
label_22d7e4:
    // 0x22d7e4: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x22d7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_22d7e8:
    // 0x22d7e8: 0x7fa30180  sq          $v1, 0x180($sp)
    ctx->pc = 0x22d7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 3));
label_22d7ec:
    // 0x22d7ec: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x22d7ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_22d7f0:
    // 0x22d7f0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x22d7f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_22d7f4:
    // 0x22d7f4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x22d7f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_22d7f8:
    // 0x22d7f8: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x22d7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
label_22d7fc:
    // 0x22d7fc: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x22d7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22d800:
    // 0x22d800: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x22d800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22d804:
    // 0x22d804: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x22d804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_22d808:
    // 0x22d808: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x22d808u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_22d80c:
    // 0x22d80c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x22d80cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_22d810:
    // 0x22d810: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x22d810u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_22d814:
    // 0x22d814: 0x0  nop
    ctx->pc = 0x22d814u;
    // NOP
label_22d818:
    // 0x22d818: 0x0  nop
    ctx->pc = 0x22d818u;
    // NOP
label_22d81c:
    // 0x22d81c: 0x46000044  c1          0x44
    ctx->pc = 0x22d81cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_22d820:
    // 0x22d820: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x22d820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_22d824:
    // 0x22d824: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x22d824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d828:
    // 0x22d828: 0x0  nop
    ctx->pc = 0x22d828u;
    // NOP
label_22d82c:
    // 0x22d82c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_22d830:
    if (ctx->pc == 0x22D830u) {
        ctx->pc = 0x22D830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D82Cu;
        // 0x22d830: 0xe7a101b0  swc1        $f1, 0x1B0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D834u;
        goto label_22d834;
    }
    ctx->pc = 0x22D82Cu;
    {
        const bool branch_taken_0x22d82c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22D830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D82Cu;
        // 0x22d830: 0xe7a101b0  swc1        $f1, 0x1B0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d82c) {
            ctx->pc = 0x22D858u;
            goto label_22d858;
        }
    }
    ctx->pc = 0x22D834u;
label_22d834:
    // 0x22d834: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22d834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22d838:
    // 0x22d838: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22d838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d83c:
    // 0x22d83c: 0x0  nop
    ctx->pc = 0x22d83cu;
    // NOP
label_22d840:
    // 0x22d840: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x22d840u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_22d844:
    // 0x22d844: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x22d844u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_22d848:
    // 0x22d848: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x22d848u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_22d84c:
    // 0x22d84c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x22d84cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_22d850:
    // 0x22d850: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x22d850u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_22d854:
    // 0x22d854: 0xfba101a0  sqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x22d854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[1]));
label_22d858:
    // 0x22d858: 0x93a400e0  lbu         $a0, 0xE0($sp)
    ctx->pc = 0x22d858u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 224)));
label_22d85c:
    // 0x22d85c: 0x7ba20170  lq          $v0, 0x170($sp)
    ctx->pc = 0x22d85cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_22d860:
    // 0x22d860: 0x7ba30180  lq          $v1, 0x180($sp)
    ctx->pc = 0x22d860u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_22d864:
    // 0x22d864: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x22d864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_22d868:
    // 0x22d868: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x22d868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
label_22d86c:
    // 0x22d86c: 0xa3a40150  sb          $a0, 0x150($sp)
    ctx->pc = 0x22d86cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 336), (uint8_t)GPR_U32(ctx, 4));
label_22d870:
    // 0x22d870: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x22d870u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_22d874:
    // 0x22d874: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x22d874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
label_22d878:
    // 0x22d878: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x22d878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_22d87c:
    // 0x22d87c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x22d87cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_22d880:
    // 0x22d880: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x22d880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
label_22d884:
    // 0x22d884: 0xc7a101b0  lwc1        $f1, 0x1B0($sp)
    ctx->pc = 0x22d884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d888:
    // 0x22d888: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22d888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d88c:
    // 0x22d88c: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x22d88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d890:
    // 0x22d890: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22d890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22d894:
    // 0x22d894: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x22d894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_22d898:
    // 0x22d898: 0xc076e46  jal         func_1DB918
label_22d89c:
    if (ctx->pc == 0x22D89Cu) {
        ctx->pc = 0x22D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D898u;
        // 0x22d89c: 0xe7a00134  swc1        $f0, 0x134($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D8A0u;
        goto label_22d8a0;
    }
    ctx->pc = 0x22D898u;
    SET_GPR_U32(ctx, 31, 0x22D8A0u);
    ctx->pc = 0x22D89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D898u;
    // 0x22d89c: 0xe7a00134  swc1        $f0, 0x134($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x22D898u, 0x22D8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D8A0u;
label_22d8a0:
    // 0x22d8a0: 0xc07783e  jal         func_1DE0F8
label_22d8a4:
    if (ctx->pc == 0x22D8A4u) {
        ctx->pc = 0x22D8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8A0u;
        // 0x22d8a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D8A8u;
        goto label_22d8a8;
    }
    ctx->pc = 0x22D8A0u;
    SET_GPR_U32(ctx, 31, 0x22D8A8u);
    ctx->pc = 0x22D8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D8A0u;
    // 0x22d8a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0F8u, 0x22D8A0u, 0x22D8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D8A8u;
label_22d8a8:
    // 0x22d8a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22d8a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22d8ac:
    // 0x22d8ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22d8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22d8b0:
    // 0x22d8b0: 0xc076e38  jal         func_1DB8E0
label_22d8b4:
    if (ctx->pc == 0x22D8B4u) {
        ctx->pc = 0x22D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8B0u;
        // 0x22d8b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D8B8u;
        goto label_22d8b8;
    }
    ctx->pc = 0x22D8B0u;
    SET_GPR_U32(ctx, 31, 0x22D8B8u);
    ctx->pc = 0x22D8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D8B0u;
    // 0x22d8b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x22D8B0u, 0x22D8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D8B8u;
label_22d8b8:
    // 0x22d8b8: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_22d8bc:
    if (ctx->pc == 0x22D8BCu) {
        ctx->pc = 0x22D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8B8u;
        // 0x22d8bc: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D8C0u;
        goto label_22d8c0;
    }
    ctx->pc = 0x22D8B8u;
    {
        const bool branch_taken_0x22d8b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d8b8) {
            ctx->pc = 0x22D8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D8B8u;
            // 0x22d8bc: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D8F8u;
            goto label_22d8f8;
        }
    }
    ctx->pc = 0x22D8C0u;
label_22d8c0:
    // 0x22d8c0: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22d8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22d8c4:
    // 0x22d8c4: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x22d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_22d8c8:
    // 0x22d8c8: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x22d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
label_22d8cc:
    // 0x22d8cc: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x22d8ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_22d8d0:
    // 0x22d8d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22d8d4:
    if (ctx->pc == 0x22D8D4u) {
        ctx->pc = 0x22D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8D0u;
        // 0x22d8d4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D8D8u;
        goto label_22d8d8;
    }
    ctx->pc = 0x22D8D0u;
    {
        const bool branch_taken_0x22d8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8D0u;
        // 0x22d8d4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d8d0) {
            ctx->pc = 0x22D8E8u;
            goto label_22d8e8;
        }
    }
    ctx->pc = 0x22D8D8u;
label_22d8d8:
    // 0x22d8d8: 0xc08c02e  jal         func_2300B8
label_22d8dc:
    if (ctx->pc == 0x22D8DCu) {
        ctx->pc = 0x22D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8D8u;
        // 0x22d8dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D8E0u;
        goto label_22d8e0;
    }
    ctx->pc = 0x22D8D8u;
    SET_GPR_U32(ctx, 31, 0x22D8E0u);
    ctx->pc = 0x22D8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D8D8u;
    // 0x22d8dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2300B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2300B8u, 0x22D8D8u, 0x22D8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D8E0u;
label_22d8e0:
    // 0x22d8e0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_22d8e4:
    if (ctx->pc == 0x22D8E4u) {
        ctx->pc = 0x22D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8E0u;
        // 0x22d8e4: 0xdfb001c0  ld          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D8E8u;
        goto label_22d8e8;
    }
    ctx->pc = 0x22D8E0u;
    {
        const bool branch_taken_0x22d8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8E0u;
        // 0x22d8e4: 0xdfb001c0  ld          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d8e0) {
            ctx->pc = 0x22D958u;
            goto label_22d958;
        }
    }
    ctx->pc = 0x22D8E8u;
label_22d8e8:
    // 0x22d8e8: 0xc069712  jal         func_1A5C48
label_22d8ec:
    if (ctx->pc == 0x22D8ECu) {
        ctx->pc = 0x22D8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8E8u;
        // 0x22d8ec: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D8F0u;
        goto label_22d8f0;
    }
    ctx->pc = 0x22D8E8u;
    SET_GPR_U32(ctx, 31, 0x22D8F0u);
    ctx->pc = 0x22D8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D8E8u;
    // 0x22d8ec: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x22D8E8u, 0x22D8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D8F0u;
label_22d8f0:
    // 0x22d8f0: 0x10000019  b           . + 4 + (0x19 << 2)
label_22d8f4:
    if (ctx->pc == 0x22D8F4u) {
        ctx->pc = 0x22D8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8F0u;
        // 0x22d8f4: 0xdfb001c0  ld          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D8F8u;
        goto label_22d8f8;
    }
    ctx->pc = 0x22D8F0u;
    {
        const bool branch_taken_0x22d8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8F0u;
        // 0x22d8f4: 0xdfb001c0  ld          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d8f0) {
            ctx->pc = 0x22D958u;
            goto label_22d958;
        }
    }
    ctx->pc = 0x22D8F8u;
label_22d8f8:
    // 0x22d8f8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22d8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_22d8fc:
    // 0x22d8fc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_22d900:
    if (ctx->pc == 0x22D900u) {
        ctx->pc = 0x22D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8FCu;
        // 0x22d900: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D904u;
        goto label_22d904;
    }
    ctx->pc = 0x22D8FCu;
    {
        const bool branch_taken_0x22d8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d8fc) {
            ctx->pc = 0x22D900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D8FCu;
            // 0x22d900: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D924u;
            goto label_22d924;
        }
    }
    ctx->pc = 0x22D904u;
label_22d904:
    // 0x22d904: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x22d904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_22d908:
    // 0x22d908: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x22d908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_22d90c:
    // 0x22d90c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22d90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_22d910:
    // 0x22d910: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_22d914:
    if (ctx->pc == 0x22D914u) {
        ctx->pc = 0x22D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D910u;
        // 0x22d914: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D918u;
        goto label_22d918;
    }
    ctx->pc = 0x22D910u;
    {
        const bool branch_taken_0x22d910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22d910) {
            ctx->pc = 0x22D914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D910u;
            // 0x22d914: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D924u;
            goto label_22d924;
        }
    }
    ctx->pc = 0x22D918u;
label_22d918:
    // 0x22d918: 0xc0bb688  jal         func_2EDA20
label_22d91c:
    if (ctx->pc == 0x22D91Cu) {
        ctx->pc = 0x22D91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D918u;
        // 0x22d91c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D920u;
        goto label_22d920;
    }
    ctx->pc = 0x22D918u;
    SET_GPR_U32(ctx, 31, 0x22D920u);
    ctx->pc = 0x22D91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D918u;
    // 0x22d91c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDA20u, 0x22D918u, 0x22D920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D920u;
label_22d920:
    // 0x22d920: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x22d920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22d924:
    // 0x22d924: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x22d924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_22d928:
    // 0x22d928: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x22d928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
label_22d92c:
    // 0x22d92c: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x22d92cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_22d930:
    // 0x22d930: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_22d934:
    if (ctx->pc == 0x22D934u) {
        ctx->pc = 0x22D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D930u;
        // 0x22d934: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D938u;
        goto label_22d938;
    }
    ctx->pc = 0x22D930u;
    {
        const bool branch_taken_0x22d930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d930) {
            ctx->pc = 0x22D934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D930u;
            // 0x22d934: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D94Cu;
            goto label_22d94c;
        }
    }
    ctx->pc = 0x22D938u;
label_22d938:
    // 0x22d938: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x22d938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d93c:
    // 0x22d93c: 0xe4600174  swc1        $f0, 0x174($v1)
    ctx->pc = 0x22d93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 372), bits); }
label_22d940:
    // 0x22d940: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x22d940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d944:
    // 0x22d944: 0xe4610178  swc1        $f1, 0x178($v1)
    ctx->pc = 0x22d944u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 376), bits); }
label_22d948:
    // 0x22d948: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22d948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22d94c:
    // 0x22d94c: 0xc06a23e  jal         func_1A88F8
label_22d950:
    if (ctx->pc == 0x22D950u) {
        ctx->pc = 0x22D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D94Cu;
        // 0x22d950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D954u;
        goto label_22d954;
    }
    ctx->pc = 0x22D94Cu;
    SET_GPR_U32(ctx, 31, 0x22D954u);
    ctx->pc = 0x22D950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D94Cu;
    // 0x22d950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x22D94Cu, 0x22D954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D954u;
label_22d954:
    // 0x22d954: 0xdfb001c0  ld          $s0, 0x1C0($sp)
    ctx->pc = 0x22d954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 448)));
label_22d958:
    // 0x22d958: 0xdfb101c8  ld          $s1, 0x1C8($sp)
    ctx->pc = 0x22d958u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 456)));
label_22d95c:
    // 0x22d95c: 0xdfb201d0  ld          $s2, 0x1D0($sp)
    ctx->pc = 0x22d95cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 464)));
label_22d960:
    // 0x22d960: 0xdfb301d8  ld          $s3, 0x1D8($sp)
    ctx->pc = 0x22d960u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 472)));
label_22d964:
    // 0x22d964: 0xdfb401e0  ld          $s4, 0x1E0($sp)
    ctx->pc = 0x22d964u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 480)));
label_22d968:
    // 0x22d968: 0xdfb501e8  ld          $s5, 0x1E8($sp)
    ctx->pc = 0x22d968u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 488)));
label_22d96c:
    // 0x22d96c: 0xdfb601f0  ld          $s6, 0x1F0($sp)
    ctx->pc = 0x22d96cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 496)));
label_22d970:
    // 0x22d970: 0xdfbf01f8  ld          $ra, 0x1F8($sp)
    ctx->pc = 0x22d970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 504)));
label_22d974:
    // 0x22d974: 0xc7b40200  lwc1        $f20, 0x200($sp)
    ctx->pc = 0x22d974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22d978:
    // 0x22d978: 0x3e00008  jr          $ra
label_22d97c:
    if (ctx->pc == 0x22D97Cu) {
        ctx->pc = 0x22D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D978u;
        // 0x22d97c: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D980u;
        goto label_fallthrough_0x22d978;
    }
    ctx->pc = 0x22D978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D978u;
        // 0x22d97c: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22d978:
    ctx->pc = 0x22D980u;
}
