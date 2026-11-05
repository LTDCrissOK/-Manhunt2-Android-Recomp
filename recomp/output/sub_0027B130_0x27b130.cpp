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

// Function: sub_0027B130
// Address: 0x27b130 - 0x27bf20
void sub_0027B130_0x27b130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B130_0x27b130");
#endif

    switch (ctx->pc) {
        case 0x27b130u: goto label_27b130;
        case 0x27b134u: goto label_27b134;
        case 0x27b138u: goto label_27b138;
        case 0x27b13cu: goto label_27b13c;
        case 0x27b140u: goto label_27b140;
        case 0x27b144u: goto label_27b144;
        case 0x27b148u: goto label_27b148;
        case 0x27b14cu: goto label_27b14c;
        case 0x27b150u: goto label_27b150;
        case 0x27b154u: goto label_27b154;
        case 0x27b158u: goto label_27b158;
        case 0x27b15cu: goto label_27b15c;
        case 0x27b160u: goto label_27b160;
        case 0x27b164u: goto label_27b164;
        case 0x27b168u: goto label_27b168;
        case 0x27b16cu: goto label_27b16c;
        case 0x27b170u: goto label_27b170;
        case 0x27b174u: goto label_27b174;
        case 0x27b178u: goto label_27b178;
        case 0x27b17cu: goto label_27b17c;
        case 0x27b180u: goto label_27b180;
        case 0x27b184u: goto label_27b184;
        case 0x27b188u: goto label_27b188;
        case 0x27b18cu: goto label_27b18c;
        case 0x27b190u: goto label_27b190;
        case 0x27b194u: goto label_27b194;
        case 0x27b198u: goto label_27b198;
        case 0x27b19cu: goto label_27b19c;
        case 0x27b1a0u: goto label_27b1a0;
        case 0x27b1a4u: goto label_27b1a4;
        case 0x27b1a8u: goto label_27b1a8;
        case 0x27b1acu: goto label_27b1ac;
        case 0x27b1b0u: goto label_27b1b0;
        case 0x27b1b4u: goto label_27b1b4;
        case 0x27b1b8u: goto label_27b1b8;
        case 0x27b1bcu: goto label_27b1bc;
        case 0x27b1c0u: goto label_27b1c0;
        case 0x27b1c4u: goto label_27b1c4;
        case 0x27b1c8u: goto label_27b1c8;
        case 0x27b1ccu: goto label_27b1cc;
        case 0x27b1d0u: goto label_27b1d0;
        case 0x27b1d4u: goto label_27b1d4;
        case 0x27b1d8u: goto label_27b1d8;
        case 0x27b1dcu: goto label_27b1dc;
        case 0x27b1e0u: goto label_27b1e0;
        case 0x27b1e4u: goto label_27b1e4;
        case 0x27b1e8u: goto label_27b1e8;
        case 0x27b1ecu: goto label_27b1ec;
        case 0x27b1f0u: goto label_27b1f0;
        case 0x27b1f4u: goto label_27b1f4;
        case 0x27b1f8u: goto label_27b1f8;
        case 0x27b1fcu: goto label_27b1fc;
        case 0x27b200u: goto label_27b200;
        case 0x27b204u: goto label_27b204;
        case 0x27b208u: goto label_27b208;
        case 0x27b20cu: goto label_27b20c;
        case 0x27b210u: goto label_27b210;
        case 0x27b214u: goto label_27b214;
        case 0x27b218u: goto label_27b218;
        case 0x27b21cu: goto label_27b21c;
        case 0x27b220u: goto label_27b220;
        case 0x27b224u: goto label_27b224;
        case 0x27b228u: goto label_27b228;
        case 0x27b22cu: goto label_27b22c;
        case 0x27b230u: goto label_27b230;
        case 0x27b234u: goto label_27b234;
        case 0x27b238u: goto label_27b238;
        case 0x27b23cu: goto label_27b23c;
        case 0x27b240u: goto label_27b240;
        case 0x27b244u: goto label_27b244;
        case 0x27b248u: goto label_27b248;
        case 0x27b24cu: goto label_27b24c;
        case 0x27b250u: goto label_27b250;
        case 0x27b254u: goto label_27b254;
        case 0x27b258u: goto label_27b258;
        case 0x27b25cu: goto label_27b25c;
        case 0x27b260u: goto label_27b260;
        case 0x27b264u: goto label_27b264;
        case 0x27b268u: goto label_27b268;
        case 0x27b26cu: goto label_27b26c;
        case 0x27b270u: goto label_27b270;
        case 0x27b274u: goto label_27b274;
        case 0x27b278u: goto label_27b278;
        case 0x27b27cu: goto label_27b27c;
        case 0x27b280u: goto label_27b280;
        case 0x27b284u: goto label_27b284;
        case 0x27b288u: goto label_27b288;
        case 0x27b28cu: goto label_27b28c;
        case 0x27b290u: goto label_27b290;
        case 0x27b294u: goto label_27b294;
        case 0x27b298u: goto label_27b298;
        case 0x27b29cu: goto label_27b29c;
        case 0x27b2a0u: goto label_27b2a0;
        case 0x27b2a4u: goto label_27b2a4;
        case 0x27b2a8u: goto label_27b2a8;
        case 0x27b2acu: goto label_27b2ac;
        case 0x27b2b0u: goto label_27b2b0;
        case 0x27b2b4u: goto label_27b2b4;
        case 0x27b2b8u: goto label_27b2b8;
        case 0x27b2bcu: goto label_27b2bc;
        case 0x27b2c0u: goto label_27b2c0;
        case 0x27b2c4u: goto label_27b2c4;
        case 0x27b2c8u: goto label_27b2c8;
        case 0x27b2ccu: goto label_27b2cc;
        case 0x27b2d0u: goto label_27b2d0;
        case 0x27b2d4u: goto label_27b2d4;
        case 0x27b2d8u: goto label_27b2d8;
        case 0x27b2dcu: goto label_27b2dc;
        case 0x27b2e0u: goto label_27b2e0;
        case 0x27b2e4u: goto label_27b2e4;
        case 0x27b2e8u: goto label_27b2e8;
        case 0x27b2ecu: goto label_27b2ec;
        case 0x27b2f0u: goto label_27b2f0;
        case 0x27b2f4u: goto label_27b2f4;
        case 0x27b2f8u: goto label_27b2f8;
        case 0x27b2fcu: goto label_27b2fc;
        case 0x27b300u: goto label_27b300;
        case 0x27b304u: goto label_27b304;
        case 0x27b308u: goto label_27b308;
        case 0x27b30cu: goto label_27b30c;
        case 0x27b310u: goto label_27b310;
        case 0x27b314u: goto label_27b314;
        case 0x27b318u: goto label_27b318;
        case 0x27b31cu: goto label_27b31c;
        case 0x27b320u: goto label_27b320;
        case 0x27b324u: goto label_27b324;
        case 0x27b328u: goto label_27b328;
        case 0x27b32cu: goto label_27b32c;
        case 0x27b330u: goto label_27b330;
        case 0x27b334u: goto label_27b334;
        case 0x27b338u: goto label_27b338;
        case 0x27b33cu: goto label_27b33c;
        case 0x27b340u: goto label_27b340;
        case 0x27b344u: goto label_27b344;
        case 0x27b348u: goto label_27b348;
        case 0x27b34cu: goto label_27b34c;
        case 0x27b350u: goto label_27b350;
        case 0x27b354u: goto label_27b354;
        case 0x27b358u: goto label_27b358;
        case 0x27b35cu: goto label_27b35c;
        case 0x27b360u: goto label_27b360;
        case 0x27b364u: goto label_27b364;
        case 0x27b368u: goto label_27b368;
        case 0x27b36cu: goto label_27b36c;
        case 0x27b370u: goto label_27b370;
        case 0x27b374u: goto label_27b374;
        case 0x27b378u: goto label_27b378;
        case 0x27b37cu: goto label_27b37c;
        case 0x27b380u: goto label_27b380;
        case 0x27b384u: goto label_27b384;
        case 0x27b388u: goto label_27b388;
        case 0x27b38cu: goto label_27b38c;
        case 0x27b390u: goto label_27b390;
        case 0x27b394u: goto label_27b394;
        case 0x27b398u: goto label_27b398;
        case 0x27b39cu: goto label_27b39c;
        case 0x27b3a0u: goto label_27b3a0;
        case 0x27b3a4u: goto label_27b3a4;
        case 0x27b3a8u: goto label_27b3a8;
        case 0x27b3acu: goto label_27b3ac;
        case 0x27b3b0u: goto label_27b3b0;
        case 0x27b3b4u: goto label_27b3b4;
        case 0x27b3b8u: goto label_27b3b8;
        case 0x27b3bcu: goto label_27b3bc;
        case 0x27b3c0u: goto label_27b3c0;
        case 0x27b3c4u: goto label_27b3c4;
        case 0x27b3c8u: goto label_27b3c8;
        case 0x27b3ccu: goto label_27b3cc;
        case 0x27b3d0u: goto label_27b3d0;
        case 0x27b3d4u: goto label_27b3d4;
        case 0x27b3d8u: goto label_27b3d8;
        case 0x27b3dcu: goto label_27b3dc;
        case 0x27b3e0u: goto label_27b3e0;
        case 0x27b3e4u: goto label_27b3e4;
        case 0x27b3e8u: goto label_27b3e8;
        case 0x27b3ecu: goto label_27b3ec;
        case 0x27b3f0u: goto label_27b3f0;
        case 0x27b3f4u: goto label_27b3f4;
        case 0x27b3f8u: goto label_27b3f8;
        case 0x27b3fcu: goto label_27b3fc;
        case 0x27b400u: goto label_27b400;
        case 0x27b404u: goto label_27b404;
        case 0x27b408u: goto label_27b408;
        case 0x27b40cu: goto label_27b40c;
        case 0x27b410u: goto label_27b410;
        case 0x27b414u: goto label_27b414;
        case 0x27b418u: goto label_27b418;
        case 0x27b41cu: goto label_27b41c;
        case 0x27b420u: goto label_27b420;
        case 0x27b424u: goto label_27b424;
        case 0x27b428u: goto label_27b428;
        case 0x27b42cu: goto label_27b42c;
        case 0x27b430u: goto label_27b430;
        case 0x27b434u: goto label_27b434;
        case 0x27b438u: goto label_27b438;
        case 0x27b43cu: goto label_27b43c;
        case 0x27b440u: goto label_27b440;
        case 0x27b444u: goto label_27b444;
        case 0x27b448u: goto label_27b448;
        case 0x27b44cu: goto label_27b44c;
        case 0x27b450u: goto label_27b450;
        case 0x27b454u: goto label_27b454;
        case 0x27b458u: goto label_27b458;
        case 0x27b45cu: goto label_27b45c;
        case 0x27b460u: goto label_27b460;
        case 0x27b464u: goto label_27b464;
        case 0x27b468u: goto label_27b468;
        case 0x27b46cu: goto label_27b46c;
        case 0x27b470u: goto label_27b470;
        case 0x27b474u: goto label_27b474;
        case 0x27b478u: goto label_27b478;
        case 0x27b47cu: goto label_27b47c;
        case 0x27b480u: goto label_27b480;
        case 0x27b484u: goto label_27b484;
        case 0x27b488u: goto label_27b488;
        case 0x27b48cu: goto label_27b48c;
        case 0x27b490u: goto label_27b490;
        case 0x27b494u: goto label_27b494;
        case 0x27b498u: goto label_27b498;
        case 0x27b49cu: goto label_27b49c;
        case 0x27b4a0u: goto label_27b4a0;
        case 0x27b4a4u: goto label_27b4a4;
        case 0x27b4a8u: goto label_27b4a8;
        case 0x27b4acu: goto label_27b4ac;
        case 0x27b4b0u: goto label_27b4b0;
        case 0x27b4b4u: goto label_27b4b4;
        case 0x27b4b8u: goto label_27b4b8;
        case 0x27b4bcu: goto label_27b4bc;
        case 0x27b4c0u: goto label_27b4c0;
        case 0x27b4c4u: goto label_27b4c4;
        case 0x27b4c8u: goto label_27b4c8;
        case 0x27b4ccu: goto label_27b4cc;
        case 0x27b4d0u: goto label_27b4d0;
        case 0x27b4d4u: goto label_27b4d4;
        case 0x27b4d8u: goto label_27b4d8;
        case 0x27b4dcu: goto label_27b4dc;
        case 0x27b4e0u: goto label_27b4e0;
        case 0x27b4e4u: goto label_27b4e4;
        case 0x27b4e8u: goto label_27b4e8;
        case 0x27b4ecu: goto label_27b4ec;
        case 0x27b4f0u: goto label_27b4f0;
        case 0x27b4f4u: goto label_27b4f4;
        case 0x27b4f8u: goto label_27b4f8;
        case 0x27b4fcu: goto label_27b4fc;
        case 0x27b500u: goto label_27b500;
        case 0x27b504u: goto label_27b504;
        case 0x27b508u: goto label_27b508;
        case 0x27b50cu: goto label_27b50c;
        case 0x27b510u: goto label_27b510;
        case 0x27b514u: goto label_27b514;
        case 0x27b518u: goto label_27b518;
        case 0x27b51cu: goto label_27b51c;
        case 0x27b520u: goto label_27b520;
        case 0x27b524u: goto label_27b524;
        case 0x27b528u: goto label_27b528;
        case 0x27b52cu: goto label_27b52c;
        case 0x27b530u: goto label_27b530;
        case 0x27b534u: goto label_27b534;
        case 0x27b538u: goto label_27b538;
        case 0x27b53cu: goto label_27b53c;
        case 0x27b540u: goto label_27b540;
        case 0x27b544u: goto label_27b544;
        case 0x27b548u: goto label_27b548;
        case 0x27b54cu: goto label_27b54c;
        case 0x27b550u: goto label_27b550;
        case 0x27b554u: goto label_27b554;
        case 0x27b558u: goto label_27b558;
        case 0x27b55cu: goto label_27b55c;
        case 0x27b560u: goto label_27b560;
        case 0x27b564u: goto label_27b564;
        case 0x27b568u: goto label_27b568;
        case 0x27b56cu: goto label_27b56c;
        case 0x27b570u: goto label_27b570;
        case 0x27b574u: goto label_27b574;
        case 0x27b578u: goto label_27b578;
        case 0x27b57cu: goto label_27b57c;
        case 0x27b580u: goto label_27b580;
        case 0x27b584u: goto label_27b584;
        case 0x27b588u: goto label_27b588;
        case 0x27b58cu: goto label_27b58c;
        case 0x27b590u: goto label_27b590;
        case 0x27b594u: goto label_27b594;
        case 0x27b598u: goto label_27b598;
        case 0x27b59cu: goto label_27b59c;
        case 0x27b5a0u: goto label_27b5a0;
        case 0x27b5a4u: goto label_27b5a4;
        case 0x27b5a8u: goto label_27b5a8;
        case 0x27b5acu: goto label_27b5ac;
        case 0x27b5b0u: goto label_27b5b0;
        case 0x27b5b4u: goto label_27b5b4;
        case 0x27b5b8u: goto label_27b5b8;
        case 0x27b5bcu: goto label_27b5bc;
        case 0x27b5c0u: goto label_27b5c0;
        case 0x27b5c4u: goto label_27b5c4;
        case 0x27b5c8u: goto label_27b5c8;
        case 0x27b5ccu: goto label_27b5cc;
        case 0x27b5d0u: goto label_27b5d0;
        case 0x27b5d4u: goto label_27b5d4;
        case 0x27b5d8u: goto label_27b5d8;
        case 0x27b5dcu: goto label_27b5dc;
        case 0x27b5e0u: goto label_27b5e0;
        case 0x27b5e4u: goto label_27b5e4;
        case 0x27b5e8u: goto label_27b5e8;
        case 0x27b5ecu: goto label_27b5ec;
        case 0x27b5f0u: goto label_27b5f0;
        case 0x27b5f4u: goto label_27b5f4;
        case 0x27b5f8u: goto label_27b5f8;
        case 0x27b5fcu: goto label_27b5fc;
        case 0x27b600u: goto label_27b600;
        case 0x27b604u: goto label_27b604;
        case 0x27b608u: goto label_27b608;
        case 0x27b60cu: goto label_27b60c;
        case 0x27b610u: goto label_27b610;
        case 0x27b614u: goto label_27b614;
        case 0x27b618u: goto label_27b618;
        case 0x27b61cu: goto label_27b61c;
        case 0x27b620u: goto label_27b620;
        case 0x27b624u: goto label_27b624;
        case 0x27b628u: goto label_27b628;
        case 0x27b62cu: goto label_27b62c;
        case 0x27b630u: goto label_27b630;
        case 0x27b634u: goto label_27b634;
        case 0x27b638u: goto label_27b638;
        case 0x27b63cu: goto label_27b63c;
        case 0x27b640u: goto label_27b640;
        case 0x27b644u: goto label_27b644;
        case 0x27b648u: goto label_27b648;
        case 0x27b64cu: goto label_27b64c;
        case 0x27b650u: goto label_27b650;
        case 0x27b654u: goto label_27b654;
        case 0x27b658u: goto label_27b658;
        case 0x27b65cu: goto label_27b65c;
        case 0x27b660u: goto label_27b660;
        case 0x27b664u: goto label_27b664;
        case 0x27b668u: goto label_27b668;
        case 0x27b66cu: goto label_27b66c;
        case 0x27b670u: goto label_27b670;
        case 0x27b674u: goto label_27b674;
        case 0x27b678u: goto label_27b678;
        case 0x27b67cu: goto label_27b67c;
        case 0x27b680u: goto label_27b680;
        case 0x27b684u: goto label_27b684;
        case 0x27b688u: goto label_27b688;
        case 0x27b68cu: goto label_27b68c;
        case 0x27b690u: goto label_27b690;
        case 0x27b694u: goto label_27b694;
        case 0x27b698u: goto label_27b698;
        case 0x27b69cu: goto label_27b69c;
        case 0x27b6a0u: goto label_27b6a0;
        case 0x27b6a4u: goto label_27b6a4;
        case 0x27b6a8u: goto label_27b6a8;
        case 0x27b6acu: goto label_27b6ac;
        case 0x27b6b0u: goto label_27b6b0;
        case 0x27b6b4u: goto label_27b6b4;
        case 0x27b6b8u: goto label_27b6b8;
        case 0x27b6bcu: goto label_27b6bc;
        case 0x27b6c0u: goto label_27b6c0;
        case 0x27b6c4u: goto label_27b6c4;
        case 0x27b6c8u: goto label_27b6c8;
        case 0x27b6ccu: goto label_27b6cc;
        case 0x27b6d0u: goto label_27b6d0;
        case 0x27b6d4u: goto label_27b6d4;
        case 0x27b6d8u: goto label_27b6d8;
        case 0x27b6dcu: goto label_27b6dc;
        case 0x27b6e0u: goto label_27b6e0;
        case 0x27b6e4u: goto label_27b6e4;
        case 0x27b6e8u: goto label_27b6e8;
        case 0x27b6ecu: goto label_27b6ec;
        case 0x27b6f0u: goto label_27b6f0;
        case 0x27b6f4u: goto label_27b6f4;
        case 0x27b6f8u: goto label_27b6f8;
        case 0x27b6fcu: goto label_27b6fc;
        case 0x27b700u: goto label_27b700;
        case 0x27b704u: goto label_27b704;
        case 0x27b708u: goto label_27b708;
        case 0x27b70cu: goto label_27b70c;
        case 0x27b710u: goto label_27b710;
        case 0x27b714u: goto label_27b714;
        case 0x27b718u: goto label_27b718;
        case 0x27b71cu: goto label_27b71c;
        case 0x27b720u: goto label_27b720;
        case 0x27b724u: goto label_27b724;
        case 0x27b728u: goto label_27b728;
        case 0x27b72cu: goto label_27b72c;
        case 0x27b730u: goto label_27b730;
        case 0x27b734u: goto label_27b734;
        case 0x27b738u: goto label_27b738;
        case 0x27b73cu: goto label_27b73c;
        case 0x27b740u: goto label_27b740;
        case 0x27b744u: goto label_27b744;
        case 0x27b748u: goto label_27b748;
        case 0x27b74cu: goto label_27b74c;
        case 0x27b750u: goto label_27b750;
        case 0x27b754u: goto label_27b754;
        case 0x27b758u: goto label_27b758;
        case 0x27b75cu: goto label_27b75c;
        case 0x27b760u: goto label_27b760;
        case 0x27b764u: goto label_27b764;
        case 0x27b768u: goto label_27b768;
        case 0x27b76cu: goto label_27b76c;
        case 0x27b770u: goto label_27b770;
        case 0x27b774u: goto label_27b774;
        case 0x27b778u: goto label_27b778;
        case 0x27b77cu: goto label_27b77c;
        case 0x27b780u: goto label_27b780;
        case 0x27b784u: goto label_27b784;
        case 0x27b788u: goto label_27b788;
        case 0x27b78cu: goto label_27b78c;
        case 0x27b790u: goto label_27b790;
        case 0x27b794u: goto label_27b794;
        case 0x27b798u: goto label_27b798;
        case 0x27b79cu: goto label_27b79c;
        case 0x27b7a0u: goto label_27b7a0;
        case 0x27b7a4u: goto label_27b7a4;
        case 0x27b7a8u: goto label_27b7a8;
        case 0x27b7acu: goto label_27b7ac;
        case 0x27b7b0u: goto label_27b7b0;
        case 0x27b7b4u: goto label_27b7b4;
        case 0x27b7b8u: goto label_27b7b8;
        case 0x27b7bcu: goto label_27b7bc;
        case 0x27b7c0u: goto label_27b7c0;
        case 0x27b7c4u: goto label_27b7c4;
        case 0x27b7c8u: goto label_27b7c8;
        case 0x27b7ccu: goto label_27b7cc;
        case 0x27b7d0u: goto label_27b7d0;
        case 0x27b7d4u: goto label_27b7d4;
        case 0x27b7d8u: goto label_27b7d8;
        case 0x27b7dcu: goto label_27b7dc;
        case 0x27b7e0u: goto label_27b7e0;
        case 0x27b7e4u: goto label_27b7e4;
        case 0x27b7e8u: goto label_27b7e8;
        case 0x27b7ecu: goto label_27b7ec;
        case 0x27b7f0u: goto label_27b7f0;
        case 0x27b7f4u: goto label_27b7f4;
        case 0x27b7f8u: goto label_27b7f8;
        case 0x27b7fcu: goto label_27b7fc;
        case 0x27b800u: goto label_27b800;
        case 0x27b804u: goto label_27b804;
        case 0x27b808u: goto label_27b808;
        case 0x27b80cu: goto label_27b80c;
        case 0x27b810u: goto label_27b810;
        case 0x27b814u: goto label_27b814;
        case 0x27b818u: goto label_27b818;
        case 0x27b81cu: goto label_27b81c;
        case 0x27b820u: goto label_27b820;
        case 0x27b824u: goto label_27b824;
        case 0x27b828u: goto label_27b828;
        case 0x27b82cu: goto label_27b82c;
        case 0x27b830u: goto label_27b830;
        case 0x27b834u: goto label_27b834;
        case 0x27b838u: goto label_27b838;
        case 0x27b83cu: goto label_27b83c;
        case 0x27b840u: goto label_27b840;
        case 0x27b844u: goto label_27b844;
        case 0x27b848u: goto label_27b848;
        case 0x27b84cu: goto label_27b84c;
        case 0x27b850u: goto label_27b850;
        case 0x27b854u: goto label_27b854;
        case 0x27b858u: goto label_27b858;
        case 0x27b85cu: goto label_27b85c;
        case 0x27b860u: goto label_27b860;
        case 0x27b864u: goto label_27b864;
        case 0x27b868u: goto label_27b868;
        case 0x27b86cu: goto label_27b86c;
        case 0x27b870u: goto label_27b870;
        case 0x27b874u: goto label_27b874;
        case 0x27b878u: goto label_27b878;
        case 0x27b87cu: goto label_27b87c;
        case 0x27b880u: goto label_27b880;
        case 0x27b884u: goto label_27b884;
        case 0x27b888u: goto label_27b888;
        case 0x27b88cu: goto label_27b88c;
        case 0x27b890u: goto label_27b890;
        case 0x27b894u: goto label_27b894;
        case 0x27b898u: goto label_27b898;
        case 0x27b89cu: goto label_27b89c;
        case 0x27b8a0u: goto label_27b8a0;
        case 0x27b8a4u: goto label_27b8a4;
        case 0x27b8a8u: goto label_27b8a8;
        case 0x27b8acu: goto label_27b8ac;
        case 0x27b8b0u: goto label_27b8b0;
        case 0x27b8b4u: goto label_27b8b4;
        case 0x27b8b8u: goto label_27b8b8;
        case 0x27b8bcu: goto label_27b8bc;
        case 0x27b8c0u: goto label_27b8c0;
        case 0x27b8c4u: goto label_27b8c4;
        case 0x27b8c8u: goto label_27b8c8;
        case 0x27b8ccu: goto label_27b8cc;
        case 0x27b8d0u: goto label_27b8d0;
        case 0x27b8d4u: goto label_27b8d4;
        case 0x27b8d8u: goto label_27b8d8;
        case 0x27b8dcu: goto label_27b8dc;
        case 0x27b8e0u: goto label_27b8e0;
        case 0x27b8e4u: goto label_27b8e4;
        case 0x27b8e8u: goto label_27b8e8;
        case 0x27b8ecu: goto label_27b8ec;
        case 0x27b8f0u: goto label_27b8f0;
        case 0x27b8f4u: goto label_27b8f4;
        case 0x27b8f8u: goto label_27b8f8;
        case 0x27b8fcu: goto label_27b8fc;
        case 0x27b900u: goto label_27b900;
        case 0x27b904u: goto label_27b904;
        case 0x27b908u: goto label_27b908;
        case 0x27b90cu: goto label_27b90c;
        case 0x27b910u: goto label_27b910;
        case 0x27b914u: goto label_27b914;
        case 0x27b918u: goto label_27b918;
        case 0x27b91cu: goto label_27b91c;
        case 0x27b920u: goto label_27b920;
        case 0x27b924u: goto label_27b924;
        case 0x27b928u: goto label_27b928;
        case 0x27b92cu: goto label_27b92c;
        case 0x27b930u: goto label_27b930;
        case 0x27b934u: goto label_27b934;
        case 0x27b938u: goto label_27b938;
        case 0x27b93cu: goto label_27b93c;
        case 0x27b940u: goto label_27b940;
        case 0x27b944u: goto label_27b944;
        case 0x27b948u: goto label_27b948;
        case 0x27b94cu: goto label_27b94c;
        case 0x27b950u: goto label_27b950;
        case 0x27b954u: goto label_27b954;
        case 0x27b958u: goto label_27b958;
        case 0x27b95cu: goto label_27b95c;
        case 0x27b960u: goto label_27b960;
        case 0x27b964u: goto label_27b964;
        case 0x27b968u: goto label_27b968;
        case 0x27b96cu: goto label_27b96c;
        case 0x27b970u: goto label_27b970;
        case 0x27b974u: goto label_27b974;
        case 0x27b978u: goto label_27b978;
        case 0x27b97cu: goto label_27b97c;
        case 0x27b980u: goto label_27b980;
        case 0x27b984u: goto label_27b984;
        case 0x27b988u: goto label_27b988;
        case 0x27b98cu: goto label_27b98c;
        case 0x27b990u: goto label_27b990;
        case 0x27b994u: goto label_27b994;
        case 0x27b998u: goto label_27b998;
        case 0x27b99cu: goto label_27b99c;
        case 0x27b9a0u: goto label_27b9a0;
        case 0x27b9a4u: goto label_27b9a4;
        case 0x27b9a8u: goto label_27b9a8;
        case 0x27b9acu: goto label_27b9ac;
        case 0x27b9b0u: goto label_27b9b0;
        case 0x27b9b4u: goto label_27b9b4;
        case 0x27b9b8u: goto label_27b9b8;
        case 0x27b9bcu: goto label_27b9bc;
        case 0x27b9c0u: goto label_27b9c0;
        case 0x27b9c4u: goto label_27b9c4;
        case 0x27b9c8u: goto label_27b9c8;
        case 0x27b9ccu: goto label_27b9cc;
        case 0x27b9d0u: goto label_27b9d0;
        case 0x27b9d4u: goto label_27b9d4;
        case 0x27b9d8u: goto label_27b9d8;
        case 0x27b9dcu: goto label_27b9dc;
        case 0x27b9e0u: goto label_27b9e0;
        case 0x27b9e4u: goto label_27b9e4;
        case 0x27b9e8u: goto label_27b9e8;
        case 0x27b9ecu: goto label_27b9ec;
        case 0x27b9f0u: goto label_27b9f0;
        case 0x27b9f4u: goto label_27b9f4;
        case 0x27b9f8u: goto label_27b9f8;
        case 0x27b9fcu: goto label_27b9fc;
        case 0x27ba00u: goto label_27ba00;
        case 0x27ba04u: goto label_27ba04;
        case 0x27ba08u: goto label_27ba08;
        case 0x27ba0cu: goto label_27ba0c;
        case 0x27ba10u: goto label_27ba10;
        case 0x27ba14u: goto label_27ba14;
        case 0x27ba18u: goto label_27ba18;
        case 0x27ba1cu: goto label_27ba1c;
        case 0x27ba20u: goto label_27ba20;
        case 0x27ba24u: goto label_27ba24;
        case 0x27ba28u: goto label_27ba28;
        case 0x27ba2cu: goto label_27ba2c;
        case 0x27ba30u: goto label_27ba30;
        case 0x27ba34u: goto label_27ba34;
        case 0x27ba38u: goto label_27ba38;
        case 0x27ba3cu: goto label_27ba3c;
        case 0x27ba40u: goto label_27ba40;
        case 0x27ba44u: goto label_27ba44;
        case 0x27ba48u: goto label_27ba48;
        case 0x27ba4cu: goto label_27ba4c;
        case 0x27ba50u: goto label_27ba50;
        case 0x27ba54u: goto label_27ba54;
        case 0x27ba58u: goto label_27ba58;
        case 0x27ba5cu: goto label_27ba5c;
        case 0x27ba60u: goto label_27ba60;
        case 0x27ba64u: goto label_27ba64;
        case 0x27ba68u: goto label_27ba68;
        case 0x27ba6cu: goto label_27ba6c;
        case 0x27ba70u: goto label_27ba70;
        case 0x27ba74u: goto label_27ba74;
        case 0x27ba78u: goto label_27ba78;
        case 0x27ba7cu: goto label_27ba7c;
        case 0x27ba80u: goto label_27ba80;
        case 0x27ba84u: goto label_27ba84;
        case 0x27ba88u: goto label_27ba88;
        case 0x27ba8cu: goto label_27ba8c;
        case 0x27ba90u: goto label_27ba90;
        case 0x27ba94u: goto label_27ba94;
        case 0x27ba98u: goto label_27ba98;
        case 0x27ba9cu: goto label_27ba9c;
        case 0x27baa0u: goto label_27baa0;
        case 0x27baa4u: goto label_27baa4;
        case 0x27baa8u: goto label_27baa8;
        case 0x27baacu: goto label_27baac;
        case 0x27bab0u: goto label_27bab0;
        case 0x27bab4u: goto label_27bab4;
        case 0x27bab8u: goto label_27bab8;
        case 0x27babcu: goto label_27babc;
        case 0x27bac0u: goto label_27bac0;
        case 0x27bac4u: goto label_27bac4;
        case 0x27bac8u: goto label_27bac8;
        case 0x27baccu: goto label_27bacc;
        case 0x27bad0u: goto label_27bad0;
        case 0x27bad4u: goto label_27bad4;
        case 0x27bad8u: goto label_27bad8;
        case 0x27badcu: goto label_27badc;
        case 0x27bae0u: goto label_27bae0;
        case 0x27bae4u: goto label_27bae4;
        case 0x27bae8u: goto label_27bae8;
        case 0x27baecu: goto label_27baec;
        case 0x27baf0u: goto label_27baf0;
        case 0x27baf4u: goto label_27baf4;
        case 0x27baf8u: goto label_27baf8;
        case 0x27bafcu: goto label_27bafc;
        case 0x27bb00u: goto label_27bb00;
        case 0x27bb04u: goto label_27bb04;
        case 0x27bb08u: goto label_27bb08;
        case 0x27bb0cu: goto label_27bb0c;
        case 0x27bb10u: goto label_27bb10;
        case 0x27bb14u: goto label_27bb14;
        case 0x27bb18u: goto label_27bb18;
        case 0x27bb1cu: goto label_27bb1c;
        case 0x27bb20u: goto label_27bb20;
        case 0x27bb24u: goto label_27bb24;
        case 0x27bb28u: goto label_27bb28;
        case 0x27bb2cu: goto label_27bb2c;
        case 0x27bb30u: goto label_27bb30;
        case 0x27bb34u: goto label_27bb34;
        case 0x27bb38u: goto label_27bb38;
        case 0x27bb3cu: goto label_27bb3c;
        case 0x27bb40u: goto label_27bb40;
        case 0x27bb44u: goto label_27bb44;
        case 0x27bb48u: goto label_27bb48;
        case 0x27bb4cu: goto label_27bb4c;
        case 0x27bb50u: goto label_27bb50;
        case 0x27bb54u: goto label_27bb54;
        case 0x27bb58u: goto label_27bb58;
        case 0x27bb5cu: goto label_27bb5c;
        case 0x27bb60u: goto label_27bb60;
        case 0x27bb64u: goto label_27bb64;
        case 0x27bb68u: goto label_27bb68;
        case 0x27bb6cu: goto label_27bb6c;
        case 0x27bb70u: goto label_27bb70;
        case 0x27bb74u: goto label_27bb74;
        case 0x27bb78u: goto label_27bb78;
        case 0x27bb7cu: goto label_27bb7c;
        case 0x27bb80u: goto label_27bb80;
        case 0x27bb84u: goto label_27bb84;
        case 0x27bb88u: goto label_27bb88;
        case 0x27bb8cu: goto label_27bb8c;
        case 0x27bb90u: goto label_27bb90;
        case 0x27bb94u: goto label_27bb94;
        case 0x27bb98u: goto label_27bb98;
        case 0x27bb9cu: goto label_27bb9c;
        case 0x27bba0u: goto label_27bba0;
        case 0x27bba4u: goto label_27bba4;
        case 0x27bba8u: goto label_27bba8;
        case 0x27bbacu: goto label_27bbac;
        case 0x27bbb0u: goto label_27bbb0;
        case 0x27bbb4u: goto label_27bbb4;
        case 0x27bbb8u: goto label_27bbb8;
        case 0x27bbbcu: goto label_27bbbc;
        case 0x27bbc0u: goto label_27bbc0;
        case 0x27bbc4u: goto label_27bbc4;
        case 0x27bbc8u: goto label_27bbc8;
        case 0x27bbccu: goto label_27bbcc;
        case 0x27bbd0u: goto label_27bbd0;
        case 0x27bbd4u: goto label_27bbd4;
        case 0x27bbd8u: goto label_27bbd8;
        case 0x27bbdcu: goto label_27bbdc;
        case 0x27bbe0u: goto label_27bbe0;
        case 0x27bbe4u: goto label_27bbe4;
        case 0x27bbe8u: goto label_27bbe8;
        case 0x27bbecu: goto label_27bbec;
        case 0x27bbf0u: goto label_27bbf0;
        case 0x27bbf4u: goto label_27bbf4;
        case 0x27bbf8u: goto label_27bbf8;
        case 0x27bbfcu: goto label_27bbfc;
        case 0x27bc00u: goto label_27bc00;
        case 0x27bc04u: goto label_27bc04;
        case 0x27bc08u: goto label_27bc08;
        case 0x27bc0cu: goto label_27bc0c;
        case 0x27bc10u: goto label_27bc10;
        case 0x27bc14u: goto label_27bc14;
        case 0x27bc18u: goto label_27bc18;
        case 0x27bc1cu: goto label_27bc1c;
        case 0x27bc20u: goto label_27bc20;
        case 0x27bc24u: goto label_27bc24;
        case 0x27bc28u: goto label_27bc28;
        case 0x27bc2cu: goto label_27bc2c;
        case 0x27bc30u: goto label_27bc30;
        case 0x27bc34u: goto label_27bc34;
        case 0x27bc38u: goto label_27bc38;
        case 0x27bc3cu: goto label_27bc3c;
        case 0x27bc40u: goto label_27bc40;
        case 0x27bc44u: goto label_27bc44;
        case 0x27bc48u: goto label_27bc48;
        case 0x27bc4cu: goto label_27bc4c;
        case 0x27bc50u: goto label_27bc50;
        case 0x27bc54u: goto label_27bc54;
        case 0x27bc58u: goto label_27bc58;
        case 0x27bc5cu: goto label_27bc5c;
        case 0x27bc60u: goto label_27bc60;
        case 0x27bc64u: goto label_27bc64;
        case 0x27bc68u: goto label_27bc68;
        case 0x27bc6cu: goto label_27bc6c;
        case 0x27bc70u: goto label_27bc70;
        case 0x27bc74u: goto label_27bc74;
        case 0x27bc78u: goto label_27bc78;
        case 0x27bc7cu: goto label_27bc7c;
        case 0x27bc80u: goto label_27bc80;
        case 0x27bc84u: goto label_27bc84;
        case 0x27bc88u: goto label_27bc88;
        case 0x27bc8cu: goto label_27bc8c;
        case 0x27bc90u: goto label_27bc90;
        case 0x27bc94u: goto label_27bc94;
        case 0x27bc98u: goto label_27bc98;
        case 0x27bc9cu: goto label_27bc9c;
        case 0x27bca0u: goto label_27bca0;
        case 0x27bca4u: goto label_27bca4;
        case 0x27bca8u: goto label_27bca8;
        case 0x27bcacu: goto label_27bcac;
        case 0x27bcb0u: goto label_27bcb0;
        case 0x27bcb4u: goto label_27bcb4;
        case 0x27bcb8u: goto label_27bcb8;
        case 0x27bcbcu: goto label_27bcbc;
        case 0x27bcc0u: goto label_27bcc0;
        case 0x27bcc4u: goto label_27bcc4;
        case 0x27bcc8u: goto label_27bcc8;
        case 0x27bcccu: goto label_27bccc;
        case 0x27bcd0u: goto label_27bcd0;
        case 0x27bcd4u: goto label_27bcd4;
        case 0x27bcd8u: goto label_27bcd8;
        case 0x27bcdcu: goto label_27bcdc;
        case 0x27bce0u: goto label_27bce0;
        case 0x27bce4u: goto label_27bce4;
        case 0x27bce8u: goto label_27bce8;
        case 0x27bcecu: goto label_27bcec;
        case 0x27bcf0u: goto label_27bcf0;
        case 0x27bcf4u: goto label_27bcf4;
        case 0x27bcf8u: goto label_27bcf8;
        case 0x27bcfcu: goto label_27bcfc;
        case 0x27bd00u: goto label_27bd00;
        case 0x27bd04u: goto label_27bd04;
        case 0x27bd08u: goto label_27bd08;
        case 0x27bd0cu: goto label_27bd0c;
        case 0x27bd10u: goto label_27bd10;
        case 0x27bd14u: goto label_27bd14;
        case 0x27bd18u: goto label_27bd18;
        case 0x27bd1cu: goto label_27bd1c;
        case 0x27bd20u: goto label_27bd20;
        case 0x27bd24u: goto label_27bd24;
        case 0x27bd28u: goto label_27bd28;
        case 0x27bd2cu: goto label_27bd2c;
        case 0x27bd30u: goto label_27bd30;
        case 0x27bd34u: goto label_27bd34;
        case 0x27bd38u: goto label_27bd38;
        case 0x27bd3cu: goto label_27bd3c;
        case 0x27bd40u: goto label_27bd40;
        case 0x27bd44u: goto label_27bd44;
        case 0x27bd48u: goto label_27bd48;
        case 0x27bd4cu: goto label_27bd4c;
        case 0x27bd50u: goto label_27bd50;
        case 0x27bd54u: goto label_27bd54;
        case 0x27bd58u: goto label_27bd58;
        case 0x27bd5cu: goto label_27bd5c;
        case 0x27bd60u: goto label_27bd60;
        case 0x27bd64u: goto label_27bd64;
        case 0x27bd68u: goto label_27bd68;
        case 0x27bd6cu: goto label_27bd6c;
        case 0x27bd70u: goto label_27bd70;
        case 0x27bd74u: goto label_27bd74;
        case 0x27bd78u: goto label_27bd78;
        case 0x27bd7cu: goto label_27bd7c;
        case 0x27bd80u: goto label_27bd80;
        case 0x27bd84u: goto label_27bd84;
        case 0x27bd88u: goto label_27bd88;
        case 0x27bd8cu: goto label_27bd8c;
        case 0x27bd90u: goto label_27bd90;
        case 0x27bd94u: goto label_27bd94;
        case 0x27bd98u: goto label_27bd98;
        case 0x27bd9cu: goto label_27bd9c;
        case 0x27bda0u: goto label_27bda0;
        case 0x27bda4u: goto label_27bda4;
        case 0x27bda8u: goto label_27bda8;
        case 0x27bdacu: goto label_27bdac;
        case 0x27bdb0u: goto label_27bdb0;
        case 0x27bdb4u: goto label_27bdb4;
        case 0x27bdb8u: goto label_27bdb8;
        case 0x27bdbcu: goto label_27bdbc;
        case 0x27bdc0u: goto label_27bdc0;
        case 0x27bdc4u: goto label_27bdc4;
        case 0x27bdc8u: goto label_27bdc8;
        case 0x27bdccu: goto label_27bdcc;
        case 0x27bdd0u: goto label_27bdd0;
        case 0x27bdd4u: goto label_27bdd4;
        case 0x27bdd8u: goto label_27bdd8;
        case 0x27bddcu: goto label_27bddc;
        case 0x27bde0u: goto label_27bde0;
        case 0x27bde4u: goto label_27bde4;
        case 0x27bde8u: goto label_27bde8;
        case 0x27bdecu: goto label_27bdec;
        case 0x27bdf0u: goto label_27bdf0;
        case 0x27bdf4u: goto label_27bdf4;
        case 0x27bdf8u: goto label_27bdf8;
        case 0x27bdfcu: goto label_27bdfc;
        case 0x27be00u: goto label_27be00;
        case 0x27be04u: goto label_27be04;
        case 0x27be08u: goto label_27be08;
        case 0x27be0cu: goto label_27be0c;
        case 0x27be10u: goto label_27be10;
        case 0x27be14u: goto label_27be14;
        case 0x27be18u: goto label_27be18;
        case 0x27be1cu: goto label_27be1c;
        case 0x27be20u: goto label_27be20;
        case 0x27be24u: goto label_27be24;
        case 0x27be28u: goto label_27be28;
        case 0x27be2cu: goto label_27be2c;
        case 0x27be30u: goto label_27be30;
        case 0x27be34u: goto label_27be34;
        case 0x27be38u: goto label_27be38;
        case 0x27be3cu: goto label_27be3c;
        case 0x27be40u: goto label_27be40;
        case 0x27be44u: goto label_27be44;
        case 0x27be48u: goto label_27be48;
        case 0x27be4cu: goto label_27be4c;
        case 0x27be50u: goto label_27be50;
        case 0x27be54u: goto label_27be54;
        case 0x27be58u: goto label_27be58;
        case 0x27be5cu: goto label_27be5c;
        case 0x27be60u: goto label_27be60;
        case 0x27be64u: goto label_27be64;
        case 0x27be68u: goto label_27be68;
        case 0x27be6cu: goto label_27be6c;
        case 0x27be70u: goto label_27be70;
        case 0x27be74u: goto label_27be74;
        case 0x27be78u: goto label_27be78;
        case 0x27be7cu: goto label_27be7c;
        case 0x27be80u: goto label_27be80;
        case 0x27be84u: goto label_27be84;
        case 0x27be88u: goto label_27be88;
        case 0x27be8cu: goto label_27be8c;
        case 0x27be90u: goto label_27be90;
        case 0x27be94u: goto label_27be94;
        case 0x27be98u: goto label_27be98;
        case 0x27be9cu: goto label_27be9c;
        case 0x27bea0u: goto label_27bea0;
        case 0x27bea4u: goto label_27bea4;
        case 0x27bea8u: goto label_27bea8;
        case 0x27beacu: goto label_27beac;
        case 0x27beb0u: goto label_27beb0;
        case 0x27beb4u: goto label_27beb4;
        case 0x27beb8u: goto label_27beb8;
        case 0x27bebcu: goto label_27bebc;
        case 0x27bec0u: goto label_27bec0;
        case 0x27bec4u: goto label_27bec4;
        case 0x27bec8u: goto label_27bec8;
        case 0x27beccu: goto label_27becc;
        case 0x27bed0u: goto label_27bed0;
        case 0x27bed4u: goto label_27bed4;
        case 0x27bed8u: goto label_27bed8;
        case 0x27bedcu: goto label_27bedc;
        case 0x27bee0u: goto label_27bee0;
        case 0x27bee4u: goto label_27bee4;
        case 0x27bee8u: goto label_27bee8;
        case 0x27beecu: goto label_27beec;
        case 0x27bef0u: goto label_27bef0;
        case 0x27bef4u: goto label_27bef4;
        case 0x27bef8u: goto label_27bef8;
        case 0x27befcu: goto label_27befc;
        case 0x27bf00u: goto label_27bf00;
        case 0x27bf04u: goto label_27bf04;
        case 0x27bf08u: goto label_27bf08;
        case 0x27bf0cu: goto label_27bf0c;
        case 0x27bf10u: goto label_27bf10;
        case 0x27bf14u: goto label_27bf14;
        case 0x27bf18u: goto label_27bf18;
        case 0x27bf1cu: goto label_27bf1c;
        default: break;
    }

    ctx->pc = 0x27b130u;

