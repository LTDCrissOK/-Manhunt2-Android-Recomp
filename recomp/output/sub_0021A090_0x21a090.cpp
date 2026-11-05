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

// Function: sub_0021A090
// Address: 0x21a090 - 0x21a658
void sub_0021A090_0x21a090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A090_0x21a090");
#endif

    switch (ctx->pc) {
        case 0x21a090u: goto label_21a090;
        case 0x21a094u: goto label_21a094;
        case 0x21a098u: goto label_21a098;
        case 0x21a09cu: goto label_21a09c;
        case 0x21a0a0u: goto label_21a0a0;
        case 0x21a0a4u: goto label_21a0a4;
        case 0x21a0a8u: goto label_21a0a8;
        case 0x21a0acu: goto label_21a0ac;
        case 0x21a0b0u: goto label_21a0b0;
        case 0x21a0b4u: goto label_21a0b4;
        case 0x21a0b8u: goto label_21a0b8;
        case 0x21a0bcu: goto label_21a0bc;
        case 0x21a0c0u: goto label_21a0c0;
        case 0x21a0c4u: goto label_21a0c4;
        case 0x21a0c8u: goto label_21a0c8;
        case 0x21a0ccu: goto label_21a0cc;
        case 0x21a0d0u: goto label_21a0d0;
        case 0x21a0d4u: goto label_21a0d4;
        case 0x21a0d8u: goto label_21a0d8;
        case 0x21a0dcu: goto label_21a0dc;
        case 0x21a0e0u: goto label_21a0e0;
        case 0x21a0e4u: goto label_21a0e4;
        case 0x21a0e8u: goto label_21a0e8;
        case 0x21a0ecu: goto label_21a0ec;
        case 0x21a0f0u: goto label_21a0f0;
        case 0x21a0f4u: goto label_21a0f4;
        case 0x21a0f8u: goto label_21a0f8;
        case 0x21a0fcu: goto label_21a0fc;
        case 0x21a100u: goto label_21a100;
        case 0x21a104u: goto label_21a104;
        case 0x21a108u: goto label_21a108;
        case 0x21a10cu: goto label_21a10c;
        case 0x21a110u: goto label_21a110;
        case 0x21a114u: goto label_21a114;
        case 0x21a118u: goto label_21a118;
        case 0x21a11cu: goto label_21a11c;
        case 0x21a120u: goto label_21a120;
        case 0x21a124u: goto label_21a124;
        case 0x21a128u: goto label_21a128;
        case 0x21a12cu: goto label_21a12c;
        case 0x21a130u: goto label_21a130;
        case 0x21a134u: goto label_21a134;
        case 0x21a138u: goto label_21a138;
        case 0x21a13cu: goto label_21a13c;
        case 0x21a140u: goto label_21a140;
        case 0x21a144u: goto label_21a144;
        case 0x21a148u: goto label_21a148;
        case 0x21a14cu: goto label_21a14c;
        case 0x21a150u: goto label_21a150;
        case 0x21a154u: goto label_21a154;
        case 0x21a158u: goto label_21a158;
        case 0x21a15cu: goto label_21a15c;
        case 0x21a160u: goto label_21a160;
        case 0x21a164u: goto label_21a164;
        case 0x21a168u: goto label_21a168;
        case 0x21a16cu: goto label_21a16c;
        case 0x21a170u: goto label_21a170;
        case 0x21a174u: goto label_21a174;
        case 0x21a178u: goto label_21a178;
        case 0x21a17cu: goto label_21a17c;
        case 0x21a180u: goto label_21a180;
        case 0x21a184u: goto label_21a184;
        case 0x21a188u: goto label_21a188;
        case 0x21a18cu: goto label_21a18c;
        case 0x21a190u: goto label_21a190;
        case 0x21a194u: goto label_21a194;
        case 0x21a198u: goto label_21a198;
        case 0x21a19cu: goto label_21a19c;
        case 0x21a1a0u: goto label_21a1a0;
        case 0x21a1a4u: goto label_21a1a4;
        case 0x21a1a8u: goto label_21a1a8;
        case 0x21a1acu: goto label_21a1ac;
        case 0x21a1b0u: goto label_21a1b0;
        case 0x21a1b4u: goto label_21a1b4;
        case 0x21a1b8u: goto label_21a1b8;
        case 0x21a1bcu: goto label_21a1bc;
        case 0x21a1c0u: goto label_21a1c0;
        case 0x21a1c4u: goto label_21a1c4;
        case 0x21a1c8u: goto label_21a1c8;
        case 0x21a1ccu: goto label_21a1cc;
        case 0x21a1d0u: goto label_21a1d0;
        case 0x21a1d4u: goto label_21a1d4;
        case 0x21a1d8u: goto label_21a1d8;
        case 0x21a1dcu: goto label_21a1dc;
        case 0x21a1e0u: goto label_21a1e0;
        case 0x21a1e4u: goto label_21a1e4;
        case 0x21a1e8u: goto label_21a1e8;
        case 0x21a1ecu: goto label_21a1ec;
        case 0x21a1f0u: goto label_21a1f0;
        case 0x21a1f4u: goto label_21a1f4;
        case 0x21a1f8u: goto label_21a1f8;
        case 0x21a1fcu: goto label_21a1fc;
        case 0x21a200u: goto label_21a200;
        case 0x21a204u: goto label_21a204;
        case 0x21a208u: goto label_21a208;
        case 0x21a20cu: goto label_21a20c;
        case 0x21a210u: goto label_21a210;
        case 0x21a214u: goto label_21a214;
        case 0x21a218u: goto label_21a218;
        case 0x21a21cu: goto label_21a21c;
        case 0x21a220u: goto label_21a220;
        case 0x21a224u: goto label_21a224;
        case 0x21a228u: goto label_21a228;
        case 0x21a22cu: goto label_21a22c;
        case 0x21a230u: goto label_21a230;
        case 0x21a234u: goto label_21a234;
        case 0x21a238u: goto label_21a238;
        case 0x21a23cu: goto label_21a23c;
        case 0x21a240u: goto label_21a240;
        case 0x21a244u: goto label_21a244;
        case 0x21a248u: goto label_21a248;
        case 0x21a24cu: goto label_21a24c;
        case 0x21a250u: goto label_21a250;
        case 0x21a254u: goto label_21a254;
        case 0x21a258u: goto label_21a258;
        case 0x21a25cu: goto label_21a25c;
        case 0x21a260u: goto label_21a260;
        case 0x21a264u: goto label_21a264;
        case 0x21a268u: goto label_21a268;
        case 0x21a26cu: goto label_21a26c;
        case 0x21a270u: goto label_21a270;
        case 0x21a274u: goto label_21a274;
        case 0x21a278u: goto label_21a278;
        case 0x21a27cu: goto label_21a27c;
        case 0x21a280u: goto label_21a280;
        case 0x21a284u: goto label_21a284;
        case 0x21a288u: goto label_21a288;
        case 0x21a28cu: goto label_21a28c;
        case 0x21a290u: goto label_21a290;
        case 0x21a294u: goto label_21a294;
        case 0x21a298u: goto label_21a298;
        case 0x21a29cu: goto label_21a29c;
        case 0x21a2a0u: goto label_21a2a0;
        case 0x21a2a4u: goto label_21a2a4;
        case 0x21a2a8u: goto label_21a2a8;
        case 0x21a2acu: goto label_21a2ac;
        case 0x21a2b0u: goto label_21a2b0;
        case 0x21a2b4u: goto label_21a2b4;
        case 0x21a2b8u: goto label_21a2b8;
        case 0x21a2bcu: goto label_21a2bc;
        case 0x21a2c0u: goto label_21a2c0;
        case 0x21a2c4u: goto label_21a2c4;
        case 0x21a2c8u: goto label_21a2c8;
        case 0x21a2ccu: goto label_21a2cc;
        case 0x21a2d0u: goto label_21a2d0;
        case 0x21a2d4u: goto label_21a2d4;
        case 0x21a2d8u: goto label_21a2d8;
        case 0x21a2dcu: goto label_21a2dc;
        case 0x21a2e0u: goto label_21a2e0;
        case 0x21a2e4u: goto label_21a2e4;
        case 0x21a2e8u: goto label_21a2e8;
        case 0x21a2ecu: goto label_21a2ec;
        case 0x21a2f0u: goto label_21a2f0;
        case 0x21a2f4u: goto label_21a2f4;
        case 0x21a2f8u: goto label_21a2f8;
        case 0x21a2fcu: goto label_21a2fc;
        case 0x21a300u: goto label_21a300;
        case 0x21a304u: goto label_21a304;
        case 0x21a308u: goto label_21a308;
        case 0x21a30cu: goto label_21a30c;
        case 0x21a310u: goto label_21a310;
        case 0x21a314u: goto label_21a314;
        case 0x21a318u: goto label_21a318;
        case 0x21a31cu: goto label_21a31c;
        case 0x21a320u: goto label_21a320;
        case 0x21a324u: goto label_21a324;
        case 0x21a328u: goto label_21a328;
        case 0x21a32cu: goto label_21a32c;
        case 0x21a330u: goto label_21a330;
        case 0x21a334u: goto label_21a334;
        case 0x21a338u: goto label_21a338;
        case 0x21a33cu: goto label_21a33c;
        case 0x21a340u: goto label_21a340;
        case 0x21a344u: goto label_21a344;
        case 0x21a348u: goto label_21a348;
        case 0x21a34cu: goto label_21a34c;
        case 0x21a350u: goto label_21a350;
        case 0x21a354u: goto label_21a354;
        case 0x21a358u: goto label_21a358;
        case 0x21a35cu: goto label_21a35c;
        case 0x21a360u: goto label_21a360;
        case 0x21a364u: goto label_21a364;
        case 0x21a368u: goto label_21a368;
        case 0x21a36cu: goto label_21a36c;
        case 0x21a370u: goto label_21a370;
        case 0x21a374u: goto label_21a374;
        case 0x21a378u: goto label_21a378;
        case 0x21a37cu: goto label_21a37c;
        case 0x21a380u: goto label_21a380;
        case 0x21a384u: goto label_21a384;
        case 0x21a388u: goto label_21a388;
        case 0x21a38cu: goto label_21a38c;
        case 0x21a390u: goto label_21a390;
        case 0x21a394u: goto label_21a394;
        case 0x21a398u: goto label_21a398;
        case 0x21a39cu: goto label_21a39c;
        case 0x21a3a0u: goto label_21a3a0;
        case 0x21a3a4u: goto label_21a3a4;
        case 0x21a3a8u: goto label_21a3a8;
        case 0x21a3acu: goto label_21a3ac;
        case 0x21a3b0u: goto label_21a3b0;
        case 0x21a3b4u: goto label_21a3b4;
        case 0x21a3b8u: goto label_21a3b8;
        case 0x21a3bcu: goto label_21a3bc;
        case 0x21a3c0u: goto label_21a3c0;
        case 0x21a3c4u: goto label_21a3c4;
        case 0x21a3c8u: goto label_21a3c8;
        case 0x21a3ccu: goto label_21a3cc;
        case 0x21a3d0u: goto label_21a3d0;
        case 0x21a3d4u: goto label_21a3d4;
        case 0x21a3d8u: goto label_21a3d8;
        case 0x21a3dcu: goto label_21a3dc;
        case 0x21a3e0u: goto label_21a3e0;
        case 0x21a3e4u: goto label_21a3e4;
        case 0x21a3e8u: goto label_21a3e8;
        case 0x21a3ecu: goto label_21a3ec;
        case 0x21a3f0u: goto label_21a3f0;
        case 0x21a3f4u: goto label_21a3f4;
        case 0x21a3f8u: goto label_21a3f8;
        case 0x21a3fcu: goto label_21a3fc;
        case 0x21a400u: goto label_21a400;
        case 0x21a404u: goto label_21a404;
        case 0x21a408u: goto label_21a408;
        case 0x21a40cu: goto label_21a40c;
        case 0x21a410u: goto label_21a410;
        case 0x21a414u: goto label_21a414;
        case 0x21a418u: goto label_21a418;
        case 0x21a41cu: goto label_21a41c;
        case 0x21a420u: goto label_21a420;
        case 0x21a424u: goto label_21a424;
        case 0x21a428u: goto label_21a428;
        case 0x21a42cu: goto label_21a42c;
        case 0x21a430u: goto label_21a430;
        case 0x21a434u: goto label_21a434;
        case 0x21a438u: goto label_21a438;
        case 0x21a43cu: goto label_21a43c;
        case 0x21a440u: goto label_21a440;
        case 0x21a444u: goto label_21a444;
        case 0x21a448u: goto label_21a448;
        case 0x21a44cu: goto label_21a44c;
        case 0x21a450u: goto label_21a450;
        case 0x21a454u: goto label_21a454;
        case 0x21a458u: goto label_21a458;
        case 0x21a45cu: goto label_21a45c;
        case 0x21a460u: goto label_21a460;
        case 0x21a464u: goto label_21a464;
        case 0x21a468u: goto label_21a468;
        case 0x21a46cu: goto label_21a46c;
        case 0x21a470u: goto label_21a470;
        case 0x21a474u: goto label_21a474;
        case 0x21a478u: goto label_21a478;
        case 0x21a47cu: goto label_21a47c;
        case 0x21a480u: goto label_21a480;
        case 0x21a484u: goto label_21a484;
        case 0x21a488u: goto label_21a488;
        case 0x21a48cu: goto label_21a48c;
        case 0x21a490u: goto label_21a490;
        case 0x21a494u: goto label_21a494;
        case 0x21a498u: goto label_21a498;
        case 0x21a49cu: goto label_21a49c;
        case 0x21a4a0u: goto label_21a4a0;
        case 0x21a4a4u: goto label_21a4a4;
        case 0x21a4a8u: goto label_21a4a8;
        case 0x21a4acu: goto label_21a4ac;
        case 0x21a4b0u: goto label_21a4b0;
        case 0x21a4b4u: goto label_21a4b4;
        case 0x21a4b8u: goto label_21a4b8;
        case 0x21a4bcu: goto label_21a4bc;
        case 0x21a4c0u: goto label_21a4c0;
        case 0x21a4c4u: goto label_21a4c4;
        case 0x21a4c8u: goto label_21a4c8;
        case 0x21a4ccu: goto label_21a4cc;
        case 0x21a4d0u: goto label_21a4d0;
        case 0x21a4d4u: goto label_21a4d4;
        case 0x21a4d8u: goto label_21a4d8;
        case 0x21a4dcu: goto label_21a4dc;
        case 0x21a4e0u: goto label_21a4e0;
        case 0x21a4e4u: goto label_21a4e4;
        case 0x21a4e8u: goto label_21a4e8;
        case 0x21a4ecu: goto label_21a4ec;
        case 0x21a4f0u: goto label_21a4f0;
        case 0x21a4f4u: goto label_21a4f4;
        case 0x21a4f8u: goto label_21a4f8;
        case 0x21a4fcu: goto label_21a4fc;
        case 0x21a500u: goto label_21a500;
        case 0x21a504u: goto label_21a504;
        case 0x21a508u: goto label_21a508;
        case 0x21a50cu: goto label_21a50c;
        case 0x21a510u: goto label_21a510;
        case 0x21a514u: goto label_21a514;
        case 0x21a518u: goto label_21a518;
        case 0x21a51cu: goto label_21a51c;
        case 0x21a520u: goto label_21a520;
        case 0x21a524u: goto label_21a524;
        case 0x21a528u: goto label_21a528;
        case 0x21a52cu: goto label_21a52c;
        case 0x21a530u: goto label_21a530;
        case 0x21a534u: goto label_21a534;
        case 0x21a538u: goto label_21a538;
        case 0x21a53cu: goto label_21a53c;
        case 0x21a540u: goto label_21a540;
        case 0x21a544u: goto label_21a544;
        case 0x21a548u: goto label_21a548;
        case 0x21a54cu: goto label_21a54c;
        case 0x21a550u: goto label_21a550;
        case 0x21a554u: goto label_21a554;
        case 0x21a558u: goto label_21a558;
        case 0x21a55cu: goto label_21a55c;
        case 0x21a560u: goto label_21a560;
        case 0x21a564u: goto label_21a564;
        case 0x21a568u: goto label_21a568;
        case 0x21a56cu: goto label_21a56c;
        case 0x21a570u: goto label_21a570;
        case 0x21a574u: goto label_21a574;
        case 0x21a578u: goto label_21a578;
        case 0x21a57cu: goto label_21a57c;
        case 0x21a580u: goto label_21a580;
        case 0x21a584u: goto label_21a584;
        case 0x21a588u: goto label_21a588;
        case 0x21a58cu: goto label_21a58c;
        case 0x21a590u: goto label_21a590;
        case 0x21a594u: goto label_21a594;
        case 0x21a598u: goto label_21a598;
        case 0x21a59cu: goto label_21a59c;
        case 0x21a5a0u: goto label_21a5a0;
        case 0x21a5a4u: goto label_21a5a4;
        case 0x21a5a8u: goto label_21a5a8;
        case 0x21a5acu: goto label_21a5ac;
        case 0x21a5b0u: goto label_21a5b0;
        case 0x21a5b4u: goto label_21a5b4;
        case 0x21a5b8u: goto label_21a5b8;
        case 0x21a5bcu: goto label_21a5bc;
        case 0x21a5c0u: goto label_21a5c0;
        case 0x21a5c4u: goto label_21a5c4;
        case 0x21a5c8u: goto label_21a5c8;
        case 0x21a5ccu: goto label_21a5cc;
        case 0x21a5d0u: goto label_21a5d0;
        case 0x21a5d4u: goto label_21a5d4;
        case 0x21a5d8u: goto label_21a5d8;
        case 0x21a5dcu: goto label_21a5dc;
        case 0x21a5e0u: goto label_21a5e0;
        case 0x21a5e4u: goto label_21a5e4;
        case 0x21a5e8u: goto label_21a5e8;
        case 0x21a5ecu: goto label_21a5ec;
        case 0x21a5f0u: goto label_21a5f0;
        case 0x21a5f4u: goto label_21a5f4;
        case 0x21a5f8u: goto label_21a5f8;
        case 0x21a5fcu: goto label_21a5fc;
        case 0x21a600u: goto label_21a600;
        case 0x21a604u: goto label_21a604;
        case 0x21a608u: goto label_21a608;
        case 0x21a60cu: goto label_21a60c;
        case 0x21a610u: goto label_21a610;
        case 0x21a614u: goto label_21a614;
        case 0x21a618u: goto label_21a618;
        case 0x21a61cu: goto label_21a61c;
        case 0x21a620u: goto label_21a620;
        case 0x21a624u: goto label_21a624;
        case 0x21a628u: goto label_21a628;
        case 0x21a62cu: goto label_21a62c;
        case 0x21a630u: goto label_21a630;
        case 0x21a634u: goto label_21a634;
        case 0x21a638u: goto label_21a638;
        case 0x21a63cu: goto label_21a63c;
        case 0x21a640u: goto label_21a640;
        case 0x21a644u: goto label_21a644;
        case 0x21a648u: goto label_21a648;
        case 0x21a64cu: goto label_21a64c;
        case 0x21a650u: goto label_21a650;
        case 0x21a654u: goto label_21a654;
        default: break;
    }

    ctx->pc = 0x21a090u;

