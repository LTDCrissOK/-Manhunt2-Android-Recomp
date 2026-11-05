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

// Function: sub_0023AEB0
// Address: 0x23aeb0 - 0x23c9b8
void sub_0023AEB0_0x23aeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AEB0_0x23aeb0");
#endif

    switch (ctx->pc) {
        case 0x23aeb0u: goto label_23aeb0;
        case 0x23aeb4u: goto label_23aeb4;
        case 0x23aeb8u: goto label_23aeb8;
        case 0x23aebcu: goto label_23aebc;
        case 0x23aec0u: goto label_23aec0;
        case 0x23aec4u: goto label_23aec4;
        case 0x23aec8u: goto label_23aec8;
        case 0x23aeccu: goto label_23aecc;
        case 0x23aed0u: goto label_23aed0;
        case 0x23aed4u: goto label_23aed4;
        case 0x23aed8u: goto label_23aed8;
        case 0x23aedcu: goto label_23aedc;
        case 0x23aee0u: goto label_23aee0;
        case 0x23aee4u: goto label_23aee4;
        case 0x23aee8u: goto label_23aee8;
        case 0x23aeecu: goto label_23aeec;
        case 0x23aef0u: goto label_23aef0;
        case 0x23aef4u: goto label_23aef4;
        case 0x23aef8u: goto label_23aef8;
        case 0x23aefcu: goto label_23aefc;
        case 0x23af00u: goto label_23af00;
        case 0x23af04u: goto label_23af04;
        case 0x23af08u: goto label_23af08;
        case 0x23af0cu: goto label_23af0c;
        case 0x23af10u: goto label_23af10;
        case 0x23af14u: goto label_23af14;
        case 0x23af18u: goto label_23af18;
        case 0x23af1cu: goto label_23af1c;
        case 0x23af20u: goto label_23af20;
        case 0x23af24u: goto label_23af24;
        case 0x23af28u: goto label_23af28;
        case 0x23af2cu: goto label_23af2c;
        case 0x23af30u: goto label_23af30;
        case 0x23af34u: goto label_23af34;
        case 0x23af38u: goto label_23af38;
        case 0x23af3cu: goto label_23af3c;
        case 0x23af40u: goto label_23af40;
        case 0x23af44u: goto label_23af44;
        case 0x23af48u: goto label_23af48;
        case 0x23af4cu: goto label_23af4c;
        case 0x23af50u: goto label_23af50;
        case 0x23af54u: goto label_23af54;
        case 0x23af58u: goto label_23af58;
        case 0x23af5cu: goto label_23af5c;
        case 0x23af60u: goto label_23af60;
        case 0x23af64u: goto label_23af64;
        case 0x23af68u: goto label_23af68;
        case 0x23af6cu: goto label_23af6c;
        case 0x23af70u: goto label_23af70;
        case 0x23af74u: goto label_23af74;
        case 0x23af78u: goto label_23af78;
        case 0x23af7cu: goto label_23af7c;
        case 0x23af80u: goto label_23af80;
        case 0x23af84u: goto label_23af84;
        case 0x23af88u: goto label_23af88;
        case 0x23af8cu: goto label_23af8c;
        case 0x23af90u: goto label_23af90;
        case 0x23af94u: goto label_23af94;
        case 0x23af98u: goto label_23af98;
        case 0x23af9cu: goto label_23af9c;
        case 0x23afa0u: goto label_23afa0;
        case 0x23afa4u: goto label_23afa4;
        case 0x23afa8u: goto label_23afa8;
        case 0x23afacu: goto label_23afac;
        case 0x23afb0u: goto label_23afb0;
        case 0x23afb4u: goto label_23afb4;
        case 0x23afb8u: goto label_23afb8;
        case 0x23afbcu: goto label_23afbc;
        case 0x23afc0u: goto label_23afc0;
        case 0x23afc4u: goto label_23afc4;
        case 0x23afc8u: goto label_23afc8;
        case 0x23afccu: goto label_23afcc;
        case 0x23afd0u: goto label_23afd0;
        case 0x23afd4u: goto label_23afd4;
        case 0x23afd8u: goto label_23afd8;
        case 0x23afdcu: goto label_23afdc;
        case 0x23afe0u: goto label_23afe0;
        case 0x23afe4u: goto label_23afe4;
        case 0x23afe8u: goto label_23afe8;
        case 0x23afecu: goto label_23afec;
        case 0x23aff0u: goto label_23aff0;
        case 0x23aff4u: goto label_23aff4;
        case 0x23aff8u: goto label_23aff8;
        case 0x23affcu: goto label_23affc;
        case 0x23b000u: goto label_23b000;
        case 0x23b004u: goto label_23b004;
        case 0x23b008u: goto label_23b008;
        case 0x23b00cu: goto label_23b00c;
        case 0x23b010u: goto label_23b010;
        case 0x23b014u: goto label_23b014;
        case 0x23b018u: goto label_23b018;
        case 0x23b01cu: goto label_23b01c;
        case 0x23b020u: goto label_23b020;
        case 0x23b024u: goto label_23b024;
        case 0x23b028u: goto label_23b028;
        case 0x23b02cu: goto label_23b02c;
        case 0x23b030u: goto label_23b030;
        case 0x23b034u: goto label_23b034;
        case 0x23b038u: goto label_23b038;
        case 0x23b03cu: goto label_23b03c;
        case 0x23b040u: goto label_23b040;
        case 0x23b044u: goto label_23b044;
        case 0x23b048u: goto label_23b048;
        case 0x23b04cu: goto label_23b04c;
        case 0x23b050u: goto label_23b050;
        case 0x23b054u: goto label_23b054;
        case 0x23b058u: goto label_23b058;
        case 0x23b05cu: goto label_23b05c;
        case 0x23b060u: goto label_23b060;
        case 0x23b064u: goto label_23b064;
        case 0x23b068u: goto label_23b068;
        case 0x23b06cu: goto label_23b06c;
        case 0x23b070u: goto label_23b070;
        case 0x23b074u: goto label_23b074;
        case 0x23b078u: goto label_23b078;
        case 0x23b07cu: goto label_23b07c;
        case 0x23b080u: goto label_23b080;
        case 0x23b084u: goto label_23b084;
        case 0x23b088u: goto label_23b088;
        case 0x23b08cu: goto label_23b08c;
        case 0x23b090u: goto label_23b090;
        case 0x23b094u: goto label_23b094;
        case 0x23b098u: goto label_23b098;
        case 0x23b09cu: goto label_23b09c;
        case 0x23b0a0u: goto label_23b0a0;
        case 0x23b0a4u: goto label_23b0a4;
        case 0x23b0a8u: goto label_23b0a8;
        case 0x23b0acu: goto label_23b0ac;
        case 0x23b0b0u: goto label_23b0b0;
        case 0x23b0b4u: goto label_23b0b4;
        case 0x23b0b8u: goto label_23b0b8;
        case 0x23b0bcu: goto label_23b0bc;
        case 0x23b0c0u: goto label_23b0c0;
        case 0x23b0c4u: goto label_23b0c4;
        case 0x23b0c8u: goto label_23b0c8;
        case 0x23b0ccu: goto label_23b0cc;
        case 0x23b0d0u: goto label_23b0d0;
        case 0x23b0d4u: goto label_23b0d4;
        case 0x23b0d8u: goto label_23b0d8;
        case 0x23b0dcu: goto label_23b0dc;
        case 0x23b0e0u: goto label_23b0e0;
        case 0x23b0e4u: goto label_23b0e4;
        case 0x23b0e8u: goto label_23b0e8;
        case 0x23b0ecu: goto label_23b0ec;
        case 0x23b0f0u: goto label_23b0f0;
        case 0x23b0f4u: goto label_23b0f4;
        case 0x23b0f8u: goto label_23b0f8;
        case 0x23b0fcu: goto label_23b0fc;
        case 0x23b100u: goto label_23b100;
        case 0x23b104u: goto label_23b104;
        case 0x23b108u: goto label_23b108;
        case 0x23b10cu: goto label_23b10c;
        case 0x23b110u: goto label_23b110;
        case 0x23b114u: goto label_23b114;
        case 0x23b118u: goto label_23b118;
        case 0x23b11cu: goto label_23b11c;
        case 0x23b120u: goto label_23b120;
        case 0x23b124u: goto label_23b124;
        case 0x23b128u: goto label_23b128;
        case 0x23b12cu: goto label_23b12c;
        case 0x23b130u: goto label_23b130;
        case 0x23b134u: goto label_23b134;
        case 0x23b138u: goto label_23b138;
        case 0x23b13cu: goto label_23b13c;
        case 0x23b140u: goto label_23b140;
        case 0x23b144u: goto label_23b144;
        case 0x23b148u: goto label_23b148;
        case 0x23b14cu: goto label_23b14c;
        case 0x23b150u: goto label_23b150;
        case 0x23b154u: goto label_23b154;
        case 0x23b158u: goto label_23b158;
        case 0x23b15cu: goto label_23b15c;
        case 0x23b160u: goto label_23b160;
        case 0x23b164u: goto label_23b164;
        case 0x23b168u: goto label_23b168;
        case 0x23b16cu: goto label_23b16c;
        case 0x23b170u: goto label_23b170;
        case 0x23b174u: goto label_23b174;
        case 0x23b178u: goto label_23b178;
        case 0x23b17cu: goto label_23b17c;
        case 0x23b180u: goto label_23b180;
        case 0x23b184u: goto label_23b184;
        case 0x23b188u: goto label_23b188;
        case 0x23b18cu: goto label_23b18c;
        case 0x23b190u: goto label_23b190;
        case 0x23b194u: goto label_23b194;
        case 0x23b198u: goto label_23b198;
        case 0x23b19cu: goto label_23b19c;
        case 0x23b1a0u: goto label_23b1a0;
        case 0x23b1a4u: goto label_23b1a4;
        case 0x23b1a8u: goto label_23b1a8;
        case 0x23b1acu: goto label_23b1ac;
        case 0x23b1b0u: goto label_23b1b0;
        case 0x23b1b4u: goto label_23b1b4;
        case 0x23b1b8u: goto label_23b1b8;
        case 0x23b1bcu: goto label_23b1bc;
        case 0x23b1c0u: goto label_23b1c0;
        case 0x23b1c4u: goto label_23b1c4;
        case 0x23b1c8u: goto label_23b1c8;
        case 0x23b1ccu: goto label_23b1cc;
        case 0x23b1d0u: goto label_23b1d0;
        case 0x23b1d4u: goto label_23b1d4;
        case 0x23b1d8u: goto label_23b1d8;
        case 0x23b1dcu: goto label_23b1dc;
        case 0x23b1e0u: goto label_23b1e0;
        case 0x23b1e4u: goto label_23b1e4;
        case 0x23b1e8u: goto label_23b1e8;
        case 0x23b1ecu: goto label_23b1ec;
        case 0x23b1f0u: goto label_23b1f0;
        case 0x23b1f4u: goto label_23b1f4;
        case 0x23b1f8u: goto label_23b1f8;
        case 0x23b1fcu: goto label_23b1fc;
        case 0x23b200u: goto label_23b200;
        case 0x23b204u: goto label_23b204;
        case 0x23b208u: goto label_23b208;
        case 0x23b20cu: goto label_23b20c;
        case 0x23b210u: goto label_23b210;
        case 0x23b214u: goto label_23b214;
        case 0x23b218u: goto label_23b218;
        case 0x23b21cu: goto label_23b21c;
        case 0x23b220u: goto label_23b220;
        case 0x23b224u: goto label_23b224;
        case 0x23b228u: goto label_23b228;
        case 0x23b22cu: goto label_23b22c;
        case 0x23b230u: goto label_23b230;
        case 0x23b234u: goto label_23b234;
        case 0x23b238u: goto label_23b238;
        case 0x23b23cu: goto label_23b23c;
        case 0x23b240u: goto label_23b240;
        case 0x23b244u: goto label_23b244;
        case 0x23b248u: goto label_23b248;
        case 0x23b24cu: goto label_23b24c;
        case 0x23b250u: goto label_23b250;
        case 0x23b254u: goto label_23b254;
        case 0x23b258u: goto label_23b258;
        case 0x23b25cu: goto label_23b25c;
        case 0x23b260u: goto label_23b260;
        case 0x23b264u: goto label_23b264;
        case 0x23b268u: goto label_23b268;
        case 0x23b26cu: goto label_23b26c;
        case 0x23b270u: goto label_23b270;
        case 0x23b274u: goto label_23b274;
        case 0x23b278u: goto label_23b278;
        case 0x23b27cu: goto label_23b27c;
        case 0x23b280u: goto label_23b280;
        case 0x23b284u: goto label_23b284;
        case 0x23b288u: goto label_23b288;
        case 0x23b28cu: goto label_23b28c;
        case 0x23b290u: goto label_23b290;
        case 0x23b294u: goto label_23b294;
        case 0x23b298u: goto label_23b298;
        case 0x23b29cu: goto label_23b29c;
        case 0x23b2a0u: goto label_23b2a0;
        case 0x23b2a4u: goto label_23b2a4;
        case 0x23b2a8u: goto label_23b2a8;
        case 0x23b2acu: goto label_23b2ac;
        case 0x23b2b0u: goto label_23b2b0;
        case 0x23b2b4u: goto label_23b2b4;
        case 0x23b2b8u: goto label_23b2b8;
        case 0x23b2bcu: goto label_23b2bc;
        case 0x23b2c0u: goto label_23b2c0;
        case 0x23b2c4u: goto label_23b2c4;
        case 0x23b2c8u: goto label_23b2c8;
        case 0x23b2ccu: goto label_23b2cc;
        case 0x23b2d0u: goto label_23b2d0;
        case 0x23b2d4u: goto label_23b2d4;
        case 0x23b2d8u: goto label_23b2d8;
        case 0x23b2dcu: goto label_23b2dc;
        case 0x23b2e0u: goto label_23b2e0;
        case 0x23b2e4u: goto label_23b2e4;
        case 0x23b2e8u: goto label_23b2e8;
        case 0x23b2ecu: goto label_23b2ec;
        case 0x23b2f0u: goto label_23b2f0;
        case 0x23b2f4u: goto label_23b2f4;
        case 0x23b2f8u: goto label_23b2f8;
        case 0x23b2fcu: goto label_23b2fc;
        case 0x23b300u: goto label_23b300;
        case 0x23b304u: goto label_23b304;
        case 0x23b308u: goto label_23b308;
        case 0x23b30cu: goto label_23b30c;
        case 0x23b310u: goto label_23b310;
        case 0x23b314u: goto label_23b314;
        case 0x23b318u: goto label_23b318;
        case 0x23b31cu: goto label_23b31c;
        case 0x23b320u: goto label_23b320;
        case 0x23b324u: goto label_23b324;
        case 0x23b328u: goto label_23b328;
        case 0x23b32cu: goto label_23b32c;
        case 0x23b330u: goto label_23b330;
        case 0x23b334u: goto label_23b334;
        case 0x23b338u: goto label_23b338;
        case 0x23b33cu: goto label_23b33c;
        case 0x23b340u: goto label_23b340;
        case 0x23b344u: goto label_23b344;
        case 0x23b348u: goto label_23b348;
        case 0x23b34cu: goto label_23b34c;
        case 0x23b350u: goto label_23b350;
        case 0x23b354u: goto label_23b354;
        case 0x23b358u: goto label_23b358;
        case 0x23b35cu: goto label_23b35c;
        case 0x23b360u: goto label_23b360;
        case 0x23b364u: goto label_23b364;
        case 0x23b368u: goto label_23b368;
        case 0x23b36cu: goto label_23b36c;
        case 0x23b370u: goto label_23b370;
        case 0x23b374u: goto label_23b374;
        case 0x23b378u: goto label_23b378;
        case 0x23b37cu: goto label_23b37c;
        case 0x23b380u: goto label_23b380;
        case 0x23b384u: goto label_23b384;
        case 0x23b388u: goto label_23b388;
        case 0x23b38cu: goto label_23b38c;
        case 0x23b390u: goto label_23b390;
        case 0x23b394u: goto label_23b394;
        case 0x23b398u: goto label_23b398;
        case 0x23b39cu: goto label_23b39c;
        case 0x23b3a0u: goto label_23b3a0;
        case 0x23b3a4u: goto label_23b3a4;
        case 0x23b3a8u: goto label_23b3a8;
        case 0x23b3acu: goto label_23b3ac;
        case 0x23b3b0u: goto label_23b3b0;
        case 0x23b3b4u: goto label_23b3b4;
        case 0x23b3b8u: goto label_23b3b8;
        case 0x23b3bcu: goto label_23b3bc;
        case 0x23b3c0u: goto label_23b3c0;
        case 0x23b3c4u: goto label_23b3c4;
        case 0x23b3c8u: goto label_23b3c8;
        case 0x23b3ccu: goto label_23b3cc;
        case 0x23b3d0u: goto label_23b3d0;
        case 0x23b3d4u: goto label_23b3d4;
        case 0x23b3d8u: goto label_23b3d8;
        case 0x23b3dcu: goto label_23b3dc;
        case 0x23b3e0u: goto label_23b3e0;
        case 0x23b3e4u: goto label_23b3e4;
        case 0x23b3e8u: goto label_23b3e8;
        case 0x23b3ecu: goto label_23b3ec;
        case 0x23b3f0u: goto label_23b3f0;
        case 0x23b3f4u: goto label_23b3f4;
        case 0x23b3f8u: goto label_23b3f8;
        case 0x23b3fcu: goto label_23b3fc;
        case 0x23b400u: goto label_23b400;
        case 0x23b404u: goto label_23b404;
        case 0x23b408u: goto label_23b408;
        case 0x23b40cu: goto label_23b40c;
        case 0x23b410u: goto label_23b410;
        case 0x23b414u: goto label_23b414;
        case 0x23b418u: goto label_23b418;
        case 0x23b41cu: goto label_23b41c;
        case 0x23b420u: goto label_23b420;
        case 0x23b424u: goto label_23b424;
        case 0x23b428u: goto label_23b428;
        case 0x23b42cu: goto label_23b42c;
        case 0x23b430u: goto label_23b430;
        case 0x23b434u: goto label_23b434;
        case 0x23b438u: goto label_23b438;
        case 0x23b43cu: goto label_23b43c;
        case 0x23b440u: goto label_23b440;
        case 0x23b444u: goto label_23b444;
        case 0x23b448u: goto label_23b448;
        case 0x23b44cu: goto label_23b44c;
        case 0x23b450u: goto label_23b450;
        case 0x23b454u: goto label_23b454;
        case 0x23b458u: goto label_23b458;
        case 0x23b45cu: goto label_23b45c;
        case 0x23b460u: goto label_23b460;
        case 0x23b464u: goto label_23b464;
        case 0x23b468u: goto label_23b468;
        case 0x23b46cu: goto label_23b46c;
        case 0x23b470u: goto label_23b470;
        case 0x23b474u: goto label_23b474;
        case 0x23b478u: goto label_23b478;
        case 0x23b47cu: goto label_23b47c;
        case 0x23b480u: goto label_23b480;
        case 0x23b484u: goto label_23b484;
        case 0x23b488u: goto label_23b488;
        case 0x23b48cu: goto label_23b48c;
        case 0x23b490u: goto label_23b490;
        case 0x23b494u: goto label_23b494;
        case 0x23b498u: goto label_23b498;
        case 0x23b49cu: goto label_23b49c;
        case 0x23b4a0u: goto label_23b4a0;
        case 0x23b4a4u: goto label_23b4a4;
        case 0x23b4a8u: goto label_23b4a8;
        case 0x23b4acu: goto label_23b4ac;
        case 0x23b4b0u: goto label_23b4b0;
        case 0x23b4b4u: goto label_23b4b4;
        case 0x23b4b8u: goto label_23b4b8;
        case 0x23b4bcu: goto label_23b4bc;
        case 0x23b4c0u: goto label_23b4c0;
        case 0x23b4c4u: goto label_23b4c4;
        case 0x23b4c8u: goto label_23b4c8;
        case 0x23b4ccu: goto label_23b4cc;
        case 0x23b4d0u: goto label_23b4d0;
        case 0x23b4d4u: goto label_23b4d4;
        case 0x23b4d8u: goto label_23b4d8;
        case 0x23b4dcu: goto label_23b4dc;
        case 0x23b4e0u: goto label_23b4e0;
        case 0x23b4e4u: goto label_23b4e4;
        case 0x23b4e8u: goto label_23b4e8;
        case 0x23b4ecu: goto label_23b4ec;
        case 0x23b4f0u: goto label_23b4f0;
        case 0x23b4f4u: goto label_23b4f4;
        case 0x23b4f8u: goto label_23b4f8;
        case 0x23b4fcu: goto label_23b4fc;
        case 0x23b500u: goto label_23b500;
        case 0x23b504u: goto label_23b504;
        case 0x23b508u: goto label_23b508;
        case 0x23b50cu: goto label_23b50c;
        case 0x23b510u: goto label_23b510;
        case 0x23b514u: goto label_23b514;
        case 0x23b518u: goto label_23b518;
        case 0x23b51cu: goto label_23b51c;
        case 0x23b520u: goto label_23b520;
        case 0x23b524u: goto label_23b524;
        case 0x23b528u: goto label_23b528;
        case 0x23b52cu: goto label_23b52c;
        case 0x23b530u: goto label_23b530;
        case 0x23b534u: goto label_23b534;
        case 0x23b538u: goto label_23b538;
        case 0x23b53cu: goto label_23b53c;
        case 0x23b540u: goto label_23b540;
        case 0x23b544u: goto label_23b544;
        case 0x23b548u: goto label_23b548;
        case 0x23b54cu: goto label_23b54c;
        case 0x23b550u: goto label_23b550;
        case 0x23b554u: goto label_23b554;
        case 0x23b558u: goto label_23b558;
        case 0x23b55cu: goto label_23b55c;
        case 0x23b560u: goto label_23b560;
        case 0x23b564u: goto label_23b564;
        case 0x23b568u: goto label_23b568;
        case 0x23b56cu: goto label_23b56c;
        case 0x23b570u: goto label_23b570;
        case 0x23b574u: goto label_23b574;
        case 0x23b578u: goto label_23b578;
        case 0x23b57cu: goto label_23b57c;
        case 0x23b580u: goto label_23b580;
        case 0x23b584u: goto label_23b584;
        case 0x23b588u: goto label_23b588;
        case 0x23b58cu: goto label_23b58c;
        case 0x23b590u: goto label_23b590;
        case 0x23b594u: goto label_23b594;
        case 0x23b598u: goto label_23b598;
        case 0x23b59cu: goto label_23b59c;
        case 0x23b5a0u: goto label_23b5a0;
        case 0x23b5a4u: goto label_23b5a4;
        case 0x23b5a8u: goto label_23b5a8;
        case 0x23b5acu: goto label_23b5ac;
        case 0x23b5b0u: goto label_23b5b0;
        case 0x23b5b4u: goto label_23b5b4;
        case 0x23b5b8u: goto label_23b5b8;
        case 0x23b5bcu: goto label_23b5bc;
        case 0x23b5c0u: goto label_23b5c0;
        case 0x23b5c4u: goto label_23b5c4;
        case 0x23b5c8u: goto label_23b5c8;
        case 0x23b5ccu: goto label_23b5cc;
        case 0x23b5d0u: goto label_23b5d0;
        case 0x23b5d4u: goto label_23b5d4;
        case 0x23b5d8u: goto label_23b5d8;
        case 0x23b5dcu: goto label_23b5dc;
        case 0x23b5e0u: goto label_23b5e0;
        case 0x23b5e4u: goto label_23b5e4;
        case 0x23b5e8u: goto label_23b5e8;
        case 0x23b5ecu: goto label_23b5ec;
        case 0x23b5f0u: goto label_23b5f0;
        case 0x23b5f4u: goto label_23b5f4;
        case 0x23b5f8u: goto label_23b5f8;
        case 0x23b5fcu: goto label_23b5fc;
        case 0x23b600u: goto label_23b600;
        case 0x23b604u: goto label_23b604;
        case 0x23b608u: goto label_23b608;
        case 0x23b60cu: goto label_23b60c;
        case 0x23b610u: goto label_23b610;
        case 0x23b614u: goto label_23b614;
        case 0x23b618u: goto label_23b618;
        case 0x23b61cu: goto label_23b61c;
        case 0x23b620u: goto label_23b620;
        case 0x23b624u: goto label_23b624;
        case 0x23b628u: goto label_23b628;
        case 0x23b62cu: goto label_23b62c;
        case 0x23b630u: goto label_23b630;
        case 0x23b634u: goto label_23b634;
        case 0x23b638u: goto label_23b638;
        case 0x23b63cu: goto label_23b63c;
        case 0x23b640u: goto label_23b640;
        case 0x23b644u: goto label_23b644;
        case 0x23b648u: goto label_23b648;
        case 0x23b64cu: goto label_23b64c;
        case 0x23b650u: goto label_23b650;
        case 0x23b654u: goto label_23b654;
        case 0x23b658u: goto label_23b658;
        case 0x23b65cu: goto label_23b65c;
        case 0x23b660u: goto label_23b660;
        case 0x23b664u: goto label_23b664;
        case 0x23b668u: goto label_23b668;
        case 0x23b66cu: goto label_23b66c;
        case 0x23b670u: goto label_23b670;
        case 0x23b674u: goto label_23b674;
        case 0x23b678u: goto label_23b678;
        case 0x23b67cu: goto label_23b67c;
        case 0x23b680u: goto label_23b680;
        case 0x23b684u: goto label_23b684;
        case 0x23b688u: goto label_23b688;
        case 0x23b68cu: goto label_23b68c;
        case 0x23b690u: goto label_23b690;
        case 0x23b694u: goto label_23b694;
        case 0x23b698u: goto label_23b698;
        case 0x23b69cu: goto label_23b69c;
        case 0x23b6a0u: goto label_23b6a0;
        case 0x23b6a4u: goto label_23b6a4;
        case 0x23b6a8u: goto label_23b6a8;
        case 0x23b6acu: goto label_23b6ac;
        case 0x23b6b0u: goto label_23b6b0;
        case 0x23b6b4u: goto label_23b6b4;
        case 0x23b6b8u: goto label_23b6b8;
        case 0x23b6bcu: goto label_23b6bc;
        case 0x23b6c0u: goto label_23b6c0;
        case 0x23b6c4u: goto label_23b6c4;
        case 0x23b6c8u: goto label_23b6c8;
        case 0x23b6ccu: goto label_23b6cc;
        case 0x23b6d0u: goto label_23b6d0;
        case 0x23b6d4u: goto label_23b6d4;
        case 0x23b6d8u: goto label_23b6d8;
        case 0x23b6dcu: goto label_23b6dc;
        case 0x23b6e0u: goto label_23b6e0;
        case 0x23b6e4u: goto label_23b6e4;
        case 0x23b6e8u: goto label_23b6e8;
        case 0x23b6ecu: goto label_23b6ec;
        case 0x23b6f0u: goto label_23b6f0;
        case 0x23b6f4u: goto label_23b6f4;
        case 0x23b6f8u: goto label_23b6f8;
        case 0x23b6fcu: goto label_23b6fc;
        case 0x23b700u: goto label_23b700;
        case 0x23b704u: goto label_23b704;
        case 0x23b708u: goto label_23b708;
        case 0x23b70cu: goto label_23b70c;
        case 0x23b710u: goto label_23b710;
        case 0x23b714u: goto label_23b714;
        case 0x23b718u: goto label_23b718;
        case 0x23b71cu: goto label_23b71c;
        case 0x23b720u: goto label_23b720;
        case 0x23b724u: goto label_23b724;
        case 0x23b728u: goto label_23b728;
        case 0x23b72cu: goto label_23b72c;
        case 0x23b730u: goto label_23b730;
        case 0x23b734u: goto label_23b734;
        case 0x23b738u: goto label_23b738;
        case 0x23b73cu: goto label_23b73c;
        case 0x23b740u: goto label_23b740;
        case 0x23b744u: goto label_23b744;
        case 0x23b748u: goto label_23b748;
        case 0x23b74cu: goto label_23b74c;
        case 0x23b750u: goto label_23b750;
        case 0x23b754u: goto label_23b754;
        case 0x23b758u: goto label_23b758;
        case 0x23b75cu: goto label_23b75c;
        case 0x23b760u: goto label_23b760;
        case 0x23b764u: goto label_23b764;
        case 0x23b768u: goto label_23b768;
        case 0x23b76cu: goto label_23b76c;
        case 0x23b770u: goto label_23b770;
        case 0x23b774u: goto label_23b774;
        case 0x23b778u: goto label_23b778;
        case 0x23b77cu: goto label_23b77c;
        case 0x23b780u: goto label_23b780;
        case 0x23b784u: goto label_23b784;
        case 0x23b788u: goto label_23b788;
        case 0x23b78cu: goto label_23b78c;
        case 0x23b790u: goto label_23b790;
        case 0x23b794u: goto label_23b794;
        case 0x23b798u: goto label_23b798;
        case 0x23b79cu: goto label_23b79c;
        case 0x23b7a0u: goto label_23b7a0;
        case 0x23b7a4u: goto label_23b7a4;
        case 0x23b7a8u: goto label_23b7a8;
        case 0x23b7acu: goto label_23b7ac;
        case 0x23b7b0u: goto label_23b7b0;
        case 0x23b7b4u: goto label_23b7b4;
        case 0x23b7b8u: goto label_23b7b8;
        case 0x23b7bcu: goto label_23b7bc;
        case 0x23b7c0u: goto label_23b7c0;
        case 0x23b7c4u: goto label_23b7c4;
        case 0x23b7c8u: goto label_23b7c8;
        case 0x23b7ccu: goto label_23b7cc;
        case 0x23b7d0u: goto label_23b7d0;
        case 0x23b7d4u: goto label_23b7d4;
        case 0x23b7d8u: goto label_23b7d8;
        case 0x23b7dcu: goto label_23b7dc;
        case 0x23b7e0u: goto label_23b7e0;
        case 0x23b7e4u: goto label_23b7e4;
        case 0x23b7e8u: goto label_23b7e8;
        case 0x23b7ecu: goto label_23b7ec;
        case 0x23b7f0u: goto label_23b7f0;
        case 0x23b7f4u: goto label_23b7f4;
        case 0x23b7f8u: goto label_23b7f8;
        case 0x23b7fcu: goto label_23b7fc;
        case 0x23b800u: goto label_23b800;
        case 0x23b804u: goto label_23b804;
        case 0x23b808u: goto label_23b808;
        case 0x23b80cu: goto label_23b80c;
        case 0x23b810u: goto label_23b810;
        case 0x23b814u: goto label_23b814;
        case 0x23b818u: goto label_23b818;
        case 0x23b81cu: goto label_23b81c;
        case 0x23b820u: goto label_23b820;
        case 0x23b824u: goto label_23b824;
        case 0x23b828u: goto label_23b828;
        case 0x23b82cu: goto label_23b82c;
        case 0x23b830u: goto label_23b830;
        case 0x23b834u: goto label_23b834;
        case 0x23b838u: goto label_23b838;
        case 0x23b83cu: goto label_23b83c;
        case 0x23b840u: goto label_23b840;
        case 0x23b844u: goto label_23b844;
        case 0x23b848u: goto label_23b848;
        case 0x23b84cu: goto label_23b84c;
        case 0x23b850u: goto label_23b850;
        case 0x23b854u: goto label_23b854;
        case 0x23b858u: goto label_23b858;
        case 0x23b85cu: goto label_23b85c;
        case 0x23b860u: goto label_23b860;
        case 0x23b864u: goto label_23b864;
        case 0x23b868u: goto label_23b868;
        case 0x23b86cu: goto label_23b86c;
        case 0x23b870u: goto label_23b870;
        case 0x23b874u: goto label_23b874;
        case 0x23b878u: goto label_23b878;
        case 0x23b87cu: goto label_23b87c;
        case 0x23b880u: goto label_23b880;
        case 0x23b884u: goto label_23b884;
        case 0x23b888u: goto label_23b888;
        case 0x23b88cu: goto label_23b88c;
        case 0x23b890u: goto label_23b890;
        case 0x23b894u: goto label_23b894;
        case 0x23b898u: goto label_23b898;
        case 0x23b89cu: goto label_23b89c;
        case 0x23b8a0u: goto label_23b8a0;
        case 0x23b8a4u: goto label_23b8a4;
        case 0x23b8a8u: goto label_23b8a8;
        case 0x23b8acu: goto label_23b8ac;
        case 0x23b8b0u: goto label_23b8b0;
        case 0x23b8b4u: goto label_23b8b4;
        case 0x23b8b8u: goto label_23b8b8;
        case 0x23b8bcu: goto label_23b8bc;
        case 0x23b8c0u: goto label_23b8c0;
        case 0x23b8c4u: goto label_23b8c4;
        case 0x23b8c8u: goto label_23b8c8;
        case 0x23b8ccu: goto label_23b8cc;
        case 0x23b8d0u: goto label_23b8d0;
        case 0x23b8d4u: goto label_23b8d4;
        case 0x23b8d8u: goto label_23b8d8;
        case 0x23b8dcu: goto label_23b8dc;
        case 0x23b8e0u: goto label_23b8e0;
        case 0x23b8e4u: goto label_23b8e4;
        case 0x23b8e8u: goto label_23b8e8;
        case 0x23b8ecu: goto label_23b8ec;
        case 0x23b8f0u: goto label_23b8f0;
        case 0x23b8f4u: goto label_23b8f4;
        case 0x23b8f8u: goto label_23b8f8;
        case 0x23b8fcu: goto label_23b8fc;
        case 0x23b900u: goto label_23b900;
        case 0x23b904u: goto label_23b904;
        case 0x23b908u: goto label_23b908;
        case 0x23b90cu: goto label_23b90c;
        case 0x23b910u: goto label_23b910;
        case 0x23b914u: goto label_23b914;
        case 0x23b918u: goto label_23b918;
        case 0x23b91cu: goto label_23b91c;
        case 0x23b920u: goto label_23b920;
        case 0x23b924u: goto label_23b924;
        case 0x23b928u: goto label_23b928;
        case 0x23b92cu: goto label_23b92c;
        case 0x23b930u: goto label_23b930;
        case 0x23b934u: goto label_23b934;
        case 0x23b938u: goto label_23b938;
        case 0x23b93cu: goto label_23b93c;
        case 0x23b940u: goto label_23b940;
        case 0x23b944u: goto label_23b944;
        case 0x23b948u: goto label_23b948;
        case 0x23b94cu: goto label_23b94c;
        case 0x23b950u: goto label_23b950;
        case 0x23b954u: goto label_23b954;
        case 0x23b958u: goto label_23b958;
        case 0x23b95cu: goto label_23b95c;
        case 0x23b960u: goto label_23b960;
        case 0x23b964u: goto label_23b964;
        case 0x23b968u: goto label_23b968;
        case 0x23b96cu: goto label_23b96c;
        case 0x23b970u: goto label_23b970;
        case 0x23b974u: goto label_23b974;
        case 0x23b978u: goto label_23b978;
        case 0x23b97cu: goto label_23b97c;
        case 0x23b980u: goto label_23b980;
        case 0x23b984u: goto label_23b984;
        case 0x23b988u: goto label_23b988;
        case 0x23b98cu: goto label_23b98c;
        case 0x23b990u: goto label_23b990;
        case 0x23b994u: goto label_23b994;
        case 0x23b998u: goto label_23b998;
        case 0x23b99cu: goto label_23b99c;
        case 0x23b9a0u: goto label_23b9a0;
        case 0x23b9a4u: goto label_23b9a4;
        case 0x23b9a8u: goto label_23b9a8;
        case 0x23b9acu: goto label_23b9ac;
        case 0x23b9b0u: goto label_23b9b0;
        case 0x23b9b4u: goto label_23b9b4;
        case 0x23b9b8u: goto label_23b9b8;
        case 0x23b9bcu: goto label_23b9bc;
        case 0x23b9c0u: goto label_23b9c0;
        case 0x23b9c4u: goto label_23b9c4;
        case 0x23b9c8u: goto label_23b9c8;
        case 0x23b9ccu: goto label_23b9cc;
        case 0x23b9d0u: goto label_23b9d0;
        case 0x23b9d4u: goto label_23b9d4;
        case 0x23b9d8u: goto label_23b9d8;
        case 0x23b9dcu: goto label_23b9dc;
        case 0x23b9e0u: goto label_23b9e0;
        case 0x23b9e4u: goto label_23b9e4;
        case 0x23b9e8u: goto label_23b9e8;
        case 0x23b9ecu: goto label_23b9ec;
        case 0x23b9f0u: goto label_23b9f0;
        case 0x23b9f4u: goto label_23b9f4;
        case 0x23b9f8u: goto label_23b9f8;
        case 0x23b9fcu: goto label_23b9fc;
        case 0x23ba00u: goto label_23ba00;
        case 0x23ba04u: goto label_23ba04;
        case 0x23ba08u: goto label_23ba08;
        case 0x23ba0cu: goto label_23ba0c;
        case 0x23ba10u: goto label_23ba10;
        case 0x23ba14u: goto label_23ba14;
        case 0x23ba18u: goto label_23ba18;
        case 0x23ba1cu: goto label_23ba1c;
        case 0x23ba20u: goto label_23ba20;
        case 0x23ba24u: goto label_23ba24;
        case 0x23ba28u: goto label_23ba28;
        case 0x23ba2cu: goto label_23ba2c;
        case 0x23ba30u: goto label_23ba30;
        case 0x23ba34u: goto label_23ba34;
        case 0x23ba38u: goto label_23ba38;
        case 0x23ba3cu: goto label_23ba3c;
        case 0x23ba40u: goto label_23ba40;
        case 0x23ba44u: goto label_23ba44;
        case 0x23ba48u: goto label_23ba48;
        case 0x23ba4cu: goto label_23ba4c;
        case 0x23ba50u: goto label_23ba50;
        case 0x23ba54u: goto label_23ba54;
        case 0x23ba58u: goto label_23ba58;
        case 0x23ba5cu: goto label_23ba5c;
        case 0x23ba60u: goto label_23ba60;
        case 0x23ba64u: goto label_23ba64;
        case 0x23ba68u: goto label_23ba68;
        case 0x23ba6cu: goto label_23ba6c;
        case 0x23ba70u: goto label_23ba70;
        case 0x23ba74u: goto label_23ba74;
        case 0x23ba78u: goto label_23ba78;
        case 0x23ba7cu: goto label_23ba7c;
        case 0x23ba80u: goto label_23ba80;
        case 0x23ba84u: goto label_23ba84;
        case 0x23ba88u: goto label_23ba88;
        case 0x23ba8cu: goto label_23ba8c;
        case 0x23ba90u: goto label_23ba90;
        case 0x23ba94u: goto label_23ba94;
        case 0x23ba98u: goto label_23ba98;
        case 0x23ba9cu: goto label_23ba9c;
        case 0x23baa0u: goto label_23baa0;
        case 0x23baa4u: goto label_23baa4;
        case 0x23baa8u: goto label_23baa8;
        case 0x23baacu: goto label_23baac;
        case 0x23bab0u: goto label_23bab0;
        case 0x23bab4u: goto label_23bab4;
        case 0x23bab8u: goto label_23bab8;
        case 0x23babcu: goto label_23babc;
        case 0x23bac0u: goto label_23bac0;
        case 0x23bac4u: goto label_23bac4;
        case 0x23bac8u: goto label_23bac8;
        case 0x23baccu: goto label_23bacc;
        case 0x23bad0u: goto label_23bad0;
        case 0x23bad4u: goto label_23bad4;
        case 0x23bad8u: goto label_23bad8;
        case 0x23badcu: goto label_23badc;
        case 0x23bae0u: goto label_23bae0;
        case 0x23bae4u: goto label_23bae4;
        case 0x23bae8u: goto label_23bae8;
        case 0x23baecu: goto label_23baec;
        case 0x23baf0u: goto label_23baf0;
        case 0x23baf4u: goto label_23baf4;
        case 0x23baf8u: goto label_23baf8;
        case 0x23bafcu: goto label_23bafc;
        case 0x23bb00u: goto label_23bb00;
        case 0x23bb04u: goto label_23bb04;
        case 0x23bb08u: goto label_23bb08;
        case 0x23bb0cu: goto label_23bb0c;
        case 0x23bb10u: goto label_23bb10;
        case 0x23bb14u: goto label_23bb14;
        case 0x23bb18u: goto label_23bb18;
        case 0x23bb1cu: goto label_23bb1c;
        case 0x23bb20u: goto label_23bb20;
        case 0x23bb24u: goto label_23bb24;
        case 0x23bb28u: goto label_23bb28;
        case 0x23bb2cu: goto label_23bb2c;
        case 0x23bb30u: goto label_23bb30;
        case 0x23bb34u: goto label_23bb34;
        case 0x23bb38u: goto label_23bb38;
        case 0x23bb3cu: goto label_23bb3c;
        case 0x23bb40u: goto label_23bb40;
        case 0x23bb44u: goto label_23bb44;
        case 0x23bb48u: goto label_23bb48;
        case 0x23bb4cu: goto label_23bb4c;
        case 0x23bb50u: goto label_23bb50;
        case 0x23bb54u: goto label_23bb54;
        case 0x23bb58u: goto label_23bb58;
        case 0x23bb5cu: goto label_23bb5c;
        case 0x23bb60u: goto label_23bb60;
        case 0x23bb64u: goto label_23bb64;
        case 0x23bb68u: goto label_23bb68;
        case 0x23bb6cu: goto label_23bb6c;
        case 0x23bb70u: goto label_23bb70;
        case 0x23bb74u: goto label_23bb74;
        case 0x23bb78u: goto label_23bb78;
        case 0x23bb7cu: goto label_23bb7c;
        case 0x23bb80u: goto label_23bb80;
        case 0x23bb84u: goto label_23bb84;
        case 0x23bb88u: goto label_23bb88;
        case 0x23bb8cu: goto label_23bb8c;
        case 0x23bb90u: goto label_23bb90;
        case 0x23bb94u: goto label_23bb94;
        case 0x23bb98u: goto label_23bb98;
        case 0x23bb9cu: goto label_23bb9c;
        case 0x23bba0u: goto label_23bba0;
        case 0x23bba4u: goto label_23bba4;
        case 0x23bba8u: goto label_23bba8;
        case 0x23bbacu: goto label_23bbac;
        case 0x23bbb0u: goto label_23bbb0;
        case 0x23bbb4u: goto label_23bbb4;
        case 0x23bbb8u: goto label_23bbb8;
        case 0x23bbbcu: goto label_23bbbc;
        case 0x23bbc0u: goto label_23bbc0;
        case 0x23bbc4u: goto label_23bbc4;
        case 0x23bbc8u: goto label_23bbc8;
        case 0x23bbccu: goto label_23bbcc;
        case 0x23bbd0u: goto label_23bbd0;
        case 0x23bbd4u: goto label_23bbd4;
        case 0x23bbd8u: goto label_23bbd8;
        case 0x23bbdcu: goto label_23bbdc;
        case 0x23bbe0u: goto label_23bbe0;
        case 0x23bbe4u: goto label_23bbe4;
        case 0x23bbe8u: goto label_23bbe8;
        case 0x23bbecu: goto label_23bbec;
        case 0x23bbf0u: goto label_23bbf0;
        case 0x23bbf4u: goto label_23bbf4;
        case 0x23bbf8u: goto label_23bbf8;
        case 0x23bbfcu: goto label_23bbfc;
        case 0x23bc00u: goto label_23bc00;
        case 0x23bc04u: goto label_23bc04;
        case 0x23bc08u: goto label_23bc08;
        case 0x23bc0cu: goto label_23bc0c;
        case 0x23bc10u: goto label_23bc10;
        case 0x23bc14u: goto label_23bc14;
        case 0x23bc18u: goto label_23bc18;
        case 0x23bc1cu: goto label_23bc1c;
        case 0x23bc20u: goto label_23bc20;
        case 0x23bc24u: goto label_23bc24;
        case 0x23bc28u: goto label_23bc28;
        case 0x23bc2cu: goto label_23bc2c;
        case 0x23bc30u: goto label_23bc30;
        case 0x23bc34u: goto label_23bc34;
        case 0x23bc38u: goto label_23bc38;
        case 0x23bc3cu: goto label_23bc3c;
        case 0x23bc40u: goto label_23bc40;
        case 0x23bc44u: goto label_23bc44;
        case 0x23bc48u: goto label_23bc48;
        case 0x23bc4cu: goto label_23bc4c;
        case 0x23bc50u: goto label_23bc50;
        case 0x23bc54u: goto label_23bc54;
        case 0x23bc58u: goto label_23bc58;
        case 0x23bc5cu: goto label_23bc5c;
        case 0x23bc60u: goto label_23bc60;
        case 0x23bc64u: goto label_23bc64;
        case 0x23bc68u: goto label_23bc68;
        case 0x23bc6cu: goto label_23bc6c;
        case 0x23bc70u: goto label_23bc70;
        case 0x23bc74u: goto label_23bc74;
        case 0x23bc78u: goto label_23bc78;
        case 0x23bc7cu: goto label_23bc7c;
        case 0x23bc80u: goto label_23bc80;
        case 0x23bc84u: goto label_23bc84;
        case 0x23bc88u: goto label_23bc88;
        case 0x23bc8cu: goto label_23bc8c;
        case 0x23bc90u: goto label_23bc90;
        case 0x23bc94u: goto label_23bc94;
        case 0x23bc98u: goto label_23bc98;
        case 0x23bc9cu: goto label_23bc9c;
        case 0x23bca0u: goto label_23bca0;
        case 0x23bca4u: goto label_23bca4;
        case 0x23bca8u: goto label_23bca8;
        case 0x23bcacu: goto label_23bcac;
        case 0x23bcb0u: goto label_23bcb0;
        case 0x23bcb4u: goto label_23bcb4;
        case 0x23bcb8u: goto label_23bcb8;
        case 0x23bcbcu: goto label_23bcbc;
        case 0x23bcc0u: goto label_23bcc0;
        case 0x23bcc4u: goto label_23bcc4;
        case 0x23bcc8u: goto label_23bcc8;
        case 0x23bcccu: goto label_23bccc;
        case 0x23bcd0u: goto label_23bcd0;
        case 0x23bcd4u: goto label_23bcd4;
        case 0x23bcd8u: goto label_23bcd8;
        case 0x23bcdcu: goto label_23bcdc;
        case 0x23bce0u: goto label_23bce0;
        case 0x23bce4u: goto label_23bce4;
        case 0x23bce8u: goto label_23bce8;
        case 0x23bcecu: goto label_23bcec;
        case 0x23bcf0u: goto label_23bcf0;
        case 0x23bcf4u: goto label_23bcf4;
        case 0x23bcf8u: goto label_23bcf8;
        case 0x23bcfcu: goto label_23bcfc;
        case 0x23bd00u: goto label_23bd00;
        case 0x23bd04u: goto label_23bd04;
        case 0x23bd08u: goto label_23bd08;
        case 0x23bd0cu: goto label_23bd0c;
        case 0x23bd10u: goto label_23bd10;
        case 0x23bd14u: goto label_23bd14;
        case 0x23bd18u: goto label_23bd18;
        case 0x23bd1cu: goto label_23bd1c;
        case 0x23bd20u: goto label_23bd20;
        case 0x23bd24u: goto label_23bd24;
        case 0x23bd28u: goto label_23bd28;
        case 0x23bd2cu: goto label_23bd2c;
        case 0x23bd30u: goto label_23bd30;
        case 0x23bd34u: goto label_23bd34;
        case 0x23bd38u: goto label_23bd38;
        case 0x23bd3cu: goto label_23bd3c;
        case 0x23bd40u: goto label_23bd40;
        case 0x23bd44u: goto label_23bd44;
        case 0x23bd48u: goto label_23bd48;
        case 0x23bd4cu: goto label_23bd4c;
        case 0x23bd50u: goto label_23bd50;
        case 0x23bd54u: goto label_23bd54;
        case 0x23bd58u: goto label_23bd58;
        case 0x23bd5cu: goto label_23bd5c;
        case 0x23bd60u: goto label_23bd60;
        case 0x23bd64u: goto label_23bd64;
        case 0x23bd68u: goto label_23bd68;
        case 0x23bd6cu: goto label_23bd6c;
        case 0x23bd70u: goto label_23bd70;
        case 0x23bd74u: goto label_23bd74;
        case 0x23bd78u: goto label_23bd78;
        case 0x23bd7cu: goto label_23bd7c;
        case 0x23bd80u: goto label_23bd80;
        case 0x23bd84u: goto label_23bd84;
        case 0x23bd88u: goto label_23bd88;
        case 0x23bd8cu: goto label_23bd8c;
        case 0x23bd90u: goto label_23bd90;
        case 0x23bd94u: goto label_23bd94;
        case 0x23bd98u: goto label_23bd98;
        case 0x23bd9cu: goto label_23bd9c;
        case 0x23bda0u: goto label_23bda0;
        case 0x23bda4u: goto label_23bda4;
        case 0x23bda8u: goto label_23bda8;
        case 0x23bdacu: goto label_23bdac;
        case 0x23bdb0u: goto label_23bdb0;
        case 0x23bdb4u: goto label_23bdb4;
        case 0x23bdb8u: goto label_23bdb8;
        case 0x23bdbcu: goto label_23bdbc;
        case 0x23bdc0u: goto label_23bdc0;
        case 0x23bdc4u: goto label_23bdc4;
        case 0x23bdc8u: goto label_23bdc8;
        case 0x23bdccu: goto label_23bdcc;
        case 0x23bdd0u: goto label_23bdd0;
        case 0x23bdd4u: goto label_23bdd4;
        case 0x23bdd8u: goto label_23bdd8;
        case 0x23bddcu: goto label_23bddc;
        case 0x23bde0u: goto label_23bde0;
        case 0x23bde4u: goto label_23bde4;
        case 0x23bde8u: goto label_23bde8;
        case 0x23bdecu: goto label_23bdec;
        case 0x23bdf0u: goto label_23bdf0;
        case 0x23bdf4u: goto label_23bdf4;
        case 0x23bdf8u: goto label_23bdf8;
        case 0x23bdfcu: goto label_23bdfc;
        case 0x23be00u: goto label_23be00;
        case 0x23be04u: goto label_23be04;
        case 0x23be08u: goto label_23be08;
        case 0x23be0cu: goto label_23be0c;
        case 0x23be10u: goto label_23be10;
        case 0x23be14u: goto label_23be14;
        case 0x23be18u: goto label_23be18;
        case 0x23be1cu: goto label_23be1c;
        case 0x23be20u: goto label_23be20;
        case 0x23be24u: goto label_23be24;
        case 0x23be28u: goto label_23be28;
        case 0x23be2cu: goto label_23be2c;
        case 0x23be30u: goto label_23be30;
        case 0x23be34u: goto label_23be34;
        case 0x23be38u: goto label_23be38;
        case 0x23be3cu: goto label_23be3c;
        case 0x23be40u: goto label_23be40;
        case 0x23be44u: goto label_23be44;
        case 0x23be48u: goto label_23be48;
        case 0x23be4cu: goto label_23be4c;
        case 0x23be50u: goto label_23be50;
        case 0x23be54u: goto label_23be54;
        case 0x23be58u: goto label_23be58;
        case 0x23be5cu: goto label_23be5c;
        case 0x23be60u: goto label_23be60;
        case 0x23be64u: goto label_23be64;
        case 0x23be68u: goto label_23be68;
        case 0x23be6cu: goto label_23be6c;
        case 0x23be70u: goto label_23be70;
        case 0x23be74u: goto label_23be74;
        case 0x23be78u: goto label_23be78;
        case 0x23be7cu: goto label_23be7c;
        case 0x23be80u: goto label_23be80;
        case 0x23be84u: goto label_23be84;
        case 0x23be88u: goto label_23be88;
        case 0x23be8cu: goto label_23be8c;
        case 0x23be90u: goto label_23be90;
        case 0x23be94u: goto label_23be94;
        case 0x23be98u: goto label_23be98;
        case 0x23be9cu: goto label_23be9c;
        case 0x23bea0u: goto label_23bea0;
        case 0x23bea4u: goto label_23bea4;
        case 0x23bea8u: goto label_23bea8;
        case 0x23beacu: goto label_23beac;
        case 0x23beb0u: goto label_23beb0;
        case 0x23beb4u: goto label_23beb4;
        case 0x23beb8u: goto label_23beb8;
        case 0x23bebcu: goto label_23bebc;
        case 0x23bec0u: goto label_23bec0;
        case 0x23bec4u: goto label_23bec4;
        case 0x23bec8u: goto label_23bec8;
        case 0x23beccu: goto label_23becc;
        case 0x23bed0u: goto label_23bed0;
        case 0x23bed4u: goto label_23bed4;
        case 0x23bed8u: goto label_23bed8;
        case 0x23bedcu: goto label_23bedc;
        case 0x23bee0u: goto label_23bee0;
        case 0x23bee4u: goto label_23bee4;
        case 0x23bee8u: goto label_23bee8;
        case 0x23beecu: goto label_23beec;
        case 0x23bef0u: goto label_23bef0;
        case 0x23bef4u: goto label_23bef4;
        case 0x23bef8u: goto label_23bef8;
        case 0x23befcu: goto label_23befc;
        case 0x23bf00u: goto label_23bf00;
        case 0x23bf04u: goto label_23bf04;
        case 0x23bf08u: goto label_23bf08;
        case 0x23bf0cu: goto label_23bf0c;
        case 0x23bf10u: goto label_23bf10;
        case 0x23bf14u: goto label_23bf14;
        case 0x23bf18u: goto label_23bf18;
        case 0x23bf1cu: goto label_23bf1c;
        case 0x23bf20u: goto label_23bf20;
        case 0x23bf24u: goto label_23bf24;
        case 0x23bf28u: goto label_23bf28;
        case 0x23bf2cu: goto label_23bf2c;
        case 0x23bf30u: goto label_23bf30;
        case 0x23bf34u: goto label_23bf34;
        case 0x23bf38u: goto label_23bf38;
        case 0x23bf3cu: goto label_23bf3c;
        case 0x23bf40u: goto label_23bf40;
        case 0x23bf44u: goto label_23bf44;
        case 0x23bf48u: goto label_23bf48;
        case 0x23bf4cu: goto label_23bf4c;
        case 0x23bf50u: goto label_23bf50;
        case 0x23bf54u: goto label_23bf54;
        case 0x23bf58u: goto label_23bf58;
        case 0x23bf5cu: goto label_23bf5c;
        case 0x23bf60u: goto label_23bf60;
        case 0x23bf64u: goto label_23bf64;
        case 0x23bf68u: goto label_23bf68;
        case 0x23bf6cu: goto label_23bf6c;
        case 0x23bf70u: goto label_23bf70;
        case 0x23bf74u: goto label_23bf74;
        case 0x23bf78u: goto label_23bf78;
        case 0x23bf7cu: goto label_23bf7c;
        case 0x23bf80u: goto label_23bf80;
        case 0x23bf84u: goto label_23bf84;
        case 0x23bf88u: goto label_23bf88;
        case 0x23bf8cu: goto label_23bf8c;
        case 0x23bf90u: goto label_23bf90;
        case 0x23bf94u: goto label_23bf94;
        case 0x23bf98u: goto label_23bf98;
        case 0x23bf9cu: goto label_23bf9c;
        case 0x23bfa0u: goto label_23bfa0;
        case 0x23bfa4u: goto label_23bfa4;
        case 0x23bfa8u: goto label_23bfa8;
        case 0x23bfacu: goto label_23bfac;
        case 0x23bfb0u: goto label_23bfb0;
        case 0x23bfb4u: goto label_23bfb4;
        case 0x23bfb8u: goto label_23bfb8;
        case 0x23bfbcu: goto label_23bfbc;
        case 0x23bfc0u: goto label_23bfc0;
        case 0x23bfc4u: goto label_23bfc4;
        case 0x23bfc8u: goto label_23bfc8;
        case 0x23bfccu: goto label_23bfcc;
        case 0x23bfd0u: goto label_23bfd0;
        case 0x23bfd4u: goto label_23bfd4;
        case 0x23bfd8u: goto label_23bfd8;
        case 0x23bfdcu: goto label_23bfdc;
        case 0x23bfe0u: goto label_23bfe0;
        case 0x23bfe4u: goto label_23bfe4;
        case 0x23bfe8u: goto label_23bfe8;
        case 0x23bfecu: goto label_23bfec;
        case 0x23bff0u: goto label_23bff0;
        case 0x23bff4u: goto label_23bff4;
        case 0x23bff8u: goto label_23bff8;
        case 0x23bffcu: goto label_23bffc;
        case 0x23c000u: goto label_23c000;
        case 0x23c004u: goto label_23c004;
        case 0x23c008u: goto label_23c008;
        case 0x23c00cu: goto label_23c00c;
        case 0x23c010u: goto label_23c010;
        case 0x23c014u: goto label_23c014;
        case 0x23c018u: goto label_23c018;
        case 0x23c01cu: goto label_23c01c;
        case 0x23c020u: goto label_23c020;
        case 0x23c024u: goto label_23c024;
        case 0x23c028u: goto label_23c028;
        case 0x23c02cu: goto label_23c02c;
        case 0x23c030u: goto label_23c030;
        case 0x23c034u: goto label_23c034;
        case 0x23c038u: goto label_23c038;
        case 0x23c03cu: goto label_23c03c;
        case 0x23c040u: goto label_23c040;
        case 0x23c044u: goto label_23c044;
        case 0x23c048u: goto label_23c048;
        case 0x23c04cu: goto label_23c04c;
        case 0x23c050u: goto label_23c050;
        case 0x23c054u: goto label_23c054;
        case 0x23c058u: goto label_23c058;
        case 0x23c05cu: goto label_23c05c;
        case 0x23c060u: goto label_23c060;
        case 0x23c064u: goto label_23c064;
        case 0x23c068u: goto label_23c068;
        case 0x23c06cu: goto label_23c06c;
        case 0x23c070u: goto label_23c070;
        case 0x23c074u: goto label_23c074;
        case 0x23c078u: goto label_23c078;
        case 0x23c07cu: goto label_23c07c;
        case 0x23c080u: goto label_23c080;
        case 0x23c084u: goto label_23c084;
        case 0x23c088u: goto label_23c088;
        case 0x23c08cu: goto label_23c08c;
        case 0x23c090u: goto label_23c090;
        case 0x23c094u: goto label_23c094;
        case 0x23c098u: goto label_23c098;
        case 0x23c09cu: goto label_23c09c;
        case 0x23c0a0u: goto label_23c0a0;
        case 0x23c0a4u: goto label_23c0a4;
        case 0x23c0a8u: goto label_23c0a8;
        case 0x23c0acu: goto label_23c0ac;
        case 0x23c0b0u: goto label_23c0b0;
        case 0x23c0b4u: goto label_23c0b4;
        case 0x23c0b8u: goto label_23c0b8;
        case 0x23c0bcu: goto label_23c0bc;
        case 0x23c0c0u: goto label_23c0c0;
        case 0x23c0c4u: goto label_23c0c4;
        case 0x23c0c8u: goto label_23c0c8;
        case 0x23c0ccu: goto label_23c0cc;
        case 0x23c0d0u: goto label_23c0d0;
        case 0x23c0d4u: goto label_23c0d4;
        case 0x23c0d8u: goto label_23c0d8;
        case 0x23c0dcu: goto label_23c0dc;
        case 0x23c0e0u: goto label_23c0e0;
        case 0x23c0e4u: goto label_23c0e4;
        case 0x23c0e8u: goto label_23c0e8;
        case 0x23c0ecu: goto label_23c0ec;
        case 0x23c0f0u: goto label_23c0f0;
        case 0x23c0f4u: goto label_23c0f4;
        case 0x23c0f8u: goto label_23c0f8;
        case 0x23c0fcu: goto label_23c0fc;
        case 0x23c100u: goto label_23c100;
        case 0x23c104u: goto label_23c104;
        case 0x23c108u: goto label_23c108;
        case 0x23c10cu: goto label_23c10c;
        case 0x23c110u: goto label_23c110;
        case 0x23c114u: goto label_23c114;
        case 0x23c118u: goto label_23c118;
        case 0x23c11cu: goto label_23c11c;
        case 0x23c120u: goto label_23c120;
        case 0x23c124u: goto label_23c124;
        case 0x23c128u: goto label_23c128;
        case 0x23c12cu: goto label_23c12c;
        case 0x23c130u: goto label_23c130;
        case 0x23c134u: goto label_23c134;
        case 0x23c138u: goto label_23c138;
        case 0x23c13cu: goto label_23c13c;
        case 0x23c140u: goto label_23c140;
        case 0x23c144u: goto label_23c144;
        case 0x23c148u: goto label_23c148;
        case 0x23c14cu: goto label_23c14c;
        case 0x23c150u: goto label_23c150;
        case 0x23c154u: goto label_23c154;
        case 0x23c158u: goto label_23c158;
        case 0x23c15cu: goto label_23c15c;
        case 0x23c160u: goto label_23c160;
        case 0x23c164u: goto label_23c164;
        case 0x23c168u: goto label_23c168;
        case 0x23c16cu: goto label_23c16c;
        case 0x23c170u: goto label_23c170;
        case 0x23c174u: goto label_23c174;
        case 0x23c178u: goto label_23c178;
        case 0x23c17cu: goto label_23c17c;
        case 0x23c180u: goto label_23c180;
        case 0x23c184u: goto label_23c184;
        case 0x23c188u: goto label_23c188;
        case 0x23c18cu: goto label_23c18c;
        case 0x23c190u: goto label_23c190;
        case 0x23c194u: goto label_23c194;
        case 0x23c198u: goto label_23c198;
        case 0x23c19cu: goto label_23c19c;
        case 0x23c1a0u: goto label_23c1a0;
        case 0x23c1a4u: goto label_23c1a4;
        case 0x23c1a8u: goto label_23c1a8;
        case 0x23c1acu: goto label_23c1ac;
        case 0x23c1b0u: goto label_23c1b0;
        case 0x23c1b4u: goto label_23c1b4;
        case 0x23c1b8u: goto label_23c1b8;
        case 0x23c1bcu: goto label_23c1bc;
        case 0x23c1c0u: goto label_23c1c0;
        case 0x23c1c4u: goto label_23c1c4;
        case 0x23c1c8u: goto label_23c1c8;
        case 0x23c1ccu: goto label_23c1cc;
        case 0x23c1d0u: goto label_23c1d0;
        case 0x23c1d4u: goto label_23c1d4;
        case 0x23c1d8u: goto label_23c1d8;
        case 0x23c1dcu: goto label_23c1dc;
        case 0x23c1e0u: goto label_23c1e0;
        case 0x23c1e4u: goto label_23c1e4;
        case 0x23c1e8u: goto label_23c1e8;
        case 0x23c1ecu: goto label_23c1ec;
        case 0x23c1f0u: goto label_23c1f0;
        case 0x23c1f4u: goto label_23c1f4;
        case 0x23c1f8u: goto label_23c1f8;
        case 0x23c1fcu: goto label_23c1fc;
        case 0x23c200u: goto label_23c200;
        case 0x23c204u: goto label_23c204;
        case 0x23c208u: goto label_23c208;
        case 0x23c20cu: goto label_23c20c;
        case 0x23c210u: goto label_23c210;
        case 0x23c214u: goto label_23c214;
        case 0x23c218u: goto label_23c218;
        case 0x23c21cu: goto label_23c21c;
        case 0x23c220u: goto label_23c220;
        case 0x23c224u: goto label_23c224;
        case 0x23c228u: goto label_23c228;
        case 0x23c22cu: goto label_23c22c;
        case 0x23c230u: goto label_23c230;
        case 0x23c234u: goto label_23c234;
        case 0x23c238u: goto label_23c238;
        case 0x23c23cu: goto label_23c23c;
        case 0x23c240u: goto label_23c240;
        case 0x23c244u: goto label_23c244;
        case 0x23c248u: goto label_23c248;
        case 0x23c24cu: goto label_23c24c;
        case 0x23c250u: goto label_23c250;
        case 0x23c254u: goto label_23c254;
        case 0x23c258u: goto label_23c258;
        case 0x23c25cu: goto label_23c25c;
        case 0x23c260u: goto label_23c260;
        case 0x23c264u: goto label_23c264;
        case 0x23c268u: goto label_23c268;
        case 0x23c26cu: goto label_23c26c;
        case 0x23c270u: goto label_23c270;
        case 0x23c274u: goto label_23c274;
        case 0x23c278u: goto label_23c278;
        case 0x23c27cu: goto label_23c27c;
        case 0x23c280u: goto label_23c280;
        case 0x23c284u: goto label_23c284;
        case 0x23c288u: goto label_23c288;
        case 0x23c28cu: goto label_23c28c;
        case 0x23c290u: goto label_23c290;
        case 0x23c294u: goto label_23c294;
        case 0x23c298u: goto label_23c298;
        case 0x23c29cu: goto label_23c29c;
        case 0x23c2a0u: goto label_23c2a0;
        case 0x23c2a4u: goto label_23c2a4;
        case 0x23c2a8u: goto label_23c2a8;
        case 0x23c2acu: goto label_23c2ac;
        case 0x23c2b0u: goto label_23c2b0;
        case 0x23c2b4u: goto label_23c2b4;
        case 0x23c2b8u: goto label_23c2b8;
        case 0x23c2bcu: goto label_23c2bc;
        case 0x23c2c0u: goto label_23c2c0;
        case 0x23c2c4u: goto label_23c2c4;
        case 0x23c2c8u: goto label_23c2c8;
        case 0x23c2ccu: goto label_23c2cc;
        case 0x23c2d0u: goto label_23c2d0;
        case 0x23c2d4u: goto label_23c2d4;
        case 0x23c2d8u: goto label_23c2d8;
        case 0x23c2dcu: goto label_23c2dc;
        case 0x23c2e0u: goto label_23c2e0;
        case 0x23c2e4u: goto label_23c2e4;
        case 0x23c2e8u: goto label_23c2e8;
        case 0x23c2ecu: goto label_23c2ec;
        case 0x23c2f0u: goto label_23c2f0;
        case 0x23c2f4u: goto label_23c2f4;
        case 0x23c2f8u: goto label_23c2f8;
        case 0x23c2fcu: goto label_23c2fc;
        case 0x23c300u: goto label_23c300;
        case 0x23c304u: goto label_23c304;
        case 0x23c308u: goto label_23c308;
        case 0x23c30cu: goto label_23c30c;
        case 0x23c310u: goto label_23c310;
        case 0x23c314u: goto label_23c314;
        case 0x23c318u: goto label_23c318;
        case 0x23c31cu: goto label_23c31c;
        case 0x23c320u: goto label_23c320;
        case 0x23c324u: goto label_23c324;
        case 0x23c328u: goto label_23c328;
        case 0x23c32cu: goto label_23c32c;
        case 0x23c330u: goto label_23c330;
        case 0x23c334u: goto label_23c334;
        case 0x23c338u: goto label_23c338;
        case 0x23c33cu: goto label_23c33c;
        case 0x23c340u: goto label_23c340;
        case 0x23c344u: goto label_23c344;
        case 0x23c348u: goto label_23c348;
        case 0x23c34cu: goto label_23c34c;
        case 0x23c350u: goto label_23c350;
        case 0x23c354u: goto label_23c354;
        case 0x23c358u: goto label_23c358;
        case 0x23c35cu: goto label_23c35c;
        case 0x23c360u: goto label_23c360;
        case 0x23c364u: goto label_23c364;
        case 0x23c368u: goto label_23c368;
        case 0x23c36cu: goto label_23c36c;
        case 0x23c370u: goto label_23c370;
        case 0x23c374u: goto label_23c374;
        case 0x23c378u: goto label_23c378;
        case 0x23c37cu: goto label_23c37c;
        case 0x23c380u: goto label_23c380;
        case 0x23c384u: goto label_23c384;
        case 0x23c388u: goto label_23c388;
        case 0x23c38cu: goto label_23c38c;
        case 0x23c390u: goto label_23c390;
        case 0x23c394u: goto label_23c394;
        case 0x23c398u: goto label_23c398;
        case 0x23c39cu: goto label_23c39c;
        case 0x23c3a0u: goto label_23c3a0;
        case 0x23c3a4u: goto label_23c3a4;
        case 0x23c3a8u: goto label_23c3a8;
        case 0x23c3acu: goto label_23c3ac;
        case 0x23c3b0u: goto label_23c3b0;
        case 0x23c3b4u: goto label_23c3b4;
        case 0x23c3b8u: goto label_23c3b8;
        case 0x23c3bcu: goto label_23c3bc;
        case 0x23c3c0u: goto label_23c3c0;
        case 0x23c3c4u: goto label_23c3c4;
        case 0x23c3c8u: goto label_23c3c8;
        case 0x23c3ccu: goto label_23c3cc;
        case 0x23c3d0u: goto label_23c3d0;
        case 0x23c3d4u: goto label_23c3d4;
        case 0x23c3d8u: goto label_23c3d8;
        case 0x23c3dcu: goto label_23c3dc;
        case 0x23c3e0u: goto label_23c3e0;
        case 0x23c3e4u: goto label_23c3e4;
        case 0x23c3e8u: goto label_23c3e8;
        case 0x23c3ecu: goto label_23c3ec;
        case 0x23c3f0u: goto label_23c3f0;
        case 0x23c3f4u: goto label_23c3f4;
        case 0x23c3f8u: goto label_23c3f8;
        case 0x23c3fcu: goto label_23c3fc;
        case 0x23c400u: goto label_23c400;
        case 0x23c404u: goto label_23c404;
        case 0x23c408u: goto label_23c408;
        case 0x23c40cu: goto label_23c40c;
        case 0x23c410u: goto label_23c410;
        case 0x23c414u: goto label_23c414;
        case 0x23c418u: goto label_23c418;
        case 0x23c41cu: goto label_23c41c;
        case 0x23c420u: goto label_23c420;
        case 0x23c424u: goto label_23c424;
        case 0x23c428u: goto label_23c428;
        case 0x23c42cu: goto label_23c42c;
        case 0x23c430u: goto label_23c430;
        case 0x23c434u: goto label_23c434;
        case 0x23c438u: goto label_23c438;
        case 0x23c43cu: goto label_23c43c;
        case 0x23c440u: goto label_23c440;
        case 0x23c444u: goto label_23c444;
        case 0x23c448u: goto label_23c448;
        case 0x23c44cu: goto label_23c44c;
        case 0x23c450u: goto label_23c450;
        case 0x23c454u: goto label_23c454;
        case 0x23c458u: goto label_23c458;
        case 0x23c45cu: goto label_23c45c;
        case 0x23c460u: goto label_23c460;
        case 0x23c464u: goto label_23c464;
        case 0x23c468u: goto label_23c468;
        case 0x23c46cu: goto label_23c46c;
        case 0x23c470u: goto label_23c470;
        case 0x23c474u: goto label_23c474;
        case 0x23c478u: goto label_23c478;
        case 0x23c47cu: goto label_23c47c;
        case 0x23c480u: goto label_23c480;
        case 0x23c484u: goto label_23c484;
        case 0x23c488u: goto label_23c488;
        case 0x23c48cu: goto label_23c48c;
        case 0x23c490u: goto label_23c490;
        case 0x23c494u: goto label_23c494;
        case 0x23c498u: goto label_23c498;
        case 0x23c49cu: goto label_23c49c;
        case 0x23c4a0u: goto label_23c4a0;
        case 0x23c4a4u: goto label_23c4a4;
        case 0x23c4a8u: goto label_23c4a8;
        case 0x23c4acu: goto label_23c4ac;
        case 0x23c4b0u: goto label_23c4b0;
        case 0x23c4b4u: goto label_23c4b4;
        case 0x23c4b8u: goto label_23c4b8;
        case 0x23c4bcu: goto label_23c4bc;
        case 0x23c4c0u: goto label_23c4c0;
        case 0x23c4c4u: goto label_23c4c4;
        case 0x23c4c8u: goto label_23c4c8;
        case 0x23c4ccu: goto label_23c4cc;
        case 0x23c4d0u: goto label_23c4d0;
        case 0x23c4d4u: goto label_23c4d4;
        case 0x23c4d8u: goto label_23c4d8;
        case 0x23c4dcu: goto label_23c4dc;
        case 0x23c4e0u: goto label_23c4e0;
        case 0x23c4e4u: goto label_23c4e4;
        case 0x23c4e8u: goto label_23c4e8;
        case 0x23c4ecu: goto label_23c4ec;
        case 0x23c4f0u: goto label_23c4f0;
        case 0x23c4f4u: goto label_23c4f4;
        case 0x23c4f8u: goto label_23c4f8;
        case 0x23c4fcu: goto label_23c4fc;
        case 0x23c500u: goto label_23c500;
        case 0x23c504u: goto label_23c504;
        case 0x23c508u: goto label_23c508;
        case 0x23c50cu: goto label_23c50c;
        case 0x23c510u: goto label_23c510;
        case 0x23c514u: goto label_23c514;
        case 0x23c518u: goto label_23c518;
        case 0x23c51cu: goto label_23c51c;
        case 0x23c520u: goto label_23c520;
        case 0x23c524u: goto label_23c524;
        case 0x23c528u: goto label_23c528;
        case 0x23c52cu: goto label_23c52c;
        case 0x23c530u: goto label_23c530;
        case 0x23c534u: goto label_23c534;
        case 0x23c538u: goto label_23c538;
        case 0x23c53cu: goto label_23c53c;
        case 0x23c540u: goto label_23c540;
        case 0x23c544u: goto label_23c544;
        case 0x23c548u: goto label_23c548;
        case 0x23c54cu: goto label_23c54c;
        case 0x23c550u: goto label_23c550;
        case 0x23c554u: goto label_23c554;
        case 0x23c558u: goto label_23c558;
        case 0x23c55cu: goto label_23c55c;
        case 0x23c560u: goto label_23c560;
        case 0x23c564u: goto label_23c564;
        case 0x23c568u: goto label_23c568;
        case 0x23c56cu: goto label_23c56c;
        case 0x23c570u: goto label_23c570;
        case 0x23c574u: goto label_23c574;
        case 0x23c578u: goto label_23c578;
        case 0x23c57cu: goto label_23c57c;
        case 0x23c580u: goto label_23c580;
        case 0x23c584u: goto label_23c584;
        case 0x23c588u: goto label_23c588;
        case 0x23c58cu: goto label_23c58c;
        case 0x23c590u: goto label_23c590;
        case 0x23c594u: goto label_23c594;
        case 0x23c598u: goto label_23c598;
        case 0x23c59cu: goto label_23c59c;
        case 0x23c5a0u: goto label_23c5a0;
        case 0x23c5a4u: goto label_23c5a4;
        case 0x23c5a8u: goto label_23c5a8;
        case 0x23c5acu: goto label_23c5ac;
        case 0x23c5b0u: goto label_23c5b0;
        case 0x23c5b4u: goto label_23c5b4;
        case 0x23c5b8u: goto label_23c5b8;
        case 0x23c5bcu: goto label_23c5bc;
        case 0x23c5c0u: goto label_23c5c0;
        case 0x23c5c4u: goto label_23c5c4;
        case 0x23c5c8u: goto label_23c5c8;
        case 0x23c5ccu: goto label_23c5cc;
        case 0x23c5d0u: goto label_23c5d0;
        case 0x23c5d4u: goto label_23c5d4;
        case 0x23c5d8u: goto label_23c5d8;
        case 0x23c5dcu: goto label_23c5dc;
        case 0x23c5e0u: goto label_23c5e0;
        case 0x23c5e4u: goto label_23c5e4;
        case 0x23c5e8u: goto label_23c5e8;
        case 0x23c5ecu: goto label_23c5ec;
        case 0x23c5f0u: goto label_23c5f0;
        case 0x23c5f4u: goto label_23c5f4;
        case 0x23c5f8u: goto label_23c5f8;
        case 0x23c5fcu: goto label_23c5fc;
        case 0x23c600u: goto label_23c600;
        case 0x23c604u: goto label_23c604;
        case 0x23c608u: goto label_23c608;
        case 0x23c60cu: goto label_23c60c;
        case 0x23c610u: goto label_23c610;
        case 0x23c614u: goto label_23c614;
        case 0x23c618u: goto label_23c618;
        case 0x23c61cu: goto label_23c61c;
        case 0x23c620u: goto label_23c620;
        case 0x23c624u: goto label_23c624;
        case 0x23c628u: goto label_23c628;
        case 0x23c62cu: goto label_23c62c;
        case 0x23c630u: goto label_23c630;
        case 0x23c634u: goto label_23c634;
        case 0x23c638u: goto label_23c638;
        case 0x23c63cu: goto label_23c63c;
        case 0x23c640u: goto label_23c640;
        case 0x23c644u: goto label_23c644;
        case 0x23c648u: goto label_23c648;
        case 0x23c64cu: goto label_23c64c;
        case 0x23c650u: goto label_23c650;
        case 0x23c654u: goto label_23c654;
        case 0x23c658u: goto label_23c658;
        case 0x23c65cu: goto label_23c65c;
        case 0x23c660u: goto label_23c660;
        case 0x23c664u: goto label_23c664;
        case 0x23c668u: goto label_23c668;
        case 0x23c66cu: goto label_23c66c;
        case 0x23c670u: goto label_23c670;
        case 0x23c674u: goto label_23c674;
        case 0x23c678u: goto label_23c678;
        case 0x23c67cu: goto label_23c67c;
        case 0x23c680u: goto label_23c680;
        case 0x23c684u: goto label_23c684;
        case 0x23c688u: goto label_23c688;
        case 0x23c68cu: goto label_23c68c;
        case 0x23c690u: goto label_23c690;
        case 0x23c694u: goto label_23c694;
        case 0x23c698u: goto label_23c698;
        case 0x23c69cu: goto label_23c69c;
        case 0x23c6a0u: goto label_23c6a0;
        case 0x23c6a4u: goto label_23c6a4;
        case 0x23c6a8u: goto label_23c6a8;
        case 0x23c6acu: goto label_23c6ac;
        case 0x23c6b0u: goto label_23c6b0;
        case 0x23c6b4u: goto label_23c6b4;
        case 0x23c6b8u: goto label_23c6b8;
        case 0x23c6bcu: goto label_23c6bc;
        case 0x23c6c0u: goto label_23c6c0;
        case 0x23c6c4u: goto label_23c6c4;
        case 0x23c6c8u: goto label_23c6c8;
        case 0x23c6ccu: goto label_23c6cc;
        case 0x23c6d0u: goto label_23c6d0;
        case 0x23c6d4u: goto label_23c6d4;
        case 0x23c6d8u: goto label_23c6d8;
        case 0x23c6dcu: goto label_23c6dc;
        case 0x23c6e0u: goto label_23c6e0;
        case 0x23c6e4u: goto label_23c6e4;
        case 0x23c6e8u: goto label_23c6e8;
        case 0x23c6ecu: goto label_23c6ec;
        case 0x23c6f0u: goto label_23c6f0;
        case 0x23c6f4u: goto label_23c6f4;
        case 0x23c6f8u: goto label_23c6f8;
        case 0x23c6fcu: goto label_23c6fc;
        case 0x23c700u: goto label_23c700;
        case 0x23c704u: goto label_23c704;
        case 0x23c708u: goto label_23c708;
        case 0x23c70cu: goto label_23c70c;
        case 0x23c710u: goto label_23c710;
        case 0x23c714u: goto label_23c714;
        case 0x23c718u: goto label_23c718;
        case 0x23c71cu: goto label_23c71c;
        case 0x23c720u: goto label_23c720;
        case 0x23c724u: goto label_23c724;
        case 0x23c728u: goto label_23c728;
        case 0x23c72cu: goto label_23c72c;
        case 0x23c730u: goto label_23c730;
        case 0x23c734u: goto label_23c734;
        case 0x23c738u: goto label_23c738;
        case 0x23c73cu: goto label_23c73c;
        case 0x23c740u: goto label_23c740;
        case 0x23c744u: goto label_23c744;
        case 0x23c748u: goto label_23c748;
        case 0x23c74cu: goto label_23c74c;
        case 0x23c750u: goto label_23c750;
        case 0x23c754u: goto label_23c754;
        case 0x23c758u: goto label_23c758;
        case 0x23c75cu: goto label_23c75c;
        case 0x23c760u: goto label_23c760;
        case 0x23c764u: goto label_23c764;
        case 0x23c768u: goto label_23c768;
        case 0x23c76cu: goto label_23c76c;
        case 0x23c770u: goto label_23c770;
        case 0x23c774u: goto label_23c774;
        case 0x23c778u: goto label_23c778;
        case 0x23c77cu: goto label_23c77c;
        case 0x23c780u: goto label_23c780;
        case 0x23c784u: goto label_23c784;
        case 0x23c788u: goto label_23c788;
        case 0x23c78cu: goto label_23c78c;
        case 0x23c790u: goto label_23c790;
        case 0x23c794u: goto label_23c794;
        case 0x23c798u: goto label_23c798;
        case 0x23c79cu: goto label_23c79c;
        case 0x23c7a0u: goto label_23c7a0;
        case 0x23c7a4u: goto label_23c7a4;
        case 0x23c7a8u: goto label_23c7a8;
        case 0x23c7acu: goto label_23c7ac;
        case 0x23c7b0u: goto label_23c7b0;
        case 0x23c7b4u: goto label_23c7b4;
        case 0x23c7b8u: goto label_23c7b8;
        case 0x23c7bcu: goto label_23c7bc;
        case 0x23c7c0u: goto label_23c7c0;
        case 0x23c7c4u: goto label_23c7c4;
        case 0x23c7c8u: goto label_23c7c8;
        case 0x23c7ccu: goto label_23c7cc;
        case 0x23c7d0u: goto label_23c7d0;
        case 0x23c7d4u: goto label_23c7d4;
        case 0x23c7d8u: goto label_23c7d8;
        case 0x23c7dcu: goto label_23c7dc;
        case 0x23c7e0u: goto label_23c7e0;
        case 0x23c7e4u: goto label_23c7e4;
        case 0x23c7e8u: goto label_23c7e8;
        case 0x23c7ecu: goto label_23c7ec;
        case 0x23c7f0u: goto label_23c7f0;
        case 0x23c7f4u: goto label_23c7f4;
        case 0x23c7f8u: goto label_23c7f8;
        case 0x23c7fcu: goto label_23c7fc;
        case 0x23c800u: goto label_23c800;
        case 0x23c804u: goto label_23c804;
        case 0x23c808u: goto label_23c808;
        case 0x23c80cu: goto label_23c80c;
        case 0x23c810u: goto label_23c810;
        case 0x23c814u: goto label_23c814;
        case 0x23c818u: goto label_23c818;
        case 0x23c81cu: goto label_23c81c;
        case 0x23c820u: goto label_23c820;
        case 0x23c824u: goto label_23c824;
        case 0x23c828u: goto label_23c828;
        case 0x23c82cu: goto label_23c82c;
        case 0x23c830u: goto label_23c830;
        case 0x23c834u: goto label_23c834;
        case 0x23c838u: goto label_23c838;
        case 0x23c83cu: goto label_23c83c;
        case 0x23c840u: goto label_23c840;
        case 0x23c844u: goto label_23c844;
        case 0x23c848u: goto label_23c848;
        case 0x23c84cu: goto label_23c84c;
        case 0x23c850u: goto label_23c850;
        case 0x23c854u: goto label_23c854;
        case 0x23c858u: goto label_23c858;
        case 0x23c85cu: goto label_23c85c;
        case 0x23c860u: goto label_23c860;
        case 0x23c864u: goto label_23c864;
        case 0x23c868u: goto label_23c868;
        case 0x23c86cu: goto label_23c86c;
        case 0x23c870u: goto label_23c870;
        case 0x23c874u: goto label_23c874;
        case 0x23c878u: goto label_23c878;
        case 0x23c87cu: goto label_23c87c;
        case 0x23c880u: goto label_23c880;
        case 0x23c884u: goto label_23c884;
        case 0x23c888u: goto label_23c888;
        case 0x23c88cu: goto label_23c88c;
        case 0x23c890u: goto label_23c890;
        case 0x23c894u: goto label_23c894;
        case 0x23c898u: goto label_23c898;
        case 0x23c89cu: goto label_23c89c;
        case 0x23c8a0u: goto label_23c8a0;
        case 0x23c8a4u: goto label_23c8a4;
        case 0x23c8a8u: goto label_23c8a8;
        case 0x23c8acu: goto label_23c8ac;
        case 0x23c8b0u: goto label_23c8b0;
        case 0x23c8b4u: goto label_23c8b4;
        case 0x23c8b8u: goto label_23c8b8;
        case 0x23c8bcu: goto label_23c8bc;
        case 0x23c8c0u: goto label_23c8c0;
        case 0x23c8c4u: goto label_23c8c4;
        case 0x23c8c8u: goto label_23c8c8;
        case 0x23c8ccu: goto label_23c8cc;
        case 0x23c8d0u: goto label_23c8d0;
        case 0x23c8d4u: goto label_23c8d4;
        case 0x23c8d8u: goto label_23c8d8;
        case 0x23c8dcu: goto label_23c8dc;
        case 0x23c8e0u: goto label_23c8e0;
        case 0x23c8e4u: goto label_23c8e4;
        case 0x23c8e8u: goto label_23c8e8;
        case 0x23c8ecu: goto label_23c8ec;
        case 0x23c8f0u: goto label_23c8f0;
        case 0x23c8f4u: goto label_23c8f4;
        case 0x23c8f8u: goto label_23c8f8;
        case 0x23c8fcu: goto label_23c8fc;
        case 0x23c900u: goto label_23c900;
        case 0x23c904u: goto label_23c904;
        case 0x23c908u: goto label_23c908;
        case 0x23c90cu: goto label_23c90c;
        case 0x23c910u: goto label_23c910;
        case 0x23c914u: goto label_23c914;
        case 0x23c918u: goto label_23c918;
        case 0x23c91cu: goto label_23c91c;
        case 0x23c920u: goto label_23c920;
        case 0x23c924u: goto label_23c924;
        case 0x23c928u: goto label_23c928;
        case 0x23c92cu: goto label_23c92c;
        case 0x23c930u: goto label_23c930;
        case 0x23c934u: goto label_23c934;
        case 0x23c938u: goto label_23c938;
        case 0x23c93cu: goto label_23c93c;
        case 0x23c940u: goto label_23c940;
        case 0x23c944u: goto label_23c944;
        case 0x23c948u: goto label_23c948;
        case 0x23c94cu: goto label_23c94c;
        case 0x23c950u: goto label_23c950;
        case 0x23c954u: goto label_23c954;
        case 0x23c958u: goto label_23c958;
        case 0x23c95cu: goto label_23c95c;
        case 0x23c960u: goto label_23c960;
        case 0x23c964u: goto label_23c964;
        case 0x23c968u: goto label_23c968;
        case 0x23c96cu: goto label_23c96c;
        case 0x23c970u: goto label_23c970;
        case 0x23c974u: goto label_23c974;
        case 0x23c978u: goto label_23c978;
        case 0x23c97cu: goto label_23c97c;
        case 0x23c980u: goto label_23c980;
        case 0x23c984u: goto label_23c984;
        case 0x23c988u: goto label_23c988;
        case 0x23c98cu: goto label_23c98c;
        case 0x23c990u: goto label_23c990;
        case 0x23c994u: goto label_23c994;
        case 0x23c998u: goto label_23c998;
        case 0x23c99cu: goto label_23c99c;
        case 0x23c9a0u: goto label_23c9a0;
        case 0x23c9a4u: goto label_23c9a4;
        case 0x23c9a8u: goto label_23c9a8;
        case 0x23c9acu: goto label_23c9ac;
        case 0x23c9b0u: goto label_23c9b0;
        case 0x23c9b4u: goto label_23c9b4;
        default: break;
    }

    ctx->pc = 0x23aeb0u;

label_23aeb0:
    // 0x23aeb0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x23aeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_23aeb4:
    // 0x23aeb4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23aeb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23aeb8:
    // 0x23aeb8: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x23aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950256)));
label_23aebc:
    // 0x23aebc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23aebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23aec0:
    // 0x23aec0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23aec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23aec4:
    // 0x23aec4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23aec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23aec8:
    // 0x23aec8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23aec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23aecc:
    // 0x23aecc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x23aeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_23aed0:
    // 0x23aed0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23aed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_23aed4:
    // 0x23aed4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23aed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_23aed8:
    // 0x23aed8: 0x144006ae  bnez        $v0, . + 4 + (0x6AE << 2)
label_23aedc:
    if (ctx->pc == 0x23AEDCu) {
        ctx->pc = 0x23AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AED8u;
        // 0x23aedc: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AEE0u;
        goto label_23aee0;
    }
    ctx->pc = 0x23AED8u;
    {
        const bool branch_taken_0x23aed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AED8u;
        // 0x23aedc: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aed8) {
            ctx->pc = 0x23C994u;
            goto label_23c994;
        }
    }
    ctx->pc = 0x23AEE0u;
label_23aee0:
    // 0x23aee0: 0x8e24036c  lw          $a0, 0x36C($s1)
    ctx->pc = 0x23aee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_23aee4:
    // 0x23aee4: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x23aee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_23aee8:
    // 0x23aee8: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x23aee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_23aeec:
    // 0x23aeec: 0x104306a9  beq         $v0, $v1, . + 4 + (0x6A9 << 2)
label_23aef0:
    if (ctx->pc == 0x23AEF0u) {
        ctx->pc = 0x23AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AEECu;
        // 0x23aef0: 0x30820400  andi        $v0, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AEF4u;
        goto label_23aef4;
    }
    ctx->pc = 0x23AEECu;
    {
        const bool branch_taken_0x23aeec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AEECu;
        // 0x23aef0: 0x30820400  andi        $v0, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aeec) {
            ctx->pc = 0x23C994u;
            goto label_23c994;
        }
    }
    ctx->pc = 0x23AEF4u;
label_23aef4:
    // 0x23aef4: 0x544002d5  bnel        $v0, $zero, . + 4 + (0x2D5 << 2)
label_23aef8:
    if (ctx->pc == 0x23AEF8u) {
        ctx->pc = 0x23AEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AEF4u;
        // 0x23aef8: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AEFCu;
        goto label_23aefc;
    }
    ctx->pc = 0x23AEF4u;
    {
        const bool branch_taken_0x23aef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23aef4) {
            ctx->pc = 0x23AEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AEF4u;
            // 0x23aef8: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BA4Cu;
            goto label_23ba4c;
        }
    }
    ctx->pc = 0x23AEFCu;
label_23aefc:
    // 0x23aefc: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_23af00:
    // 0x23af00: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23af00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23af04:
    // 0x23af04: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_23af08:
    if (ctx->pc == 0x23AF08u) {
        ctx->pc = 0x23AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF04u;
        // 0x23af08: 0x8e23041c  lw          $v1, 0x41C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF0Cu;
        goto label_23af0c;
    }
    ctx->pc = 0x23AF04u;
    {
        const bool branch_taken_0x23af04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF04u;
        // 0x23af08: 0x8e23041c  lw          $v1, 0x41C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af04) {
            ctx->pc = 0x23AF30u;
            goto label_23af30;
        }
    }
    ctx->pc = 0x23AF0Cu;
label_23af0c:
    // 0x23af0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23af10:
    // 0x23af10: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_23af14:
    if (ctx->pc == 0x23AF14u) {
        ctx->pc = 0x23AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF10u;
        // 0x23af14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF18u;
        goto label_23af18;
    }
    ctx->pc = 0x23AF10u;
    {
        const bool branch_taken_0x23af10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF10u;
        // 0x23af14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af10) {
            ctx->pc = 0x23AF34u;
            goto label_23af34;
        }
    }
    ctx->pc = 0x23AF18u;
label_23af18:
    // 0x23af18: 0x8e220418  lw          $v0, 0x418($s1)
    ctx->pc = 0x23af18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_23af1c:
    // 0x23af1c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23af20:
    if (ctx->pc == 0x23AF20u) {
        ctx->pc = 0x23AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF1Cu;
        // 0x23af20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF24u;
        goto label_23af24;
    }
    ctx->pc = 0x23AF1Cu;
    {
        const bool branch_taken_0x23af1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF1Cu;
        // 0x23af20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af1c) {
            ctx->pc = 0x23AF34u;
            goto label_23af34;
        }
    }
    ctx->pc = 0x23AF24u;
label_23af24:
    // 0x23af24: 0xae230420  sw          $v1, 0x420($s1)
    ctx->pc = 0x23af24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1056), GPR_U32(ctx, 3));
label_23af28:
    // 0x23af28: 0xae22041c  sw          $v0, 0x41C($s1)
    ctx->pc = 0x23af28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 2));
label_23af2c:
    // 0x23af2c: 0x8e23041c  lw          $v1, 0x41C($s1)
    ctx->pc = 0x23af2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1052)));
label_23af30:
    // 0x23af30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23af30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23af34:
    // 0x23af34: 0x106401bf  beq         $v1, $a0, . + 4 + (0x1BF << 2)
label_23af38:
    if (ctx->pc == 0x23AF38u) {
        ctx->pc = 0x23AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF34u;
        // 0x23af38: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF3Cu;
        goto label_23af3c;
    }
    ctx->pc = 0x23AF34u;
    {
        const bool branch_taken_0x23af34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x23AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF34u;
        // 0x23af38: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af34) {
            ctx->pc = 0x23B634u;
            goto label_23b634;
        }
    }
    ctx->pc = 0x23AF3Cu;
label_23af3c:
    // 0x23af3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23af40:
    if (ctx->pc == 0x23AF40u) {
        ctx->pc = 0x23AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF3Cu;
        // 0x23af40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF44u;
        goto label_23af44;
    }
    ctx->pc = 0x23AF3Cu;
    {
        const bool branch_taken_0x23af3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF3Cu;
        // 0x23af40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af3c) {
            ctx->pc = 0x23AF54u;
            goto label_23af54;
        }
    }
    ctx->pc = 0x23AF44u;
label_23af44:
    // 0x23af44: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_23af48:
    if (ctx->pc == 0x23AF48u) {
        ctx->pc = 0x23AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF44u;
        // 0x23af48: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF4Cu;
        goto label_23af4c;
    }
    ctx->pc = 0x23AF44u;
    {
        const bool branch_taken_0x23af44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23af44) {
            ctx->pc = 0x23AF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AF44u;
            // 0x23af48: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AF6Cu;
            goto label_23af6c;
        }
    }
    ctx->pc = 0x23AF4Cu;
label_23af4c:
    // 0x23af4c: 0x10000249  b           . + 4 + (0x249 << 2)
label_23af50:
    if (ctx->pc == 0x23AF50u) {
        ctx->pc = 0x23AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF4Cu;
        // 0x23af50: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF54u;
        goto label_23af54;
    }
    ctx->pc = 0x23AF4Cu;
    {
        const bool branch_taken_0x23af4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF4Cu;
        // 0x23af50: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af4c) {
            ctx->pc = 0x23B874u;
            goto label_23b874;
        }
    }
    ctx->pc = 0x23AF54u;
label_23af54:
    // 0x23af54: 0x1062020d  beq         $v1, $v0, . + 4 + (0x20D << 2)
label_23af58:
    if (ctx->pc == 0x23AF58u) {
        ctx->pc = 0x23AF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF54u;
        // 0x23af58: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF5Cu;
        goto label_23af5c;
    }
    ctx->pc = 0x23AF54u;
    {
        const bool branch_taken_0x23af54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23AF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF54u;
        // 0x23af58: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af54) {
            ctx->pc = 0x23B78Cu;
            goto label_23b78c;
        }
    }
    ctx->pc = 0x23AF5Cu;
label_23af5c:
    // 0x23af5c: 0x50620239  beql        $v1, $v0, . + 4 + (0x239 << 2)
label_23af60:
    if (ctx->pc == 0x23AF60u) {
        ctx->pc = 0x23AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF5Cu;
        // 0x23af60: 0x8e220418  lw          $v0, 0x418($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF64u;
        goto label_23af64;
    }
    ctx->pc = 0x23AF5Cu;
    {
        const bool branch_taken_0x23af5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23af5c) {
            ctx->pc = 0x23AF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AF5Cu;
            // 0x23af60: 0x8e220418  lw          $v0, 0x418($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B844u;
            goto label_23b844;
        }
    }
    ctx->pc = 0x23AF64u;
label_23af64:
    // 0x23af64: 0x10000243  b           . + 4 + (0x243 << 2)
label_23af68:
    if (ctx->pc == 0x23AF68u) {
        ctx->pc = 0x23AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF64u;
        // 0x23af68: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF6Cu;
        goto label_23af6c;
    }
    ctx->pc = 0x23AF64u;
    {
        const bool branch_taken_0x23af64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF64u;
        // 0x23af68: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af64) {
            ctx->pc = 0x23B874u;
            goto label_23b874;
        }
    }
    ctx->pc = 0x23AF6Cu;
label_23af6c:
    // 0x23af6c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23af6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23af70:
    // 0x23af70: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_23af74:
    if (ctx->pc == 0x23AF74u) {
        ctx->pc = 0x23AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF70u;
        // 0x23af74: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF78u;
        goto label_23af78;
    }
    ctx->pc = 0x23AF70u;
    {
        const bool branch_taken_0x23af70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF70u;
        // 0x23af74: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af70) {
            ctx->pc = 0x23AFD0u;
            goto label_23afd0;
        }
    }
    ctx->pc = 0x23AF78u;
label_23af78:
    // 0x23af78: 0x8e2211d8  lw          $v0, 0x11D8($s1)
    ctx->pc = 0x23af78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4568)));
label_23af7c:
    // 0x23af7c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_23af80:
    if (ctx->pc == 0x23AF80u) {
        ctx->pc = 0x23AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF7Cu;
        // 0x23af80: 0x8e230790  lw          $v1, 0x790($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1936)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF84u;
        goto label_23af84;
    }
    ctx->pc = 0x23AF7Cu;
    {
        const bool branch_taken_0x23af7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23af7c) {
            ctx->pc = 0x23AF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AF7Cu;
            // 0x23af80: 0x8e230790  lw          $v1, 0x790($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1936)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AFD4u;
            goto label_23afd4;
        }
    }
    ctx->pc = 0x23AF84u;
label_23af84:
    // 0x23af84: 0xc6200524  lwc1        $f0, 0x524($s1)
    ctx->pc = 0x23af84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23af88:
    // 0x23af88: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x23af88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_23af8c:
    // 0x23af8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23af8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23af90:
    // 0x23af90: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x23af90u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_23af94:
    // 0x23af94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23af94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23af98:
    // 0x23af98: 0x0  nop
    ctx->pc = 0x23af98u;
    // NOP
label_23af9c:
    // 0x23af9c: 0x45020066  bc1fl       . + 4 + (0x66 << 2)
label_23afa0:
    if (ctx->pc == 0x23AFA0u) {
        ctx->pc = 0x23AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF9Cu;
        // 0x23afa0: 0x9222047d  lbu         $v0, 0x47D($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AFA4u;
        goto label_23afa4;
    }
    ctx->pc = 0x23AF9Cu;
    {
        const bool branch_taken_0x23af9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23af9c) {
            ctx->pc = 0x23AFA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AF9Cu;
            // 0x23afa0: 0x9222047d  lbu         $v0, 0x47D($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B138u;
            goto label_23b138;
        }
    }
    ctx->pc = 0x23AFA4u;
label_23afa4:
    // 0x23afa4: 0xc6200528  lwc1        $f0, 0x528($s1)
    ctx->pc = 0x23afa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23afa8:
    // 0x23afa8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x23afa8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_23afac:
    // 0x23afac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23afacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23afb0:
    // 0x23afb0: 0x0  nop
    ctx->pc = 0x23afb0u;
    // NOP
label_23afb4:
    // 0x23afb4: 0x45020060  bc1fl       . + 4 + (0x60 << 2)
label_23afb8:
    if (ctx->pc == 0x23AFB8u) {
        ctx->pc = 0x23AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AFB4u;
        // 0x23afb8: 0x9222047d  lbu         $v0, 0x47D($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AFBCu;
        goto label_23afbc;
    }
    ctx->pc = 0x23AFB4u;
    {
        const bool branch_taken_0x23afb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23afb4) {
            ctx->pc = 0x23AFB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AFB4u;
            // 0x23afb8: 0x9222047d  lbu         $v0, 0x47D($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B138u;
            goto label_23b138;
        }
    }
    ctx->pc = 0x23AFBCu;
label_23afbc:
    // 0x23afbc: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x23afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_23afc0:
    // 0x23afc0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23afc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23afc4:
    // 0x23afc4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23afc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_23afc8:
    // 0x23afc8: 0x1000005a  b           . + 4 + (0x5A << 2)
label_23afcc:
    if (ctx->pc == 0x23AFCCu) {
        ctx->pc = 0x23AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AFC8u;
        // 0x23afcc: 0x2980b  movn        $s3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AFD0u;
        goto label_23afd0;
    }
    ctx->pc = 0x23AFC8u;
    {
        const bool branch_taken_0x23afc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AFC8u;
        // 0x23afcc: 0x2980b  movn        $s3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23afc8) {
            ctx->pc = 0x23B134u;
            goto label_23b134;
        }
    }
    ctx->pc = 0x23AFD0u;
label_23afd0:
    // 0x23afd0: 0x8e230790  lw          $v1, 0x790($s1)
    ctx->pc = 0x23afd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1936)));
label_23afd4:
    // 0x23afd4: 0x2402080d  addiu       $v0, $zero, 0x80D
    ctx->pc = 0x23afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
label_23afd8:
    // 0x23afd8: 0x54620056  bnel        $v1, $v0, . + 4 + (0x56 << 2)
label_23afdc:
    if (ctx->pc == 0x23AFDCu) {
        ctx->pc = 0x23AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AFD8u;
        // 0x23afdc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AFE0u;
        goto label_23afe0;
    }
    ctx->pc = 0x23AFD8u;
    {
        const bool branch_taken_0x23afd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23afd8) {
            ctx->pc = 0x23AFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AFD8u;
            // 0x23afdc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B134u;
            goto label_23b134;
        }
    }
    ctx->pc = 0x23AFE0u;
label_23afe0:
    // 0x23afe0: 0xc6200524  lwc1        $f0, 0x524($s1)
    ctx->pc = 0x23afe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23afe4:
    // 0x23afe4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x23afe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23afe8:
    // 0x23afe8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x23afe8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_23afec:
    // 0x23afec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23afecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23aff0:
    // 0x23aff0: 0x0  nop
    ctx->pc = 0x23aff0u;
    // NOP
label_23aff4:
    // 0x23aff4: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
label_23aff8:
    if (ctx->pc == 0x23AFF8u) {
        ctx->pc = 0x23AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AFF4u;
        // 0x23aff8: 0xc62103a0  lwc1        $f1, 0x3A0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AFFCu;
        goto label_23affc;
    }
    ctx->pc = 0x23AFF4u;
    {
        const bool branch_taken_0x23aff4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23aff4) {
            ctx->pc = 0x23AFF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AFF4u;
            // 0x23aff8: 0xc62103a0  lwc1        $f1, 0x3A0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B064u;
            goto label_23b064;
        }
    }
    ctx->pc = 0x23AFFCu;
label_23affc:
    // 0x23affc: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23affcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_23b000:
    // 0x23b000: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23b000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23b004:
    // 0x23b004: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_23b008:
    if (ctx->pc == 0x23B008u) {
        ctx->pc = 0x23B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B004u;
        // 0x23b008: 0xc62003a0  lwc1        $f0, 0x3A0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B00Cu;
        goto label_23b00c;
    }
    ctx->pc = 0x23B004u;
    {
        const bool branch_taken_0x23b004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b004) {
            ctx->pc = 0x23B008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B004u;
            // 0x23b008: 0xc62003a0  lwc1        $f0, 0x3A0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B034u;
            goto label_23b034;
        }
    }
    ctx->pc = 0x23B00Cu;
label_23b00c:
    // 0x23b00c: 0x8e2211d8  lw          $v0, 0x11D8($s1)
    ctx->pc = 0x23b00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4568)));
label_23b010:
    // 0x23b010: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23b014:
    if (ctx->pc == 0x23B014u) {
        ctx->pc = 0x23B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B010u;
        // 0x23b014: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B018u;
        goto label_23b018;
    }
    ctx->pc = 0x23B010u;
    {
        const bool branch_taken_0x23b010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B010u;
        // 0x23b014: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b010) {
            ctx->pc = 0x23B028u;
            goto label_23b028;
        }
    }
    ctx->pc = 0x23B018u;
label_23b018:
    // 0x23b018: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x23b018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_23b01c:
    // 0x23b01c: 0x8c62b958  lw          $v0, -0x46A8($v1)
    ctx->pc = 0x23b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949208)));
label_23b020:
    // 0x23b020: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x23b020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_23b024:
    // 0x23b024: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x23b024u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23b028:
    // 0x23b028: 0x50600042  beql        $v1, $zero, . + 4 + (0x42 << 2)
label_23b02c:
    if (ctx->pc == 0x23B02Cu) {
        ctx->pc = 0x23B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B028u;
        // 0x23b02c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B030u;
        goto label_23b030;
    }
    ctx->pc = 0x23B028u;
    {
        const bool branch_taken_0x23b028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b028) {
            ctx->pc = 0x23B02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B028u;
            // 0x23b02c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B134u;
            goto label_23b134;
        }
    }
    ctx->pc = 0x23B030u;
label_23b030:
    // 0x23b030: 0xc62003a0  lwc1        $f0, 0x3A0($s1)
    ctx->pc = 0x23b030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23b034:
    // 0x23b034: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x23b034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_23b038:
    // 0x23b038: 0xc44196bc  lwc1        $f1, -0x6944($v0)
    ctx->pc = 0x23b038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23b03c:
    // 0x23b03c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x23b03cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_23b040:
    // 0x23b040: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23b040u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23b044:
    // 0x23b044: 0x0  nop
    ctx->pc = 0x23b044u;
    // NOP
label_23b048:
    // 0x23b048: 0x4503003a  bc1tl       . + 4 + (0x3A << 2)
label_23b04c:
    if (ctx->pc == 0x23B04Cu) {
        ctx->pc = 0x23B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B048u;
        // 0x23b04c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B050u;
        goto label_23b050;
    }
    ctx->pc = 0x23B048u;
    {
        const bool branch_taken_0x23b048 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b048) {
            ctx->pc = 0x23B04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B048u;
            // 0x23b04c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B134u;
            goto label_23b134;
        }
    }
    ctx->pc = 0x23B050u;
label_23b050:
    // 0x23b050: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x23b050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_23b054:
    // 0x23b054: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x23b054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_23b058:
    // 0x23b058: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
label_23b05c:
    if (ctx->pc == 0x23B05Cu) {
        ctx->pc = 0x23B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B058u;
        // 0x23b05c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B060u;
        goto label_23b060;
    }
    ctx->pc = 0x23B058u;
    {
        const bool branch_taken_0x23b058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b058) {
            ctx->pc = 0x23B05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B058u;
            // 0x23b05c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B134u;
            goto label_23b134;
        }
    }
    ctx->pc = 0x23B060u;
label_23b060:
    // 0x23b060: 0xc62103a0  lwc1        $f1, 0x3A0($s1)
    ctx->pc = 0x23b060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23b064:
    // 0x23b064: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23b068:
    // 0x23b068: 0x0  nop
    ctx->pc = 0x23b068u;
    // NOP
label_23b06c:
    // 0x23b06c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x23b06cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23b070:
    // 0x23b070: 0x0  nop
    ctx->pc = 0x23b070u;
    // NOP
label_23b074:
    // 0x23b074: 0x45030030  bc1tl       . + 4 + (0x30 << 2)
label_23b078:
    if (ctx->pc == 0x23B078u) {
        ctx->pc = 0x23B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B074u;
        // 0x23b078: 0x9222047d  lbu         $v0, 0x47D($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B07Cu;
        goto label_23b07c;
    }
    ctx->pc = 0x23B074u;
    {
        const bool branch_taken_0x23b074 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b074) {
            ctx->pc = 0x23B078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B074u;
            // 0x23b078: 0x9222047d  lbu         $v0, 0x47D($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B138u;
            goto label_23b138;
        }
    }
    ctx->pc = 0x23B07Cu;
label_23b07c:
    // 0x23b07c: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x23b07cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b080:
    // 0x23b080: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x23b080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_23b084:
    // 0x23b084: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x23b084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_23b088:
    // 0x23b088: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23b088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_23b08c:
    // 0x23b08c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_23b090:
    if (ctx->pc == 0x23B090u) {
        ctx->pc = 0x23B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B08Cu;
        // 0x23b090: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B094u;
        goto label_23b094;
    }
    ctx->pc = 0x23B08Cu;
    {
        const bool branch_taken_0x23b08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B08Cu;
        // 0x23b090: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b08c) {
            ctx->pc = 0x23B0C8u;
            goto label_23b0c8;
        }
    }
    ctx->pc = 0x23B094u;
label_23b094:
    // 0x23b094: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x23b094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_23b098:
    // 0x23b098: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_23b09c:
    if (ctx->pc == 0x23B09Cu) {
        ctx->pc = 0x23B09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B098u;
        // 0x23b09c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B0A0u;
        goto label_23b0a0;
    }
    ctx->pc = 0x23B098u;
    {
        const bool branch_taken_0x23b098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23b098) {
            ctx->pc = 0x23B09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B098u;
            // 0x23b09c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B0CCu;
            goto label_23b0cc;
        }
    }
    ctx->pc = 0x23B0A0u;
label_23b0a0:
    // 0x23b0a0: 0xc0924a8  jal         func_2492A0
label_23b0a4:
    if (ctx->pc == 0x23B0A4u) {
        ctx->pc = 0x23B0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0A0u;
        // 0x23b0a4: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B0A8u;
        goto label_23b0a8;
    }
    ctx->pc = 0x23B0A0u;
    SET_GPR_U32(ctx, 31, 0x23B0A8u);
    ctx->pc = 0x23B0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B0A0u;
    // 0x23b0a4: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x23B0A0u, 0x23B0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B0A8u;
label_23b0a8:
    // 0x23b0a8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_23b0ac:
    if (ctx->pc == 0x23B0ACu) {
        ctx->pc = 0x23B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0A8u;
        // 0x23b0ac: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B0B0u;
        goto label_23b0b0;
    }
    ctx->pc = 0x23B0A8u;
    {
        const bool branch_taken_0x23b0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b0a8) {
            ctx->pc = 0x23B0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B0A8u;
            // 0x23b0ac: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B0CCu;
            goto label_23b0cc;
        }
    }
    ctx->pc = 0x23B0B0u;
label_23b0b0:
    // 0x23b0b0: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x23b0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_23b0b4:
    // 0x23b0b4: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x23b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_23b0b8:
    // 0x23b0b8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_23b0bc:
    if (ctx->pc == 0x23B0BCu) {
        ctx->pc = 0x23B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0B8u;
        // 0x23b0bc: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B0C0u;
        goto label_23b0c0;
    }
    ctx->pc = 0x23B0B8u;
    {
        const bool branch_taken_0x23b0b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0B8u;
        // 0x23b0bc: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0b8) {
            ctx->pc = 0x23B0C8u;
            goto label_23b0c8;
        }
    }
    ctx->pc = 0x23B0C0u;
label_23b0c0:
    // 0x23b0c0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_23b0c4:
    if (ctx->pc == 0x23B0C4u) {
        ctx->pc = 0x23B0C8u;
        goto label_23b0c8;
    }
    ctx->pc = 0x23B0C0u;
    {
        const bool branch_taken_0x23b0c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23b0c0) {
            ctx->pc = 0x23B0CCu;
            goto label_23b0cc;
        }
    }
    ctx->pc = 0x23B0C8u;
label_23b0c8:
    // 0x23b0c8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x23b0c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b0cc:
    // 0x23b0cc: 0x5640001a  bnel        $s2, $zero, . + 4 + (0x1A << 2)
label_23b0d0:
    if (ctx->pc == 0x23B0D0u) {
        ctx->pc = 0x23B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0CCu;
        // 0x23b0d0: 0x9222047d  lbu         $v0, 0x47D($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B0D4u;
        goto label_23b0d4;
    }
    ctx->pc = 0x23B0CCu;
    {
        const bool branch_taken_0x23b0cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b0cc) {
            ctx->pc = 0x23B0D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B0CCu;
            // 0x23b0d0: 0x9222047d  lbu         $v0, 0x47D($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B138u;
            goto label_23b138;
        }
    }
    ctx->pc = 0x23B0D4u;
label_23b0d4:
    // 0x23b0d4: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x23b0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b0d8:
    // 0x23b0d8: 0x8c630158  lw          $v1, 0x158($v1)
    ctx->pc = 0x23b0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
label_23b0dc:
    // 0x23b0dc: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x23b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_23b0e0:
    // 0x23b0e0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23b0e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_23b0e4:
    // 0x23b0e4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_23b0e8:
    if (ctx->pc == 0x23B0E8u) {
        ctx->pc = 0x23B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0E4u;
        // 0x23b0e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B0ECu;
        goto label_23b0ec;
    }
    ctx->pc = 0x23B0E4u;
    {
        const bool branch_taken_0x23b0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0E4u;
        // 0x23b0e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0e4) {
            ctx->pc = 0x23B108u;
            goto label_23b108;
        }
    }
    ctx->pc = 0x23B0ECu;
label_23b0ec:
    // 0x23b0ec: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x23b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_23b0f0:
    // 0x23b0f0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_23b0f4:
    if (ctx->pc == 0x23B0F4u) {
        ctx->pc = 0x23B0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0F0u;
        // 0x23b0f4: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B0F8u;
        goto label_23b0f8;
    }
    ctx->pc = 0x23B0F0u;
    {
        const bool branch_taken_0x23b0f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0F0u;
        // 0x23b0f4: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0f0) {
            ctx->pc = 0x23B108u;
            goto label_23b108;
        }
    }
    ctx->pc = 0x23B0F8u;
label_23b0f8:
    // 0x23b0f8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_23b0fc:
    if (ctx->pc == 0x23B0FCu) {
        ctx->pc = 0x23B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0F8u;
        // 0x23b0fc: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B100u;
        goto label_23b100;
    }
    ctx->pc = 0x23B0F8u;
    {
        const bool branch_taken_0x23b0f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0F8u;
        // 0x23b0fc: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0f8) {
            ctx->pc = 0x23B108u;
            goto label_23b108;
        }
    }
    ctx->pc = 0x23B100u;
label_23b100:
    // 0x23b100: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_23b104:
    if (ctx->pc == 0x23B104u) {
        ctx->pc = 0x23B108u;
        goto label_23b108;
    }
    ctx->pc = 0x23B100u;
    {
        const bool branch_taken_0x23b100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23b100) {
            ctx->pc = 0x23B10Cu;
            goto label_23b10c;
        }
    }
    ctx->pc = 0x23B108u;
label_23b108:
    // 0x23b108: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23b108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b10c:
    // 0x23b10c: 0x5480000a  bnel        $a0, $zero, . + 4 + (0xA << 2)
label_23b110:
    if (ctx->pc == 0x23B110u) {
        ctx->pc = 0x23B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B10Cu;
        // 0x23b110: 0x9222047d  lbu         $v0, 0x47D($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B114u;
        goto label_23b114;
    }
    ctx->pc = 0x23B10Cu;
    {
        const bool branch_taken_0x23b10c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b10c) {
            ctx->pc = 0x23B110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B10Cu;
            // 0x23b110: 0x9222047d  lbu         $v0, 0x47D($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B138u;
            goto label_23b138;
        }
    }
    ctx->pc = 0x23B114u;
label_23b114:
    // 0x23b114: 0xc6210524  lwc1        $f1, 0x524($s1)
    ctx->pc = 0x23b114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23b118:
    // 0x23b118: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23b11c:
    // 0x23b11c: 0x0  nop
    ctx->pc = 0x23b11cu;
    // NOP
label_23b120:
    // 0x23b120: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x23b120u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23b124:
    // 0x23b124: 0x0  nop
    ctx->pc = 0x23b124u;
    // NOP
label_23b128:
    // 0x23b128: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_23b12c:
    if (ctx->pc == 0x23B12Cu) {
        ctx->pc = 0x23B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B128u;
        // 0x23b12c: 0x9222047d  lbu         $v0, 0x47D($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B130u;
        goto label_23b130;
    }
    ctx->pc = 0x23B128u;
    {
        const bool branch_taken_0x23b128 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b128) {
            ctx->pc = 0x23B12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B128u;
            // 0x23b12c: 0x9222047d  lbu         $v0, 0x47D($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B138u;
            goto label_23b138;
        }
    }
    ctx->pc = 0x23B130u;
label_23b130:
    // 0x23b130: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x23b130u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b134:
    // 0x23b134: 0x9222047d  lbu         $v0, 0x47D($s1)
    ctx->pc = 0x23b134u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
label_23b138:
    // 0x23b138: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23b13c:
    if (ctx->pc == 0x23B13Cu) {
        ctx->pc = 0x23B140u;
        goto label_23b140;
    }
    ctx->pc = 0x23B138u;
    {
        const bool branch_taken_0x23b138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b138) {
            ctx->pc = 0x23B150u;
            goto label_23b150;
        }
    }
    ctx->pc = 0x23B140u;
label_23b140:
    // 0x23b140: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23b140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_23b144:
    // 0x23b144: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23b144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23b148:
    // 0x23b148: 0x544001ca  bnel        $v0, $zero, . + 4 + (0x1CA << 2)
label_23b14c:
    if (ctx->pc == 0x23B14Cu) {
        ctx->pc = 0x23B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B148u;
        // 0x23b14c: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B150u;
        goto label_23b150;
    }
    ctx->pc = 0x23B148u;
    {
        const bool branch_taken_0x23b148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b148) {
            ctx->pc = 0x23B14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B148u;
            // 0x23b14c: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B874u;
            goto label_23b874;
        }
    }
    ctx->pc = 0x23B150u;
label_23b150:
    // 0x23b150: 0x12600085  beqz        $s3, . + 4 + (0x85 << 2)
label_23b154:
    if (ctx->pc == 0x23B154u) {
        ctx->pc = 0x23B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B150u;
        // 0x23b154: 0x2402080d  addiu       $v0, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B158u;
        goto label_23b158;
    }
    ctx->pc = 0x23B150u;
    {
        const bool branch_taken_0x23b150 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B150u;
        // 0x23b154: 0x2402080d  addiu       $v0, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b150) {
            ctx->pc = 0x23B368u;
            goto label_23b368;
        }
    }
    ctx->pc = 0x23B158u;
label_23b158:
    // 0x23b158: 0x8e250790  lw          $a1, 0x790($s1)
    ctx->pc = 0x23b158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1936)));
label_23b15c:
    // 0x23b15c: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
label_23b160:
    if (ctx->pc == 0x23B160u) {
        ctx->pc = 0x23B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B15Cu;
        // 0x23b160: 0x8e230418  lw          $v1, 0x418($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B164u;
        goto label_23b164;
    }
    ctx->pc = 0x23B15Cu;
    {
        const bool branch_taken_0x23b15c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x23b15c) {
            ctx->pc = 0x23B160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B15Cu;
            // 0x23b160: 0x8e230418  lw          $v1, 0x418($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B174u;
            goto label_23b174;
        }
    }
    ctx->pc = 0x23B164u;
label_23b164:
    // 0x23b164: 0xc0697b2  jal         func_1A5EC8
label_23b168:
    if (ctx->pc == 0x23B168u) {
        ctx->pc = 0x23B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B164u;
        // 0x23b168: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B16Cu;
        goto label_23b16c;
    }
    ctx->pc = 0x23B164u;
    SET_GPR_U32(ctx, 31, 0x23B16Cu);
    ctx->pc = 0x23B168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B164u;
    // 0x23b168: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5EC8u, 0x23B164u, 0x23B16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B16Cu;
label_23b16c:
    // 0x23b16c: 0x100001c1  b           . + 4 + (0x1C1 << 2)
label_23b170:
    if (ctx->pc == 0x23B170u) {
        ctx->pc = 0x23B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B16Cu;
        // 0x23b170: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B174u;
        goto label_23b174;
    }
    ctx->pc = 0x23B16Cu;
    {
        const bool branch_taken_0x23b16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B16Cu;
        // 0x23b170: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b16c) {
            ctx->pc = 0x23B874u;
            goto label_23b874;
        }
    }
    ctx->pc = 0x23B174u;
label_23b174:
    // 0x23b174: 0x2c620014  sltiu       $v0, $v1, 0x14
    ctx->pc = 0x23b174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_23b178:
    // 0x23b178: 0x104001bd  beqz        $v0, . + 4 + (0x1BD << 2)
label_23b17c:
    if (ctx->pc == 0x23B17Cu) {
        ctx->pc = 0x23B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B178u;
        // 0x23b17c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B180u;
        goto label_23b180;
    }
    ctx->pc = 0x23B178u;
    {
        const bool branch_taken_0x23b178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B178u;
        // 0x23b17c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b178) {
            ctx->pc = 0x23B870u;
            goto label_23b870;
        }
    }
    ctx->pc = 0x23B180u;
label_23b180:
    // 0x23b180: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23b180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23b184:
    // 0x23b184: 0x24425020  addiu       $v0, $v0, 0x5020
    ctx->pc = 0x23b184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20512));
label_23b188:
    // 0x23b188: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23b188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23b18c:
    // 0x23b18c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23b18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23b190:
    // 0x23b190: 0x800008  jr          $a0
label_23b194:
    if (ctx->pc == 0x23B194u) {
        ctx->pc = 0x23B198u;
        goto label_23b198;
    }
    ctx->pc = 0x23B190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B198u: goto label_23b198;
            case 0x23B1F0u: goto label_23b1f0;
            case 0x23B214u: goto label_23b214;
            case 0x23B26Cu: goto label_23b26c;
            case 0x23B280u: goto label_23b280;
            case 0x23B2A4u: goto label_23b2a4;
            case 0x23B300u: goto label_23b300;
            case 0x23B310u: goto label_23b310;
            case 0x23B320u: goto label_23b320;
            case 0x23B330u: goto label_23b330;
            case 0x23B340u: goto label_23b340;
            case 0x23B354u: goto label_23b354;
            case 0x23B870u: goto label_23b870;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B190u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23B198u;
label_23b198:
    // 0x23b198: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x23b198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_23b19c:
    // 0x23b19c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x23b19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_23b1a0:
    // 0x23b1a0: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
label_23b1a4:
    if (ctx->pc == 0x23B1A4u) {
        ctx->pc = 0x23B1A8u;
        goto label_23b1a8;
    }
    ctx->pc = 0x23B1A0u;
    {
        const bool branch_taken_0x23b1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b1a0) {
            ctx->pc = 0x23B2B4u;
            goto label_23b2b4;
        }
    }
    ctx->pc = 0x23B1A8u;
label_23b1a8:
    // 0x23b1a8: 0xc089490  jal         func_225240
label_23b1ac:
    if (ctx->pc == 0x23B1ACu) {
        ctx->pc = 0x23B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1A8u;
        // 0x23b1ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B1B0u;
        goto label_23b1b0;
    }
    ctx->pc = 0x23B1A8u;
    SET_GPR_U32(ctx, 31, 0x23B1B0u);
    ctx->pc = 0x23B1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B1A8u;
    // 0x23b1ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225240u, 0x23B1A8u, 0x23B1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B1B0u;
label_23b1b0:
    // 0x23b1b0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_23b1b4:
    if (ctx->pc == 0x23B1B4u) {
        ctx->pc = 0x23B1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1B0u;
        // 0x23b1b4: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B1B8u;
        goto label_23b1b8;
    }
    ctx->pc = 0x23B1B0u;
    {
        const bool branch_taken_0x23b1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1B0u;
        // 0x23b1b4: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1b0) {
            ctx->pc = 0x23B1DCu;
            goto label_23b1dc;
        }
    }
    ctx->pc = 0x23B1B8u;
label_23b1b8:
    // 0x23b1b8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23b1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23b1bc:
    // 0x23b1bc: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
label_23b1c0:
    if (ctx->pc == 0x23B1C0u) {
        ctx->pc = 0x23B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1BCu;
        // 0x23b1c0: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B1C4u;
        goto label_23b1c4;
    }
    ctx->pc = 0x23B1BCu;
    {
        const bool branch_taken_0x23b1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b1bc) {
            ctx->pc = 0x23B1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B1BCu;
            // 0x23b1c0: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B270u;
            goto label_23b270;
        }
    }
    ctx->pc = 0x23B1C4u;
label_23b1c4:
    // 0x23b1c4: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x23b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_23b1c8:
    // 0x23b1c8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x23b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_23b1cc:
    // 0x23b1cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23b1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23b1d0:
    // 0x23b1d0: 0x54430043  bnel        $v0, $v1, . + 4 + (0x43 << 2)
label_23b1d4:
    if (ctx->pc == 0x23B1D4u) {
        ctx->pc = 0x23B1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1D0u;
        // 0x23b1d4: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B1D8u;
        goto label_23b1d8;
    }
    ctx->pc = 0x23B1D0u;
    {
        const bool branch_taken_0x23b1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23b1d0) {
            ctx->pc = 0x23B1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B1D0u;
            // 0x23b1d4: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B2E0u;
            goto label_23b2e0;
        }
    }
    ctx->pc = 0x23B1D8u;
label_23b1d8:
    // 0x23b1d8: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23b1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_23b1dc:
    // 0x23b1dc: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23b1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23b1e0:
    // 0x23b1e0: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_23b1e4:
    if (ctx->pc == 0x23B1E4u) {
        ctx->pc = 0x23B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1E0u;
        // 0x23b1e4: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B1E8u;
        goto label_23b1e8;
    }
    ctx->pc = 0x23B1E0u;
    {
        const bool branch_taken_0x23b1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1E0u;
        // 0x23b1e4: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1e0) {
            ctx->pc = 0x23B2F0u;
            goto label_23b2f0;
        }
    }
    ctx->pc = 0x23B1E8u;
label_23b1e8:
    // 0x23b1e8: 0x10000021  b           . + 4 + (0x21 << 2)
label_23b1ec:
    if (ctx->pc == 0x23B1ECu) {
        ctx->pc = 0x23B1F0u;
        goto label_23b1f0;
    }
    ctx->pc = 0x23B1E8u;
    {
        const bool branch_taken_0x23b1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b1e8) {
            ctx->pc = 0x23B270u;
            goto label_23b270;
        }
    }
    ctx->pc = 0x23B1F0u;
label_23b1f0:
    // 0x23b1f0: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x23b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b1f4:
    // 0x23b1f4: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x23b1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_23b1f8:
    // 0x23b1f8: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x23b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_23b1fc:
    // 0x23b1fc: 0x10640044  beq         $v1, $a0, . + 4 + (0x44 << 2)
label_23b200:
    if (ctx->pc == 0x23B200u) {
        ctx->pc = 0x23B204u;
        goto label_23b204;
    }
    ctx->pc = 0x23B1FCu;
    {
        const bool branch_taken_0x23b1fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x23b1fc) {
            ctx->pc = 0x23B310u;
            goto label_23b310;
        }
    }
    ctx->pc = 0x23B204u;
label_23b204:
    // 0x23b204: 0xc08f672  jal         func_23D9C8
label_23b208:
    if (ctx->pc == 0x23B208u) {
        ctx->pc = 0x23B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B204u;
        // 0x23b208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B20Cu;
        goto label_23b20c;
    }
    ctx->pc = 0x23B204u;
    SET_GPR_U32(ctx, 31, 0x23B20Cu);
    ctx->pc = 0x23B208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B204u;
    // 0x23b208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x23B204u, 0x23B20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B20Cu;
label_23b20c:
    // 0x23b20c: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
label_23b210:
    if (ctx->pc == 0x23B210u) {
        ctx->pc = 0x23B214u;
        goto label_23b214;
    }
    ctx->pc = 0x23B20Cu;
    {
        const bool branch_taken_0x23b20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b20c) {
            ctx->pc = 0x23B320u;
            goto label_23b320;
        }
    }
    ctx->pc = 0x23B214u;
label_23b214:
    // 0x23b214: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23b214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b218:
    // 0x23b218: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23b218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23b21c:
    // 0x23b21c: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x23b21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_23b220:
    // 0x23b220: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
label_23b224:
    if (ctx->pc == 0x23B224u) {
        ctx->pc = 0x23B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B220u;
        // 0x23b224: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B228u;
        goto label_23b228;
    }
    ctx->pc = 0x23B220u;
    {
        const bool branch_taken_0x23b220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B220u;
        // 0x23b224: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b220) {
            ctx->pc = 0x23B2B4u;
            goto label_23b2b4;
        }
    }
    ctx->pc = 0x23B228u;
label_23b228:
    // 0x23b228: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
label_23b22c:
    if (ctx->pc == 0x23B22Cu) {
        ctx->pc = 0x23B230u;
        goto label_23b230;
    }
    ctx->pc = 0x23B228u;
    {
        const bool branch_taken_0x23b228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23b228) {
            ctx->pc = 0x23B2B4u;
            goto label_23b2b4;
        }
    }
    ctx->pc = 0x23B230u;
label_23b230:
    // 0x23b230: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x23b230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
label_23b234:
    // 0x23b234: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_23b238:
    if (ctx->pc == 0x23B238u) {
        ctx->pc = 0x23B23Cu;
        goto label_23b23c;
    }
    ctx->pc = 0x23B234u;
    {
        const bool branch_taken_0x23b234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b234) {
            ctx->pc = 0x23B2B4u;
            goto label_23b2b4;
        }
    }
    ctx->pc = 0x23B23Cu;
label_23b23c:
    // 0x23b23c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_23b240:
    // 0x23b240: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23b240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23b244:
    // 0x23b244: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23b248:
    if (ctx->pc == 0x23B248u) {
        ctx->pc = 0x23B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B244u;
        // 0x23b248: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B24Cu;
        goto label_23b24c;
    }
    ctx->pc = 0x23B244u;
    {
        const bool branch_taken_0x23b244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B244u;
        // 0x23b248: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b244) {
            ctx->pc = 0x23B25Cu;
            goto label_23b25c;
        }
    }
    ctx->pc = 0x23B24Cu;
label_23b24c:
    // 0x23b24c: 0xc06a0cc  jal         func_1A8330
label_23b250:
    if (ctx->pc == 0x23B250u) {
        ctx->pc = 0x23B250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B24Cu;
        // 0x23b250: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B254u;
        goto label_23b254;
    }
    ctx->pc = 0x23B24Cu;
    SET_GPR_U32(ctx, 31, 0x23B254u);
    ctx->pc = 0x23B250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B24Cu;
    // 0x23b250: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23B24Cu, 0x23B254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B254u;
label_23b254:
    // 0x23b254: 0x10000017  b           . + 4 + (0x17 << 2)
label_23b258:
    if (ctx->pc == 0x23B258u) {
        ctx->pc = 0x23B25Cu;
        goto label_23b25c;
    }
    ctx->pc = 0x23B254u;
    {
        const bool branch_taken_0x23b254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b254) {
            ctx->pc = 0x23B2B4u;
            goto label_23b2b4;
        }
    }
    ctx->pc = 0x23B25Cu;
label_23b25c:
    // 0x23b25c: 0xc06a0cc  jal         func_1A8330
label_23b260:
    if (ctx->pc == 0x23B260u) {
        ctx->pc = 0x23B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B25Cu;
        // 0x23b260: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B264u;
        goto label_23b264;
    }
    ctx->pc = 0x23B25Cu;
    SET_GPR_U32(ctx, 31, 0x23B264u);
    ctx->pc = 0x23B260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B25Cu;
    // 0x23b260: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23B25Cu, 0x23B264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B264u;
label_23b264:
    // 0x23b264: 0x10000013  b           . + 4 + (0x13 << 2)
label_23b268:
    if (ctx->pc == 0x23B268u) {
        ctx->pc = 0x23B26Cu;
        goto label_23b26c;
    }
    ctx->pc = 0x23B264u;
    {
        const bool branch_taken_0x23b264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b264) {
            ctx->pc = 0x23B2B4u;
            goto label_23b2b4;
        }
    }
    ctx->pc = 0x23B26Cu;
label_23b26c:
    // 0x23b26c: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23b26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b270:
    // 0x23b270: 0xc0697b2  jal         func_1A5EC8
label_23b274:
    if (ctx->pc == 0x23B274u) {
        ctx->pc = 0x23B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B270u;
        // 0x23b274: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B278u;
        goto label_23b278;
    }
    ctx->pc = 0x23B270u;
    SET_GPR_U32(ctx, 31, 0x23B278u);
    ctx->pc = 0x23B274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B270u;
    // 0x23b274: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5EC8u, 0x23B270u, 0x23B278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B278u;
label_23b278:
    // 0x23b278: 0x1000017e  b           . + 4 + (0x17E << 2)
label_23b27c:
    if (ctx->pc == 0x23B27Cu) {
        ctx->pc = 0x23B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B278u;
        // 0x23b27c: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B280u;
        goto label_23b280;
    }
    ctx->pc = 0x23B278u;
    {
        const bool branch_taken_0x23b278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B278u;
        // 0x23b27c: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b278) {
            ctx->pc = 0x23B874u;
            goto label_23b874;
        }
    }
    ctx->pc = 0x23B280u;
label_23b280:
    // 0x23b280: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x23b280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_23b284:
    // 0x23b284: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x23b284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_23b288:
    // 0x23b288: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_23b28c:
    if (ctx->pc == 0x23B28Cu) {
        ctx->pc = 0x23B290u;
        goto label_23b290;
    }
    ctx->pc = 0x23B288u;
    {
        const bool branch_taken_0x23b288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b288) {
            ctx->pc = 0x23B2B4u;
            goto label_23b2b4;
        }
    }
    ctx->pc = 0x23B290u;
label_23b290:
    // 0x23b290: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23b290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b294:
    // 0x23b294: 0xc0697b2  jal         func_1A5EC8
label_23b298:
    if (ctx->pc == 0x23B298u) {
        ctx->pc = 0x23B298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B294u;
        // 0x23b298: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B29Cu;
        goto label_23b29c;
    }
    ctx->pc = 0x23B294u;
    SET_GPR_U32(ctx, 31, 0x23B29Cu);
    ctx->pc = 0x23B298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B294u;
    // 0x23b298: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5EC8u, 0x23B294u, 0x23B29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B29Cu;
label_23b29c:
    // 0x23b29c: 0x10000175  b           . + 4 + (0x175 << 2)
label_23b2a0:
    if (ctx->pc == 0x23B2A0u) {
        ctx->pc = 0x23B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B29Cu;
        // 0x23b2a0: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B2A4u;
        goto label_23b2a4;
    }
    ctx->pc = 0x23B29Cu;
    {
        const bool branch_taken_0x23b29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B29Cu;
        // 0x23b2a0: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b29c) {
            ctx->pc = 0x23B874u;
            goto label_23b874;
        }
    }
    ctx->pc = 0x23B2A4u;
label_23b2a4:
    // 0x23b2a4: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x23b2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_23b2a8:
    // 0x23b2a8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x23b2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_23b2ac:
    // 0x23b2ac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_23b2b0:
    if (ctx->pc == 0x23B2B0u) {
        ctx->pc = 0x23B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2ACu;
        // 0x23b2b0: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B2B4u;
        goto label_23b2b4;
    }
    ctx->pc = 0x23B2ACu;
    {
        const bool branch_taken_0x23b2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b2ac) {
            ctx->pc = 0x23B2B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B2ACu;
            // 0x23b2b0: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B2C4u;
            goto label_23b2c4;
        }
    }
    ctx->pc = 0x23B2B4u;
label_23b2b4:
    // 0x23b2b4: 0xc069a22  jal         func_1A6888
label_23b2b8:
    if (ctx->pc == 0x23B2B8u) {
        ctx->pc = 0x23B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2B4u;
        // 0x23b2b8: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B2BCu;
        goto label_23b2bc;
    }
    ctx->pc = 0x23B2B4u;
    SET_GPR_U32(ctx, 31, 0x23B2BCu);
    ctx->pc = 0x23B2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B2B4u;
    // 0x23b2b8: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6888u, 0x23B2B4u, 0x23B2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B2BCu;
label_23b2bc:
    // 0x23b2bc: 0x1000016d  b           . + 4 + (0x16D << 2)
label_23b2c0:
    if (ctx->pc == 0x23B2C0u) {
        ctx->pc = 0x23B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2BCu;
        // 0x23b2c0: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B2C4u;
        goto label_23b2c4;
    }
    ctx->pc = 0x23B2BCu;
    {
        const bool branch_taken_0x23b2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2BCu;
        // 0x23b2c0: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b2bc) {
            ctx->pc = 0x23B874u;
            goto label_23b874;
        }
    }
    ctx->pc = 0x23B2C4u;
label_23b2c4:
    // 0x23b2c4: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23b2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23b2c8:
    // 0x23b2c8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_23b2cc:
    if (ctx->pc == 0x23B2CCu) {
        ctx->pc = 0x23B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2C8u;
        // 0x23b2cc: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B2D0u;
        goto label_23b2d0;
    }
    ctx->pc = 0x23B2C8u;
    {
        const bool branch_taken_0x23b2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b2c8) {
            ctx->pc = 0x23B2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B2C8u;
            // 0x23b2cc: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B2F0u;
            goto label_23b2f0;
        }
    }
    ctx->pc = 0x23B2D0u;
label_23b2d0:
    // 0x23b2d0: 0xc089490  jal         func_225240
label_23b2d4:
    if (ctx->pc == 0x23B2D4u) {
        ctx->pc = 0x23B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2D0u;
        // 0x23b2d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B2D8u;
        goto label_23b2d8;
    }
    ctx->pc = 0x23B2D0u;
    SET_GPR_U32(ctx, 31, 0x23B2D8u);
    ctx->pc = 0x23B2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B2D0u;
    // 0x23b2d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225240u, 0x23B2D0u, 0x23B2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B2D8u;
label_23b2d8:
    // 0x23b2d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23b2dc:
    if (ctx->pc == 0x23B2DCu) {
        ctx->pc = 0x23B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2D8u;
        // 0x23b2dc: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B2E0u;
        goto label_23b2e0;
    }
    ctx->pc = 0x23B2D8u;
    {
        const bool branch_taken_0x23b2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2D8u;
        // 0x23b2dc: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b2d8) {
            ctx->pc = 0x23B2F0u;
            goto label_23b2f0;
        }
    }
    ctx->pc = 0x23B2E0u;
label_23b2e0:
    // 0x23b2e0: 0xc0697b2  jal         func_1A5EC8
label_23b2e4:
    if (ctx->pc == 0x23B2E4u) {
        ctx->pc = 0x23B2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2E0u;
        // 0x23b2e4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B2E8u;
        goto label_23b2e8;
    }
    ctx->pc = 0x23B2E0u;
    SET_GPR_U32(ctx, 31, 0x23B2E8u);
    ctx->pc = 0x23B2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B2E0u;
    // 0x23b2e4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5EC8u, 0x23B2E0u, 0x23B2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B2E8u;
label_23b2e8:
    // 0x23b2e8: 0x10000162  b           . + 4 + (0x162 << 2)
label_23b2ec:
    if (ctx->pc == 0x23B2ECu) {
        ctx->pc = 0x23B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2E8u;
        // 0x23b2ec: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B2F0u;
        goto label_23b2f0;
    }
    ctx->pc = 0x23B2E8u;
    {
        const bool branch_taken_0x23b2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2E8u;
        // 0x23b2ec: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b2e8) {
            ctx->pc = 0x23B874u;
            goto label_23b874;
        }
    }
    ctx->pc = 0x23B2F0u;
label_23b2f0:
    // 0x23b2f0: 0xc0697b2  jal         func_1A5EC8
label_23b2f4:
    if (ctx->pc == 0x23B2F4u) {
        ctx->pc = 0x23B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2F0u;
        // 0x23b2f4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B2F8u;
        goto label_23b2f8;
    }
    ctx->pc = 0x23B2F0u;
    SET_GPR_U32(ctx, 31, 0x23B2F8u);
    ctx->pc = 0x23B2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B2F0u;
    // 0x23b2f4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5EC8u, 0x23B2F0u, 0x23B2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B2F8u;
label_23b2f8:
    // 0x23b2f8: 0x1000015e  b           . + 4 + (0x15E << 2)
label_23b2fc:
    if (ctx->pc == 0x23B2FCu) {
        ctx->pc = 0x23B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2F8u;
        // 0x23b2fc: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B300u;
        goto label_23b300;
    }
    ctx->pc = 0x23B2F8u;
    {
        const bool branch_taken_0x23b2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2F8u;
        // 0x23b2fc: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b2f8) {
            ctx->pc = 0x23B874u;
            goto label_23b874;
        }
    }
    ctx->pc = 0x23B300u;
label_23b300:
    // 0x23b300: 0xc08c02e  jal         func_2300B8
label_23b304:
    if (ctx->pc == 0x23B304u) {
        ctx->pc = 0x23B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B300u;
        // 0x23b304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B308u;
        goto label_23b308;
    }
    ctx->pc = 0x23B300u;
    SET_GPR_U32(ctx, 31, 0x23B308u);
    ctx->pc = 0x23B304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B300u;
    // 0x23b304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2300B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2300B8u, 0x23B300u, 0x23B308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B308u;
label_23b308:
    // 0x23b308: 0x10000159  b           . + 4 + (0x159 << 2)
label_23b30c:
    if (ctx->pc == 0x23B30Cu) {
        ctx->pc = 0x23B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B308u;
        // 0x23b30c: 0xae2004f8  sw          $zero, 0x4F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B310u;
        goto label_23b310;
    }
    ctx->pc = 0x23B308u;
    {
        const bool branch_taken_0x23b308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B308u;
        // 0x23b30c: 0xae2004f8  sw          $zero, 0x4F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b308) {
            ctx->pc = 0x23B870u;
            goto label_23b870;
        }
    }
    ctx->pc = 0x23B310u;
label_23b310:
    // 0x23b310: 0xc0925d2  jal         func_249748
label_23b314:
    if (ctx->pc == 0x23B314u) {
        ctx->pc = 0x23B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B310u;
        // 0x23b314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B318u;
        goto label_23b318;
    }
    ctx->pc = 0x23B310u;
    SET_GPR_U32(ctx, 31, 0x23B318u);
    ctx->pc = 0x23B314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B310u;
    // 0x23b314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249748u, 0x23B310u, 0x23B318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B318u;
label_23b318:
    // 0x23b318: 0x10000156  b           . + 4 + (0x156 << 2)
label_23b31c:
    if (ctx->pc == 0x23B31Cu) {
        ctx->pc = 0x23B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B318u;
        // 0x23b31c: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B320u;
        goto label_23b320;
    }
    ctx->pc = 0x23B318u;
    {
        const bool branch_taken_0x23b318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B318u;
        // 0x23b31c: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b318) {
            ctx->pc = 0x23B874u;
            goto label_23b874;
        }
    }
    ctx->pc = 0x23B320u;
label_23b320:
    // 0x23b320: 0xc09292a  jal         func_24A4A8
label_23b324:
    if (ctx->pc == 0x23B324u) {
        ctx->pc = 0x23B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B320u;
        // 0x23b324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B328u;
        goto label_23b328;
    }
    ctx->pc = 0x23B320u;
    SET_GPR_U32(ctx, 31, 0x23B328u);
    ctx->pc = 0x23B324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B320u;
    // 0x23b324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A4A8u, 0x23B320u, 0x23B328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B328u;
label_23b328:
    // 0x23b328: 0x10000152  b           . + 4 + (0x152 << 2)
label_23b32c:
    if (ctx->pc == 0x23B32Cu) {
        ctx->pc = 0x23B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B328u;
        // 0x23b32c: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B330u;
        goto label_23b330;
    }
    ctx->pc = 0x23B328u;
    {
        const bool branch_taken_0x23b328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B328u;
        // 0x23b32c: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b328) {
            ctx->pc = 0x23B874u;
            goto label_23b874;
        }
    }
    ctx->pc = 0x23B330u;
label_23b330:
    // 0x23b330: 0xc092c80  jal         func_24B200
label_23b334:
    if (ctx->pc == 0x23B334u) {
        ctx->pc = 0x23B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B330u;
        // 0x23b334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B338u;
        goto label_23b338;
    }
    ctx->pc = 0x23B330u;
    SET_GPR_U32(ctx, 31, 0x23B338u);
    ctx->pc = 0x23B334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B330u;
    // 0x23b334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B200u, 0x23B330u, 0x23B338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B338u;
label_23b338:
    // 0x23b338: 0x1000014e  b           . + 4 + (0x14E << 2)
label_23b33c:
    if (ctx->pc == 0x23B33Cu) {
        ctx->pc = 0x23B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B338u;
        // 0x23b33c: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B340u;
        goto label_23b340;
    }
    ctx->pc = 0x23B338u;
    {
        const bool branch_taken_0x23b338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B338u;
        // 0x23b33c: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b338) {
            ctx->pc = 0x23B874u;
            goto label_23b874;
        }
    }
    ctx->pc = 0x23B340u;
label_23b340:
    // 0x23b340: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23b340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b344:
    // 0x23b344: 0xc0697b2  jal         func_1A5EC8
label_23b348:
    if (ctx->pc == 0x23B348u) {
        ctx->pc = 0x23B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B344u;
        // 0x23b348: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B34Cu;
        goto label_23b34c;
    }
    ctx->pc = 0x23B344u;
    SET_GPR_U32(ctx, 31, 0x23B34Cu);
    ctx->pc = 0x23B348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B344u;
    // 0x23b348: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5EC8u, 0x23B344u, 0x23B34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B34Cu;
label_23b34c:
    // 0x23b34c: 0x10000149  b           . + 4 + (0x149 << 2)
label_23b350:
    if (ctx->pc == 0x23B350u) {
        ctx->pc = 0x23B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B34Cu;
        // 0x23b350: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B354u;
        goto label_23b354;
    }
    ctx->pc = 0x23B34Cu;
    {
        const bool branch_taken_0x23b34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B34Cu;
        // 0x23b350: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b34c) {
            ctx->pc = 0x23B874u;
            goto label_23b874;
        }
    }
    ctx->pc = 0x23B354u;
label_23b354:
    // 0x23b354: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23b354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b358:
    // 0x23b358: 0xc0697b2  jal         func_1A5EC8
label_23b35c:
    if (ctx->pc == 0x23B35Cu) {
        ctx->pc = 0x23B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B358u;
        // 0x23b35c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B360u;
        goto label_23b360;
    }
    ctx->pc = 0x23B358u;
    SET_GPR_U32(ctx, 31, 0x23B360u);
    ctx->pc = 0x23B35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B358u;
    // 0x23b35c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5EC8u, 0x23B358u, 0x23B360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B360u;
label_23b360:
    // 0x23b360: 0x10000144  b           . + 4 + (0x144 << 2)
label_23b364:
    if (ctx->pc == 0x23B364u) {
        ctx->pc = 0x23B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B360u;
        // 0x23b364: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B368u;
        goto label_23b368;
    }
    ctx->pc = 0x23B360u;
    {
        const bool branch_taken_0x23b360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B360u;
        // 0x23b364: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b360) {
            ctx->pc = 0x23B874u;
            goto label_23b874;
        }
    }
    ctx->pc = 0x23B368u;
label_23b368:
    // 0x23b368: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x23b368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b36c:
    // 0x23b36c: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x23b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_23b370:
    // 0x23b370: 0x2442fff7  addiu       $v0, $v0, -0x9
    ctx->pc = 0x23b370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967287));
label_23b374:
    // 0x23b374: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x23b374u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_23b378:
    // 0x23b378: 0x5440013f  bnel        $v0, $zero, . + 4 + (0x13F << 2)
label_23b37c:
    if (ctx->pc == 0x23B37Cu) {
        ctx->pc = 0x23B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B378u;
        // 0x23b37c: 0x8c62014c  lw          $v0, 0x14C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B380u;
        goto label_23b380;
    }
    ctx->pc = 0x23B378u;
    {
        const bool branch_taken_0x23b378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b378) {
            ctx->pc = 0x23B37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B378u;
            // 0x23b37c: 0x8c62014c  lw          $v0, 0x14C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B878u;
            goto label_23b878;
        }
    }
    ctx->pc = 0x23B380u;
label_23b380:
    // 0x23b380: 0x8c63014c  lw          $v1, 0x14C($v1)
    ctx->pc = 0x23b380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
label_23b384:
    // 0x23b384: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x23b384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_23b388:
    // 0x23b388: 0x10620139  beq         $v1, $v0, . + 4 + (0x139 << 2)
label_23b38c:
    if (ctx->pc == 0x23B38Cu) {
        ctx->pc = 0x23B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B388u;
        // 0x23b38c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B390u;
        goto label_23b390;
    }
    ctx->pc = 0x23B388u;
    {
        const bool branch_taken_0x23b388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B388u;
        // 0x23b38c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b388) {
            ctx->pc = 0x23B870u;
            goto label_23b870;
        }
    }
    ctx->pc = 0x23B390u;
label_23b390:
    // 0x23b390: 0x10620137  beq         $v1, $v0, . + 4 + (0x137 << 2)
label_23b394:
    if (ctx->pc == 0x23B394u) {
        ctx->pc = 0x23B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B390u;
        // 0x23b394: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B398u;
        goto label_23b398;
    }
    ctx->pc = 0x23B390u;
    {
        const bool branch_taken_0x23b390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B390u;
        // 0x23b394: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b390) {
            ctx->pc = 0x23B870u;
            goto label_23b870;
        }
    }
    ctx->pc = 0x23B398u;
label_23b398:
    // 0x23b398: 0x10620135  beq         $v1, $v0, . + 4 + (0x135 << 2)
label_23b39c:
    if (ctx->pc == 0x23B39Cu) {
        ctx->pc = 0x23B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B398u;
        // 0x23b39c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B3A0u;
        goto label_23b3a0;
    }
    ctx->pc = 0x23B398u;
    {
        const bool branch_taken_0x23b398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B398u;
        // 0x23b39c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b398) {
            ctx->pc = 0x23B870u;
            goto label_23b870;
        }
    }
    ctx->pc = 0x23B3A0u;
label_23b3a0:
    // 0x23b3a0: 0x10620133  beq         $v1, $v0, . + 4 + (0x133 << 2)
label_23b3a4:
    if (ctx->pc == 0x23B3A4u) {
        ctx->pc = 0x23B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3A0u;
        // 0x23b3a4: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B3A8u;
        goto label_23b3a8;
    }
    ctx->pc = 0x23B3A0u;
    {
        const bool branch_taken_0x23b3a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3A0u;
        // 0x23b3a4: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b3a0) {
            ctx->pc = 0x23B870u;
            goto label_23b870;
        }
    }
    ctx->pc = 0x23B3A8u;
label_23b3a8:
    // 0x23b3a8: 0x50620132  beql        $v1, $v0, . + 4 + (0x132 << 2)
label_23b3ac:
    if (ctx->pc == 0x23B3ACu) {
        ctx->pc = 0x23B3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3A8u;
        // 0x23b3ac: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B3B0u;
        goto label_23b3b0;
    }
    ctx->pc = 0x23B3A8u;
    {
        const bool branch_taken_0x23b3a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23b3a8) {
            ctx->pc = 0x23B3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B3A8u;
            // 0x23b3ac: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B874u;
            goto label_23b874;
        }
    }
    ctx->pc = 0x23B3B0u;
label_23b3b0:
    // 0x23b3b0: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x23b3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_23b3b4:
    // 0x23b3b4: 0x2c620014  sltiu       $v0, $v1, 0x14
    ctx->pc = 0x23b3b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_23b3b8:
    // 0x23b3b8: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
label_23b3bc:
    if (ctx->pc == 0x23B3BCu) {
        ctx->pc = 0x23B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3B8u;
        // 0x23b3bc: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B3C0u;
        goto label_23b3c0;
    }
    ctx->pc = 0x23B3B8u;
    {
        const bool branch_taken_0x23b3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3B8u;
        // 0x23b3bc: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b3b8) {
            ctx->pc = 0x23B60Cu;
            goto label_23b60c;
        }
    }
    ctx->pc = 0x23B3C0u;
label_23b3c0:
    // 0x23b3c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23b3c4:
    // 0x23b3c4: 0x24425070  addiu       $v0, $v0, 0x5070
    ctx->pc = 0x23b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20592));
label_23b3c8:
    // 0x23b3c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23b3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23b3cc:
    // 0x23b3cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23b3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23b3d0:
    // 0x23b3d0: 0x800008  jr          $a0
label_23b3d4:
    if (ctx->pc == 0x23B3D4u) {
        ctx->pc = 0x23B3D8u;
        goto label_23b3d8;
    }
    ctx->pc = 0x23B3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B3D8u: goto label_23b3d8;
            case 0x23B450u: goto label_23b450;
            case 0x23B47Cu: goto label_23b47c;
            case 0x23B4ACu: goto label_23b4ac;
            case 0x23B4ECu: goto label_23b4ec;
            case 0x23B4FCu: goto label_23b4fc;
            case 0x23B58Cu: goto label_23b58c;
            case 0x23B59Cu: goto label_23b59c;
            case 0x23B5ACu: goto label_23b5ac;
            case 0x23B5BCu: goto label_23b5bc;
            case 0x23B5CCu: goto label_23b5cc;
            case 0x23B5DCu: goto label_23b5dc;
            case 0x23B5ECu: goto label_23b5ec;
            case 0x23B600u: goto label_23b600;
            case 0x23B60Cu: goto label_23b60c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B3D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23B3D8u;
label_23b3d8:
    // 0x23b3d8: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x23b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_23b3dc:
    // 0x23b3dc: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x23b3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_23b3e0:
    // 0x23b3e0: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
label_23b3e4:
    if (ctx->pc == 0x23B3E4u) {
        ctx->pc = 0x23B3E8u;
        goto label_23b3e8;
    }
    ctx->pc = 0x23B3E0u;
    {
        const bool branch_taken_0x23b3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b3e0) {
            ctx->pc = 0x23B4FCu;
            goto label_23b4fc;
        }
    }
    ctx->pc = 0x23B3E8u;
label_23b3e8:
    // 0x23b3e8: 0xc089490  jal         func_225240
label_23b3ec:
    if (ctx->pc == 0x23B3ECu) {
        ctx->pc = 0x23B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3E8u;
        // 0x23b3ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B3F0u;
        goto label_23b3f0;
    }
    ctx->pc = 0x23B3E8u;
    SET_GPR_U32(ctx, 31, 0x23B3F0u);
    ctx->pc = 0x23B3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B3E8u;
    // 0x23b3ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225240u, 0x23B3E8u, 0x23B3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B3F0u;
label_23b3f0:
    // 0x23b3f0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_23b3f4:
    if (ctx->pc == 0x23B3F4u) {
        ctx->pc = 0x23B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3F0u;
        // 0x23b3f4: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B3F8u;
        goto label_23b3f8;
    }
    ctx->pc = 0x23B3F0u;
    {
        const bool branch_taken_0x23b3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3F0u;
        // 0x23b3f4: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b3f0) {
            ctx->pc = 0x23B42Cu;
            goto label_23b42c;
        }
    }
    ctx->pc = 0x23B3F8u;
label_23b3f8:
    // 0x23b3f8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23b3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23b3fc:
    // 0x23b3fc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_23b400:
    if (ctx->pc == 0x23B400u) {
        ctx->pc = 0x23B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3FCu;
        // 0x23b400: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B404u;
        goto label_23b404;
    }
    ctx->pc = 0x23B3FCu;
    {
        const bool branch_taken_0x23b3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3FCu;
        // 0x23b400: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b3fc) {
            ctx->pc = 0x23B438u;
            goto label_23b438;
        }
    }
    ctx->pc = 0x23B404u;
label_23b404:
    // 0x23b404: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x23b404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_23b408:
    // 0x23b408: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23b408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23b40c:
    // 0x23b40c: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
label_23b410:
    if (ctx->pc == 0x23B410u) {
        ctx->pc = 0x23B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B40Cu;
        // 0x23b410: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B414u;
        goto label_23b414;
    }
    ctx->pc = 0x23B40Cu;
    {
        const bool branch_taken_0x23b40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x23b40c) {
            ctx->pc = 0x23B410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B40Cu;
            // 0x23b410: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B42Cu;
            goto label_23b42c;
        }
    }
    ctx->pc = 0x23B414u;
label_23b414:
    // 0x23b414: 0xc0bf1ee  jal         func_2FC7B8
label_23b418:
    if (ctx->pc == 0x23B418u) {
        ctx->pc = 0x23B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B414u;
        // 0x23b418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B41Cu;
        goto label_23b41c;
    }
    ctx->pc = 0x23B414u;
    SET_GPR_U32(ctx, 31, 0x23B41Cu);
    ctx->pc = 0x23B418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B414u;
    // 0x23b418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC7B8u, 0x23B414u, 0x23B41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B41Cu;
label_23b41c:
    // 0x23b41c: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_23b420:
    if (ctx->pc == 0x23B420u) {
        ctx->pc = 0x23B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B41Cu;
        // 0x23b420: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B424u;
        goto label_23b424;
    }
    ctx->pc = 0x23B41Cu;
    {
        const bool branch_taken_0x23b41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B41Cu;
        // 0x23b420: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b41c) {
            ctx->pc = 0x23B544u;
            goto label_23b544;
        }
    }
    ctx->pc = 0x23B424u;
label_23b424:
    // 0x23b424: 0x1000004b  b           . + 4 + (0x4B << 2)
label_23b428:
    if (ctx->pc == 0x23B428u) {
        ctx->pc = 0x23B42Cu;
        goto label_23b42c;
    }
    ctx->pc = 0x23B424u;
    {
        const bool branch_taken_0x23b424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b424) {
            ctx->pc = 0x23B554u;
            goto label_23b554;
        }
    }
    ctx->pc = 0x23B42Cu;
label_23b42c:
    // 0x23b42c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23b42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23b430:
    // 0x23b430: 0x50400052  beql        $v0, $zero, . + 4 + (0x52 << 2)
label_23b434:
    if (ctx->pc == 0x23B434u) {
        ctx->pc = 0x23B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B430u;
        // 0x23b434: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B438u;
        goto label_23b438;
    }
    ctx->pc = 0x23B430u;
    {
        const bool branch_taken_0x23b430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b430) {
            ctx->pc = 0x23B434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B430u;
            // 0x23b434: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B57Cu;
            goto label_23b57c;
        }
    }
    ctx->pc = 0x23B438u;
label_23b438:
    // 0x23b438: 0xc08dacc  jal         func_236B30
label_23b43c:
    if (ctx->pc == 0x23B43Cu) {
        ctx->pc = 0x23B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B438u;
        // 0x23b43c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B440u;
        goto label_23b440;
    }
    ctx->pc = 0x23B438u;
    SET_GPR_U32(ctx, 31, 0x23B440u);
    ctx->pc = 0x23B43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B438u;
    // 0x23b43c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B30u, 0x23B438u, 0x23B440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B440u;
label_23b440:
    // 0x23b440: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_23b444:
    if (ctx->pc == 0x23B444u) {
        ctx->pc = 0x23B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B440u;
        // 0x23b444: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B448u;
        goto label_23b448;
    }
    ctx->pc = 0x23B440u;
    {
        const bool branch_taken_0x23b440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B440u;
        // 0x23b444: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b440) {
            ctx->pc = 0x23B48Cu;
            goto label_23b48c;
        }
    }
    ctx->pc = 0x23B448u;
label_23b448:
    // 0x23b448: 0x10000014  b           . + 4 + (0x14 << 2)
label_23b44c:
    if (ctx->pc == 0x23B44Cu) {
        ctx->pc = 0x23B450u;
        goto label_23b450;
    }
    ctx->pc = 0x23B448u;
    {
        const bool branch_taken_0x23b448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b448) {
            ctx->pc = 0x23B49Cu;
            goto label_23b49c;
        }
    }
    ctx->pc = 0x23B450u;
label_23b450:
    // 0x23b450: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x23b450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b454:
    // 0x23b454: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x23b454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_23b458:
    // 0x23b458: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x23b458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_23b45c:
    // 0x23b45c: 0x10640053  beq         $v1, $a0, . + 4 + (0x53 << 2)
label_23b460:
    if (ctx->pc == 0x23B460u) {
        ctx->pc = 0x23B464u;
        goto label_23b464;
    }
    ctx->pc = 0x23B45Cu;
    {
        const bool branch_taken_0x23b45c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x23b45c) {
            ctx->pc = 0x23B5ACu;
            goto label_23b5ac;
        }
    }
    ctx->pc = 0x23B464u;
label_23b464:
    // 0x23b464: 0xc08f672  jal         func_23D9C8
label_23b468:
    if (ctx->pc == 0x23B468u) {
        ctx->pc = 0x23B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B464u;
        // 0x23b468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B46Cu;
        goto label_23b46c;
    }
    ctx->pc = 0x23B464u;
    SET_GPR_U32(ctx, 31, 0x23B46Cu);
    ctx->pc = 0x23B468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B464u;
    // 0x23b468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x23B464u, 0x23B46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B46Cu;
label_23b46c:
    // 0x23b46c: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
label_23b470:
    if (ctx->pc == 0x23B470u) {
        ctx->pc = 0x23B474u;
        goto label_23b474;
    }
    ctx->pc = 0x23B46Cu;
    {
        const bool branch_taken_0x23b46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b46c) {
            ctx->pc = 0x23B5BCu;
            goto label_23b5bc;
        }
    }
    ctx->pc = 0x23B474u;
label_23b474:
    // 0x23b474: 0x10000021  b           . + 4 + (0x21 << 2)
label_23b478:
    if (ctx->pc == 0x23B478u) {
        ctx->pc = 0x23B47Cu;
        goto label_23b47c;
    }
    ctx->pc = 0x23B474u;
    {
        const bool branch_taken_0x23b474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b474) {
            ctx->pc = 0x23B4FCu;
            goto label_23b4fc;
        }
    }
    ctx->pc = 0x23B47Cu;
label_23b47c:
    // 0x23b47c: 0xc08dacc  jal         func_236B30
label_23b480:
    if (ctx->pc == 0x23B480u) {
        ctx->pc = 0x23B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B47Cu;
        // 0x23b480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B484u;
        goto label_23b484;
    }
    ctx->pc = 0x23B47Cu;
    SET_GPR_U32(ctx, 31, 0x23B484u);
    ctx->pc = 0x23B480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B47Cu;
    // 0x23b480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B30u, 0x23B47Cu, 0x23B484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B484u;
label_23b484:
    // 0x23b484: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23b488:
    if (ctx->pc == 0x23B488u) {
        ctx->pc = 0x23B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B484u;
        // 0x23b488: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B48Cu;
        goto label_23b48c;
    }
    ctx->pc = 0x23B484u;
    {
        const bool branch_taken_0x23b484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B484u;
        // 0x23b488: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b484) {
            ctx->pc = 0x23B49Cu;
            goto label_23b49c;
        }
    }
    ctx->pc = 0x23B48Cu;
label_23b48c:
    // 0x23b48c: 0xc06974a  jal         func_1A5D28
label_23b490:
    if (ctx->pc == 0x23B490u) {
        ctx->pc = 0x23B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B48Cu;
        // 0x23b490: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B494u;
        goto label_23b494;
    }
    ctx->pc = 0x23B48Cu;
    SET_GPR_U32(ctx, 31, 0x23B494u);
    ctx->pc = 0x23B490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B48Cu;
    // 0x23b490: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x23B48Cu, 0x23B494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B494u;
label_23b494:
    // 0x23b494: 0x1000005e  b           . + 4 + (0x5E << 2)
label_23b498:
    if (ctx->pc == 0x23B498u) {
        ctx->pc = 0x23B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B494u;
        // 0x23b498: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B49Cu;
        goto label_23b49c;
    }
    ctx->pc = 0x23B494u;
    {
        const bool branch_taken_0x23b494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B494u;
        // 0x23b498: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b494) {
            ctx->pc = 0x23B610u;
            goto label_23b610;
        }
    }
    ctx->pc = 0x23B49Cu;
label_23b49c:
    // 0x23b49c: 0xc06974a  jal         func_1A5D28
label_23b4a0:
    if (ctx->pc == 0x23B4A0u) {
        ctx->pc = 0x23B4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B49Cu;
        // 0x23b4a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B4A4u;
        goto label_23b4a4;
    }
    ctx->pc = 0x23B49Cu;
    SET_GPR_U32(ctx, 31, 0x23B4A4u);
    ctx->pc = 0x23B4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B49Cu;
    // 0x23b4a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x23B49Cu, 0x23B4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B4A4u;
label_23b4a4:
    // 0x23b4a4: 0x1000005a  b           . + 4 + (0x5A << 2)
label_23b4a8:
    if (ctx->pc == 0x23B4A8u) {
        ctx->pc = 0x23B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4A4u;
        // 0x23b4a8: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B4ACu;
        goto label_23b4ac;
    }
    ctx->pc = 0x23B4A4u;
    {
        const bool branch_taken_0x23b4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4A4u;
        // 0x23b4a8: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b4a4) {
            ctx->pc = 0x23B610u;
            goto label_23b610;
        }
    }
    ctx->pc = 0x23B4ACu;
label_23b4ac:
    // 0x23b4ac: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x23b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_23b4b0:
    // 0x23b4b0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x23b4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_23b4b4:
    // 0x23b4b4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_23b4b8:
    if (ctx->pc == 0x23B4B8u) {
        ctx->pc = 0x23B4BCu;
        goto label_23b4bc;
    }
    ctx->pc = 0x23B4B4u;
    {
        const bool branch_taken_0x23b4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b4b4) {
            ctx->pc = 0x23B4FCu;
            goto label_23b4fc;
        }
    }
    ctx->pc = 0x23B4BCu;
label_23b4bc:
    // 0x23b4bc: 0xc08dacc  jal         func_236B30
label_23b4c0:
    if (ctx->pc == 0x23B4C0u) {
        ctx->pc = 0x23B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4BCu;
        // 0x23b4c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B4C4u;
        goto label_23b4c4;
    }
    ctx->pc = 0x23B4BCu;
    SET_GPR_U32(ctx, 31, 0x23B4C4u);
    ctx->pc = 0x23B4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B4BCu;
    // 0x23b4c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B30u, 0x23B4BCu, 0x23B4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B4C4u;
label_23b4c4:
    // 0x23b4c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23b4c8:
    if (ctx->pc == 0x23B4C8u) {
        ctx->pc = 0x23B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4C4u;
        // 0x23b4c8: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B4CCu;
        goto label_23b4cc;
    }
    ctx->pc = 0x23B4C4u;
    {
        const bool branch_taken_0x23b4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4C4u;
        // 0x23b4c8: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b4c4) {
            ctx->pc = 0x23B4DCu;
            goto label_23b4dc;
        }
    }
    ctx->pc = 0x23B4CCu;
label_23b4cc:
    // 0x23b4cc: 0xc06974a  jal         func_1A5D28
label_23b4d0:
    if (ctx->pc == 0x23B4D0u) {
        ctx->pc = 0x23B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4CCu;
        // 0x23b4d0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B4D4u;
        goto label_23b4d4;
    }
    ctx->pc = 0x23B4CCu;
    SET_GPR_U32(ctx, 31, 0x23B4D4u);
    ctx->pc = 0x23B4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B4CCu;
    // 0x23b4d0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x23B4CCu, 0x23B4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B4D4u;
label_23b4d4:
    // 0x23b4d4: 0x1000004e  b           . + 4 + (0x4E << 2)
label_23b4d8:
    if (ctx->pc == 0x23B4D8u) {
        ctx->pc = 0x23B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4D4u;
        // 0x23b4d8: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B4DCu;
        goto label_23b4dc;
    }
    ctx->pc = 0x23B4D4u;
    {
        const bool branch_taken_0x23b4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4D4u;
        // 0x23b4d8: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b4d4) {
            ctx->pc = 0x23B610u;
            goto label_23b610;
        }
    }
    ctx->pc = 0x23B4DCu;
label_23b4dc:
    // 0x23b4dc: 0xc06974a  jal         func_1A5D28
label_23b4e0:
    if (ctx->pc == 0x23B4E0u) {
        ctx->pc = 0x23B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4DCu;
        // 0x23b4e0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B4E4u;
        goto label_23b4e4;
    }
    ctx->pc = 0x23B4DCu;
    SET_GPR_U32(ctx, 31, 0x23B4E4u);
    ctx->pc = 0x23B4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B4DCu;
    // 0x23b4e0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x23B4DCu, 0x23B4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B4E4u;
label_23b4e4:
    // 0x23b4e4: 0x1000004a  b           . + 4 + (0x4A << 2)
label_23b4e8:
    if (ctx->pc == 0x23B4E8u) {
        ctx->pc = 0x23B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4E4u;
        // 0x23b4e8: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B4ECu;
        goto label_23b4ec;
    }
    ctx->pc = 0x23B4E4u;
    {
        const bool branch_taken_0x23b4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4E4u;
        // 0x23b4e8: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b4e4) {
            ctx->pc = 0x23B610u;
            goto label_23b610;
        }
    }
    ctx->pc = 0x23B4ECu;
label_23b4ec:
    // 0x23b4ec: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x23b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_23b4f0:
    // 0x23b4f0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x23b4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_23b4f4:
    // 0x23b4f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_23b4f8:
    if (ctx->pc == 0x23B4F8u) {
        ctx->pc = 0x23B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4F4u;
        // 0x23b4f8: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B4FCu;
        goto label_23b4fc;
    }
    ctx->pc = 0x23B4F4u;
    {
        const bool branch_taken_0x23b4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b4f4) {
            ctx->pc = 0x23B4F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B4F4u;
            // 0x23b4f8: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B50Cu;
            goto label_23b50c;
        }
    }
    ctx->pc = 0x23B4FCu;
label_23b4fc:
    // 0x23b4fc: 0xc069992  jal         func_1A6648
label_23b500:
    if (ctx->pc == 0x23B500u) {
        ctx->pc = 0x23B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4FCu;
        // 0x23b500: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B504u;
        goto label_23b504;
    }
    ctx->pc = 0x23B4FCu;
    SET_GPR_U32(ctx, 31, 0x23B504u);
    ctx->pc = 0x23B500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B4FCu;
    // 0x23b500: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6648u, 0x23B4FCu, 0x23B504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B504u;
label_23b504:
    // 0x23b504: 0x10000042  b           . + 4 + (0x42 << 2)
label_23b508:
    if (ctx->pc == 0x23B508u) {
        ctx->pc = 0x23B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B504u;
        // 0x23b508: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B50Cu;
        goto label_23b50c;
    }
    ctx->pc = 0x23B504u;
    {
        const bool branch_taken_0x23b504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B504u;
        // 0x23b508: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b504) {
            ctx->pc = 0x23B610u;
            goto label_23b610;
        }
    }
    ctx->pc = 0x23B50Cu;
label_23b50c:
    // 0x23b50c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23b50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23b510:
    // 0x23b510: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_23b514:
    if (ctx->pc == 0x23B514u) {
        ctx->pc = 0x23B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B510u;
        // 0x23b514: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B518u;
        goto label_23b518;
    }
    ctx->pc = 0x23B510u;
    {
        const bool branch_taken_0x23b510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B510u;
        // 0x23b514: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b510) {
            ctx->pc = 0x23B564u;
            goto label_23b564;
        }
    }
    ctx->pc = 0x23B518u;
label_23b518:
    // 0x23b518: 0xc0bf1ee  jal         func_2FC7B8
label_23b51c:
    if (ctx->pc == 0x23B51Cu) {
        ctx->pc = 0x23B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B518u;
        // 0x23b51c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B520u;
        goto label_23b520;
    }
    ctx->pc = 0x23B518u;
    SET_GPR_U32(ctx, 31, 0x23B520u);
    ctx->pc = 0x23B51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B518u;
    // 0x23b51c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC7B8u, 0x23B518u, 0x23B520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B520u;
label_23b520:
    // 0x23b520: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x23b520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_23b524:
    // 0x23b524: 0x3863020f  xori        $v1, $v1, 0x20F
    ctx->pc = 0x23b524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
label_23b528:
    // 0x23b528: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_23b52c:
    if (ctx->pc == 0x23B52Cu) {
        ctx->pc = 0x23B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B528u;
        // 0x23b52c: 0x2c440001  sltiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B530u;
        goto label_23b530;
    }
    ctx->pc = 0x23B528u;
    {
        const bool branch_taken_0x23b528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B528u;
        // 0x23b52c: 0x2c440001  sltiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b528) {
            ctx->pc = 0x23B564u;
            goto label_23b564;
        }
    }
    ctx->pc = 0x23B530u;
label_23b530:
    // 0x23b530: 0x8e220220  lw          $v0, 0x220($s1)
    ctx->pc = 0x23b530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_23b534:
    // 0x23b534: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_23b538:
    if (ctx->pc == 0x23B538u) {
        ctx->pc = 0x23B53Cu;
        goto label_23b53c;
    }
    ctx->pc = 0x23B534u;
    {
        const bool branch_taken_0x23b534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b534) {
            ctx->pc = 0x23B564u;
            goto label_23b564;
        }
    }
    ctx->pc = 0x23B53Cu;
label_23b53c:
    // 0x23b53c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_23b540:
    if (ctx->pc == 0x23B540u) {
        ctx->pc = 0x23B540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B53Cu;
        // 0x23b540: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B544u;
        goto label_23b544;
    }
    ctx->pc = 0x23B53Cu;
    {
        const bool branch_taken_0x23b53c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B53Cu;
        // 0x23b540: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b53c) {
            ctx->pc = 0x23B554u;
            goto label_23b554;
        }
    }
    ctx->pc = 0x23B544u;
label_23b544:
    // 0x23b544: 0xc06974a  jal         func_1A5D28
label_23b548:
    if (ctx->pc == 0x23B548u) {
        ctx->pc = 0x23B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B544u;
        // 0x23b548: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B54Cu;
        goto label_23b54c;
    }
    ctx->pc = 0x23B544u;
    SET_GPR_U32(ctx, 31, 0x23B54Cu);
    ctx->pc = 0x23B548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B544u;
    // 0x23b548: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x23B544u, 0x23B54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B54Cu;
label_23b54c:
    // 0x23b54c: 0x10000030  b           . + 4 + (0x30 << 2)
label_23b550:
    if (ctx->pc == 0x23B550u) {
        ctx->pc = 0x23B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B54Cu;
        // 0x23b550: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B554u;
        goto label_23b554;
    }
    ctx->pc = 0x23B54Cu;
    {
        const bool branch_taken_0x23b54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B54Cu;
        // 0x23b550: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b54c) {
            ctx->pc = 0x23B610u;
            goto label_23b610;
        }
    }
    ctx->pc = 0x23B554u;
label_23b554:
    // 0x23b554: 0xc06974a  jal         func_1A5D28
label_23b558:
    if (ctx->pc == 0x23B558u) {
        ctx->pc = 0x23B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B554u;
        // 0x23b558: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B55Cu;
        goto label_23b55c;
    }
    ctx->pc = 0x23B554u;
    SET_GPR_U32(ctx, 31, 0x23B55Cu);
    ctx->pc = 0x23B558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B554u;
    // 0x23b558: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x23B554u, 0x23B55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B55Cu;
label_23b55c:
    // 0x23b55c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_23b560:
    if (ctx->pc == 0x23B560u) {
        ctx->pc = 0x23B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B55Cu;
        // 0x23b560: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B564u;
        goto label_23b564;
    }
    ctx->pc = 0x23B55Cu;
    {
        const bool branch_taken_0x23b55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B55Cu;
        // 0x23b560: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b55c) {
            ctx->pc = 0x23B610u;
            goto label_23b610;
        }
    }
    ctx->pc = 0x23B564u;
label_23b564:
    // 0x23b564: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_23b568:
    if (ctx->pc == 0x23B568u) {
        ctx->pc = 0x23B568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B564u;
        // 0x23b568: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B56Cu;
        goto label_23b56c;
    }
    ctx->pc = 0x23B564u;
    {
        const bool branch_taken_0x23b564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B564u;
        // 0x23b568: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b564) {
            ctx->pc = 0x23B57Cu;
            goto label_23b57c;
        }
    }
    ctx->pc = 0x23B56Cu;
label_23b56c:
    // 0x23b56c: 0xc06974a  jal         func_1A5D28
label_23b570:
    if (ctx->pc == 0x23B570u) {
        ctx->pc = 0x23B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B56Cu;
        // 0x23b570: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B574u;
        goto label_23b574;
    }
    ctx->pc = 0x23B56Cu;
    SET_GPR_U32(ctx, 31, 0x23B574u);
    ctx->pc = 0x23B570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B56Cu;
    // 0x23b570: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x23B56Cu, 0x23B574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B574u;
label_23b574:
    // 0x23b574: 0x10000026  b           . + 4 + (0x26 << 2)
label_23b578:
    if (ctx->pc == 0x23B578u) {
        ctx->pc = 0x23B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B574u;
        // 0x23b578: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B57Cu;
        goto label_23b57c;
    }
    ctx->pc = 0x23B574u;
    {
        const bool branch_taken_0x23b574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B574u;
        // 0x23b578: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b574) {
            ctx->pc = 0x23B610u;
            goto label_23b610;
        }
    }
    ctx->pc = 0x23B57Cu;
label_23b57c:
    // 0x23b57c: 0xc06974a  jal         func_1A5D28
label_23b580:
    if (ctx->pc == 0x23B580u) {
        ctx->pc = 0x23B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B57Cu;
        // 0x23b580: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B584u;
        goto label_23b584;
    }
    ctx->pc = 0x23B57Cu;
    SET_GPR_U32(ctx, 31, 0x23B584u);
    ctx->pc = 0x23B580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B57Cu;
    // 0x23b580: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x23B57Cu, 0x23B584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B584u;
label_23b584:
    // 0x23b584: 0x10000022  b           . + 4 + (0x22 << 2)
label_23b588:
    if (ctx->pc == 0x23B588u) {
        ctx->pc = 0x23B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B584u;
        // 0x23b588: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B58Cu;
        goto label_23b58c;
    }
    ctx->pc = 0x23B584u;
    {
        const bool branch_taken_0x23b584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B584u;
        // 0x23b588: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b584) {
            ctx->pc = 0x23B610u;
            goto label_23b610;
        }
    }
    ctx->pc = 0x23B58Cu;
label_23b58c:
    // 0x23b58c: 0xc08c02e  jal         func_2300B8
label_23b590:
    if (ctx->pc == 0x23B590u) {
        ctx->pc = 0x23B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B58Cu;
        // 0x23b590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B594u;
        goto label_23b594;
    }
    ctx->pc = 0x23B58Cu;
    SET_GPR_U32(ctx, 31, 0x23B594u);
    ctx->pc = 0x23B590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B58Cu;
    // 0x23b590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2300B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2300B8u, 0x23B58Cu, 0x23B594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B594u;
label_23b594:
    // 0x23b594: 0x1000001d  b           . + 4 + (0x1D << 2)
label_23b598:
    if (ctx->pc == 0x23B598u) {
        ctx->pc = 0x23B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B594u;
        // 0x23b598: 0xae2004f8  sw          $zero, 0x4F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B59Cu;
        goto label_23b59c;
    }
    ctx->pc = 0x23B594u;
    {
        const bool branch_taken_0x23b594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B594u;
        // 0x23b598: 0xae2004f8  sw          $zero, 0x4F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b594) {
            ctx->pc = 0x23B60Cu;
            goto label_23b60c;
        }
    }
    ctx->pc = 0x23B59Cu;
label_23b59c:
    // 0x23b59c: 0xc08c13a  jal         func_2304E8
label_23b5a0:
    if (ctx->pc == 0x23B5A0u) {
        ctx->pc = 0x23B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B59Cu;
        // 0x23b5a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B5A4u;
        goto label_23b5a4;
    }
    ctx->pc = 0x23B59Cu;
    SET_GPR_U32(ctx, 31, 0x23B5A4u);
    ctx->pc = 0x23B5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B59Cu;
    // 0x23b5a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2304E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2304E8u, 0x23B59Cu, 0x23B5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B5A4u;
label_23b5a4:
    // 0x23b5a4: 0x10000019  b           . + 4 + (0x19 << 2)
label_23b5a8:
    if (ctx->pc == 0x23B5A8u) {
        ctx->pc = 0x23B5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5A4u;
        // 0x23b5a8: 0xae2004f8  sw          $zero, 0x4F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B5ACu;
        goto label_23b5ac;
    }
    ctx->pc = 0x23B5A4u;
    {
        const bool branch_taken_0x23b5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5A4u;
        // 0x23b5a8: 0xae2004f8  sw          $zero, 0x4F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b5a4) {
            ctx->pc = 0x23B60Cu;
            goto label_23b60c;
        }
    }
    ctx->pc = 0x23B5ACu;
label_23b5ac:
    // 0x23b5ac: 0xc0925d2  jal         func_249748
label_23b5b0:
    if (ctx->pc == 0x23B5B0u) {
        ctx->pc = 0x23B5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5ACu;
        // 0x23b5b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B5B4u;
        goto label_23b5b4;
    }
    ctx->pc = 0x23B5ACu;
    SET_GPR_U32(ctx, 31, 0x23B5B4u);
    ctx->pc = 0x23B5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B5ACu;
    // 0x23b5b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249748u, 0x23B5ACu, 0x23B5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B5B4u;
label_23b5b4:
    // 0x23b5b4: 0x10000016  b           . + 4 + (0x16 << 2)
label_23b5b8:
    if (ctx->pc == 0x23B5B8u) {
        ctx->pc = 0x23B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5B4u;
        // 0x23b5b8: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B5BCu;
        goto label_23b5bc;
    }
    ctx->pc = 0x23B5B4u;
    {
        const bool branch_taken_0x23b5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5B4u;
        // 0x23b5b8: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b5b4) {
            ctx->pc = 0x23B610u;
            goto label_23b610;
        }
    }
    ctx->pc = 0x23B5BCu;
label_23b5bc:
    // 0x23b5bc: 0xc09289a  jal         func_24A268
label_23b5c0:
    if (ctx->pc == 0x23B5C0u) {
        ctx->pc = 0x23B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5BCu;
        // 0x23b5c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B5C4u;
        goto label_23b5c4;
    }
    ctx->pc = 0x23B5BCu;
    SET_GPR_U32(ctx, 31, 0x23B5C4u);
    ctx->pc = 0x23B5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B5BCu;
    // 0x23b5c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A268u, 0x23B5BCu, 0x23B5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B5C4u;
label_23b5c4:
    // 0x23b5c4: 0x10000012  b           . + 4 + (0x12 << 2)
label_23b5c8:
    if (ctx->pc == 0x23B5C8u) {
        ctx->pc = 0x23B5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5C4u;
        // 0x23b5c8: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B5CCu;
        goto label_23b5cc;
    }
    ctx->pc = 0x23B5C4u;
    {
        const bool branch_taken_0x23b5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5C4u;
        // 0x23b5c8: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b5c4) {
            ctx->pc = 0x23B610u;
            goto label_23b610;
        }
    }
    ctx->pc = 0x23B5CCu;
label_23b5cc:
    // 0x23b5cc: 0xc091ed4  jal         func_247B50
label_23b5d0:
    if (ctx->pc == 0x23B5D0u) {
        ctx->pc = 0x23B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5CCu;
        // 0x23b5d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B5D4u;
        goto label_23b5d4;
    }
    ctx->pc = 0x23B5CCu;
    SET_GPR_U32(ctx, 31, 0x23B5D4u);
    ctx->pc = 0x23B5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B5CCu;
    // 0x23b5d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247B50u, 0x23B5CCu, 0x23B5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B5D4u;
label_23b5d4:
    // 0x23b5d4: 0x1000000e  b           . + 4 + (0xE << 2)
label_23b5d8:
    if (ctx->pc == 0x23B5D8u) {
        ctx->pc = 0x23B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5D4u;
        // 0x23b5d8: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B5DCu;
        goto label_23b5dc;
    }
    ctx->pc = 0x23B5D4u;
    {
        const bool branch_taken_0x23b5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5D4u;
        // 0x23b5d8: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b5d4) {
            ctx->pc = 0x23B610u;
            goto label_23b610;
        }
    }
    ctx->pc = 0x23B5DCu;
label_23b5dc:
    // 0x23b5dc: 0xc092c80  jal         func_24B200
label_23b5e0:
    if (ctx->pc == 0x23B5E0u) {
        ctx->pc = 0x23B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5DCu;
        // 0x23b5e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B5E4u;
        goto label_23b5e4;
    }
    ctx->pc = 0x23B5DCu;
    SET_GPR_U32(ctx, 31, 0x23B5E4u);
    ctx->pc = 0x23B5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B5DCu;
    // 0x23b5e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B200u, 0x23B5DCu, 0x23B5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B5E4u;
label_23b5e4:
    // 0x23b5e4: 0x1000000a  b           . + 4 + (0xA << 2)
label_23b5e8:
    if (ctx->pc == 0x23B5E8u) {
        ctx->pc = 0x23B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5E4u;
        // 0x23b5e8: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B5ECu;
        goto label_23b5ec;
    }
    ctx->pc = 0x23B5E4u;
    {
        const bool branch_taken_0x23b5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5E4u;
        // 0x23b5e8: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b5e4) {
            ctx->pc = 0x23B610u;
            goto label_23b610;
        }
    }
    ctx->pc = 0x23B5ECu;
label_23b5ec:
    // 0x23b5ec: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23b5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b5f0:
    // 0x23b5f0: 0xc06974a  jal         func_1A5D28
label_23b5f4:
    if (ctx->pc == 0x23B5F4u) {
        ctx->pc = 0x23B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5F0u;
        // 0x23b5f4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B5F8u;
        goto label_23b5f8;
    }
    ctx->pc = 0x23B5F0u;
    SET_GPR_U32(ctx, 31, 0x23B5F8u);
    ctx->pc = 0x23B5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B5F0u;
    // 0x23b5f4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x23B5F0u, 0x23B5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B5F8u;
label_23b5f8:
    // 0x23b5f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_23b5fc:
    if (ctx->pc == 0x23B5FCu) {
        ctx->pc = 0x23B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5F8u;
        // 0x23b5fc: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B600u;
        goto label_23b600;
    }
    ctx->pc = 0x23B5F8u;
    {
        const bool branch_taken_0x23b5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5F8u;
        // 0x23b5fc: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b5f8) {
            ctx->pc = 0x23B610u;
            goto label_23b610;
        }
    }
    ctx->pc = 0x23B600u;
label_23b600:
    // 0x23b600: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23b600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b604:
    // 0x23b604: 0xc06974a  jal         func_1A5D28
label_23b608:
    if (ctx->pc == 0x23B608u) {
        ctx->pc = 0x23B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B604u;
        // 0x23b608: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B60Cu;
        goto label_23b60c;
    }
    ctx->pc = 0x23B604u;
    SET_GPR_U32(ctx, 31, 0x23B60Cu);
    ctx->pc = 0x23B608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B604u;
    // 0x23b608: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x23B604u, 0x23B60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B60Cu;
label_23b60c:
    // 0x23b60c: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23b60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b610:
    // 0x23b610: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x23b610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_23b614:
    // 0x23b614: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x23b614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_23b618:
    // 0x23b618: 0x54430096  bnel        $v0, $v1, . + 4 + (0x96 << 2)
label_23b61c:
    if (ctx->pc == 0x23B61Cu) {
        ctx->pc = 0x23B61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B618u;
        // 0x23b61c: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B620u;
        goto label_23b620;
    }
    ctx->pc = 0x23B618u;
    {
        const bool branch_taken_0x23b618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23b618) {
            ctx->pc = 0x23B61Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B618u;
            // 0x23b61c: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B874u;
            goto label_23b874;
        }
    }
    ctx->pc = 0x23B620u;
label_23b620:
    // 0x23b620: 0xc62004fc  lwc1        $f0, 0x4FC($s1)
    ctx->pc = 0x23b620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23b624:
    // 0x23b624: 0xe4800174  swc1        $f0, 0x174($a0)
    ctx->pc = 0x23b624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 372), bits); }
label_23b628:
    // 0x23b628: 0xc6210500  lwc1        $f1, 0x500($s1)
    ctx->pc = 0x23b628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23b62c:
    // 0x23b62c: 0x10000090  b           . + 4 + (0x90 << 2)
label_23b630:
    if (ctx->pc == 0x23B630u) {
        ctx->pc = 0x23B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B62Cu;
        // 0x23b630: 0xe4810178  swc1        $f1, 0x178($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 376), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B634u;
        goto label_23b634;
    }
    ctx->pc = 0x23B62Cu;
    {
        const bool branch_taken_0x23b62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B62Cu;
        // 0x23b630: 0xe4810178  swc1        $f1, 0x178($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 376), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b62c) {
            ctx->pc = 0x23B870u;
            goto label_23b870;
        }
    }
    ctx->pc = 0x23B634u;
label_23b634:
    // 0x23b634: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x23b634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_23b638:
    // 0x23b638: 0x2c620014  sltiu       $v0, $v1, 0x14
    ctx->pc = 0x23b638u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_23b63c:
    // 0x23b63c: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
label_23b640:
    if (ctx->pc == 0x23B640u) {
        ctx->pc = 0x23B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B63Cu;
        // 0x23b640: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B644u;
        goto label_23b644;
    }
    ctx->pc = 0x23B63Cu;
    {
        const bool branch_taken_0x23b63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B63Cu;
        // 0x23b640: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b63c) {
            ctx->pc = 0x23B85Cu;
            goto label_23b85c;
        }
    }
    ctx->pc = 0x23B644u;
label_23b644:
    // 0x23b644: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23b644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23b648:
    // 0x23b648: 0x244250c0  addiu       $v0, $v0, 0x50C0
    ctx->pc = 0x23b648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
label_23b64c:
    // 0x23b64c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23b64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23b650:
    // 0x23b650: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23b650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23b654:
    // 0x23b654: 0x800008  jr          $a0
label_23b658:
    if (ctx->pc == 0x23B658u) {
        ctx->pc = 0x23B65Cu;
        goto label_23b65c;
    }
    ctx->pc = 0x23B654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B65Cu: goto label_23b65c;
            case 0x23B68Cu: goto label_23b68c;
            case 0x23B6BCu: goto label_23b6bc;
            case 0x23B6D0u: goto label_23b6d0;
            case 0x23B708u: goto label_23b708;
            case 0x23B71Cu: goto label_23b71c;
            case 0x23B72Cu: goto label_23b72c;
            case 0x23B73Cu: goto label_23b73c;
            case 0x23B74Cu: goto label_23b74c;
            case 0x23B75Cu: goto label_23b75c;
            case 0x23B76Cu: goto label_23b76c;
            case 0x23B780u: goto label_23b780;
            case 0x23B85Cu: goto label_23b85c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B654u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23B65Cu;
label_23b65c:
    // 0x23b65c: 0xc08dacc  jal         func_236B30
label_23b660:
    if (ctx->pc == 0x23B660u) {
        ctx->pc = 0x23B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B65Cu;
        // 0x23b660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B664u;
        goto label_23b664;
    }
    ctx->pc = 0x23B65Cu;
    SET_GPR_U32(ctx, 31, 0x23B664u);
    ctx->pc = 0x23B660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B65Cu;
    // 0x23b660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B30u, 0x23B65Cu, 0x23B664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B664u;
label_23b664:
    // 0x23b664: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23b668:
    if (ctx->pc == 0x23B668u) {
        ctx->pc = 0x23B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B664u;
        // 0x23b668: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B66Cu;
        goto label_23b66c;
    }
    ctx->pc = 0x23B664u;
    {
        const bool branch_taken_0x23b664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B664u;
        // 0x23b668: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b664) {
            ctx->pc = 0x23B67Cu;
            goto label_23b67c;
        }
    }
    ctx->pc = 0x23B66Cu;
label_23b66c:
    // 0x23b66c: 0xc069832  jal         func_1A60C8
label_23b670:
    if (ctx->pc == 0x23B670u) {
        ctx->pc = 0x23B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B66Cu;
        // 0x23b670: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B674u;
        goto label_23b674;
    }
    ctx->pc = 0x23B66Cu;
    SET_GPR_U32(ctx, 31, 0x23B674u);
    ctx->pc = 0x23B670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B66Cu;
    // 0x23b670: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60C8u, 0x23B66Cu, 0x23B674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B674u;
label_23b674:
    // 0x23b674: 0x1000007a  b           . + 4 + (0x7A << 2)
label_23b678:
    if (ctx->pc == 0x23B678u) {
        ctx->pc = 0x23B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B674u;
        // 0x23b678: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B67Cu;
        goto label_23b67c;
    }
    ctx->pc = 0x23B674u;
    {
        const bool branch_taken_0x23b674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B674u;
        // 0x23b678: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b674) {
            ctx->pc = 0x23B860u;
            goto label_23b860;
        }
    }
    ctx->pc = 0x23B67Cu;
label_23b67c:
    // 0x23b67c: 0xc069832  jal         func_1A60C8
label_23b680:
    if (ctx->pc == 0x23B680u) {
        ctx->pc = 0x23B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B67Cu;
        // 0x23b680: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B684u;
        goto label_23b684;
    }
    ctx->pc = 0x23B67Cu;
    SET_GPR_U32(ctx, 31, 0x23B684u);
    ctx->pc = 0x23B680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B67Cu;
    // 0x23b680: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60C8u, 0x23B67Cu, 0x23B684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B684u;
label_23b684:
    // 0x23b684: 0x10000076  b           . + 4 + (0x76 << 2)
label_23b688:
    if (ctx->pc == 0x23B688u) {
        ctx->pc = 0x23B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B684u;
        // 0x23b688: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B68Cu;
        goto label_23b68c;
    }
    ctx->pc = 0x23B684u;
    {
        const bool branch_taken_0x23b684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B684u;
        // 0x23b688: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b684) {
            ctx->pc = 0x23B860u;
            goto label_23b860;
        }
    }
    ctx->pc = 0x23B68Cu;
label_23b68c:
    // 0x23b68c: 0xc08dacc  jal         func_236B30
label_23b690:
    if (ctx->pc == 0x23B690u) {
        ctx->pc = 0x23B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B68Cu;
        // 0x23b690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B694u;
        goto label_23b694;
    }
    ctx->pc = 0x23B68Cu;
    SET_GPR_U32(ctx, 31, 0x23B694u);
    ctx->pc = 0x23B690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B68Cu;
    // 0x23b690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B30u, 0x23B68Cu, 0x23B694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B694u;
label_23b694:
    // 0x23b694: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23b698:
    if (ctx->pc == 0x23B698u) {
        ctx->pc = 0x23B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B694u;
        // 0x23b698: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B69Cu;
        goto label_23b69c;
    }
    ctx->pc = 0x23B694u;
    {
        const bool branch_taken_0x23b694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B694u;
        // 0x23b698: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b694) {
            ctx->pc = 0x23B6ACu;
            goto label_23b6ac;
        }
    }
    ctx->pc = 0x23B69Cu;
label_23b69c:
    // 0x23b69c: 0xc069832  jal         func_1A60C8
label_23b6a0:
    if (ctx->pc == 0x23B6A0u) {
        ctx->pc = 0x23B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B69Cu;
        // 0x23b6a0: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B6A4u;
        goto label_23b6a4;
    }
    ctx->pc = 0x23B69Cu;
    SET_GPR_U32(ctx, 31, 0x23B6A4u);
    ctx->pc = 0x23B6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B69Cu;
    // 0x23b6a0: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60C8u, 0x23B69Cu, 0x23B6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B6A4u;
label_23b6a4:
    // 0x23b6a4: 0x1000006e  b           . + 4 + (0x6E << 2)
label_23b6a8:
    if (ctx->pc == 0x23B6A8u) {
        ctx->pc = 0x23B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6A4u;
        // 0x23b6a8: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B6ACu;
        goto label_23b6ac;
    }
    ctx->pc = 0x23B6A4u;
    {
        const bool branch_taken_0x23b6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6A4u;
        // 0x23b6a8: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b6a4) {
            ctx->pc = 0x23B860u;
            goto label_23b860;
        }
    }
    ctx->pc = 0x23B6ACu;
label_23b6ac:
    // 0x23b6ac: 0xc069832  jal         func_1A60C8
label_23b6b0:
    if (ctx->pc == 0x23B6B0u) {
        ctx->pc = 0x23B6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6ACu;
        // 0x23b6b0: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B6B4u;
        goto label_23b6b4;
    }
    ctx->pc = 0x23B6ACu;
    SET_GPR_U32(ctx, 31, 0x23B6B4u);
    ctx->pc = 0x23B6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B6ACu;
    // 0x23b6b0: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60C8u, 0x23B6ACu, 0x23B6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B6B4u;
label_23b6b4:
    // 0x23b6b4: 0x1000006a  b           . + 4 + (0x6A << 2)
label_23b6b8:
    if (ctx->pc == 0x23B6B8u) {
        ctx->pc = 0x23B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6B4u;
        // 0x23b6b8: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B6BCu;
        goto label_23b6bc;
    }
    ctx->pc = 0x23B6B4u;
    {
        const bool branch_taken_0x23b6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6B4u;
        // 0x23b6b8: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b6b4) {
            ctx->pc = 0x23B860u;
            goto label_23b860;
        }
    }
    ctx->pc = 0x23B6BCu;
label_23b6bc:
    // 0x23b6bc: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23b6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b6c0:
    // 0x23b6c0: 0xc069832  jal         func_1A60C8
label_23b6c4:
    if (ctx->pc == 0x23B6C4u) {
        ctx->pc = 0x23B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6C0u;
        // 0x23b6c4: 0x24050045  addiu       $a1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B6C8u;
        goto label_23b6c8;
    }
    ctx->pc = 0x23B6C0u;
    SET_GPR_U32(ctx, 31, 0x23B6C8u);
    ctx->pc = 0x23B6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B6C0u;
    // 0x23b6c4: 0x24050045  addiu       $a1, $zero, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60C8u, 0x23B6C0u, 0x23B6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B6C8u;
label_23b6c8:
    // 0x23b6c8: 0x10000065  b           . + 4 + (0x65 << 2)
label_23b6cc:
    if (ctx->pc == 0x23B6CCu) {
        ctx->pc = 0x23B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6C8u;
        // 0x23b6cc: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B6D0u;
        goto label_23b6d0;
    }
    ctx->pc = 0x23B6C8u;
    {
        const bool branch_taken_0x23b6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6C8u;
        // 0x23b6cc: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b6c8) {
            ctx->pc = 0x23B860u;
            goto label_23b860;
        }
    }
    ctx->pc = 0x23B6D0u;
label_23b6d0:
    // 0x23b6d0: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x23b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b6d4:
    // 0x23b6d4: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x23b6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_23b6d8:
    // 0x23b6d8: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x23b6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_23b6dc:
    // 0x23b6dc: 0x10640013  beq         $v1, $a0, . + 4 + (0x13 << 2)
label_23b6e0:
    if (ctx->pc == 0x23B6E0u) {
        ctx->pc = 0x23B6E4u;
        goto label_23b6e4;
    }
    ctx->pc = 0x23B6DCu;
    {
        const bool branch_taken_0x23b6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x23b6dc) {
            ctx->pc = 0x23B72Cu;
            goto label_23b72c;
        }
    }
    ctx->pc = 0x23B6E4u;
label_23b6e4:
    // 0x23b6e4: 0xc08f672  jal         func_23D9C8
label_23b6e8:
    if (ctx->pc == 0x23B6E8u) {
        ctx->pc = 0x23B6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6E4u;
        // 0x23b6e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B6ECu;
        goto label_23b6ec;
    }
    ctx->pc = 0x23B6E4u;
    SET_GPR_U32(ctx, 31, 0x23B6ECu);
    ctx->pc = 0x23B6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B6E4u;
    // 0x23b6e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x23B6E4u, 0x23B6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B6ECu;
label_23b6ec:
    // 0x23b6ec: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_23b6f0:
    if (ctx->pc == 0x23B6F0u) {
        ctx->pc = 0x23B6F4u;
        goto label_23b6f4;
    }
    ctx->pc = 0x23B6ECu;
    {
        const bool branch_taken_0x23b6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b6ec) {
            ctx->pc = 0x23B73Cu;
            goto label_23b73c;
        }
    }
    ctx->pc = 0x23B6F4u;
label_23b6f4:
    // 0x23b6f4: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23b6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b6f8:
    // 0x23b6f8: 0xc069832  jal         func_1A60C8
label_23b6fc:
    if (ctx->pc == 0x23B6FCu) {
        ctx->pc = 0x23B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6F8u;
        // 0x23b6fc: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B700u;
        goto label_23b700;
    }
    ctx->pc = 0x23B6F8u;
    SET_GPR_U32(ctx, 31, 0x23B700u);
    ctx->pc = 0x23B6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B6F8u;
    // 0x23b6fc: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60C8u, 0x23B6F8u, 0x23B700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B700u;
label_23b700:
    // 0x23b700: 0x10000057  b           . + 4 + (0x57 << 2)
label_23b704:
    if (ctx->pc == 0x23B704u) {
        ctx->pc = 0x23B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B700u;
        // 0x23b704: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B708u;
        goto label_23b708;
    }
    ctx->pc = 0x23B700u;
    {
        const bool branch_taken_0x23b700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B700u;
        // 0x23b704: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b700) {
            ctx->pc = 0x23B860u;
            goto label_23b860;
        }
    }
    ctx->pc = 0x23B708u;
label_23b708:
    // 0x23b708: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23b708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b70c:
    // 0x23b70c: 0xc069832  jal         func_1A60C8
label_23b710:
    if (ctx->pc == 0x23B710u) {
        ctx->pc = 0x23B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B70Cu;
        // 0x23b710: 0x24050051  addiu       $a1, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B714u;
        goto label_23b714;
    }
    ctx->pc = 0x23B70Cu;
    SET_GPR_U32(ctx, 31, 0x23B714u);
    ctx->pc = 0x23B710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B70Cu;
    // 0x23b710: 0x24050051  addiu       $a1, $zero, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60C8u, 0x23B70Cu, 0x23B714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B714u;
label_23b714:
    // 0x23b714: 0x10000052  b           . + 4 + (0x52 << 2)
label_23b718:
    if (ctx->pc == 0x23B718u) {
        ctx->pc = 0x23B718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B714u;
        // 0x23b718: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B71Cu;
        goto label_23b71c;
    }
    ctx->pc = 0x23B714u;
    {
        const bool branch_taken_0x23b714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B714u;
        // 0x23b718: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b714) {
            ctx->pc = 0x23B860u;
            goto label_23b860;
        }
    }
    ctx->pc = 0x23B71Cu;
label_23b71c:
    // 0x23b71c: 0xc08c08c  jal         func_230230
label_23b720:
    if (ctx->pc == 0x23B720u) {
        ctx->pc = 0x23B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B71Cu;
        // 0x23b720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B724u;
        goto label_23b724;
    }
    ctx->pc = 0x23B71Cu;
    SET_GPR_U32(ctx, 31, 0x23B724u);
    ctx->pc = 0x23B720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B71Cu;
    // 0x23b720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230230u, 0x23B71Cu, 0x23B724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B724u;
label_23b724:
    // 0x23b724: 0x1000004e  b           . + 4 + (0x4E << 2)
label_23b728:
    if (ctx->pc == 0x23B728u) {
        ctx->pc = 0x23B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B724u;
        // 0x23b728: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B72Cu;
        goto label_23b72c;
    }
    ctx->pc = 0x23B724u;
    {
        const bool branch_taken_0x23b724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B724u;
        // 0x23b728: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b724) {
            ctx->pc = 0x23B860u;
            goto label_23b860;
        }
    }
    ctx->pc = 0x23B72Cu;
label_23b72c:
    // 0x23b72c: 0xc0925d2  jal         func_249748
label_23b730:
    if (ctx->pc == 0x23B730u) {
        ctx->pc = 0x23B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B72Cu;
        // 0x23b730: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B734u;
        goto label_23b734;
    }
    ctx->pc = 0x23B72Cu;
    SET_GPR_U32(ctx, 31, 0x23B734u);
    ctx->pc = 0x23B730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B72Cu;
    // 0x23b730: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249748u, 0x23B72Cu, 0x23B734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B734u;
label_23b734:
    // 0x23b734: 0x1000004a  b           . + 4 + (0x4A << 2)
label_23b738:
    if (ctx->pc == 0x23B738u) {
        ctx->pc = 0x23B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B734u;
        // 0x23b738: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B73Cu;
        goto label_23b73c;
    }
    ctx->pc = 0x23B734u;
    {
        const bool branch_taken_0x23b734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B734u;
        // 0x23b738: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b734) {
            ctx->pc = 0x23B860u;
            goto label_23b860;
        }
    }
    ctx->pc = 0x23B73Cu;
label_23b73c:
    // 0x23b73c: 0xc09289a  jal         func_24A268
label_23b740:
    if (ctx->pc == 0x23B740u) {
        ctx->pc = 0x23B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B73Cu;
        // 0x23b740: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B744u;
        goto label_23b744;
    }
    ctx->pc = 0x23B73Cu;
    SET_GPR_U32(ctx, 31, 0x23B744u);
    ctx->pc = 0x23B740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B73Cu;
    // 0x23b740: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A268u, 0x23B73Cu, 0x23B744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B744u;
label_23b744:
    // 0x23b744: 0x10000046  b           . + 4 + (0x46 << 2)
label_23b748:
    if (ctx->pc == 0x23B748u) {
        ctx->pc = 0x23B748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B744u;
        // 0x23b748: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B74Cu;
        goto label_23b74c;
    }
    ctx->pc = 0x23B744u;
    {
        const bool branch_taken_0x23b744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B744u;
        // 0x23b748: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b744) {
            ctx->pc = 0x23B860u;
            goto label_23b860;
        }
    }
    ctx->pc = 0x23B74Cu;
label_23b74c:
    // 0x23b74c: 0xc091ed4  jal         func_247B50
label_23b750:
    if (ctx->pc == 0x23B750u) {
        ctx->pc = 0x23B750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B74Cu;
        // 0x23b750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B754u;
        goto label_23b754;
    }
    ctx->pc = 0x23B74Cu;
    SET_GPR_U32(ctx, 31, 0x23B754u);
    ctx->pc = 0x23B750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B74Cu;
    // 0x23b750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247B50u, 0x23B74Cu, 0x23B754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B754u;
label_23b754:
    // 0x23b754: 0x10000042  b           . + 4 + (0x42 << 2)
label_23b758:
    if (ctx->pc == 0x23B758u) {
        ctx->pc = 0x23B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B754u;
        // 0x23b758: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B75Cu;
        goto label_23b75c;
    }
    ctx->pc = 0x23B754u;
    {
        const bool branch_taken_0x23b754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B754u;
        // 0x23b758: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b754) {
            ctx->pc = 0x23B860u;
            goto label_23b860;
        }
    }
    ctx->pc = 0x23B75Cu;
label_23b75c:
    // 0x23b75c: 0xc092c80  jal         func_24B200
label_23b760:
    if (ctx->pc == 0x23B760u) {
        ctx->pc = 0x23B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B75Cu;
        // 0x23b760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B764u;
        goto label_23b764;
    }
    ctx->pc = 0x23B75Cu;
    SET_GPR_U32(ctx, 31, 0x23B764u);
    ctx->pc = 0x23B760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B75Cu;
    // 0x23b760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B200u, 0x23B75Cu, 0x23B764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B764u;
label_23b764:
    // 0x23b764: 0x1000003e  b           . + 4 + (0x3E << 2)
label_23b768:
    if (ctx->pc == 0x23B768u) {
        ctx->pc = 0x23B768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B764u;
        // 0x23b768: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B76Cu;
        goto label_23b76c;
    }
    ctx->pc = 0x23B764u;
    {
        const bool branch_taken_0x23b764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B764u;
        // 0x23b768: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b764) {
            ctx->pc = 0x23B860u;
            goto label_23b860;
        }
    }
    ctx->pc = 0x23B76Cu;
label_23b76c:
    // 0x23b76c: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23b76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b770:
    // 0x23b770: 0xc069832  jal         func_1A60C8
label_23b774:
    if (ctx->pc == 0x23B774u) {
        ctx->pc = 0x23B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B770u;
        // 0x23b774: 0x24050055  addiu       $a1, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B778u;
        goto label_23b778;
    }
    ctx->pc = 0x23B770u;
    SET_GPR_U32(ctx, 31, 0x23B778u);
    ctx->pc = 0x23B774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B770u;
    // 0x23b774: 0x24050055  addiu       $a1, $zero, 0x55 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60C8u, 0x23B770u, 0x23B778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B778u;
label_23b778:
    // 0x23b778: 0x10000039  b           . + 4 + (0x39 << 2)
label_23b77c:
    if (ctx->pc == 0x23B77Cu) {
        ctx->pc = 0x23B77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B778u;
        // 0x23b77c: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B780u;
        goto label_23b780;
    }
    ctx->pc = 0x23B778u;
    {
        const bool branch_taken_0x23b778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B778u;
        // 0x23b77c: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b778) {
            ctx->pc = 0x23B860u;
            goto label_23b860;
        }
    }
    ctx->pc = 0x23B780u;
label_23b780:
    // 0x23b780: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23b780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b784:
    // 0x23b784: 0x10000033  b           . + 4 + (0x33 << 2)
label_23b788:
    if (ctx->pc == 0x23B788u) {
        ctx->pc = 0x23B788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B784u;
        // 0x23b788: 0x24050059  addiu       $a1, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B78Cu;
        goto label_23b78c;
    }
    ctx->pc = 0x23B784u;
    {
        const bool branch_taken_0x23b784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B784u;
        // 0x23b788: 0x24050059  addiu       $a1, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b784) {
            ctx->pc = 0x23B854u;
            goto label_23b854;
        }
    }
    ctx->pc = 0x23B78Cu;
label_23b78c:
    // 0x23b78c: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x23b78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_23b790:
    // 0x23b790: 0x2c620014  sltiu       $v0, $v1, 0x14
    ctx->pc = 0x23b790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_23b794:
    // 0x23b794: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_23b798:
    if (ctx->pc == 0x23B798u) {
        ctx->pc = 0x23B798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B794u;
        // 0x23b798: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B79Cu;
        goto label_23b79c;
    }
    ctx->pc = 0x23B794u;
    {
        const bool branch_taken_0x23b794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B794u;
        // 0x23b798: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b794) {
            ctx->pc = 0x23B85Cu;
            goto label_23b85c;
        }
    }
    ctx->pc = 0x23B79Cu;
label_23b79c:
    // 0x23b79c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23b7a0:
    // 0x23b7a0: 0x24425110  addiu       $v0, $v0, 0x5110
    ctx->pc = 0x23b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20752));
label_23b7a4:
    // 0x23b7a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23b7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23b7a8:
    // 0x23b7a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23b7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23b7ac:
    // 0x23b7ac: 0x800008  jr          $a0
label_23b7b0:
    if (ctx->pc == 0x23B7B0u) {
        ctx->pc = 0x23B7B4u;
        goto label_23b7b4;
    }
    ctx->pc = 0x23B7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B708u: goto label_23b708;
            case 0x23B71Cu: goto label_23b71c;
            case 0x23B72Cu: goto label_23b72c;
            case 0x23B73Cu: goto label_23b73c;
            case 0x23B74Cu: goto label_23b74c;
            case 0x23B75Cu: goto label_23b75c;
            case 0x23B76Cu: goto label_23b76c;
            case 0x23B7B4u: goto label_23b7b4;
            case 0x23B7E8u: goto label_23b7e8;
            case 0x23B80Cu: goto label_23b80c;
            case 0x23B838u: goto label_23b838;
            case 0x23B85Cu: goto label_23b85c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B7ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23B7B4u;
label_23b7b4:
    // 0x23b7b4: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_23b7b8:
    // 0x23b7b8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23b7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23b7bc:
    // 0x23b7bc: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_23b7c0:
    if (ctx->pc == 0x23B7C0u) {
        ctx->pc = 0x23B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7BCu;
        // 0x23b7c0: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B7C4u;
        goto label_23b7c4;
    }
    ctx->pc = 0x23B7BCu;
    {
        const bool branch_taken_0x23b7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b7bc) {
            ctx->pc = 0x23B7C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B7BCu;
            // 0x23b7c0: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B7FCu;
            goto label_23b7fc;
        }
    }
    ctx->pc = 0x23B7C4u;
label_23b7c4:
    // 0x23b7c4: 0x8e2205a0  lw          $v0, 0x5A0($s1)
    ctx->pc = 0x23b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
label_23b7c8:
    // 0x23b7c8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_23b7cc:
    if (ctx->pc == 0x23B7CCu) {
        ctx->pc = 0x23B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7C8u;
        // 0x23b7cc: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B7D0u;
        goto label_23b7d0;
    }
    ctx->pc = 0x23B7C8u;
    {
        const bool branch_taken_0x23b7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b7c8) {
            ctx->pc = 0x23B7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B7C8u;
            // 0x23b7cc: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B7FCu;
            goto label_23b7fc;
        }
    }
    ctx->pc = 0x23B7D0u;
label_23b7d0:
    // 0x23b7d0: 0x8e220580  lw          $v0, 0x580($s1)
    ctx->pc = 0x23b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1408)));
label_23b7d4:
    // 0x23b7d4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_23b7d8:
    if (ctx->pc == 0x23B7D8u) {
        ctx->pc = 0x23B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7D4u;
        // 0x23b7d8: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B7DCu;
        goto label_23b7dc;
    }
    ctx->pc = 0x23B7D4u;
    {
        const bool branch_taken_0x23b7d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b7d4) {
            ctx->pc = 0x23B7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B7D4u;
            // 0x23b7d8: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B7ECu;
            goto label_23b7ec;
        }
    }
    ctx->pc = 0x23B7DCu;
label_23b7dc:
    // 0x23b7dc: 0x8e220584  lw          $v0, 0x584($s1)
    ctx->pc = 0x23b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1412)));
label_23b7e0:
    // 0x23b7e0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_23b7e4:
    if (ctx->pc == 0x23B7E4u) {
        ctx->pc = 0x23B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7E0u;
        // 0x23b7e4: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B7E8u;
        goto label_23b7e8;
    }
    ctx->pc = 0x23B7E0u;
    {
        const bool branch_taken_0x23b7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b7e0) {
            ctx->pc = 0x23B7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B7E0u;
            // 0x23b7e4: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B7FCu;
            goto label_23b7fc;
        }
    }
    ctx->pc = 0x23B7E8u;
label_23b7e8:
    // 0x23b7e8: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23b7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b7ec:
    // 0x23b7ec: 0xc069832  jal         func_1A60C8
label_23b7f0:
    if (ctx->pc == 0x23B7F0u) {
        ctx->pc = 0x23B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7ECu;
        // 0x23b7f0: 0x2405003d  addiu       $a1, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B7F4u;
        goto label_23b7f4;
    }
    ctx->pc = 0x23B7ECu;
    SET_GPR_U32(ctx, 31, 0x23B7F4u);
    ctx->pc = 0x23B7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B7ECu;
    // 0x23b7f0: 0x2405003d  addiu       $a1, $zero, 0x3D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60C8u, 0x23B7ECu, 0x23B7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B7F4u;
label_23b7f4:
    // 0x23b7f4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_23b7f8:
    if (ctx->pc == 0x23B7F8u) {
        ctx->pc = 0x23B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7F4u;
        // 0x23b7f8: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B7FCu;
        goto label_23b7fc;
    }
    ctx->pc = 0x23B7F4u;
    {
        const bool branch_taken_0x23b7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7F4u;
        // 0x23b7f8: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b7f4) {
            ctx->pc = 0x23B860u;
            goto label_23b860;
        }
    }
    ctx->pc = 0x23B7FCu;
label_23b7fc:
    // 0x23b7fc: 0xc069832  jal         func_1A60C8
label_23b800:
    if (ctx->pc == 0x23B800u) {
        ctx->pc = 0x23B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7FCu;
        // 0x23b800: 0x24050049  addiu       $a1, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B804u;
        goto label_23b804;
    }
    ctx->pc = 0x23B7FCu;
    SET_GPR_U32(ctx, 31, 0x23B804u);
    ctx->pc = 0x23B800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B7FCu;
    // 0x23b800: 0x24050049  addiu       $a1, $zero, 0x49 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60C8u, 0x23B7FCu, 0x23B804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B804u;
label_23b804:
    // 0x23b804: 0x10000016  b           . + 4 + (0x16 << 2)
label_23b808:
    if (ctx->pc == 0x23B808u) {
        ctx->pc = 0x23B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B804u;
        // 0x23b808: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B80Cu;
        goto label_23b80c;
    }
    ctx->pc = 0x23B804u;
    {
        const bool branch_taken_0x23b804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B804u;
        // 0x23b808: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b804) {
            ctx->pc = 0x23B860u;
            goto label_23b860;
        }
    }
    ctx->pc = 0x23B80Cu;
label_23b80c:
    // 0x23b80c: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x23b80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b810:
    // 0x23b810: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x23b810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_23b814:
    // 0x23b814: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x23b814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_23b818:
    // 0x23b818: 0x1064ffc4  beq         $v1, $a0, . + 4 + (-0x3C << 2)
label_23b81c:
    if (ctx->pc == 0x23B81Cu) {
        ctx->pc = 0x23B820u;
        goto label_23b820;
    }
    ctx->pc = 0x23B818u;
    {
        const bool branch_taken_0x23b818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x23b818) {
            ctx->pc = 0x23B72Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b72c;
        }
    }
    ctx->pc = 0x23B820u;
label_23b820:
    // 0x23b820: 0xc08f672  jal         func_23D9C8
label_23b824:
    if (ctx->pc == 0x23B824u) {
        ctx->pc = 0x23B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B820u;
        // 0x23b824: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B828u;
        goto label_23b828;
    }
    ctx->pc = 0x23B820u;
    SET_GPR_U32(ctx, 31, 0x23B828u);
    ctx->pc = 0x23B824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B820u;
    // 0x23b824: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x23B820u, 0x23B828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B828u;
label_23b828:
    // 0x23b828: 0x5040ffb3  beql        $v0, $zero, . + 4 + (-0x4D << 2)
label_23b82c:
    if (ctx->pc == 0x23B82Cu) {
        ctx->pc = 0x23B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B828u;
        // 0x23b82c: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B830u;
        goto label_23b830;
    }
    ctx->pc = 0x23B828u;
    {
        const bool branch_taken_0x23b828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b828) {
            ctx->pc = 0x23B82Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B828u;
            // 0x23b82c: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b6f8;
        }
    }
    ctx->pc = 0x23B830u;
label_23b830:
    // 0x23b830: 0x1000ffc2  b           . + 4 + (-0x3E << 2)
label_23b834:
    if (ctx->pc == 0x23B834u) {
        ctx->pc = 0x23B838u;
        goto label_23b838;
    }
    ctx->pc = 0x23B830u;
    {
        const bool branch_taken_0x23b830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b830) {
            ctx->pc = 0x23B73Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b73c;
        }
    }
    ctx->pc = 0x23B838u;
label_23b838:
    // 0x23b838: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23b838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b83c:
    // 0x23b83c: 0x10000005  b           . + 4 + (0x5 << 2)
label_23b840:
    if (ctx->pc == 0x23B840u) {
        ctx->pc = 0x23B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B83Cu;
        // 0x23b840: 0x24050059  addiu       $a1, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B844u;
        goto label_23b844;
    }
    ctx->pc = 0x23B83Cu;
    {
        const bool branch_taken_0x23b83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B83Cu;
        // 0x23b840: 0x24050059  addiu       $a1, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b83c) {
            ctx->pc = 0x23B854u;
            goto label_23b854;
        }
    }
    ctx->pc = 0x23B844u;
label_23b844:
    // 0x23b844: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_23b848:
    if (ctx->pc == 0x23B848u) {
        ctx->pc = 0x23B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B844u;
        // 0x23b848: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B84Cu;
        goto label_23b84c;
    }
    ctx->pc = 0x23B844u;
    {
        const bool branch_taken_0x23b844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b844) {
            ctx->pc = 0x23B848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B844u;
            // 0x23b848: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B860u;
            goto label_23b860;
        }
    }
    ctx->pc = 0x23B84Cu;
label_23b84c:
    // 0x23b84c: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23b84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b850:
    // 0x23b850: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x23b850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_23b854:
    // 0x23b854: 0xc069832  jal         func_1A60C8
label_23b858:
    if (ctx->pc == 0x23B858u) {
        ctx->pc = 0x23B85Cu;
        goto label_23b85c;
    }
    ctx->pc = 0x23B854u;
    SET_GPR_U32(ctx, 31, 0x23B85Cu);
    ctx->pc = 0x1A60C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60C8u, 0x23B854u, 0x23B85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B85Cu;
label_23b85c:
    // 0x23b85c: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x23b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b860:
    // 0x23b860: 0xc62004fc  lwc1        $f0, 0x4FC($s1)
    ctx->pc = 0x23b860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23b864:
    // 0x23b864: 0xe4400174  swc1        $f0, 0x174($v0)
    ctx->pc = 0x23b864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 372), bits); }
label_23b868:
    // 0x23b868: 0xc6210500  lwc1        $f1, 0x500($s1)
    ctx->pc = 0x23b868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23b86c:
    // 0x23b86c: 0xe4410178  swc1        $f1, 0x178($v0)
    ctx->pc = 0x23b86cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 376), bits); }
label_23b870:
    // 0x23b870: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x23b870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b874:
    // 0x23b874: 0x8c62014c  lw          $v0, 0x14C($v1)
    ctx->pc = 0x23b874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
label_23b878:
    // 0x23b878: 0x50400074  beql        $v0, $zero, . + 4 + (0x74 << 2)
label_23b87c:
    if (ctx->pc == 0x23B87Cu) {
        ctx->pc = 0x23B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B878u;
        // 0x23b87c: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B880u;
        goto label_23b880;
    }
    ctx->pc = 0x23B878u;
    {
        const bool branch_taken_0x23b878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b878) {
            ctx->pc = 0x23B87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B878u;
            // 0x23b87c: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BA4Cu;
            goto label_23ba4c;
        }
    }
    ctx->pc = 0x23B880u;
label_23b880:
    // 0x23b880: 0x8c640150  lw          $a0, 0x150($v1)
    ctx->pc = 0x23b880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_23b884:
    // 0x23b884: 0x10800070  beqz        $a0, . + 4 + (0x70 << 2)
label_23b888:
    if (ctx->pc == 0x23B888u) {
        ctx->pc = 0x23B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B884u;
        // 0x23b888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B88Cu;
        goto label_23b88c;
    }
    ctx->pc = 0x23B884u;
    {
        const bool branch_taken_0x23b884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B884u;
        // 0x23b888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b884) {
            ctx->pc = 0x23BA48u;
            goto label_23ba48;
        }
    }
    ctx->pc = 0x23B88Cu;
label_23b88c:
    // 0x23b88c: 0x5082006f  beql        $a0, $v0, . + 4 + (0x6F << 2)
label_23b890:
    if (ctx->pc == 0x23B890u) {
        ctx->pc = 0x23B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B88Cu;
        // 0x23b890: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B894u;
        goto label_23b894;
    }
    ctx->pc = 0x23B88Cu;
    {
        const bool branch_taken_0x23b88c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x23b88c) {
            ctx->pc = 0x23B890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B88Cu;
            // 0x23b890: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BA4Cu;
            goto label_23ba4c;
        }
    }
    ctx->pc = 0x23B894u;
label_23b894:
    // 0x23b894: 0x8c620160  lw          $v0, 0x160($v1)
    ctx->pc = 0x23b894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
label_23b898:
    // 0x23b898: 0x5040006c  beql        $v0, $zero, . + 4 + (0x6C << 2)
label_23b89c:
    if (ctx->pc == 0x23B89Cu) {
        ctx->pc = 0x23B89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B898u;
        // 0x23b89c: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B8A0u;
        goto label_23b8a0;
    }
    ctx->pc = 0x23B898u;
    {
        const bool branch_taken_0x23b898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b898) {
            ctx->pc = 0x23B89Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B898u;
            // 0x23b89c: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BA4Cu;
            goto label_23ba4c;
        }
    }
    ctx->pc = 0x23B8A0u;
label_23b8a0:
    // 0x23b8a0: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x23b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_23b8a4:
    // 0x23b8a4: 0x2c620014  sltiu       $v0, $v1, 0x14
    ctx->pc = 0x23b8a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_23b8a8:
    // 0x23b8a8: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_23b8ac:
    if (ctx->pc == 0x23B8ACu) {
        ctx->pc = 0x23B8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B8A8u;
        // 0x23b8ac: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B8B0u;
        goto label_23b8b0;
    }
    ctx->pc = 0x23B8A8u;
    {
        const bool branch_taken_0x23b8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B8A8u;
        // 0x23b8ac: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b8a8) {
            ctx->pc = 0x23BA48u;
            goto label_23ba48;
        }
    }
    ctx->pc = 0x23B8B0u;
label_23b8b0:
    // 0x23b8b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23b8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23b8b4:
    // 0x23b8b4: 0x24425160  addiu       $v0, $v0, 0x5160
    ctx->pc = 0x23b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20832));
label_23b8b8:
    // 0x23b8b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23b8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23b8bc:
    // 0x23b8bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23b8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23b8c0:
    // 0x23b8c0: 0x800008  jr          $a0
label_23b8c4:
    if (ctx->pc == 0x23B8C4u) {
        ctx->pc = 0x23B8C8u;
        goto label_23b8c8;
    }
    ctx->pc = 0x23B8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B8C8u: goto label_23b8c8;
            case 0x23B8ECu: goto label_23b8ec;
            case 0x23B914u: goto label_23b914;
            case 0x23B94Cu: goto label_23b94c;
            case 0x23B984u: goto label_23b984;
            case 0x23B9E0u: goto label_23b9e0;
            case 0x23B9F0u: goto label_23b9f0;
            case 0x23BA00u: goto label_23ba00;
            case 0x23BA10u: goto label_23ba10;
            case 0x23BA20u: goto label_23ba20;
            case 0x23BA38u: goto label_23ba38;
            case 0x23BA48u: goto label_23ba48;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B8C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23B8C8u;
label_23b8c8:
    // 0x23b8c8: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x23b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b8cc:
    // 0x23b8cc: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x23b8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_23b8d0:
    // 0x23b8d0: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x23b8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_23b8d4:
    // 0x23b8d4: 0x10640042  beq         $v1, $a0, . + 4 + (0x42 << 2)
label_23b8d8:
    if (ctx->pc == 0x23B8D8u) {
        ctx->pc = 0x23B8DCu;
        goto label_23b8dc;
    }
    ctx->pc = 0x23B8D4u;
    {
        const bool branch_taken_0x23b8d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x23b8d4) {
            ctx->pc = 0x23B9E0u;
            goto label_23b9e0;
        }
    }
    ctx->pc = 0x23B8DCu;
label_23b8dc:
    // 0x23b8dc: 0xc08f672  jal         func_23D9C8
label_23b8e0:
    if (ctx->pc == 0x23B8E0u) {
        ctx->pc = 0x23B8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B8DCu;
        // 0x23b8e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B8E4u;
        goto label_23b8e4;
    }
    ctx->pc = 0x23B8DCu;
    SET_GPR_U32(ctx, 31, 0x23B8E4u);
    ctx->pc = 0x23B8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B8DCu;
    // 0x23b8e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x23B8DCu, 0x23B8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B8E4u;
label_23b8e4:
    // 0x23b8e4: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
label_23b8e8:
    if (ctx->pc == 0x23B8E8u) {
        ctx->pc = 0x23B8ECu;
        goto label_23b8ec;
    }
    ctx->pc = 0x23B8E4u;
    {
        const bool branch_taken_0x23b8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b8e4) {
            ctx->pc = 0x23B9F0u;
            goto label_23b9f0;
        }
    }
    ctx->pc = 0x23B8ECu;
label_23b8ec:
    // 0x23b8ec: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23b8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_23b8f0:
    // 0x23b8f0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23b8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23b8f4:
    // 0x23b8f4: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
label_23b8f8:
    if (ctx->pc == 0x23B8F8u) {
        ctx->pc = 0x23B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B8F4u;
        // 0x23b8f8: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B8FCu;
        goto label_23b8fc;
    }
    ctx->pc = 0x23B8F4u;
    {
        const bool branch_taken_0x23b8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b8f4) {
            ctx->pc = 0x23B8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B8F4u;
            // 0x23b8f8: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B9CCu;
            goto label_23b9cc;
        }
    }
    ctx->pc = 0x23B8FCu;
label_23b8fc:
    // 0x23b8fc: 0xc08dacc  jal         func_236B30
label_23b900:
    if (ctx->pc == 0x23B900u) {
        ctx->pc = 0x23B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B8FCu;
        // 0x23b900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B904u;
        goto label_23b904;
    }
    ctx->pc = 0x23B8FCu;
    SET_GPR_U32(ctx, 31, 0x23B904u);
    ctx->pc = 0x23B900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B8FCu;
    // 0x23b900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B30u, 0x23B8FCu, 0x23B904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B904u;
label_23b904:
    // 0x23b904: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_23b908:
    if (ctx->pc == 0x23B908u) {
        ctx->pc = 0x23B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B904u;
        // 0x23b908: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B90Cu;
        goto label_23b90c;
    }
    ctx->pc = 0x23B904u;
    {
        const bool branch_taken_0x23b904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B904u;
        // 0x23b908: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b904) {
            ctx->pc = 0x23B924u;
            goto label_23b924;
        }
    }
    ctx->pc = 0x23B90Cu;
label_23b90c:
    // 0x23b90c: 0x1000000b  b           . + 4 + (0xB << 2)
label_23b910:
    if (ctx->pc == 0x23B910u) {
        ctx->pc = 0x23B910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B90Cu;
        // 0x23b910: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B914u;
        goto label_23b914;
    }
    ctx->pc = 0x23B90Cu;
    {
        const bool branch_taken_0x23b90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B90Cu;
        // 0x23b910: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b90c) {
            ctx->pc = 0x23B93Cu;
            goto label_23b93c;
        }
    }
    ctx->pc = 0x23B914u;
label_23b914:
    // 0x23b914: 0xc08dacc  jal         func_236B30
label_23b918:
    if (ctx->pc == 0x23B918u) {
        ctx->pc = 0x23B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B914u;
        // 0x23b918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B91Cu;
        goto label_23b91c;
    }
    ctx->pc = 0x23B914u;
    SET_GPR_U32(ctx, 31, 0x23B91Cu);
    ctx->pc = 0x23B918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B914u;
    // 0x23b918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B30u, 0x23B914u, 0x23B91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B91Cu;
label_23b91c:
    // 0x23b91c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_23b920:
    if (ctx->pc == 0x23B920u) {
        ctx->pc = 0x23B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B91Cu;
        // 0x23b920: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B924u;
        goto label_23b924;
    }
    ctx->pc = 0x23B91Cu;
    {
        const bool branch_taken_0x23b91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B91Cu;
        // 0x23b920: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b91c) {
            ctx->pc = 0x23B938u;
            goto label_23b938;
        }
    }
    ctx->pc = 0x23B924u;
label_23b924:
    // 0x23b924: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23b924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23b928:
    // 0x23b928: 0xc06a0cc  jal         func_1A8330
label_23b92c:
    if (ctx->pc == 0x23B92Cu) {
        ctx->pc = 0x23B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B928u;
        // 0x23b92c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B930u;
        goto label_23b930;
    }
    ctx->pc = 0x23B928u;
    SET_GPR_U32(ctx, 31, 0x23B930u);
    ctx->pc = 0x23B92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B928u;
    // 0x23b92c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23B928u, 0x23B930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B930u;
label_23b930:
    // 0x23b930: 0x10000046  b           . + 4 + (0x46 << 2)
label_23b934:
    if (ctx->pc == 0x23B934u) {
        ctx->pc = 0x23B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B930u;
        // 0x23b934: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B938u;
        goto label_23b938;
    }
    ctx->pc = 0x23B930u;
    {
        const bool branch_taken_0x23b930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B930u;
        // 0x23b934: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b930) {
            ctx->pc = 0x23BA4Cu;
            goto label_23ba4c;
        }
    }
    ctx->pc = 0x23B938u;
label_23b938:
    // 0x23b938: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23b938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23b93c:
    // 0x23b93c: 0xc06a0cc  jal         func_1A8330
label_23b940:
    if (ctx->pc == 0x23B940u) {
        ctx->pc = 0x23B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B93Cu;
        // 0x23b940: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B944u;
        goto label_23b944;
    }
    ctx->pc = 0x23B93Cu;
    SET_GPR_U32(ctx, 31, 0x23B944u);
    ctx->pc = 0x23B940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B93Cu;
    // 0x23b940: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23B93Cu, 0x23B944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B944u;
label_23b944:
    // 0x23b944: 0x10000041  b           . + 4 + (0x41 << 2)
label_23b948:
    if (ctx->pc == 0x23B948u) {
        ctx->pc = 0x23B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B944u;
        // 0x23b948: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B94Cu;
        goto label_23b94c;
    }
    ctx->pc = 0x23B944u;
    {
        const bool branch_taken_0x23b944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B944u;
        // 0x23b948: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b944) {
            ctx->pc = 0x23BA4Cu;
            goto label_23ba4c;
        }
    }
    ctx->pc = 0x23B94Cu;
label_23b94c:
    // 0x23b94c: 0xc08dacc  jal         func_236B30
label_23b950:
    if (ctx->pc == 0x23B950u) {
        ctx->pc = 0x23B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B94Cu;
        // 0x23b950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B954u;
        goto label_23b954;
    }
    ctx->pc = 0x23B94Cu;
    SET_GPR_U32(ctx, 31, 0x23B954u);
    ctx->pc = 0x23B950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B94Cu;
    // 0x23b950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B30u, 0x23B94Cu, 0x23B954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B954u;
label_23b954:
    // 0x23b954: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_23b958:
    if (ctx->pc == 0x23B958u) {
        ctx->pc = 0x23B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B954u;
        // 0x23b958: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B95Cu;
        goto label_23b95c;
    }
    ctx->pc = 0x23B954u;
    {
        const bool branch_taken_0x23b954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B954u;
        // 0x23b958: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b954) {
            ctx->pc = 0x23B970u;
            goto label_23b970;
        }
    }
    ctx->pc = 0x23B95Cu;
label_23b95c:
    // 0x23b95c: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23b95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b960:
    // 0x23b960: 0xc06a0cc  jal         func_1A8330
label_23b964:
    if (ctx->pc == 0x23B964u) {
        ctx->pc = 0x23B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B960u;
        // 0x23b964: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B968u;
        goto label_23b968;
    }
    ctx->pc = 0x23B960u;
    SET_GPR_U32(ctx, 31, 0x23B968u);
    ctx->pc = 0x23B964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B960u;
    // 0x23b964: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23B960u, 0x23B968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B968u;
label_23b968:
    // 0x23b968: 0x10000038  b           . + 4 + (0x38 << 2)
label_23b96c:
    if (ctx->pc == 0x23B96Cu) {
        ctx->pc = 0x23B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B968u;
        // 0x23b96c: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B970u;
        goto label_23b970;
    }
    ctx->pc = 0x23B968u;
    {
        const bool branch_taken_0x23b968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B968u;
        // 0x23b96c: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b968) {
            ctx->pc = 0x23BA4Cu;
            goto label_23ba4c;
        }
    }
    ctx->pc = 0x23B970u;
label_23b970:
    // 0x23b970: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23b970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b974:
    // 0x23b974: 0xc06a0cc  jal         func_1A8330
label_23b978:
    if (ctx->pc == 0x23B978u) {
        ctx->pc = 0x23B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B974u;
        // 0x23b978: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B97Cu;
        goto label_23b97c;
    }
    ctx->pc = 0x23B974u;
    SET_GPR_U32(ctx, 31, 0x23B97Cu);
    ctx->pc = 0x23B978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B974u;
    // 0x23b978: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23B974u, 0x23B97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B97Cu;
label_23b97c:
    // 0x23b97c: 0x10000033  b           . + 4 + (0x33 << 2)
label_23b980:
    if (ctx->pc == 0x23B980u) {
        ctx->pc = 0x23B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B97Cu;
        // 0x23b980: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B984u;
        goto label_23b984;
    }
    ctx->pc = 0x23B97Cu;
    {
        const bool branch_taken_0x23b97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B97Cu;
        // 0x23b980: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b97c) {
            ctx->pc = 0x23BA4Cu;
            goto label_23ba4c;
        }
    }
    ctx->pc = 0x23B984u;
label_23b984:
    // 0x23b984: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23b984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_23b988:
    // 0x23b988: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23b988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23b98c:
    // 0x23b98c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23b990:
    if (ctx->pc == 0x23B990u) {
        ctx->pc = 0x23B994u;
        goto label_23b994;
    }
    ctx->pc = 0x23B98Cu;
    {
        const bool branch_taken_0x23b98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b98c) {
            ctx->pc = 0x23B9A4u;
            goto label_23b9a4;
        }
    }
    ctx->pc = 0x23B994u;
label_23b994:
    // 0x23b994: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x23b994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_23b998:
    // 0x23b998: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23b998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_23b99c:
    // 0x23b99c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_23b9a0:
    if (ctx->pc == 0x23B9A0u) {
        ctx->pc = 0x23B9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B99Cu;
        // 0x23b9a0: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B9A4u;
        goto label_23b9a4;
    }
    ctx->pc = 0x23B99Cu;
    {
        const bool branch_taken_0x23b99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b99c) {
            ctx->pc = 0x23B9A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B99Cu;
            // 0x23b9a0: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B9CCu;
            goto label_23b9cc;
        }
    }
    ctx->pc = 0x23B9A4u;
label_23b9a4:
    // 0x23b9a4: 0xc089490  jal         func_225240
label_23b9a8:
    if (ctx->pc == 0x23B9A8u) {
        ctx->pc = 0x23B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9A4u;
        // 0x23b9a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B9ACu;
        goto label_23b9ac;
    }
    ctx->pc = 0x23B9A4u;
    SET_GPR_U32(ctx, 31, 0x23B9ACu);
    ctx->pc = 0x23B9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B9A4u;
    // 0x23b9a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225240u, 0x23B9A4u, 0x23B9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B9ACu;
label_23b9ac:
    // 0x23b9ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_23b9b0:
    if (ctx->pc == 0x23B9B0u) {
        ctx->pc = 0x23B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9ACu;
        // 0x23b9b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B9B4u;
        goto label_23b9b4;
    }
    ctx->pc = 0x23B9ACu;
    {
        const bool branch_taken_0x23b9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9ACu;
        // 0x23b9b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9ac) {
            ctx->pc = 0x23B9C8u;
            goto label_23b9c8;
        }
    }
    ctx->pc = 0x23B9B4u;
label_23b9b4:
    // 0x23b9b4: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23b9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b9b8:
    // 0x23b9b8: 0xc06a0cc  jal         func_1A8330
label_23b9bc:
    if (ctx->pc == 0x23B9BCu) {
        ctx->pc = 0x23B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9B8u;
        // 0x23b9bc: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B9C0u;
        goto label_23b9c0;
    }
    ctx->pc = 0x23B9B8u;
    SET_GPR_U32(ctx, 31, 0x23B9C0u);
    ctx->pc = 0x23B9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B9B8u;
    // 0x23b9bc: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23B9B8u, 0x23B9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B9C0u;
label_23b9c0:
    // 0x23b9c0: 0x10000022  b           . + 4 + (0x22 << 2)
label_23b9c4:
    if (ctx->pc == 0x23B9C4u) {
        ctx->pc = 0x23B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9C0u;
        // 0x23b9c4: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B9C8u;
        goto label_23b9c8;
    }
    ctx->pc = 0x23B9C0u;
    {
        const bool branch_taken_0x23b9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9C0u;
        // 0x23b9c4: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9c0) {
            ctx->pc = 0x23BA4Cu;
            goto label_23ba4c;
        }
    }
    ctx->pc = 0x23B9C8u;
label_23b9c8:
    // 0x23b9c8: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23b9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23b9cc:
    // 0x23b9cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23b9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23b9d0:
    // 0x23b9d0: 0xc06a0cc  jal         func_1A8330
label_23b9d4:
    if (ctx->pc == 0x23B9D4u) {
        ctx->pc = 0x23B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9D0u;
        // 0x23b9d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B9D8u;
        goto label_23b9d8;
    }
    ctx->pc = 0x23B9D0u;
    SET_GPR_U32(ctx, 31, 0x23B9D8u);
    ctx->pc = 0x23B9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B9D0u;
    // 0x23b9d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23B9D0u, 0x23B9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B9D8u;
label_23b9d8:
    // 0x23b9d8: 0x1000001c  b           . + 4 + (0x1C << 2)
label_23b9dc:
    if (ctx->pc == 0x23B9DCu) {
        ctx->pc = 0x23B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9D8u;
        // 0x23b9dc: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B9E0u;
        goto label_23b9e0;
    }
    ctx->pc = 0x23B9D8u;
    {
        const bool branch_taken_0x23b9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9D8u;
        // 0x23b9dc: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9d8) {
            ctx->pc = 0x23BA4Cu;
            goto label_23ba4c;
        }
    }
    ctx->pc = 0x23B9E0u;
label_23b9e0:
    // 0x23b9e0: 0xc0925d2  jal         func_249748
label_23b9e4:
    if (ctx->pc == 0x23B9E4u) {
        ctx->pc = 0x23B9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9E0u;
        // 0x23b9e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B9E8u;
        goto label_23b9e8;
    }
    ctx->pc = 0x23B9E0u;
    SET_GPR_U32(ctx, 31, 0x23B9E8u);
    ctx->pc = 0x23B9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B9E0u;
    // 0x23b9e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249748u, 0x23B9E0u, 0x23B9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B9E8u;
label_23b9e8:
    // 0x23b9e8: 0x10000018  b           . + 4 + (0x18 << 2)
label_23b9ec:
    if (ctx->pc == 0x23B9ECu) {
        ctx->pc = 0x23B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9E8u;
        // 0x23b9ec: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B9F0u;
        goto label_23b9f0;
    }
    ctx->pc = 0x23B9E8u;
    {
        const bool branch_taken_0x23b9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9E8u;
        // 0x23b9ec: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9e8) {
            ctx->pc = 0x23BA4Cu;
            goto label_23ba4c;
        }
    }
    ctx->pc = 0x23B9F0u;
label_23b9f0:
    // 0x23b9f0: 0xc09289a  jal         func_24A268
label_23b9f4:
    if (ctx->pc == 0x23B9F4u) {
        ctx->pc = 0x23B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9F0u;
        // 0x23b9f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B9F8u;
        goto label_23b9f8;
    }
    ctx->pc = 0x23B9F0u;
    SET_GPR_U32(ctx, 31, 0x23B9F8u);
    ctx->pc = 0x23B9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B9F0u;
    // 0x23b9f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A268u, 0x23B9F0u, 0x23B9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B9F8u;
label_23b9f8:
    // 0x23b9f8: 0x10000014  b           . + 4 + (0x14 << 2)
label_23b9fc:
    if (ctx->pc == 0x23B9FCu) {
        ctx->pc = 0x23B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9F8u;
        // 0x23b9fc: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA00u;
        goto label_23ba00;
    }
    ctx->pc = 0x23B9F8u;
    {
        const bool branch_taken_0x23b9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9F8u;
        // 0x23b9fc: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9f8) {
            ctx->pc = 0x23BA4Cu;
            goto label_23ba4c;
        }
    }
    ctx->pc = 0x23BA00u;
label_23ba00:
    // 0x23ba00: 0xc091ed4  jal         func_247B50
label_23ba04:
    if (ctx->pc == 0x23BA04u) {
        ctx->pc = 0x23BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA00u;
        // 0x23ba04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA08u;
        goto label_23ba08;
    }
    ctx->pc = 0x23BA00u;
    SET_GPR_U32(ctx, 31, 0x23BA08u);
    ctx->pc = 0x23BA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BA00u;
    // 0x23ba04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247B50u, 0x23BA00u, 0x23BA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BA08u;
label_23ba08:
    // 0x23ba08: 0x10000010  b           . + 4 + (0x10 << 2)
label_23ba0c:
    if (ctx->pc == 0x23BA0Cu) {
        ctx->pc = 0x23BA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA08u;
        // 0x23ba0c: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA10u;
        goto label_23ba10;
    }
    ctx->pc = 0x23BA08u;
    {
        const bool branch_taken_0x23ba08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA08u;
        // 0x23ba0c: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba08) {
            ctx->pc = 0x23BA4Cu;
            goto label_23ba4c;
        }
    }
    ctx->pc = 0x23BA10u;
label_23ba10:
    // 0x23ba10: 0xc092c80  jal         func_24B200
label_23ba14:
    if (ctx->pc == 0x23BA14u) {
        ctx->pc = 0x23BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA10u;
        // 0x23ba14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA18u;
        goto label_23ba18;
    }
    ctx->pc = 0x23BA10u;
    SET_GPR_U32(ctx, 31, 0x23BA18u);
    ctx->pc = 0x23BA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BA10u;
    // 0x23ba14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B200u, 0x23BA10u, 0x23BA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BA18u;
label_23ba18:
    // 0x23ba18: 0x1000000c  b           . + 4 + (0xC << 2)
label_23ba1c:
    if (ctx->pc == 0x23BA1Cu) {
        ctx->pc = 0x23BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA18u;
        // 0x23ba1c: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA20u;
        goto label_23ba20;
    }
    ctx->pc = 0x23BA18u;
    {
        const bool branch_taken_0x23ba18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA18u;
        // 0x23ba1c: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba18) {
            ctx->pc = 0x23BA4Cu;
            goto label_23ba4c;
        }
    }
    ctx->pc = 0x23BA20u;
label_23ba20:
    // 0x23ba20: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23ba20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23ba24:
    // 0x23ba24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23ba24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ba28:
    // 0x23ba28: 0xc06a0cc  jal         func_1A8330
label_23ba2c:
    if (ctx->pc == 0x23BA2Cu) {
        ctx->pc = 0x23BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA28u;
        // 0x23ba2c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA30u;
        goto label_23ba30;
    }
    ctx->pc = 0x23BA28u;
    SET_GPR_U32(ctx, 31, 0x23BA30u);
    ctx->pc = 0x23BA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BA28u;
    // 0x23ba2c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23BA28u, 0x23BA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BA30u;
label_23ba30:
    // 0x23ba30: 0x10000006  b           . + 4 + (0x6 << 2)
label_23ba34:
    if (ctx->pc == 0x23BA34u) {
        ctx->pc = 0x23BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA30u;
        // 0x23ba34: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA38u;
        goto label_23ba38;
    }
    ctx->pc = 0x23BA30u;
    {
        const bool branch_taken_0x23ba30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA30u;
        // 0x23ba34: 0x8e2205c8  lw          $v0, 0x5C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba30) {
            ctx->pc = 0x23BA4Cu;
            goto label_23ba4c;
        }
    }
    ctx->pc = 0x23BA38u;
label_23ba38:
    // 0x23ba38: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23ba38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23ba3c:
    // 0x23ba3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23ba3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ba40:
    // 0x23ba40: 0xc06a0cc  jal         func_1A8330
label_23ba44:
    if (ctx->pc == 0x23BA44u) {
        ctx->pc = 0x23BA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA40u;
        // 0x23ba44: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA48u;
        goto label_23ba48;
    }
    ctx->pc = 0x23BA40u;
    SET_GPR_U32(ctx, 31, 0x23BA48u);
    ctx->pc = 0x23BA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BA40u;
    // 0x23ba44: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23BA40u, 0x23BA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BA48u;
label_23ba48:
    // 0x23ba48: 0x8e2205c8  lw          $v0, 0x5C8($s1)
    ctx->pc = 0x23ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
label_23ba4c:
    // 0x23ba4c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_23ba50:
    if (ctx->pc == 0x23BA50u) {
        ctx->pc = 0x23BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA4Cu;
        // 0x23ba50: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA54u;
        goto label_23ba54;
    }
    ctx->pc = 0x23BA4Cu;
    {
        const bool branch_taken_0x23ba4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA4Cu;
        // 0x23ba50: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba4c) {
            ctx->pc = 0x23BAD8u;
            goto label_23bad8;
        }
    }
    ctx->pc = 0x23BA54u;
label_23ba54:
    // 0x23ba54: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23ba54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23ba58:
    // 0x23ba58: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_23ba5c:
    if (ctx->pc == 0x23BA5Cu) {
        ctx->pc = 0x23BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA58u;
        // 0x23ba5c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA60u;
        goto label_23ba60;
    }
    ctx->pc = 0x23BA58u;
    {
        const bool branch_taken_0x23ba58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA58u;
        // 0x23ba5c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba58) {
            ctx->pc = 0x23BA8Cu;
            goto label_23ba8c;
        }
    }
    ctx->pc = 0x23BA60u;
label_23ba60:
    // 0x23ba60: 0x92221384  lbu         $v0, 0x1384($s1)
    ctx->pc = 0x23ba60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4996)));
label_23ba64:
    // 0x23ba64: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_23ba68:
    if (ctx->pc == 0x23BA68u) {
        ctx->pc = 0x23BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA64u;
        // 0x23ba68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA6Cu;
        goto label_23ba6c;
    }
    ctx->pc = 0x23BA64u;
    {
        const bool branch_taken_0x23ba64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ba64) {
            ctx->pc = 0x23BA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BA64u;
            // 0x23ba68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BA8Cu;
            goto label_23ba8c;
        }
    }
    ctx->pc = 0x23BA6Cu;
label_23ba6c:
    // 0x23ba6c: 0xc0bf866  jal         func_2FE198
label_23ba70:
    if (ctx->pc == 0x23BA70u) {
        ctx->pc = 0x23BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA6Cu;
        // 0x23ba70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA74u;
        goto label_23ba74;
    }
    ctx->pc = 0x23BA6Cu;
    SET_GPR_U32(ctx, 31, 0x23BA74u);
    ctx->pc = 0x23BA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BA6Cu;
    // 0x23ba70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE198u, 0x23BA6Cu, 0x23BA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BA74u;
label_23ba74:
    // 0x23ba74: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x23ba74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23ba78:
    // 0x23ba78: 0x0  nop
    ctx->pc = 0x23ba78u;
    // NOP
label_23ba7c:
    // 0x23ba7c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23ba7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23ba80:
    // 0x23ba80: 0x0  nop
    ctx->pc = 0x23ba80u;
    // NOP
label_23ba84:
    // 0x23ba84: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_23ba88:
    if (ctx->pc == 0x23BA88u) {
        ctx->pc = 0x23BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA84u;
        // 0x23ba88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA8Cu;
        goto label_23ba8c;
    }
    ctx->pc = 0x23BA84u;
    {
        const bool branch_taken_0x23ba84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ba84) {
            ctx->pc = 0x23BA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BA84u;
            // 0x23ba88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BA8Cu;
            goto label_23ba8c;
        }
    }
    ctx->pc = 0x23BA8Cu;
label_23ba8c:
    // 0x23ba8c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_23ba90:
    if (ctx->pc == 0x23BA90u) {
        ctx->pc = 0x23BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA8Cu;
        // 0x23ba90: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA94u;
        goto label_23ba94;
    }
    ctx->pc = 0x23BA8Cu;
    {
        const bool branch_taken_0x23ba8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA8Cu;
        // 0x23ba90: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba8c) {
            ctx->pc = 0x23BAD8u;
            goto label_23bad8;
        }
    }
    ctx->pc = 0x23BA94u;
label_23ba94:
    // 0x23ba94: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23ba94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23ba98:
    // 0x23ba98: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_23ba9c:
    if (ctx->pc == 0x23BA9Cu) {
        ctx->pc = 0x23BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA98u;
        // 0x23ba9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BAA0u;
        goto label_23baa0;
    }
    ctx->pc = 0x23BA98u;
    {
        const bool branch_taken_0x23ba98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA98u;
        // 0x23ba9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba98) {
            ctx->pc = 0x23BAC0u;
            goto label_23bac0;
        }
    }
    ctx->pc = 0x23BAA0u;
label_23baa0:
    // 0x23baa0: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x23baa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23baa4:
    // 0x23baa4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x23baa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_23baa8:
    // 0x23baa8: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x23baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_23baac:
    // 0x23baac: 0x50440004  beql        $v0, $a0, . + 4 + (0x4 << 2)
label_23bab0:
    if (ctx->pc == 0x23BAB0u) {
        ctx->pc = 0x23BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BAACu;
        // 0x23bab0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BAB4u;
        goto label_23bab4;
    }
    ctx->pc = 0x23BAACu;
    {
        const bool branch_taken_0x23baac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x23baac) {
            ctx->pc = 0x23BAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BAACu;
            // 0x23bab0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BAC0u;
            goto label_23bac0;
        }
    }
    ctx->pc = 0x23BAB4u;
label_23bab4:
    // 0x23bab4: 0x8c62014c  lw          $v0, 0x14C($v1)
    ctx->pc = 0x23bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
label_23bab8:
    // 0x23bab8: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
label_23babc:
    if (ctx->pc == 0x23BABCu) {
        ctx->pc = 0x23BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BAB8u;
        // 0x23babc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BAC0u;
        goto label_23bac0;
    }
    ctx->pc = 0x23BAB8u;
    {
        const bool branch_taken_0x23bab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x23bab8) {
            ctx->pc = 0x23BABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BAB8u;
            // 0x23babc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BAC0u;
            goto label_23bac0;
        }
    }
    ctx->pc = 0x23BAC0u;
label_23bac0:
    // 0x23bac0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x23bac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_23bac4:
    // 0x23bac4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23bac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_23bac8:
    // 0x23bac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23bac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23bacc:
    // 0x23bacc: 0xc08eb12  jal         func_23AC48
label_23bad0:
    if (ctx->pc == 0x23BAD0u) {
        ctx->pc = 0x23BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BACCu;
        // 0x23bad0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BAD4u;
        goto label_23bad4;
    }
    ctx->pc = 0x23BACCu;
    SET_GPR_U32(ctx, 31, 0x23BAD4u);
    ctx->pc = 0x23BAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BACCu;
    // 0x23bad0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AC48u, 0x23BACCu, 0x23BAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BAD4u;
label_23bad4:
    // 0x23bad4: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_23bad8:
    // 0x23bad8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23bad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23badc:
    // 0x23badc: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
label_23bae0:
    if (ctx->pc == 0x23BAE0u) {
        ctx->pc = 0x23BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BADCu;
        // 0x23bae0: 0x8e220560  lw          $v0, 0x560($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BAE4u;
        goto label_23bae4;
    }
    ctx->pc = 0x23BADCu;
    {
        const bool branch_taken_0x23badc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23badc) {
            ctx->pc = 0x23BAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BADCu;
            // 0x23bae0: 0x8e220560  lw          $v0, 0x560($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BC04u;
            goto label_23bc04;
        }
    }
    ctx->pc = 0x23BAE4u;
label_23bae4:
    // 0x23bae4: 0x8e2205ec  lw          $v0, 0x5EC($s1)
    ctx->pc = 0x23bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1516)));
label_23bae8:
    // 0x23bae8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_23baec:
    if (ctx->pc == 0x23BAECu) {
        ctx->pc = 0x23BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BAE8u;
        // 0x23baec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BAF0u;
        goto label_23baf0;
    }
    ctx->pc = 0x23BAE8u;
    {
        const bool branch_taken_0x23bae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BAE8u;
        // 0x23baec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bae8) {
            ctx->pc = 0x23BB58u;
            goto label_23bb58;
        }
    }
    ctx->pc = 0x23BAF0u;
label_23baf0:
    // 0x23baf0: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x23baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_23baf4:
    // 0x23baf4: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x23baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_23baf8:
    // 0x23baf8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23baf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23bafc:
    // 0x23bafc: 0x50430017  beql        $v0, $v1, . + 4 + (0x17 << 2)
label_23bb00:
    if (ctx->pc == 0x23BB00u) {
        ctx->pc = 0x23BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BAFCu;
        // 0x23bb00: 0x8e220560  lw          $v0, 0x560($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB04u;
        goto label_23bb04;
    }
    ctx->pc = 0x23BAFCu;
    {
        const bool branch_taken_0x23bafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x23bafc) {
            ctx->pc = 0x23BB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BAFCu;
            // 0x23bb00: 0x8e220560  lw          $v0, 0x560($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BB5Cu;
            goto label_23bb5c;
        }
    }
    ctx->pc = 0x23BB04u;
label_23bb04:
    // 0x23bb04: 0x8e220534  lw          $v0, 0x534($s1)
    ctx->pc = 0x23bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1332)));
label_23bb08:
    // 0x23bb08: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_23bb0c:
    if (ctx->pc == 0x23BB0Cu) {
        ctx->pc = 0x23BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB08u;
        // 0x23bb0c: 0x8e220560  lw          $v0, 0x560($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB10u;
        goto label_23bb10;
    }
    ctx->pc = 0x23BB08u;
    {
        const bool branch_taken_0x23bb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bb08) {
            ctx->pc = 0x23BB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BB08u;
            // 0x23bb0c: 0x8e220560  lw          $v0, 0x560($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BB5Cu;
            goto label_23bb5c;
        }
    }
    ctx->pc = 0x23BB10u;
label_23bb10:
    // 0x23bb10: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x23bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23bb14:
    // 0x23bb14: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x23bb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_23bb18:
    // 0x23bb18: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x23bb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_23bb1c:
    // 0x23bb1c: 0x5064000f  beql        $v1, $a0, . + 4 + (0xF << 2)
label_23bb20:
    if (ctx->pc == 0x23BB20u) {
        ctx->pc = 0x23BB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB1Cu;
        // 0x23bb20: 0x8e220560  lw          $v0, 0x560($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB24u;
        goto label_23bb24;
    }
    ctx->pc = 0x23BB1Cu;
    {
        const bool branch_taken_0x23bb1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x23bb1c) {
            ctx->pc = 0x23BB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BB1Cu;
            // 0x23bb20: 0x8e220560  lw          $v0, 0x560($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BB5Cu;
            goto label_23bb5c;
        }
    }
    ctx->pc = 0x23BB24u;
label_23bb24:
    // 0x23bb24: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x23bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_23bb28:
    // 0x23bb28: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x23bb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_23bb2c:
    // 0x23bb2c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_23bb30:
    if (ctx->pc == 0x23BB30u) {
        ctx->pc = 0x23BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB2Cu;
        // 0x23bb30: 0x8e220560  lw          $v0, 0x560($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB34u;
        goto label_23bb34;
    }
    ctx->pc = 0x23BB2Cu;
    {
        const bool branch_taken_0x23bb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bb2c) {
            ctx->pc = 0x23BB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BB2Cu;
            // 0x23bb30: 0x8e220560  lw          $v0, 0x560($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BB5Cu;
            goto label_23bb5c;
        }
    }
    ctx->pc = 0x23BB34u;
label_23bb34:
    // 0x23bb34: 0xc0bf228  jal         func_2FC8A0
label_23bb38:
    if (ctx->pc == 0x23BB38u) {
        ctx->pc = 0x23BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB34u;
        // 0x23bb38: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB3Cu;
        goto label_23bb3c;
    }
    ctx->pc = 0x23BB34u;
    SET_GPR_U32(ctx, 31, 0x23BB3Cu);
    ctx->pc = 0x23BB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BB34u;
    // 0x23bb38: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC8A0u, 0x23BB34u, 0x23BB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BB3Cu;
label_23bb3c:
    // 0x23bb3c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_23bb40:
    if (ctx->pc == 0x23BB40u) {
        ctx->pc = 0x23BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB3Cu;
        // 0x23bb40: 0x8e220560  lw          $v0, 0x560($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB44u;
        goto label_23bb44;
    }
    ctx->pc = 0x23BB3Cu;
    {
        const bool branch_taken_0x23bb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bb3c) {
            ctx->pc = 0x23BB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BB3Cu;
            // 0x23bb40: 0x8e220560  lw          $v0, 0x560($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BB5Cu;
            goto label_23bb5c;
        }
    }
    ctx->pc = 0x23BB44u;
label_23bb44:
    // 0x23bb44: 0x8e220588  lw          $v0, 0x588($s1)
    ctx->pc = 0x23bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1416)));
label_23bb48:
    // 0x23bb48: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_23bb4c:
    if (ctx->pc == 0x23BB4Cu) {
        ctx->pc = 0x23BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB48u;
        // 0x23bb4c: 0x8e220560  lw          $v0, 0x560($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB50u;
        goto label_23bb50;
    }
    ctx->pc = 0x23BB48u;
    {
        const bool branch_taken_0x23bb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bb48) {
            ctx->pc = 0x23BB4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BB48u;
            // 0x23bb4c: 0x8e220560  lw          $v0, 0x560($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BB5Cu;
            goto label_23bb5c;
        }
    }
    ctx->pc = 0x23BB50u;
label_23bb50:
    // 0x23bb50: 0x8e22058c  lw          $v0, 0x58C($s1)
    ctx->pc = 0x23bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1420)));
label_23bb54:
    // 0x23bb54: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x23bb54u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23bb58:
    // 0x23bb58: 0x8e220560  lw          $v0, 0x560($s1)
    ctx->pc = 0x23bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
label_23bb5c:
    // 0x23bb5c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_23bb60:
    if (ctx->pc == 0x23BB60u) {
        ctx->pc = 0x23BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB5Cu;
        // 0x23bb60: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB64u;
        goto label_23bb64;
    }
    ctx->pc = 0x23BB5Cu;
    {
        const bool branch_taken_0x23bb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB5Cu;
        // 0x23bb60: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb5c) {
            ctx->pc = 0x23BBDCu;
            goto label_23bbdc;
        }
    }
    ctx->pc = 0x23BB64u;
label_23bb64:
    // 0x23bb64: 0xc08f672  jal         func_23D9C8
label_23bb68:
    if (ctx->pc == 0x23BB68u) {
        ctx->pc = 0x23BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB64u;
        // 0x23bb68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB6Cu;
        goto label_23bb6c;
    }
    ctx->pc = 0x23BB64u;
    SET_GPR_U32(ctx, 31, 0x23BB6Cu);
    ctx->pc = 0x23BB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BB64u;
    // 0x23bb68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x23BB64u, 0x23BB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BB6Cu;
label_23bb6c:
    // 0x23bb6c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_23bb70:
    if (ctx->pc == 0x23BB70u) {
        ctx->pc = 0x23BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB6Cu;
        // 0x23bb70: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB74u;
        goto label_23bb74;
    }
    ctx->pc = 0x23BB6Cu;
    {
        const bool branch_taken_0x23bb6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB6Cu;
        // 0x23bb70: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb6c) {
            ctx->pc = 0x23BBDCu;
            goto label_23bbdc;
        }
    }
    ctx->pc = 0x23BB74u;
label_23bb74:
    // 0x23bb74: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x23bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_23bb78:
    // 0x23bb78: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
label_23bb7c:
    if (ctx->pc == 0x23BB7Cu) {
        ctx->pc = 0x23BB80u;
        goto label_23bb80;
    }
    ctx->pc = 0x23BB78u;
    {
        const bool branch_taken_0x23bb78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23bb78) {
            ctx->pc = 0x23BBDCu;
            goto label_23bbdc;
        }
    }
    ctx->pc = 0x23BB80u;
label_23bb80:
    // 0x23bb80: 0x8e250334  lw          $a1, 0x334($s1)
    ctx->pc = 0x23bb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23bb84:
    // 0x23bb84: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x23bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
label_23bb88:
    // 0x23bb88: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_23bb8c:
    if (ctx->pc == 0x23BB8Cu) {
        ctx->pc = 0x23BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB88u;
        // 0x23bb8c: 0xc4410014  lwc1        $f1, 0x14($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB90u;
        goto label_23bb90;
    }
    ctx->pc = 0x23BB88u;
    {
        const bool branch_taken_0x23bb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bb88) {
            ctx->pc = 0x23BB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BB88u;
            // 0x23bb8c: 0xc4410014  lwc1        $f1, 0x14($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BBBCu;
            goto label_23bbbc;
        }
    }
    ctx->pc = 0x23BB90u;
label_23bb90:
    // 0x23bb90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23bb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23bb94:
    // 0x23bb94: 0x24a301ec  addiu       $v1, $a1, 0x1EC
    ctx->pc = 0x23bb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 492));
label_23bb98:
    // 0x23bb98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23bb9c:
    // 0x23bb9c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_23bba0:
    if (ctx->pc == 0x23BBA0u) {
        ctx->pc = 0x23BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB9Cu;
        // 0x23bba0: 0xc4410014  lwc1        $f1, 0x14($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BBA4u;
        goto label_23bba4;
    }
    ctx->pc = 0x23BB9Cu;
    {
        const bool branch_taken_0x23bb9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bb9c) {
            ctx->pc = 0x23BBA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BB9Cu;
            // 0x23bba0: 0xc4410014  lwc1        $f1, 0x14($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BBBCu;
            goto label_23bbbc;
        }
    }
    ctx->pc = 0x23BBA4u;
label_23bba4:
    // 0x23bba4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23bba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23bba8:
    // 0x23bba8: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x23bba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_23bbac:
    // 0x23bbac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_23bbb0:
    if (ctx->pc == 0x23BBB0u) {
        ctx->pc = 0x23BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BBACu;
        // 0x23bbb0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BBB4u;
        goto label_23bbb4;
    }
    ctx->pc = 0x23BBACu;
    {
        const bool branch_taken_0x23bbac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BBACu;
        // 0x23bbb0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bbac) {
            ctx->pc = 0x23BB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23bb98;
        }
    }
    ctx->pc = 0x23BBB4u;
label_23bbb4:
    // 0x23bbb4: 0x8ca201e8  lw          $v0, 0x1E8($a1)
    ctx->pc = 0x23bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
label_23bbb8:
    // 0x23bbb8: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x23bbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23bbbc:
    // 0x23bbbc: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x23bbbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_23bbc0:
    // 0x23bbc0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x23bbc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_23bbc4:
    // 0x23bbc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23bbc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23bbc8:
    // 0x23bbc8: 0x0  nop
    ctx->pc = 0x23bbc8u;
    // NOP
label_23bbcc:
    // 0x23bbcc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23bbccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23bbd0:
    // 0x23bbd0: 0x0  nop
    ctx->pc = 0x23bbd0u;
    // NOP
label_23bbd4:
    // 0x23bbd4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_23bbd8:
    if (ctx->pc == 0x23BBD8u) {
        ctx->pc = 0x23BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BBD4u;
        // 0x23bbd8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BBDCu;
        goto label_23bbdc;
    }
    ctx->pc = 0x23BBD4u;
    {
        const bool branch_taken_0x23bbd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23bbd4) {
            ctx->pc = 0x23BBD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BBD4u;
            // 0x23bbd8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BBDCu;
            goto label_23bbdc;
        }
    }
    ctx->pc = 0x23BBDCu;
label_23bbdc:
    // 0x23bbdc: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
label_23bbe0:
    if (ctx->pc == 0x23BBE0u) {
        ctx->pc = 0x23BBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BBDCu;
        // 0x23bbe0: 0xae200560  sw          $zero, 0x560($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BBE4u;
        goto label_23bbe4;
    }
    ctx->pc = 0x23BBDCu;
    {
        const bool branch_taken_0x23bbdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bbdc) {
            ctx->pc = 0x23BBE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BBDCu;
            // 0x23bbe0: 0xae200560  sw          $zero, 0x560($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BBE4u;
            goto label_23bbe4;
        }
    }
    ctx->pc = 0x23BBE4u;
label_23bbe4:
    // 0x23bbe4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_23bbe8:
    if (ctx->pc == 0x23BBE8u) {
        ctx->pc = 0x23BBECu;
        goto label_23bbec;
    }
    ctx->pc = 0x23BBE4u;
    {
        const bool branch_taken_0x23bbe4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bbe4) {
            ctx->pc = 0x23BBF4u;
            goto label_23bbf4;
        }
    }
    ctx->pc = 0x23BBECu;
label_23bbec:
    // 0x23bbec: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
label_23bbf0:
    if (ctx->pc == 0x23BBF0u) {
        ctx->pc = 0x23BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BBECu;
        // 0x23bbf0: 0x8e220560  lw          $v0, 0x560($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BBF4u;
        goto label_23bbf4;
    }
    ctx->pc = 0x23BBECu;
    {
        const bool branch_taken_0x23bbec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bbec) {
            ctx->pc = 0x23BBF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BBECu;
            // 0x23bbf0: 0x8e220560  lw          $v0, 0x560($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BC04u;
            goto label_23bc04;
        }
    }
    ctx->pc = 0x23BBF4u;
label_23bbf4:
    // 0x23bbf4: 0xc0927f2  jal         func_249FC8
label_23bbf8:
    if (ctx->pc == 0x23BBF8u) {
        ctx->pc = 0x23BBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BBF4u;
        // 0x23bbf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BBFCu;
        goto label_23bbfc;
    }
    ctx->pc = 0x23BBF4u;
    SET_GPR_U32(ctx, 31, 0x23BBFCu);
    ctx->pc = 0x23BBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BBF4u;
    // 0x23bbf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249FC8u, 0x23BBF4u, 0x23BBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BBFCu;
label_23bbfc:
    // 0x23bbfc: 0xae200534  sw          $zero, 0x534($s1)
    ctx->pc = 0x23bbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1332), GPR_U32(ctx, 0));
label_23bc00:
    // 0x23bc00: 0x8e220560  lw          $v0, 0x560($s1)
    ctx->pc = 0x23bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
label_23bc04:
    // 0x23bc04: 0x10400089  beqz        $v0, . + 4 + (0x89 << 2)
label_23bc08:
    if (ctx->pc == 0x23BC08u) {
        ctx->pc = 0x23BC0Cu;
        goto label_23bc0c;
    }
    ctx->pc = 0x23BC04u;
    {
        const bool branch_taken_0x23bc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bc04) {
            ctx->pc = 0x23BE2Cu;
            goto label_23be2c;
        }
    }
    ctx->pc = 0x23BC0Cu;
label_23bc0c:
    // 0x23bc0c: 0x8e220294  lw          $v0, 0x294($s1)
    ctx->pc = 0x23bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 660)));
label_23bc10:
    // 0x23bc10: 0x14400086  bnez        $v0, . + 4 + (0x86 << 2)
label_23bc14:
    if (ctx->pc == 0x23BC14u) {
        ctx->pc = 0x23BC18u;
        goto label_23bc18;
    }
    ctx->pc = 0x23BC10u;
    {
        const bool branch_taken_0x23bc10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bc10) {
            ctx->pc = 0x23BE2Cu;
            goto label_23be2c;
        }
    }
    ctx->pc = 0x23BC18u;
label_23bc18:
    // 0x23bc18: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x23bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23bc1c:
    // 0x23bc1c: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x23bc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_23bc20:
    // 0x23bc20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23bc20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23bc24:
    // 0x23bc24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23bc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23bc28:
    // 0x23bc28: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23bc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23bc2c:
    // 0x23bc2c: 0x2484f86c  addiu       $a0, $a0, -0x794
    ctx->pc = 0x23bc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965356));
label_23bc30:
    // 0x23bc30: 0x2c840009  sltiu       $a0, $a0, 0x9
    ctx->pc = 0x23bc30u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_23bc34:
    // 0x23bc34: 0x1480007d  bnez        $a0, . + 4 + (0x7D << 2)
label_23bc38:
    if (ctx->pc == 0x23BC38u) {
        ctx->pc = 0x23BC3Cu;
        goto label_23bc3c;
    }
    ctx->pc = 0x23BC34u;
    {
        const bool branch_taken_0x23bc34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bc34) {
            ctx->pc = 0x23BE2Cu;
            goto label_23be2c;
        }
    }
    ctx->pc = 0x23BC3Cu;
label_23bc3c:
    // 0x23bc3c: 0xc0bf228  jal         func_2FC8A0
label_23bc40:
    if (ctx->pc == 0x23BC40u) {
        ctx->pc = 0x23BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC3Cu;
        // 0x23bc40: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BC44u;
        goto label_23bc44;
    }
    ctx->pc = 0x23BC3Cu;
    SET_GPR_U32(ctx, 31, 0x23BC44u);
    ctx->pc = 0x23BC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BC3Cu;
    // 0x23bc40: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC8A0u, 0x23BC3Cu, 0x23BC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BC44u;
label_23bc44:
    // 0x23bc44: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
label_23bc48:
    if (ctx->pc == 0x23BC48u) {
        ctx->pc = 0x23BC4Cu;
        goto label_23bc4c;
    }
    ctx->pc = 0x23BC44u;
    {
        const bool branch_taken_0x23bc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bc44) {
            ctx->pc = 0x23BE2Cu;
            goto label_23be2c;
        }
    }
    ctx->pc = 0x23BC4Cu;
label_23bc4c:
    // 0x23bc4c: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x23bc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23bc50:
    // 0x23bc50: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x23bc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_23bc54:
    // 0x23bc54: 0x2462ffbd  addiu       $v0, $v1, -0x43
    ctx->pc = 0x23bc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967229));
label_23bc58:
    // 0x23bc58: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x23bc58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_23bc5c:
    // 0x23bc5c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_23bc60:
    if (ctx->pc == 0x23BC60u) {
        ctx->pc = 0x23BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC5Cu;
        // 0x23bc60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BC64u;
        goto label_23bc64;
    }
    ctx->pc = 0x23BC5Cu;
    {
        const bool branch_taken_0x23bc5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC5Cu;
        // 0x23bc60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc5c) {
            ctx->pc = 0x23BC78u;
            goto label_23bc78;
        }
    }
    ctx->pc = 0x23BC64u;
label_23bc64:
    // 0x23bc64: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x23bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_23bc68:
    // 0x23bc68: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_23bc6c:
    if (ctx->pc == 0x23BC6Cu) {
        ctx->pc = 0x23BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC68u;
        // 0x23bc6c: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BC70u;
        goto label_23bc70;
    }
    ctx->pc = 0x23BC68u;
    {
        const bool branch_taken_0x23bc68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC68u;
        // 0x23bc6c: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc68) {
            ctx->pc = 0x23BC78u;
            goto label_23bc78;
        }
    }
    ctx->pc = 0x23BC70u;
label_23bc70:
    // 0x23bc70: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_23bc74:
    if (ctx->pc == 0x23BC74u) {
        ctx->pc = 0x23BC78u;
        goto label_23bc78;
    }
    ctx->pc = 0x23BC70u;
    {
        const bool branch_taken_0x23bc70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23bc70) {
            ctx->pc = 0x23BC7Cu;
            goto label_23bc7c;
        }
    }
    ctx->pc = 0x23BC78u;
label_23bc78:
    // 0x23bc78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23bc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23bc7c:
    // 0x23bc7c: 0x1480006b  bnez        $a0, . + 4 + (0x6B << 2)
label_23bc80:
    if (ctx->pc == 0x23BC80u) {
        ctx->pc = 0x23BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC7Cu;
        // 0x23bc80: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BC84u;
        goto label_23bc84;
    }
    ctx->pc = 0x23BC7Cu;
    {
        const bool branch_taken_0x23bc7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC7Cu;
        // 0x23bc80: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc7c) {
            ctx->pc = 0x23BE2Cu;
            goto label_23be2c;
        }
    }
    ctx->pc = 0x23BC84u;
label_23bc84:
    // 0x23bc84: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x23bc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_23bc88:
    // 0x23bc88: 0x10620068  beq         $v1, $v0, . + 4 + (0x68 << 2)
label_23bc8c:
    if (ctx->pc == 0x23BC8Cu) {
        ctx->pc = 0x23BC90u;
        goto label_23bc90;
    }
    ctx->pc = 0x23BC88u;
    {
        const bool branch_taken_0x23bc88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23bc88) {
            ctx->pc = 0x23BE2Cu;
            goto label_23be2c;
        }
    }
    ctx->pc = 0x23BC90u;
label_23bc90:
    // 0x23bc90: 0x8e2205ec  lw          $v0, 0x5EC($s1)
    ctx->pc = 0x23bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1516)));
label_23bc94:
    // 0x23bc94: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
label_23bc98:
    if (ctx->pc == 0x23BC98u) {
        ctx->pc = 0x23BC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC94u;
        // 0x23bc98: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BC9Cu;
        goto label_23bc9c;
    }
    ctx->pc = 0x23BC94u;
    {
        const bool branch_taken_0x23bc94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC94u;
        // 0x23bc98: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc94) {
            ctx->pc = 0x23BE2Cu;
            goto label_23be2c;
        }
    }
    ctx->pc = 0x23BC9Cu;
label_23bc9c:
    // 0x23bc9c: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23bc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23bca0:
    // 0x23bca0: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x23bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_23bca4:
    // 0x23bca4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_23bca8:
    if (ctx->pc == 0x23BCA8u) {
        ctx->pc = 0x23BCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCA4u;
        // 0x23bca8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BCACu;
        goto label_23bcac;
    }
    ctx->pc = 0x23BCA4u;
    {
        const bool branch_taken_0x23bca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23BCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCA4u;
        // 0x23bca8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bca4) {
            ctx->pc = 0x23BCB4u;
            goto label_23bcb4;
        }
    }
    ctx->pc = 0x23BCACu;
label_23bcac:
    // 0x23bcac: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x23bcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_23bcb0:
    // 0x23bcb0: 0x284506b8  slti        $a1, $v0, 0x6B8
    ctx->pc = 0x23bcb0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1720) ? 1 : 0);
label_23bcb4:
    // 0x23bcb4: 0x14a0005d  bnez        $a1, . + 4 + (0x5D << 2)
label_23bcb8:
    if (ctx->pc == 0x23BCB8u) {
        ctx->pc = 0x23BCBCu;
        goto label_23bcbc;
    }
    ctx->pc = 0x23BCB4u;
    {
        const bool branch_taken_0x23bcb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bcb4) {
            ctx->pc = 0x23BE2Cu;
            goto label_23be2c;
        }
    }
    ctx->pc = 0x23BCBCu;
label_23bcbc:
    // 0x23bcbc: 0xc0b83b6  jal         func_2E0ED8
label_23bcc0:
    if (ctx->pc == 0x23BCC0u) {
        ctx->pc = 0x23BCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCBCu;
        // 0x23bcc0: 0x8e24010c  lw          $a0, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BCC4u;
        goto label_23bcc4;
    }
    ctx->pc = 0x23BCBCu;
    SET_GPR_U32(ctx, 31, 0x23BCC4u);
    ctx->pc = 0x23BCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BCBCu;
    // 0x23bcc0: 0x8e24010c  lw          $a0, 0x10C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0ED8u, 0x23BCBCu, 0x23BCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BCC4u;
label_23bcc4:
    // 0x23bcc4: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x23bcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_23bcc8:
    // 0x23bcc8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x23bcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_23bccc:
    // 0x23bccc: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
label_23bcd0:
    if (ctx->pc == 0x23BCD0u) {
        ctx->pc = 0x23BCD4u;
        goto label_23bcd4;
    }
    ctx->pc = 0x23BCCCu;
    {
        const bool branch_taken_0x23bccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bccc) {
            ctx->pc = 0x23BE2Cu;
            goto label_23be2c;
        }
    }
    ctx->pc = 0x23BCD4u;
label_23bcd4:
    // 0x23bcd4: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x23bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_23bcd8:
    // 0x23bcd8: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x23bcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_23bcdc:
    // 0x23bcdc: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
label_23bce0:
    if (ctx->pc == 0x23BCE0u) {
        ctx->pc = 0x23BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCDCu;
        // 0x23bce0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BCE4u;
        goto label_23bce4;
    }
    ctx->pc = 0x23BCDCu;
    {
        const bool branch_taken_0x23bcdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCDCu;
        // 0x23bce0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bcdc) {
            ctx->pc = 0x23BE2Cu;
            goto label_23be2c;
        }
    }
    ctx->pc = 0x23BCE4u;
label_23bce4:
    // 0x23bce4: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x23bce4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23bce8:
    // 0x23bce8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x23bce8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23bcec:
    // 0x23bcec: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x23bcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_23bcf0:
    // 0x23bcf0: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x23bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_23bcf4:
    // 0x23bcf4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23bcf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_23bcf8:
    // 0x23bcf8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_23bcfc:
    if (ctx->pc == 0x23BCFCu) {
        ctx->pc = 0x23BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCF8u;
        // 0x23bcfc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD00u;
        goto label_23bd00;
    }
    ctx->pc = 0x23BCF8u;
    {
        const bool branch_taken_0x23bcf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCF8u;
        // 0x23bcfc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bcf8) {
            ctx->pc = 0x23BD34u;
            goto label_23bd34;
        }
    }
    ctx->pc = 0x23BD00u;
label_23bd00:
    // 0x23bd00: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x23bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_23bd04:
    // 0x23bd04: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_23bd08:
    if (ctx->pc == 0x23BD08u) {
        ctx->pc = 0x23BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD04u;
        // 0x23bd08: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD0Cu;
        goto label_23bd0c;
    }
    ctx->pc = 0x23BD04u;
    {
        const bool branch_taken_0x23bd04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23bd04) {
            ctx->pc = 0x23BD08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BD04u;
            // 0x23bd08: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BD38u;
            goto label_23bd38;
        }
    }
    ctx->pc = 0x23BD0Cu;
label_23bd0c:
    // 0x23bd0c: 0xc0924a8  jal         func_2492A0
label_23bd10:
    if (ctx->pc == 0x23BD10u) {
        ctx->pc = 0x23BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD0Cu;
        // 0x23bd10: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD14u;
        goto label_23bd14;
    }
    ctx->pc = 0x23BD0Cu;
    SET_GPR_U32(ctx, 31, 0x23BD14u);
    ctx->pc = 0x23BD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BD0Cu;
    // 0x23bd10: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x23BD0Cu, 0x23BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BD14u;
label_23bd14:
    // 0x23bd14: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_23bd18:
    if (ctx->pc == 0x23BD18u) {
        ctx->pc = 0x23BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD14u;
        // 0x23bd18: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD1Cu;
        goto label_23bd1c;
    }
    ctx->pc = 0x23BD14u;
    {
        const bool branch_taken_0x23bd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bd14) {
            ctx->pc = 0x23BD18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BD14u;
            // 0x23bd18: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BD38u;
            goto label_23bd38;
        }
    }
    ctx->pc = 0x23BD1Cu;
label_23bd1c:
    // 0x23bd1c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x23bd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_23bd20:
    // 0x23bd20: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x23bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_23bd24:
    // 0x23bd24: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_23bd28:
    if (ctx->pc == 0x23BD28u) {
        ctx->pc = 0x23BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD24u;
        // 0x23bd28: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD2Cu;
        goto label_23bd2c;
    }
    ctx->pc = 0x23BD24u;
    {
        const bool branch_taken_0x23bd24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD24u;
        // 0x23bd28: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd24) {
            ctx->pc = 0x23BD34u;
            goto label_23bd34;
        }
    }
    ctx->pc = 0x23BD2Cu;
label_23bd2c:
    // 0x23bd2c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_23bd30:
    if (ctx->pc == 0x23BD30u) {
        ctx->pc = 0x23BD34u;
        goto label_23bd34;
    }
    ctx->pc = 0x23BD2Cu;
    {
        const bool branch_taken_0x23bd2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23bd2c) {
            ctx->pc = 0x23BD38u;
            goto label_23bd38;
        }
    }
    ctx->pc = 0x23BD34u;
label_23bd34:
    // 0x23bd34: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x23bd34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23bd38:
    // 0x23bd38: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_23bd3c:
    if (ctx->pc == 0x23BD3Cu) {
        ctx->pc = 0x23BD40u;
        goto label_23bd40;
    }
    ctx->pc = 0x23BD38u;
    {
        const bool branch_taken_0x23bd38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bd38) {
            ctx->pc = 0x23BD58u;
            goto label_23bd58;
        }
    }
    ctx->pc = 0x23BD40u;
label_23bd40:
    // 0x23bd40: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x23bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_23bd44:
    // 0x23bd44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23bd48:
    // 0x23bd48: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x23bd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_23bd4c:
    // 0x23bd4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23bd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23bd50:
    // 0x23bd50: 0x3863003d  xori        $v1, $v1, 0x3D
    ctx->pc = 0x23bd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)61);
label_23bd54:
    // 0x23bd54: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x23bd54u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23bd58:
    // 0x23bd58: 0x56600021  bnel        $s3, $zero, . + 4 + (0x21 << 2)
label_23bd5c:
    if (ctx->pc == 0x23BD5Cu) {
        ctx->pc = 0x23BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD58u;
        // 0x23bd5c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD60u;
        goto label_23bd60;
    }
    ctx->pc = 0x23BD58u;
    {
        const bool branch_taken_0x23bd58 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bd58) {
            ctx->pc = 0x23BD5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BD58u;
            // 0x23bd5c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BDE0u;
            goto label_23bde0;
        }
    }
    ctx->pc = 0x23BD60u;
label_23bd60:
    // 0x23bd60: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x23bd60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23bd64:
    // 0x23bd64: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x23bd64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23bd68:
    // 0x23bd68: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x23bd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_23bd6c:
    // 0x23bd6c: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x23bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_23bd70:
    // 0x23bd70: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23bd70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_23bd74:
    // 0x23bd74: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_23bd78:
    if (ctx->pc == 0x23BD78u) {
        ctx->pc = 0x23BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD74u;
        // 0x23bd78: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD7Cu;
        goto label_23bd7c;
    }
    ctx->pc = 0x23BD74u;
    {
        const bool branch_taken_0x23bd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD74u;
        // 0x23bd78: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd74) {
            ctx->pc = 0x23BDB0u;
            goto label_23bdb0;
        }
    }
    ctx->pc = 0x23BD7Cu;
label_23bd7c:
    // 0x23bd7c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x23bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_23bd80:
    // 0x23bd80: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_23bd84:
    if (ctx->pc == 0x23BD84u) {
        ctx->pc = 0x23BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD80u;
        // 0x23bd84: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD88u;
        goto label_23bd88;
    }
    ctx->pc = 0x23BD80u;
    {
        const bool branch_taken_0x23bd80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23bd80) {
            ctx->pc = 0x23BD84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BD80u;
            // 0x23bd84: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BDB4u;
            goto label_23bdb4;
        }
    }
    ctx->pc = 0x23BD88u;
label_23bd88:
    // 0x23bd88: 0xc0924a8  jal         func_2492A0
label_23bd8c:
    if (ctx->pc == 0x23BD8Cu) {
        ctx->pc = 0x23BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD88u;
        // 0x23bd8c: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD90u;
        goto label_23bd90;
    }
    ctx->pc = 0x23BD88u;
    SET_GPR_U32(ctx, 31, 0x23BD90u);
    ctx->pc = 0x23BD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BD88u;
    // 0x23bd8c: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x23BD88u, 0x23BD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BD90u;
label_23bd90:
    // 0x23bd90: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_23bd94:
    if (ctx->pc == 0x23BD94u) {
        ctx->pc = 0x23BD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD90u;
        // 0x23bd94: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD98u;
        goto label_23bd98;
    }
    ctx->pc = 0x23BD90u;
    {
        const bool branch_taken_0x23bd90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bd90) {
            ctx->pc = 0x23BD94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BD90u;
            // 0x23bd94: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BDB4u;
            goto label_23bdb4;
        }
    }
    ctx->pc = 0x23BD98u;
label_23bd98:
    // 0x23bd98: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x23bd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_23bd9c:
    // 0x23bd9c: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x23bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_23bda0:
    // 0x23bda0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_23bda4:
    if (ctx->pc == 0x23BDA4u) {
        ctx->pc = 0x23BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDA0u;
        // 0x23bda4: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BDA8u;
        goto label_23bda8;
    }
    ctx->pc = 0x23BDA0u;
    {
        const bool branch_taken_0x23bda0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDA0u;
        // 0x23bda4: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bda0) {
            ctx->pc = 0x23BDB0u;
            goto label_23bdb0;
        }
    }
    ctx->pc = 0x23BDA8u;
label_23bda8:
    // 0x23bda8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_23bdac:
    if (ctx->pc == 0x23BDACu) {
        ctx->pc = 0x23BDB0u;
        goto label_23bdb0;
    }
    ctx->pc = 0x23BDA8u;
    {
        const bool branch_taken_0x23bda8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23bda8) {
            ctx->pc = 0x23BDB4u;
            goto label_23bdb4;
        }
    }
    ctx->pc = 0x23BDB0u;
label_23bdb0:
    // 0x23bdb0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x23bdb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23bdb4:
    // 0x23bdb4: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_23bdb8:
    if (ctx->pc == 0x23BDB8u) {
        ctx->pc = 0x23BDBCu;
        goto label_23bdbc;
    }
    ctx->pc = 0x23BDB4u;
    {
        const bool branch_taken_0x23bdb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bdb4) {
            ctx->pc = 0x23BDD4u;
            goto label_23bdd4;
        }
    }
    ctx->pc = 0x23BDBCu;
label_23bdbc:
    // 0x23bdbc: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x23bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_23bdc0:
    // 0x23bdc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23bdc4:
    // 0x23bdc4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x23bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_23bdc8:
    // 0x23bdc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23bdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23bdcc:
    // 0x23bdcc: 0x38630041  xori        $v1, $v1, 0x41
    ctx->pc = 0x23bdccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65);
label_23bdd0:
    // 0x23bdd0: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x23bdd0u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23bdd4:
    // 0x23bdd4: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_23bdd8:
    if (ctx->pc == 0x23BDD8u) {
        ctx->pc = 0x23BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDD4u;
        // 0x23bdd8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BDDCu;
        goto label_23bddc;
    }
    ctx->pc = 0x23BDD4u;
    {
        const bool branch_taken_0x23bdd4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDD4u;
        // 0x23bdd8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bdd4) {
            ctx->pc = 0x23BDE4u;
            goto label_23bde4;
        }
    }
    ctx->pc = 0x23BDDCu;
label_23bddc:
    // 0x23bddc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x23bddcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23bde0:
    // 0x23bde0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x23bde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_23bde4:
    // 0x23bde4: 0x92240fb0  lbu         $a0, 0xFB0($s1)
    ctx->pc = 0x23bde4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4016)));
label_23bde8:
    // 0x23bde8: 0x8c43bd38  lw          $v1, -0x42C8($v0)
    ctx->pc = 0x23bde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950200)));
label_23bdec:
    // 0x23bdec: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_23bdf0:
    if (ctx->pc == 0x23BDF0u) {
        ctx->pc = 0x23BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDECu;
        // 0x23bdf0: 0x263007a0  addiu       $s0, $s1, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BDF4u;
        goto label_23bdf4;
    }
    ctx->pc = 0x23BDECu;
    {
        const bool branch_taken_0x23bdec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x23BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDECu;
        // 0x23bdf0: 0x263007a0  addiu       $s0, $s1, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bdec) {
            ctx->pc = 0x23BE00u;
            goto label_23be00;
        }
    }
    ctx->pc = 0x23BDF4u;
label_23bdf4:
    // 0x23bdf4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23bdf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23bdf8:
    // 0x23bdf8: 0xc093e46  jal         func_24F918
label_23bdfc:
    if (ctx->pc == 0x23BDFCu) {
        ctx->pc = 0x23BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDF8u;
        // 0x23bdfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE00u;
        goto label_23be00;
    }
    ctx->pc = 0x23BDF8u;
    SET_GPR_U32(ctx, 31, 0x23BE00u);
    ctx->pc = 0x23BDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BDF8u;
    // 0x23bdfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F918u, 0x23BDF8u, 0x23BE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE00u;
label_23be00:
    // 0x23be00: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x23be00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_23be04:
    // 0x23be04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23be04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23be08:
    // 0x23be08: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_23be0c:
    if (ctx->pc == 0x23BE0Cu) {
        ctx->pc = 0x23BE10u;
        goto label_23be10;
    }
    ctx->pc = 0x23BE08u;
    {
        const bool branch_taken_0x23be08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23be08) {
            ctx->pc = 0x23BE2Cu;
            goto label_23be2c;
        }
    }
    ctx->pc = 0x23BE10u;
label_23be10:
    // 0x23be10: 0xc08f684  jal         func_23DA10
label_23be14:
    if (ctx->pc == 0x23BE14u) {
        ctx->pc = 0x23BE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE10u;
        // 0x23be14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE18u;
        goto label_23be18;
    }
    ctx->pc = 0x23BE10u;
    SET_GPR_U32(ctx, 31, 0x23BE18u);
    ctx->pc = 0x23BE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BE10u;
    // 0x23be14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA10u, 0x23BE10u, 0x23BE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE18u;
label_23be18:
    // 0x23be18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23be18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23be1c:
    // 0x23be1c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23be1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23be20:
    // 0x23be20: 0xc093f84  jal         func_24FE10
label_23be24:
    if (ctx->pc == 0x23BE24u) {
        ctx->pc = 0x23BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE20u;
        // 0x23be24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE28u;
        goto label_23be28;
    }
    ctx->pc = 0x23BE20u;
    SET_GPR_U32(ctx, 31, 0x23BE28u);
    ctx->pc = 0x23BE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BE20u;
    // 0x23be24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FE10u, 0x23BE20u, 0x23BE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE28u;
label_23be28:
    // 0x23be28: 0xae200544  sw          $zero, 0x544($s1)
    ctx->pc = 0x23be28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1348), GPR_U32(ctx, 0));
label_23be2c:
    // 0x23be2c: 0xc0894f6  jal         func_2253D8
label_23be30:
    if (ctx->pc == 0x23BE30u) {
        ctx->pc = 0x23BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE2Cu;
        // 0x23be30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE34u;
        goto label_23be34;
    }
    ctx->pc = 0x23BE2Cu;
    SET_GPR_U32(ctx, 31, 0x23BE34u);
    ctx->pc = 0x23BE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BE2Cu;
    // 0x23be30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2253D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2253D8u, 0x23BE2Cu, 0x23BE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE34u;
label_23be34:
    // 0x23be34: 0x5440012b  bnel        $v0, $zero, . + 4 + (0x12B << 2)
label_23be38:
    if (ctx->pc == 0x23BE38u) {
        ctx->pc = 0x23BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE34u;
        // 0x23be38: 0x8e2205b0  lw          $v0, 0x5B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE3Cu;
        goto label_23be3c;
    }
    ctx->pc = 0x23BE34u;
    {
        const bool branch_taken_0x23be34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23be34) {
            ctx->pc = 0x23BE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BE34u;
            // 0x23be38: 0x8e2205b0  lw          $v0, 0x5B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C2E4u;
            goto label_23c2e4;
        }
    }
    ctx->pc = 0x23BE3Cu;
label_23be3c:
    // 0x23be3c: 0xc0899bc  jal         func_2266F0
label_23be40:
    if (ctx->pc == 0x23BE40u) {
        ctx->pc = 0x23BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE3Cu;
        // 0x23be40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE44u;
        goto label_23be44;
    }
    ctx->pc = 0x23BE3Cu;
    SET_GPR_U32(ctx, 31, 0x23BE44u);
    ctx->pc = 0x23BE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BE3Cu;
    // 0x23be40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x23BE3Cu, 0x23BE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE44u;
label_23be44:
    // 0x23be44: 0x50400127  beql        $v0, $zero, . + 4 + (0x127 << 2)
label_23be48:
    if (ctx->pc == 0x23BE48u) {
        ctx->pc = 0x23BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE44u;
        // 0x23be48: 0x8e2205b0  lw          $v0, 0x5B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE4Cu;
        goto label_23be4c;
    }
    ctx->pc = 0x23BE44u;
    {
        const bool branch_taken_0x23be44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23be44) {
            ctx->pc = 0x23BE48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BE44u;
            // 0x23be48: 0x8e2205b0  lw          $v0, 0x5B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C2E4u;
            goto label_23c2e4;
        }
    }
    ctx->pc = 0x23BE4Cu;
label_23be4c:
    // 0x23be4c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_23be50:
    // 0x23be50: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23be50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23be54:
    // 0x23be54: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_23be58:
    if (ctx->pc == 0x23BE58u) {
        ctx->pc = 0x23BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE54u;
        // 0x23be58: 0x8e220550  lw          $v0, 0x550($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE5Cu;
        goto label_23be5c;
    }
    ctx->pc = 0x23BE54u;
    {
        const bool branch_taken_0x23be54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23be54) {
            ctx->pc = 0x23BE58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BE54u;
            // 0x23be58: 0x8e220550  lw          $v0, 0x550($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BE70u;
            goto label_23be70;
        }
    }
    ctx->pc = 0x23BE5Cu;
label_23be5c:
    // 0x23be5c: 0xc0bf228  jal         func_2FC8A0
label_23be60:
    if (ctx->pc == 0x23BE60u) {
        ctx->pc = 0x23BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE5Cu;
        // 0x23be60: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE64u;
        goto label_23be64;
    }
    ctx->pc = 0x23BE5Cu;
    SET_GPR_U32(ctx, 31, 0x23BE64u);
    ctx->pc = 0x23BE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BE5Cu;
    // 0x23be60: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC8A0u, 0x23BE5Cu, 0x23BE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE64u;
label_23be64:
    // 0x23be64: 0x50400092  beql        $v0, $zero, . + 4 + (0x92 << 2)
label_23be68:
    if (ctx->pc == 0x23BE68u) {
        ctx->pc = 0x23BE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE64u;
        // 0x23be68: 0x8e22056c  lw          $v0, 0x56C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE6Cu;
        goto label_23be6c;
    }
    ctx->pc = 0x23BE64u;
    {
        const bool branch_taken_0x23be64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23be64) {
            ctx->pc = 0x23BE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BE64u;
            // 0x23be68: 0x8e22056c  lw          $v0, 0x56C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C0B0u;
            goto label_23c0b0;
        }
    }
    ctx->pc = 0x23BE6Cu;
label_23be6c:
    // 0x23be6c: 0x8e220550  lw          $v0, 0x550($s1)
    ctx->pc = 0x23be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_23be70:
    // 0x23be70: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_23be74:
    if (ctx->pc == 0x23BE74u) {
        ctx->pc = 0x23BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE70u;
        // 0x23be74: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE78u;
        goto label_23be78;
    }
    ctx->pc = 0x23BE70u;
    {
        const bool branch_taken_0x23be70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE70u;
        // 0x23be74: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be70) {
            ctx->pc = 0x23BE8Cu;
            goto label_23be8c;
        }
    }
    ctx->pc = 0x23BE78u;
label_23be78:
    // 0x23be78: 0x8e220554  lw          $v0, 0x554($s1)
    ctx->pc = 0x23be78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1364)));
label_23be7c:
    // 0x23be7c: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
label_23be80:
    if (ctx->pc == 0x23BE80u) {
        ctx->pc = 0x23BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE7Cu;
        // 0x23be80: 0x8e22056c  lw          $v0, 0x56C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE84u;
        goto label_23be84;
    }
    ctx->pc = 0x23BE7Cu;
    {
        const bool branch_taken_0x23be7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE7Cu;
        // 0x23be80: 0x8e22056c  lw          $v0, 0x56C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be7c) {
            ctx->pc = 0x23C0B0u;
            goto label_23c0b0;
        }
    }
    ctx->pc = 0x23BE84u;
label_23be84:
    // 0x23be84: 0x1440008c  bnez        $v0, . + 4 + (0x8C << 2)
label_23be88:
    if (ctx->pc == 0x23BE88u) {
        ctx->pc = 0x23BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE84u;
        // 0x23be88: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE8Cu;
        goto label_23be8c;
    }
    ctx->pc = 0x23BE84u;
    {
        const bool branch_taken_0x23be84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE84u;
        // 0x23be88: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be84) {
            ctx->pc = 0x23C0B8u;
            goto label_23c0b8;
        }
    }
    ctx->pc = 0x23BE8Cu;
label_23be8c:
    // 0x23be8c: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x23be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_23be90:
    // 0x23be90: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_23be94:
    if (ctx->pc == 0x23BE94u) {
        ctx->pc = 0x23BE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE90u;
        // 0x23be94: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE98u;
        goto label_23be98;
    }
    ctx->pc = 0x23BE90u;
    {
        const bool branch_taken_0x23be90 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23BE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE90u;
        // 0x23be94: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be90) {
            ctx->pc = 0x23BEACu;
            goto label_23beac;
        }
    }
    ctx->pc = 0x23BE98u;
label_23be98:
    // 0x23be98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23be98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23be9c:
    // 0x23be9c: 0x0  nop
    ctx->pc = 0x23be9cu;
    // NOP
label_23bea0:
    // 0x23bea0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23bea0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_23bea4:
    // 0x23bea4: 0x10000007  b           . + 4 + (0x7 << 2)
label_23bea8:
    if (ctx->pc == 0x23BEA8u) {
        ctx->pc = 0x23BEACu;
        goto label_23beac;
    }
    ctx->pc = 0x23BEA4u;
    {
        const bool branch_taken_0x23bea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bea4) {
            ctx->pc = 0x23BEC4u;
            goto label_23bec4;
        }
    }
    ctx->pc = 0x23BEACu;
label_23beac:
    // 0x23beac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23beacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_23beb0:
    // 0x23beb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23beb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23beb4:
    // 0x23beb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23beb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23beb8:
    // 0x23beb8: 0x0  nop
    ctx->pc = 0x23beb8u;
    // NOP
label_23bebc:
    // 0x23bebc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23bebcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_23bec0:
    // 0x23bec0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x23bec0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_23bec4:
    // 0x23bec4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x23bec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_23bec8:
    // 0x23bec8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x23bec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_23becc:
    // 0x23becc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23beccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23bed0:
    // 0x23bed0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23bed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23bed4:
    // 0x23bed4: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_23bed8:
    // 0x23bed8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x23bed8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_23bedc:
    // 0x23bedc: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23bedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23bee0:
    // 0x23bee0: 0x222800a  movz        $s0, $s1, $v0
    ctx->pc = 0x23bee0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
label_23bee4:
    // 0x23bee4: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_23bee8:
    if (ctx->pc == 0x23BEE8u) {
        ctx->pc = 0x23BEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEE4u;
        // 0x23bee8: 0xe62006dc  swc1        $f0, 0x6DC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1756), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BEECu;
        goto label_23beec;
    }
    ctx->pc = 0x23BEE4u;
    {
        const bool branch_taken_0x23bee4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEE4u;
        // 0x23bee8: 0xe62006dc  swc1        $f0, 0x6DC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1756), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bee4) {
            ctx->pc = 0x23BF4Cu;
            goto label_23bf4c;
        }
    }
    ctx->pc = 0x23BEECu;
label_23beec:
    // 0x23beec: 0x8e0211e4  lw          $v0, 0x11E4($s0)
    ctx->pc = 0x23beecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4580)));
label_23bef0:
    // 0x23bef0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_23bef4:
    if (ctx->pc == 0x23BEF4u) {
        ctx->pc = 0x23BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEF0u;
        // 0x23bef4: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BEF8u;
        goto label_23bef8;
    }
    ctx->pc = 0x23BEF0u;
    {
        const bool branch_taken_0x23bef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEF0u;
        // 0x23bef4: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bef0) {
            ctx->pc = 0x23BF4Cu;
            goto label_23bf4c;
        }
    }
    ctx->pc = 0x23BEF8u;
label_23bef8:
    // 0x23bef8: 0x8c4200b8  lw          $v0, 0xB8($v0)
    ctx->pc = 0x23bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
label_23befc:
    // 0x23befc: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x23befcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_23bf00:
    // 0x23bf00: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x23bf00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_23bf04:
    // 0x23bf04: 0x14640011  bne         $v1, $a0, . + 4 + (0x11 << 2)
label_23bf08:
    if (ctx->pc == 0x23BF08u) {
        ctx->pc = 0x23BF0Cu;
        goto label_23bf0c;
    }
    ctx->pc = 0x23BF04u;
    {
        const bool branch_taken_0x23bf04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x23bf04) {
            ctx->pc = 0x23BF4Cu;
            goto label_23bf4c;
        }
    }
    ctx->pc = 0x23BF0Cu;
label_23bf0c:
    // 0x23bf0c: 0xc06b69e  jal         func_1ADA78
label_23bf10:
    if (ctx->pc == 0x23BF10u) {
        ctx->pc = 0x23BF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF0Cu;
        // 0x23bf10: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF14u;
        goto label_23bf14;
    }
    ctx->pc = 0x23BF0Cu;
    SET_GPR_U32(ctx, 31, 0x23BF14u);
    ctx->pc = 0x23BF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BF0Cu;
    // 0x23bf10: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADA78u, 0x23BF0Cu, 0x23BF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF14u;
label_23bf14:
    // 0x23bf14: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_23bf18:
    if (ctx->pc == 0x23BF18u) {
        ctx->pc = 0x23BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF14u;
        // 0x23bf18: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF1Cu;
        goto label_23bf1c;
    }
    ctx->pc = 0x23BF14u;
    {
        const bool branch_taken_0x23bf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF14u;
        // 0x23bf18: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf14) {
            ctx->pc = 0x23BF4Cu;
            goto label_23bf4c;
        }
    }
    ctx->pc = 0x23BF1Cu;
label_23bf1c:
    // 0x23bf1c: 0x8e0312bc  lw          $v1, 0x12BC($s0)
    ctx->pc = 0x23bf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
label_23bf20:
    // 0x23bf20: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_23bf24:
    if (ctx->pc == 0x23BF24u) {
        ctx->pc = 0x23BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF20u;
        // 0x23bf24: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF28u;
        goto label_23bf28;
    }
    ctx->pc = 0x23BF20u;
    {
        const bool branch_taken_0x23bf20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF20u;
        // 0x23bf24: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf20) {
            ctx->pc = 0x23BF4Cu;
            goto label_23bf4c;
        }
    }
    ctx->pc = 0x23BF28u;
label_23bf28:
    // 0x23bf28: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23bf28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_23bf2c:
    // 0x23bf2c: 0xc069712  jal         func_1A5C48
label_23bf30:
    if (ctx->pc == 0x23BF30u) {
        ctx->pc = 0x23BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF2Cu;
        // 0x23bf30: 0x240600f3  addiu       $a2, $zero, 0xF3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF34u;
        goto label_23bf34;
    }
    ctx->pc = 0x23BF2Cu;
    SET_GPR_U32(ctx, 31, 0x23BF34u);
    ctx->pc = 0x23BF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BF2Cu;
    // 0x23bf30: 0x240600f3  addiu       $a2, $zero, 0xF3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x23BF2Cu, 0x23BF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF34u;
label_23bf34:
    // 0x23bf34: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23bf34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_23bf38:
    // 0x23bf38: 0xc06a23e  jal         func_1A88F8
label_23bf3c:
    if (ctx->pc == 0x23BF3Cu) {
        ctx->pc = 0x23BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF38u;
        // 0x23bf3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF40u;
        goto label_23bf40;
    }
    ctx->pc = 0x23BF38u;
    SET_GPR_U32(ctx, 31, 0x23BF40u);
    ctx->pc = 0x23BF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BF38u;
    // 0x23bf3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x23BF38u, 0x23BF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF40u;
label_23bf40:
    // 0x23bf40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23bf44:
    // 0x23bf44: 0x10000059  b           . + 4 + (0x59 << 2)
label_23bf48:
    if (ctx->pc == 0x23BF48u) {
        ctx->pc = 0x23BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF44u;
        // 0x23bf48: 0xa20211bc  sb          $v0, 0x11BC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4540), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF4Cu;
        goto label_23bf4c;
    }
    ctx->pc = 0x23BF44u;
    {
        const bool branch_taken_0x23bf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF44u;
        // 0x23bf48: 0xa20211bc  sb          $v0, 0x11BC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4540), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf44) {
            ctx->pc = 0x23C0ACu;
            goto label_23c0ac;
        }
    }
    ctx->pc = 0x23BF4Cu;
label_23bf4c:
    // 0x23bf4c: 0xc0899bc  jal         func_2266F0
label_23bf50:
    if (ctx->pc == 0x23BF50u) {
        ctx->pc = 0x23BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF4Cu;
        // 0x23bf50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF54u;
        goto label_23bf54;
    }
    ctx->pc = 0x23BF4Cu;
    SET_GPR_U32(ctx, 31, 0x23BF54u);
    ctx->pc = 0x23BF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BF4Cu;
    // 0x23bf50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x23BF4Cu, 0x23BF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF54u;
label_23bf54:
    // 0x23bf54: 0xc097f26  jal         func_25FC98
label_23bf58:
    if (ctx->pc == 0x23BF58u) {
        ctx->pc = 0x23BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF54u;
        // 0x23bf58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF5Cu;
        goto label_23bf5c;
    }
    ctx->pc = 0x23BF54u;
    SET_GPR_U32(ctx, 31, 0x23BF5Cu);
    ctx->pc = 0x23BF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BF54u;
    // 0x23bf58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x23BF54u, 0x23BF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF5Cu;
label_23bf5c:
    // 0x23bf5c: 0x8e2304f4  lw          $v1, 0x4F4($s1)
    ctx->pc = 0x23bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1268)));
label_23bf60:
    // 0x23bf60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23bf64:
    // 0x23bf64: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
label_23bf68:
    if (ctx->pc == 0x23BF68u) {
        ctx->pc = 0x23BF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF64u;
        // 0x23bf68: 0x8e220338  lw          $v0, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF6Cu;
        goto label_23bf6c;
    }
    ctx->pc = 0x23BF64u;
    {
        const bool branch_taken_0x23bf64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23bf64) {
            ctx->pc = 0x23BF68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BF64u;
            // 0x23bf68: 0x8e220338  lw          $v0, 0x338($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BFA0u;
            goto label_23bfa0;
        }
    }
    ctx->pc = 0x23BF6Cu;
label_23bf6c:
    // 0x23bf6c: 0x8e230338  lw          $v1, 0x338($s1)
    ctx->pc = 0x23bf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_23bf70:
    // 0x23bf70: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x23bf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_23bf74:
    // 0x23bf74: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x23bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_23bf78:
    // 0x23bf78: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23bf78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_23bf7c:
    // 0x23bf7c: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
label_23bf80:
    if (ctx->pc == 0x23BF80u) {
        ctx->pc = 0x23BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF7Cu;
        // 0x23bf80: 0xae2004f4  sw          $zero, 0x4F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF84u;
        goto label_23bf84;
    }
    ctx->pc = 0x23BF7Cu;
    {
        const bool branch_taken_0x23bf7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bf7c) {
            ctx->pc = 0x23BF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BF7Cu;
            // 0x23bf80: 0xae2004f4  sw          $zero, 0x4F4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1268), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C0ACu;
            goto label_23c0ac;
        }
    }
    ctx->pc = 0x23BF84u;
label_23bf84:
    // 0x23bf84: 0x8c6400a0  lw          $a0, 0xA0($v1)
    ctx->pc = 0x23bf84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
label_23bf88:
    // 0x23bf88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23bf88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_23bf8c:
    // 0x23bf8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23bf8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_23bf90:
    // 0x23bf90: 0xc073f08  jal         func_1CFC20
label_23bf94:
    if (ctx->pc == 0x23BF94u) {
        ctx->pc = 0x23BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF90u;
        // 0x23bf94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF98u;
        goto label_23bf98;
    }
    ctx->pc = 0x23BF90u;
    SET_GPR_U32(ctx, 31, 0x23BF98u);
    ctx->pc = 0x23BF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BF90u;
    // 0x23bf94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x23BF90u, 0x23BF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF98u;
label_23bf98:
    // 0x23bf98: 0x10000044  b           . + 4 + (0x44 << 2)
label_23bf9c:
    if (ctx->pc == 0x23BF9Cu) {
        ctx->pc = 0x23BF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF98u;
        // 0x23bf9c: 0xae2004f4  sw          $zero, 0x4F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BFA0u;
        goto label_23bfa0;
    }
    ctx->pc = 0x23BF98u;
    {
        const bool branch_taken_0x23bf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF98u;
        // 0x23bf9c: 0xae2004f4  sw          $zero, 0x4F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf98) {
            ctx->pc = 0x23C0ACu;
            goto label_23c0ac;
        }
    }
    ctx->pc = 0x23BFA0u;
label_23bfa0:
    // 0x23bfa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23bfa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23bfa4:
    // 0x23bfa4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23bfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23bfa8:
    // 0x23bfa8: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x23bfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_23bfac:
    // 0x23bfac: 0xc08d7ce  jal         func_235F38
label_23bfb0:
    if (ctx->pc == 0x23BFB0u) {
        ctx->pc = 0x23BFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFACu;
        // 0x23bfb0: 0x3902b  sltu        $s2, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BFB4u;
        goto label_23bfb4;
    }
    ctx->pc = 0x23BFACu;
    SET_GPR_U32(ctx, 31, 0x23BFB4u);
    ctx->pc = 0x23BFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BFACu;
    // 0x23bfb0: 0x3902b  sltu        $s2, $zero, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x235F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235F38u, 0x23BFACu, 0x23BFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BFB4u;
label_23bfb4:
    // 0x23bfb4: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x23bfb4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23bfb8:
    // 0x23bfb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23bfb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23bfbc:
    // 0x23bfbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23bfbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23bfc0:
    // 0x23bfc0: 0xc08d84e  jal         func_236138
label_23bfc4:
    if (ctx->pc == 0x23BFC4u) {
        ctx->pc = 0x23BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFC0u;
        // 0x23bfc4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BFC8u;
        goto label_23bfc8;
    }
    ctx->pc = 0x23BFC0u;
    SET_GPR_U32(ctx, 31, 0x23BFC8u);
    ctx->pc = 0x23BFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BFC0u;
    // 0x23bfc4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236138u, 0x23BFC0u, 0x23BFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BFC8u;
label_23bfc8:
    // 0x23bfc8: 0x16000038  bnez        $s0, . + 4 + (0x38 << 2)
label_23bfcc:
    if (ctx->pc == 0x23BFCCu) {
        ctx->pc = 0x23BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFC8u;
        // 0x23bfcc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BFD0u;
        goto label_23bfd0;
    }
    ctx->pc = 0x23BFC8u;
    {
        const bool branch_taken_0x23bfc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFC8u;
        // 0x23bfcc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bfc8) {
            ctx->pc = 0x23C0ACu;
            goto label_23c0ac;
        }
    }
    ctx->pc = 0x23BFD0u;
label_23bfd0:
    // 0x23bfd0: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
label_23bfd4:
    if (ctx->pc == 0x23BFD4u) {
        ctx->pc = 0x23BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFD0u;
        // 0x23bfd4: 0x8e22056c  lw          $v0, 0x56C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BFD8u;
        goto label_23bfd8;
    }
    ctx->pc = 0x23BFD0u;
    {
        const bool branch_taken_0x23bfd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bfd0) {
            ctx->pc = 0x23BFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BFD0u;
            // 0x23bfd4: 0x8e22056c  lw          $v0, 0x56C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C0B0u;
            goto label_23c0b0;
        }
    }
    ctx->pc = 0x23BFD8u;
label_23bfd8:
    // 0x23bfd8: 0x56400035  bnel        $s2, $zero, . + 4 + (0x35 << 2)
label_23bfdc:
    if (ctx->pc == 0x23BFDCu) {
        ctx->pc = 0x23BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFD8u;
        // 0x23bfdc: 0x8e22056c  lw          $v0, 0x56C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BFE0u;
        goto label_23bfe0;
    }
    ctx->pc = 0x23BFD8u;
    {
        const bool branch_taken_0x23bfd8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bfd8) {
            ctx->pc = 0x23BFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BFD8u;
            // 0x23bfdc: 0x8e22056c  lw          $v0, 0x56C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C0B0u;
            goto label_23c0b0;
        }
    }
    ctx->pc = 0x23BFE0u;
label_23bfe0:
    // 0x23bfe0: 0x8e220550  lw          $v0, 0x550($s1)
    ctx->pc = 0x23bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_23bfe4:
    // 0x23bfe4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23bfe8:
    if (ctx->pc == 0x23BFE8u) {
        ctx->pc = 0x23BFECu;
        goto label_23bfec;
    }
    ctx->pc = 0x23BFE4u;
    {
        const bool branch_taken_0x23bfe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bfe4) {
            ctx->pc = 0x23BFFCu;
            goto label_23bffc;
        }
    }
    ctx->pc = 0x23BFECu;
label_23bfec:
    // 0x23bfec: 0xc08dada  jal         func_236B68
label_23bff0:
    if (ctx->pc == 0x23BFF0u) {
        ctx->pc = 0x23BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFECu;
        // 0x23bff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BFF4u;
        goto label_23bff4;
    }
    ctx->pc = 0x23BFECu;
    SET_GPR_U32(ctx, 31, 0x23BFF4u);
    ctx->pc = 0x23BFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BFECu;
    // 0x23bff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x23BFECu, 0x23BFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BFF4u;
label_23bff4:
    // 0x23bff4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_23bff8:
    if (ctx->pc == 0x23BFF8u) {
        ctx->pc = 0x23BFFCu;
        goto label_23bffc;
    }
    ctx->pc = 0x23BFF4u;
    {
        const bool branch_taken_0x23bff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bff4) {
            ctx->pc = 0x23C030u;
            goto label_23c030;
        }
    }
    ctx->pc = 0x23BFFCu;
label_23bffc:
    // 0x23bffc: 0xc0899bc  jal         func_2266F0
label_23c000:
    if (ctx->pc == 0x23C000u) {
        ctx->pc = 0x23C000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFFCu;
        // 0x23c000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C004u;
        goto label_23c004;
    }
    ctx->pc = 0x23BFFCu;
    SET_GPR_U32(ctx, 31, 0x23C004u);
    ctx->pc = 0x23C000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BFFCu;
    // 0x23c000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x23BFFCu, 0x23C004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C004u;
label_23c004:
    // 0x23c004: 0x8c430218  lw          $v1, 0x218($v0)
    ctx->pc = 0x23c004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
label_23c008:
    // 0x23c008: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23c008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c00c:
    // 0x23c00c: 0x8e260558  lw          $a2, 0x558($s1)
    ctx->pc = 0x23c00cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1368)));
label_23c010:
    // 0x23c010: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23c010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c014:
    // 0x23c014: 0x8e27055c  lw          $a3, 0x55C($s1)
    ctx->pc = 0x23c014u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1372)));
label_23c018:
    // 0x23c018: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x23c018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_23c01c:
    // 0x23c01c: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x23c01cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_23c020:
    // 0x23c020: 0x40f809  jalr        $v0
label_23c024:
    if (ctx->pc == 0x23C024u) {
        ctx->pc = 0x23C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C020u;
        // 0x23c024: 0x7382b  sltu        $a3, $zero, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C028u;
        goto label_23c028;
    }
    ctx->pc = 0x23C020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23C028u);
        ctx->pc = 0x23C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C020u;
        // 0x23c024: 0x7382b  sltu        $a3, $zero, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C020u, 0x23C028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23C028u;
label_23c028:
    // 0x23c028: 0x1000000c  b           . + 4 + (0xC << 2)
label_23c02c:
    if (ctx->pc == 0x23C02Cu) {
        ctx->pc = 0x23C030u;
        goto label_23c030;
    }
    ctx->pc = 0x23C028u;
    {
        const bool branch_taken_0x23c028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c028) {
            ctx->pc = 0x23C05Cu;
            goto label_23c05c;
        }
    }
    ctx->pc = 0x23C030u;
label_23c030:
    // 0x23c030: 0xc0899bc  jal         func_2266F0
label_23c034:
    if (ctx->pc == 0x23C034u) {
        ctx->pc = 0x23C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C030u;
        // 0x23c034: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C038u;
        goto label_23c038;
    }
    ctx->pc = 0x23C030u;
    SET_GPR_U32(ctx, 31, 0x23C038u);
    ctx->pc = 0x23C034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C030u;
    // 0x23c034: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x23C030u, 0x23C038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C038u;
label_23c038:
    // 0x23c038: 0x8c430218  lw          $v1, 0x218($v0)
    ctx->pc = 0x23c038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
label_23c03c:
    // 0x23c03c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23c03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c040:
    // 0x23c040: 0x8e260558  lw          $a2, 0x558($s1)
    ctx->pc = 0x23c040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1368)));
label_23c044:
    // 0x23c044: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23c044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23c048:
    // 0x23c048: 0x8e27055c  lw          $a3, 0x55C($s1)
    ctx->pc = 0x23c048u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1372)));
label_23c04c:
    // 0x23c04c: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x23c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_23c050:
    // 0x23c050: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x23c050u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_23c054:
    // 0x23c054: 0x40f809  jalr        $v0
label_23c058:
    if (ctx->pc == 0x23C058u) {
        ctx->pc = 0x23C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C054u;
        // 0x23c058: 0x7382b  sltu        $a3, $zero, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C05Cu;
        goto label_23c05c;
    }
    ctx->pc = 0x23C054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23C05Cu);
        ctx->pc = 0x23C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C054u;
        // 0x23c058: 0x7382b  sltu        $a3, $zero, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C054u, 0x23C05Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23C05Cu;
label_23c05c:
    // 0x23c05c: 0xc08da92  jal         func_236A48
label_23c060:
    if (ctx->pc == 0x23C060u) {
        ctx->pc = 0x23C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C05Cu;
        // 0x23c060: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C064u;
        goto label_23c064;
    }
    ctx->pc = 0x23C05Cu;
    SET_GPR_U32(ctx, 31, 0x23C064u);
    ctx->pc = 0x23C060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C05Cu;
    // 0x23c060: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x23C05Cu, 0x23C064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C064u;
label_23c064:
    // 0x23c064: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_23c068:
    if (ctx->pc == 0x23C068u) {
        ctx->pc = 0x23C068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C064u;
        // 0x23c068: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C06Cu;
        goto label_23c06c;
    }
    ctx->pc = 0x23C064u;
    {
        const bool branch_taken_0x23c064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C064u;
        // 0x23c068: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c064) {
            ctx->pc = 0x23C0ACu;
            goto label_23c0ac;
        }
    }
    ctx->pc = 0x23C06Cu;
label_23c06c:
    // 0x23c06c: 0x8e220338  lw          $v0, 0x338($s1)
    ctx->pc = 0x23c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_23c070:
    // 0x23c070: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x23c070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_23c074:
    // 0x23c074: 0x1064000d  beq         $v1, $a0, . + 4 + (0xD << 2)
label_23c078:
    if (ctx->pc == 0x23C078u) {
        ctx->pc = 0x23C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C074u;
        // 0x23c078: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C07Cu;
        goto label_23c07c;
    }
    ctx->pc = 0x23C074u;
    {
        const bool branch_taken_0x23c074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x23C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C074u;
        // 0x23c078: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c074) {
            ctx->pc = 0x23C0ACu;
            goto label_23c0ac;
        }
    }
    ctx->pc = 0x23C07Cu;
label_23c07c:
    // 0x23c07c: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x23c07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_23c080:
    // 0x23c080: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_23c084:
    if (ctx->pc == 0x23C084u) {
        ctx->pc = 0x23C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C080u;
        // 0x23c084: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C088u;
        goto label_23c088;
    }
    ctx->pc = 0x23C080u;
    {
        const bool branch_taken_0x23c080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C080u;
        // 0x23c084: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c080) {
            ctx->pc = 0x23C0ACu;
            goto label_23c0ac;
        }
    }
    ctx->pc = 0x23C088u;
label_23c088:
    // 0x23c088: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_23c08c:
    if (ctx->pc == 0x23C08Cu) {
        ctx->pc = 0x23C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C088u;
        // 0x23c08c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C090u;
        goto label_23c090;
    }
    ctx->pc = 0x23C088u;
    {
        const bool branch_taken_0x23c088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C088u;
        // 0x23c08c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c088) {
            ctx->pc = 0x23C0ACu;
            goto label_23c0ac;
        }
    }
    ctx->pc = 0x23C090u;
label_23c090:
    // 0x23c090: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_23c094:
    if (ctx->pc == 0x23C094u) {
        ctx->pc = 0x23C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C090u;
        // 0x23c094: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C098u;
        goto label_23c098;
    }
    ctx->pc = 0x23C090u;
    {
        const bool branch_taken_0x23c090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C090u;
        // 0x23c094: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c090) {
            ctx->pc = 0x23C0ACu;
            goto label_23c0ac;
        }
    }
    ctx->pc = 0x23C098u;
label_23c098:
    // 0x23c098: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_23c09c:
    if (ctx->pc == 0x23C09Cu) {
        ctx->pc = 0x23C09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C098u;
        // 0x23c09c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C0A0u;
        goto label_23c0a0;
    }
    ctx->pc = 0x23C098u;
    {
        const bool branch_taken_0x23c098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C098u;
        // 0x23c09c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c098) {
            ctx->pc = 0x23C0ACu;
            goto label_23c0ac;
        }
    }
    ctx->pc = 0x23C0A0u;
label_23c0a0:
    // 0x23c0a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23c0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c0a4:
    // 0x23c0a4: 0xc08bf70  jal         func_22FDC0
label_23c0a8:
    if (ctx->pc == 0x23C0A8u) {
        ctx->pc = 0x23C0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0A4u;
        // 0x23c0a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C0ACu;
        goto label_23c0ac;
    }
    ctx->pc = 0x23C0A4u;
    SET_GPR_U32(ctx, 31, 0x23C0ACu);
    ctx->pc = 0x23C0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C0A4u;
    // 0x23c0a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FDC0u, 0x23C0A4u, 0x23C0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C0ACu;
label_23c0ac:
    // 0x23c0ac: 0x8e22056c  lw          $v0, 0x56C($s1)
    ctx->pc = 0x23c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1388)));
label_23c0b0:
    // 0x23c0b0: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_23c0b4:
    if (ctx->pc == 0x23C0B4u) {
        ctx->pc = 0x23C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0B0u;
        // 0x23c0b4: 0x8e230418  lw          $v1, 0x418($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C0B8u;
        goto label_23c0b8;
    }
    ctx->pc = 0x23C0B0u;
    {
        const bool branch_taken_0x23c0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c0b0) {
            ctx->pc = 0x23C0B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C0B0u;
            // 0x23c0b4: 0x8e230418  lw          $v1, 0x418($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C110u;
            goto label_23c110;
        }
    }
    ctx->pc = 0x23C0B8u;
label_23c0b8:
    // 0x23c0b8: 0xc08da92  jal         func_236A48
label_23c0bc:
    if (ctx->pc == 0x23C0BCu) {
        ctx->pc = 0x23C0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0B8u;
        // 0x23c0bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C0C0u;
        goto label_23c0c0;
    }
    ctx->pc = 0x23C0B8u;
    SET_GPR_U32(ctx, 31, 0x23C0C0u);
    ctx->pc = 0x23C0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C0B8u;
    // 0x23c0bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x23C0B8u, 0x23C0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C0C0u;
label_23c0c0:
    // 0x23c0c0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_23c0c4:
    if (ctx->pc == 0x23C0C4u) {
        ctx->pc = 0x23C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0C0u;
        // 0x23c0c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C0C8u;
        goto label_23c0c8;
    }
    ctx->pc = 0x23C0C0u;
    {
        const bool branch_taken_0x23c0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0C0u;
        // 0x23c0c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0c0) {
            ctx->pc = 0x23C0E8u;
            goto label_23c0e8;
        }
    }
    ctx->pc = 0x23C0C8u;
label_23c0c8:
    // 0x23c0c8: 0xc08dab6  jal         func_236AD8
label_23c0cc:
    if (ctx->pc == 0x23C0CCu) {
        ctx->pc = 0x23C0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0C8u;
        // 0x23c0cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C0D0u;
        goto label_23c0d0;
    }
    ctx->pc = 0x23C0C8u;
    SET_GPR_U32(ctx, 31, 0x23C0D0u);
    ctx->pc = 0x23C0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C0C8u;
    // 0x23c0cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x23C0C8u, 0x23C0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C0D0u;
label_23c0d0:
    // 0x23c0d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23c0d4:
    if (ctx->pc == 0x23C0D4u) {
        ctx->pc = 0x23C0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0D0u;
        // 0x23c0d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C0D8u;
        goto label_23c0d8;
    }
    ctx->pc = 0x23C0D0u;
    {
        const bool branch_taken_0x23c0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0D0u;
        // 0x23c0d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0d0) {
            ctx->pc = 0x23C0E8u;
            goto label_23c0e8;
        }
    }
    ctx->pc = 0x23C0D8u;
label_23c0d8:
    // 0x23c0d8: 0xc08db10  jal         func_236C40
label_23c0dc:
    if (ctx->pc == 0x23C0DCu) {
        ctx->pc = 0x23C0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0D8u;
        // 0x23c0dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C0E0u;
        goto label_23c0e0;
    }
    ctx->pc = 0x23C0D8u;
    SET_GPR_U32(ctx, 31, 0x23C0E0u);
    ctx->pc = 0x23C0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C0D8u;
    // 0x23c0dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C40u, 0x23C0D8u, 0x23C0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C0E0u;
label_23c0e0:
    // 0x23c0e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_23c0e4:
    if (ctx->pc == 0x23C0E4u) {
        ctx->pc = 0x23C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0E0u;
        // 0x23c0e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C0E8u;
        goto label_23c0e8;
    }
    ctx->pc = 0x23C0E0u;
    {
        const bool branch_taken_0x23c0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0E0u;
        // 0x23c0e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0e0) {
            ctx->pc = 0x23C0FCu;
            goto label_23c0fc;
        }
    }
    ctx->pc = 0x23C0E8u;
label_23c0e8:
    // 0x23c0e8: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x23c0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
label_23c0ec:
    // 0x23c0ec: 0xc08fed2  jal         func_23FB48
label_23c0f0:
    if (ctx->pc == 0x23C0F0u) {
        ctx->pc = 0x23C0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0ECu;
        // 0x23c0f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C0F4u;
        goto label_23c0f4;
    }
    ctx->pc = 0x23C0ECu;
    SET_GPR_U32(ctx, 31, 0x23C0F4u);
    ctx->pc = 0x23C0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C0ECu;
    // 0x23c0f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23C0ECu, 0x23C0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C0F4u;
label_23c0f4:
    // 0x23c0f4: 0x10000010  b           . + 4 + (0x10 << 2)
label_23c0f8:
    if (ctx->pc == 0x23C0F8u) {
        ctx->pc = 0x23C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0F4u;
        // 0x23c0f8: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C0FCu;
        goto label_23c0fc;
    }
    ctx->pc = 0x23C0F4u;
    {
        const bool branch_taken_0x23c0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0F4u;
        // 0x23c0f8: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0f4) {
            ctx->pc = 0x23C138u;
            goto label_23c138;
        }
    }
    ctx->pc = 0x23C0FCu;
label_23c0fc:
    // 0x23c0fc: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x23c0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
label_23c100:
    // 0x23c100: 0xc08fed2  jal         func_23FB48
label_23c104:
    if (ctx->pc == 0x23C104u) {
        ctx->pc = 0x23C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C100u;
        // 0x23c104: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C108u;
        goto label_23c108;
    }
    ctx->pc = 0x23C100u;
    SET_GPR_U32(ctx, 31, 0x23C108u);
    ctx->pc = 0x23C104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C100u;
    // 0x23c104: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23C100u, 0x23C108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C108u;
label_23c108:
    // 0x23c108: 0x1000000b  b           . + 4 + (0xB << 2)
label_23c10c:
    if (ctx->pc == 0x23C10Cu) {
        ctx->pc = 0x23C10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C108u;
        // 0x23c10c: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C110u;
        goto label_23c110;
    }
    ctx->pc = 0x23C108u;
    {
        const bool branch_taken_0x23c108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C108u;
        // 0x23c10c: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c108) {
            ctx->pc = 0x23C138u;
            goto label_23c138;
        }
    }
    ctx->pc = 0x23C110u;
label_23c110:
    // 0x23c110: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x23c110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_23c114:
    // 0x23c114: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_23c118:
    if (ctx->pc == 0x23C118u) {
        ctx->pc = 0x23C118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C114u;
        // 0x23c118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C11Cu;
        goto label_23c11c;
    }
    ctx->pc = 0x23C114u;
    {
        const bool branch_taken_0x23c114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23C118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C114u;
        // 0x23c118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c114) {
            ctx->pc = 0x23C128u;
            goto label_23c128;
        }
    }
    ctx->pc = 0x23C11Cu;
label_23c11c:
    // 0x23c11c: 0xc08bd98  jal         func_22F660
label_23c120:
    if (ctx->pc == 0x23C120u) {
        ctx->pc = 0x23C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C11Cu;
        // 0x23c120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C124u;
        goto label_23c124;
    }
    ctx->pc = 0x23C11Cu;
    SET_GPR_U32(ctx, 31, 0x23C124u);
    ctx->pc = 0x23C120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C11Cu;
    // 0x23c120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F660u, 0x23C11Cu, 0x23C124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C124u;
label_23c124:
    // 0x23c124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c128:
    // 0x23c128: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x23c128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
label_23c12c:
    // 0x23c12c: 0xc08fed2  jal         func_23FB48
label_23c130:
    if (ctx->pc == 0x23C130u) {
        ctx->pc = 0x23C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C12Cu;
        // 0x23c130: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C134u;
        goto label_23c134;
    }
    ctx->pc = 0x23C12Cu;
    SET_GPR_U32(ctx, 31, 0x23C134u);
    ctx->pc = 0x23C130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C12Cu;
    // 0x23c130: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23C12Cu, 0x23C134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C134u;
label_23c134:
    // 0x23c134: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23c134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_23c138:
    // 0x23c138: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23c138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23c13c:
    // 0x23c13c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_23c140:
    if (ctx->pc == 0x23C140u) {
        ctx->pc = 0x23C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C13Cu;
        // 0x23c140: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C144u;
        goto label_23c144;
    }
    ctx->pc = 0x23C13Cu;
    {
        const bool branch_taken_0x23c13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C13Cu;
        // 0x23c140: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c13c) {
            ctx->pc = 0x23C148u;
            goto label_23c148;
        }
    }
    ctx->pc = 0x23C144u;
label_23c144:
    // 0x23c144: 0x92231386  lbu         $v1, 0x1386($s1)
    ctx->pc = 0x23c144u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4998)));
label_23c148:
    // 0x23c148: 0x8e220540  lw          $v0, 0x540($s1)
    ctx->pc = 0x23c148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1344)));
label_23c14c:
    // 0x23c14c: 0x50400065  beql        $v0, $zero, . + 4 + (0x65 << 2)
label_23c150:
    if (ctx->pc == 0x23C150u) {
        ctx->pc = 0x23C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C14Cu;
        // 0x23c150: 0x8e2205b0  lw          $v0, 0x5B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C154u;
        goto label_23c154;
    }
    ctx->pc = 0x23C14Cu;
    {
        const bool branch_taken_0x23c14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c14c) {
            ctx->pc = 0x23C150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C14Cu;
            // 0x23c150: 0x8e2205b0  lw          $v0, 0x5B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C2E4u;
            goto label_23c2e4;
        }
    }
    ctx->pc = 0x23C154u;
label_23c154:
    // 0x23c154: 0x54600063  bnel        $v1, $zero, . + 4 + (0x63 << 2)
label_23c158:
    if (ctx->pc == 0x23C158u) {
        ctx->pc = 0x23C158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C154u;
        // 0x23c158: 0x8e2205b0  lw          $v0, 0x5B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C15Cu;
        goto label_23c15c;
    }
    ctx->pc = 0x23C154u;
    {
        const bool branch_taken_0x23c154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c154) {
            ctx->pc = 0x23C158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C154u;
            // 0x23c158: 0x8e2205b0  lw          $v0, 0x5B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C2E4u;
            goto label_23c2e4;
        }
    }
    ctx->pc = 0x23C15Cu;
label_23c15c:
    // 0x23c15c: 0xc0899bc  jal         func_2266F0
label_23c160:
    if (ctx->pc == 0x23C160u) {
        ctx->pc = 0x23C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C15Cu;
        // 0x23c160: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C164u;
        goto label_23c164;
    }
    ctx->pc = 0x23C15Cu;
    SET_GPR_U32(ctx, 31, 0x23C164u);
    ctx->pc = 0x23C160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C15Cu;
    // 0x23c160: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x23C15Cu, 0x23C164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C164u;
label_23c164:
    // 0x23c164: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x23c164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_23c168:
    // 0x23c168: 0x30633001  andi        $v1, $v1, 0x3001
    ctx->pc = 0x23c168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12289);
label_23c16c:
    // 0x23c16c: 0x38633001  xori        $v1, $v1, 0x3001
    ctx->pc = 0x23c16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)12289);
label_23c170:
    // 0x23c170: 0x5460005c  bnel        $v1, $zero, . + 4 + (0x5C << 2)
label_23c174:
    if (ctx->pc == 0x23C174u) {
        ctx->pc = 0x23C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C170u;
        // 0x23c174: 0x8e2205b0  lw          $v0, 0x5B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C178u;
        goto label_23c178;
    }
    ctx->pc = 0x23C170u;
    {
        const bool branch_taken_0x23c170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c170) {
            ctx->pc = 0x23C174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C170u;
            // 0x23c174: 0x8e2205b0  lw          $v0, 0x5B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C2E4u;
            goto label_23c2e4;
        }
    }
    ctx->pc = 0x23C178u;
label_23c178:
    // 0x23c178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c17c:
    // 0x23c17c: 0xc0899bc  jal         func_2266F0
label_23c180:
    if (ctx->pc == 0x23C180u) {
        ctx->pc = 0x23C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C17Cu;
        // 0x23c180: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C184u;
        goto label_23c184;
    }
    ctx->pc = 0x23C17Cu;
    SET_GPR_U32(ctx, 31, 0x23C184u);
    ctx->pc = 0x23C180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C17Cu;
    // 0x23c180: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x23C17Cu, 0x23C184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C184u;
label_23c184:
    // 0x23c184: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23c184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c188:
    // 0x23c188: 0x8e120274  lw          $s2, 0x274($s0)
    ctx->pc = 0x23c188u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
label_23c18c:
    // 0x23c18c: 0xc097f26  jal         func_25FC98
label_23c190:
    if (ctx->pc == 0x23C190u) {
        ctx->pc = 0x23C190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C18Cu;
        // 0x23c190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C194u;
        goto label_23c194;
    }
    ctx->pc = 0x23C18Cu;
    SET_GPR_U32(ctx, 31, 0x23C194u);
    ctx->pc = 0x23C190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C18Cu;
    // 0x23c190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x23C18Cu, 0x23C194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C194u;
label_23c194:
    // 0x23c194: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x23c194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_23c198:
    // 0x23c198: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
label_23c19c:
    if (ctx->pc == 0x23C19Cu) {
        ctx->pc = 0x23C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C198u;
        // 0x23c19c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C1A0u;
        goto label_23c1a0;
    }
    ctx->pc = 0x23C198u;
    {
        const bool branch_taken_0x23c198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x23c198) {
            ctx->pc = 0x23C19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C198u;
            // 0x23c19c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C1B4u;
            goto label_23c1b4;
        }
    }
    ctx->pc = 0x23C1A0u;
label_23c1a0:
    // 0x23c1a0: 0xc097f26  jal         func_25FC98
label_23c1a4:
    if (ctx->pc == 0x23C1A4u) {
        ctx->pc = 0x23C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1A0u;
        // 0x23c1a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C1A8u;
        goto label_23c1a8;
    }
    ctx->pc = 0x23C1A0u;
    SET_GPR_U32(ctx, 31, 0x23C1A8u);
    ctx->pc = 0x23C1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C1A0u;
    // 0x23c1a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x23C1A0u, 0x23C1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C1A8u;
label_23c1a8:
    // 0x23c1a8: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x23c1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_23c1ac:
    // 0x23c1ac: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_23c1b0:
    if (ctx->pc == 0x23C1B0u) {
        ctx->pc = 0x23C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1ACu;
        // 0x23c1b0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C1B4u;
        goto label_23c1b4;
    }
    ctx->pc = 0x23C1ACu;
    {
        const bool branch_taken_0x23c1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x23c1ac) {
            ctx->pc = 0x23C1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C1ACu;
            // 0x23c1b0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C1B4u;
            goto label_23c1b4;
        }
    }
    ctx->pc = 0x23C1B4u;
label_23c1b4:
    // 0x23c1b4: 0x5240004b  beql        $s2, $zero, . + 4 + (0x4B << 2)
label_23c1b8:
    if (ctx->pc == 0x23C1B8u) {
        ctx->pc = 0x23C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1B4u;
        // 0x23c1b8: 0x8e2205b0  lw          $v0, 0x5B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C1BCu;
        goto label_23c1bc;
    }
    ctx->pc = 0x23C1B4u;
    {
        const bool branch_taken_0x23c1b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c1b4) {
            ctx->pc = 0x23C1B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C1B4u;
            // 0x23c1b8: 0x8e2205b0  lw          $v0, 0x5B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C2E4u;
            goto label_23c2e4;
        }
    }
    ctx->pc = 0x23C1BCu;
label_23c1bc:
    // 0x23c1bc: 0xc0d8de2  jal         func_363788
label_23c1c0:
    if (ctx->pc == 0x23C1C0u) {
        ctx->pc = 0x23C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1BCu;
        // 0x23c1c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C1C4u;
        goto label_23c1c4;
    }
    ctx->pc = 0x23C1BCu;
    SET_GPR_U32(ctx, 31, 0x23C1C4u);
    ctx->pc = 0x23C1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C1BCu;
    // 0x23c1c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x23C1BCu, 0x23C1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C1C4u;
label_23c1c4:
    // 0x23c1c4: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x23c1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_23c1c8:
    // 0x23c1c8: 0x54400046  bnel        $v0, $zero, . + 4 + (0x46 << 2)
label_23c1cc:
    if (ctx->pc == 0x23C1CCu) {
        ctx->pc = 0x23C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1C8u;
        // 0x23c1cc: 0x8e2205b0  lw          $v0, 0x5B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C1D0u;
        goto label_23c1d0;
    }
    ctx->pc = 0x23C1C8u;
    {
        const bool branch_taken_0x23c1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c1c8) {
            ctx->pc = 0x23C1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C1C8u;
            // 0x23c1cc: 0x8e2205b0  lw          $v0, 0x5B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C2E4u;
            goto label_23c2e4;
        }
    }
    ctx->pc = 0x23C1D0u;
label_23c1d0:
    // 0x23c1d0: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x23c1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_23c1d4:
    // 0x23c1d4: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x23c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_23c1d8:
    // 0x23c1d8: 0x2442ffee  addiu       $v0, $v0, -0x12
    ctx->pc = 0x23c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967278));
label_23c1dc:
    // 0x23c1dc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23c1dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_23c1e0:
    // 0x23c1e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23c1e4:
    if (ctx->pc == 0x23C1E4u) {
        ctx->pc = 0x23C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1E0u;
        // 0x23c1e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C1E8u;
        goto label_23c1e8;
    }
    ctx->pc = 0x23C1E0u;
    {
        const bool branch_taken_0x23c1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1E0u;
        // 0x23c1e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1e0) {
            ctx->pc = 0x23C1F4u;
            goto label_23c1f4;
        }
    }
    ctx->pc = 0x23C1E8u;
label_23c1e8:
    // 0x23c1e8: 0xc0f753e  jal         func_3DD4F8
label_23c1ec:
    if (ctx->pc == 0x23C1ECu) {
        ctx->pc = 0x23C1F0u;
        goto label_23c1f0;
    }
    ctx->pc = 0x23C1E8u;
    SET_GPR_U32(ctx, 31, 0x23C1F0u);
    ctx->pc = 0x3DD4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD4F8u, 0x23C1E8u, 0x23C1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C1F0u;
label_23c1f0:
    // 0x23c1f0: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x23c1f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23c1f4:
    // 0x23c1f4: 0x5460003b  bnel        $v1, $zero, . + 4 + (0x3B << 2)
label_23c1f8:
    if (ctx->pc == 0x23C1F8u) {
        ctx->pc = 0x23C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1F4u;
        // 0x23c1f8: 0x8e2205b0  lw          $v0, 0x5B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C1FCu;
        goto label_23c1fc;
    }
    ctx->pc = 0x23C1F4u;
    {
        const bool branch_taken_0x23c1f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c1f4) {
            ctx->pc = 0x23C1F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C1F4u;
            // 0x23c1f8: 0x8e2205b0  lw          $v0, 0x5B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C2E4u;
            goto label_23c2e4;
        }
    }
    ctx->pc = 0x23C1FCu;
label_23c1fc:
    // 0x23c1fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23c1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23c200:
    // 0x23c200: 0xc0d9108  jal         func_364420
label_23c204:
    if (ctx->pc == 0x23C204u) {
        ctx->pc = 0x23C204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C200u;
        // 0x23c204: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C208u;
        goto label_23c208;
    }
    ctx->pc = 0x23C200u;
    SET_GPR_U32(ctx, 31, 0x23C208u);
    ctx->pc = 0x23C204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C200u;
    // 0x23c204: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364420u, 0x23C200u, 0x23C208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C208u;
label_23c208:
    // 0x23c208: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x23c208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_23c20c:
    // 0x23c20c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x23c20cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23c210:
    // 0x23c210: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_23c214:
    if (ctx->pc == 0x23C214u) {
        ctx->pc = 0x23C218u;
        goto label_23c218;
    }
    ctx->pc = 0x23C210u;
    {
        const bool branch_taken_0x23c210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c210) {
            ctx->pc = 0x23C220u;
            goto label_23c220;
        }
    }
    ctx->pc = 0x23C218u;
label_23c218:
    // 0x23c218: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x23c218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_23c21c:
    // 0x23c21c: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x23c21cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23c220:
    // 0x23c220: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
label_23c224:
    if (ctx->pc == 0x23C224u) {
        ctx->pc = 0x23C228u;
        goto label_23c228;
    }
    ctx->pc = 0x23C220u;
    {
        const bool branch_taken_0x23c220 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c220) {
            ctx->pc = 0x23C23Cu;
            goto label_23c23c;
        }
    }
    ctx->pc = 0x23C228u;
label_23c228:
    // 0x23c228: 0xc097f26  jal         func_25FC98
label_23c22c:
    if (ctx->pc == 0x23C22Cu) {
        ctx->pc = 0x23C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C228u;
        // 0x23c22c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C230u;
        goto label_23c230;
    }
    ctx->pc = 0x23C228u;
    SET_GPR_U32(ctx, 31, 0x23C230u);
    ctx->pc = 0x23C22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C228u;
    // 0x23c22c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x23C228u, 0x23C230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C230u;
label_23c230:
    // 0x23c230: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x23c230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_23c234:
    // 0x23c234: 0x5443002b  bnel        $v0, $v1, . + 4 + (0x2B << 2)
label_23c238:
    if (ctx->pc == 0x23C238u) {
        ctx->pc = 0x23C238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C234u;
        // 0x23c238: 0x8e2205b0  lw          $v0, 0x5B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C23Cu;
        goto label_23c23c;
    }
    ctx->pc = 0x23C234u;
    {
        const bool branch_taken_0x23c234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23c234) {
            ctx->pc = 0x23C238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C234u;
            // 0x23c238: 0x8e2205b0  lw          $v0, 0x5B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C2E4u;
            goto label_23c2e4;
        }
    }
    ctx->pc = 0x23C23Cu;
label_23c23c:
    // 0x23c23c: 0x12800023  beqz        $s4, . + 4 + (0x23 << 2)
label_23c240:
    if (ctx->pc == 0x23C240u) {
        ctx->pc = 0x23C244u;
        goto label_23c244;
    }
    ctx->pc = 0x23C23Cu;
    {
        const bool branch_taken_0x23c23c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c23c) {
            ctx->pc = 0x23C2CCu;
            goto label_23c2cc;
        }
    }
    ctx->pc = 0x23C244u;
label_23c244:
    // 0x23c244: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x23c244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_23c248:
    // 0x23c248: 0x8c850088  lw          $a1, 0x88($a0)
    ctx->pc = 0x23c248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_23c24c:
    // 0x23c24c: 0x38a20003  xori        $v0, $a1, 0x3
    ctx->pc = 0x23c24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)3);
label_23c250:
    // 0x23c250: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_23c254:
    if (ctx->pc == 0x23C254u) {
        ctx->pc = 0x23C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C250u;
        // 0x23c254: 0x24a2ffee  addiu       $v0, $a1, -0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967278));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C258u;
        goto label_23c258;
    }
    ctx->pc = 0x23C250u;
    {
        const bool branch_taken_0x23c250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C250u;
        // 0x23c254: 0x24a2ffee  addiu       $v0, $a1, -0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967278));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c250) {
            ctx->pc = 0x23C280u;
            goto label_23c280;
        }
    }
    ctx->pc = 0x23C258u;
label_23c258:
    // 0x23c258: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23c258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_23c25c:
    // 0x23c25c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_23c260:
    if (ctx->pc == 0x23C260u) {
        ctx->pc = 0x23C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C25Cu;
        // 0x23c260: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C264u;
        goto label_23c264;
    }
    ctx->pc = 0x23C25Cu;
    {
        const bool branch_taken_0x23c25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C25Cu;
        // 0x23c260: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c25c) {
            ctx->pc = 0x23C278u;
            goto label_23c278;
        }
    }
    ctx->pc = 0x23C264u;
label_23c264:
    // 0x23c264: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x23c264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_23c268:
    // 0x23c268: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x23c268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_23c26c:
    // 0x23c26c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23c26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23c270:
    // 0x23c270: 0x2863015a  slti        $v1, $v1, 0x15A
    ctx->pc = 0x23c270u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)346) ? 1 : 0);
label_23c274:
    // 0x23c274: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x23c274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_23c278:
    // 0x23c278: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_23c27c:
    if (ctx->pc == 0x23C27Cu) {
        ctx->pc = 0x23C280u;
        goto label_23c280;
    }
    ctx->pc = 0x23C278u;
    {
        const bool branch_taken_0x23c278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c278) {
            ctx->pc = 0x23C290u;
            goto label_23c290;
        }
    }
    ctx->pc = 0x23C280u;
label_23c280:
    // 0x23c280: 0x8e220370  lw          $v0, 0x370($s1)
    ctx->pc = 0x23c280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
label_23c284:
    // 0x23c284: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x23c284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_23c288:
    // 0x23c288: 0x10000015  b           . + 4 + (0x15 << 2)
label_23c28c:
    if (ctx->pc == 0x23C28Cu) {
        ctx->pc = 0x23C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C288u;
        // 0x23c28c: 0xae220370  sw          $v0, 0x370($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C290u;
        goto label_23c290;
    }
    ctx->pc = 0x23C288u;
    {
        const bool branch_taken_0x23c288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C288u;
        // 0x23c28c: 0xae220370  sw          $v0, 0x370($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c288) {
            ctx->pc = 0x23C2E0u;
            goto label_23c2e0;
        }
    }
    ctx->pc = 0x23C290u;
label_23c290:
    // 0x23c290: 0xc06be68  jal         func_1AF9A0
label_23c294:
    if (ctx->pc == 0x23C294u) {
        ctx->pc = 0x23C298u;
        goto label_23c298;
    }
    ctx->pc = 0x23C290u;
    SET_GPR_U32(ctx, 31, 0x23C298u);
    ctx->pc = 0x1AF9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF9A0u, 0x23C290u, 0x23C298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C298u;
label_23c298:
    // 0x23c298: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x23c298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_23c29c:
    // 0x23c29c: 0xc06c546  jal         func_1B1518
label_23c2a0:
    if (ctx->pc == 0x23C2A0u) {
        ctx->pc = 0x23C2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C29Cu;
        // 0x23c2a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2A4u;
        goto label_23c2a4;
    }
    ctx->pc = 0x23C29Cu;
    SET_GPR_U32(ctx, 31, 0x23C2A4u);
    ctx->pc = 0x23C2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C29Cu;
    // 0x23c2a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x23C29Cu, 0x23C2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C2A4u;
label_23c2a4:
    // 0x23c2a4: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x23c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_23c2a8:
    // 0x23c2a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23c2ac:
    if (ctx->pc == 0x23C2ACu) {
        ctx->pc = 0x23C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2A8u;
        // 0x23c2ac: 0x8e220370  lw          $v0, 0x370($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2B0u;
        goto label_23c2b0;
    }
    ctx->pc = 0x23C2A8u;
    {
        const bool branch_taken_0x23c2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2A8u;
        // 0x23c2ac: 0x8e220370  lw          $v0, 0x370($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c2a8) {
            ctx->pc = 0x23C2BCu;
            goto label_23c2bc;
        }
    }
    ctx->pc = 0x23C2B0u;
label_23c2b0:
    // 0x23c2b0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x23c2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_23c2b4:
    // 0x23c2b4: 0x1000000a  b           . + 4 + (0xA << 2)
label_23c2b8:
    if (ctx->pc == 0x23C2B8u) {
        ctx->pc = 0x23C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2B4u;
        // 0x23c2b8: 0xae220370  sw          $v0, 0x370($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2BCu;
        goto label_23c2bc;
    }
    ctx->pc = 0x23C2B4u;
    {
        const bool branch_taken_0x23c2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2B4u;
        // 0x23c2b8: 0xae220370  sw          $v0, 0x370($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c2b4) {
            ctx->pc = 0x23C2E0u;
            goto label_23c2e0;
        }
    }
    ctx->pc = 0x23C2BCu;
label_23c2bc:
    // 0x23c2bc: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x23c2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_23c2c0:
    // 0x23c2c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23c2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23c2c4:
    // 0x23c2c4: 0x10000006  b           . + 4 + (0x6 << 2)
label_23c2c8:
    if (ctx->pc == 0x23C2C8u) {
        ctx->pc = 0x23C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2C4u;
        // 0x23c2c8: 0xae220370  sw          $v0, 0x370($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2CCu;
        goto label_23c2cc;
    }
    ctx->pc = 0x23C2C4u;
    {
        const bool branch_taken_0x23c2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2C4u;
        // 0x23c2c8: 0xae220370  sw          $v0, 0x370($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c2c4) {
            ctx->pc = 0x23C2E0u;
            goto label_23c2e0;
        }
    }
    ctx->pc = 0x23C2CCu;
label_23c2cc:
    // 0x23c2cc: 0xc06be68  jal         func_1AF9A0
label_23c2d0:
    if (ctx->pc == 0x23C2D0u) {
        ctx->pc = 0x23C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2CCu;
        // 0x23c2d0: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2D4u;
        goto label_23c2d4;
    }
    ctx->pc = 0x23C2CCu;
    SET_GPR_U32(ctx, 31, 0x23C2D4u);
    ctx->pc = 0x23C2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C2CCu;
    // 0x23c2d0: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF9A0u, 0x23C2CCu, 0x23C2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C2D4u;
label_23c2d4:
    // 0x23c2d4: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x23c2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_23c2d8:
    // 0x23c2d8: 0xc06c546  jal         func_1B1518
label_23c2dc:
    if (ctx->pc == 0x23C2DCu) {
        ctx->pc = 0x23C2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2D8u;
        // 0x23c2dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2E0u;
        goto label_23c2e0;
    }
    ctx->pc = 0x23C2D8u;
    SET_GPR_U32(ctx, 31, 0x23C2E0u);
    ctx->pc = 0x23C2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C2D8u;
    // 0x23c2dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x23C2D8u, 0x23C2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C2E0u;
label_23c2e0:
    // 0x23c2e0: 0x8e2205b0  lw          $v0, 0x5B0($s1)
    ctx->pc = 0x23c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
label_23c2e4:
    // 0x23c2e4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_23c2e8:
    if (ctx->pc == 0x23C2E8u) {
        ctx->pc = 0x23C2ECu;
        goto label_23c2ec;
    }
    ctx->pc = 0x23C2E4u;
    {
        const bool branch_taken_0x23c2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c2e4) {
            ctx->pc = 0x23C340u;
            goto label_23c340;
        }
    }
    ctx->pc = 0x23C2ECu;
label_23c2ec:
    // 0x23c2ec: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_23c2f0:
    // 0x23c2f0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23c2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23c2f4:
    // 0x23c2f4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_23c2f8:
    if (ctx->pc == 0x23C2F8u) {
        ctx->pc = 0x23C2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2F4u;
        // 0x23c2f8: 0x8e2205b0  lw          $v0, 0x5B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2FCu;
        goto label_23c2fc;
    }
    ctx->pc = 0x23C2F4u;
    {
        const bool branch_taken_0x23c2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c2f4) {
            ctx->pc = 0x23C2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C2F4u;
            // 0x23c2f8: 0x8e2205b0  lw          $v0, 0x5B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C32Cu;
            goto label_23c32c;
        }
    }
    ctx->pc = 0x23C2FCu;
label_23c2fc:
    // 0x23c2fc: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x23c2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_23c300:
    // 0x23c300: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x23c300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_23c304:
    // 0x23c304: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_23c308:
    if (ctx->pc == 0x23C308u) {
        ctx->pc = 0x23C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C304u;
        // 0x23c308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C30Cu;
        goto label_23c30c;
    }
    ctx->pc = 0x23C304u;
    {
        const bool branch_taken_0x23c304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C304u;
        // 0x23c308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c304) {
            ctx->pc = 0x23C328u;
            goto label_23c328;
        }
    }
    ctx->pc = 0x23C30Cu;
label_23c30c:
    // 0x23c30c: 0x922310cc  lbu         $v1, 0x10CC($s1)
    ctx->pc = 0x23c30cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4300)));
label_23c310:
    // 0x23c310: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_23c314:
    if (ctx->pc == 0x23C314u) {
        ctx->pc = 0x23C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C310u;
        // 0x23c314: 0x8e2205b0  lw          $v0, 0x5B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C318u;
        goto label_23c318;
    }
    ctx->pc = 0x23C310u;
    {
        const bool branch_taken_0x23c310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23c310) {
            ctx->pc = 0x23C314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C310u;
            // 0x23c314: 0x8e2205b0  lw          $v0, 0x5B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C32Cu;
            goto label_23c32c;
        }
    }
    ctx->pc = 0x23C318u;
label_23c318:
    // 0x23c318: 0xa22010cc  sb          $zero, 0x10CC($s1)
    ctx->pc = 0x23c318u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4300), (uint8_t)GPR_U32(ctx, 0));
label_23c31c:
    // 0x23c31c: 0xc0927f2  jal         func_249FC8
label_23c320:
    if (ctx->pc == 0x23C320u) {
        ctx->pc = 0x23C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C31Cu;
        // 0x23c320: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C324u;
        goto label_23c324;
    }
    ctx->pc = 0x23C31Cu;
    SET_GPR_U32(ctx, 31, 0x23C324u);
    ctx->pc = 0x23C320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C31Cu;
    // 0x23c320: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249FC8u, 0x23C31Cu, 0x23C324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C324u;
label_23c324:
    // 0x23c324: 0xae200534  sw          $zero, 0x534($s1)
    ctx->pc = 0x23c324u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1332), GPR_U32(ctx, 0));
label_23c328:
    // 0x23c328: 0x8e2205b0  lw          $v0, 0x5B0($s1)
    ctx->pc = 0x23c328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
label_23c32c:
    // 0x23c32c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_23c330:
    if (ctx->pc == 0x23C330u) {
        ctx->pc = 0x23C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C32Cu;
        // 0x23c330: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C334u;
        goto label_23c334;
    }
    ctx->pc = 0x23C32Cu;
    {
        const bool branch_taken_0x23c32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C32Cu;
        // 0x23c330: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c32c) {
            ctx->pc = 0x23C340u;
            goto label_23c340;
        }
    }
    ctx->pc = 0x23C334u;
label_23c334:
    // 0x23c334: 0x90435870  lbu         $v1, 0x5870($v0)
    ctx->pc = 0x23c334u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22640)));
label_23c338:
    // 0x23c338: 0x10600094  beqz        $v1, . + 4 + (0x94 << 2)
label_23c33c:
    if (ctx->pc == 0x23C33Cu) {
        ctx->pc = 0x23C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C338u;
        // 0x23c33c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C340u;
        goto label_23c340;
    }
    ctx->pc = 0x23C338u;
    {
        const bool branch_taken_0x23c338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C338u;
        // 0x23c33c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c338) {
            ctx->pc = 0x23C58Cu;
            goto label_23c58c;
        }
    }
    ctx->pc = 0x23C340u;
label_23c340:
    // 0x23c340: 0xc08dab6  jal         func_236AD8
label_23c344:
    if (ctx->pc == 0x23C344u) {
        ctx->pc = 0x23C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C340u;
        // 0x23c344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C348u;
        goto label_23c348;
    }
    ctx->pc = 0x23C340u;
    SET_GPR_U32(ctx, 31, 0x23C348u);
    ctx->pc = 0x23C344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C340u;
    // 0x23c344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x23C340u, 0x23C348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C348u;
label_23c348:
    // 0x23c348: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_23c34c:
    if (ctx->pc == 0x23C34Cu) {
        ctx->pc = 0x23C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C348u;
        // 0x23c34c: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C350u;
        goto label_23c350;
    }
    ctx->pc = 0x23C348u;
    {
        const bool branch_taken_0x23c348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c348) {
            ctx->pc = 0x23C34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C348u;
            // 0x23c34c: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C364u;
            goto label_23c364;
        }
    }
    ctx->pc = 0x23C350u;
label_23c350:
    // 0x23c350: 0xc08dada  jal         func_236B68
label_23c354:
    if (ctx->pc == 0x23C354u) {
        ctx->pc = 0x23C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C350u;
        // 0x23c354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C358u;
        goto label_23c358;
    }
    ctx->pc = 0x23C350u;
    SET_GPR_U32(ctx, 31, 0x23C358u);
    ctx->pc = 0x23C354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C350u;
    // 0x23c354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x23C350u, 0x23C358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C358u;
label_23c358:
    // 0x23c358: 0x504000ec  beql        $v0, $zero, . + 4 + (0xEC << 2)
label_23c35c:
    if (ctx->pc == 0x23C35Cu) {
        ctx->pc = 0x23C35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C358u;
        // 0x23c35c: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C360u;
        goto label_23c360;
    }
    ctx->pc = 0x23C358u;
    {
        const bool branch_taken_0x23c358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c358) {
            ctx->pc = 0x23C35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C358u;
            // 0x23c35c: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C70Cu;
            goto label_23c70c;
        }
    }
    ctx->pc = 0x23C360u;
label_23c360:
    // 0x23c360: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x23c360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23c364:
    // 0x23c364: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x23c364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_23c368:
    // 0x23c368: 0x2442ffce  addiu       $v0, $v0, -0x32
    ctx->pc = 0x23c368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967246));
label_23c36c:
    // 0x23c36c: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x23c36cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_23c370:
    // 0x23c370: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_23c374:
    if (ctx->pc == 0x23C374u) {
        ctx->pc = 0x23C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C370u;
        // 0x23c374: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C378u;
        goto label_23c378;
    }
    ctx->pc = 0x23C370u;
    {
        const bool branch_taken_0x23c370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C370u;
        // 0x23c374: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c370) {
            ctx->pc = 0x23C3C0u;
            goto label_23c3c0;
        }
    }
    ctx->pc = 0x23C378u;
label_23c378:
    // 0x23c378: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x23c378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_23c37c:
    // 0x23c37c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23c37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23c380:
    // 0x23c380: 0x50430010  beql        $v0, $v1, . + 4 + (0x10 << 2)
label_23c384:
    if (ctx->pc == 0x23C384u) {
        ctx->pc = 0x23C384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C380u;
        // 0x23c384: 0x8e220418  lw          $v0, 0x418($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C388u;
        goto label_23c388;
    }
    ctx->pc = 0x23C380u;
    {
        const bool branch_taken_0x23c380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x23c380) {
            ctx->pc = 0x23C384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C380u;
            // 0x23c384: 0x8e220418  lw          $v0, 0x418($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C3C4u;
            goto label_23c3c4;
        }
    }
    ctx->pc = 0x23C388u;
label_23c388:
    // 0x23c388: 0x8e230338  lw          $v1, 0x338($s1)
    ctx->pc = 0x23c388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_23c38c:
    // 0x23c38c: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x23c38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_23c390:
    // 0x23c390: 0x2462fff4  addiu       $v0, $v1, -0xC
    ctx->pc = 0x23c390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_23c394:
    // 0x23c394: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23c394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_23c398:
    // 0x23c398: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_23c39c:
    if (ctx->pc == 0x23C39Cu) {
        ctx->pc = 0x23C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C398u;
        // 0x23c39c: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3A0u;
        goto label_23c3a0;
    }
    ctx->pc = 0x23C398u;
    {
        const bool branch_taken_0x23c398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c398) {
            ctx->pc = 0x23C39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C398u;
            // 0x23c39c: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C3ACu;
            goto label_23c3ac;
        }
    }
    ctx->pc = 0x23C3A0u;
label_23c3a0:
    // 0x23c3a0: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
label_23c3a4:
    if (ctx->pc == 0x23C3A4u) {
        ctx->pc = 0x23C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3A0u;
        // 0x23c3a4: 0x8e220418  lw          $v0, 0x418($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3A8u;
        goto label_23c3a8;
    }
    ctx->pc = 0x23C3A0u;
    {
        const bool branch_taken_0x23c3a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c3a0) {
            ctx->pc = 0x23C3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C3A0u;
            // 0x23c3a4: 0x8e220418  lw          $v0, 0x418($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C3C4u;
            goto label_23c3c4;
        }
    }
    ctx->pc = 0x23C3A8u;
label_23c3a8:
    // 0x23c3a8: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x23c3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_23c3ac:
    // 0x23c3ac: 0x8c6201c4  lw          $v0, 0x1C4($v1)
    ctx->pc = 0x23c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 452)));
label_23c3b0:
    // 0x23c3b0: 0x40f809  jalr        $v0
label_23c3b4:
    if (ctx->pc == 0x23C3B4u) {
        ctx->pc = 0x23C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3B0u;
        // 0x23c3b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3B8u;
        goto label_23c3b8;
    }
    ctx->pc = 0x23C3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23C3B8u);
        ctx->pc = 0x23C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3B0u;
        // 0x23c3b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C3B0u, 0x23C3B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23C3B8u;
label_23c3b8:
    // 0x23c3b8: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_23c3bc:
    if (ctx->pc == 0x23C3BCu) {
        ctx->pc = 0x23C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3B8u;
        // 0x23c3bc: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3C0u;
        goto label_23c3c0;
    }
    ctx->pc = 0x23C3B8u;
    {
        const bool branch_taken_0x23c3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3B8u;
        // 0x23c3bc: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c3b8) {
            ctx->pc = 0x23C70Cu;
            goto label_23c70c;
        }
    }
    ctx->pc = 0x23C3C0u;
label_23c3c0:
    // 0x23c3c0: 0x8e220418  lw          $v0, 0x418($s1)
    ctx->pc = 0x23c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_23c3c4:
    // 0x23c3c4: 0x38430007  xori        $v1, $v0, 0x7
    ctx->pc = 0x23c3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_23c3c8:
    // 0x23c3c8: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x23c3c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_23c3cc:
    // 0x23c3cc: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_23c3d0:
    if (ctx->pc == 0x23C3D0u) {
        ctx->pc = 0x23C3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3CCu;
        // 0x23c3d0: 0x2c740001  sltiu       $s4, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3D4u;
        goto label_23c3d4;
    }
    ctx->pc = 0x23C3CCu;
    {
        const bool branch_taken_0x23c3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3CCu;
        // 0x23c3d0: 0x2c740001  sltiu       $s4, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c3cc) {
            ctx->pc = 0x23C538u;
            goto label_23c538;
        }
    }
    ctx->pc = 0x23C3D4u;
label_23c3d4:
    // 0x23c3d4: 0x16800058  bnez        $s4, . + 4 + (0x58 << 2)
label_23c3d8:
    if (ctx->pc == 0x23C3D8u) {
        ctx->pc = 0x23C3DCu;
        goto label_23c3dc;
    }
    ctx->pc = 0x23C3D4u;
    {
        const bool branch_taken_0x23c3d4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c3d4) {
            ctx->pc = 0x23C538u;
            goto label_23c538;
        }
    }
    ctx->pc = 0x23C3DCu;
label_23c3dc:
    // 0x23c3dc: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_23c3e0:
    // 0x23c3e0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23c3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23c3e4:
    // 0x23c3e4: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_23c3e8:
    if (ctx->pc == 0x23C3E8u) {
        ctx->pc = 0x23C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3E4u;
        // 0x23c3e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3ECu;
        goto label_23c3ec;
    }
    ctx->pc = 0x23C3E4u;
    {
        const bool branch_taken_0x23c3e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3E4u;
        // 0x23c3e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c3e4) {
            ctx->pc = 0x23C468u;
            goto label_23c468;
        }
    }
    ctx->pc = 0x23C3ECu;
label_23c3ec:
    // 0x23c3ec: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x23c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_23c3f0:
    // 0x23c3f0: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x23c3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_23c3f4:
    // 0x23c3f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23c3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23c3f8:
    // 0x23c3f8: 0xc08f672  jal         func_23D9C8
label_23c3fc:
    if (ctx->pc == 0x23C3FCu) {
        ctx->pc = 0x23C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3F8u;
        // 0x23c3fc: 0xae2211c0  sw          $v0, 0x11C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C400u;
        goto label_23c400;
    }
    ctx->pc = 0x23C3F8u;
    SET_GPR_U32(ctx, 31, 0x23C400u);
    ctx->pc = 0x23C3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C3F8u;
    // 0x23c3fc: 0xae2211c0  sw          $v0, 0x11C0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x23C3F8u, 0x23C400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C400u;
label_23c400:
    // 0x23c400: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_23c404:
    if (ctx->pc == 0x23C404u) {
        ctx->pc = 0x23C408u;
        goto label_23c408;
    }
    ctx->pc = 0x23C400u;
    {
        const bool branch_taken_0x23c400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c400) {
            ctx->pc = 0x23C434u;
            goto label_23c434;
        }
    }
    ctx->pc = 0x23C408u;
label_23c408:
    // 0x23c408: 0x922210cc  lbu         $v0, 0x10CC($s1)
    ctx->pc = 0x23c408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4300)));
label_23c40c:
    // 0x23c40c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_23c410:
    if (ctx->pc == 0x23C410u) {
        ctx->pc = 0x23C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C40Cu;
        // 0x23c410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C414u;
        goto label_23c414;
    }
    ctx->pc = 0x23C40Cu;
    {
        const bool branch_taken_0x23c40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C40Cu;
        // 0x23c410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c40c) {
            ctx->pc = 0x23C434u;
            goto label_23c434;
        }
    }
    ctx->pc = 0x23C414u;
label_23c414:
    // 0x23c414: 0xc08fc7c  jal         func_23F1F0
label_23c418:
    if (ctx->pc == 0x23C418u) {
        ctx->pc = 0x23C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C414u;
        // 0x23c418: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C41Cu;
        goto label_23c41c;
    }
    ctx->pc = 0x23C414u;
    SET_GPR_U32(ctx, 31, 0x23C41Cu);
    ctx->pc = 0x23C418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C414u;
    // 0x23c418: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F1F0u, 0x23C414u, 0x23C41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C41Cu;
label_23c41c:
    // 0x23c41c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23c420:
    if (ctx->pc == 0x23C420u) {
        ctx->pc = 0x23C420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C41Cu;
        // 0x23c420: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C424u;
        goto label_23c424;
    }
    ctx->pc = 0x23C41Cu;
    {
        const bool branch_taken_0x23c41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C41Cu;
        // 0x23c420: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c41c) {
            ctx->pc = 0x23C434u;
            goto label_23c434;
        }
    }
    ctx->pc = 0x23C424u;
label_23c424:
    // 0x23c424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c428:
    // 0x23c428: 0xc0927f2  jal         func_249FC8
label_23c42c:
    if (ctx->pc == 0x23C42Cu) {
        ctx->pc = 0x23C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C428u;
        // 0x23c42c: 0xa22210cc  sb          $v0, 0x10CC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4300), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C430u;
        goto label_23c430;
    }
    ctx->pc = 0x23C428u;
    SET_GPR_U32(ctx, 31, 0x23C430u);
    ctx->pc = 0x23C42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C428u;
    // 0x23c42c: 0xa22210cc  sb          $v0, 0x10CC($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 4300), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249FC8u, 0x23C428u, 0x23C430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C430u;
label_23c430:
    // 0x23c430: 0xae200534  sw          $zero, 0x534($s1)
    ctx->pc = 0x23c430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1332), GPR_U32(ctx, 0));
label_23c434:
    // 0x23c434: 0xc0899bc  jal         func_2266F0
label_23c438:
    if (ctx->pc == 0x23C438u) {
        ctx->pc = 0x23C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C434u;
        // 0x23c438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C43Cu;
        goto label_23c43c;
    }
    ctx->pc = 0x23C434u;
    SET_GPR_U32(ctx, 31, 0x23C43Cu);
    ctx->pc = 0x23C438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C434u;
    // 0x23c438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x23C434u, 0x23C43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C43Cu;
label_23c43c:
    // 0x23c43c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_23c440:
    if (ctx->pc == 0x23C440u) {
        ctx->pc = 0x23C440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C43Cu;
        // 0x23c440: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C444u;
        goto label_23c444;
    }
    ctx->pc = 0x23C43Cu;
    {
        const bool branch_taken_0x23c43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C43Cu;
        // 0x23c440: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c43c) {
            ctx->pc = 0x23C468u;
            goto label_23c468;
        }
    }
    ctx->pc = 0x23C444u;
label_23c444:
    // 0x23c444: 0xc0899bc  jal         func_2266F0
label_23c448:
    if (ctx->pc == 0x23C448u) {
        ctx->pc = 0x23C448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C444u;
        // 0x23c448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C44Cu;
        goto label_23c44c;
    }
    ctx->pc = 0x23C444u;
    SET_GPR_U32(ctx, 31, 0x23C44Cu);
    ctx->pc = 0x23C448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C444u;
    // 0x23c448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x23C444u, 0x23C44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C44Cu;
label_23c44c:
    // 0x23c44c: 0xc097f76  jal         func_25FDD8
label_23c450:
    if (ctx->pc == 0x23C450u) {
        ctx->pc = 0x23C450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C44Cu;
        // 0x23c450: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C454u;
        goto label_23c454;
    }
    ctx->pc = 0x23C44Cu;
    SET_GPR_U32(ctx, 31, 0x23C454u);
    ctx->pc = 0x23C450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C44Cu;
    // 0x23c450: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDD8u, 0x23C44Cu, 0x23C454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C454u;
label_23c454:
    // 0x23c454: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23c458:
    if (ctx->pc == 0x23C458u) {
        ctx->pc = 0x23C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C454u;
        // 0x23c458: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C45Cu;
        goto label_23c45c;
    }
    ctx->pc = 0x23C454u;
    {
        const bool branch_taken_0x23c454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C454u;
        // 0x23c458: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c454) {
            ctx->pc = 0x23C464u;
            goto label_23c464;
        }
    }
    ctx->pc = 0x23C45Cu;
label_23c45c:
    // 0x23c45c: 0xc0b93ac  jal         func_2E4EB0
label_23c460:
    if (ctx->pc == 0x23C460u) {
        ctx->pc = 0x23C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C45Cu;
        // 0x23c460: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C464u;
        goto label_23c464;
    }
    ctx->pc = 0x23C45Cu;
    SET_GPR_U32(ctx, 31, 0x23C464u);
    ctx->pc = 0x23C460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C45Cu;
    // 0x23c460: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4EB0u, 0x23C45Cu, 0x23C464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C464u;
label_23c464:
    // 0x23c464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c468:
    // 0x23c468: 0xc08bd96  jal         func_22F658
label_23c46c:
    if (ctx->pc == 0x23C46Cu) {
        ctx->pc = 0x23C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C468u;
        // 0x23c46c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C470u;
        goto label_23c470;
    }
    ctx->pc = 0x23C468u;
    SET_GPR_U32(ctx, 31, 0x23C470u);
    ctx->pc = 0x23C46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C468u;
    // 0x23c46c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x23C468u, 0x23C470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C470u;
label_23c470:
    // 0x23c470: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x23c470u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c474:
    // 0x23c474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c478:
    // 0x23c478: 0xc08a15a  jal         func_228568
label_23c47c:
    if (ctx->pc == 0x23C47Cu) {
        ctx->pc = 0x23C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C478u;
        // 0x23c47c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C480u;
        goto label_23c480;
    }
    ctx->pc = 0x23C478u;
    SET_GPR_U32(ctx, 31, 0x23C480u);
    ctx->pc = 0x23C47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C478u;
    // 0x23c47c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x23C478u, 0x23C480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C480u;
label_23c480:
    // 0x23c480: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x23c480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c484:
    // 0x23c484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c488:
    // 0x23c488: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x23c488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_23c48c:
    // 0x23c48c: 0xc08fed2  jal         func_23FB48
label_23c490:
    if (ctx->pc == 0x23C490u) {
        ctx->pc = 0x23C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C48Cu;
        // 0x23c490: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C494u;
        goto label_23c494;
    }
    ctx->pc = 0x23C48Cu;
    SET_GPR_U32(ctx, 31, 0x23C494u);
    ctx->pc = 0x23C490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C48Cu;
    // 0x23c490: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23C48Cu, 0x23C494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C494u;
label_23c494:
    // 0x23c494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c498:
    // 0x23c498: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x23c498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_23c49c:
    // 0x23c49c: 0xc08fed2  jal         func_23FB48
label_23c4a0:
    if (ctx->pc == 0x23C4A0u) {
        ctx->pc = 0x23C4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C49Cu;
        // 0x23c4a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C4A4u;
        goto label_23c4a4;
    }
    ctx->pc = 0x23C49Cu;
    SET_GPR_U32(ctx, 31, 0x23C4A4u);
    ctx->pc = 0x23C4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C49Cu;
    // 0x23c4a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23C49Cu, 0x23C4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C4A4u;
label_23c4a4:
    // 0x23c4a4: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x23c4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23c4a8:
    // 0x23c4a8: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x23c4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_23c4ac:
    // 0x23c4ac: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x23c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_23c4b0:
    // 0x23c4b0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23c4b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_23c4b4:
    // 0x23c4b4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_23c4b8:
    if (ctx->pc == 0x23C4B8u) {
        ctx->pc = 0x23C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4B4u;
        // 0x23c4b8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C4BCu;
        goto label_23c4bc;
    }
    ctx->pc = 0x23C4B4u;
    {
        const bool branch_taken_0x23c4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c4b4) {
            ctx->pc = 0x23C4B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C4B4u;
            // 0x23c4b8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C4F4u;
            goto label_23c4f4;
        }
    }
    ctx->pc = 0x23C4BCu;
label_23c4bc:
    // 0x23c4bc: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x23c4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_23c4c0:
    // 0x23c4c0: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_23c4c4:
    if (ctx->pc == 0x23C4C4u) {
        ctx->pc = 0x23C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4C0u;
        // 0x23c4c4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C4C8u;
        goto label_23c4c8;
    }
    ctx->pc = 0x23C4C0u;
    {
        const bool branch_taken_0x23c4c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23c4c0) {
            ctx->pc = 0x23C4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C4C0u;
            // 0x23c4c4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C4F4u;
            goto label_23c4f4;
        }
    }
    ctx->pc = 0x23C4C8u;
label_23c4c8:
    // 0x23c4c8: 0xc0924a8  jal         func_2492A0
label_23c4cc:
    if (ctx->pc == 0x23C4CCu) {
        ctx->pc = 0x23C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4C8u;
        // 0x23c4cc: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C4D0u;
        goto label_23c4d0;
    }
    ctx->pc = 0x23C4C8u;
    SET_GPR_U32(ctx, 31, 0x23C4D0u);
    ctx->pc = 0x23C4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C4C8u;
    // 0x23c4cc: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x23C4C8u, 0x23C4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C4D0u;
label_23c4d0:
    // 0x23c4d0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_23c4d4:
    if (ctx->pc == 0x23C4D4u) {
        ctx->pc = 0x23C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4D0u;
        // 0x23c4d4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C4D8u;
        goto label_23c4d8;
    }
    ctx->pc = 0x23C4D0u;
    {
        const bool branch_taken_0x23c4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c4d0) {
            ctx->pc = 0x23C4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C4D0u;
            // 0x23c4d4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C4F4u;
            goto label_23c4f4;
        }
    }
    ctx->pc = 0x23C4D8u;
label_23c4d8:
    // 0x23c4d8: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x23c4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_23c4dc:
    // 0x23c4dc: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x23c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_23c4e0:
    // 0x23c4e0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_23c4e4:
    if (ctx->pc == 0x23C4E4u) {
        ctx->pc = 0x23C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4E0u;
        // 0x23c4e4: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C4E8u;
        goto label_23c4e8;
    }
    ctx->pc = 0x23C4E0u;
    {
        const bool branch_taken_0x23c4e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4E0u;
        // 0x23c4e4: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4e0) {
            ctx->pc = 0x23C4F0u;
            goto label_23c4f0;
        }
    }
    ctx->pc = 0x23C4E8u;
label_23c4e8:
    // 0x23c4e8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_23c4ec:
    if (ctx->pc == 0x23C4ECu) {
        ctx->pc = 0x23C4F0u;
        goto label_23c4f0;
    }
    ctx->pc = 0x23C4E8u;
    {
        const bool branch_taken_0x23c4e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23c4e8) {
            ctx->pc = 0x23C4F4u;
            goto label_23c4f4;
        }
    }
    ctx->pc = 0x23C4F0u;
label_23c4f0:
    // 0x23c4f0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x23c4f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c4f4:
    // 0x23c4f4: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_23c4f8:
    if (ctx->pc == 0x23C4F8u) {
        ctx->pc = 0x23C4FCu;
        goto label_23c4fc;
    }
    ctx->pc = 0x23C4F4u;
    {
        const bool branch_taken_0x23c4f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c4f4) {
            ctx->pc = 0x23C514u;
            goto label_23c514;
        }
    }
    ctx->pc = 0x23C4FCu;
label_23c4fc:
    // 0x23c4fc: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x23c4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_23c500:
    // 0x23c500: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23c500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23c504:
    // 0x23c504: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x23c504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_23c508:
    // 0x23c508: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23c508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23c50c:
    // 0x23c50c: 0x38630041  xori        $v1, $v1, 0x41
    ctx->pc = 0x23c50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65);
label_23c510:
    // 0x23c510: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x23c510u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23c514:
    // 0x23c514: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_23c518:
    if (ctx->pc == 0x23C518u) {
        ctx->pc = 0x23C51Cu;
        goto label_23c51c;
    }
    ctx->pc = 0x23C514u;
    {
        const bool branch_taken_0x23c514 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c514) {
            ctx->pc = 0x23C538u;
            goto label_23c538;
        }
    }
    ctx->pc = 0x23C51Cu;
label_23c51c:
    // 0x23c51c: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23c51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23c520:
    // 0x23c520: 0xc069832  jal         func_1A60C8
label_23c524:
    if (ctx->pc == 0x23C524u) {
        ctx->pc = 0x23C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C520u;
        // 0x23c524: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C528u;
        goto label_23c528;
    }
    ctx->pc = 0x23C520u;
    SET_GPR_U32(ctx, 31, 0x23C528u);
    ctx->pc = 0x23C524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C520u;
    // 0x23c524: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60C8u, 0x23C520u, 0x23C528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C528u;
label_23c528:
    // 0x23c528: 0x8e23041c  lw          $v1, 0x41C($s1)
    ctx->pc = 0x23c528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1052)));
label_23c52c:
    // 0x23c52c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23c52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23c530:
    // 0x23c530: 0xae22041c  sw          $v0, 0x41C($s1)
    ctx->pc = 0x23c530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 2));
label_23c534:
    // 0x23c534: 0xae230420  sw          $v1, 0x420($s1)
    ctx->pc = 0x23c534u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1056), GPR_U32(ctx, 3));
label_23c538:
    // 0x23c538: 0xc08dada  jal         func_236B68
label_23c53c:
    if (ctx->pc == 0x23C53Cu) {
        ctx->pc = 0x23C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C538u;
        // 0x23c53c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C540u;
        goto label_23c540;
    }
    ctx->pc = 0x23C538u;
    SET_GPR_U32(ctx, 31, 0x23C540u);
    ctx->pc = 0x23C53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C538u;
    // 0x23c53c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x23C538u, 0x23C540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C540u;
label_23c540:
    // 0x23c540: 0x50400072  beql        $v0, $zero, . + 4 + (0x72 << 2)
label_23c544:
    if (ctx->pc == 0x23C544u) {
        ctx->pc = 0x23C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C540u;
        // 0x23c544: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C548u;
        goto label_23c548;
    }
    ctx->pc = 0x23C540u;
    {
        const bool branch_taken_0x23c540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c540) {
            ctx->pc = 0x23C544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C540u;
            // 0x23c544: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C70Cu;
            goto label_23c70c;
        }
    }
    ctx->pc = 0x23C548u;
label_23c548:
    // 0x23c548: 0x56800070  bnel        $s4, $zero, . + 4 + (0x70 << 2)
label_23c54c:
    if (ctx->pc == 0x23C54Cu) {
        ctx->pc = 0x23C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C548u;
        // 0x23c54c: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C550u;
        goto label_23c550;
    }
    ctx->pc = 0x23C548u;
    {
        const bool branch_taken_0x23c548 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c548) {
            ctx->pc = 0x23C54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C548u;
            // 0x23c54c: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C70Cu;
            goto label_23c70c;
        }
    }
    ctx->pc = 0x23C550u;
label_23c550:
    // 0x23c550: 0xc0899bc  jal         func_2266F0
label_23c554:
    if (ctx->pc == 0x23C554u) {
        ctx->pc = 0x23C554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C550u;
        // 0x23c554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C558u;
        goto label_23c558;
    }
    ctx->pc = 0x23C550u;
    SET_GPR_U32(ctx, 31, 0x23C558u);
    ctx->pc = 0x23C554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C550u;
    // 0x23c554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x23C550u, 0x23C558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C558u;
label_23c558:
    // 0x23c558: 0x8c4402e4  lw          $a0, 0x2E4($v0)
    ctx->pc = 0x23c558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 740)));
label_23c55c:
    // 0x23c55c: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x23c55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_23c560:
    // 0x23c560: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x23c560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_23c564:
    // 0x23c564: 0x40f809  jalr        $v0
label_23c568:
    if (ctx->pc == 0x23C568u) {
        ctx->pc = 0x23C568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C564u;
        // 0x23c568: 0x3c10005c  lui         $s0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C56Cu;
        goto label_23c56c;
    }
    ctx->pc = 0x23C564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23C56Cu);
        ctx->pc = 0x23C568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C564u;
        // 0x23c568: 0x3c10005c  lui         $s0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C564u, 0x23C56Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23C56Cu;
label_23c56c:
    // 0x23c56c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23c56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c570:
    // 0x23c570: 0x2610d5d0  addiu       $s0, $s0, -0x2A30
    ctx->pc = 0x23c570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956496));
label_23c574:
    // 0x23c574: 0xc0d7080  jal         func_35C200
label_23c578:
    if (ctx->pc == 0x23C578u) {
        ctx->pc = 0x23C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C574u;
        // 0x23c578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C57Cu;
        goto label_23c57c;
    }
    ctx->pc = 0x23C574u;
    SET_GPR_U32(ctx, 31, 0x23C57Cu);
    ctx->pc = 0x23C578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C574u;
    // 0x23c578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C200u, 0x23C574u, 0x23C57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C57Cu;
label_23c57c:
    // 0x23c57c: 0xc0d7116  jal         func_35C458
label_23c580:
    if (ctx->pc == 0x23C580u) {
        ctx->pc = 0x23C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C57Cu;
        // 0x23c580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C584u;
        goto label_23c584;
    }
    ctx->pc = 0x23C57Cu;
    SET_GPR_U32(ctx, 31, 0x23C584u);
    ctx->pc = 0x23C580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C57Cu;
    // 0x23c580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C458u, 0x23C57Cu, 0x23C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C584u;
label_23c584:
    // 0x23c584: 0x10000061  b           . + 4 + (0x61 << 2)
label_23c588:
    if (ctx->pc == 0x23C588u) {
        ctx->pc = 0x23C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C584u;
        // 0x23c588: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C58Cu;
        goto label_23c58c;
    }
    ctx->pc = 0x23C584u;
    {
        const bool branch_taken_0x23c584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C584u;
        // 0x23c588: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c584) {
            ctx->pc = 0x23C70Cu;
            goto label_23c70c;
        }
    }
    ctx->pc = 0x23C58Cu;
label_23c58c:
    // 0x23c58c: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x23c58cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_23c590:
    // 0x23c590: 0xc08fed2  jal         func_23FB48
label_23c594:
    if (ctx->pc == 0x23C594u) {
        ctx->pc = 0x23C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C590u;
        // 0x23c594: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C598u;
        goto label_23c598;
    }
    ctx->pc = 0x23C590u;
    SET_GPR_U32(ctx, 31, 0x23C598u);
    ctx->pc = 0x23C594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C590u;
    // 0x23c594: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23C590u, 0x23C598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C598u;
label_23c598:
    // 0x23c598: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x23c598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23c59c:
    // 0x23c59c: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x23c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_23c5a0:
    // 0x23c5a0: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x23c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
label_23c5a4:
    // 0x23c5a4: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x23c5a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_23c5a8:
    // 0x23c5a8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_23c5ac:
    if (ctx->pc == 0x23C5ACu) {
        ctx->pc = 0x23C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5A8u;
        // 0x23c5ac: 0x8e230418  lw          $v1, 0x418($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5B0u;
        goto label_23c5b0;
    }
    ctx->pc = 0x23C5A8u;
    {
        const bool branch_taken_0x23c5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c5a8) {
            ctx->pc = 0x23C5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C5A8u;
            // 0x23c5ac: 0x8e230418  lw          $v1, 0x418($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C5C0u;
            goto label_23c5c0;
        }
    }
    ctx->pc = 0x23C5B0u;
label_23c5b0:
    // 0x23c5b0: 0xc08c5b8  jal         func_2316E0
label_23c5b4:
    if (ctx->pc == 0x23C5B4u) {
        ctx->pc = 0x23C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5B0u;
        // 0x23c5b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5B8u;
        goto label_23c5b8;
    }
    ctx->pc = 0x23C5B0u;
    SET_GPR_U32(ctx, 31, 0x23C5B8u);
    ctx->pc = 0x23C5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C5B0u;
    // 0x23c5b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2316E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2316E0u, 0x23C5B0u, 0x23C5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C5B8u;
label_23c5b8:
    // 0x23c5b8: 0x10000054  b           . + 4 + (0x54 << 2)
label_23c5bc:
    if (ctx->pc == 0x23C5BCu) {
        ctx->pc = 0x23C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5B8u;
        // 0x23c5bc: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5C0u;
        goto label_23c5c0;
    }
    ctx->pc = 0x23C5B8u;
    {
        const bool branch_taken_0x23c5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5B8u;
        // 0x23c5bc: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c5b8) {
            ctx->pc = 0x23C70Cu;
            goto label_23c70c;
        }
    }
    ctx->pc = 0x23C5C0u;
label_23c5c0:
    // 0x23c5c0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23c5c4:
    // 0x23c5c4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_23c5c8:
    if (ctx->pc == 0x23C5C8u) {
        ctx->pc = 0x23C5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5C4u;
        // 0x23c5c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5CCu;
        goto label_23c5cc;
    }
    ctx->pc = 0x23C5C4u;
    {
        const bool branch_taken_0x23c5c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23C5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5C4u;
        // 0x23c5c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c5c4) {
            ctx->pc = 0x23C5D8u;
            goto label_23c5d8;
        }
    }
    ctx->pc = 0x23C5CCu;
label_23c5cc:
    // 0x23c5cc: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x23c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_23c5d0:
    // 0x23c5d0: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x23c5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_23c5d4:
    // 0x23c5d4: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x23c5d4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23c5d8:
    // 0x23c5d8: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x23c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_23c5dc:
    // 0x23c5dc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x23c5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_23c5e0:
    // 0x23c5e0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_23c5e4:
    if (ctx->pc == 0x23C5E4u) {
        ctx->pc = 0x23C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5E0u;
        // 0x23c5e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5E8u;
        goto label_23c5e8;
    }
    ctx->pc = 0x23C5E0u;
    {
        const bool branch_taken_0x23c5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5E0u;
        // 0x23c5e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c5e0) {
            ctx->pc = 0x23C5FCu;
            goto label_23c5fc;
        }
    }
    ctx->pc = 0x23C5E8u;
label_23c5e8:
    // 0x23c5e8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x23c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_23c5ec:
    // 0x23c5ec: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_23c5f0:
    if (ctx->pc == 0x23C5F0u) {
        ctx->pc = 0x23C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5ECu;
        // 0x23c5f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5F4u;
        goto label_23c5f4;
    }
    ctx->pc = 0x23C5ECu;
    {
        const bool branch_taken_0x23c5ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23c5ec) {
            ctx->pc = 0x23C5F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C5ECu;
            // 0x23c5f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C600u;
            goto label_23c600;
        }
    }
    ctx->pc = 0x23C5F4u;
label_23c5f4:
    // 0x23c5f4: 0x50800045  beql        $a0, $zero, . + 4 + (0x45 << 2)
label_23c5f8:
    if (ctx->pc == 0x23C5F8u) {
        ctx->pc = 0x23C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5F4u;
        // 0x23c5f8: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5FCu;
        goto label_23c5fc;
    }
    ctx->pc = 0x23C5F4u;
    {
        const bool branch_taken_0x23c5f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c5f4) {
            ctx->pc = 0x23C5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C5F4u;
            // 0x23c5f8: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C70Cu;
            goto label_23c70c;
        }
    }
    ctx->pc = 0x23C5FCu;
label_23c5fc:
    // 0x23c5fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c600:
    // 0x23c600: 0xc08fed2  jal         func_23FB48
label_23c604:
    if (ctx->pc == 0x23C604u) {
        ctx->pc = 0x23C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C600u;
        // 0x23c604: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C608u;
        goto label_23c608;
    }
    ctx->pc = 0x23C600u;
    SET_GPR_U32(ctx, 31, 0x23C608u);
    ctx->pc = 0x23C604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C600u;
    // 0x23c604: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23C600u, 0x23C608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C608u;
label_23c608:
    // 0x23c608: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23c608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c60c:
    // 0x23c60c: 0xc08a15a  jal         func_228568
label_23c610:
    if (ctx->pc == 0x23C610u) {
        ctx->pc = 0x23C610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C60Cu;
        // 0x23c610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C614u;
        goto label_23c614;
    }
    ctx->pc = 0x23C60Cu;
    SET_GPR_U32(ctx, 31, 0x23C614u);
    ctx->pc = 0x23C610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C60Cu;
    // 0x23c610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x23C60Cu, 0x23C614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C614u;
label_23c614:
    // 0x23c614: 0xc08ba82  jal         func_22EA08
label_23c618:
    if (ctx->pc == 0x23C618u) {
        ctx->pc = 0x23C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C614u;
        // 0x23c618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C61Cu;
        goto label_23c61c;
    }
    ctx->pc = 0x23C614u;
    SET_GPR_U32(ctx, 31, 0x23C61Cu);
    ctx->pc = 0x23C618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C614u;
    // 0x23c618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA08u, 0x23C614u, 0x23C61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C61Cu;
label_23c61c:
    // 0x23c61c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c620:
    // 0x23c620: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x23c620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_23c624:
    // 0x23c624: 0xc08fed2  jal         func_23FB48
label_23c628:
    if (ctx->pc == 0x23C628u) {
        ctx->pc = 0x23C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C624u;
        // 0x23c628: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C62Cu;
        goto label_23c62c;
    }
    ctx->pc = 0x23C624u;
    SET_GPR_U32(ctx, 31, 0x23C62Cu);
    ctx->pc = 0x23C628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C624u;
    // 0x23c628: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23C624u, 0x23C62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C62Cu;
label_23c62c:
    // 0x23c62c: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x23c62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_23c630:
    // 0x23c630: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x23c630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_23c634:
    // 0x23c634: 0x54620015  bnel        $v1, $v0, . + 4 + (0x15 << 2)
label_23c638:
    if (ctx->pc == 0x23C638u) {
        ctx->pc = 0x23C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C634u;
        // 0x23c638: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C63Cu;
        goto label_23c63c;
    }
    ctx->pc = 0x23C634u;
    {
        const bool branch_taken_0x23c634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23c634) {
            ctx->pc = 0x23C638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C634u;
            // 0x23c638: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C68Cu;
            goto label_23c68c;
        }
    }
    ctx->pc = 0x23C63Cu;
label_23c63c:
    // 0x23c63c: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x23c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23c640:
    // 0x23c640: 0x8c440150  lw          $a0, 0x150($v0)
    ctx->pc = 0x23c640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_23c644:
    // 0x23c644: 0x28830044  slti        $v1, $a0, 0x44
    ctx->pc = 0x23c644u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)68) ? 1 : 0);
label_23c648:
    // 0x23c648: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_23c64c:
    if (ctx->pc == 0x23C64Cu) {
        ctx->pc = 0x23C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C648u;
        // 0x23c64c: 0x2882004a  slti        $v0, $a0, 0x4A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)74) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C650u;
        goto label_23c650;
    }
    ctx->pc = 0x23C648u;
    {
        const bool branch_taken_0x23c648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C648u;
        // 0x23c64c: 0x2882004a  slti        $v0, $a0, 0x4A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)74) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c648) {
            ctx->pc = 0x23C680u;
            goto label_23c680;
        }
    }
    ctx->pc = 0x23C650u;
label_23c650:
    // 0x23c650: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_23c654:
    if (ctx->pc == 0x23C654u) {
        ctx->pc = 0x23C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C650u;
        // 0x23c654: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C658u;
        goto label_23c658;
    }
    ctx->pc = 0x23C650u;
    {
        const bool branch_taken_0x23c650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C650u;
        // 0x23c654: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c650) {
            ctx->pc = 0x23C680u;
            goto label_23c680;
        }
    }
    ctx->pc = 0x23C658u;
label_23c658:
    // 0x23c658: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_23c65c:
    if (ctx->pc == 0x23C65Cu) {
        ctx->pc = 0x23C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C658u;
        // 0x23c65c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C660u;
        goto label_23c660;
    }
    ctx->pc = 0x23C658u;
    {
        const bool branch_taken_0x23c658 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x23C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C658u;
        // 0x23c65c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c658) {
            ctx->pc = 0x23C670u;
            goto label_23c670;
        }
    }
    ctx->pc = 0x23C660u;
label_23c660:
    // 0x23c660: 0xc08bd96  jal         func_22F658
label_23c664:
    if (ctx->pc == 0x23C664u) {
        ctx->pc = 0x23C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C660u;
        // 0x23c664: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C668u;
        goto label_23c668;
    }
    ctx->pc = 0x23C660u;
    SET_GPR_U32(ctx, 31, 0x23C668u);
    ctx->pc = 0x23C664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C660u;
    // 0x23c664: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x23C660u, 0x23C668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C668u;
label_23c668:
    // 0x23c668: 0x10000008  b           . + 4 + (0x8 << 2)
label_23c66c:
    if (ctx->pc == 0x23C66Cu) {
        ctx->pc = 0x23C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C668u;
        // 0x23c66c: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C670u;
        goto label_23c670;
    }
    ctx->pc = 0x23C668u;
    {
        const bool branch_taken_0x23c668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C668u;
        // 0x23c66c: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c668) {
            ctx->pc = 0x23C68Cu;
            goto label_23c68c;
        }
    }
    ctx->pc = 0x23C670u;
label_23c670:
    // 0x23c670: 0xc08bd96  jal         func_22F658
label_23c674:
    if (ctx->pc == 0x23C674u) {
        ctx->pc = 0x23C674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C670u;
        // 0x23c674: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C678u;
        goto label_23c678;
    }
    ctx->pc = 0x23C670u;
    SET_GPR_U32(ctx, 31, 0x23C678u);
    ctx->pc = 0x23C674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C670u;
    // 0x23c674: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x23C670u, 0x23C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C678u;
label_23c678:
    // 0x23c678: 0x10000004  b           . + 4 + (0x4 << 2)
label_23c67c:
    if (ctx->pc == 0x23C67Cu) {
        ctx->pc = 0x23C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C678u;
        // 0x23c67c: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C680u;
        goto label_23c680;
    }
    ctx->pc = 0x23C678u;
    {
        const bool branch_taken_0x23c678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C678u;
        // 0x23c67c: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c678) {
            ctx->pc = 0x23C68Cu;
            goto label_23c68c;
        }
    }
    ctx->pc = 0x23C680u;
label_23c680:
    // 0x23c680: 0xc08bd98  jal         func_22F660
label_23c684:
    if (ctx->pc == 0x23C684u) {
        ctx->pc = 0x23C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C680u;
        // 0x23c684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C688u;
        goto label_23c688;
    }
    ctx->pc = 0x23C680u;
    SET_GPR_U32(ctx, 31, 0x23C688u);
    ctx->pc = 0x23C684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C680u;
    // 0x23c684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F660u, 0x23C680u, 0x23C688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C688u;
label_23c688:
    // 0x23c688: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23c688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_23c68c:
    // 0x23c68c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23c68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23c690:
    // 0x23c690: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_23c694:
    if (ctx->pc == 0x23C694u) {
        ctx->pc = 0x23C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C690u;
        // 0x23c694: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C698u;
        goto label_23c698;
    }
    ctx->pc = 0x23C690u;
    {
        const bool branch_taken_0x23c690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C690u;
        // 0x23c694: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c690) {
            ctx->pc = 0x23C6C8u;
            goto label_23c6c8;
        }
    }
    ctx->pc = 0x23C698u;
label_23c698:
    // 0x23c698: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x23c698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_23c69c:
    // 0x23c69c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23c69cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23c6a0:
    // 0x23c6a0: 0xc44c5010  lwc1        $f12, 0x5010($v0)
    ctx->pc = 0x23c6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_23c6a4:
    // 0x23c6a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c6a8:
    // 0x23c6a8: 0xc0bcc6a  jal         func_2F31A8
label_23c6ac:
    if (ctx->pc == 0x23C6ACu) {
        ctx->pc = 0x23C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6A8u;
        // 0x23c6ac: 0xe62012ac  swc1        $f0, 0x12AC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4780), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C6B0u;
        goto label_23c6b0;
    }
    ctx->pc = 0x23C6A8u;
    SET_GPR_U32(ctx, 31, 0x23C6B0u);
    ctx->pc = 0x23C6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C6A8u;
    // 0x23c6ac: 0xe62012ac  swc1        $f0, 0x12AC($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4780), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F31A8u, 0x23C6A8u, 0x23C6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C6B0u;
label_23c6b0:
    // 0x23c6b0: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x23c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_23c6b4:
    // 0x23c6b4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x23c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_23c6b8:
    // 0x23c6b8: 0x2404bfff  addiu       $a0, $zero, -0x4001
    ctx->pc = 0x23c6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_23c6bc:
    // 0x23c6bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23c6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23c6c0:
    // 0x23c6c0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x23c6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_23c6c4:
    // 0x23c6c4: 0xae2211c0  sw          $v0, 0x11C0($s1)
    ctx->pc = 0x23c6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 2));
label_23c6c8:
    // 0x23c6c8: 0xc08dada  jal         func_236B68
label_23c6cc:
    if (ctx->pc == 0x23C6CCu) {
        ctx->pc = 0x23C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6C8u;
        // 0x23c6cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C6D0u;
        goto label_23c6d0;
    }
    ctx->pc = 0x23C6C8u;
    SET_GPR_U32(ctx, 31, 0x23C6D0u);
    ctx->pc = 0x23C6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C6C8u;
    // 0x23c6cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x23C6C8u, 0x23C6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C6D0u;
label_23c6d0:
    // 0x23c6d0: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_23c6d4:
    if (ctx->pc == 0x23C6D4u) {
        ctx->pc = 0x23C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6D0u;
        // 0x23c6d4: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C6D8u;
        goto label_23c6d8;
    }
    ctx->pc = 0x23C6D0u;
    {
        const bool branch_taken_0x23c6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c6d0) {
            ctx->pc = 0x23C6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C6D0u;
            // 0x23c6d4: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C70Cu;
            goto label_23c70c;
        }
    }
    ctx->pc = 0x23C6D8u;
label_23c6d8:
    // 0x23c6d8: 0xc0899bc  jal         func_2266F0
label_23c6dc:
    if (ctx->pc == 0x23C6DCu) {
        ctx->pc = 0x23C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6D8u;
        // 0x23c6dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C6E0u;
        goto label_23c6e0;
    }
    ctx->pc = 0x23C6D8u;
    SET_GPR_U32(ctx, 31, 0x23C6E0u);
    ctx->pc = 0x23C6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C6D8u;
    // 0x23c6dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x23C6D8u, 0x23C6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C6E0u;
label_23c6e0:
    // 0x23c6e0: 0x8c4402e4  lw          $a0, 0x2E4($v0)
    ctx->pc = 0x23c6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 740)));
label_23c6e4:
    // 0x23c6e4: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x23c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_23c6e8:
    // 0x23c6e8: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x23c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_23c6ec:
    // 0x23c6ec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23c6ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_23c6f0:
    // 0x23c6f0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_23c6f4:
    if (ctx->pc == 0x23C6F4u) {
        ctx->pc = 0x23C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6F0u;
        // 0x23c6f4: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C6F8u;
        goto label_23c6f8;
    }
    ctx->pc = 0x23C6F0u;
    {
        const bool branch_taken_0x23c6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c6f0) {
            ctx->pc = 0x23C6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C6F0u;
            // 0x23c6f4: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C70Cu;
            goto label_23c70c;
        }
    }
    ctx->pc = 0x23C6F8u;
label_23c6f8:
    // 0x23c6f8: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x23c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_23c6fc:
    // 0x23c6fc: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x23c6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_23c700:
    // 0x23c700: 0x40f809  jalr        $v0
label_23c704:
    if (ctx->pc == 0x23C704u) {
        ctx->pc = 0x23C708u;
        goto label_23c708;
    }
    ctx->pc = 0x23C700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23C708u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C700u, 0x23C708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23C708u;
label_23c708:
    // 0x23c708: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23c708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_23c70c:
    // 0x23c70c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23c70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23c710:
    // 0x23c710: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_23c714:
    if (ctx->pc == 0x23C714u) {
        ctx->pc = 0x23C714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C710u;
        // 0x23c714: 0x8e220534  lw          $v0, 0x534($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C718u;
        goto label_23c718;
    }
    ctx->pc = 0x23C710u;
    {
        const bool branch_taken_0x23c710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c710) {
            ctx->pc = 0x23C714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C710u;
            // 0x23c714: 0x8e220534  lw          $v0, 0x534($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C77Cu;
            goto label_23c77c;
        }
    }
    ctx->pc = 0x23C718u;
label_23c718:
    // 0x23c718: 0x8e2205a4  lw          $v0, 0x5A4($s1)
    ctx->pc = 0x23c718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1444)));
label_23c71c:
    // 0x23c71c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_23c720:
    if (ctx->pc == 0x23C720u) {
        ctx->pc = 0x23C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C71Cu;
        // 0x23c720: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C724u;
        goto label_23c724;
    }
    ctx->pc = 0x23C71Cu;
    {
        const bool branch_taken_0x23c71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C71Cu;
        // 0x23c720: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c71c) {
            ctx->pc = 0x23C764u;
            goto label_23c764;
        }
    }
    ctx->pc = 0x23C724u;
label_23c724:
    // 0x23c724: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x23c724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_23c728:
    // 0x23c728: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
label_23c72c:
    if (ctx->pc == 0x23C72Cu) {
        ctx->pc = 0x23C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C728u;
        // 0x23c72c: 0x8e220534  lw          $v0, 0x534($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C730u;
        goto label_23c730;
    }
    ctx->pc = 0x23C728u;
    {
        const bool branch_taken_0x23c728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23c728) {
            ctx->pc = 0x23C72Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C728u;
            // 0x23c72c: 0x8e220534  lw          $v0, 0x534($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C77Cu;
            goto label_23c77c;
        }
    }
    ctx->pc = 0x23C730u;
label_23c730:
    // 0x23c730: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23c730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23c734:
    // 0x23c734: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x23c734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_23c738:
    // 0x23c738: 0x2442fff7  addiu       $v0, $v0, -0x9
    ctx->pc = 0x23c738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967287));
label_23c73c:
    // 0x23c73c: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x23c73cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_23c740:
    // 0x23c740: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_23c744:
    if (ctx->pc == 0x23C744u) {
        ctx->pc = 0x23C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C740u;
        // 0x23c744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C748u;
        goto label_23c748;
    }
    ctx->pc = 0x23C740u;
    {
        const bool branch_taken_0x23c740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c740) {
            ctx->pc = 0x23C744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C740u;
            // 0x23c744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C754u;
            goto label_23c754;
        }
    }
    ctx->pc = 0x23C748u;
label_23c748:
    // 0x23c748: 0xc06974a  jal         func_1A5D28
label_23c74c:
    if (ctx->pc == 0x23C74Cu) {
        ctx->pc = 0x23C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C748u;
        // 0x23c74c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C750u;
        goto label_23c750;
    }
    ctx->pc = 0x23C748u;
    SET_GPR_U32(ctx, 31, 0x23C750u);
    ctx->pc = 0x23C74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C748u;
    // 0x23c74c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x23C748u, 0x23C750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C750u;
label_23c750:
    // 0x23c750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c754:
    // 0x23c754: 0xc08bd96  jal         func_22F658
label_23c758:
    if (ctx->pc == 0x23C758u) {
        ctx->pc = 0x23C758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C754u;
        // 0x23c758: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C75Cu;
        goto label_23c75c;
    }
    ctx->pc = 0x23C754u;
    SET_GPR_U32(ctx, 31, 0x23C75Cu);
    ctx->pc = 0x23C758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C754u;
    // 0x23c758: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x23C754u, 0x23C75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C75Cu;
label_23c75c:
    // 0x23c75c: 0x10000007  b           . + 4 + (0x7 << 2)
label_23c760:
    if (ctx->pc == 0x23C760u) {
        ctx->pc = 0x23C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C75Cu;
        // 0x23c760: 0x8e220534  lw          $v0, 0x534($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C764u;
        goto label_23c764;
    }
    ctx->pc = 0x23C75Cu;
    {
        const bool branch_taken_0x23c75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C75Cu;
        // 0x23c760: 0x8e220534  lw          $v0, 0x534($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c75c) {
            ctx->pc = 0x23C77Cu;
            goto label_23c77c;
        }
    }
    ctx->pc = 0x23C764u;
label_23c764:
    // 0x23c764: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x23c764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_23c768:
    // 0x23c768: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_23c76c:
    if (ctx->pc == 0x23C76Cu) {
        ctx->pc = 0x23C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C768u;
        // 0x23c76c: 0x8e220534  lw          $v0, 0x534($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C770u;
        goto label_23c770;
    }
    ctx->pc = 0x23C768u;
    {
        const bool branch_taken_0x23c768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23c768) {
            ctx->pc = 0x23C76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C768u;
            // 0x23c76c: 0x8e220534  lw          $v0, 0x534($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C77Cu;
            goto label_23c77c;
        }
    }
    ctx->pc = 0x23C770u;
label_23c770:
    // 0x23c770: 0xc08bd98  jal         func_22F660
label_23c774:
    if (ctx->pc == 0x23C774u) {
        ctx->pc = 0x23C774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C770u;
        // 0x23c774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C778u;
        goto label_23c778;
    }
    ctx->pc = 0x23C770u;
    SET_GPR_U32(ctx, 31, 0x23C778u);
    ctx->pc = 0x23C774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C770u;
    // 0x23c774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F660u, 0x23C770u, 0x23C778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C778u;
label_23c778:
    // 0x23c778: 0x8e220534  lw          $v0, 0x534($s1)
    ctx->pc = 0x23c778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1332)));
label_23c77c:
    // 0x23c77c: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_23c780:
    if (ctx->pc == 0x23C780u) {
        ctx->pc = 0x23C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C77Cu;
        // 0x23c780: 0x8e23036c  lw          $v1, 0x36C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C784u;
        goto label_23c784;
    }
    ctx->pc = 0x23C77Cu;
    {
        const bool branch_taken_0x23c77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c77c) {
            ctx->pc = 0x23C780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C77Cu;
            // 0x23c780: 0x8e23036c  lw          $v1, 0x36C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C7F8u;
            goto label_23c7f8;
        }
    }
    ctx->pc = 0x23C784u;
label_23c784:
    // 0x23c784: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x23c784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23c788:
    // 0x23c788: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x23c788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_23c78c:
    // 0x23c78c: 0x2462ffcf  addiu       $v0, $v1, -0x31
    ctx->pc = 0x23c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
label_23c790:
    // 0x23c790: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x23c790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_23c794:
    // 0x23c794: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_23c798:
    if (ctx->pc == 0x23C798u) {
        ctx->pc = 0x23C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C794u;
        // 0x23c798: 0x24020036  addiu       $v0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C79Cu;
        goto label_23c79c;
    }
    ctx->pc = 0x23C794u;
    {
        const bool branch_taken_0x23c794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C794u;
        // 0x23c798: 0x24020036  addiu       $v0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c794) {
            ctx->pc = 0x23C7B8u;
            goto label_23c7b8;
        }
    }
    ctx->pc = 0x23C79Cu;
label_23c79c:
    // 0x23c79c: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_23c7a0:
    if (ctx->pc == 0x23C7A0u) {
        ctx->pc = 0x23C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C79Cu;
        // 0x23c7a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C7A4u;
        goto label_23c7a4;
    }
    ctx->pc = 0x23C79Cu;
    {
        const bool branch_taken_0x23c79c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C79Cu;
        // 0x23c7a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c79c) {
            ctx->pc = 0x23C7F4u;
            goto label_23c7f4;
        }
    }
    ctx->pc = 0x23C7A4u;
label_23c7a4:
    // 0x23c7a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23c7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c7a8:
    // 0x23c7a8: 0xc08bf70  jal         func_22FDC0
label_23c7ac:
    if (ctx->pc == 0x23C7ACu) {
        ctx->pc = 0x23C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7A8u;
        // 0x23c7ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C7B0u;
        goto label_23c7b0;
    }
    ctx->pc = 0x23C7A8u;
    SET_GPR_U32(ctx, 31, 0x23C7B0u);
    ctx->pc = 0x23C7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C7A8u;
    // 0x23c7ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FDC0u, 0x23C7A8u, 0x23C7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C7B0u;
label_23c7b0:
    // 0x23c7b0: 0x10000011  b           . + 4 + (0x11 << 2)
label_23c7b4:
    if (ctx->pc == 0x23C7B4u) {
        ctx->pc = 0x23C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7B0u;
        // 0x23c7b4: 0x8e23036c  lw          $v1, 0x36C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C7B8u;
        goto label_23c7b8;
    }
    ctx->pc = 0x23C7B0u;
    {
        const bool branch_taken_0x23c7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7B0u;
        // 0x23c7b4: 0x8e23036c  lw          $v1, 0x36C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c7b0) {
            ctx->pc = 0x23C7F8u;
            goto label_23c7f8;
        }
    }
    ctx->pc = 0x23C7B8u;
label_23c7b8:
    // 0x23c7b8: 0x8e240388  lw          $a0, 0x388($s1)
    ctx->pc = 0x23c7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 904)));
label_23c7bc:
    // 0x23c7bc: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_23c7c0:
    if (ctx->pc == 0x23C7C0u) {
        ctx->pc = 0x23C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7BCu;
        // 0x23c7c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C7C4u;
        goto label_23c7c4;
    }
    ctx->pc = 0x23C7BCu;
    {
        const bool branch_taken_0x23c7bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c7bc) {
            ctx->pc = 0x23C7C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C7BCu;
            // 0x23c7c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C7ECu;
            goto label_23c7ec;
        }
    }
    ctx->pc = 0x23C7C4u;
label_23c7c4:
    // 0x23c7c4: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_23c7c8:
    // 0x23c7c8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23c7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23c7cc:
    // 0x23c7cc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_23c7d0:
    if (ctx->pc == 0x23C7D0u) {
        ctx->pc = 0x23C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7CCu;
        // 0x23c7d0: 0x8e23036c  lw          $v1, 0x36C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C7D4u;
        goto label_23c7d4;
    }
    ctx->pc = 0x23C7CCu;
    {
        const bool branch_taken_0x23c7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c7cc) {
            ctx->pc = 0x23C7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C7CCu;
            // 0x23c7d0: 0x8e23036c  lw          $v1, 0x36C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C7F8u;
            goto label_23c7f8;
        }
    }
    ctx->pc = 0x23C7D4u;
label_23c7d4:
    // 0x23c7d4: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x23c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_23c7d8:
    // 0x23c7d8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x23c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_23c7dc:
    // 0x23c7dc: 0x40f809  jalr        $v0
label_23c7e0:
    if (ctx->pc == 0x23C7E0u) {
        ctx->pc = 0x23C7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7DCu;
        // 0x23c7e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C7E4u;
        goto label_23c7e4;
    }
    ctx->pc = 0x23C7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23C7E4u);
        ctx->pc = 0x23C7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7DCu;
        // 0x23c7e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C7DCu, 0x23C7E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23C7E4u;
label_23c7e4:
    // 0x23c7e4: 0x10000004  b           . + 4 + (0x4 << 2)
label_23c7e8:
    if (ctx->pc == 0x23C7E8u) {
        ctx->pc = 0x23C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7E4u;
        // 0x23c7e8: 0x8e23036c  lw          $v1, 0x36C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C7ECu;
        goto label_23c7ec;
    }
    ctx->pc = 0x23C7E4u;
    {
        const bool branch_taken_0x23c7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7E4u;
        // 0x23c7e8: 0x8e23036c  lw          $v1, 0x36C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c7e4) {
            ctx->pc = 0x23C7F8u;
            goto label_23c7f8;
        }
    }
    ctx->pc = 0x23C7ECu;
label_23c7ec:
    // 0x23c7ec: 0xc08ca9a  jal         func_232A68
label_23c7f0:
    if (ctx->pc == 0x23C7F0u) {
        ctx->pc = 0x23C7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7ECu;
        // 0x23c7f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C7F4u;
        goto label_23c7f4;
    }
    ctx->pc = 0x23C7ECu;
    SET_GPR_U32(ctx, 31, 0x23C7F4u);
    ctx->pc = 0x23C7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C7ECu;
    // 0x23c7f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232A68u, 0x23C7ECu, 0x23C7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C7F4u;
label_23c7f4:
    // 0x23c7f4: 0x8e23036c  lw          $v1, 0x36C($s1)
    ctx->pc = 0x23c7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_23c7f8:
    // 0x23c7f8: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x23c7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_23c7fc:
    // 0x23c7fc: 0x54400056  bnel        $v0, $zero, . + 4 + (0x56 << 2)
label_23c800:
    if (ctx->pc == 0x23C800u) {
        ctx->pc = 0x23C800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7FCu;
        // 0x23c800: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C804u;
        goto label_23c804;
    }
    ctx->pc = 0x23C7FCu;
    {
        const bool branch_taken_0x23c7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c7fc) {
            ctx->pc = 0x23C800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C7FCu;
            // 0x23c800: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C958u;
            goto label_23c958;
        }
    }
    ctx->pc = 0x23C804u;
label_23c804:
    // 0x23c804: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x23c804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_23c808:
    // 0x23c808: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
label_23c80c:
    if (ctx->pc == 0x23C80Cu) {
        ctx->pc = 0x23C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C808u;
        // 0x23c80c: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C810u;
        goto label_23c810;
    }
    ctx->pc = 0x23C808u;
    {
        const bool branch_taken_0x23c808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c808) {
            ctx->pc = 0x23C80Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C808u;
            // 0x23c80c: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C958u;
            goto label_23c958;
        }
    }
    ctx->pc = 0x23C810u;
label_23c810:
    // 0x23c810: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x23c810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_23c814:
    // 0x23c814: 0x8c4495b4  lw          $a0, -0x6A4C($v0)
    ctx->pc = 0x23c814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940084)));
label_23c818:
    // 0x23c818: 0x8c830334  lw          $v1, 0x334($a0)
    ctx->pc = 0x23c818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
label_23c81c:
    // 0x23c81c: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x23c81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_23c820:
    // 0x23c820: 0x2462ffbd  addiu       $v0, $v1, -0x43
    ctx->pc = 0x23c820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967229));
label_23c824:
    // 0x23c824: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x23c824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_23c828:
    // 0x23c828: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_23c82c:
    if (ctx->pc == 0x23C82Cu) {
        ctx->pc = 0x23C82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C828u;
        // 0x23c82c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C830u;
        goto label_23c830;
    }
    ctx->pc = 0x23C828u;
    {
        const bool branch_taken_0x23c828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C828u;
        // 0x23c82c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c828) {
            ctx->pc = 0x23C844u;
            goto label_23c844;
        }
    }
    ctx->pc = 0x23C830u;
label_23c830:
    // 0x23c830: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x23c830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_23c834:
    // 0x23c834: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_23c838:
    if (ctx->pc == 0x23C838u) {
        ctx->pc = 0x23C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C834u;
        // 0x23c838: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C83Cu;
        goto label_23c83c;
    }
    ctx->pc = 0x23C834u;
    {
        const bool branch_taken_0x23c834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C834u;
        // 0x23c838: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c834) {
            ctx->pc = 0x23C844u;
            goto label_23c844;
        }
    }
    ctx->pc = 0x23C83Cu;
label_23c83c:
    // 0x23c83c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_23c840:
    if (ctx->pc == 0x23C840u) {
        ctx->pc = 0x23C844u;
        goto label_23c844;
    }
    ctx->pc = 0x23C83Cu;
    {
        const bool branch_taken_0x23c83c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23c83c) {
            ctx->pc = 0x23C848u;
            goto label_23c848;
        }
    }
    ctx->pc = 0x23C844u;
label_23c844:
    // 0x23c844: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23c844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c848:
    // 0x23c848: 0x54a00043  bnel        $a1, $zero, . + 4 + (0x43 << 2)
label_23c84c:
    if (ctx->pc == 0x23C84Cu) {
        ctx->pc = 0x23C84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C848u;
        // 0x23c84c: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C850u;
        goto label_23c850;
    }
    ctx->pc = 0x23C848u;
    {
        const bool branch_taken_0x23c848 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c848) {
            ctx->pc = 0x23C84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C848u;
            // 0x23c84c: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C958u;
            goto label_23c958;
        }
    }
    ctx->pc = 0x23C850u;
label_23c850:
    // 0x23c850: 0x8c830334  lw          $v1, 0x334($a0)
    ctx->pc = 0x23c850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
label_23c854:
    // 0x23c854: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x23c854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_23c858:
    // 0x23c858: 0x2442ffea  addiu       $v0, $v0, -0x16
    ctx->pc = 0x23c858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967274));
label_23c85c:
    // 0x23c85c: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x23c85cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_23c860:
    // 0x23c860: 0x5440003d  bnel        $v0, $zero, . + 4 + (0x3D << 2)
label_23c864:
    if (ctx->pc == 0x23C864u) {
        ctx->pc = 0x23C864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C860u;
        // 0x23c864: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C868u;
        goto label_23c868;
    }
    ctx->pc = 0x23C860u;
    {
        const bool branch_taken_0x23c860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c860) {
            ctx->pc = 0x23C864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C860u;
            // 0x23c864: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C958u;
            goto label_23c958;
        }
    }
    ctx->pc = 0x23C868u;
label_23c868:
    // 0x23c868: 0x8e22058c  lw          $v0, 0x58C($s1)
    ctx->pc = 0x23c868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1420)));
label_23c86c:
    // 0x23c86c: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_23c870:
    if (ctx->pc == 0x23C870u) {
        ctx->pc = 0x23C870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C86Cu;
        // 0x23c870: 0x8e220588  lw          $v0, 0x588($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C874u;
        goto label_23c874;
    }
    ctx->pc = 0x23C86Cu;
    {
        const bool branch_taken_0x23c86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c86c) {
            ctx->pc = 0x23C870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C86Cu;
            // 0x23c870: 0x8e220588  lw          $v0, 0x588($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C8C8u;
            goto label_23c8c8;
        }
    }
    ctx->pc = 0x23C874u;
label_23c874:
    // 0x23c874: 0xc08cc52  jal         func_233148
label_23c878:
    if (ctx->pc == 0x23C878u) {
        ctx->pc = 0x23C878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C874u;
        // 0x23c878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C87Cu;
        goto label_23c87c;
    }
    ctx->pc = 0x23C874u;
    SET_GPR_U32(ctx, 31, 0x23C87Cu);
    ctx->pc = 0x23C878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C874u;
    // 0x23c878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233148u, 0x23C874u, 0x23C87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C87Cu;
label_23c87c:
    // 0x23c87c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23c87cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c880:
    // 0x23c880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23c880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c884:
    // 0x23c884: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_23c888:
    if (ctx->pc == 0x23C888u) {
        ctx->pc = 0x23C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C884u;
        // 0x23c888: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C88Cu;
        goto label_23c88c;
    }
    ctx->pc = 0x23C884u;
    {
        const bool branch_taken_0x23c884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C884u;
        // 0x23c888: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c884) {
            ctx->pc = 0x23C8B4u;
            goto label_23c8b4;
        }
    }
    ctx->pc = 0x23C88Cu;
label_23c88c:
    // 0x23c88c: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
label_23c890:
    if (ctx->pc == 0x23C890u) {
        ctx->pc = 0x23C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C88Cu;
        // 0x23c890: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C894u;
        goto label_23c894;
    }
    ctx->pc = 0x23C88Cu;
    {
        const bool branch_taken_0x23c88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c88c) {
            ctx->pc = 0x23C890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C88Cu;
            // 0x23c890: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C958u;
            goto label_23c958;
        }
    }
    ctx->pc = 0x23C894u;
label_23c894:
    // 0x23c894: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23c894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23c898:
    // 0x23c898: 0x5462002f  bnel        $v1, $v0, . + 4 + (0x2F << 2)
label_23c89c:
    if (ctx->pc == 0x23C89Cu) {
        ctx->pc = 0x23C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C898u;
        // 0x23c89c: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C8A0u;
        goto label_23c8a0;
    }
    ctx->pc = 0x23C898u;
    {
        const bool branch_taken_0x23c898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23c898) {
            ctx->pc = 0x23C89Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C898u;
            // 0x23c89c: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C958u;
            goto label_23c958;
        }
    }
    ctx->pc = 0x23C8A0u;
label_23c8a0:
    // 0x23c8a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c8a4:
    // 0x23c8a4: 0xc08b39e  jal         func_22CE78
label_23c8a8:
    if (ctx->pc == 0x23C8A8u) {
        ctx->pc = 0x23C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8A4u;
        // 0x23c8a8: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C8ACu;
        goto label_23c8ac;
    }
    ctx->pc = 0x23C8A4u;
    SET_GPR_U32(ctx, 31, 0x23C8ACu);
    ctx->pc = 0x23C8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C8A4u;
    // 0x23c8a8: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CE78u, 0x23C8A4u, 0x23C8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C8ACu;
label_23c8ac:
    // 0x23c8ac: 0x1000002a  b           . + 4 + (0x2A << 2)
label_23c8b0:
    if (ctx->pc == 0x23C8B0u) {
        ctx->pc = 0x23C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8ACu;
        // 0x23c8b0: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C8B4u;
        goto label_23c8b4;
    }
    ctx->pc = 0x23C8ACu;
    {
        const bool branch_taken_0x23c8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8ACu;
        // 0x23c8b0: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c8ac) {
            ctx->pc = 0x23C958u;
            goto label_23c958;
        }
    }
    ctx->pc = 0x23C8B4u;
label_23c8b4:
    // 0x23c8b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c8b8:
    // 0x23c8b8: 0xc08b660  jal         func_22D980
label_23c8bc:
    if (ctx->pc == 0x23C8BCu) {
        ctx->pc = 0x23C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8B8u;
        // 0x23c8bc: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C8C0u;
        goto label_23c8c0;
    }
    ctx->pc = 0x23C8B8u;
    SET_GPR_U32(ctx, 31, 0x23C8C0u);
    ctx->pc = 0x23C8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C8B8u;
    // 0x23c8bc: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D980u, 0x23C8B8u, 0x23C8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C8C0u;
label_23c8c0:
    // 0x23c8c0: 0x10000025  b           . + 4 + (0x25 << 2)
label_23c8c4:
    if (ctx->pc == 0x23C8C4u) {
        ctx->pc = 0x23C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8C0u;
        // 0x23c8c4: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C8C8u;
        goto label_23c8c8;
    }
    ctx->pc = 0x23C8C0u;
    {
        const bool branch_taken_0x23c8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8C0u;
        // 0x23c8c4: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c8c0) {
            ctx->pc = 0x23C958u;
            goto label_23c958;
        }
    }
    ctx->pc = 0x23C8C8u;
label_23c8c8:
    // 0x23c8c8: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_23c8cc:
    if (ctx->pc == 0x23C8CCu) {
        ctx->pc = 0x23C8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8C8u;
        // 0x23c8cc: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C8D0u;
        goto label_23c8d0;
    }
    ctx->pc = 0x23C8C8u;
    {
        const bool branch_taken_0x23c8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c8c8) {
            ctx->pc = 0x23C8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C8C8u;
            // 0x23c8cc: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C924u;
            goto label_23c924;
        }
    }
    ctx->pc = 0x23C8D0u;
label_23c8d0:
    // 0x23c8d0: 0xc08cc52  jal         func_233148
label_23c8d4:
    if (ctx->pc == 0x23C8D4u) {
        ctx->pc = 0x23C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8D0u;
        // 0x23c8d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C8D8u;
        goto label_23c8d8;
    }
    ctx->pc = 0x23C8D0u;
    SET_GPR_U32(ctx, 31, 0x23C8D8u);
    ctx->pc = 0x23C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C8D0u;
    // 0x23c8d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233148u, 0x23C8D0u, 0x23C8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C8D8u;
label_23c8d8:
    // 0x23c8d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23c8d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c8dc:
    // 0x23c8dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23c8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c8e0:
    // 0x23c8e0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_23c8e4:
    if (ctx->pc == 0x23C8E4u) {
        ctx->pc = 0x23C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8E0u;
        // 0x23c8e4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C8E8u;
        goto label_23c8e8;
    }
    ctx->pc = 0x23C8E0u;
    {
        const bool branch_taken_0x23c8e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8E0u;
        // 0x23c8e4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c8e0) {
            ctx->pc = 0x23C910u;
            goto label_23c910;
        }
    }
    ctx->pc = 0x23C8E8u;
label_23c8e8:
    // 0x23c8e8: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
label_23c8ec:
    if (ctx->pc == 0x23C8ECu) {
        ctx->pc = 0x23C8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8E8u;
        // 0x23c8ec: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C8F0u;
        goto label_23c8f0;
    }
    ctx->pc = 0x23C8E8u;
    {
        const bool branch_taken_0x23c8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c8e8) {
            ctx->pc = 0x23C8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C8E8u;
            // 0x23c8ec: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C958u;
            goto label_23c958;
        }
    }
    ctx->pc = 0x23C8F0u;
label_23c8f0:
    // 0x23c8f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23c8f4:
    // 0x23c8f4: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
label_23c8f8:
    if (ctx->pc == 0x23C8F8u) {
        ctx->pc = 0x23C8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8F4u;
        // 0x23c8f8: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C8FCu;
        goto label_23c8fc;
    }
    ctx->pc = 0x23C8F4u;
    {
        const bool branch_taken_0x23c8f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23c8f4) {
            ctx->pc = 0x23C8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C8F4u;
            // 0x23c8f8: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C958u;
            goto label_23c958;
        }
    }
    ctx->pc = 0x23C8FCu;
label_23c8fc:
    // 0x23c8fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c900:
    // 0x23c900: 0xc08b39e  jal         func_22CE78
label_23c904:
    if (ctx->pc == 0x23C904u) {
        ctx->pc = 0x23C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C900u;
        // 0x23c904: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C908u;
        goto label_23c908;
    }
    ctx->pc = 0x23C900u;
    SET_GPR_U32(ctx, 31, 0x23C908u);
    ctx->pc = 0x23C904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C900u;
    // 0x23c904: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CE78u, 0x23C900u, 0x23C908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C908u;
label_23c908:
    // 0x23c908: 0x10000013  b           . + 4 + (0x13 << 2)
label_23c90c:
    if (ctx->pc == 0x23C90Cu) {
        ctx->pc = 0x23C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C908u;
        // 0x23c90c: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C910u;
        goto label_23c910;
    }
    ctx->pc = 0x23C908u;
    {
        const bool branch_taken_0x23c908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C908u;
        // 0x23c90c: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c908) {
            ctx->pc = 0x23C958u;
            goto label_23c958;
        }
    }
    ctx->pc = 0x23C910u;
label_23c910:
    // 0x23c910: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c914:
    // 0x23c914: 0xc08b660  jal         func_22D980
label_23c918:
    if (ctx->pc == 0x23C918u) {
        ctx->pc = 0x23C918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C914u;
        // 0x23c918: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C91Cu;
        goto label_23c91c;
    }
    ctx->pc = 0x23C914u;
    SET_GPR_U32(ctx, 31, 0x23C91Cu);
    ctx->pc = 0x23C918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C914u;
    // 0x23c918: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D980u, 0x23C914u, 0x23C91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C91Cu;
label_23c91c:
    // 0x23c91c: 0x1000000e  b           . + 4 + (0xE << 2)
label_23c920:
    if (ctx->pc == 0x23C920u) {
        ctx->pc = 0x23C920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C91Cu;
        // 0x23c920: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C924u;
        goto label_23c924;
    }
    ctx->pc = 0x23C91Cu;
    {
        const bool branch_taken_0x23c91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C91Cu;
        // 0x23c920: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c91c) {
            ctx->pc = 0x23C958u;
            goto label_23c958;
        }
    }
    ctx->pc = 0x23C924u;
label_23c924:
    // 0x23c924: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x23c924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_23c928:
    // 0x23c928: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x23c928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_23c92c:
    // 0x23c92c: 0x5464000a  bnel        $v1, $a0, . + 4 + (0xA << 2)
label_23c930:
    if (ctx->pc == 0x23C930u) {
        ctx->pc = 0x23C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C92Cu;
        // 0x23c930: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C934u;
        goto label_23c934;
    }
    ctx->pc = 0x23C92Cu;
    {
        const bool branch_taken_0x23c92c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x23c92c) {
            ctx->pc = 0x23C930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C92Cu;
            // 0x23c930: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C958u;
            goto label_23c958;
        }
    }
    ctx->pc = 0x23C934u;
label_23c934:
    // 0x23c934: 0xc08e528  jal         func_2394A0
label_23c938:
    if (ctx->pc == 0x23C938u) {
        ctx->pc = 0x23C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C934u;
        // 0x23c938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C93Cu;
        goto label_23c93c;
    }
    ctx->pc = 0x23C934u;
    SET_GPR_U32(ctx, 31, 0x23C93Cu);
    ctx->pc = 0x23C938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C934u;
    // 0x23c938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2394A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2394A0u, 0x23C934u, 0x23C93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C93Cu;
label_23c93c:
    // 0x23c93c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_23c940:
    // 0x23c940: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23c940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23c944:
    // 0x23c944: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_23c948:
    if (ctx->pc == 0x23C948u) {
        ctx->pc = 0x23C948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C944u;
        // 0x23c948: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C94Cu;
        goto label_23c94c;
    }
    ctx->pc = 0x23C944u;
    {
        const bool branch_taken_0x23c944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c944) {
            ctx->pc = 0x23C948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C944u;
            // 0x23c948: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C98Cu;
            goto label_23c98c;
        }
    }
    ctx->pc = 0x23C94Cu;
label_23c94c:
    // 0x23c94c: 0xc0bb688  jal         func_2EDA20
label_23c950:
    if (ctx->pc == 0x23C950u) {
        ctx->pc = 0x23C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C94Cu;
        // 0x23c950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C954u;
        goto label_23c954;
    }
    ctx->pc = 0x23C94Cu;
    SET_GPR_U32(ctx, 31, 0x23C954u);
    ctx->pc = 0x23C950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C94Cu;
    // 0x23c950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDA20u, 0x23C94Cu, 0x23C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C954u;
label_23c954:
    // 0x23c954: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23c954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_23c958:
    // 0x23c958: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23c958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23c95c:
    // 0x23c95c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_23c960:
    if (ctx->pc == 0x23C960u) {
        ctx->pc = 0x23C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C95Cu;
        // 0x23c960: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C964u;
        goto label_23c964;
    }
    ctx->pc = 0x23C95Cu;
    {
        const bool branch_taken_0x23c95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c95c) {
            ctx->pc = 0x23C960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C95Cu;
            // 0x23c960: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C98Cu;
            goto label_23c98c;
        }
    }
    ctx->pc = 0x23C964u;
label_23c964:
    // 0x23c964: 0x8e220600  lw          $v0, 0x600($s1)
    ctx->pc = 0x23c964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
label_23c968:
    // 0x23c968: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_23c96c:
    if (ctx->pc == 0x23C96Cu) {
        ctx->pc = 0x23C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C968u;
        // 0x23c96c: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C970u;
        goto label_23c970;
    }
    ctx->pc = 0x23C968u;
    {
        const bool branch_taken_0x23c968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C968u;
        // 0x23c96c: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c968) {
            ctx->pc = 0x23C988u;
            goto label_23c988;
        }
    }
    ctx->pc = 0x23C970u;
label_23c970:
    // 0x23c970: 0xc0bb5de  jal         func_2ED778
label_23c974:
    if (ctx->pc == 0x23C974u) {
        ctx->pc = 0x23C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C970u;
        // 0x23c974: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C978u;
        goto label_23c978;
    }
    ctx->pc = 0x23C970u;
    SET_GPR_U32(ctx, 31, 0x23C978u);
    ctx->pc = 0x23C974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C970u;
    // 0x23c974: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED778u, 0x23C970u, 0x23C978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C978u;
label_23c978:
    // 0x23c978: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_23c97c:
    if (ctx->pc == 0x23C97Cu) {
        ctx->pc = 0x23C97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C978u;
        // 0x23c97c: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C980u;
        goto label_23c980;
    }
    ctx->pc = 0x23C978u;
    {
        const bool branch_taken_0x23c978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c978) {
            ctx->pc = 0x23C97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C978u;
            // 0x23c97c: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C98Cu;
            goto label_23c98c;
        }
    }
    ctx->pc = 0x23C980u;
label_23c980:
    // 0x23c980: 0xc0bbe0e  jal         func_2EF838
label_23c984:
    if (ctx->pc == 0x23C984u) {
        ctx->pc = 0x23C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C980u;
        // 0x23c984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C988u;
        goto label_23c988;
    }
    ctx->pc = 0x23C980u;
    SET_GPR_U32(ctx, 31, 0x23C988u);
    ctx->pc = 0x23C984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C980u;
    // 0x23c984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF838u, 0x23C980u, 0x23C988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C988u;
label_23c988:
    // 0x23c988: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23c988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23c98c:
    // 0x23c98c: 0xc06a23e  jal         func_1A88F8
label_23c990:
    if (ctx->pc == 0x23C990u) {
        ctx->pc = 0x23C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C98Cu;
        // 0x23c990: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C994u;
        goto label_23c994;
    }
    ctx->pc = 0x23C98Cu;
    SET_GPR_U32(ctx, 31, 0x23C994u);
    ctx->pc = 0x23C990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C98Cu;
    // 0x23c990: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x23C98Cu, 0x23C994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C994u;
label_23c994:
    // 0x23c994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c998:
    // 0x23c998: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23c998u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23c99c:
    // 0x23c99c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23c99cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23c9a0:
    // 0x23c9a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23c9a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23c9a4:
    // 0x23c9a4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23c9a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23c9a8:
    // 0x23c9a8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x23c9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23c9ac:
    // 0x23c9ac: 0x3e00008  jr          $ra
label_23c9b0:
    if (ctx->pc == 0x23C9B0u) {
        ctx->pc = 0x23C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9ACu;
        // 0x23c9b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C9B4u;
        goto label_23c9b4;
    }
    ctx->pc = 0x23C9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9ACu;
        // 0x23c9b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C9B4u;
label_23c9b4:
    // 0x23c9b4: 0x0  nop
    ctx->pc = 0x23c9b4u;
    // NOP
    ctx->pc = 0x23c9b8u;
}