label_27b130:
    // 0x27b130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27b130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_27b134:
    // 0x27b134: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27b134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b138:
    // 0x27b138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27b138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27b13c:
    // 0x27b13c: 0xc09eb22  jal         func_27AC88
label_27b140:
    if (ctx->pc == 0x27B140u) {
        ctx->pc = 0x27B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B13Cu;
        // 0x27b140: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B144u;
        goto label_27b144;
    }
    ctx->pc = 0x27B13Cu;
    SET_GPR_U32(ctx, 31, 0x27B144u);
    ctx->pc = 0x27B140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B13Cu;
    // 0x27b140: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC88u, 0x27B13Cu, 0x27B144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B144u;
label_27b144:
    // 0x27b144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27b144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27b148:
    // 0x27b148: 0x3e00008  jr          $ra
label_27b14c:
    if (ctx->pc == 0x27B14Cu) {
        ctx->pc = 0x27B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B148u;
        // 0x27b14c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B150u;
        goto label_27b150;
    }
    ctx->pc = 0x27B148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B148u;
        // 0x27b14c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B150u;
label_27b150:
    // 0x27b150: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27b150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_27b154:
    // 0x27b154: 0x0  nop
    ctx->pc = 0x27b154u;
    // NOP
label_27b158:
    // 0x27b158: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27b158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_27b15c:
    // 0x27b15c: 0x0  nop
    ctx->pc = 0x27b15cu;
    // NOP
label_27b160:
    // 0x27b160: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27b160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_27b164:
    // 0x27b164: 0x0  nop
    ctx->pc = 0x27b164u;
    // NOP
label_27b168:
    // 0x27b168: 0x27bdf630  addiu       $sp, $sp, -0x9D0
    ctx->pc = 0x27b168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964784));
label_27b16c:
    // 0x27b16c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x27b16cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_27b170:
    // 0x27b170: 0xffb609b0  sd          $s6, 0x9B0($sp)
    ctx->pc = 0x27b170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2480), GPR_U64(ctx, 22));
label_27b174:
    // 0x27b174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b178:
    // 0x27b178: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x27b178u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27b17c:
    // 0x27b17c: 0xffb00980  sd          $s0, 0x980($sp)
    ctx->pc = 0x27b17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2432), GPR_U64(ctx, 16));
label_27b180:
    // 0x27b180: 0xffb10988  sd          $s1, 0x988($sp)
    ctx->pc = 0x27b180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2440), GPR_U64(ctx, 17));
label_27b184:
    // 0x27b184: 0xffb20990  sd          $s2, 0x990($sp)
    ctx->pc = 0x27b184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2448), GPR_U64(ctx, 18));
label_27b188:
    // 0x27b188: 0xffb30998  sd          $s3, 0x998($sp)
    ctx->pc = 0x27b188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2456), GPR_U64(ctx, 19));
label_27b18c:
    // 0x27b18c: 0xffb409a0  sd          $s4, 0x9A0($sp)
    ctx->pc = 0x27b18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2464), GPR_U64(ctx, 20));
label_27b190:
    // 0x27b190: 0xffb509a8  sd          $s5, 0x9A8($sp)
    ctx->pc = 0x27b190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2472), GPR_U64(ctx, 21));
label_27b194:
    // 0x27b194: 0xffb709b8  sd          $s7, 0x9B8($sp)
    ctx->pc = 0x27b194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2488), GPR_U64(ctx, 23));
label_27b198:
    // 0x27b198: 0xffbe09c0  sd          $fp, 0x9C0($sp)
    ctx->pc = 0x27b198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2496), GPR_U64(ctx, 30));
label_27b19c:
    // 0x27b19c: 0xffbf09c8  sd          $ra, 0x9C8($sp)
    ctx->pc = 0x27b19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2504), GPR_U64(ctx, 31));
label_27b1a0:
    // 0x27b1a0: 0xc0efab3  jal         func_3BEACC
label_27b1a4:
    if (ctx->pc == 0x27B1A4u) {
        ctx->pc = 0x27B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B1A0u;
        // 0x27b1a4: 0x27a403d0  addiu       $a0, $sp, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B1A8u;
        goto label_27b1a8;
    }
    ctx->pc = 0x27B1A0u;
    SET_GPR_U32(ctx, 31, 0x27B1A8u);
    ctx->pc = 0x27B1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B1A0u;
    // 0x27b1a4: 0x27a403d0  addiu       $a0, $sp, 0x3D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x27B1A0u, 0x27B1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B1A8u;
label_27b1a8:
    // 0x27b1a8: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x27b1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_27b1ac:
    // 0x27b1ac: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x27b1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_27b1b0:
    // 0x27b1b0: 0x24639440  addiu       $v1, $v1, -0x6BC0
    ctx->pc = 0x27b1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939712));
label_27b1b4:
    // 0x27b1b4: 0x24429470  addiu       $v0, $v0, -0x6B90
    ctx->pc = 0x27b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939760));
label_27b1b8:
    // 0x27b1b8: 0x78680010  lq          $t0, 0x10($v1)
    ctx->pc = 0x27b1b8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_27b1bc:
    // 0x27b1bc: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x27b1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_27b1c0:
    // 0x27b1c0: 0x786a0020  lq          $t2, 0x20($v1)
    ctx->pc = 0x27b1c0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_27b1c4:
    // 0x27b1c4: 0x3c0d0047  lui         $t5, 0x47
    ctx->pc = 0x27b1c4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)71 << 16));
label_27b1c8:
    // 0x27b1c8: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x27b1c8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_27b1cc:
    // 0x27b1cc: 0x3c0c0047  lui         $t4, 0x47
    ctx->pc = 0x27b1ccu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)71 << 16));
label_27b1d0:
    // 0x27b1d0: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x27b1d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_27b1d4:
    // 0x27b1d4: 0x27b00490  addiu       $s0, $sp, 0x490
    ctx->pc = 0x27b1d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_27b1d8:
    // 0x27b1d8: 0x784b0020  lq          $t3, 0x20($v0)
    ctx->pc = 0x27b1d8u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_27b1dc:
    // 0x27b1dc: 0x27a404a8  addiu       $a0, $sp, 0x4A8
    ctx->pc = 0x27b1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1192));
label_27b1e0:
    // 0x27b1e0: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x27b1e0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_27b1e4:
    // 0x27b1e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b1e8:
    // 0x27b1e8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27b1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_27b1ec:
    // 0x27b1ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27b1ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27b1f0:
    // 0x27b1f0: 0xafa70408  sw          $a3, 0x408($sp)
    ctx->pc = 0x27b1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1032), GPR_U32(ctx, 7));
label_27b1f4:
    // 0x27b1f4: 0x7fa60410  sq          $a2, 0x410($sp)
    ctx->pc = 0x27b1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 6));
label_27b1f8:
    // 0x27b1f8: 0x7fa80420  sq          $t0, 0x420($sp)
    ctx->pc = 0x27b1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 8));
label_27b1fc:
    // 0x27b1fc: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x27b1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_27b200:
    // 0x27b200: 0xafa703d0  sw          $a3, 0x3D0($sp)
    ctx->pc = 0x27b200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 976), GPR_U32(ctx, 7));