label_21a090:
    // 0x21a090: 0x27bdfc80  addiu       $sp, $sp, -0x380
    ctx->pc = 0x21a090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966400));
label_21a094:
    // 0x21a094: 0xffb10348  sd          $s1, 0x348($sp)
    ctx->pc = 0x21a094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 840), GPR_U64(ctx, 17));
label_21a098:
    // 0x21a098: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21a098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21a09c:
    // 0x21a09c: 0xffb20350  sd          $s2, 0x350($sp)
    ctx->pc = 0x21a09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 848), GPR_U64(ctx, 18));
label_21a0a0:
    // 0x21a0a0: 0xffb60370  sd          $s6, 0x370($sp)
    ctx->pc = 0x21a0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 880), GPR_U64(ctx, 22));
label_21a0a4:
    // 0x21a0a4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21a0a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21a0a8:
    // 0x21a0a8: 0xffb00340  sd          $s0, 0x340($sp)
    ctx->pc = 0x21a0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 832), GPR_U64(ctx, 16));
label_21a0ac:
    // 0x21a0ac: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x21a0acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21a0b0:
    // 0x21a0b0: 0xffb50368  sd          $s5, 0x368($sp)
    ctx->pc = 0x21a0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 872), GPR_U64(ctx, 21));
label_21a0b4:
    // 0x21a0b4: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x21a0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_21a0b8:
    // 0x21a0b8: 0xffb30358  sd          $s3, 0x358($sp)
    ctx->pc = 0x21a0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 856), GPR_U64(ctx, 19));
label_21a0bc:
    // 0x21a0bc: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x21a0bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21a0c0:
    // 0x21a0c0: 0xffb40360  sd          $s4, 0x360($sp)
    ctx->pc = 0x21a0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 864), GPR_U64(ctx, 20));
label_21a0c4:
    // 0x21a0c4: 0xffbf0378  sd          $ra, 0x378($sp)
    ctx->pc = 0x21a0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 888), GPR_U64(ctx, 31));
label_21a0c8:
    // 0x21a0c8: 0xc0f6a96  jal         func_3DAA58
label_21a0cc:
    if (ctx->pc == 0x21A0CCu) {
        ctx->pc = 0x21A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0C8u;
        // 0x21a0cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A0D0u;
        goto label_21a0d0;
    }
    ctx->pc = 0x21A0C8u;
    SET_GPR_U32(ctx, 31, 0x21A0D0u);
    ctx->pc = 0x21A0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A0C8u;
    // 0x21a0cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x21A0C8u, 0x21A0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A0D0u;
label_21a0d0:
    // 0x21a0d0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x21a0d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_21a0d4:
    // 0x21a0d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21a0d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21a0d8:
    // 0x21a0d8: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x21a0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_21a0dc:
    // 0x21a0dc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_21a0e0:
    if (ctx->pc == 0x21A0E0u) {
        ctx->pc = 0x21A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0DCu;
        // 0x21a0e0: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A0E4u;
        goto label_21a0e4;
    }
    ctx->pc = 0x21A0DCu;
    {
        const bool branch_taken_0x21a0dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0DCu;
        // 0x21a0e0: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a0dc) {
            ctx->pc = 0x21A10Cu;
            goto label_21a10c;
        }
    }
    ctx->pc = 0x21A0E4u;
label_21a0e4:
    // 0x21a0e4: 0x0  nop
    ctx->pc = 0x21a0e4u;
    // NOP
label_21a0e8:
    // 0x21a0e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21a0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21a0ec:
    // 0x21a0ec: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x21a0ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
label_21a0f0:
    // 0x21a0f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_21a0f4:
    if (ctx->pc == 0x21A0F4u) {
        ctx->pc = 0x21A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0F0u;
        // 0x21a0f4: 0x3b01821  addu        $v1, $sp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A0F8u;
        goto label_21a0f8;
    }
    ctx->pc = 0x21A0F0u;
    {
        const bool branch_taken_0x21a0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0F0u;
        // 0x21a0f4: 0x3b01821  addu        $v1, $sp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a0f0) {
            ctx->pc = 0x21A10Cu;
            goto label_21a10c;
        }
    }
    ctx->pc = 0x21A0F8u;
label_21a0f8:
    // 0x21a0f8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x21a0f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_21a0fc:
    // 0x21a0fc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x21a0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_21a100:
    // 0x21a100: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x21a100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_21a104:
    // 0x21a104: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_21a108:
    if (ctx->pc == 0x21A108u) {
        ctx->pc = 0x21A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A104u;
        // 0x21a108: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A10Cu;
        goto label_21a10c;
    }
    ctx->pc = 0x21A104u;
    {
        const bool branch_taken_0x21a104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A104u;
        // 0x21a108: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a104) {
            ctx->pc = 0x21A0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a0e8;
        }
    }
    ctx->pc = 0x21A10Cu;
label_21a10c:
    // 0x21a10c: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x21a10cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21a110:
    // 0x21a110: 0x30e20003  andi        $v0, $a3, 0x3
    ctx->pc = 0x21a110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
label_21a114:
    // 0x21a114: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_21a118:
    if (ctx->pc == 0x21A118u) {
        ctx->pc = 0x21A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A114u;
        // 0x21a118: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A11Cu;
        goto label_21a11c;
    }
    ctx->pc = 0x21A114u;
    {
        const bool branch_taken_0x21a114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A114u;
        // 0x21a118: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a114) {
            ctx->pc = 0x21A13Cu;
            goto label_21a13c;
        }
    }
    ctx->pc = 0x21A11Cu;
label_21a11c:
    // 0x21a11c: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x21a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_21a120:
    // 0x21a120: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x21a120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_21a124:
    // 0x21a124: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x21a124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_21a128:
    // 0x21a128: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x21a128u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
label_21a12c:
    // 0x21a12c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x21a12cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_21a130:
    // 0x21a130: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21a130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21a134:
    // 0x21a134: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x21a134u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_21a138:
    // 0x21a138: 0x838823  subu        $s1, $a0, $v1
    ctx->pc = 0x21a138u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_21a13c:
    // 0x21a13c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21a13cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_21a140:
    // 0x21a140: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21a140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21a144:
    // 0x21a144: 0xc0efb95  jal         func_3BEE54
label_21a148:
    if (ctx->pc == 0x21A148u) {
        ctx->pc = 0x21A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A144u;
        // 0x21a148: 0x24a517d8  addiu       $a1, $a1, 0x17D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A14Cu;
        goto label_21a14c;
    }
    ctx->pc = 0x21A144u;
    SET_GPR_U32(ctx, 31, 0x21A14Cu);
    ctx->pc = 0x21A148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A144u;
    // 0x21a148: 0x24a517d8  addiu       $a1, $a1, 0x17D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x21A144u, 0x21A14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A14Cu;
label_21a14c:
    // 0x21a14c: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
label_21a150:
    if (ctx->pc == 0x21A150u) {
        ctx->pc = 0x21A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A14Cu;
        // 0x21a150: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A154u;
        goto label_21a154;
    }
    ctx->pc = 0x21A14Cu;
    {
        const bool branch_taken_0x21a14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A14Cu;
        // 0x21a150: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a14c) {
            ctx->pc = 0x21A36Cu;
            goto label_21a36c;
        }
    }
    ctx->pc = 0x21A154u;
label_21a154:
    // 0x21a154: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x21a154u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_21a158:
    // 0x21a158: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21a158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21a15c:
    // 0x21a15c: 0x27b40100  addiu       $s4, $sp, 0x100
    ctx->pc = 0x21a15cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_21a160:
    // 0x21a160: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x21a160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_21a164:
    // 0x21a164: 0xa3a30100  sb          $v1, 0x100($sp)
    ctx->pc = 0x21a164u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 3));
label_21a168:
    // 0x21a168: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_21a16c:
    if (ctx->pc == 0x21A16Cu) {
        ctx->pc = 0x21A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A168u;
        // 0x21a16c: 0x27a80200  addiu       $t0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A170u;
        goto label_21a170;
    }
    ctx->pc = 0x21A168u;
    {
        const bool branch_taken_0x21a168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A168u;
        // 0x21a16c: 0x27a80200  addiu       $t0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a168) {
            ctx->pc = 0x21A19Cu;
            goto label_21a19c;
        }
    }
    ctx->pc = 0x21A170u;
label_21a170:
    // 0x21a170: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21a170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21a174:
    // 0x21a174: 0x0  nop
    ctx->pc = 0x21a174u;
    // NOP
label_21a178:
    // 0x21a178: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21a178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21a17c:
    // 0x21a17c: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x21a17cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
label_21a180:
    // 0x21a180: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_21a184:
    if (ctx->pc == 0x21A184u) {
        ctx->pc = 0x21A184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A180u;
        // 0x21a184: 0x901821  addu        $v1, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A188u;
        goto label_21a188;
    }
    ctx->pc = 0x21A180u;
    {
        const bool branch_taken_0x21a180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A180u;
        // 0x21a184: 0x901821  addu        $v1, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a180) {
            ctx->pc = 0x21A19Cu;
            goto label_21a19c;
        }
    }
    ctx->pc = 0x21A188u;
label_21a188:
    // 0x21a188: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x21a188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_21a18c:
    // 0x21a18c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x21a18cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_21a190:
    // 0x21a190: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x21a190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_21a194:
    // 0x21a194: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_21a198:
    if (ctx->pc == 0x21A198u) {
        ctx->pc = 0x21A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A194u;
        // 0x21a198: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A19Cu;
        goto label_21a19c;
    }
    ctx->pc = 0x21A194u;
    {
        const bool branch_taken_0x21a194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A194u;
        // 0x21a198: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a194) {
            ctx->pc = 0x21A178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a178;
        }
    }
    ctx->pc = 0x21A19Cu;
label_21a19c:
    // 0x21a19c: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x21a19cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21a1a0:
    // 0x21a1a0: 0x30e20003  andi        $v0, $a3, 0x3
    ctx->pc = 0x21a1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
label_21a1a4:
    // 0x21a1a4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_21a1a8:
    if (ctx->pc == 0x21A1A8u) {
        ctx->pc = 0x21A1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1A4u;
        // 0x21a1a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A1ACu;
        goto label_21a1ac;
    }
    ctx->pc = 0x21A1A4u;
    {
        const bool branch_taken_0x21a1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1A4u;
        // 0x21a1a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a1a4) {
            ctx->pc = 0x21A1CCu;
            goto label_21a1cc;
        }
    }
    ctx->pc = 0x21A1ACu;
label_21a1ac:
    // 0x21a1ac: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x21a1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_21a1b0:
    // 0x21a1b0: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x21a1b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_21a1b4:
    // 0x21a1b4: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x21a1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_21a1b8:
    // 0x21a1b8: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x21a1b8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
label_21a1bc:
    // 0x21a1bc: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x21a1bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_21a1c0:
    // 0x21a1c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21a1c4:
    // 0x21a1c4: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x21a1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_21a1c8:
    // 0x21a1c8: 0x838823  subu        $s1, $a0, $v1
    ctx->pc = 0x21a1c8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_21a1cc:
    // 0x21a1cc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x21a1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_21a1d0:
    // 0x21a1d0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x21a1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_21a1d4:
    // 0x21a1d4: 0x2902021  addu        $a0, $s4, $s0
    ctx->pc = 0x21a1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_21a1d8:
    // 0x21a1d8: 0x24460c11  addiu       $a2, $v0, 0xC11
    ctx->pc = 0x21a1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3089));