label_27b204:
    // 0x27b204: 0xafa703e4  sw          $a3, 0x3E4($sp)
    ctx->pc = 0x27b204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 996), GPR_U32(ctx, 7));
label_27b208:
    // 0x27b208: 0xafa703f8  sw          $a3, 0x3F8($sp)
    ctx->pc = 0x27b208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1016), GPR_U32(ctx, 7));
label_27b20c:
    // 0x27b20c: 0xafa70400  sw          $a3, 0x400($sp)
    ctx->pc = 0x27b20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 7));
label_27b210:
    // 0x27b210: 0xafa70404  sw          $a3, 0x404($sp)
    ctx->pc = 0x27b210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 7));
label_27b214:
    // 0x27b214: 0x7faa0430  sq          $t2, 0x430($sp)
    ctx->pc = 0x27b214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 10));
label_27b218:
    // 0x27b218: 0x7fa90440  sq          $t1, 0x440($sp)
    ctx->pc = 0x27b218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 9));
label_27b21c:
    // 0x27b21c: 0x7fab0460  sq          $t3, 0x460($sp)
    ctx->pc = 0x27b21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 11));
label_27b220:
    // 0x27b220: 0xafa0047c  sw          $zero, 0x47C($sp)
    ctx->pc = 0x27b220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1148), GPR_U32(ctx, 0));
label_27b224:
    // 0x27b224: 0xe7a00478  swc1        $f0, 0x478($sp)
    ctx->pc = 0x27b224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1144), bits); }
label_27b228:
    // 0x27b228: 0xe7a00470  swc1        $f0, 0x470($sp)
    ctx->pc = 0x27b228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
label_27b22c:
    // 0x27b22c: 0xe7a00474  swc1        $f0, 0x474($sp)
    ctx->pc = 0x27b22cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1140), bits); }
label_27b230:
    // 0x27b230: 0x25a894d0  addiu       $t0, $t5, -0x6B30
    ctx->pc = 0x27b230u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 4294939856));
label_27b234:
    // 0x27b234: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x27b234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_27b238:
    // 0x27b238: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x27b238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_27b23c:
    // 0x27b23c: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x27b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_27b240:
    // 0x27b240: 0xb3a20487  sdl         $v0, 0x487($sp)
    ctx->pc = 0x27b240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b244:
    // 0x27b244: 0xb7a20480  sdr         $v0, 0x480($sp)
    ctx->pc = 0x27b244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b248:
    // 0x27b248: 0xafa30488  sw          $v1, 0x488($sp)
    ctx->pc = 0x27b248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1160), GPR_U32(ctx, 3));
label_27b24c:
    // 0x27b24c: 0x258394e0  addiu       $v1, $t4, -0x6B20
    ctx->pc = 0x27b24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4294939872));
label_27b250:
    // 0x27b250: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x27b250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_27b254:
    // 0x27b254: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x27b254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_27b258:
    // 0x27b258: 0x686a000f  ldl         $t2, 0xF($v1)
    ctx->pc = 0x27b258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_27b25c:
    // 0x27b25c: 0x6c6a0008  ldr         $t2, 0x8($v1)
    ctx->pc = 0x27b25cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_27b260:
    // 0x27b260: 0x68620017  ldl         $v0, 0x17($v1)
    ctx->pc = 0x27b260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_27b264:
    // 0x27b264: 0x6c620010  ldr         $v0, 0x10($v1)
    ctx->pc = 0x27b264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_27b268:
    // 0x27b268: 0xb3a90497  sdl         $t1, 0x497($sp)
    ctx->pc = 0x27b268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b26c:
    // 0x27b26c: 0xb7a90490  sdr         $t1, 0x490($sp)
    ctx->pc = 0x27b26cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b270:
    // 0x27b270: 0xb3aa049f  sdl         $t2, 0x49F($sp)
    ctx->pc = 0x27b270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b274:
    // 0x27b274: 0xb7aa0498  sdr         $t2, 0x498($sp)
    ctx->pc = 0x27b274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b278:
    // 0x27b278: 0xb3a204a7  sdl         $v0, 0x4A7($sp)
    ctx->pc = 0x27b278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b27c:
    // 0x27b27c: 0xb7a204a0  sdr         $v0, 0x4A0($sp)
    ctx->pc = 0x27b27cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b280:
    // 0x27b280: 0xc0efab3  jal         func_3BEACC
label_27b284:
    if (ctx->pc == 0x27B284u) {
        ctx->pc = 0x27B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B280u;
        // 0x27b284: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B288u;
        goto label_27b288;
    }
    ctx->pc = 0x27B280u;
    SET_GPR_U32(ctx, 31, 0x27B288u);
    ctx->pc = 0x27B284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B280u;
    // 0x27b284: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x27B280u, 0x27B288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B288u;
label_27b288:
    // 0x27b288: 0xc0efc2e  jal         func_3BF0B8
label_27b28c:
    if (ctx->pc == 0x27B28Cu) {
        ctx->pc = 0x27B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B288u;
        // 0x27b28c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B290u;
        goto label_27b290;
    }
    ctx->pc = 0x27B288u;
    SET_GPR_U32(ctx, 31, 0x27B290u);
    ctx->pc = 0x27B28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B288u;
    // 0x27b28c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x27B288u, 0x27B290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B290u;
label_27b290:
    // 0x27b290: 0xafa20960  sw          $v0, 0x960($sp)
    ctx->pc = 0x27b290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2400), GPR_U32(ctx, 2));
label_27b294:
    // 0x27b294: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x27b294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_27b298:
    // 0x27b298: 0x8ec300a0  lw          $v1, 0xA0($s6)
    ctx->pc = 0x27b298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 160)));
label_27b29c:
    // 0x27b29c: 0x8ec4009c  lw          $a0, 0x9C($s6)
    ctx->pc = 0x27b29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 156)));
label_27b2a0:
    // 0x27b2a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27b2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_27b2a4:
    // 0x27b2a4: 0x244894f8  addiu       $t0, $v0, -0x6B08
    ctx->pc = 0x27b2a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939896));
label_27b2a8:
    // 0x27b2a8: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x27b2a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_27b2ac:
    // 0x27b2ac: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x27b2acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_27b2b0:
    // 0x27b2b0: 0x8906000b  lwl         $a2, 0xB($t0)
    ctx->pc = 0x27b2b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
label_27b2b4:
    // 0x27b2b4: 0x99060008  lwr         $a2, 0x8($t0)
    ctx->pc = 0x27b2b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_27b2b8:
    // 0x27b2b8: 0x8107000c  lb          $a3, 0xC($t0)
    ctx->pc = 0x27b2b8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 12)));
label_27b2bc:
    // 0x27b2bc: 0xb3a504d7  sdl         $a1, 0x4D7($sp)
    ctx->pc = 0x27b2bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1239); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b2c0:
    // 0x27b2c0: 0xb7a504d0  sdr         $a1, 0x4D0($sp)
    ctx->pc = 0x27b2c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1232); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b2c4:
    // 0x27b2c4: 0xaba604db  swl         $a2, 0x4DB($sp)
    ctx->pc = 0x27b2c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1243); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_27b2c8:
    // 0x27b2c8: 0xbba604d8  swr         $a2, 0x4D8($sp)
    ctx->pc = 0x27b2c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1240); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_27b2cc:
    // 0x27b2cc: 0xa3a704dc  sb          $a3, 0x4DC($sp)
    ctx->pc = 0x27b2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1244), (uint8_t)GPR_U32(ctx, 7));
label_27b2d0:
    // 0x27b2d0: 0x8105000d  lb          $a1, 0xD($t0)
    ctx->pc = 0x27b2d0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 13)));
label_27b2d4:
    // 0x27b2d4: 0xa3a504dd  sb          $a1, 0x4DD($sp)
    ctx->pc = 0x27b2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1245), (uint8_t)GPR_U32(ctx, 5));
label_27b2d8:
    // 0x27b2d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27b2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27b2dc:
    // 0x27b2dc: 0x2c620014  sltiu       $v0, $v1, 0x14
    ctx->pc = 0x27b2dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_27b2e0:
    // 0x27b2e0: 0x10400302  beqz        $v0, . + 4 + (0x302 << 2)
label_27b2e4:
    if (ctx->pc == 0x27B2E4u) {
        ctx->pc = 0x27B2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B2E0u;
        // 0x27b2e4: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B2E8u;
        goto label_27b2e8;
    }
    ctx->pc = 0x27B2E0u;
    {
        const bool branch_taken_0x27b2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B2E0u;
        // 0x27b2e4: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b2e0) {
            ctx->pc = 0x27BEECu;
            goto label_27beec;
        }
    }
    ctx->pc = 0x27B2E8u;
label_27b2e8:
    // 0x27b2e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27b2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_27b2ec:
    // 0x27b2ec: 0x244295f0  addiu       $v0, $v0, -0x6A10
    ctx->pc = 0x27b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940144));
label_27b2f0:
    // 0x27b2f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27b2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27b2f4:
    // 0x27b2f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27b2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27b2f8:
    // 0x27b2f8: 0x800008  jr          $a0
label_27b2fc:
    if (ctx->pc == 0x27B2FCu) {
        ctx->pc = 0x27B300u;
        goto label_27b300;
    }
    ctx->pc = 0x27B2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27B300u: goto label_27b300;
            case 0x27B308u: goto label_27b308;
            case 0x27B314u: goto label_27b314;
            case 0x27B328u: goto label_27b328;
            case 0x27B33Cu: goto label_27b33c;
            case 0x27B914u: goto label_27b914;
            case 0x27BB5Cu: goto label_27bb5c;
            case 0x27BBD0u: goto label_27bbd0;
            case 0x27BD34u: goto label_27bd34;
            case 0x27BE90u: goto label_27be90;
            case 0x27BE98u: goto label_27be98;
            case 0x27BEA0u: goto label_27bea0;
            case 0x27BEA8u: goto label_27bea8;
            case 0x27BEBCu: goto label_27bebc;
            case 0x27BEC4u: goto label_27bec4;
            case 0x27BECCu: goto label_27becc;
            case 0x27BEE0u: goto label_27bee0;
            case 0x27BEECu: goto label_27beec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B2F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27B300u;
label_27b300:
    // 0x27b300: 0x100002fa  b           . + 4 + (0x2FA << 2)
label_27b304:
    if (ctx->pc == 0x27B304u) {
        ctx->pc = 0x27B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B300u;
        // 0x27b304: 0xaec00068  sw          $zero, 0x68($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B308u;
        goto label_27b308;
    }
    ctx->pc = 0x27B300u;
    {
        const bool branch_taken_0x27b300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B300u;
        // 0x27b304: 0xaec00068  sw          $zero, 0x68($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b300) {
            ctx->pc = 0x27BEECu;
            goto label_27beec;
        }
    }
    ctx->pc = 0x27B308u;
label_27b308:
    // 0x27b308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b30c:
    // 0x27b30c: 0x100002f7  b           . + 4 + (0x2F7 << 2)
label_27b310:
    if (ctx->pc == 0x27B310u) {
        ctx->pc = 0x27B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B30Cu;
        // 0x27b310: 0xaec20068  sw          $v0, 0x68($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B314u;
        goto label_27b314;
    }
    ctx->pc = 0x27B30Cu;
    {
        const bool branch_taken_0x27b30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B30Cu;
        // 0x27b310: 0xaec20068  sw          $v0, 0x68($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b30c) {
            ctx->pc = 0x27BEECu;
            goto label_27beec;
        }
    }
    ctx->pc = 0x27B314u;
label_27b314:
    // 0x27b314: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27b314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27b318:
    // 0x27b318: 0xc0ef222  jal         func_3BC888
label_27b31c:
    if (ctx->pc == 0x27B31Cu) {
        ctx->pc = 0x27B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B318u;
        // 0x27b31c: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B320u;
        goto label_27b320;
    }
    ctx->pc = 0x27B318u;
    SET_GPR_U32(ctx, 31, 0x27B320u);
    ctx->pc = 0x27B31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B318u;
    // 0x27b31c: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC888u, 0x27B318u, 0x27B320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B320u;
label_27b320:
    // 0x27b320: 0x10000226  b           . + 4 + (0x226 << 2)
label_27b324:
    if (ctx->pc == 0x27B324u) {
        ctx->pc = 0x27B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B320u;
        // 0x27b324: 0x26c60090  addiu       $a2, $s6, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B328u;
        goto label_27b328;
    }
    ctx->pc = 0x27B320u;
    {
        const bool branch_taken_0x27b320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B320u;
        // 0x27b324: 0x26c60090  addiu       $a2, $s6, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b320) {
            ctx->pc = 0x27BBBCu;
            goto label_27bbbc;
        }
    }
    ctx->pc = 0x27B328u;
label_27b328:
    // 0x27b328: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27b328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27b32c:
    // 0x27b32c: 0xc0ef342  jal         func_3BCD08
label_27b330:
    if (ctx->pc == 0x27B330u) {
        ctx->pc = 0x27B330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B32Cu;
        // 0x27b330: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B334u;
        goto label_27b334;
    }
    ctx->pc = 0x27B32Cu;
    SET_GPR_U32(ctx, 31, 0x27B334u);
    ctx->pc = 0x27B330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B32Cu;
    // 0x27b330: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCD08u, 0x27B32Cu, 0x27B334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B334u;
label_27b334:
    // 0x27b334: 0x10000221  b           . + 4 + (0x221 << 2)
label_27b338:
    if (ctx->pc == 0x27B338u) {
        ctx->pc = 0x27B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B334u;
        // 0x27b338: 0x26c60090  addiu       $a2, $s6, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B33Cu;
        goto label_27b33c;
    }
    ctx->pc = 0x27B334u;
    {
        const bool branch_taken_0x27b334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B334u;
        // 0x27b338: 0x26c60090  addiu       $a2, $s6, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b334) {
            ctx->pc = 0x27BBBCu;
            goto label_27bbbc;
        }
    }
    ctx->pc = 0x27B33Cu;
label_27b33c:
    // 0x27b33c: 0x27b00520  addiu       $s0, $sp, 0x520
    ctx->pc = 0x27b33cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
label_27b340:
    // 0x27b340: 0x26c90524  addiu       $t1, $s6, 0x524
    ctx->pc = 0x27b340u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), 1316));
label_27b344:
    // 0x27b344: 0x27b404d0  addiu       $s4, $sp, 0x4D0
    ctx->pc = 0x27b344u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_27b348:
    // 0x27b348: 0xafa90968  sw          $t1, 0x968($sp)
    ctx->pc = 0x27b348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2408), GPR_U32(ctx, 9));
label_27b34c:
    // 0x27b34c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b350:
    // 0x27b350: 0xc0efbe8  jal         func_3BEFA0
label_27b354:
    if (ctx->pc == 0x27B354u) {
        ctx->pc = 0x27B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B350u;
        // 0x27b354: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B358u;
        goto label_27b358;
    }
    ctx->pc = 0x27B350u;
    SET_GPR_U32(ctx, 31, 0x27B358u);
    ctx->pc = 0x27B354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B350u;
    // 0x27b354: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27B350u, 0x27B358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B358u;
label_27b358:
    // 0x27b358: 0x26d3008c  addiu       $s3, $s6, 0x8C
    ctx->pc = 0x27b358u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 140));
label_27b35c:
    // 0x27b35c: 0x8faa0968  lw          $t2, 0x968($sp)
    ctx->pc = 0x27b35cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2408)));
label_27b360:
    // 0x27b360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b364:
    // 0x27b364: 0x26d20090  addiu       $s2, $s6, 0x90
    ctx->pc = 0x27b364u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
label_27b368:
    // 0x27b368: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x27b368u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27b36c:
    // 0x27b36c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x27b36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_27b370:
    // 0x27b370: 0xc0efae1  jal         func_3BEB84
label_27b374:
    if (ctx->pc == 0x27B374u) {
        ctx->pc = 0x27B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B370u;
        // 0x27b374: 0xafaa0970  sw          $t2, 0x970($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2416), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B378u;
        goto label_27b378;
    }
    ctx->pc = 0x27B370u;
    SET_GPR_U32(ctx, 31, 0x27B378u);
    ctx->pc = 0x27B374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B370u;
    // 0x27b374: 0xafaa0970  sw          $t2, 0x970($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2416), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x27B370u, 0x27B378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B378u;
label_27b378:
    // 0x27b378: 0x240f02d  daddu       $fp, $s2, $zero
    ctx->pc = 0x27b378u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b37c:
    // 0x27b37c: 0xc0efc2e  jal         func_3BF0B8
label_27b380:
    if (ctx->pc == 0x27B380u) {
        ctx->pc = 0x27B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B37Cu;
        // 0x27b380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B384u;
        goto label_27b384;
    }
    ctx->pc = 0x27B37Cu;
    SET_GPR_U32(ctx, 31, 0x27B384u);
    ctx->pc = 0x27B380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B37Cu;
    // 0x27b380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x27B37Cu, 0x27B384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B384u;
label_27b384:
    // 0x27b384: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x27b384u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27b388:
    // 0x27b388: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27b388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27b38c:
    // 0x27b38c: 0x2178821  addu        $s1, $s0, $s7
    ctx->pc = 0x27b38cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_27b390:
    // 0x27b390: 0xc0efbe8  jal         func_3BEFA0
label_27b394:
    if (ctx->pc == 0x27B394u) {
        ctx->pc = 0x27B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B390u;
        // 0x27b394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B398u;
        goto label_27b398;
    }
    ctx->pc = 0x27B390u;
    SET_GPR_U32(ctx, 31, 0x27B398u);
    ctx->pc = 0x27B394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B390u;
    // 0x27b394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27B390u, 0x27B398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B398u;
label_27b398:
    // 0x27b398: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27b398u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_27b39c:
    // 0x27b39c: 0x8fa50968  lw          $a1, 0x968($sp)
    ctx->pc = 0x27b39cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2408)));
label_27b3a0:
    // 0x27b3a0: 0xc0efae1  jal         func_3BEB84
label_27b3a4:
    if (ctx->pc == 0x27B3A4u) {
        ctx->pc = 0x27B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B3A0u;
        // 0x27b3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B3A8u;
        goto label_27b3a8;
    }
    ctx->pc = 0x27B3A0u;
    SET_GPR_U32(ctx, 31, 0x27B3A8u);
    ctx->pc = 0x27B3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B3A0u;
    // 0x27b3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x27B3A0u, 0x27B3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B3A8u;
label_27b3a8:
    // 0x27b3a8: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27b3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27b3ac:
    // 0x27b3ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27b3acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b3b0:
    // 0x27b3b0: 0xc0ef256  jal         func_3BC958
label_27b3b4:
    if (ctx->pc == 0x27B3B4u) {
        ctx->pc = 0x27B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B3B0u;
        // 0x27b3b4: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B3B8u;
        goto label_27b3b8;
    }
    ctx->pc = 0x27B3B0u;
    SET_GPR_U32(ctx, 31, 0x27B3B8u);
    ctx->pc = 0x27B3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B3B0u;
    // 0x27b3b4: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC958u, 0x27B3B0u, 0x27B3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B3B8u;
label_27b3b8:
    // 0x27b3b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27b3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b3bc:
    // 0x27b3bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27b3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27b3c0:
    // 0x27b3c0: 0xc0ef0b2  jal         func_3BC2C8
label_27b3c4:
    if (ctx->pc == 0x27B3C4u) {
        ctx->pc = 0x27B3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B3C0u;
        // 0x27b3c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B3C8u;
        goto label_27b3c8;
    }
    ctx->pc = 0x27B3C0u;
    SET_GPR_U32(ctx, 31, 0x27B3C8u);
    ctx->pc = 0x27B3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B3C0u;
    // 0x27b3c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27B3C0u, 0x27B3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B3C8u;
label_27b3c8:
    // 0x27b3c8: 0x27a30521  addiu       $v1, $sp, 0x521
    ctx->pc = 0x27b3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1313));
label_27b3cc:
    // 0x27b3cc: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27b3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27b3d0:
    // 0x27b3d0: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x27b3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_27b3d4:
    // 0x27b3d4: 0x8ec5006c  lw          $a1, 0x6C($s6)
    ctx->pc = 0x27b3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
label_27b3d8:
    // 0x27b3d8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x27b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_27b3dc:
    // 0x27b3dc: 0x244a9508  addiu       $t2, $v0, -0x6AF8
    ctx->pc = 0x27b3dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939912));
label_27b3e0:
    // 0x27b3e0: 0x69470007  ldl         $a3, 0x7($t2)
    ctx->pc = 0x27b3e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_27b3e4:
    // 0x27b3e4: 0x6d470000  ldr         $a3, 0x0($t2)
    ctx->pc = 0x27b3e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_27b3e8:
    // 0x27b3e8: 0x81480008  lb          $t0, 0x8($t2)
    ctx->pc = 0x27b3e8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 8)));
label_27b3ec:
    // 0x27b3ec: 0xb0670007  sdl         $a3, 0x7($v1)
    ctx->pc = 0x27b3ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b3f0:
    // 0x27b3f0: 0xb4670000  sdr         $a3, 0x0($v1)
    ctx->pc = 0x27b3f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b3f4:
    // 0x27b3f4: 0xa0680008  sb          $t0, 0x8($v1)
    ctx->pc = 0x27b3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 8));
label_27b3f8:
    // 0x27b3f8: 0xc0ef256  jal         func_3BC958
label_27b3fc:
    if (ctx->pc == 0x27B3FCu) {
        ctx->pc = 0x27B3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B3F8u;
        // 0x27b3fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B400u;
        goto label_27b400;
    }
    ctx->pc = 0x27B3F8u;
    SET_GPR_U32(ctx, 31, 0x27B400u);
    ctx->pc = 0x27B3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B3F8u;
    // 0x27b3fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC958u, 0x27B3F8u, 0x27B400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B400u;
label_27b400:
    // 0x27b400: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27b400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b404:
    // 0x27b404: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27b404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b408:
    // 0x27b408: 0xc0ef0b2  jal         func_3BC2C8
label_27b40c:
    if (ctx->pc == 0x27B40Cu) {
        ctx->pc = 0x27B40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B408u;
        // 0x27b40c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B410u;
        goto label_27b410;
    }
    ctx->pc = 0x27B408u;
    SET_GPR_U32(ctx, 31, 0x27B410u);
    ctx->pc = 0x27B40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B408u;
    // 0x27b40c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27B408u, 0x27B410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B410u;
label_27b410:
    // 0x27b410: 0x8fa50480  lw          $a1, 0x480($sp)
    ctx->pc = 0x27b410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1152)));
label_27b414:
    // 0x27b414: 0xc0efbe8  jal         func_3BEFA0
label_27b418:
    if (ctx->pc == 0x27B418u) {
        ctx->pc = 0x27B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B414u;
        // 0x27b418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B41Cu;
        goto label_27b41c;
    }
    ctx->pc = 0x27B414u;
    SET_GPR_U32(ctx, 31, 0x27B41Cu);
    ctx->pc = 0x27B418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B414u;
    // 0x27b418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27B414u, 0x27B41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B41Cu;
label_27b41c:
    // 0x27b41c: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27b41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27b420:
    // 0x27b420: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27b420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b424:
    // 0x27b424: 0xc0ef256  jal         func_3BC958
label_27b428:
    if (ctx->pc == 0x27B428u) {
        ctx->pc = 0x27B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B424u;
        // 0x27b428: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B42Cu;
        goto label_27b42c;
    }
    ctx->pc = 0x27B424u;
    SET_GPR_U32(ctx, 31, 0x27B42Cu);
    ctx->pc = 0x27B428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B424u;
    // 0x27b428: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC958u, 0x27B424u, 0x27B42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B42Cu;
label_27b42c:
    // 0x27b42c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27b42cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b430:
    // 0x27b430: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27b430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b434:
    // 0x27b434: 0xc0ef0b2  jal         func_3BC2C8
label_27b438:
    if (ctx->pc == 0x27B438u) {
        ctx->pc = 0x27B438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B434u;
        // 0x27b438: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B43Cu;
        goto label_27b43c;
    }
    ctx->pc = 0x27B434u;
    SET_GPR_U32(ctx, 31, 0x27B43Cu);
    ctx->pc = 0x27B438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B434u;
    // 0x27b438: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27B434u, 0x27B43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B43Cu;
label_27b43c:
    // 0x27b43c: 0x8fa50484  lw          $a1, 0x484($sp)
    ctx->pc = 0x27b43cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1156)));
label_27b440:
    // 0x27b440: 0xc0efbe8  jal         func_3BEFA0
label_27b444:
    if (ctx->pc == 0x27B444u) {
        ctx->pc = 0x27B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B440u;
        // 0x27b444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B448u;
        goto label_27b448;
    }
    ctx->pc = 0x27B440u;
    SET_GPR_U32(ctx, 31, 0x27B448u);
    ctx->pc = 0x27B444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B440u;
    // 0x27b444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27B440u, 0x27B448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B448u;
label_27b448:
    // 0x27b448: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27b448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27b44c:
    // 0x27b44c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27b44cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b450:
    // 0x27b450: 0xc0ef256  jal         func_3BC958
label_27b454:
    if (ctx->pc == 0x27B454u) {
        ctx->pc = 0x27B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B450u;
        // 0x27b454: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B458u;
        goto label_27b458;
    }
    ctx->pc = 0x27B450u;
    SET_GPR_U32(ctx, 31, 0x27B458u);
    ctx->pc = 0x27B454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B450u;
    // 0x27b454: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC958u, 0x27B450u, 0x27B458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B458u;
label_27b458:
    // 0x27b458: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27b458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b45c:
    // 0x27b45c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27b45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b460:
    // 0x27b460: 0xc0ef0b2  jal         func_3BC2C8
label_27b464:
    if (ctx->pc == 0x27B464u) {
        ctx->pc = 0x27B464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B460u;
        // 0x27b464: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B468u;
        goto label_27b468;
    }
    ctx->pc = 0x27B460u;
    SET_GPR_U32(ctx, 31, 0x27B468u);
    ctx->pc = 0x27B464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B460u;
    // 0x27b464: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27B460u, 0x27B468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B468u;
label_27b468:
    // 0x27b468: 0x8fa50488  lw          $a1, 0x488($sp)
    ctx->pc = 0x27b468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1160)));
label_27b46c:
    // 0x27b46c: 0xc0efbe8  jal         func_3BEFA0