label_21a1dc:
    // 0x21a1dc: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x21a1dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_21a1e0:
    // 0x21a1e0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x21a1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21a1e4:
    // 0x21a1e4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x21a1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_21a1e8:
    // 0x21a1e8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x21a1e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_21a1ec:
    // 0x21a1ec: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x21a1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_21a1f0:
    // 0x21a1f0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_21a1f4:
    if (ctx->pc == 0x21A1F4u) {
        ctx->pc = 0x21A1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1F0u;
        // 0x21a1f4: 0x26270004  addiu       $a3, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A1F8u;
        goto label_21a1f8;
    }
    ctx->pc = 0x21A1F0u;
    {
        const bool branch_taken_0x21a1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1F0u;
        // 0x21a1f4: 0x26270004  addiu       $a3, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a1f0) {
            ctx->pc = 0x21A238u;
            goto label_21a238;
        }
    }
    ctx->pc = 0x21A1F8u;
label_21a1f8:
    // 0x21a1f8: 0x1a00000f  blez        $s0, . + 4 + (0xF << 2)
label_21a1fc:
    if (ctx->pc == 0x21A1FCu) {
        ctx->pc = 0x21A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1F8u;
        // 0x21a1fc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A200u;
        goto label_21a200;
    }
    ctx->pc = 0x21A1F8u;
    {
        const bool branch_taken_0x21a1f8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x21A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1F8u;
        // 0x21a1fc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a1f8) {
            ctx->pc = 0x21A238u;
            goto label_21a238;
        }
    }
    ctx->pc = 0x21A200u;
label_21a200:
    // 0x21a200: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x21a200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_21a204:
    // 0x21a204: 0x0  nop
    ctx->pc = 0x21a204u;
    // NOP
label_21a208:
    // 0x21a208: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x21a208u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21a20c:
    // 0x21a20c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x21a20cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_21a210:
    // 0x21a210: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x21a210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_21a214:
    // 0x21a214: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x21a214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_21a218:
    // 0x21a218: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x21a218u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_21a21c:
    // 0x21a21c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_21a220:
    // 0x21a220: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21a220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21a224:
    // 0x21a224: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x21a224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_21a228:
    // 0x21a228: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_21a22c:
    if (ctx->pc == 0x21A22Cu) {
        ctx->pc = 0x21A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A228u;
        // 0x21a22c: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A230u;
        goto label_21a230;
    }
    ctx->pc = 0x21A228u;
    {
        const bool branch_taken_0x21a228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a228) {
            ctx->pc = 0x21A22Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A228u;
            // 0x21a22c: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A23Cu;
            goto label_21a23c;
        }
    }
    ctx->pc = 0x21A230u;
label_21a230:
    // 0x21a230: 0x1e00fff5  bgtz        $s0, . + 4 + (-0xB << 2)
label_21a234:
    if (ctx->pc == 0x21A234u) {
        ctx->pc = 0x21A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A230u;
        // 0x21a234: 0xb01021  addu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A238u;
        goto label_21a238;
    }
    ctx->pc = 0x21A230u;
    {
        const bool branch_taken_0x21a230 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x21A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A230u;
        // 0x21a234: 0xb01021  addu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a230) {
            ctx->pc = 0x21A208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a208;
        }
    }
    ctx->pc = 0x21A238u;
label_21a238:
    // 0x21a238: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x21a238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21a23c:
    // 0x21a23c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21a23cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a240:
    // 0x21a240: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x21a240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_21a244:
    // 0x21a244: 0xe7a10300  swc1        $f1, 0x300($sp)
    ctx->pc = 0x21a244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 768), bits); }
label_21a248:
    // 0x21a248: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x21a248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21a24c:
    // 0x21a24c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x21a24cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_21a250:
    // 0x21a250: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x21a250u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_21a254:
    // 0x21a254: 0xe7a00308  swc1        $f0, 0x308($sp)
    ctx->pc = 0x21a254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 776), bits); }
label_21a258:
    // 0x21a258: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x21a258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21a25c:
    // 0x21a25c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x21a25cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_21a260:
    // 0x21a260: 0xe7a10304  swc1        $f1, 0x304($sp)
    ctx->pc = 0x21a260u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 772), bits); }
label_21a264:
    // 0x21a264: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x21a264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21a268:
    // 0x21a268: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x21a268u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_21a26c:
    // 0x21a26c: 0xe7a00310  swc1        $f0, 0x310($sp)
    ctx->pc = 0x21a26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 784), bits); }
label_21a270:
    // 0x21a270: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x21a270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21a274:
    // 0x21a274: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x21a274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_21a278:
    // 0x21a278: 0xe7a10314  swc1        $f1, 0x314($sp)
    ctx->pc = 0x21a278u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 788), bits); }
label_21a27c:
    // 0x21a27c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x21a27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21a280:
    // 0x21a280: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x21a280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_21a284:
    // 0x21a284: 0xe7a00318  swc1        $f0, 0x318($sp)
    ctx->pc = 0x21a284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 792), bits); }
label_21a288:
    // 0x21a288: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x21a288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21a28c:
    // 0x21a28c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x21a28cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_21a290:
    // 0x21a290: 0xe7a1031c  swc1        $f1, 0x31C($sp)
    ctx->pc = 0x21a290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 796), bits); }
label_21a294:
    // 0x21a294: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x21a294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_21a298:
    // 0x21a298: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21a298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21a29c:
    // 0x21a29c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x21a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_21a2a0:
    // 0x21a2a0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_21a2a4:
    if (ctx->pc == 0x21A2A4u) {
        ctx->pc = 0x21A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2A0u;
        // 0x21a2a4: 0xa3a20200  sb          $v0, 0x200($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 512), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A2A8u;
        goto label_21a2a8;
    }
    ctx->pc = 0x21A2A0u;
    {
        const bool branch_taken_0x21a2a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2A0u;
        // 0x21a2a4: 0xa3a20200  sb          $v0, 0x200($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 512), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a2a0) {
            ctx->pc = 0x21A2D4u;
            goto label_21a2d4;
        }
    }
    ctx->pc = 0x21A2A8u;
label_21a2a8:
    // 0x21a2a8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x21a2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_21a2ac:
    // 0x21a2ac: 0x0  nop
    ctx->pc = 0x21a2acu;
    // NOP
label_21a2b0:
    // 0x21a2b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21a2b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21a2b4:
    // 0x21a2b4: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x21a2b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
label_21a2b8:
    // 0x21a2b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_21a2bc:
    if (ctx->pc == 0x21A2BCu) {
        ctx->pc = 0x21A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2B8u;
        // 0x21a2bc: 0x901821  addu        $v1, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A2C0u;
        goto label_21a2c0;
    }
    ctx->pc = 0x21A2B8u;
    {
        const bool branch_taken_0x21a2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2B8u;
        // 0x21a2bc: 0x901821  addu        $v1, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a2b8) {
            ctx->pc = 0x21A2D4u;
            goto label_21a2d4;
        }
    }
    ctx->pc = 0x21A2C0u;
label_21a2c0:
    // 0x21a2c0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x21a2c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_21a2c4:
    // 0x21a2c4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x21a2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_21a2c8:
    // 0x21a2c8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x21a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_21a2cc:
    // 0x21a2cc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_21a2d0:
    if (ctx->pc == 0x21A2D0u) {
        ctx->pc = 0x21A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2CCu;
        // 0x21a2d0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A2D4u;
        goto label_21a2d4;
    }
    ctx->pc = 0x21A2CCu;
    {
        const bool branch_taken_0x21a2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2CCu;
        // 0x21a2d0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a2cc) {
            ctx->pc = 0x21A2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a2b0;
        }
    }
    ctx->pc = 0x21A2D4u;
label_21a2d4:
    // 0x21a2d4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21a2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_21a2d8:
    // 0x21a2d8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x21a2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_21a2dc:
    // 0x21a2dc: 0x24a517e0  addiu       $a1, $a1, 0x17E0
    ctx->pc = 0x21a2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6112));
label_21a2e0:
    // 0x21a2e0: 0xc0efb95  jal         func_3BEE54
label_21a2e4:
    if (ctx->pc == 0x21A2E4u) {
        ctx->pc = 0x21A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2E0u;
        // 0x21a2e4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A2E8u;
        goto label_21a2e8;
    }
    ctx->pc = 0x21A2E0u;
    SET_GPR_U32(ctx, 31, 0x21A2E8u);
    ctx->pc = 0x21A2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A2E0u;
    // 0x21a2e4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x21A2E0u, 0x21A2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A2E8u;
label_21a2e8:
    // 0x21a2e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_21a2ec:
    if (ctx->pc == 0x21A2ECu) {
        ctx->pc = 0x21A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2E8u;
        // 0x21a2ec: 0x26070001  addiu       $a3, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A2F0u;
        goto label_21a2f0;
    }
    ctx->pc = 0x21A2E8u;
    {
        const bool branch_taken_0x21a2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2E8u;
        // 0x21a2ec: 0x26070001  addiu       $a3, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a2e8) {
            ctx->pc = 0x21A300u;
            goto label_21a300;
        }
    }
    ctx->pc = 0x21A2F0u;
label_21a2f0:
    // 0x21a2f0: 0x96330000  lhu         $s3, 0x0($s1)
    ctx->pc = 0x21a2f0u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_21a2f4:
    // 0x21a2f4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x21a2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_21a2f8:
    // 0x21a2f8: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x21a2f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_21a2fc:
    // 0x21a2fc: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x21a2fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21a300:
    // 0x21a300: 0x30e20003  andi        $v0, $a3, 0x3
    ctx->pc = 0x21a300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
label_21a304:
    // 0x21a304: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_21a308:
    if (ctx->pc == 0x21A308u) {
        ctx->pc = 0x21A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A304u;
        // 0x21a308: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A30Cu;
        goto label_21a30c;
    }
    ctx->pc = 0x21A304u;
    {
        const bool branch_taken_0x21a304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A304u;
        // 0x21a308: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a304) {
            ctx->pc = 0x21A32Cu;
            goto label_21a32c;
        }
    }
    ctx->pc = 0x21A30Cu;
label_21a30c:
    // 0x21a30c: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x21a30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_21a310:
    // 0x21a310: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x21a310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_21a314:
    // 0x21a314: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x21a314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_21a318:
    // 0x21a318: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x21a318u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
label_21a31c:
    // 0x21a31c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x21a31cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_21a320:
    // 0x21a320: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21a320u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21a324:
    // 0x21a324: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x21a324u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_21a328:
    // 0x21a328: 0x838823  subu        $s1, $a0, $v1
    ctx->pc = 0x21a328u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_21a32c:
    // 0x21a32c: 0xc085d2a  jal         func_2174A8
label_21a330:
    if (ctx->pc == 0x21A330u) {
        ctx->pc = 0x21A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A32Cu;
        // 0x21a330: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A334u;
        goto label_21a334;
    }
    ctx->pc = 0x21A32Cu;
    SET_GPR_U32(ctx, 31, 0x21A334u);
    ctx->pc = 0x21A330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A32Cu;
    // 0x21a330: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A8u, 0x21A32Cu, 0x21A334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A334u;
label_21a334:
    // 0x21a334: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21a334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21a338:
    // 0x21a338: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_21a33c:
    if (ctx->pc == 0x21A33Cu) {
        ctx->pc = 0x21A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A338u;
        // 0x21a33c: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A340u;
        goto label_21a340;
    }
    ctx->pc = 0x21A338u;
    {
        const bool branch_taken_0x21a338 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A338u;
        // 0x21a33c: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a338) {
            ctx->pc = 0x21A36Cu;
            goto label_21a36c;
        }
    }
    ctx->pc = 0x21A340u;
label_21a340:
    // 0x21a340: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x21a340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21a344:
    // 0x21a344: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_21a348:
    if (ctx->pc == 0x21A348u) {
        ctx->pc = 0x21A34Cu;
        goto label_21a34c;
    }
    ctx->pc = 0x21A344u;
    {
        const bool branch_taken_0x21a344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21a344) {
            ctx->pc = 0x21A374u;
            goto label_21a374;
        }
    }
    ctx->pc = 0x21A34Cu;
label_21a34c:
    // 0x21a34c: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_21a350:
    if (ctx->pc == 0x21A350u) {
        ctx->pc = 0x21A354u;
        goto label_21a354;
    }
    ctx->pc = 0x21A34Cu;
    {
        const bool branch_taken_0x21a34c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a34c) {
            ctx->pc = 0x21A374u;
            goto label_21a374;
        }
    }
    ctx->pc = 0x21A354u;
label_21a354:
    // 0x21a354: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
label_21a358:
    if (ctx->pc == 0x21A358u) {
        ctx->pc = 0x21A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A354u;
        // 0x21a358: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A35Cu;
        goto label_21a35c;
    }
    ctx->pc = 0x21A354u;
    {
        const bool branch_taken_0x21a354 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A354u;
        // 0x21a358: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a354) {
            ctx->pc = 0x21A374u;
            goto label_21a374;
        }
    }
    ctx->pc = 0x21A35Cu;
label_21a35c:
    // 0x21a35c: 0xc0970c8  jal         func_25C320
label_21a360:
    if (ctx->pc == 0x21A360u) {
        ctx->pc = 0x21A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A35Cu;
        // 0x21a360: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A364u;
        goto label_21a364;
    }
    ctx->pc = 0x21A35Cu;
    SET_GPR_U32(ctx, 31, 0x21A364u);
    ctx->pc = 0x21A360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A35Cu;
    // 0x21a360: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C320u, 0x21A35Cu, 0x21A364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A364u;
label_21a364:
    // 0x21a364: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21a368:
    if (ctx->pc == 0x21A368u) {
        ctx->pc = 0x21A36Cu;
        goto label_21a36c;
    }
    ctx->pc = 0x21A364u;
    {
        const bool branch_taken_0x21a364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a364) {
            ctx->pc = 0x21A374u;
            goto label_21a374;
        }
    }
    ctx->pc = 0x21A36Cu;
label_21a36c:
    // 0x21a36c: 0x100000af  b           . + 4 + (0xAF << 2)
label_21a370:
    if (ctx->pc == 0x21A370u) {
        ctx->pc = 0x21A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A36Cu;
        // 0x21a370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A374u;
        goto label_21a374;
    }
    ctx->pc = 0x21A36Cu;
    {
        const bool branch_taken_0x21a36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A36Cu;
        // 0x21a370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a36c) {
            ctx->pc = 0x21A62Cu;
            goto label_21a62c;
        }
    }
    ctx->pc = 0x21A374u;
label_21a374:
    // 0x21a374: 0xc083072  jal         func_20C1C8
label_21a378:
    if (ctx->pc == 0x21A378u) {
        ctx->pc = 0x21A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A374u;
        // 0x21a378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A37Cu;
        goto label_21a37c;
    }
    ctx->pc = 0x21A374u;
    SET_GPR_U32(ctx, 31, 0x21A37Cu);
    ctx->pc = 0x21A378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A374u;
    // 0x21a378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C1C8u, 0x21A374u, 0x21A37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A37Cu;
label_21a37c:
    // 0x21a37c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21a37cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21a380:
    // 0x21a380: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x21a380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21a384:
    // 0x21a384: 0xc083942  jal         func_20E508
label_21a388:
    if (ctx->pc == 0x21A388u) {
        ctx->pc = 0x21A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A384u;
        // 0x21a388: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A38Cu;
        goto label_21a38c;
    }
    ctx->pc = 0x21A384u;
    SET_GPR_U32(ctx, 31, 0x21A38Cu);
    ctx->pc = 0x21A388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A384u;
    // 0x21a388: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E508u, 0x21A384u, 0x21A38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A38Cu;
label_21a38c:
    // 0x21a38c: 0x27b00320  addiu       $s0, $sp, 0x320
    ctx->pc = 0x21a38cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_21a390:
    // 0x21a390: 0x2353023  subu        $a2, $s1, $s5
    ctx->pc = 0x21a390u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
label_21a394:
    // 0x21a394: 0x2c63023  subu        $a2, $s6, $a2
    ctx->pc = 0x21a394u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
label_21a398:
    // 0x21a398: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21a398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21a39c:
    // 0x21a39c: 0xc0b5d2e  jal         func_2D74B8
label_21a3a0:
    if (ctx->pc == 0x21A3A0u) {
        ctx->pc = 0x21A3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A39Cu;
        // 0x21a3a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A3A4u;
        goto label_21a3a4;
    }
    ctx->pc = 0x21A39Cu;
    SET_GPR_U32(ctx, 31, 0x21A3A4u);
    ctx->pc = 0x21A3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A39Cu;
    // 0x21a3a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D74B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D74B8u, 0x21A39Cu, 0x21A3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A3A4u;
label_21a3a4:
    // 0x21a3a4: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x21a3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_21a3a8:
    // 0x21a3a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21a3ac:
    // 0x21a3ac: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_21a3b0:
    // 0x21a3b0: 0x40f809  jalr        $v0
label_21a3b4:
    if (ctx->pc == 0x21A3B4u) {
        ctx->pc = 0x21A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3B0u;
        // 0x21a3b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A3B8u;
        goto label_21a3b8;
    }
    ctx->pc = 0x21A3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21A3B8u);
        ctx->pc = 0x21A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3B0u;
        // 0x21a3b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A3B0u, 0x21A3B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21A3B8u;
label_21a3b8:
    // 0x21a3b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21a3bc:
    // 0x21a3bc: 0xc0b5d68  jal         func_2D75A0
label_21a3c0:
    if (ctx->pc == 0x21A3C0u) {
        ctx->pc = 0x21A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3BCu;
        // 0x21a3c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A3C4u;
        goto label_21a3c4;
    }
    ctx->pc = 0x21A3BCu;
    SET_GPR_U32(ctx, 31, 0x21A3C4u);
    ctx->pc = 0x21A3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A3BCu;
    // 0x21a3c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D75A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D75A0u, 0x21A3BCu, 0x21A3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A3C4u;
label_21a3c4:
    // 0x21a3c4: 0x8e420218  lw          $v0, 0x218($s2)
    ctx->pc = 0x21a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_21a3c8:
    // 0x21a3c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21a3cc:
    // 0x21a3cc: 0x27a50300  addiu       $a1, $sp, 0x300
    ctx->pc = 0x21a3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_21a3d0:
    // 0x21a3d0: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x21a3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_21a3d4:
    // 0x21a3d4: 0x60f809  jalr        $v1
label_21a3d8:
    if (ctx->pc == 0x21A3D8u) {
        ctx->pc = 0x21A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3D4u;
        // 0x21a3d8: 0x27a60310  addiu       $a2, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A3DCu;
        goto label_21a3dc;
    }
    ctx->pc = 0x21A3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21A3DCu);
        ctx->pc = 0x21A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3D4u;
        // 0x21a3d8: 0x27a60310  addiu       $a2, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A3D4u, 0x21A3DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21A3DCu;
label_21a3dc:
    // 0x21a3dc: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x21a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_21a3e0:
    // 0x21a3e0: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x21a3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
label_21a3e4:
    // 0x21a3e4: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
label_21a3e8:
    if (ctx->pc == 0x21A3E8u) {
        ctx->pc = 0x21A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3E4u;
        // 0x21a3e8: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A3ECu;
        goto label_21a3ec;
    }
    ctx->pc = 0x21A3E4u;
    {
        const bool branch_taken_0x21a3e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3E4u;
        // 0x21a3e8: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a3e4) {
            ctx->pc = 0x21A500u;
            goto label_21a500;
        }
    }
    ctx->pc = 0x21A3ECu;
label_21a3ec:
    // 0x21a3ec: 0x52600045  beql        $s3, $zero, . + 4 + (0x45 << 2)
label_21a3f0:
    if (ctx->pc == 0x21A3F0u) {
        ctx->pc = 0x21A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3ECu;
        // 0x21a3f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A3F4u;
        goto label_21a3f4;
    }
    ctx->pc = 0x21A3ECu;
    {
        const bool branch_taken_0x21a3ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a3ec) {
            ctx->pc = 0x21A3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A3ECu;
            // 0x21a3f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A504u;
            goto label_21a504;
        }
    }
    ctx->pc = 0x21A3F4u;