label_27b470:
    if (ctx->pc == 0x27B470u) {
        ctx->pc = 0x27B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B46Cu;
        // 0x27b470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B474u;
        goto label_27b474;
    }
    ctx->pc = 0x27B46Cu;
    SET_GPR_U32(ctx, 31, 0x27B474u);
    ctx->pc = 0x27B470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B46Cu;
    // 0x27b470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27B46Cu, 0x27B474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B474u;
label_27b474:
    // 0x27b474: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27b474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27b478:
    // 0x27b478: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27b478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b47c:
    // 0x27b47c: 0xc0ef256  jal         func_3BC958
label_27b480:
    if (ctx->pc == 0x27B480u) {
        ctx->pc = 0x27B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B47Cu;
        // 0x27b480: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B484u;
        goto label_27b484;
    }
    ctx->pc = 0x27B47Cu;
    SET_GPR_U32(ctx, 31, 0x27B484u);
    ctx->pc = 0x27B480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B47Cu;
    // 0x27b480: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC958u, 0x27B47Cu, 0x27B484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B484u;
label_27b484:
    // 0x27b484: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27b484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b488:
    // 0x27b488: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27b488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b48c:
    // 0x27b48c: 0xc0ef0b2  jal         func_3BC2C8
label_27b490:
    if (ctx->pc == 0x27B490u) {
        ctx->pc = 0x27B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B48Cu;
        // 0x27b490: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B494u;
        goto label_27b494;
    }
    ctx->pc = 0x27B48Cu;
    SET_GPR_U32(ctx, 31, 0x27B494u);
    ctx->pc = 0x27B490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B48Cu;
    // 0x27b490: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27B48Cu, 0x27B494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B494u;
label_27b494:
    // 0x27b494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27b494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27b498:
    // 0x27b498: 0xc0efbe8  jal         func_3BEFA0
label_27b49c:
    if (ctx->pc == 0x27B49Cu) {
        ctx->pc = 0x27B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B498u;
        // 0x27b49c: 0x26c50544  addiu       $a1, $s6, 0x544 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1348));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B4A0u;
        goto label_27b4a0;
    }
    ctx->pc = 0x27B498u;
    SET_GPR_U32(ctx, 31, 0x27B4A0u);
    ctx->pc = 0x27B49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B498u;
    // 0x27b49c: 0x26c50544  addiu       $a1, $s6, 0x544 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27B498u, 0x27B4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B4A0u;
label_27b4a0:
    // 0x27b4a0: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27b4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27b4a4:
    // 0x27b4a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27b4a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b4a8:
    // 0x27b4a8: 0xc0ef256  jal         func_3BC958
label_27b4ac:
    if (ctx->pc == 0x27B4ACu) {
        ctx->pc = 0x27B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B4A8u;
        // 0x27b4ac: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B4B0u;
        goto label_27b4b0;
    }
    ctx->pc = 0x27B4A8u;
    SET_GPR_U32(ctx, 31, 0x27B4B0u);
    ctx->pc = 0x27B4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B4A8u;
    // 0x27b4ac: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC958u, 0x27B4A8u, 0x27B4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B4B0u;
label_27b4b0:
    // 0x27b4b0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27b4b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b4b4:
    // 0x27b4b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27b4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b4b8:
    // 0x27b4b8: 0xc0ef0b2  jal         func_3BC2C8
label_27b4bc:
    if (ctx->pc == 0x27B4BCu) {
        ctx->pc = 0x27B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B4B8u;
        // 0x27b4bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B4C0u;
        goto label_27b4c0;
    }
    ctx->pc = 0x27B4B8u;
    SET_GPR_U32(ctx, 31, 0x27B4C0u);
    ctx->pc = 0x27B4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B4B8u;
    // 0x27b4bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27B4B8u, 0x27B4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B4C0u;
label_27b4c0:
    // 0x27b4c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27b4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27b4c4:
    // 0x27b4c4: 0xc0efbe8  jal         func_3BEFA0
label_27b4c8:
    if (ctx->pc == 0x27B4C8u) {
        ctx->pc = 0x27B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B4C4u;
        // 0x27b4c8: 0x26c50564  addiu       $a1, $s6, 0x564 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1380));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B4CCu;
        goto label_27b4cc;
    }
    ctx->pc = 0x27B4C4u;
    SET_GPR_U32(ctx, 31, 0x27B4CCu);
    ctx->pc = 0x27B4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B4C4u;
    // 0x27b4c8: 0x26c50564  addiu       $a1, $s6, 0x564 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1380));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27B4C4u, 0x27B4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B4CCu;
label_27b4cc:
    // 0x27b4cc: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27b4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27b4d0:
    // 0x27b4d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27b4d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b4d4:
    // 0x27b4d4: 0xc0ef256  jal         func_3BC958
label_27b4d8:
    if (ctx->pc == 0x27B4D8u) {
        ctx->pc = 0x27B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B4D4u;
        // 0x27b4d8: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B4DCu;
        goto label_27b4dc;
    }
    ctx->pc = 0x27B4D4u;
    SET_GPR_U32(ctx, 31, 0x27B4DCu);
    ctx->pc = 0x27B4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B4D4u;
    // 0x27b4d8: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC958u, 0x27B4D4u, 0x27B4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B4DCu;
label_27b4dc:
    // 0x27b4dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27b4dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b4e0:
    // 0x27b4e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27b4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b4e4:
    // 0x27b4e4: 0xc0ef0b2  jal         func_3BC2C8
label_27b4e8:
    if (ctx->pc == 0x27B4E8u) {
        ctx->pc = 0x27B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B4E4u;
        // 0x27b4e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B4ECu;
        goto label_27b4ec;
    }
    ctx->pc = 0x27B4E4u;
    SET_GPR_U32(ctx, 31, 0x27B4ECu);
    ctx->pc = 0x27B4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B4E4u;
    // 0x27b4e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27B4E4u, 0x27B4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B4ECu;
label_27b4ec:
    // 0x27b4ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27b4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27b4f0:
    // 0x27b4f0: 0xc0efbe8  jal         func_3BEFA0
label_27b4f4:
    if (ctx->pc == 0x27B4F4u) {
        ctx->pc = 0x27B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B4F0u;
        // 0x27b4f4: 0x26c50584  addiu       $a1, $s6, 0x584 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1412));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B4F8u;
        goto label_27b4f8;
    }
    ctx->pc = 0x27B4F0u;
    SET_GPR_U32(ctx, 31, 0x27B4F8u);
    ctx->pc = 0x27B4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B4F0u;
    // 0x27b4f4: 0x26c50584  addiu       $a1, $s6, 0x584 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1412));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27B4F0u, 0x27B4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B4F8u;
label_27b4f8:
    // 0x27b4f8: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27b4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27b4fc:
    // 0x27b4fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27b4fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b500:
    // 0x27b500: 0xc0ef256  jal         func_3BC958
label_27b504:
    if (ctx->pc == 0x27B504u) {
        ctx->pc = 0x27B504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B500u;
        // 0x27b504: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B508u;
        goto label_27b508;
    }
    ctx->pc = 0x27B500u;
    SET_GPR_U32(ctx, 31, 0x27B508u);
    ctx->pc = 0x27B504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B500u;
    // 0x27b504: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC958u, 0x27B500u, 0x27B508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B508u;
label_27b508:
    // 0x27b508: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27b508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b50c:
    // 0x27b50c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27b50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b510:
    // 0x27b510: 0xc0ef0b2  jal         func_3BC2C8
label_27b514:
    if (ctx->pc == 0x27B514u) {
        ctx->pc = 0x27B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B510u;
        // 0x27b514: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B518u;
        goto label_27b518;
    }
    ctx->pc = 0x27B510u;
    SET_GPR_U32(ctx, 31, 0x27B518u);
    ctx->pc = 0x27B514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B510u;
    // 0x27b514: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27B510u, 0x27B518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B518u;
label_27b518:
    // 0x27b518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27b518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27b51c:
    // 0x27b51c: 0xc0efbe8  jal         func_3BEFA0
label_27b520:
    if (ctx->pc == 0x27B520u) {
        ctx->pc = 0x27B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B51Cu;
        // 0x27b520: 0x26c505a4  addiu       $a1, $s6, 0x5A4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1444));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B524u;
        goto label_27b524;
    }
    ctx->pc = 0x27B51Cu;
    SET_GPR_U32(ctx, 31, 0x27B524u);
    ctx->pc = 0x27B520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B51Cu;
    // 0x27b520: 0x26c505a4  addiu       $a1, $s6, 0x5A4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1444));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27B51Cu, 0x27B524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B524u;
label_27b524:
    // 0x27b524: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27b524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27b528:
    // 0x27b528: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27b528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b52c:
    // 0x27b52c: 0xc0ef256  jal         func_3BC958
label_27b530:
    if (ctx->pc == 0x27B530u) {
        ctx->pc = 0x27B530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B52Cu;
        // 0x27b530: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B534u;
        goto label_27b534;
    }
    ctx->pc = 0x27B52Cu;
    SET_GPR_U32(ctx, 31, 0x27B534u);
    ctx->pc = 0x27B530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B52Cu;
    // 0x27b530: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC958u, 0x27B52Cu, 0x27B534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B534u;
label_27b534:
    // 0x27b534: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27b534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b538:
    // 0x27b538: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27b538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b53c:
    // 0x27b53c: 0xc0ef0b2  jal         func_3BC2C8
label_27b540:
    if (ctx->pc == 0x27B540u) {
        ctx->pc = 0x27B540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B53Cu;
        // 0x27b540: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B544u;
        goto label_27b544;
    }
    ctx->pc = 0x27B53Cu;
    SET_GPR_U32(ctx, 31, 0x27B544u);
    ctx->pc = 0x27B540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B53Cu;
    // 0x27b540: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27B53Cu, 0x27B544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B544u;
label_27b544:
    // 0x27b544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b548:
    // 0x27b548: 0xc0efbe8  jal         func_3BEFA0
label_27b54c:
    if (ctx->pc == 0x27B54Cu) {
        ctx->pc = 0x27B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B548u;
        // 0x27b54c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B550u;
        goto label_27b550;
    }
    ctx->pc = 0x27B548u;
    SET_GPR_U32(ctx, 31, 0x27B550u);
    ctx->pc = 0x27B54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B548u;
    // 0x27b54c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27B548u, 0x27B550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B550u;
label_27b550:
    // 0x27b550: 0x8fa50968  lw          $a1, 0x968($sp)
    ctx->pc = 0x27b550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2408)));
label_27b554:
    // 0x27b554: 0xc0efae1  jal         func_3BEB84
label_27b558:
    if (ctx->pc == 0x27B558u) {
        ctx->pc = 0x27B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B554u;
        // 0x27b558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B55Cu;
        goto label_27b55c;
    }
    ctx->pc = 0x27B554u;
    SET_GPR_U32(ctx, 31, 0x27B55Cu);
    ctx->pc = 0x27B558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B554u;
    // 0x27b558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x27B554u, 0x27B55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B55Cu;
label_27b55c:
    // 0x27b55c: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27b55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27b560:
    // 0x27b560: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27b560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b564:
    // 0x27b564: 0xc0ef256  jal         func_3BC958
label_27b568:
    if (ctx->pc == 0x27B568u) {
        ctx->pc = 0x27B568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B564u;
        // 0x27b568: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B56Cu;
        goto label_27b56c;
    }
    ctx->pc = 0x27B564u;
    SET_GPR_U32(ctx, 31, 0x27B56Cu);
    ctx->pc = 0x27B568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B564u;
    // 0x27b568: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC958u, 0x27B564u, 0x27B56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B56Cu;
label_27b56c:
    // 0x27b56c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27b56cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b570:
    // 0x27b570: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27b570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b574:
    // 0x27b574: 0xc0ef0b2  jal         func_3BC2C8
label_27b578:
    if (ctx->pc == 0x27B578u) {
        ctx->pc = 0x27B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B574u;
        // 0x27b578: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B57Cu;
        goto label_27b57c;
    }
    ctx->pc = 0x27B574u;
    SET_GPR_U32(ctx, 31, 0x27B57Cu);
    ctx->pc = 0x27B578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B574u;
    // 0x27b578: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27B574u, 0x27B57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B57Cu;
label_27b57c:
    // 0x27b57c: 0x27b004e0  addiu       $s0, $sp, 0x4E0
    ctx->pc = 0x27b57cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_27b580:
    // 0x27b580: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27b580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27b584:
    // 0x27b584: 0xc0efbe8  jal         func_3BEFA0
label_27b588:
    if (ctx->pc == 0x27B588u) {
        ctx->pc = 0x27B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B584u;
        // 0x27b588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B58Cu;
        goto label_27b58c;
    }
    ctx->pc = 0x27B584u;
    SET_GPR_U32(ctx, 31, 0x27B58Cu);
    ctx->pc = 0x27B588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B584u;
    // 0x27b588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27B584u, 0x27B58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B58Cu;
label_27b58c:
    // 0x27b58c: 0x8fa50968  lw          $a1, 0x968($sp)
    ctx->pc = 0x27b58cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2408)));
label_27b590:
    // 0x27b590: 0xc0efae1  jal         func_3BEB84
label_27b594:
    if (ctx->pc == 0x27B594u) {
        ctx->pc = 0x27B594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B590u;
        // 0x27b594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B598u;
        goto label_27b598;
    }
    ctx->pc = 0x27B590u;
    SET_GPR_U32(ctx, 31, 0x27B598u);
    ctx->pc = 0x27B594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B590u;
    // 0x27b594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x27B590u, 0x27B598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B598u;
label_27b598:
    // 0x27b598: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x27b598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_27b59c:
    // 0x27b59c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27b59cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b5a0:
    // 0x27b5a0: 0x24a59518  addiu       $a1, $a1, -0x6AE8
    ctx->pc = 0x27b5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939928));
label_27b5a4:
    // 0x27b5a4: 0xc0efefa  jal         func_3BFBE8
label_27b5a8:
    if (ctx->pc == 0x27B5A8u) {
        ctx->pc = 0x27B5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B5A4u;
        // 0x27b5a8: 0x26c405e4  addiu       $a0, $s6, 0x5E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1508));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B5ACu;
        goto label_27b5ac;
    }
    ctx->pc = 0x27B5A4u;
    SET_GPR_U32(ctx, 31, 0x27B5ACu);
    ctx->pc = 0x27B5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B5A4u;
    // 0x27b5a8: 0x26c405e4  addiu       $a0, $s6, 0x5E4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1508));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x27B5A4u, 0x27B5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B5ACu;
label_27b5ac:
    // 0x27b5ac: 0xc0efc2e  jal         func_3BF0B8
label_27b5b0:
    if (ctx->pc == 0x27B5B0u) {
        ctx->pc = 0x27B5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B5ACu;
        // 0x27b5b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B5B4u;
        goto label_27b5b4;
    }
    ctx->pc = 0x27B5ACu;
    SET_GPR_U32(ctx, 31, 0x27B5B4u);
    ctx->pc = 0x27B5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B5ACu;
    // 0x27b5b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x27B5ACu, 0x27B5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B5B4u;
label_27b5b4:
    // 0x27b5b4: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27b5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27b5b8:
    // 0x27b5b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27b5b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b5bc:
    // 0x27b5bc: 0x8ec5006c  lw          $a1, 0x6C($s6)
    ctx->pc = 0x27b5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
label_27b5c0:
    // 0x27b5c0: 0xc0eefa4  jal         func_3BBE90
label_27b5c4:
    if (ctx->pc == 0x27B5C4u) {
        ctx->pc = 0x27B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B5C0u;
        // 0x27b5c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B5C8u;
        goto label_27b5c8;
    }
    ctx->pc = 0x27B5C0u;
    SET_GPR_U32(ctx, 31, 0x27B5C8u);
    ctx->pc = 0x27B5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B5C0u;
    // 0x27b5c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBE90u, 0x27B5C0u, 0x27B5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B5C8u;
label_27b5c8:
    // 0x27b5c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27b5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b5cc:
    // 0x27b5cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27b5ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27b5d0:
    // 0x27b5d0: 0xc0ef0b2  jal         func_3BC2C8
label_27b5d4:
    if (ctx->pc == 0x27B5D4u) {
        ctx->pc = 0x27B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B5D0u;
        // 0x27b5d4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B5D8u;
        goto label_27b5d8;
    }
    ctx->pc = 0x27B5D0u;
    SET_GPR_U32(ctx, 31, 0x27B5D8u);
    ctx->pc = 0x27B5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B5D0u;
    // 0x27b5d4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27B5D0u, 0x27B5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B5D8u;
label_27b5d8:
    // 0x27b5d8: 0x8ec30090  lw          $v1, 0x90($s6)
    ctx->pc = 0x27b5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
label_27b5dc:
    // 0x27b5dc: 0x4600243  bltz        $v1, . + 4 + (0x243 << 2)
label_27b5e0:
    if (ctx->pc == 0x27B5E0u) {
        ctx->pc = 0x27B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B5DCu;
        // 0x27b5e0: 0x23d8821  addu        $s1, $s1, $sp (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B5E4u;
        goto label_27b5e4;
    }
    ctx->pc = 0x27B5DCu;
    {
        const bool branch_taken_0x27b5dc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x27B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B5DCu;
        // 0x27b5e0: 0x23d8821  addu        $s1, $s1, $sp (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b5dc) {
            ctx->pc = 0x27BEECu;
            goto label_27beec;
        }
    }
    ctx->pc = 0x27B5E4u;
label_27b5e4:
    // 0x27b5e4: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27b5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27b5e8:
    // 0x27b5e8: 0x8ec5006c  lw          $a1, 0x6C($s6)
    ctx->pc = 0x27b5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
label_27b5ec:
    // 0x27b5ec: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x27b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_27b5f0:
    // 0x27b5f0: 0x263004e0  addiu       $s0, $s1, 0x4E0
    ctx->pc = 0x27b5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1248));
label_27b5f4:
    // 0x27b5f4: 0x27a604e0  addiu       $a2, $sp, 0x4E0
    ctx->pc = 0x27b5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_27b5f8:
    // 0x27b5f8: 0x244a9538  addiu       $t2, $v0, -0x6AC8
    ctx->pc = 0x27b5f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939960));
label_27b5fc:
    // 0x27b5fc: 0x69430007  ldl         $v1, 0x7($t2)
    ctx->pc = 0x27b5fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_27b600:
    // 0x27b600: 0x6d430000  ldr         $v1, 0x0($t2)
    ctx->pc = 0x27b600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_27b604:
    // 0x27b604: 0x81480008  lb          $t0, 0x8($t2)
    ctx->pc = 0x27b604u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 8)));
label_27b608:
    // 0x27b608: 0x81490009  lb          $t1, 0x9($t2)
    ctx->pc = 0x27b608u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 9)));
label_27b60c:
    // 0x27b60c: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x27b60cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b610:
    // 0x27b610: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x27b610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b614:
    // 0x27b614: 0xa2080008  sb          $t0, 0x8($s0)
    ctx->pc = 0x27b614u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 8));
label_27b618:
    // 0x27b618: 0xa2090009  sb          $t1, 0x9($s0)
    ctx->pc = 0x27b618u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 9));
label_27b61c:
    // 0x27b61c: 0xc0eef5a  jal         func_3BBD68
label_27b620:
    if (ctx->pc == 0x27B620u) {
        ctx->pc = 0x27B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B61Cu;
        // 0x27b620: 0x24070203  addiu       $a3, $zero, 0x203 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B624u;
        goto label_27b624;
    }
    ctx->pc = 0x27B61Cu;
    SET_GPR_U32(ctx, 31, 0x27B624u);
    ctx->pc = 0x27B620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B61Cu;
    // 0x27b620: 0x24070203  addiu       $a3, $zero, 0x203 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBD68u, 0x27B61Cu, 0x27B624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B624u;
label_27b624:
    // 0x27b624: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27b624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b628:
    // 0x27b628: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x27b628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27b62c:
    // 0x27b62c: 0xc0ef0b2  jal         func_3BC2C8
label_27b630:
    if (ctx->pc == 0x27B630u) {
        ctx->pc = 0x27B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B62Cu;
        // 0x27b630: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B634u;
        goto label_27b634;
    }
    ctx->pc = 0x27B62Cu;
    SET_GPR_U32(ctx, 31, 0x27B634u);
    ctx->pc = 0x27B630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B62Cu;
    // 0x27b630: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27B62Cu, 0x27B634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B634u;
label_27b634:
    // 0x27b634: 0x8ec30090  lw          $v1, 0x90($s6)
    ctx->pc = 0x27b634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
label_27b638:
    // 0x27b638: 0x460022c  bltz        $v1, . + 4 + (0x22C << 2)
label_27b63c:
    if (ctx->pc == 0x27B63Cu) {
        ctx->pc = 0x27B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B638u;
        // 0x27b63c: 0xaec30094  sw          $v1, 0x94($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B640u;
        goto label_27b640;
    }
    ctx->pc = 0x27B638u;
    {
        const bool branch_taken_0x27b638 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x27B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B638u;
        // 0x27b63c: 0xaec30094  sw          $v1, 0x94($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b638) {
            ctx->pc = 0x27BEECu;
            goto label_27beec;
        }
    }
    ctx->pc = 0x27B640u;
label_27b640:
    // 0x27b640: 0x27a20490  addiu       $v0, $sp, 0x490
    ctx->pc = 0x27b640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_27b644:
    // 0x27b644: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27b644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27b648:
    // 0x27b648: 0xafa2096c  sw          $v0, 0x96C($sp)
    ctx->pc = 0x27b648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2412), GPR_U32(ctx, 2));
label_27b64c:
    // 0x27b64c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b650:
    // 0x27b650: 0x240603c4  addiu       $a2, $zero, 0x3C4
    ctx->pc = 0x27b650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
label_27b654:
    // 0x27b654: 0xc0efab3  jal         func_3BEACC
label_27b658:
    if (ctx->pc == 0x27B658u) {
        ctx->pc = 0x27B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B654u;
        // 0x27b658: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B65Cu;
        goto label_27b65c;
    }
    ctx->pc = 0x27B654u;
    SET_GPR_U32(ctx, 31, 0x27B65Cu);
    ctx->pc = 0x27B658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B654u;
    // 0x27b658: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x27B654u, 0x27B65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B65Cu;
label_27b65c:
    // 0x27b65c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x27b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_27b660:
    // 0x27b660: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x27b660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_27b664:
    // 0x27b664: 0x24439548  addiu       $v1, $v0, -0x6AB8
    ctx->pc = 0x27b664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939976));
label_27b668:
    // 0x27b668: 0x8c449548  lw          $a0, -0x6AB8($v0)
    ctx->pc = 0x27b668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939976)));
label_27b66c:
    // 0x27b66c: 0x90670004  lbu         $a3, 0x4($v1)
    ctx->pc = 0x27b66cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_27b670:
    // 0x27b670: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x27b670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_27b674:
    // 0x27b674: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x27b674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_27b678:
    // 0x27b678: 0x24a59550  addiu       $a1, $a1, -0x6AB0
    ctx->pc = 0x27b678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939984));
label_27b67c:
    // 0x27b67c: 0xa3a70004  sb          $a3, 0x4($sp)
    ctx->pc = 0x27b67cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 7));
label_27b680:
    // 0x27b680: 0xc09f030  jal         func_27C0C0
label_27b684:
    if (ctx->pc == 0x27B684u) {
        ctx->pc = 0x27B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B680u;
        // 0x27b684: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B688u;
        goto label_27b688;
    }
    ctx->pc = 0x27B680u;
    SET_GPR_U32(ctx, 31, 0x27B688u);
    ctx->pc = 0x27B684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B680u;
    // 0x27b684: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C0C0u, 0x27B680u, 0x27B688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B688u;
label_27b688:
    // 0x27b688: 0x7ba60430  lq          $a2, 0x430($sp)
    ctx->pc = 0x27b688u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_27b68c:
    // 0x27b68c: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x27b68cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_27b690:
    // 0x27b690: 0x7bae03d0  lq          $t6, 0x3D0($sp)
    ctx->pc = 0x27b690u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 976)));
label_27b694:
    // 0x27b694: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x27b694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_27b698:
    // 0x27b698: 0x7bad03e0  lq          $t5, 0x3E0($sp)
    ctx->pc = 0x27b698u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 992)));
label_27b69c:
    // 0x27b69c: 0x27a40104  addiu       $a0, $sp, 0x104
    ctx->pc = 0x27b69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_27b6a0:
    // 0x27b6a0: 0x7bac03f0  lq          $t4, 0x3F0($sp)
    ctx->pc = 0x27b6a0u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
label_27b6a4:
    // 0x27b6a4: 0x7bab0400  lq          $t3, 0x400($sp)
    ctx->pc = 0x27b6a4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 1024)));
label_27b6a8:
    // 0x27b6a8: 0x7ba20410  lq          $v0, 0x410($sp)
    ctx->pc = 0x27b6a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_27b6ac:
    // 0x27b6ac: 0x7ba30420  lq          $v1, 0x420($sp)
    ctx->pc = 0x27b6acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_27b6b0:
    // 0x27b6b0: 0x7ba70440  lq          $a3, 0x440($sp)
    ctx->pc = 0x27b6b0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_27b6b4:
    // 0x27b6b4: 0x7ba80450  lq          $t0, 0x450($sp)
    ctx->pc = 0x27b6b4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_27b6b8:
    // 0x27b6b8: 0x7ba90460  lq          $t1, 0x460($sp)
    ctx->pc = 0x27b6b8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_27b6bc:
    // 0x27b6bc: 0x7baa0470  lq          $t2, 0x470($sp)
    ctx->pc = 0x27b6bcu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_27b6c0:
    // 0x27b6c0: 0x8fa50480  lw          $a1, 0x480($sp)
    ctx->pc = 0x27b6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1152)));
label_27b6c4:
    // 0x27b6c4: 0x7fa60070  sq          $a2, 0x70($sp)
    ctx->pc = 0x27b6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
label_27b6c8:
    // 0x27b6c8: 0xafa00964  sw          $zero, 0x964($sp)
    ctx->pc = 0x27b6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2404), GPR_U32(ctx, 0));
label_27b6cc:
    // 0x27b6cc: 0xa7b00006  sh          $s0, 0x6($sp)
    ctx->pc = 0x27b6ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 16));
label_27b6d0:
    // 0x27b6d0: 0xafaf000c  sw          $t7, 0xC($sp)
    ctx->pc = 0x27b6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 15));
label_27b6d4:
    // 0x27b6d4: 0x7fae0010  sq          $t6, 0x10($sp)
    ctx->pc = 0x27b6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 14));