label_21a3f4:
    // 0x21a3f4: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x21a3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_21a3f8:
    // 0x21a3f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21a3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a3fc:
    // 0x21a3fc: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x21a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_21a400:
    // 0x21a400: 0x40f809  jalr        $v0
label_21a404:
    if (ctx->pc == 0x21A404u) {
        ctx->pc = 0x21A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A400u;
        // 0x21a404: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A408u;
        goto label_21a408;
    }
    ctx->pc = 0x21A400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21A408u);
        ctx->pc = 0x21A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A400u;
        // 0x21a404: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A400u, 0x21A408u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21A408u;
label_21a408:
    // 0x21a408: 0x8e430370  lw          $v1, 0x370($s2)
    ctx->pc = 0x21a408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 880)));
label_21a40c:
    // 0x21a40c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21a410:
    // 0x21a410: 0xae420290  sw          $v0, 0x290($s2)
    ctx->pc = 0x21a410u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 656), GPR_U32(ctx, 2));
label_21a414:
    // 0x21a414: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21a418:
    // 0x21a418: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x21a418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
label_21a41c:
    // 0x21a41c: 0xa2421104  sb          $v0, 0x1104($s2)
    ctx->pc = 0x21a41cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4356), (uint8_t)GPR_U32(ctx, 2));
label_21a420:
    // 0x21a420: 0xc095412  jal         func_255048
label_21a424:
    if (ctx->pc == 0x21A424u) {
        ctx->pc = 0x21A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A420u;
        // 0x21a424: 0xae430370  sw          $v1, 0x370($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 880), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A428u;
        goto label_21a428;
    }
    ctx->pc = 0x21A420u;
    SET_GPR_U32(ctx, 31, 0x21A428u);
    ctx->pc = 0x21A424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A420u;
    // 0x21a424: 0xae430370  sw          $v1, 0x370($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 880), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255048u, 0x21A420u, 0x21A428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A428u;
label_21a428:
    // 0x21a428: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x21a428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_21a42c:
    // 0x21a42c: 0xae400290  sw          $zero, 0x290($s2)
    ctx->pc = 0x21a42cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 656), GPR_U32(ctx, 0));
label_21a430:
    // 0x21a430: 0x24436a00  addiu       $v1, $v0, 0x6A00
    ctx->pc = 0x21a430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27136));
label_21a434:
    // 0x21a434: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x21a434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21a438:
    // 0x21a438: 0x8c650150  lw          $a1, 0x150($v1)
    ctx->pc = 0x21a438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_21a43c:
    // 0x21a43c: 0x265102a  slt         $v0, $s3, $a1
    ctx->pc = 0x21a43cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_21a440:
    // 0x21a440: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_21a444:
    if (ctx->pc == 0x21A444u) {
        ctx->pc = 0x21A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A440u;
        // 0x21a444: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A448u;
        goto label_21a448;
    }
    ctx->pc = 0x21A440u;
    {
        const bool branch_taken_0x21a440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A440u;
        // 0x21a444: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a440) {
            ctx->pc = 0x21A468u;
            goto label_21a468;
        }
    }
    ctx->pc = 0x21A448u;
label_21a448:
    // 0x21a448: 0x8c620168  lw          $v0, 0x168($v1)
    ctx->pc = 0x21a448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 360)));
label_21a44c:
    // 0x21a44c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x21a44cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21a450:
    // 0x21a450: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_21a454:
    if (ctx->pc == 0x21A454u) {
        ctx->pc = 0x21A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A450u;
        // 0x21a454: 0x24c36a00  addiu       $v1, $a2, 0x6A00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 27136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A458u;
        goto label_21a458;
    }
    ctx->pc = 0x21A450u;
    {
        const bool branch_taken_0x21a450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A450u;
        // 0x21a454: 0x24c36a00  addiu       $v1, $a2, 0x6A00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 27136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a450) {
            ctx->pc = 0x21A46Cu;
            goto label_21a46c;
        }
    }
    ctx->pc = 0x21A458u;
label_21a458:
    // 0x21a458: 0xc06991c  jal         func_1A6470
label_21a45c:
    if (ctx->pc == 0x21A45Cu) {
        ctx->pc = 0x21A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A458u;
        // 0x21a45c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A460u;
        goto label_21a460;
    }
    ctx->pc = 0x21A458u;
    SET_GPR_U32(ctx, 31, 0x21A460u);
    ctx->pc = 0x21A45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A458u;
    // 0x21a45c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6470u, 0x21A458u, 0x21A460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A460u;
label_21a460:
    // 0x21a460: 0x1000001e  b           . + 4 + (0x1E << 2)
label_21a464:
    if (ctx->pc == 0x21A464u) {
        ctx->pc = 0x21A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A460u;
        // 0x21a464: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A468u;
        goto label_21a468;
    }
    ctx->pc = 0x21A460u;
    {
        const bool branch_taken_0x21a460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A460u;
        // 0x21a464: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a460) {
            ctx->pc = 0x21A4DCu;
            goto label_21a4dc;
        }
    }
    ctx->pc = 0x21A468u;
label_21a468:
    // 0x21a468: 0x24c36a00  addiu       $v1, $a2, 0x6A00
    ctx->pc = 0x21a468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 27136));
label_21a46c:
    // 0x21a46c: 0x8c620438  lw          $v0, 0x438($v1)
    ctx->pc = 0x21a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1080)));
label_21a470:
    // 0x21a470: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x21a470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21a474:
    // 0x21a474: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_21a478:
    if (ctx->pc == 0x21A478u) {
        ctx->pc = 0x21A478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A474u;
        // 0x21a478: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A47Cu;
        goto label_21a47c;
    }
    ctx->pc = 0x21A474u;
    {
        const bool branch_taken_0x21a474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A474u;
        // 0x21a478: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a474) {
            ctx->pc = 0x21A49Cu;
            goto label_21a49c;
        }
    }
    ctx->pc = 0x21A47Cu;
label_21a47c:
    // 0x21a47c: 0x8c620450  lw          $v0, 0x450($v1)
    ctx->pc = 0x21a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1104)));
label_21a480:
    // 0x21a480: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x21a480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21a484:
    // 0x21a484: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_21a488:
    if (ctx->pc == 0x21A488u) {
        ctx->pc = 0x21A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A484u;
        // 0x21a488: 0x24c36a00  addiu       $v1, $a2, 0x6A00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 27136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A48Cu;
        goto label_21a48c;
    }
    ctx->pc = 0x21A484u;
    {
        const bool branch_taken_0x21a484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A484u;
        // 0x21a488: 0x24c36a00  addiu       $v1, $a2, 0x6A00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 27136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a484) {
            ctx->pc = 0x21A4A0u;
            goto label_21a4a0;
        }
    }
    ctx->pc = 0x21A48Cu;
label_21a48c:
    // 0x21a48c: 0xc069b78  jal         func_1A6DE0
label_21a490:
    if (ctx->pc == 0x21A490u) {
        ctx->pc = 0x21A490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A48Cu;
        // 0x21a490: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A494u;
        goto label_21a494;
    }
    ctx->pc = 0x21A48Cu;
    SET_GPR_U32(ctx, 31, 0x21A494u);
    ctx->pc = 0x21A490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A48Cu;
    // 0x21a490: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6DE0u, 0x21A48Cu, 0x21A494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A494u;
label_21a494:
    // 0x21a494: 0x10000011  b           . + 4 + (0x11 << 2)
label_21a498:
    if (ctx->pc == 0x21A498u) {
        ctx->pc = 0x21A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A494u;
        // 0x21a498: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A49Cu;
        goto label_21a49c;
    }
    ctx->pc = 0x21A494u;
    {
        const bool branch_taken_0x21a494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A494u;
        // 0x21a498: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a494) {
            ctx->pc = 0x21A4DCu;
            goto label_21a4dc;
        }
    }
    ctx->pc = 0x21A49Cu;
label_21a49c:
    // 0x21a49c: 0x24c36a00  addiu       $v1, $a2, 0x6A00
    ctx->pc = 0x21a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 27136));
label_21a4a0:
    // 0x21a4a0: 0x8c620450  lw          $v0, 0x450($v1)
    ctx->pc = 0x21a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1104)));
label_21a4a4:
    // 0x21a4a4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x21a4a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21a4a8:
    // 0x21a4a8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_21a4ac:
    if (ctx->pc == 0x21A4ACu) {
        ctx->pc = 0x21A4B0u;
        goto label_21a4b0;
    }
    ctx->pc = 0x21A4A8u;
    {
        const bool branch_taken_0x21a4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a4a8) {
            ctx->pc = 0x21A4D0u;
            goto label_21a4d0;
        }
    }
    ctx->pc = 0x21A4B0u;
label_21a4b0:
    // 0x21a4b0: 0x8c620468  lw          $v0, 0x468($v1)
    ctx->pc = 0x21a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1128)));
label_21a4b4:
    // 0x21a4b4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x21a4b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21a4b8:
    // 0x21a4b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21a4bc:
    if (ctx->pc == 0x21A4BCu) {
        ctx->pc = 0x21A4C0u;
        goto label_21a4c0;
    }
    ctx->pc = 0x21A4B8u;
    {
        const bool branch_taken_0x21a4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a4b8) {
            ctx->pc = 0x21A4D0u;
            goto label_21a4d0;
        }
    }
    ctx->pc = 0x21A4C0u;
label_21a4c0:
    // 0x21a4c0: 0xc069b80  jal         func_1A6E00
label_21a4c4:
    if (ctx->pc == 0x21A4C4u) {
        ctx->pc = 0x21A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4C0u;
        // 0x21a4c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A4C8u;
        goto label_21a4c8;
    }
    ctx->pc = 0x21A4C0u;
    SET_GPR_U32(ctx, 31, 0x21A4C8u);
    ctx->pc = 0x21A4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A4C0u;
    // 0x21a4c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E00u, 0x21A4C0u, 0x21A4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A4C8u;
label_21a4c8:
    // 0x21a4c8: 0x10000004  b           . + 4 + (0x4 << 2)