label_27b6d8:
    // 0x27b6d8: 0x7fad0020  sq          $t5, 0x20($sp)
    ctx->pc = 0x27b6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 13));
label_27b6dc:
    // 0x27b6dc: 0x7fac0030  sq          $t4, 0x30($sp)
    ctx->pc = 0x27b6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
label_27b6e0:
    // 0x27b6e0: 0x7fab0040  sq          $t3, 0x40($sp)
    ctx->pc = 0x27b6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 11));
label_27b6e4:
    // 0x27b6e4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x27b6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_27b6e8:
    // 0x27b6e8: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x27b6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_27b6ec:
    // 0x27b6ec: 0x7fa70080  sq          $a3, 0x80($sp)
    ctx->pc = 0x27b6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 7));
label_27b6f0:
    // 0x27b6f0: 0x7fa80090  sq          $t0, 0x90($sp)
    ctx->pc = 0x27b6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 8));
label_27b6f4:
    // 0x27b6f4: 0x7fa900a0  sq          $t1, 0xA0($sp)
    ctx->pc = 0x27b6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 9));
label_27b6f8:
    // 0x27b6f8: 0xc0efbe8  jal         func_3BEFA0
label_27b6fc:
    if (ctx->pc == 0x27B6FCu) {
        ctx->pc = 0x27B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B6F8u;
        // 0x27b6fc: 0x7faa00b0  sq          $t2, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B700u;
        goto label_27b700;
    }
    ctx->pc = 0x27B6F8u;
    SET_GPR_U32(ctx, 31, 0x27B700u);
    ctx->pc = 0x27B6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B6F8u;
    // 0x27b6fc: 0x7faa00b0  sq          $t2, 0xB0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27B6F8u, 0x27B700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B700u;
label_27b700:
    // 0x27b700: 0x8fa50484  lw          $a1, 0x484($sp)
    ctx->pc = 0x27b700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1156)));
label_27b704:
    // 0x27b704: 0xc0efbe8  jal         func_3BEFA0
label_27b708:
    if (ctx->pc == 0x27B708u) {
        ctx->pc = 0x27B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B704u;
        // 0x27b708: 0x27a40144  addiu       $a0, $sp, 0x144 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B70Cu;
        goto label_27b70c;
    }
    ctx->pc = 0x27B704u;
    SET_GPR_U32(ctx, 31, 0x27B70Cu);
    ctx->pc = 0x27B708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B704u;
    // 0x27b708: 0x27a40144  addiu       $a0, $sp, 0x144 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27B704u, 0x27B70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B70Cu;
label_27b70c:
    // 0x27b70c: 0x8fa50488  lw          $a1, 0x488($sp)
    ctx->pc = 0x27b70cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1160)));
label_27b710:
    // 0x27b710: 0xc0efbe8  jal         func_3BEFA0
label_27b714:
    if (ctx->pc == 0x27B714u) {
        ctx->pc = 0x27B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B710u;
        // 0x27b714: 0x27a40184  addiu       $a0, $sp, 0x184 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B718u;
        goto label_27b718;
    }
    ctx->pc = 0x27B710u;
    SET_GPR_U32(ctx, 31, 0x27B718u);
    ctx->pc = 0x27B714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B710u;
    // 0x27b714: 0x27a40184  addiu       $a0, $sp, 0x184 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27B710u, 0x27B718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B718u;
label_27b718:
    // 0x27b718: 0x8ec40094  lw          $a0, 0x94($s6)
    ctx->pc = 0x27b718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
label_27b71c:
    // 0x27b71c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27b71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27b720:
    // 0x27b720: 0xc0ef054  jal         func_3BC150
label_27b724:
    if (ctx->pc == 0x27B724u) {
        ctx->pc = 0x27B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B720u;
        // 0x27b724: 0x240603c4  addiu       $a2, $zero, 0x3C4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B728u;
        goto label_27b728;
    }
    ctx->pc = 0x27B720u;
    SET_GPR_U32(ctx, 31, 0x27B728u);
    ctx->pc = 0x27B724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B720u;
    // 0x27b724: 0x240603c4  addiu       $a2, $zero, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC150u, 0x27B720u, 0x27B728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B728u;
label_27b728:
    // 0x27b728: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x27b728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27b72c:
    // 0x27b72c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x27b72cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_27b730:
    // 0x27b730: 0xc0ef0b2  jal         func_3BC2C8
label_27b734:
    if (ctx->pc == 0x27B734u) {
        ctx->pc = 0x27B734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B730u;
        // 0x27b734: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B738u;
        goto label_27b738;
    }
    ctx->pc = 0x27B730u;
    SET_GPR_U32(ctx, 31, 0x27B738u);
    ctx->pc = 0x27B734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B730u;
    // 0x27b734: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27B730u, 0x27B738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B738u;
label_27b738:
    // 0x27b738: 0xc0eefb2  jal         func_3BBEC8
label_27b73c:
    if (ctx->pc == 0x27B73Cu) {
        ctx->pc = 0x27B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B738u;
        // 0x27b73c: 0x8ec40094  lw          $a0, 0x94($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B740u;
        goto label_27b740;
    }
    ctx->pc = 0x27B738u;
    SET_GPR_U32(ctx, 31, 0x27B740u);
    ctx->pc = 0x27B73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B738u;
    // 0x27b73c: 0x8ec40094  lw          $a0, 0x94($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBEC8u, 0x27B738u, 0x27B740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B740u;
label_27b740:
    // 0x27b740: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27b740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b744:
    // 0x27b744: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x27b744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27b748:
    // 0x27b748: 0xc0ef0b2  jal         func_3BC2C8
label_27b74c:
    if (ctx->pc == 0x27B74Cu) {
        ctx->pc = 0x27B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B748u;
        // 0x27b74c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B750u;
        goto label_27b750;
    }
    ctx->pc = 0x27B748u;
    SET_GPR_U32(ctx, 31, 0x27B750u);
    ctx->pc = 0x27B74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B748u;
    // 0x27b74c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27B748u, 0x27B750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B750u;
label_27b750:
    // 0x27b750: 0x10000037  b           . + 4 + (0x37 << 2)
label_27b754:
    if (ctx->pc == 0x27B754u) {
        ctx->pc = 0x27B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B750u;
        // 0x27b754: 0x27b30480  addiu       $s3, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B758u;
        goto label_27b758;
    }
    ctx->pc = 0x27B750u;
    {
        const bool branch_taken_0x27b750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B750u;
        // 0x27b754: 0x27b30480  addiu       $s3, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b750) {
            ctx->pc = 0x27B830u;
            goto label_27b830;
        }
    }
    ctx->pc = 0x27B758u;
label_27b758:
    // 0x27b758: 0x26e40001  addiu       $a0, $s7, 0x1
    ctx->pc = 0x27b758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_27b75c:
    // 0x27b75c: 0xa2e20000  sb          $v0, 0x0($s7)
    ctx->pc = 0x27b75cu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 2));
label_27b760:
    // 0x27b760: 0xc0efbe8  jal         func_3BEFA0
label_27b764:
    if (ctx->pc == 0x27B764u) {
        ctx->pc = 0x27B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B760u;
        // 0x27b764: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B768u;
        goto label_27b768;
    }
    ctx->pc = 0x27B760u;
    SET_GPR_U32(ctx, 31, 0x27B768u);
    ctx->pc = 0x27B764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B760u;
    // 0x27b764: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27B760u, 0x27B768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B768u;
label_27b768:
    // 0x27b768: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27b768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27b76c:
    // 0x27b76c: 0x27a604e0  addiu       $a2, $sp, 0x4E0
    ctx->pc = 0x27b76cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_27b770:
    // 0x27b770: 0x8ec5006c  lw          $a1, 0x6C($s6)
    ctx->pc = 0x27b770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
label_27b774:
    // 0x27b774: 0xc0eef5a  jal         func_3BBD68
label_27b778:
    if (ctx->pc == 0x27B778u) {
        ctx->pc = 0x27B778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B774u;
        // 0x27b778: 0x24070203  addiu       $a3, $zero, 0x203 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B77Cu;
        goto label_27b77c;
    }
    ctx->pc = 0x27B774u;
    SET_GPR_U32(ctx, 31, 0x27B77Cu);
    ctx->pc = 0x27B778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B774u;
    // 0x27b778: 0x24070203  addiu       $a3, $zero, 0x203 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBD68u, 0x27B774u, 0x27B77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B77Cu;
label_27b77c:
    // 0x27b77c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27b77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b780:
    // 0x27b780: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x27b780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27b784:
    // 0x27b784: 0xc0ef0b2  jal         func_3BC2C8
label_27b788:
    if (ctx->pc == 0x27B788u) {
        ctx->pc = 0x27B788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B784u;
        // 0x27b788: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B78Cu;
        goto label_27b78c;
    }
    ctx->pc = 0x27B784u;
    SET_GPR_U32(ctx, 31, 0x27B78Cu);
    ctx->pc = 0x27B788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B784u;
    // 0x27b788: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27B784u, 0x27B78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B78Cu;
label_27b78c:
    // 0x27b78c: 0x8ec20090  lw          $v0, 0x90($s6)
    ctx->pc = 0x27b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
label_27b790:
    // 0x27b790: 0x4400036  bltz        $v0, . + 4 + (0x36 << 2)
label_27b794:
    if (ctx->pc == 0x27B794u) {
        ctx->pc = 0x27B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B790u;
        // 0x27b794: 0x27a404e0  addiu       $a0, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B798u;
        goto label_27b798;
    }
    ctx->pc = 0x27B790u;
    {
        const bool branch_taken_0x27b790 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B790u;
        // 0x27b794: 0x27a404e0  addiu       $a0, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b790) {
            ctx->pc = 0x27B86Cu;
            goto label_27b86c;
        }
    }
    ctx->pc = 0x27B798u;
label_27b798:
    // 0x27b798: 0xaec20094  sw          $v0, 0x94($s6)
    ctx->pc = 0x27b798u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 148), GPR_U32(ctx, 2));
label_27b79c:
    // 0x27b79c: 0x24110400  addiu       $s1, $zero, 0x400
    ctx->pc = 0x27b79cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_27b7a0:
    // 0x27b7a0: 0x24140400  addiu       $s4, $zero, 0x400
    ctx->pc = 0x27b7a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_27b7a4:
    // 0x27b7a4: 0x27b00560  addiu       $s0, $sp, 0x560
    ctx->pc = 0x27b7a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
label_27b7a8:
    // 0x27b7a8: 0x16340010  bne         $s1, $s4, . + 4 + (0x10 << 2)
label_27b7ac:
    if (ctx->pc == 0x27B7ACu) {
        ctx->pc = 0x27B7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B7A8u;
        // 0x27b7ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B7B0u;
        goto label_27b7b0;
    }
    ctx->pc = 0x27B7A8u;
    {
        const bool branch_taken_0x27b7a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x27B7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B7A8u;
        // 0x27b7ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b7a8) {
            ctx->pc = 0x27B7ECu;
            goto label_27b7ec;
        }
    }
    ctx->pc = 0x27B7B0u;
label_27b7b0:
    // 0x27b7b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27b7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b7b4:
    // 0x27b7b4: 0xc0f3a04  jal         func_3CE810
label_27b7b8:
    if (ctx->pc == 0x27B7B8u) {
        ctx->pc = 0x27B7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B7B4u;
        // 0x27b7b8: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B7BCu;
        goto label_27b7bc;
    }
    ctx->pc = 0x27B7B4u;
    SET_GPR_U32(ctx, 31, 0x27B7BCu);
    ctx->pc = 0x27B7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B7B4u;
    // 0x27b7b8: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE810u, 0x27B7B4u, 0x27B7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B7BCu;
label_27b7bc:
    // 0x27b7bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27b7bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27b7c0:
    // 0x27b7c0: 0x8ec40094  lw          $a0, 0x94($s6)
    ctx->pc = 0x27b7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
label_27b7c4:
    // 0x27b7c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27b7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b7c8:
    // 0x27b7c8: 0xc0ef054  jal         func_3BC150
label_27b7cc:
    if (ctx->pc == 0x27B7CCu) {
        ctx->pc = 0x27B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B7C8u;
        // 0x27b7cc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B7D0u;
        goto label_27b7d0;
    }
    ctx->pc = 0x27B7C8u;
    SET_GPR_U32(ctx, 31, 0x27B7D0u);
    ctx->pc = 0x27B7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B7C8u;
    // 0x27b7cc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC150u, 0x27B7C8u, 0x27B7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B7D0u;
label_27b7d0:
    // 0x27b7d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27b7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b7d4:
    // 0x27b7d4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x27b7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27b7d8:
    // 0x27b7d8: 0xc0ef0b2  jal         func_3BC2C8
label_27b7dc:
    if (ctx->pc == 0x27B7DCu) {
        ctx->pc = 0x27B7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B7D8u;
        // 0x27b7dc: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B7E0u;
        goto label_27b7e0;
    }
    ctx->pc = 0x27B7D8u;
    SET_GPR_U32(ctx, 31, 0x27B7E0u);
    ctx->pc = 0x27B7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B7D8u;
    // 0x27b7dc: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27B7D8u, 0x27B7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B7E0u;
label_27b7e0:
    // 0x27b7e0: 0x8ec30090  lw          $v1, 0x90($s6)
    ctx->pc = 0x27b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
label_27b7e4:
    // 0x27b7e4: 0x461fff0  bgez        $v1, . + 4 + (-0x10 << 2)
label_27b7e8:
    if (ctx->pc == 0x27B7E8u) {
        ctx->pc = 0x27B7ECu;
        goto label_27b7ec;
    }
    ctx->pc = 0x27B7E4u;
    {
        const bool branch_taken_0x27b7e4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x27b7e4) {
            ctx->pc = 0x27B7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27b7a8;
        }
    }
    ctx->pc = 0x27B7ECu;
label_27b7ec:
    // 0x27b7ec: 0x8ec20090  lw          $v0, 0x90($s6)
    ctx->pc = 0x27b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
label_27b7f0:
    // 0x27b7f0: 0x440001e  bltz        $v0, . + 4 + (0x1E << 2)
label_27b7f4:
    if (ctx->pc == 0x27B7F4u) {
        ctx->pc = 0x27B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B7F0u;
        // 0x27b7f4: 0x27a404e0  addiu       $a0, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B7F8u;
        goto label_27b7f8;
    }
    ctx->pc = 0x27B7F0u;
    {
        const bool branch_taken_0x27b7f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B7F0u;
        // 0x27b7f4: 0x27a404e0  addiu       $a0, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b7f0) {
            ctx->pc = 0x27B86Cu;
            goto label_27b86c;
        }
    }
    ctx->pc = 0x27B7F8u;
label_27b7f8:
    // 0x27b7f8: 0xc0f3916  jal         func_3CE458
label_27b7fc:
    if (ctx->pc == 0x27B7FCu) {
        ctx->pc = 0x27B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B7F8u;
        // 0x27b7fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B800u;
        goto label_27b800;
    }
    ctx->pc = 0x27B7F8u;
    SET_GPR_U32(ctx, 31, 0x27B800u);
    ctx->pc = 0x27B7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B7F8u;
    // 0x27b7fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE458u, 0x27B7F8u, 0x27B800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B800u;
label_27b800:
    // 0x27b800: 0xc0eefb2  jal         func_3BBEC8
label_27b804:
    if (ctx->pc == 0x27B804u) {
        ctx->pc = 0x27B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B800u;
        // 0x27b804: 0x8ec40094  lw          $a0, 0x94($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B808u;
        goto label_27b808;
    }
    ctx->pc = 0x27B800u;
    SET_GPR_U32(ctx, 31, 0x27B808u);
    ctx->pc = 0x27B804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B800u;
    // 0x27b804: 0x8ec40094  lw          $a0, 0x94($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBEC8u, 0x27B800u, 0x27B808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B808u;
label_27b808:
    // 0x27b808: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27b808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b80c:
    // 0x27b80c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x27b80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27b810:
    // 0x27b810: 0xc0ef0b2  jal         func_3BC2C8
label_27b814:
    if (ctx->pc == 0x27B814u) {
        ctx->pc = 0x27B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B810u;
        // 0x27b814: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B818u;
        goto label_27b818;
    }
    ctx->pc = 0x27B810u;
    SET_GPR_U32(ctx, 31, 0x27B818u);
    ctx->pc = 0x27B814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B810u;
    // 0x27b814: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27B810u, 0x27B818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B818u;
label_27b818:
    // 0x27b818: 0x8ec30090  lw          $v1, 0x90($s6)
    ctx->pc = 0x27b818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
label_27b81c:
    // 0x27b81c: 0x4600012  bltz        $v1, . + 4 + (0x12 << 2)
label_27b820:
    if (ctx->pc == 0x27B820u) {
        ctx->pc = 0x27B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B81Cu;
        // 0x27b820: 0x8fa30964  lw          $v1, 0x964($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2404)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B824u;
        goto label_27b824;
    }
    ctx->pc = 0x27B81Cu;
    {
        const bool branch_taken_0x27b81c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x27B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B81Cu;
        // 0x27b820: 0x8fa30964  lw          $v1, 0x964($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b81c) {
            ctx->pc = 0x27B868u;
            goto label_27b868;
        }
    }
    ctx->pc = 0x27B824u;
label_27b824:
    // 0x27b824: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x27b824u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_27b828:
    // 0x27b828: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27b828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_27b82c:
    // 0x27b82c: 0xafa30964  sw          $v1, 0x964($sp)
    ctx->pc = 0x27b82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2404), GPR_U32(ctx, 3));
label_27b830:
    // 0x27b830: 0x8fa50964  lw          $a1, 0x964($sp)
    ctx->pc = 0x27b830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2404)));
label_27b834:
    // 0x27b834: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x27b834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_27b838:
    // 0x27b838: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_27b83c:
    if (ctx->pc == 0x27B83Cu) {
        ctx->pc = 0x27B83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B838u;
        // 0x27b83c: 0x8fa70960  lw          $a3, 0x960($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B840u;
        goto label_27b840;
    }
    ctx->pc = 0x27B838u;
    {
        const bool branch_taken_0x27b838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B838u;
        // 0x27b83c: 0x8fa70960  lw          $a3, 0x960($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b838) {
            ctx->pc = 0x27B868u;
            goto label_27b868;
        }
    }
    ctx->pc = 0x27B840u;
label_27b840:
    // 0x27b840: 0x8fa6096c  lw          $a2, 0x96C($sp)
    ctx->pc = 0x27b840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2412)));
label_27b844:
    // 0x27b844: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x27b844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_27b848:
    // 0x27b848: 0xc0efbe8  jal         func_3BEFA0
label_27b84c:
    if (ctx->pc == 0x27B84Cu) {
        ctx->pc = 0x27B84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B848u;
        // 0x27b84c: 0xc72021  addu        $a0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B850u;
        goto label_27b850;
    }
    ctx->pc = 0x27B848u;
    SET_GPR_U32(ctx, 31, 0x27B850u);
    ctx->pc = 0x27B84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B848u;
    // 0x27b84c: 0xc72021  addu        $a0, $a2, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27B848u, 0x27B850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B850u;
label_27b850:
    // 0x27b850: 0x8fa4096c  lw          $a0, 0x96C($sp)
    ctx->pc = 0x27b850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2412)));
label_27b854:
    // 0x27b854: 0xc0f3872  jal         func_3CE1C8
label_27b858:
    if (ctx->pc == 0x27B858u) {
        ctx->pc = 0x27B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B854u;
        // 0x27b858: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B85Cu;
        goto label_27b85c;
    }
    ctx->pc = 0x27B854u;
    SET_GPR_U32(ctx, 31, 0x27B85Cu);
    ctx->pc = 0x27B858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B854u;
    // 0x27b858: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE1C8u, 0x27B854u, 0x27B85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B85Cu;
label_27b85c:
    // 0x27b85c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27b85cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27b860:
    // 0x27b860: 0x641ffbd  bgez        $s2, . + 4 + (-0x43 << 2)
label_27b864:
    if (ctx->pc == 0x27B864u) {
        ctx->pc = 0x27B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B860u;
        // 0x27b864: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B868u;
        goto label_27b868;
    }
    ctx->pc = 0x27B860u;
    {
        const bool branch_taken_0x27b860 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x27B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B860u;
        // 0x27b864: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b860) {
            ctx->pc = 0x27B758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27b758;
        }
    }
    ctx->pc = 0x27B868u;
label_27b868:
    // 0x27b868: 0x27a404e0  addiu       $a0, $sp, 0x4E0
    ctx->pc = 0x27b868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_27b86c:
    // 0x27b86c: 0xc0efbe8  jal         func_3BEFA0
label_27b870:
    if (ctx->pc == 0x27B870u) {
        ctx->pc = 0x27B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B86Cu;
        // 0x27b870: 0x27a504d0  addiu       $a1, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B874u;
        goto label_27b874;
    }
    ctx->pc = 0x27B86Cu;
    SET_GPR_U32(ctx, 31, 0x27B874u);
    ctx->pc = 0x27B870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B86Cu;
    // 0x27b870: 0x27a504d0  addiu       $a1, $sp, 0x4D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27B86Cu, 0x27B874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B874u;
label_27b874:
    // 0x27b874: 0x8fa50970  lw          $a1, 0x970($sp)
    ctx->pc = 0x27b874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2416)));
label_27b878:
    // 0x27b878: 0xc0efae1  jal         func_3BEB84
label_27b87c:
    if (ctx->pc == 0x27B87Cu) {
        ctx->pc = 0x27B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B878u;
        // 0x27b87c: 0x27a404e0  addiu       $a0, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B880u;
        goto label_27b880;
    }
    ctx->pc = 0x27B878u;
    SET_GPR_U32(ctx, 31, 0x27B880u);
    ctx->pc = 0x27B87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B878u;
    // 0x27b87c: 0x27a404e0  addiu       $a0, $sp, 0x4E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x27B878u, 0x27B880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B880u;
label_27b880:
    // 0x27b880: 0x27a504d0  addiu       $a1, $sp, 0x4D0
    ctx->pc = 0x27b880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_27b884:
    // 0x27b884: 0xc0efae1  jal         func_3BEB84
label_27b888:
    if (ctx->pc == 0x27B888u) {
        ctx->pc = 0x27B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B884u;
        // 0x27b888: 0x27a404e0  addiu       $a0, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B88Cu;
        goto label_27b88c;
    }
    ctx->pc = 0x27B884u;
    SET_GPR_U32(ctx, 31, 0x27B88Cu);
    ctx->pc = 0x27B888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B884u;
    // 0x27b888: 0x27a404e0  addiu       $a0, $sp, 0x4E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x27B884u, 0x27B88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B88Cu;
label_27b88c:
    // 0x27b88c: 0x8fa50970  lw          $a1, 0x970($sp)
    ctx->pc = 0x27b88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2416)));
label_27b890:
    // 0x27b890: 0xc0efae1  jal         func_3BEB84
label_27b894:
    if (ctx->pc == 0x27B894u) {
        ctx->pc = 0x27B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B890u;
        // 0x27b894: 0x27a404e0  addiu       $a0, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B898u;
        goto label_27b898;
    }
    ctx->pc = 0x27B890u;
    SET_GPR_U32(ctx, 31, 0x27B898u);
    ctx->pc = 0x27B894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B890u;
    // 0x27b894: 0x27a404e0  addiu       $a0, $sp, 0x4E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x27B890u, 0x27B898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B898u;
label_27b898:
    // 0x27b898: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27b898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27b89c:
    // 0x27b89c: 0x27a604e0  addiu       $a2, $sp, 0x4E0
    ctx->pc = 0x27b89cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_27b8a0:
    // 0x27b8a0: 0x8ec5006c  lw          $a1, 0x6C($s6)
    ctx->pc = 0x27b8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
label_27b8a4:
    // 0x27b8a4: 0xc0eef5a  jal         func_3BBD68
label_27b8a8:
    if (ctx->pc == 0x27B8A8u) {
        ctx->pc = 0x27B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B8A4u;
        // 0x27b8a8: 0x24070203  addiu       $a3, $zero, 0x203 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B8ACu;
        goto label_27b8ac;
    }
    ctx->pc = 0x27B8A4u;
    SET_GPR_U32(ctx, 31, 0x27B8ACu);
    ctx->pc = 0x27B8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B8A4u;
    // 0x27b8a8: 0x24070203  addiu       $a3, $zero, 0x203 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBD68u, 0x27B8A4u, 0x27B8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B8ACu;
label_27b8ac:
    // 0x27b8ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27b8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b8b0:
    // 0x27b8b0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x27b8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27b8b4:
    // 0x27b8b4: 0xc0ef0b2  jal         func_3BC2C8
label_27b8b8:
    if (ctx->pc == 0x27B8B8u) {
        ctx->pc = 0x27B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B8B4u;
        // 0x27b8b8: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B8BCu;
        goto label_27b8bc;
    }
    ctx->pc = 0x27B8B4u;
    SET_GPR_U32(ctx, 31, 0x27B8BCu);
    ctx->pc = 0x27B8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B8B4u;
    // 0x27b8b8: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27B8B4u, 0x27B8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B8BCu;
label_27b8bc:
    // 0x27b8bc: 0x8ec20090  lw          $v0, 0x90($s6)
    ctx->pc = 0x27b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
label_27b8c0:
    // 0x27b8c0: 0x440018a  bltz        $v0, . + 4 + (0x18A << 2)
label_27b8c4:
    if (ctx->pc == 0x27B8C4u) {
        ctx->pc = 0x27B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B8C0u;
        // 0x27b8c4: 0x27a504e0  addiu       $a1, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B8C8u;
        goto label_27b8c8;
    }
    ctx->pc = 0x27B8C0u;
    {
        const bool branch_taken_0x27b8c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B8C0u;
        // 0x27b8c4: 0x27a504e0  addiu       $a1, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b8c0) {
            ctx->pc = 0x27BEECu;
            goto label_27beec;
        }
    }
    ctx->pc = 0x27B8C8u;
label_27b8c8:
    // 0x27b8c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27b8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27b8cc:
    // 0x27b8cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27b8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b8d0:
    // 0x27b8d0: 0xc0ef054  jal         func_3BC150
label_27b8d4:
    if (ctx->pc == 0x27B8D4u) {
        ctx->pc = 0x27B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B8D0u;
        // 0x27b8d4: 0xaec20094  sw          $v0, 0x94($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B8D8u;
        goto label_27b8d8;
    }
    ctx->pc = 0x27B8D0u;
    SET_GPR_U32(ctx, 31, 0x27B8D8u);
    ctx->pc = 0x27B8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B8D0u;
    // 0x27b8d4: 0xaec20094  sw          $v0, 0x94($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC150u, 0x27B8D0u, 0x27B8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B8D8u;
label_27b8d8:
    // 0x27b8d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27b8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b8dc:
    // 0x27b8dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x27b8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27b8e0:
    // 0x27b8e0: 0xc0ef0b2  jal         func_3BC2C8
label_27b8e4:
    if (ctx->pc == 0x27B8E4u) {
        ctx->pc = 0x27B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B8E0u;
        // 0x27b8e4: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B8E8u;
        goto label_27b8e8;
    }
    ctx->pc = 0x27B8E0u;
    SET_GPR_U32(ctx, 31, 0x27B8E8u);
    ctx->pc = 0x27B8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B8E0u;
    // 0x27b8e4: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27B8E0u, 0x27B8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B8E8u;
label_27b8e8:
    // 0x27b8e8: 0x8ec30090  lw          $v1, 0x90($s6)
    ctx->pc = 0x27b8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
label_27b8ec:
    // 0x27b8ec: 0x4600180  bltz        $v1, . + 4 + (0x180 << 2)
label_27b8f0:
    if (ctx->pc == 0x27B8F0u) {
        ctx->pc = 0x27B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B8ECu;
        // 0x27b8f0: 0xdfb00980  ld          $s0, 0x980($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B8F4u;
        goto label_27b8f4;
    }
    ctx->pc = 0x27B8ECu;
    {
        const bool branch_taken_0x27b8ec = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x27B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B8ECu;
        // 0x27b8f0: 0xdfb00980  ld          $s0, 0x980($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b8ec) {
            ctx->pc = 0x27BEF0u;
            goto label_27bef0;
        }
    }
    ctx->pc = 0x27B8F4u;
label_27b8f4:
    // 0x27b8f4: 0xc0eefb2  jal         func_3BBEC8
label_27b8f8:
    if (ctx->pc == 0x27B8F8u) {
        ctx->pc = 0x27B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B8F4u;
        // 0x27b8f8: 0x8ec40094  lw          $a0, 0x94($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B8FCu;
        goto label_27b8fc;
    }
    ctx->pc = 0x27B8F4u;
    SET_GPR_U32(ctx, 31, 0x27B8FCu);
    ctx->pc = 0x27B8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B8F4u;
    // 0x27b8f8: 0x8ec40094  lw          $a0, 0x94($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBEC8u, 0x27B8F4u, 0x27B8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B8FCu;
label_27b8fc:
    // 0x27b8fc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x27b8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27b900:
    // 0x27b900: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x27b900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_27b904:
    // 0x27b904: 0xc0ef0b2  jal         func_3BC2C8
label_27b908:
    if (ctx->pc == 0x27B908u) {
        ctx->pc = 0x27B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B904u;
        // 0x27b908: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B90Cu;
        goto label_27b90c;
    }
    ctx->pc = 0x27B904u;
    SET_GPR_U32(ctx, 31, 0x27B90Cu);
    ctx->pc = 0x27B908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B904u;
    // 0x27b908: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27B904u, 0x27B90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B90Cu;
label_27b90c:
    // 0x27b90c: 0x10000178  b           . + 4 + (0x178 << 2)
label_27b910:
    if (ctx->pc == 0x27B910u) {
        ctx->pc = 0x27B910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B90Cu;
        // 0x27b910: 0xdfb00980  ld          $s0, 0x980($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B914u;
        goto label_27b914;
    }
    ctx->pc = 0x27B90Cu;
    {
        const bool branch_taken_0x27b90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B90Cu;
        // 0x27b910: 0xdfb00980  ld          $s0, 0x980($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b90c) {
            ctx->pc = 0x27BEF0u;
            goto label_27bef0;
        }
    }
    ctx->pc = 0x27B914u;
label_27b914:
    // 0x27b914: 0x27b00520  addiu       $s0, $sp, 0x520
    ctx->pc = 0x27b914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
label_27b918:
    // 0x27b918: 0x27be04d0  addiu       $fp, $sp, 0x4D0
    ctx->pc = 0x27b918u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_27b91c:
    // 0x27b91c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b920:
    // 0x27b920: 0xc0efbe8  jal         func_3BEFA0
label_27b924:
    if (ctx->pc == 0x27B924u) {
        ctx->pc = 0x27B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B920u;
        // 0x27b924: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B928u;
        goto label_27b928;
    }
    ctx->pc = 0x27B920u;
    SET_GPR_U32(ctx, 31, 0x27B928u);
    ctx->pc = 0x27B924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B920u;
    // 0x27b924: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27B920u, 0x27B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B928u;
label_27b928:
    // 0x27b928: 0x26d40524  addiu       $s4, $s6, 0x524
    ctx->pc = 0x27b928u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 1316));
label_27b92c:
    // 0x27b92c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27b92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27b930:
    // 0x27b930: 0xc0efae1  jal         func_3BEB84
label_27b934:
    if (ctx->pc == 0x27B934u) {
        ctx->pc = 0x27B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B930u;
        // 0x27b934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B938u;
        goto label_27b938;
    }
    ctx->pc = 0x27B930u;
    SET_GPR_U32(ctx, 31, 0x27B938u);
    ctx->pc = 0x27B934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B930u;
    // 0x27b934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x27B930u, 0x27B938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B938u;
label_27b938:
    // 0x27b938: 0x26d3008c  addiu       $s3, $s6, 0x8C
    ctx->pc = 0x27b938u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 140));
label_27b93c:
    // 0x27b93c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b940:
    // 0x27b940: 0xc0efc2e  jal         func_3BF0B8
label_27b944:
    if (ctx->pc == 0x27B944u) {
        ctx->pc = 0x27B944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B940u;
        // 0x27b944: 0x26d20090  addiu       $s2, $s6, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B948u;
        goto label_27b948;
    }
    ctx->pc = 0x27B940u;
    SET_GPR_U32(ctx, 31, 0x27B948u);
    ctx->pc = 0x27B944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B940u;
    // 0x27b944: 0x26d20090  addiu       $s2, $s6, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x27B940u, 0x27B948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B948u;
label_27b948:
    // 0x27b948: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x27b948u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27b94c:
    // 0x27b94c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x27b94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_27b950:
    // 0x27b950: 0x2178821  addu        $s1, $s0, $s7
    ctx->pc = 0x27b950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_27b954:
    // 0x27b954: 0xc0efbe8  jal         func_3BEFA0
label_27b958:
    if (ctx->pc == 0x27B958u) {
        ctx->pc = 0x27B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B954u;
        // 0x27b958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B95Cu;
        goto label_27b95c;
    }
    ctx->pc = 0x27B954u;
    SET_GPR_U32(ctx, 31, 0x27B95Cu);
    ctx->pc = 0x27B958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B954u;
    // 0x27b958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27B954u, 0x27B95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B95Cu;
label_27b95c:
    // 0x27b95c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27b95cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_27b960:
    // 0x27b960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b964:
    // 0x27b964: 0xc0efae1  jal         func_3BEB84
label_27b968:
    if (ctx->pc == 0x27B968u) {
        ctx->pc = 0x27B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B964u;
        // 0x27b968: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B96Cu;
        goto label_27b96c;
    }
    ctx->pc = 0x27B964u;
    SET_GPR_U32(ctx, 31, 0x27B96Cu);
    ctx->pc = 0x27B968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B964u;
    // 0x27b968: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x27B964u, 0x27B96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B96Cu;
label_27b96c:
    // 0x27b96c: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27b96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27b970:
    // 0x27b970: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27b970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b974:
    // 0x27b974: 0xc0ef256  jal         func_3BC958
label_27b978:
    if (ctx->pc == 0x27B978u) {
        ctx->pc = 0x27B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B974u;
        // 0x27b978: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B97Cu;
        goto label_27b97c;
    }
    ctx->pc = 0x27B974u;
    SET_GPR_U32(ctx, 31, 0x27B97Cu);
    ctx->pc = 0x27B978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B974u;
    // 0x27b978: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC958u, 0x27B974u, 0x27B97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B97Cu;
label_27b97c:
    // 0x27b97c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27b97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b980:
    // 0x27b980: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27b980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27b984:
    // 0x27b984: 0xc0ef0b2  jal         func_3BC2C8
label_27b988:
    if (ctx->pc == 0x27B988u) {
        ctx->pc = 0x27B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B984u;
        // 0x27b988: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B98Cu;
        goto label_27b98c;
    }
    ctx->pc = 0x27B984u;
    SET_GPR_U32(ctx, 31, 0x27B98Cu);
    ctx->pc = 0x27B988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B984u;
    // 0x27b988: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27B984u, 0x27B98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B98Cu;
label_27b98c:
    // 0x27b98c: 0x27a30521  addiu       $v1, $sp, 0x521
    ctx->pc = 0x27b98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1313));
label_27b990:
    // 0x27b990: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27b990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27b994:
    // 0x27b994: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x27b994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_27b998:
    // 0x27b998: 0x8ec5006c  lw          $a1, 0x6C($s6)
    ctx->pc = 0x27b998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
label_27b99c:
    // 0x27b99c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x27b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_27b9a0:
    // 0x27b9a0: 0x24479508  addiu       $a3, $v0, -0x6AF8
    ctx->pc = 0x27b9a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939912));
label_27b9a4:
    // 0x27b9a4: 0x68e80007  ldl         $t0, 0x7($a3)
    ctx->pc = 0x27b9a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_27b9a8:
    // 0x27b9a8: 0x6ce80000  ldr         $t0, 0x0($a3)
    ctx->pc = 0x27b9a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_27b9ac:
    // 0x27b9ac: 0x80e90008  lb          $t1, 0x8($a3)
    ctx->pc = 0x27b9acu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
label_27b9b0:
    // 0x27b9b0: 0xb0680007  sdl         $t0, 0x7($v1)
    ctx->pc = 0x27b9b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b9b4:
    // 0x27b9b4: 0xb4680000  sdr         $t0, 0x0($v1)
    ctx->pc = 0x27b9b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b9b8:
    // 0x27b9b8: 0xa0690008  sb          $t1, 0x8($v1)
    ctx->pc = 0x27b9b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 9));
label_27b9bc:
    // 0x27b9bc: 0xc0ef256  jal         func_3BC958
label_27b9c0:
    if (ctx->pc == 0x27B9C0u) {
        ctx->pc = 0x27B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9BCu;
        // 0x27b9c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B9C4u;
        goto label_27b9c4;
    }
    ctx->pc = 0x27B9BCu;
    SET_GPR_U32(ctx, 31, 0x27B9C4u);
    ctx->pc = 0x27B9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B9BCu;
    // 0x27b9c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC958u, 0x27B9BCu, 0x27B9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B9C4u;
label_27b9c4:
    // 0x27b9c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27b9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b9c8:
    // 0x27b9c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27b9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b9cc:
    // 0x27b9cc: 0xc0ef0b2  jal         func_3BC2C8
label_27b9d0:
    if (ctx->pc == 0x27B9D0u) {
        ctx->pc = 0x27B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9CCu;
        // 0x27b9d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B9D4u;
        goto label_27b9d4;
    }
    ctx->pc = 0x27B9CCu;
    SET_GPR_U32(ctx, 31, 0x27B9D4u);
    ctx->pc = 0x27B9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B9CCu;
    // 0x27b9d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27B9CCu, 0x27B9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B9D4u;
label_27b9d4:
    // 0x27b9d4: 0x8fa50480  lw          $a1, 0x480($sp)
    ctx->pc = 0x27b9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1152)));
label_27b9d8:
    // 0x27b9d8: 0xc0efbe8  jal         func_3BEFA0
label_27b9dc:
    if (ctx->pc == 0x27B9DCu) {
        ctx->pc = 0x27B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9D8u;
        // 0x27b9dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B9E0u;
        goto label_27b9e0;
    }
    ctx->pc = 0x27B9D8u;
    SET_GPR_U32(ctx, 31, 0x27B9E0u);
    ctx->pc = 0x27B9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B9D8u;
    // 0x27b9dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27B9D8u, 0x27B9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B9E0u;
label_27b9e0:
    // 0x27b9e0: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27b9e4:
    // 0x27b9e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27b9e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b9e8:
    // 0x27b9e8: 0xc0ef256  jal         func_3BC958
label_27b9ec:
    if (ctx->pc == 0x27B9ECu) {
        ctx->pc = 0x27B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9E8u;
        // 0x27b9ec: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B9F0u;
        goto label_27b9f0;
    }
    ctx->pc = 0x27B9E8u;
    SET_GPR_U32(ctx, 31, 0x27B9F0u);
    ctx->pc = 0x27B9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B9E8u;
    // 0x27b9ec: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC958u, 0x27B9E8u, 0x27B9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B9F0u;
label_27b9f0:
    // 0x27b9f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27b9f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b9f4:
    // 0x27b9f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27b9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b9f8:
    // 0x27b9f8: 0xc0ef0b2  jal         func_3BC2C8
label_27b9fc:
    if (ctx->pc == 0x27B9FCu) {
        ctx->pc = 0x27B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9F8u;
        // 0x27b9fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BA00u;
        goto label_27ba00;
    }
    ctx->pc = 0x27B9F8u;
    SET_GPR_U32(ctx, 31, 0x27BA00u);
    ctx->pc = 0x27B9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B9F8u;
    // 0x27b9fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27B9F8u, 0x27BA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA00u;
label_27ba00:
    // 0x27ba00: 0x8fa50484  lw          $a1, 0x484($sp)
    ctx->pc = 0x27ba00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1156)));
label_27ba04:
    // 0x27ba04: 0xc0efbe8  jal         func_3BEFA0
label_27ba08:
    if (ctx->pc == 0x27BA08u) {
        ctx->pc = 0x27BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA04u;
        // 0x27ba08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BA0Cu;
        goto label_27ba0c;
    }
    ctx->pc = 0x27BA04u;
    SET_GPR_U32(ctx, 31, 0x27BA0Cu);
    ctx->pc = 0x27BA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BA04u;
    // 0x27ba08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27BA04u, 0x27BA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA0Cu;
label_27ba0c:
    // 0x27ba0c: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27ba0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27ba10:
    // 0x27ba10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27ba10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27ba14:
    // 0x27ba14: 0xc0ef256  jal         func_3BC958
label_27ba18:
    if (ctx->pc == 0x27BA18u) {
        ctx->pc = 0x27BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA14u;
        // 0x27ba18: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BA1Cu;
        goto label_27ba1c;
    }
    ctx->pc = 0x27BA14u;
    SET_GPR_U32(ctx, 31, 0x27BA1Cu);
    ctx->pc = 0x27BA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BA14u;
    // 0x27ba18: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC958u, 0x27BA14u, 0x27BA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA1Cu;
label_27ba1c:
    // 0x27ba1c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27ba1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27ba20:
    // 0x27ba20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27ba20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27ba24:
    // 0x27ba24: 0xc0ef0b2  jal         func_3BC2C8
label_27ba28:
    if (ctx->pc == 0x27BA28u) {
        ctx->pc = 0x27BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA24u;
        // 0x27ba28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BA2Cu;
        goto label_27ba2c;
    }
    ctx->pc = 0x27BA24u;
    SET_GPR_U32(ctx, 31, 0x27BA2Cu);
    ctx->pc = 0x27BA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BA24u;
    // 0x27ba28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27BA24u, 0x27BA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA2Cu;
label_27ba2c:
    // 0x27ba2c: 0x8fa50488  lw          $a1, 0x488($sp)
    ctx->pc = 0x27ba2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1160)));
label_27ba30:
    // 0x27ba30: 0xc0efbe8  jal         func_3BEFA0
label_27ba34:
    if (ctx->pc == 0x27BA34u) {
        ctx->pc = 0x27BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA30u;
        // 0x27ba34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BA38u;
        goto label_27ba38;
    }
    ctx->pc = 0x27BA30u;
    SET_GPR_U32(ctx, 31, 0x27BA38u);
    ctx->pc = 0x27BA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BA30u;
    // 0x27ba34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27BA30u, 0x27BA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA38u;
label_27ba38:
    // 0x27ba38: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27ba38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27ba3c:
    // 0x27ba3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27ba3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27ba40:
    // 0x27ba40: 0xc0ef256  jal         func_3BC958
label_27ba44:
    if (ctx->pc == 0x27BA44u) {
        ctx->pc = 0x27BA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA40u;
        // 0x27ba44: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BA48u;
        goto label_27ba48;
    }
    ctx->pc = 0x27BA40u;
    SET_GPR_U32(ctx, 31, 0x27BA48u);
    ctx->pc = 0x27BA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BA40u;
    // 0x27ba44: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC958u, 0x27BA40u, 0x27BA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA48u;
label_27ba48:
    // 0x27ba48: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27ba48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27ba4c:
    // 0x27ba4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27ba4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27ba50:
    // 0x27ba50: 0xc0ef0b2  jal         func_3BC2C8
label_27ba54:
    if (ctx->pc == 0x27BA54u) {
        ctx->pc = 0x27BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA50u;
        // 0x27ba54: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BA58u;
        goto label_27ba58;
    }
    ctx->pc = 0x27BA50u;
    SET_GPR_U32(ctx, 31, 0x27BA58u);
    ctx->pc = 0x27BA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BA50u;
    // 0x27ba54: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27BA50u, 0x27BA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA58u;
label_27ba58:
    // 0x27ba58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27ba58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27ba5c:
    // 0x27ba5c: 0xc0efbe8  jal         func_3BEFA0
label_27ba60:
    if (ctx->pc == 0x27BA60u) {
        ctx->pc = 0x27BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA5Cu;
        // 0x27ba60: 0x26c50544  addiu       $a1, $s6, 0x544 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1348));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BA64u;
        goto label_27ba64;
    }
    ctx->pc = 0x27BA5Cu;
    SET_GPR_U32(ctx, 31, 0x27BA64u);
    ctx->pc = 0x27BA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BA5Cu;
    // 0x27ba60: 0x26c50544  addiu       $a1, $s6, 0x544 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27BA5Cu, 0x27BA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA64u;
label_27ba64:
    // 0x27ba64: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27ba64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27ba68:
    // 0x27ba68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27ba68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27ba6c:
    // 0x27ba6c: 0xc0ef256  jal         func_3BC958
label_27ba70:
    if (ctx->pc == 0x27BA70u) {
        ctx->pc = 0x27BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA6Cu;
        // 0x27ba70: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BA74u;
        goto label_27ba74;
    }
    ctx->pc = 0x27BA6Cu;
    SET_GPR_U32(ctx, 31, 0x27BA74u);
    ctx->pc = 0x27BA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BA6Cu;
    // 0x27ba70: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC958u, 0x27BA6Cu, 0x27BA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA74u;
label_27ba74:
    // 0x27ba74: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27ba74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27ba78:
    // 0x27ba78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27ba78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27ba7c:
    // 0x27ba7c: 0xc0ef0b2  jal         func_3BC2C8
label_27ba80:
    if (ctx->pc == 0x27BA80u) {
        ctx->pc = 0x27BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA7Cu;
        // 0x27ba80: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BA84u;
        goto label_27ba84;
    }
    ctx->pc = 0x27BA7Cu;
    SET_GPR_U32(ctx, 31, 0x27BA84u);
    ctx->pc = 0x27BA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BA7Cu;
    // 0x27ba80: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27BA7Cu, 0x27BA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA84u;
label_27ba84:
    // 0x27ba84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27ba84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27ba88:
    // 0x27ba88: 0xc0efbe8  jal         func_3BEFA0
label_27ba8c:
    if (ctx->pc == 0x27BA8Cu) {
        ctx->pc = 0x27BA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA88u;
        // 0x27ba8c: 0x26c50564  addiu       $a1, $s6, 0x564 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1380));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BA90u;
        goto label_27ba90;
    }
    ctx->pc = 0x27BA88u;
    SET_GPR_U32(ctx, 31, 0x27BA90u);
    ctx->pc = 0x27BA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BA88u;
    // 0x27ba8c: 0x26c50564  addiu       $a1, $s6, 0x564 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1380));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27BA88u, 0x27BA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA90u;
label_27ba90:
    // 0x27ba90: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27ba90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27ba94:
    // 0x27ba94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27ba94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27ba98:
    // 0x27ba98: 0xc0ef256  jal         func_3BC958
label_27ba9c:
    if (ctx->pc == 0x27BA9Cu) {
        ctx->pc = 0x27BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA98u;
        // 0x27ba9c: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BAA0u;
        goto label_27baa0;
    }
    ctx->pc = 0x27BA98u;
    SET_GPR_U32(ctx, 31, 0x27BAA0u);
    ctx->pc = 0x27BA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BA98u;
    // 0x27ba9c: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC958u, 0x27BA98u, 0x27BAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BAA0u;
label_27baa0:
    // 0x27baa0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27baa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27baa4:
    // 0x27baa4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27baa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27baa8:
    // 0x27baa8: 0xc0ef0b2  jal         func_3BC2C8
label_27baac:
    if (ctx->pc == 0x27BAACu) {
        ctx->pc = 0x27BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAA8u;
        // 0x27baac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BAB0u;
        goto label_27bab0;
    }
    ctx->pc = 0x27BAA8u;
    SET_GPR_U32(ctx, 31, 0x27BAB0u);
    ctx->pc = 0x27BAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BAA8u;
    // 0x27baac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27BAA8u, 0x27BAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BAB0u;
label_27bab0:
    // 0x27bab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27bab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27bab4:
    // 0x27bab4: 0xc0efbe8  jal         func_3BEFA0
label_27bab8:
    if (ctx->pc == 0x27BAB8u) {
        ctx->pc = 0x27BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAB4u;
        // 0x27bab8: 0x26c50584  addiu       $a1, $s6, 0x584 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1412));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BABCu;
        goto label_27babc;
    }
    ctx->pc = 0x27BAB4u;
    SET_GPR_U32(ctx, 31, 0x27BABCu);
    ctx->pc = 0x27BAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BAB4u;
    // 0x27bab8: 0x26c50584  addiu       $a1, $s6, 0x584 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1412));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27BAB4u, 0x27BABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BABCu;
label_27babc:
    // 0x27babc: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27babcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27bac0:
    // 0x27bac0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27bac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27bac4:
    // 0x27bac4: 0xc0ef256  jal         func_3BC958
label_27bac8:
    if (ctx->pc == 0x27BAC8u) {
        ctx->pc = 0x27BAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAC4u;
        // 0x27bac8: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BACCu;
        goto label_27bacc;
    }
    ctx->pc = 0x27BAC4u;
    SET_GPR_U32(ctx, 31, 0x27BACCu);
    ctx->pc = 0x27BAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BAC4u;
    // 0x27bac8: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC958u, 0x27BAC4u, 0x27BACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BACCu;
label_27bacc:
    // 0x27bacc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27baccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27bad0:
    // 0x27bad0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27bad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27bad4:
    // 0x27bad4: 0xc0ef0b2  jal         func_3BC2C8
label_27bad8:
    if (ctx->pc == 0x27BAD8u) {
        ctx->pc = 0x27BAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAD4u;
        // 0x27bad8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BADCu;
        goto label_27badc;
    }
    ctx->pc = 0x27BAD4u;
    SET_GPR_U32(ctx, 31, 0x27BADCu);
    ctx->pc = 0x27BAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BAD4u;
    // 0x27bad8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27BAD4u, 0x27BADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BADCu;
label_27badc:
    // 0x27badc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27badcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27bae0:
    // 0x27bae0: 0xc0efbe8  jal         func_3BEFA0
label_27bae4:
    if (ctx->pc == 0x27BAE4u) {
        ctx->pc = 0x27BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAE0u;
        // 0x27bae4: 0x26c505a4  addiu       $a1, $s6, 0x5A4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1444));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BAE8u;
        goto label_27bae8;
    }
    ctx->pc = 0x27BAE0u;
    SET_GPR_U32(ctx, 31, 0x27BAE8u);
    ctx->pc = 0x27BAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BAE0u;
    // 0x27bae4: 0x26c505a4  addiu       $a1, $s6, 0x5A4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1444));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27BAE0u, 0x27BAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BAE8u;
label_27bae8:
    // 0x27bae8: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27bae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27baec:
    // 0x27baec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27baecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27baf0:
    // 0x27baf0: 0xc0ef256  jal         func_3BC958
label_27baf4:
    if (ctx->pc == 0x27BAF4u) {
        ctx->pc = 0x27BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAF0u;
        // 0x27baf4: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BAF8u;
        goto label_27baf8;
    }
    ctx->pc = 0x27BAF0u;
    SET_GPR_U32(ctx, 31, 0x27BAF8u);
    ctx->pc = 0x27BAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BAF0u;
    // 0x27baf4: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC958u, 0x27BAF0u, 0x27BAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BAF8u;
label_27baf8:
    // 0x27baf8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27baf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27bafc:
    // 0x27bafc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27bafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27bb00:
    // 0x27bb00: 0xc0ef0b2  jal         func_3BC2C8
label_27bb04:
    if (ctx->pc == 0x27BB04u) {
        ctx->pc = 0x27BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB00u;
        // 0x27bb04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BB08u;
        goto label_27bb08;
    }
    ctx->pc = 0x27BB00u;
    SET_GPR_U32(ctx, 31, 0x27BB08u);
    ctx->pc = 0x27BB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BB00u;
    // 0x27bb04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27BB00u, 0x27BB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB08u;
label_27bb08:
    // 0x27bb08: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x27bb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_27bb0c:
    // 0x27bb0c: 0xc0efbe8  jal         func_3BEFA0
label_27bb10:
    if (ctx->pc == 0x27BB10u) {
        ctx->pc = 0x27BB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB0Cu;
        // 0x27bb10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BB14u;
        goto label_27bb14;
    }
    ctx->pc = 0x27BB0Cu;
    SET_GPR_U32(ctx, 31, 0x27BB14u);
    ctx->pc = 0x27BB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BB0Cu;
    // 0x27bb10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27BB0Cu, 0x27BB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB14u;
label_27bb14:
    // 0x27bb14: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27bb14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27bb18:
    // 0x27bb18: 0xc0efae1  jal         func_3BEB84
label_27bb1c:
    if (ctx->pc == 0x27BB1Cu) {
        ctx->pc = 0x27BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB18u;
        // 0x27bb1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BB20u;
        goto label_27bb20;
    }
    ctx->pc = 0x27BB18u;
    SET_GPR_U32(ctx, 31, 0x27BB20u);
    ctx->pc = 0x27BB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BB18u;
    // 0x27bb1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x27BB18u, 0x27BB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB20u;