label_21a4cc:
    if (ctx->pc == 0x21A4CCu) {
        ctx->pc = 0x21A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4C8u;
        // 0x21a4cc: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A4D0u;
        goto label_21a4d0;
    }
    ctx->pc = 0x21A4C8u;
    {
        const bool branch_taken_0x21a4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4C8u;
        // 0x21a4cc: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a4c8) {
            ctx->pc = 0x21A4DCu;
            goto label_21a4dc;
        }
    }
    ctx->pc = 0x21A4D0u;
label_21a4d0:
    // 0x21a4d0: 0xc06991c  jal         func_1A6470
label_21a4d4:
    if (ctx->pc == 0x21A4D4u) {
        ctx->pc = 0x21A4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4D0u;
        // 0x21a4d4: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A4D8u;
        goto label_21a4d8;
    }
    ctx->pc = 0x21A4D0u;
    SET_GPR_U32(ctx, 31, 0x21A4D8u);
    ctx->pc = 0x21A4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A4D0u;
    // 0x21a4d4: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6470u, 0x21A4D0u, 0x21A4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A4D8u;
label_21a4d8:
    // 0x21a4d8: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x21a4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_21a4dc:
    // 0x21a4dc: 0xc06a23e  jal         func_1A88F8
label_21a4e0:
    if (ctx->pc == 0x21A4E0u) {
        ctx->pc = 0x21A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4DCu;
        // 0x21a4e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A4E4u;
        goto label_21a4e4;
    }
    ctx->pc = 0x21A4DCu;
    SET_GPR_U32(ctx, 31, 0x21A4E4u);
    ctx->pc = 0x21A4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A4DCu;
    // 0x21a4e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x21A4DCu, 0x21A4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A4E4u;
label_21a4e4:
    // 0x21a4e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21a4e8:
    // 0x21a4e8: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x21a4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
label_21a4ec:
    // 0x21a4ec: 0xc08fed2  jal         func_23FB48
label_21a4f0:
    if (ctx->pc == 0x21A4F0u) {
        ctx->pc = 0x21A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4ECu;
        // 0x21a4f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A4F4u;
        goto label_21a4f4;
    }
    ctx->pc = 0x21A4ECu;
    SET_GPR_U32(ctx, 31, 0x21A4F4u);
    ctx->pc = 0x21A4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A4ECu;
    // 0x21a4f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x21A4ECu, 0x21A4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A4F4u;
label_21a4f4:
    // 0x21a4f4: 0xc0cdb1c  jal         func_336C70
label_21a4f8:
    if (ctx->pc == 0x21A4F8u) {
        ctx->pc = 0x21A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4F4u;
        // 0x21a4f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A4FCu;
        goto label_21a4fc;
    }
    ctx->pc = 0x21A4F4u;
    SET_GPR_U32(ctx, 31, 0x21A4FCu);
    ctx->pc = 0x21A4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A4F4u;
    // 0x21a4f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336C70u, 0x21A4F4u, 0x21A4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A4FCu;
label_21a4fc:
    // 0x21a4fc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21a4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_21a500:
    // 0x21a500: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21a500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21a504:
    // 0x21a504: 0xc0efb95  jal         func_3BEE54
label_21a508:
    if (ctx->pc == 0x21A508u) {
        ctx->pc = 0x21A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A504u;
        // 0x21a508: 0x24a517e8  addiu       $a1, $a1, 0x17E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A50Cu;
        goto label_21a50c;
    }
    ctx->pc = 0x21A504u;
    SET_GPR_U32(ctx, 31, 0x21A50Cu);
    ctx->pc = 0x21A508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A504u;
    // 0x21a508: 0x24a517e8  addiu       $a1, $a1, 0x17E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x21A504u, 0x21A50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A50Cu;
label_21a50c:
    // 0x21a50c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_21a510:
    if (ctx->pc == 0x21A510u) {
        ctx->pc = 0x21A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A50Cu;
        // 0x21a510: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A514u;
        goto label_21a514;
    }
    ctx->pc = 0x21A50Cu;
    {
        const bool branch_taken_0x21a50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a50c) {
            ctx->pc = 0x21A510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A50Cu;
            // 0x21a510: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A528u;
            goto label_21a528;
        }
    }
    ctx->pc = 0x21A514u;
label_21a514:
    // 0x21a514: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x21a514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_21a518:
    // 0x21a518: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x21a518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_21a51c:
    // 0x21a51c: 0xac5295b4  sw          $s2, -0x6A4C($v0)
    ctx->pc = 0x21a51cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940084), GPR_U32(ctx, 18));
label_21a520:
    // 0x21a520: 0x10000041  b           . + 4 + (0x41 << 2)
label_21a524:
    if (ctx->pc == 0x21A524u) {
        ctx->pc = 0x21A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A520u;
        // 0x21a524: 0xac72bd50  sw          $s2, -0x42B0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950224), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A528u;
        goto label_21a528;
    }
    ctx->pc = 0x21A520u;
    {
        const bool branch_taken_0x21a520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A520u;
        // 0x21a524: 0xac72bd50  sw          $s2, -0x42B0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950224), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a520) {
            ctx->pc = 0x21A628u;
            goto label_21a628;
        }
    }
    ctx->pc = 0x21A528u;
label_21a528:
    // 0x21a528: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21a528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21a52c:
    // 0x21a52c: 0xc0efb95  jal         func_3BEE54
label_21a530:
    if (ctx->pc == 0x21A530u) {
        ctx->pc = 0x21A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A52Cu;
        // 0x21a530: 0x24a517f0  addiu       $a1, $a1, 0x17F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A534u;
        goto label_21a534;
    }
    ctx->pc = 0x21A52Cu;
    SET_GPR_U32(ctx, 31, 0x21A534u);
    ctx->pc = 0x21A530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A52Cu;
    // 0x21a530: 0x24a517f0  addiu       $a1, $a1, 0x17F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x21A52Cu, 0x21A534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A534u;
label_21a534:
    // 0x21a534: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_21a538:
    if (ctx->pc == 0x21A538u) {
        ctx->pc = 0x21A538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A534u;
        // 0x21a538: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A53Cu;
        goto label_21a53c;
    }
    ctx->pc = 0x21A534u;
    {
        const bool branch_taken_0x21a534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A534u;
        // 0x21a538: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a534) {
            ctx->pc = 0x21A548u;
            goto label_21a548;
        }
    }
    ctx->pc = 0x21A53Cu;
label_21a53c:
    // 0x21a53c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x21a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_21a540:
    // 0x21a540: 0x10000039  b           . + 4 + (0x39 << 2)
label_21a544:
    if (ctx->pc == 0x21A544u) {
        ctx->pc = 0x21A544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A540u;
        // 0x21a544: 0xac5295b8  sw          $s2, -0x6A48($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294940088), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A548u;
        goto label_21a548;
    }
    ctx->pc = 0x21A540u;
    {
        const bool branch_taken_0x21a540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A540u;
        // 0x21a544: 0xac5295b8  sw          $s2, -0x6A48($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294940088), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a540) {
            ctx->pc = 0x21A628u;
            goto label_21a628;
        }
    }
    ctx->pc = 0x21A548u;
label_21a548:
    // 0x21a548: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21a548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21a54c:
    // 0x21a54c: 0xc0d73cc  jal         func_35CF30
label_21a550:
    if (ctx->pc == 0x21A550u) {
        ctx->pc = 0x21A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A54Cu;
        // 0x21a550: 0x24843550  addiu       $a0, $a0, 0x3550 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A554u;
        goto label_21a554;
    }
    ctx->pc = 0x21A54Cu;
    SET_GPR_U32(ctx, 31, 0x21A554u);
    ctx->pc = 0x21A550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A54Cu;
    // 0x21a550: 0x24843550  addiu       $a0, $a0, 0x3550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21A54Cu, 0x21A554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A554u;
label_21a554:
    // 0x21a554: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21a554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_21a558:
    // 0x21a558: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21a55c:
    if (ctx->pc == 0x21A55Cu) {
        ctx->pc = 0x21A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A558u;
        // 0x21a55c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A560u;
        goto label_21a560;
    }
    ctx->pc = 0x21A558u;
    {
        const bool branch_taken_0x21a558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A558u;
        // 0x21a55c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a558) {
            ctx->pc = 0x21A568u;
            goto label_21a568;
        }
    }
    ctx->pc = 0x21A560u;
label_21a560:
    // 0x21a560: 0x10000031  b           . + 4 + (0x31 << 2)
label_21a564:
    if (ctx->pc == 0x21A564u) {
        ctx->pc = 0x21A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A560u;
        // 0x21a564: 0xac5295bc  sw          $s2, -0x6A44($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294940092), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A568u;
        goto label_21a568;
    }
    ctx->pc = 0x21A560u;
    {
        const bool branch_taken_0x21a560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A560u;
        // 0x21a564: 0xac5295bc  sw          $s2, -0x6A44($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294940092), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a560) {
            ctx->pc = 0x21A628u;
            goto label_21a628;
        }
    }
    ctx->pc = 0x21A568u;
label_21a568:
    // 0x21a568: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x21a568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_21a56c:
    // 0x21a56c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21a56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21a570:
    // 0x21a570: 0xc0d73cc  jal         func_35CF30
label_21a574:
    if (ctx->pc == 0x21A574u) {
        ctx->pc = 0x21A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A570u;
        // 0x21a574: 0x24843558  addiu       $a0, $a0, 0x3558 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A578u;
        goto label_21a578;
    }
    ctx->pc = 0x21A570u;
    SET_GPR_U32(ctx, 31, 0x21A578u);
    ctx->pc = 0x21A574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A570u;
    // 0x21a574: 0x24843558  addiu       $a0, $a0, 0x3558 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21A570u, 0x21A578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A578u;
label_21a578:
    // 0x21a578: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21a578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_21a57c:
    // 0x21a57c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21a580:
    if (ctx->pc == 0x21A580u) {
        ctx->pc = 0x21A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A57Cu;
        // 0x21a580: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A584u;
        goto label_21a584;
    }
    ctx->pc = 0x21A57Cu;
    {
        const bool branch_taken_0x21a57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A57Cu;
        // 0x21a580: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a57c) {
            ctx->pc = 0x21A58Cu;
            goto label_21a58c;
        }
    }
    ctx->pc = 0x21A584u;
label_21a584:
    // 0x21a584: 0x10000028  b           . + 4 + (0x28 << 2)