label_27bb20:
    // 0x27bb20: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27bb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27bb24:
    // 0x27bb24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27bb24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27bb28:
    // 0x27bb28: 0xc0ef256  jal         func_3BC958
label_27bb2c:
    if (ctx->pc == 0x27BB2Cu) {
        ctx->pc = 0x27BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB28u;
        // 0x27bb2c: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BB30u;
        goto label_27bb30;
    }
    ctx->pc = 0x27BB28u;
    SET_GPR_U32(ctx, 31, 0x27BB30u);
    ctx->pc = 0x27BB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BB28u;
    // 0x27bb2c: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC958u, 0x27BB28u, 0x27BB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB30u;
label_27bb30:
    // 0x27bb30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27bb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27bb34:
    // 0x27bb34: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27bb34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27bb38:
    // 0x27bb38: 0xc0ef0b2  jal         func_3BC2C8
label_27bb3c:
    if (ctx->pc == 0x27BB3Cu) {
        ctx->pc = 0x27BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB38u;
        // 0x27bb3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BB40u;
        goto label_27bb40;
    }
    ctx->pc = 0x27BB38u;
    SET_GPR_U32(ctx, 31, 0x27BB40u);
    ctx->pc = 0x27BB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BB38u;
    // 0x27bb3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27BB38u, 0x27BB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB40u;
label_27bb40:
    // 0x27bb40: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x27bb40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_27bb44:
    // 0x27bb44: 0x26c405e4  addiu       $a0, $s6, 0x5E4
    ctx->pc = 0x27bb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1508));
label_27bb48:
    // 0x27bb48: 0x24a59558  addiu       $a1, $a1, -0x6AA8
    ctx->pc = 0x27bb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939992));
label_27bb4c:
    // 0x27bb4c: 0xc0efefa  jal         func_3BFBE8
label_27bb50:
    if (ctx->pc == 0x27BB50u) {
        ctx->pc = 0x27BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB4Cu;
        // 0x27bb50: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BB54u;
        goto label_27bb54;
    }
    ctx->pc = 0x27BB4Cu;
    SET_GPR_U32(ctx, 31, 0x27BB54u);
    ctx->pc = 0x27BB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BB4Cu;
    // 0x27bb50: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x27BB4Cu, 0x27BB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB54u;
label_27bb54:
    // 0x27bb54: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_27bb58:
    if (ctx->pc == 0x27BB58u) {
        ctx->pc = 0x27BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB54u;
        // 0x27bb58: 0xdfb00980  ld          $s0, 0x980($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BB5Cu;
        goto label_27bb5c;
    }
    ctx->pc = 0x27BB54u;
    {
        const bool branch_taken_0x27bb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB54u;
        // 0x27bb58: 0xdfb00980  ld          $s0, 0x980($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bb54) {
            ctx->pc = 0x27BEF0u;
            goto label_27bef0;
        }
    }
    ctx->pc = 0x27BB5Cu;
label_27bb5c:
    // 0x27bb5c: 0x27b004e0  addiu       $s0, $sp, 0x4E0
    ctx->pc = 0x27bb5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_27bb60:
    // 0x27bb60: 0x27a504d0  addiu       $a1, $sp, 0x4D0
    ctx->pc = 0x27bb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_27bb64:
    // 0x27bb64: 0xc0efbe8  jal         func_3BEFA0
label_27bb68:
    if (ctx->pc == 0x27BB68u) {
        ctx->pc = 0x27BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB64u;
        // 0x27bb68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BB6Cu;
        goto label_27bb6c;
    }
    ctx->pc = 0x27BB64u;
    SET_GPR_U32(ctx, 31, 0x27BB6Cu);
    ctx->pc = 0x27BB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BB64u;
    // 0x27bb68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27BB64u, 0x27BB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB6Cu;
label_27bb6c:
    // 0x27bb6c: 0x26c50524  addiu       $a1, $s6, 0x524
    ctx->pc = 0x27bb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1316));
label_27bb70:
    // 0x27bb70: 0xc0efae1  jal         func_3BEB84
label_27bb74:
    if (ctx->pc == 0x27BB74u) {
        ctx->pc = 0x27BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB70u;
        // 0x27bb74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BB78u;
        goto label_27bb78;
    }
    ctx->pc = 0x27BB70u;
    SET_GPR_U32(ctx, 31, 0x27BB78u);
    ctx->pc = 0x27BB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BB70u;
    // 0x27bb74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x27BB70u, 0x27BB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB78u;
label_27bb78:
    // 0x27bb78: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x27bb78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_27bb7c:
    // 0x27bb7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27bb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27bb80:
    // 0x27bb80: 0xc0efae1  jal         func_3BEB84
label_27bb84:
    if (ctx->pc == 0x27BB84u) {
        ctx->pc = 0x27BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB80u;
        // 0x27bb84: 0x24a59578  addiu       $a1, $a1, -0x6A88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BB88u;
        goto label_27bb88;
    }
    ctx->pc = 0x27BB80u;
    SET_GPR_U32(ctx, 31, 0x27BB88u);
    ctx->pc = 0x27BB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BB80u;
    // 0x27bb84: 0x24a59578  addiu       $a1, $a1, -0x6A88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x27BB80u, 0x27BB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB88u;
label_27bb88:
    // 0x27bb88: 0x26c505c4  addiu       $a1, $s6, 0x5C4
    ctx->pc = 0x27bb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1476));
label_27bb8c:
    // 0x27bb8c: 0xc0efae1  jal         func_3BEB84
label_27bb90:
    if (ctx->pc == 0x27BB90u) {
        ctx->pc = 0x27BB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB8Cu;
        // 0x27bb90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BB94u;
        goto label_27bb94;
    }
    ctx->pc = 0x27BB8Cu;
    SET_GPR_U32(ctx, 31, 0x27BB94u);
    ctx->pc = 0x27BB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BB8Cu;
    // 0x27bb90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x27BB8Cu, 0x27BB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB94u;
label_27bb94:
    // 0x27bb94: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x27bb94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_27bb98:
    // 0x27bb98: 0x26c405e4  addiu       $a0, $s6, 0x5E4
    ctx->pc = 0x27bb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1508));
label_27bb9c:
    // 0x27bb9c: 0x24a59580  addiu       $a1, $a1, -0x6A80
    ctx->pc = 0x27bb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940032));
label_27bba0:
    // 0x27bba0: 0xc0efefa  jal         func_3BFBE8
label_27bba4:
    if (ctx->pc == 0x27BBA4u) {
        ctx->pc = 0x27BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BBA0u;
        // 0x27bba4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BBA8u;
        goto label_27bba8;
    }
    ctx->pc = 0x27BBA0u;
    SET_GPR_U32(ctx, 31, 0x27BBA8u);
    ctx->pc = 0x27BBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BBA0u;
    // 0x27bba4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x27BBA0u, 0x27BBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BBA8u;
label_27bba8:
    // 0x27bba8: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27bba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27bbac:
    // 0x27bbac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27bbacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27bbb0:
    // 0x27bbb0: 0xc0ef256  jal         func_3BC958
label_27bbb4:
    if (ctx->pc == 0x27BBB4u) {
        ctx->pc = 0x27BBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BBB0u;
        // 0x27bbb4: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BBB8u;
        goto label_27bbb8;
    }
    ctx->pc = 0x27BBB0u;
    SET_GPR_U32(ctx, 31, 0x27BBB8u);
    ctx->pc = 0x27BBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BBB0u;
    // 0x27bbb4: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC958u, 0x27BBB0u, 0x27BBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BBB8u;
label_27bbb8:
    // 0x27bbb8: 0x26c60090  addiu       $a2, $s6, 0x90
    ctx->pc = 0x27bbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
label_27bbbc:
    // 0x27bbbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27bbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27bbc0:
    // 0x27bbc0: 0xc0ef0b2  jal         func_3BC2C8
label_27bbc4:
    if (ctx->pc == 0x27BBC4u) {
        ctx->pc = 0x27BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BBC0u;
        // 0x27bbc4: 0x26c5008c  addiu       $a1, $s6, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 140));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BBC8u;
        goto label_27bbc8;
    }
    ctx->pc = 0x27BBC0u;
    SET_GPR_U32(ctx, 31, 0x27BBC8u);
    ctx->pc = 0x27BBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BBC0u;
    // 0x27bbc4: 0x26c5008c  addiu       $a1, $s6, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27BBC0u, 0x27BBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BBC8u;
label_27bbc8:
    // 0x27bbc8: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_27bbcc:
    if (ctx->pc == 0x27BBCCu) {
        ctx->pc = 0x27BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BBC8u;
        // 0x27bbcc: 0xdfb00980  ld          $s0, 0x980($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BBD0u;
        goto label_27bbd0;
    }
    ctx->pc = 0x27BBC8u;
    {
        const bool branch_taken_0x27bbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BBC8u;
        // 0x27bbcc: 0xdfb00980  ld          $s0, 0x980($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bbc8) {
            ctx->pc = 0x27BEF0u;
            goto label_27bef0;
        }
    }
    ctx->pc = 0x27BBD0u;
label_27bbd0:
    // 0x27bbd0: 0x27b004e0  addiu       $s0, $sp, 0x4E0
    ctx->pc = 0x27bbd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_27bbd4:
    // 0x27bbd4: 0x27a504d0  addiu       $a1, $sp, 0x4D0
    ctx->pc = 0x27bbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_27bbd8:
    // 0x27bbd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27bbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27bbdc:
    // 0x27bbdc: 0xc0efbe8  jal         func_3BEFA0
label_27bbe0:
    if (ctx->pc == 0x27BBE0u) {
        ctx->pc = 0x27BBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BBDCu;
        // 0x27bbe0: 0x26d305e4  addiu       $s3, $s6, 0x5E4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1508));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BBE4u;
        goto label_27bbe4;
    }
    ctx->pc = 0x27BBDCu;
    SET_GPR_U32(ctx, 31, 0x27BBE4u);
    ctx->pc = 0x27BBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BBDCu;
    // 0x27bbe0: 0x26d305e4  addiu       $s3, $s6, 0x5E4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1508));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27BBDCu, 0x27BBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BBE4u;
label_27bbe4:
    // 0x27bbe4: 0x26d2008c  addiu       $s2, $s6, 0x8C
    ctx->pc = 0x27bbe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 140));
label_27bbe8:
    // 0x27bbe8: 0x26c50524  addiu       $a1, $s6, 0x524
    ctx->pc = 0x27bbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1316));
label_27bbec:
    // 0x27bbec: 0xc0efae1  jal         func_3BEB84
label_27bbf0:
    if (ctx->pc == 0x27BBF0u) {
        ctx->pc = 0x27BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BBECu;
        // 0x27bbf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BBF4u;
        goto label_27bbf4;
    }
    ctx->pc = 0x27BBECu;
    SET_GPR_U32(ctx, 31, 0x27BBF4u);
    ctx->pc = 0x27BBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BBECu;
    // 0x27bbf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x27BBECu, 0x27BBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BBF4u;
label_27bbf4:
    // 0x27bbf4: 0x26d10090  addiu       $s1, $s6, 0x90
    ctx->pc = 0x27bbf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
label_27bbf8:
    // 0x27bbf8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x27bbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_27bbfc:
    // 0x27bbfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27bbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27bc00:
    // 0x27bc00: 0xc0efae1  jal         func_3BEB84
label_27bc04:
    if (ctx->pc == 0x27BC04u) {
        ctx->pc = 0x27BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC00u;
        // 0x27bc04: 0x24a59578  addiu       $a1, $a1, -0x6A88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BC08u;
        goto label_27bc08;
    }
    ctx->pc = 0x27BC00u;
    SET_GPR_U32(ctx, 31, 0x27BC08u);
    ctx->pc = 0x27BC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BC00u;
    // 0x27bc04: 0x24a59578  addiu       $a1, $a1, -0x6A88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x27BC00u, 0x27BC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BC08u;
label_27bc08:
    // 0x27bc08: 0x26c505c4  addiu       $a1, $s6, 0x5C4
    ctx->pc = 0x27bc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1476));
label_27bc0c:
    // 0x27bc0c: 0xc0efae1  jal         func_3BEB84
label_27bc10:
    if (ctx->pc == 0x27BC10u) {
        ctx->pc = 0x27BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC0Cu;
        // 0x27bc10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BC14u;
        goto label_27bc14;
    }
    ctx->pc = 0x27BC0Cu;
    SET_GPR_U32(ctx, 31, 0x27BC14u);
    ctx->pc = 0x27BC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BC0Cu;
    // 0x27bc10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x27BC0Cu, 0x27BC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BC14u;
label_27bc14:
    // 0x27bc14: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x27bc14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_27bc18:
    // 0x27bc18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27bc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27bc1c:
    // 0x27bc1c: 0x24a59598  addiu       $a1, $a1, -0x6A68
    ctx->pc = 0x27bc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940056));
label_27bc20:
    // 0x27bc20: 0xc0efefa  jal         func_3BFBE8
label_27bc24:
    if (ctx->pc == 0x27BC24u) {
        ctx->pc = 0x27BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC20u;
        // 0x27bc24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BC28u;
        goto label_27bc28;
    }
    ctx->pc = 0x27BC20u;
    SET_GPR_U32(ctx, 31, 0x27BC28u);
    ctx->pc = 0x27BC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BC20u;
    // 0x27bc24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x27BC20u, 0x27BC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BC28u;
label_27bc28:
    // 0x27bc28: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27bc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27bc2c:
    // 0x27bc2c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27bc2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27bc30:
    // 0x27bc30: 0x8ec5006c  lw          $a1, 0x6C($s6)
    ctx->pc = 0x27bc30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
label_27bc34:
    // 0x27bc34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x27bc34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27bc38:
    // 0x27bc38: 0xc0eef5a  jal         func_3BBD68
label_27bc3c:
    if (ctx->pc == 0x27BC3Cu) {
        ctx->pc = 0x27BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC38u;
        // 0x27bc3c: 0xaec00664  sw          $zero, 0x664($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 1636), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BC40u;
        goto label_27bc40;
    }
    ctx->pc = 0x27BC38u;
    SET_GPR_U32(ctx, 31, 0x27BC40u);
    ctx->pc = 0x27BC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BC38u;
    // 0x27bc3c: 0xaec00664  sw          $zero, 0x664($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 1636), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBD68u, 0x27BC38u, 0x27BC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BC40u;
label_27bc40:
    // 0x27bc40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27bc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27bc44:
    // 0x27bc44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27bc44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27bc48:
    // 0x27bc48: 0xc0ef0b2  jal         func_3BC2C8
label_27bc4c:
    if (ctx->pc == 0x27BC4Cu) {
        ctx->pc = 0x27BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC48u;
        // 0x27bc4c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BC50u;
        goto label_27bc50;
    }
    ctx->pc = 0x27BC48u;
    SET_GPR_U32(ctx, 31, 0x27BC50u);
    ctx->pc = 0x27BC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BC48u;
    // 0x27bc4c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27BC48u, 0x27BC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BC50u;
label_27bc50:
    // 0x27bc50: 0x8ec30090  lw          $v1, 0x90($s6)
    ctx->pc = 0x27bc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
label_27bc54:
    // 0x27bc54: 0x4630005  bgezl       $v1, . + 4 + (0x5 << 2)
label_27bc58:
    if (ctx->pc == 0x27BC58u) {
        ctx->pc = 0x27BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC54u;
        // 0x27bc58: 0x8ec20090  lw          $v0, 0x90($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BC5Cu;
        goto label_27bc5c;
    }
    ctx->pc = 0x27BC54u;
    {
        const bool branch_taken_0x27bc54 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x27bc54) {
            ctx->pc = 0x27BC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BC54u;
            // 0x27bc58: 0x8ec20090  lw          $v0, 0x90($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BC6Cu;
            goto label_27bc6c;
        }
    }
    ctx->pc = 0x27BC5Cu;
label_27bc5c:
    // 0x27bc5c: 0x8ec20664  lw          $v0, 0x664($s6)
    ctx->pc = 0x27bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1636)));
label_27bc60:
    // 0x27bc60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27bc64:
    // 0x27bc64: 0xaec20664  sw          $v0, 0x664($s6)
    ctx->pc = 0x27bc64u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1636), GPR_U32(ctx, 2));
label_27bc68:
    // 0x27bc68: 0x8ec20090  lw          $v0, 0x90($s6)
    ctx->pc = 0x27bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
label_27bc6c:
    // 0x27bc6c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27bc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27bc70:
    // 0x27bc70: 0xc09f0e8  jal         func_27C3A0
label_27bc74:
    if (ctx->pc == 0x27BC74u) {
        ctx->pc = 0x27BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC70u;
        // 0x27bc74: 0xaec20094  sw          $v0, 0x94($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BC78u;
        goto label_27bc78;
    }
    ctx->pc = 0x27BC70u;
    SET_GPR_U32(ctx, 31, 0x27BC78u);
    ctx->pc = 0x27BC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BC70u;
    // 0x27bc74: 0xaec20094  sw          $v0, 0x94($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C3A0u, 0x27BC70u, 0x27BC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BC78u;
label_27bc78:
    // 0x27bc78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27bc78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27bc7c:
    // 0x27bc7c: 0xc09f0ea  jal         func_27C3A8
label_27bc80:
    if (ctx->pc == 0x27BC80u) {
        ctx->pc = 0x27BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC7Cu;
        // 0x27bc80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BC84u;
        goto label_27bc84;
    }
    ctx->pc = 0x27BC7Cu;
    SET_GPR_U32(ctx, 31, 0x27BC84u);
    ctx->pc = 0x27BC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BC7Cu;
    // 0x27bc80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C3A8u, 0x27BC7Cu, 0x27BC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BC84u;
label_27bc84:
    // 0x27bc84: 0x8ec40094  lw          $a0, 0x94($s6)
    ctx->pc = 0x27bc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
label_27bc88:
    // 0x27bc88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27bc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27bc8c:
    // 0x27bc8c: 0xc0ef00e  jal         func_3BC038
label_27bc90:
    if (ctx->pc == 0x27BC90u) {
        ctx->pc = 0x27BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC8Cu;
        // 0x27bc90: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BC94u;
        goto label_27bc94;
    }
    ctx->pc = 0x27BC8Cu;
    SET_GPR_U32(ctx, 31, 0x27BC94u);
    ctx->pc = 0x27BC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BC8Cu;
    // 0x27bc90: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC038u, 0x27BC8Cu, 0x27BC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BC94u;
label_27bc94:
    // 0x27bc94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27bc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27bc98:
    // 0x27bc98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27bc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27bc9c:
    // 0x27bc9c: 0xc0ef0b2  jal         func_3BC2C8
label_27bca0:
    if (ctx->pc == 0x27BCA0u) {
        ctx->pc = 0x27BCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC9Cu;
        // 0x27bca0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BCA4u;
        goto label_27bca4;
    }
    ctx->pc = 0x27BC9Cu;
    SET_GPR_U32(ctx, 31, 0x27BCA4u);
    ctx->pc = 0x27BCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BC9Cu;
    // 0x27bca0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27BC9Cu, 0x27BCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BCA4u;
label_27bca4:
    // 0x27bca4: 0x8ec30090  lw          $v1, 0x90($s6)
    ctx->pc = 0x27bca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
label_27bca8:
    // 0x27bca8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_27bcac:
    if (ctx->pc == 0x27BCACu) {
        ctx->pc = 0x27BCB0u;
        goto label_27bcb0;
    }
    ctx->pc = 0x27BCA8u;
    {
        const bool branch_taken_0x27bca8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x27bca8) {
            ctx->pc = 0x27BCBCu;
            goto label_27bcbc;
        }
    }
    ctx->pc = 0x27BCB0u;
label_27bcb0:
    // 0x27bcb0: 0x8ec20664  lw          $v0, 0x664($s6)
    ctx->pc = 0x27bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1636)));
label_27bcb4:
    // 0x27bcb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27bcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27bcb8:
    // 0x27bcb8: 0xaec20664  sw          $v0, 0x664($s6)
    ctx->pc = 0x27bcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1636), GPR_U32(ctx, 2));
label_27bcbc:
    // 0x27bcbc: 0xc0eefb2  jal         func_3BBEC8
label_27bcc0:
    if (ctx->pc == 0x27BCC0u) {
        ctx->pc = 0x27BCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCBCu;
        // 0x27bcc0: 0x8ec40094  lw          $a0, 0x94($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BCC4u;
        goto label_27bcc4;
    }
    ctx->pc = 0x27BCBCu;
    SET_GPR_U32(ctx, 31, 0x27BCC4u);
    ctx->pc = 0x27BCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BCBCu;
    // 0x27bcc0: 0x8ec40094  lw          $a0, 0x94($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBEC8u, 0x27BCBCu, 0x27BCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BCC4u;
label_27bcc4:
    // 0x27bcc4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27bcc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27bcc8:
    // 0x27bcc8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27bcc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27bccc:
    // 0x27bccc: 0xc0ef0b2  jal         func_3BC2C8
label_27bcd0:
    if (ctx->pc == 0x27BCD0u) {
        ctx->pc = 0x27BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCCCu;
        // 0x27bcd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BCD4u;
        goto label_27bcd4;
    }
    ctx->pc = 0x27BCCCu;
    SET_GPR_U32(ctx, 31, 0x27BCD4u);
    ctx->pc = 0x27BCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BCCCu;
    // 0x27bcd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27BCCCu, 0x27BCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BCD4u;
label_27bcd4:
    // 0x27bcd4: 0x8ec30090  lw          $v1, 0x90($s6)
    ctx->pc = 0x27bcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
label_27bcd8:
    // 0x27bcd8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_27bcdc:
    if (ctx->pc == 0x27BCDCu) {
        ctx->pc = 0x27BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCD8u;
        // 0x27bcdc: 0x8ec20664  lw          $v0, 0x664($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1636)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BCE0u;
        goto label_27bce0;
    }
    ctx->pc = 0x27BCD8u;
    {
        const bool branch_taken_0x27bcd8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x27BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCD8u;
        // 0x27bcdc: 0x8ec20664  lw          $v0, 0x664($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bcd8) {
            ctx->pc = 0x27BCECu;
            goto label_27bcec;
        }
    }
    ctx->pc = 0x27BCE0u;
label_27bce0:
    // 0x27bce0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27bce4:
    // 0x27bce4: 0xaec20664  sw          $v0, 0x664($s6)
    ctx->pc = 0x27bce4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1636), GPR_U32(ctx, 2));
label_27bce8:
    // 0x27bce8: 0x8ec20664  lw          $v0, 0x664($s6)
    ctx->pc = 0x27bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1636)));
label_27bcec:
    // 0x27bcec: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_27bcf0:
    if (ctx->pc == 0x27BCF0u) {
        ctx->pc = 0x27BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCECu;
        // 0x27bcf0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BCF4u;
        goto label_27bcf4;
    }
    ctx->pc = 0x27BCECu;
    {
        const bool branch_taken_0x27bcec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCECu;
        // 0x27bcf0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bcec) {
            ctx->pc = 0x27BD08u;
            goto label_27bd08;
        }
    }
    ctx->pc = 0x27BCF4u;
label_27bcf4:
    // 0x27bcf4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27bcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27bcf8:
    // 0x27bcf8: 0xc0efae1  jal         func_3BEB84
label_27bcfc:
    if (ctx->pc == 0x27BCFCu) {
        ctx->pc = 0x27BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCF8u;
        // 0x27bcfc: 0x24a595b0  addiu       $a1, $a1, -0x6A50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BD00u;
        goto label_27bd00;
    }
    ctx->pc = 0x27BCF8u;
    SET_GPR_U32(ctx, 31, 0x27BD00u);
    ctx->pc = 0x27BCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BCF8u;
    // 0x27bcfc: 0x24a595b0  addiu       $a1, $a1, -0x6A50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x27BCF8u, 0x27BD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD00u;
label_27bd00:
    // 0x27bd00: 0x1000007b  b           . + 4 + (0x7B << 2)
label_27bd04:
    if (ctx->pc == 0x27BD04u) {
        ctx->pc = 0x27BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD00u;
        // 0x27bd04: 0xdfb00980  ld          $s0, 0x980($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BD08u;
        goto label_27bd08;
    }
    ctx->pc = 0x27BD00u;
    {
        const bool branch_taken_0x27bd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD00u;
        // 0x27bd04: 0xdfb00980  ld          $s0, 0x980($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd00) {
            ctx->pc = 0x27BEF0u;
            goto label_27bef0;
        }
    }
    ctx->pc = 0x27BD08u;
label_27bd08:
    // 0x27bd08: 0xc09f0f0  jal         func_27C3C0
label_27bd0c:
    if (ctx->pc == 0x27BD0Cu) {
        ctx->pc = 0x27BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD08u;
        // 0x27bd0c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BD10u;
        goto label_27bd10;
    }
    ctx->pc = 0x27BD08u;
    SET_GPR_U32(ctx, 31, 0x27BD10u);
    ctx->pc = 0x27BD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BD08u;
    // 0x27bd0c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C3C0u, 0x27BD08u, 0x27BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD10u;
label_27bd10:
    // 0x27bd10: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x27bd10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_27bd14:
    // 0x27bd14: 0x26c50670  addiu       $a1, $s6, 0x670
    ctx->pc = 0x27bd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1648));
label_27bd18:
    // 0x27bd18: 0x8c64bd50  lw          $a0, -0x42B0($v1)
    ctx->pc = 0x27bd18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950224)));
label_27bd1c:
    // 0x27bd1c: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x27bd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_27bd20:
    // 0x27bd20: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x27bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_27bd24:
    // 0x27bd24: 0x40f809  jalr        $v0
label_27bd28:
    if (ctx->pc == 0x27BD28u) {
        ctx->pc = 0x27BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD24u;
        // 0x27bd28: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BD2Cu;
        goto label_27bd2c;
    }
    ctx->pc = 0x27BD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27BD2Cu);
        ctx->pc = 0x27BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD24u;
        // 0x27bd28: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BD24u, 0x27BD2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27BD2Cu;
label_27bd2c:
    // 0x27bd2c: 0x10000070  b           . + 4 + (0x70 << 2)
label_27bd30:
    if (ctx->pc == 0x27BD30u) {
        ctx->pc = 0x27BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD2Cu;
        // 0x27bd30: 0xdfb00980  ld          $s0, 0x980($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BD34u;
        goto label_27bd34;
    }
    ctx->pc = 0x27BD2Cu;
    {
        const bool branch_taken_0x27bd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD2Cu;
        // 0x27bd30: 0xdfb00980  ld          $s0, 0x980($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd2c) {
            ctx->pc = 0x27BEF0u;
            goto label_27bef0;
        }
    }
    ctx->pc = 0x27BD34u;
label_27bd34:
    // 0x27bd34: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x27bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_27bd38:
    // 0x27bd38: 0x8c43bd50  lw          $v1, -0x42B0($v0)
    ctx->pc = 0x27bd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_27bd3c:
    // 0x27bd3c: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x27bd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_27bd40:
    // 0x27bd40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x27bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27bd44:
    // 0x27bd44: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x27bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_27bd48:
    // 0x27bd48: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x27bd48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_27bd4c:
    // 0x27bd4c: 0xfac10670  sqc2        $vf1, 0x670($s6)
    ctx->pc = 0x27bd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 1648), _mm_castps_si128(ctx->vu0_vf[1]));
label_27bd50:
    // 0x27bd50: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27bd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27bd54:
    // 0x27bd54: 0xc09f118  jal         func_27C460
label_27bd58:
    if (ctx->pc == 0x27BD58u) {
        ctx->pc = 0x27BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD54u;
        // 0x27bd58: 0x26d305e4  addiu       $s3, $s6, 0x5E4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1508));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BD5Cu;
        goto label_27bd5c;
    }
    ctx->pc = 0x27BD54u;
    SET_GPR_U32(ctx, 31, 0x27BD5Cu);
    ctx->pc = 0x27BD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BD54u;
    // 0x27bd58: 0x26d305e4  addiu       $s3, $s6, 0x5E4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1508));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C460u, 0x27BD54u, 0x27BD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD5Cu;
label_27bd5c:
    // 0x27bd5c: 0x26d1008c  addiu       $s1, $s6, 0x8C
    ctx->pc = 0x27bd5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 140));
label_27bd60:
    // 0x27bd60: 0x27b004e0  addiu       $s0, $sp, 0x4E0
    ctx->pc = 0x27bd60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_27bd64:
    // 0x27bd64: 0x27a504d0  addiu       $a1, $sp, 0x4D0
    ctx->pc = 0x27bd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_27bd68:
    // 0x27bd68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27bd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27bd6c:
    // 0x27bd6c: 0xc0efbe8  jal         func_3BEFA0
label_27bd70:
    if (ctx->pc == 0x27BD70u) {
        ctx->pc = 0x27BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD6Cu;
        // 0x27bd70: 0x26d20090  addiu       $s2, $s6, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BD74u;
        goto label_27bd74;
    }
    ctx->pc = 0x27BD6Cu;
    SET_GPR_U32(ctx, 31, 0x27BD74u);
    ctx->pc = 0x27BD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BD6Cu;
    // 0x27bd70: 0x26d20090  addiu       $s2, $s6, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27BD6Cu, 0x27BD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD74u;
label_27bd74:
    // 0x27bd74: 0x26c50524  addiu       $a1, $s6, 0x524
    ctx->pc = 0x27bd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1316));
label_27bd78:
    // 0x27bd78: 0xc0efae1  jal         func_3BEB84
label_27bd7c:
    if (ctx->pc == 0x27BD7Cu) {
        ctx->pc = 0x27BD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD78u;
        // 0x27bd7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BD80u;
        goto label_27bd80;
    }
    ctx->pc = 0x27BD78u;
    SET_GPR_U32(ctx, 31, 0x27BD80u);
    ctx->pc = 0x27BD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BD78u;
    // 0x27bd7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x27BD78u, 0x27BD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD80u;
label_27bd80:
    // 0x27bd80: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x27bd80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_27bd84:
    // 0x27bd84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27bd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27bd88:
    // 0x27bd88: 0xc0efae1  jal         func_3BEB84
label_27bd8c:
    if (ctx->pc == 0x27BD8Cu) {
        ctx->pc = 0x27BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD88u;
        // 0x27bd8c: 0x24a59578  addiu       $a1, $a1, -0x6A88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BD90u;
        goto label_27bd90;
    }
    ctx->pc = 0x27BD88u;
    SET_GPR_U32(ctx, 31, 0x27BD90u);
    ctx->pc = 0x27BD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BD88u;
    // 0x27bd8c: 0x24a59578  addiu       $a1, $a1, -0x6A88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x27BD88u, 0x27BD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD90u;
label_27bd90:
    // 0x27bd90: 0x26c505c4  addiu       $a1, $s6, 0x5C4
    ctx->pc = 0x27bd90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1476));
label_27bd94:
    // 0x27bd94: 0xc0efae1  jal         func_3BEB84
label_27bd98:
    if (ctx->pc == 0x27BD98u) {
        ctx->pc = 0x27BD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD94u;
        // 0x27bd98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BD9Cu;
        goto label_27bd9c;
    }
    ctx->pc = 0x27BD94u;
    SET_GPR_U32(ctx, 31, 0x27BD9Cu);
    ctx->pc = 0x27BD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BD94u;
    // 0x27bd98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x27BD94u, 0x27BD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD9Cu;
label_27bd9c:
    // 0x27bd9c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x27bd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_27bda0:
    // 0x27bda0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27bda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27bda4:
    // 0x27bda4: 0x24a595c0  addiu       $a1, $a1, -0x6A40
    ctx->pc = 0x27bda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940096));
label_27bda8:
    // 0x27bda8: 0xc0efefa  jal         func_3BFBE8
label_27bdac:
    if (ctx->pc == 0x27BDACu) {
        ctx->pc = 0x27BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BDA8u;
        // 0x27bdac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BDB0u;
        goto label_27bdb0;
    }
    ctx->pc = 0x27BDA8u;
    SET_GPR_U32(ctx, 31, 0x27BDB0u);
    ctx->pc = 0x27BDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BDA8u;
    // 0x27bdac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x27BDA8u, 0x27BDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BDB0u;
label_27bdb0:
    // 0x27bdb0: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x27bdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_27bdb4:
    // 0x27bdb4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27bdb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27bdb8:
    // 0x27bdb8: 0x8ec5006c  lw          $a1, 0x6C($s6)
    ctx->pc = 0x27bdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
label_27bdbc:
    // 0x27bdbc: 0x24070203  addiu       $a3, $zero, 0x203
    ctx->pc = 0x27bdbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
label_27bdc0:
    // 0x27bdc0: 0xc0eef5a  jal         func_3BBD68
label_27bdc4:
    if (ctx->pc == 0x27BDC4u) {
        ctx->pc = 0x27BDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BDC0u;
        // 0x27bdc4: 0xaec00664  sw          $zero, 0x664($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 1636), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BDC8u;
        goto label_27bdc8;
    }
    ctx->pc = 0x27BDC0u;
    SET_GPR_U32(ctx, 31, 0x27BDC8u);
    ctx->pc = 0x27BDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BDC0u;
    // 0x27bdc4: 0xaec00664  sw          $zero, 0x664($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 1636), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBD68u, 0x27BDC0u, 0x27BDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BDC8u;
label_27bdc8:
    // 0x27bdc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27bdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27bdcc:
    // 0x27bdcc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27bdccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27bdd0:
    // 0x27bdd0: 0xc0ef0b2  jal         func_3BC2C8
label_27bdd4:
    if (ctx->pc == 0x27BDD4u) {
        ctx->pc = 0x27BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BDD0u;
        // 0x27bdd4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BDD8u;
        goto label_27bdd8;
    }
    ctx->pc = 0x27BDD0u;
    SET_GPR_U32(ctx, 31, 0x27BDD8u);
    ctx->pc = 0x27BDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BDD0u;
    // 0x27bdd4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27BDD0u, 0x27BDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BDD8u;
label_27bdd8:
    // 0x27bdd8: 0x8ec30090  lw          $v1, 0x90($s6)
    ctx->pc = 0x27bdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
label_27bddc:
    // 0x27bddc: 0x4630005  bgezl       $v1, . + 4 + (0x5 << 2)
label_27bde0:
    if (ctx->pc == 0x27BDE0u) {
        ctx->pc = 0x27BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BDDCu;
        // 0x27bde0: 0x8ec20090  lw          $v0, 0x90($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BDE4u;
        goto label_27bde4;
    }
    ctx->pc = 0x27BDDCu;
    {
        const bool branch_taken_0x27bddc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x27bddc) {
            ctx->pc = 0x27BDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BDDCu;
            // 0x27bde0: 0x8ec20090  lw          $v0, 0x90($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BDF4u;
            goto label_27bdf4;
        }
    }
    ctx->pc = 0x27BDE4u;
label_27bde4:
    // 0x27bde4: 0x8ec20664  lw          $v0, 0x664($s6)
    ctx->pc = 0x27bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1636)));
label_27bde8:
    // 0x27bde8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27bde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27bdec:
    // 0x27bdec: 0xaec20664  sw          $v0, 0x664($s6)
    ctx->pc = 0x27bdecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1636), GPR_U32(ctx, 2));
label_27bdf0:
    // 0x27bdf0: 0x8ec20090  lw          $v0, 0x90($s6)
    ctx->pc = 0x27bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
label_27bdf4:
    // 0x27bdf4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27bdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27bdf8:
    // 0x27bdf8: 0xc09f0e8  jal         func_27C3A0
label_27bdfc:
    if (ctx->pc == 0x27BDFCu) {
        ctx->pc = 0x27BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BDF8u;
        // 0x27bdfc: 0xaec20094  sw          $v0, 0x94($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BE00u;
        goto label_27be00;
    }
    ctx->pc = 0x27BDF8u;
    SET_GPR_U32(ctx, 31, 0x27BE00u);
    ctx->pc = 0x27BDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BDF8u;
    // 0x27bdfc: 0xaec20094  sw          $v0, 0x94($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C3A0u, 0x27BDF8u, 0x27BE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BE00u;
label_27be00:
    // 0x27be00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27be00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27be04:
    // 0x27be04: 0xc09f0ea  jal         func_27C3A8
label_27be08:
    if (ctx->pc == 0x27BE08u) {
        ctx->pc = 0x27BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE04u;
        // 0x27be08: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BE0Cu;
        goto label_27be0c;
    }
    ctx->pc = 0x27BE04u;
    SET_GPR_U32(ctx, 31, 0x27BE0Cu);
    ctx->pc = 0x27BE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BE04u;
    // 0x27be08: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C3A8u, 0x27BE04u, 0x27BE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BE0Cu;
label_27be0c:
    // 0x27be0c: 0x8ec40094  lw          $a0, 0x94($s6)
    ctx->pc = 0x27be0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
label_27be10:
    // 0x27be10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27be10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27be14:
    // 0x27be14: 0xc0ef054  jal         func_3BC150
label_27be18:
    if (ctx->pc == 0x27BE18u) {
        ctx->pc = 0x27BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE14u;
        // 0x27be18: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BE1Cu;
        goto label_27be1c;
    }
    ctx->pc = 0x27BE14u;
    SET_GPR_U32(ctx, 31, 0x27BE1Cu);
    ctx->pc = 0x27BE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BE14u;
    // 0x27be18: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC150u, 0x27BE14u, 0x27BE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BE1Cu;
label_27be1c:
    // 0x27be1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27be1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27be20:
    // 0x27be20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27be20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27be24:
    // 0x27be24: 0xc0ef0b2  jal         func_3BC2C8
label_27be28:
    if (ctx->pc == 0x27BE28u) {
        ctx->pc = 0x27BE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE24u;
        // 0x27be28: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BE2Cu;
        goto label_27be2c;
    }
    ctx->pc = 0x27BE24u;
    SET_GPR_U32(ctx, 31, 0x27BE2Cu);
    ctx->pc = 0x27BE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BE24u;
    // 0x27be28: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27BE24u, 0x27BE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BE2Cu;
label_27be2c:
    // 0x27be2c: 0x8ec30090  lw          $v1, 0x90($s6)
    ctx->pc = 0x27be2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
label_27be30:
    // 0x27be30: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_27be34:
    if (ctx->pc == 0x27BE34u) {
        ctx->pc = 0x27BE38u;
        goto label_27be38;
    }
    ctx->pc = 0x27BE30u;
    {
        const bool branch_taken_0x27be30 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x27be30) {
            ctx->pc = 0x27BE44u;
            goto label_27be44;
        }
    }
    ctx->pc = 0x27BE38u;
label_27be38:
    // 0x27be38: 0x8ec20664  lw          $v0, 0x664($s6)
    ctx->pc = 0x27be38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1636)));
label_27be3c:
    // 0x27be3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27be3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27be40:
    // 0x27be40: 0xaec20664  sw          $v0, 0x664($s6)
    ctx->pc = 0x27be40u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1636), GPR_U32(ctx, 2));
label_27be44:
    // 0x27be44: 0xc0eefb2  jal         func_3BBEC8
label_27be48:
    if (ctx->pc == 0x27BE48u) {
        ctx->pc = 0x27BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE44u;
        // 0x27be48: 0x8ec40094  lw          $a0, 0x94($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BE4Cu;
        goto label_27be4c;
    }
    ctx->pc = 0x27BE44u;
    SET_GPR_U32(ctx, 31, 0x27BE4Cu);
    ctx->pc = 0x27BE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BE44u;
    // 0x27be48: 0x8ec40094  lw          $a0, 0x94($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBEC8u, 0x27BE44u, 0x27BE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BE4Cu;
label_27be4c:
    // 0x27be4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27be4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27be50:
    // 0x27be50: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27be50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27be54:
    // 0x27be54: 0xc0ef0b2  jal         func_3BC2C8
label_27be58:
    if (ctx->pc == 0x27BE58u) {
        ctx->pc = 0x27BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE54u;
        // 0x27be58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BE5Cu;
        goto label_27be5c;
    }
    ctx->pc = 0x27BE54u;
    SET_GPR_U32(ctx, 31, 0x27BE5Cu);
    ctx->pc = 0x27BE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BE54u;
    // 0x27be58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x27BE54u, 0x27BE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BE5Cu;
label_27be5c:
    // 0x27be5c: 0x8ec30090  lw          $v1, 0x90($s6)
    ctx->pc = 0x27be5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
label_27be60:
    // 0x27be60: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_27be64:
    if (ctx->pc == 0x27BE64u) {
        ctx->pc = 0x27BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE60u;
        // 0x27be64: 0x8ec20664  lw          $v0, 0x664($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1636)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BE68u;
        goto label_27be68;
    }
    ctx->pc = 0x27BE60u;
    {
        const bool branch_taken_0x27be60 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x27BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE60u;
        // 0x27be64: 0x8ec20664  lw          $v0, 0x664($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be60) {
            ctx->pc = 0x27BE74u;
            goto label_27be74;
        }
    }
    ctx->pc = 0x27BE68u;
label_27be68:
    // 0x27be68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27be68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27be6c:
    // 0x27be6c: 0xaec20664  sw          $v0, 0x664($s6)
    ctx->pc = 0x27be6cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1636), GPR_U32(ctx, 2));
label_27be70:
    // 0x27be70: 0x8ec20664  lw          $v0, 0x664($s6)
    ctx->pc = 0x27be70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1636)));
label_27be74:
    // 0x27be74: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
label_27be78:
    if (ctx->pc == 0x27BE78u) {
        ctx->pc = 0x27BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE74u;
        // 0x27be78: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BE7Cu;
        goto label_27be7c;
    }
    ctx->pc = 0x27BE74u;
    {
        const bool branch_taken_0x27be74 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE74u;
        // 0x27be78: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be74) {
            ctx->pc = 0x27BEECu;
            goto label_27beec;
        }
    }
    ctx->pc = 0x27BE7Cu;
label_27be7c:
    // 0x27be7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27be7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27be80:
    // 0x27be80: 0xc0efae1  jal         func_3BEB84
label_27be84:
    if (ctx->pc == 0x27BE84u) {
        ctx->pc = 0x27BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE80u;
        // 0x27be84: 0x24a595d8  addiu       $a1, $a1, -0x6A28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BE88u;
        goto label_27be88;
    }
    ctx->pc = 0x27BE80u;
    SET_GPR_U32(ctx, 31, 0x27BE88u);
    ctx->pc = 0x27BE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BE80u;
    // 0x27be84: 0x24a595d8  addiu       $a1, $a1, -0x6A28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x27BE80u, 0x27BE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BE88u;
label_27be88:
    // 0x27be88: 0x10000019  b           . + 4 + (0x19 << 2)
label_27be8c:
    if (ctx->pc == 0x27BE8Cu) {
        ctx->pc = 0x27BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE88u;
        // 0x27be8c: 0xdfb00980  ld          $s0, 0x980($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BE90u;
        goto label_27be90;
    }
    ctx->pc = 0x27BE88u;
    {
        const bool branch_taken_0x27be88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE88u;
        // 0x27be8c: 0xdfb00980  ld          $s0, 0x980($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be88) {
            ctx->pc = 0x27BEF0u;
            goto label_27bef0;
        }
    }
    ctx->pc = 0x27BE90u;
label_27be90:
    // 0x27be90: 0x10000006  b           . + 4 + (0x6 << 2)
label_27be94:
    if (ctx->pc == 0x27BE94u) {
        ctx->pc = 0x27BE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE90u;
        // 0x27be94: 0x26c504a4  addiu       $a1, $s6, 0x4A4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BE98u;
        goto label_27be98;
    }
    ctx->pc = 0x27BE90u;
    {
        const bool branch_taken_0x27be90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE90u;
        // 0x27be94: 0x26c504a4  addiu       $a1, $s6, 0x4A4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be90) {
            ctx->pc = 0x27BEACu;
            goto label_27beac;
        }
    }
    ctx->pc = 0x27BE98u;
label_27be98:
    // 0x27be98: 0x10000004  b           . + 4 + (0x4 << 2)
label_27be9c:
    if (ctx->pc == 0x27BE9Cu) {
        ctx->pc = 0x27BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE98u;
        // 0x27be9c: 0x26c504c4  addiu       $a1, $s6, 0x4C4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1220));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BEA0u;
        goto label_27bea0;
    }
    ctx->pc = 0x27BE98u;
    {
        const bool branch_taken_0x27be98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE98u;
        // 0x27be9c: 0x26c504c4  addiu       $a1, $s6, 0x4C4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be98) {
            ctx->pc = 0x27BEACu;
            goto label_27beac;
        }
    }
    ctx->pc = 0x27BEA0u;
label_27bea0:
    // 0x27bea0: 0x10000002  b           . + 4 + (0x2 << 2)
label_27bea4:
    if (ctx->pc == 0x27BEA4u) {
        ctx->pc = 0x27BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BEA0u;
        // 0x27bea4: 0x26c504e4  addiu       $a1, $s6, 0x4E4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1252));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BEA8u;
        goto label_27bea8;
    }
    ctx->pc = 0x27BEA0u;
    {
        const bool branch_taken_0x27bea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BEA0u;
        // 0x27bea4: 0x26c504e4  addiu       $a1, $s6, 0x4E4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bea0) {
            ctx->pc = 0x27BEACu;
            goto label_27beac;
        }
    }
    ctx->pc = 0x27BEA8u;
label_27bea8:
    // 0x27bea8: 0x26c50504  addiu       $a1, $s6, 0x504
    ctx->pc = 0x27bea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1284));
label_27beac:
    // 0x27beac: 0xc0efbe8  jal         func_3BEFA0
label_27beb0:
    if (ctx->pc == 0x27BEB0u) {
        ctx->pc = 0x27BEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BEACu;
        // 0x27beb0: 0x26c40524  addiu       $a0, $s6, 0x524 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1316));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BEB4u;
        goto label_27beb4;
    }
    ctx->pc = 0x27BEACu;
    SET_GPR_U32(ctx, 31, 0x27BEB4u);
    ctx->pc = 0x27BEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BEACu;
    // 0x27beb0: 0x26c40524  addiu       $a0, $s6, 0x524 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1316));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27BEACu, 0x27BEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BEB4u;
label_27beb4:
    // 0x27beb4: 0x1000000e  b           . + 4 + (0xE << 2)
label_27beb8:
    if (ctx->pc == 0x27BEB8u) {
        ctx->pc = 0x27BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BEB4u;
        // 0x27beb8: 0xdfb00980  ld          $s0, 0x980($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BEBCu;
        goto label_27bebc;
    }
    ctx->pc = 0x27BEB4u;
    {
        const bool branch_taken_0x27beb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BEB4u;
        // 0x27beb8: 0xdfb00980  ld          $s0, 0x980($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27beb4) {
            ctx->pc = 0x27BEF0u;
            goto label_27bef0;
        }
    }
    ctx->pc = 0x27BEBCu;
label_27bebc:
    // 0x27bebc: 0x10000004  b           . + 4 + (0x4 << 2)
label_27bec0:
    if (ctx->pc == 0x27BEC0u) {
        ctx->pc = 0x27BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BEBCu;
        // 0x27bec0: 0x26c50544  addiu       $a1, $s6, 0x544 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1348));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BEC4u;
        goto label_27bec4;
    }
    ctx->pc = 0x27BEBCu;
    {
        const bool branch_taken_0x27bebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BEBCu;
        // 0x27bec0: 0x26c50544  addiu       $a1, $s6, 0x544 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bebc) {
            ctx->pc = 0x27BED0u;
            goto label_27bed0;
        }
    }
    ctx->pc = 0x27BEC4u;
label_27bec4:
    // 0x27bec4: 0x10000002  b           . + 4 + (0x2 << 2)
label_27bec8:
    if (ctx->pc == 0x27BEC8u) {
        ctx->pc = 0x27BEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BEC4u;
        // 0x27bec8: 0x26c50564  addiu       $a1, $s6, 0x564 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1380));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BECCu;
        goto label_27becc;
    }
    ctx->pc = 0x27BEC4u;
    {
        const bool branch_taken_0x27bec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BEC4u;
        // 0x27bec8: 0x26c50564  addiu       $a1, $s6, 0x564 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1380));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bec4) {
            ctx->pc = 0x27BED0u;
            goto label_27bed0;
        }
    }
    ctx->pc = 0x27BECCu;
label_27becc:
    // 0x27becc: 0x26c50584  addiu       $a1, $s6, 0x584
    ctx->pc = 0x27beccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1412));
label_27bed0:
    // 0x27bed0: 0xc0efbe8  jal         func_3BEFA0
label_27bed4:
    if (ctx->pc == 0x27BED4u) {
        ctx->pc = 0x27BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BED0u;
        // 0x27bed4: 0x26c405c4  addiu       $a0, $s6, 0x5C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1476));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BED8u;
        goto label_27bed8;
    }
    ctx->pc = 0x27BED0u;
    SET_GPR_U32(ctx, 31, 0x27BED8u);
    ctx->pc = 0x27BED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BED0u;
    // 0x27bed4: 0x26c405c4  addiu       $a0, $s6, 0x5C4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1476));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27BED0u, 0x27BED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BED8u;
label_27bed8:
    // 0x27bed8: 0x10000005  b           . + 4 + (0x5 << 2)
label_27bedc:
    if (ctx->pc == 0x27BEDCu) {
        ctx->pc = 0x27BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BED8u;
        // 0x27bedc: 0xdfb00980  ld          $s0, 0x980($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BEE0u;
        goto label_27bee0;
    }
    ctx->pc = 0x27BED8u;
    {
        const bool branch_taken_0x27bed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BED8u;
        // 0x27bedc: 0xdfb00980  ld          $s0, 0x980($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bed8) {
            ctx->pc = 0x27BEF0u;
            goto label_27bef0;
        }
    }
    ctx->pc = 0x27BEE0u;
label_27bee0:
    // 0x27bee0: 0x26c505a4  addiu       $a1, $s6, 0x5A4
    ctx->pc = 0x27bee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1444));
label_27bee4:
    // 0x27bee4: 0xc0efbe8  jal         func_3BEFA0
label_27bee8:
    if (ctx->pc == 0x27BEE8u) {
        ctx->pc = 0x27BEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BEE4u;
        // 0x27bee8: 0x26c405c4  addiu       $a0, $s6, 0x5C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1476));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BEECu;
        goto label_27beec;
    }
    ctx->pc = 0x27BEE4u;
    SET_GPR_U32(ctx, 31, 0x27BEECu);
    ctx->pc = 0x27BEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BEE4u;
    // 0x27bee8: 0x26c405c4  addiu       $a0, $s6, 0x5C4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1476));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x27BEE4u, 0x27BEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BEECu;
label_27beec:
    // 0x27beec: 0xdfb00980  ld          $s0, 0x980($sp)
    ctx->pc = 0x27beecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2432)));
label_27bef0:
    // 0x27bef0: 0xdfb10988  ld          $s1, 0x988($sp)
    ctx->pc = 0x27bef0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 2440)));
label_27bef4:
    // 0x27bef4: 0xdfb20990  ld          $s2, 0x990($sp)
    ctx->pc = 0x27bef4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 2448)));
label_27bef8:
    // 0x27bef8: 0xdfb30998  ld          $s3, 0x998($sp)
    ctx->pc = 0x27bef8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 2456)));
label_27befc:
    // 0x27befc: 0xdfb409a0  ld          $s4, 0x9A0($sp)
    ctx->pc = 0x27befcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 2464)));
label_27bf00:
    // 0x27bf00: 0xdfb509a8  ld          $s5, 0x9A8($sp)
    ctx->pc = 0x27bf00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 2472)));
label_27bf04:
    // 0x27bf04: 0xdfb609b0  ld          $s6, 0x9B0($sp)
    ctx->pc = 0x27bf04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 2480)));
label_27bf08:
    // 0x27bf08: 0xdfb709b8  ld          $s7, 0x9B8($sp)
    ctx->pc = 0x27bf08u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 2488)));
label_27bf0c:
    // 0x27bf0c: 0xdfbe09c0  ld          $fp, 0x9C0($sp)
    ctx->pc = 0x27bf0cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 2496)));
label_27bf10:
    // 0x27bf10: 0xdfbf09c8  ld          $ra, 0x9C8($sp)
    ctx->pc = 0x27bf10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2504)));
label_27bf14:
    // 0x27bf14: 0x3e00008  jr          $ra
label_27bf18:
    if (ctx->pc == 0x27BF18u) {
        ctx->pc = 0x27BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF14u;
        // 0x27bf18: 0x27bd09d0  addiu       $sp, $sp, 0x9D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BF1Cu;
        goto label_27bf1c;
    }
    ctx->pc = 0x27BF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF14u;
        // 0x27bf18: 0x27bd09d0  addiu       $sp, $sp, 0x9D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BF1Cu;
label_27bf1c:
    // 0x27bf1c: 0x0  nop
    ctx->pc = 0x27bf1cu;
    // NOP
    ctx->pc = 0x27bf20u;
}