label_21a588:
    if (ctx->pc == 0x21A588u) {
        ctx->pc = 0x21A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A584u;
        // 0x21a588: 0xac5295c0  sw          $s2, -0x6A40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294940096), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A58Cu;
        goto label_21a58c;
    }
    ctx->pc = 0x21A584u;
    {
        const bool branch_taken_0x21a584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A584u;
        // 0x21a588: 0xac5295c0  sw          $s2, -0x6A40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294940096), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a584) {
            ctx->pc = 0x21A628u;
            goto label_21a628;
        }
    }
    ctx->pc = 0x21A58Cu;
label_21a58c:
    // 0x21a58c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x21a58cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_21a590:
    // 0x21a590: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21a590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21a594:
    // 0x21a594: 0xc0d73cc  jal         func_35CF30
label_21a598:
    if (ctx->pc == 0x21A598u) {
        ctx->pc = 0x21A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A594u;
        // 0x21a598: 0x24843560  addiu       $a0, $a0, 0x3560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A59Cu;
        goto label_21a59c;
    }
    ctx->pc = 0x21A594u;
    SET_GPR_U32(ctx, 31, 0x21A59Cu);
    ctx->pc = 0x21A598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A594u;
    // 0x21a598: 0x24843560  addiu       $a0, $a0, 0x3560 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21A594u, 0x21A59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A59Cu;
label_21a59c:
    // 0x21a59c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21a59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_21a5a0:
    // 0x21a5a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21a5a4:
    if (ctx->pc == 0x21A5A4u) {
        ctx->pc = 0x21A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A5A0u;
        // 0x21a5a4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A5A8u;
        goto label_21a5a8;
    }
    ctx->pc = 0x21A5A0u;
    {
        const bool branch_taken_0x21a5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A5A0u;
        // 0x21a5a4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a5a0) {
            ctx->pc = 0x21A5B0u;
            goto label_21a5b0;
        }
    }
    ctx->pc = 0x21A5A8u;
label_21a5a8:
    // 0x21a5a8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_21a5ac:
    if (ctx->pc == 0x21A5ACu) {
        ctx->pc = 0x21A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A5A8u;
        // 0x21a5ac: 0xac5295c4  sw          $s2, -0x6A3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294940100), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A5B0u;
        goto label_21a5b0;
    }
    ctx->pc = 0x21A5A8u;
    {
        const bool branch_taken_0x21a5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A5A8u;
        // 0x21a5ac: 0xac5295c4  sw          $s2, -0x6A3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294940100), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a5a8) {
            ctx->pc = 0x21A628u;
            goto label_21a628;
        }
    }
    ctx->pc = 0x21A5B0u;
label_21a5b0:
    // 0x21a5b0: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x21a5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_21a5b4:
    // 0x21a5b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21a5b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21a5b8:
    // 0x21a5b8: 0xc0d73cc  jal         func_35CF30
label_21a5bc:
    if (ctx->pc == 0x21A5BCu) {
        ctx->pc = 0x21A5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A5B8u;
        // 0x21a5bc: 0x24843568  addiu       $a0, $a0, 0x3568 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A5C0u;
        goto label_21a5c0;
    }
    ctx->pc = 0x21A5B8u;
    SET_GPR_U32(ctx, 31, 0x21A5C0u);
    ctx->pc = 0x21A5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A5B8u;
    // 0x21a5bc: 0x24843568  addiu       $a0, $a0, 0x3568 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21A5B8u, 0x21A5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A5C0u;
label_21a5c0:
    // 0x21a5c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21a5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_21a5c4:
    // 0x21a5c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21a5c8:
    if (ctx->pc == 0x21A5C8u) {
        ctx->pc = 0x21A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A5C4u;
        // 0x21a5c8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A5CCu;
        goto label_21a5cc;
    }
    ctx->pc = 0x21A5C4u;
    {
        const bool branch_taken_0x21a5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A5C4u;
        // 0x21a5c8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a5c4) {
            ctx->pc = 0x21A5D4u;
            goto label_21a5d4;
        }
    }
    ctx->pc = 0x21A5CCu;
label_21a5cc:
    // 0x21a5cc: 0x10000016  b           . + 4 + (0x16 << 2)
label_21a5d0:
    if (ctx->pc == 0x21A5D0u) {
        ctx->pc = 0x21A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A5CCu;
        // 0x21a5d0: 0xac5295c8  sw          $s2, -0x6A38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294940104), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A5D4u;
        goto label_21a5d4;
    }
    ctx->pc = 0x21A5CCu;
    {
        const bool branch_taken_0x21a5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A5CCu;
        // 0x21a5d0: 0xac5295c8  sw          $s2, -0x6A38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294940104), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a5cc) {
            ctx->pc = 0x21A628u;
            goto label_21a628;
        }
    }
    ctx->pc = 0x21A5D4u;
label_21a5d4:
    // 0x21a5d4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21a5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_21a5d8:
    // 0x21a5d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21a5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21a5dc:
    // 0x21a5dc: 0x24a517f8  addiu       $a1, $a1, 0x17F8
    ctx->pc = 0x21a5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6136));
label_21a5e0:
    // 0x21a5e0: 0xc0efcee  jal         func_3BF3B8
label_21a5e4:
    if (ctx->pc == 0x21A5E4u) {
        ctx->pc = 0x21A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A5E0u;
        // 0x21a5e4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A5E8u;
        goto label_21a5e8;
    }
    ctx->pc = 0x21A5E0u;
    SET_GPR_U32(ctx, 31, 0x21A5E8u);
    ctx->pc = 0x21A5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A5E0u;
    // 0x21a5e4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF3B8u, 0x21A5E0u, 0x21A5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A5E8u;
label_21a5e8:
    // 0x21a5e8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_21a5ec:
    if (ctx->pc == 0x21A5ECu) {
        ctx->pc = 0x21A5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A5E8u;
        // 0x21a5ec: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A5F0u;
        goto label_21a5f0;
    }
    ctx->pc = 0x21A5E8u;
    {
        const bool branch_taken_0x21a5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A5E8u;
        // 0x21a5ec: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a5e8) {
            ctx->pc = 0x21A62Cu;
            goto label_21a62c;
        }
    }
    ctx->pc = 0x21A5F0u;
label_21a5f0:
    // 0x21a5f0: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x21a5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_21a5f4:
    // 0x21a5f4: 0xae1295cc  sw          $s2, -0x6A34($s0)
    ctx->pc = 0x21a5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294940108), GPR_U32(ctx, 18));
label_21a5f8:
    // 0x21a5f8: 0x8e420218  lw          $v0, 0x218($s2)
    ctx->pc = 0x21a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_21a5fc:
    // 0x21a5fc: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x21a5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_21a600:
    // 0x21a600: 0x60f809  jalr        $v1
label_21a604:
    if (ctx->pc == 0x21A604u) {
        ctx->pc = 0x21A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A600u;
        // 0x21a604: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A608u;
        goto label_21a608;
    }
    ctx->pc = 0x21A600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21A608u);
        ctx->pc = 0x21A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A600u;
        // 0x21a604: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A600u, 0x21A608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21A608u;
label_21a608:
    // 0x21a608: 0x8e0495cc  lw          $a0, -0x6A34($s0)
    ctx->pc = 0x21a608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940108)));
label_21a60c:
    // 0x21a60c: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x21a60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_21a610:
    // 0x21a610: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x21a610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_21a614:
    // 0x21a614: 0x40f809  jalr        $v0
label_21a618:
    if (ctx->pc == 0x21A618u) {
        ctx->pc = 0x21A61Cu;
        goto label_21a61c;
    }
    ctx->pc = 0x21A614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21A61Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A614u, 0x21A61Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21A61Cu;
label_21a61c:
    // 0x21a61c: 0x8e0495cc  lw          $a0, -0x6A34($s0)
    ctx->pc = 0x21a61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940108)));
label_21a620:
    // 0x21a620: 0xc083938  jal         func_20E4E0
label_21a624:
    if (ctx->pc == 0x21A624u) {
        ctx->pc = 0x21A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A620u;
        // 0x21a624: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A628u;
        goto label_21a628;
    }
    ctx->pc = 0x21A620u;
    SET_GPR_U32(ctx, 31, 0x21A628u);
    ctx->pc = 0x21A624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A620u;
    // 0x21a624: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E4E0u, 0x21A620u, 0x21A628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A628u;
label_21a628:
    // 0x21a628: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x21a628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21a62c:
    // 0x21a62c: 0xdfb00340  ld          $s0, 0x340($sp)
    ctx->pc = 0x21a62cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 832)));
label_21a630:
    // 0x21a630: 0xdfb10348  ld          $s1, 0x348($sp)
    ctx->pc = 0x21a630u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 840)));
label_21a634:
    // 0x21a634: 0xdfb20350  ld          $s2, 0x350($sp)
    ctx->pc = 0x21a634u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 848)));
label_21a638:
    // 0x21a638: 0xdfb30358  ld          $s3, 0x358($sp)
    ctx->pc = 0x21a638u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 856)));
label_21a63c:
    // 0x21a63c: 0xdfb40360  ld          $s4, 0x360($sp)
    ctx->pc = 0x21a63cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 864)));
label_21a640:
    // 0x21a640: 0xdfb50368  ld          $s5, 0x368($sp)
    ctx->pc = 0x21a640u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 872)));
label_21a644:
    // 0x21a644: 0xdfb60370  ld          $s6, 0x370($sp)
    ctx->pc = 0x21a644u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 880)));
label_21a648:
    // 0x21a648: 0xdfbf0378  ld          $ra, 0x378($sp)
    ctx->pc = 0x21a648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 888)));
label_21a64c:
    // 0x21a64c: 0x3e00008  jr          $ra
label_21a650:
    if (ctx->pc == 0x21A650u) {
        ctx->pc = 0x21A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A64Cu;
        // 0x21a650: 0x27bd0380  addiu       $sp, $sp, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A654u;
        goto label_21a654;
    }
    ctx->pc = 0x21A64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A64Cu;
        // 0x21a650: 0x27bd0380  addiu       $sp, $sp, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A654u;
label_21a654:
    // 0x21a654: 0x0  nop
    ctx->pc = 0x21a654u;
    // NOP
    ctx->pc = 0x21a658u;
}
