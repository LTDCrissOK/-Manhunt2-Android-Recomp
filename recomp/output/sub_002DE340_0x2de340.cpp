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

// Function: sub_002DE340
// Address: 0x2de340 - 0x2de8a8
void sub_002DE340_0x2de340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE340_0x2de340");
#endif

    switch (ctx->pc) {
        case 0x2de340u: goto label_2de340;
        case 0x2de344u: goto label_2de344;
        case 0x2de348u: goto label_2de348;
        case 0x2de34cu: goto label_2de34c;
        case 0x2de350u: goto label_2de350;
        case 0x2de354u: goto label_2de354;
        case 0x2de358u: goto label_2de358;
        case 0x2de35cu: goto label_2de35c;
        case 0x2de360u: goto label_2de360;
        case 0x2de364u: goto label_2de364;
        case 0x2de368u: goto label_2de368;
        case 0x2de36cu: goto label_2de36c;
        case 0x2de370u: goto label_2de370;
        case 0x2de374u: goto label_2de374;
        case 0x2de378u: goto label_2de378;
        case 0x2de37cu: goto label_2de37c;
        case 0x2de380u: goto label_2de380;
        case 0x2de384u: goto label_2de384;
        case 0x2de388u: goto label_2de388;
        case 0x2de38cu: goto label_2de38c;
        case 0x2de390u: goto label_2de390;
        case 0x2de394u: goto label_2de394;
        case 0x2de398u: goto label_2de398;
        case 0x2de39cu: goto label_2de39c;
        case 0x2de3a0u: goto label_2de3a0;
        case 0x2de3a4u: goto label_2de3a4;
        case 0x2de3a8u: goto label_2de3a8;
        case 0x2de3acu: goto label_2de3ac;
        case 0x2de3b0u: goto label_2de3b0;
        case 0x2de3b4u: goto label_2de3b4;
        case 0x2de3b8u: goto label_2de3b8;
        case 0x2de3bcu: goto label_2de3bc;
        case 0x2de3c0u: goto label_2de3c0;
        case 0x2de3c4u: goto label_2de3c4;
        case 0x2de3c8u: goto label_2de3c8;
        case 0x2de3ccu: goto label_2de3cc;
        case 0x2de3d0u: goto label_2de3d0;
        case 0x2de3d4u: goto label_2de3d4;
        case 0x2de3d8u: goto label_2de3d8;
        case 0x2de3dcu: goto label_2de3dc;
        case 0x2de3e0u: goto label_2de3e0;
        case 0x2de3e4u: goto label_2de3e4;
        case 0x2de3e8u: goto label_2de3e8;
        case 0x2de3ecu: goto label_2de3ec;
        case 0x2de3f0u: goto label_2de3f0;
        case 0x2de3f4u: goto label_2de3f4;
        case 0x2de3f8u: goto label_2de3f8;
        case 0x2de3fcu: goto label_2de3fc;
        case 0x2de400u: goto label_2de400;
        case 0x2de404u: goto label_2de404;
        case 0x2de408u: goto label_2de408;
        case 0x2de40cu: goto label_2de40c;
        case 0x2de410u: goto label_2de410;
        case 0x2de414u: goto label_2de414;
        case 0x2de418u: goto label_2de418;
        case 0x2de41cu: goto label_2de41c;
        case 0x2de420u: goto label_2de420;
        case 0x2de424u: goto label_2de424;
        case 0x2de428u: goto label_2de428;
        case 0x2de42cu: goto label_2de42c;
        case 0x2de430u: goto label_2de430;
        case 0x2de434u: goto label_2de434;
        case 0x2de438u: goto label_2de438;
        case 0x2de43cu: goto label_2de43c;
        case 0x2de440u: goto label_2de440;
        case 0x2de444u: goto label_2de444;
        case 0x2de448u: goto label_2de448;
        case 0x2de44cu: goto label_2de44c;
        case 0x2de450u: goto label_2de450;
        case 0x2de454u: goto label_2de454;
        case 0x2de458u: goto label_2de458;
        case 0x2de45cu: goto label_2de45c;
        case 0x2de460u: goto label_2de460;
        case 0x2de464u: goto label_2de464;
        case 0x2de468u: goto label_2de468;
        case 0x2de46cu: goto label_2de46c;
        case 0x2de470u: goto label_2de470;
        case 0x2de474u: goto label_2de474;
        case 0x2de478u: goto label_2de478;
        case 0x2de47cu: goto label_2de47c;
        case 0x2de480u: goto label_2de480;
        case 0x2de484u: goto label_2de484;
        case 0x2de488u: goto label_2de488;
        case 0x2de48cu: goto label_2de48c;
        case 0x2de490u: goto label_2de490;
        case 0x2de494u: goto label_2de494;
        case 0x2de498u: goto label_2de498;
        case 0x2de49cu: goto label_2de49c;
        case 0x2de4a0u: goto label_2de4a0;
        case 0x2de4a4u: goto label_2de4a4;
        case 0x2de4a8u: goto label_2de4a8;
        case 0x2de4acu: goto label_2de4ac;
        case 0x2de4b0u: goto label_2de4b0;
        case 0x2de4b4u: goto label_2de4b4;
        case 0x2de4b8u: goto label_2de4b8;
        case 0x2de4bcu: goto label_2de4bc;
        case 0x2de4c0u: goto label_2de4c0;
        case 0x2de4c4u: goto label_2de4c4;
        case 0x2de4c8u: goto label_2de4c8;
        case 0x2de4ccu: goto label_2de4cc;
        case 0x2de4d0u: goto label_2de4d0;
        case 0x2de4d4u: goto label_2de4d4;
        case 0x2de4d8u: goto label_2de4d8;
        case 0x2de4dcu: goto label_2de4dc;
        case 0x2de4e0u: goto label_2de4e0;
        case 0x2de4e4u: goto label_2de4e4;
        case 0x2de4e8u: goto label_2de4e8;
        case 0x2de4ecu: goto label_2de4ec;
        case 0x2de4f0u: goto label_2de4f0;
        case 0x2de4f4u: goto label_2de4f4;
        case 0x2de4f8u: goto label_2de4f8;
        case 0x2de4fcu: goto label_2de4fc;
        case 0x2de500u: goto label_2de500;
        case 0x2de504u: goto label_2de504;
        case 0x2de508u: goto label_2de508;
        case 0x2de50cu: goto label_2de50c;
        case 0x2de510u: goto label_2de510;
        case 0x2de514u: goto label_2de514;
        case 0x2de518u: goto label_2de518;
        case 0x2de51cu: goto label_2de51c;
        case 0x2de520u: goto label_2de520;
        case 0x2de524u: goto label_2de524;
        case 0x2de528u: goto label_2de528;
        case 0x2de52cu: goto label_2de52c;
        case 0x2de530u: goto label_2de530;
        case 0x2de534u: goto label_2de534;
        case 0x2de538u: goto label_2de538;
        case 0x2de53cu: goto label_2de53c;
        case 0x2de540u: goto label_2de540;
        case 0x2de544u: goto label_2de544;
        case 0x2de548u: goto label_2de548;
        case 0x2de54cu: goto label_2de54c;
        case 0x2de550u: goto label_2de550;
        case 0x2de554u: goto label_2de554;
        case 0x2de558u: goto label_2de558;
        case 0x2de55cu: goto label_2de55c;
        case 0x2de560u: goto label_2de560;
        case 0x2de564u: goto label_2de564;
        case 0x2de568u: goto label_2de568;
        case 0x2de56cu: goto label_2de56c;
        case 0x2de570u: goto label_2de570;
        case 0x2de574u: goto label_2de574;
        case 0x2de578u: goto label_2de578;
        case 0x2de57cu: goto label_2de57c;
        case 0x2de580u: goto label_2de580;
        case 0x2de584u: goto label_2de584;
        case 0x2de588u: goto label_2de588;
        case 0x2de58cu: goto label_2de58c;
        case 0x2de590u: goto label_2de590;
        case 0x2de594u: goto label_2de594;
        case 0x2de598u: goto label_2de598;
        case 0x2de59cu: goto label_2de59c;
        case 0x2de5a0u: goto label_2de5a0;
        case 0x2de5a4u: goto label_2de5a4;
        case 0x2de5a8u: goto label_2de5a8;
        case 0x2de5acu: goto label_2de5ac;
        case 0x2de5b0u: goto label_2de5b0;
        case 0x2de5b4u: goto label_2de5b4;
        case 0x2de5b8u: goto label_2de5b8;
        case 0x2de5bcu: goto label_2de5bc;
        case 0x2de5c0u: goto label_2de5c0;
        case 0x2de5c4u: goto label_2de5c4;
        case 0x2de5c8u: goto label_2de5c8;
        case 0x2de5ccu: goto label_2de5cc;
        case 0x2de5d0u: goto label_2de5d0;
        case 0x2de5d4u: goto label_2de5d4;
        case 0x2de5d8u: goto label_2de5d8;
        case 0x2de5dcu: goto label_2de5dc;
        case 0x2de5e0u: goto label_2de5e0;
        case 0x2de5e4u: goto label_2de5e4;
        case 0x2de5e8u: goto label_2de5e8;
        case 0x2de5ecu: goto label_2de5ec;
        case 0x2de5f0u: goto label_2de5f0;
        case 0x2de5f4u: goto label_2de5f4;
        case 0x2de5f8u: goto label_2de5f8;
        case 0x2de5fcu: goto label_2de5fc;
        case 0x2de600u: goto label_2de600;
        case 0x2de604u: goto label_2de604;
        case 0x2de608u: goto label_2de608;
        case 0x2de60cu: goto label_2de60c;
        case 0x2de610u: goto label_2de610;
        case 0x2de614u: goto label_2de614;
        case 0x2de618u: goto label_2de618;
        case 0x2de61cu: goto label_2de61c;
        case 0x2de620u: goto label_2de620;
        case 0x2de624u: goto label_2de624;
        case 0x2de628u: goto label_2de628;
        case 0x2de62cu: goto label_2de62c;
        case 0x2de630u: goto label_2de630;
        case 0x2de634u: goto label_2de634;
        case 0x2de638u: goto label_2de638;
        case 0x2de63cu: goto label_2de63c;
        case 0x2de640u: goto label_2de640;
        case 0x2de644u: goto label_2de644;
        case 0x2de648u: goto label_2de648;
        case 0x2de64cu: goto label_2de64c;
        case 0x2de650u: goto label_2de650;
        case 0x2de654u: goto label_2de654;
        case 0x2de658u: goto label_2de658;
        case 0x2de65cu: goto label_2de65c;
        case 0x2de660u: goto label_2de660;
        case 0x2de664u: goto label_2de664;
        case 0x2de668u: goto label_2de668;
        case 0x2de66cu: goto label_2de66c;
        case 0x2de670u: goto label_2de670;
        case 0x2de674u: goto label_2de674;
        case 0x2de678u: goto label_2de678;
        case 0x2de67cu: goto label_2de67c;
        case 0x2de680u: goto label_2de680;
        case 0x2de684u: goto label_2de684;
        case 0x2de688u: goto label_2de688;
        case 0x2de68cu: goto label_2de68c;
        case 0x2de690u: goto label_2de690;
        case 0x2de694u: goto label_2de694;
        case 0x2de698u: goto label_2de698;
        case 0x2de69cu: goto label_2de69c;
        case 0x2de6a0u: goto label_2de6a0;
        case 0x2de6a4u: goto label_2de6a4;
        case 0x2de6a8u: goto label_2de6a8;
        case 0x2de6acu: goto label_2de6ac;
        case 0x2de6b0u: goto label_2de6b0;
        case 0x2de6b4u: goto label_2de6b4;
        case 0x2de6b8u: goto label_2de6b8;
        case 0x2de6bcu: goto label_2de6bc;
        case 0x2de6c0u: goto label_2de6c0;
        case 0x2de6c4u: goto label_2de6c4;
        case 0x2de6c8u: goto label_2de6c8;
        case 0x2de6ccu: goto label_2de6cc;
        case 0x2de6d0u: goto label_2de6d0;
        case 0x2de6d4u: goto label_2de6d4;
        case 0x2de6d8u: goto label_2de6d8;
        case 0x2de6dcu: goto label_2de6dc;
        case 0x2de6e0u: goto label_2de6e0;
        case 0x2de6e4u: goto label_2de6e4;
        case 0x2de6e8u: goto label_2de6e8;
        case 0x2de6ecu: goto label_2de6ec;
        case 0x2de6f0u: goto label_2de6f0;
        case 0x2de6f4u: goto label_2de6f4;
        case 0x2de6f8u: goto label_2de6f8;
        case 0x2de6fcu: goto label_2de6fc;
        case 0x2de700u: goto label_2de700;
        case 0x2de704u: goto label_2de704;
        case 0x2de708u: goto label_2de708;
        case 0x2de70cu: goto label_2de70c;
        case 0x2de710u: goto label_2de710;
        case 0x2de714u: goto label_2de714;
        case 0x2de718u: goto label_2de718;
        case 0x2de71cu: goto label_2de71c;
        case 0x2de720u: goto label_2de720;
        case 0x2de724u: goto label_2de724;
        case 0x2de728u: goto label_2de728;
        case 0x2de72cu: goto label_2de72c;
        case 0x2de730u: goto label_2de730;
        case 0x2de734u: goto label_2de734;
        case 0x2de738u: goto label_2de738;
        case 0x2de73cu: goto label_2de73c;
        case 0x2de740u: goto label_2de740;
        case 0x2de744u: goto label_2de744;
        case 0x2de748u: goto label_2de748;
        case 0x2de74cu: goto label_2de74c;
        case 0x2de750u: goto label_2de750;
        case 0x2de754u: goto label_2de754;
        case 0x2de758u: goto label_2de758;
        case 0x2de75cu: goto label_2de75c;
        case 0x2de760u: goto label_2de760;
        case 0x2de764u: goto label_2de764;
        case 0x2de768u: goto label_2de768;
        case 0x2de76cu: goto label_2de76c;
        case 0x2de770u: goto label_2de770;
        case 0x2de774u: goto label_2de774;
        case 0x2de778u: goto label_2de778;
        case 0x2de77cu: goto label_2de77c;
        case 0x2de780u: goto label_2de780;
        case 0x2de784u: goto label_2de784;
        case 0x2de788u: goto label_2de788;
        case 0x2de78cu: goto label_2de78c;
        case 0x2de790u: goto label_2de790;
        case 0x2de794u: goto label_2de794;
        case 0x2de798u: goto label_2de798;
        case 0x2de79cu: goto label_2de79c;
        case 0x2de7a0u: goto label_2de7a0;
        case 0x2de7a4u: goto label_2de7a4;
        case 0x2de7a8u: goto label_2de7a8;
        case 0x2de7acu: goto label_2de7ac;
        case 0x2de7b0u: goto label_2de7b0;
        case 0x2de7b4u: goto label_2de7b4;
        case 0x2de7b8u: goto label_2de7b8;
        case 0x2de7bcu: goto label_2de7bc;
        case 0x2de7c0u: goto label_2de7c0;
        case 0x2de7c4u: goto label_2de7c4;
        case 0x2de7c8u: goto label_2de7c8;
        case 0x2de7ccu: goto label_2de7cc;
        case 0x2de7d0u: goto label_2de7d0;
        case 0x2de7d4u: goto label_2de7d4;
        case 0x2de7d8u: goto label_2de7d8;
        case 0x2de7dcu: goto label_2de7dc;
        case 0x2de7e0u: goto label_2de7e0;
        case 0x2de7e4u: goto label_2de7e4;
        case 0x2de7e8u: goto label_2de7e8;
        case 0x2de7ecu: goto label_2de7ec;
        case 0x2de7f0u: goto label_2de7f0;
        case 0x2de7f4u: goto label_2de7f4;
        case 0x2de7f8u: goto label_2de7f8;
        case 0x2de7fcu: goto label_2de7fc;
        case 0x2de800u: goto label_2de800;
        case 0x2de804u: goto label_2de804;
        case 0x2de808u: goto label_2de808;
        case 0x2de80cu: goto label_2de80c;
        case 0x2de810u: goto label_2de810;
        case 0x2de814u: goto label_2de814;
        case 0x2de818u: goto label_2de818;
        case 0x2de81cu: goto label_2de81c;
        case 0x2de820u: goto label_2de820;
        case 0x2de824u: goto label_2de824;
        case 0x2de828u: goto label_2de828;
        case 0x2de82cu: goto label_2de82c;
        case 0x2de830u: goto label_2de830;
        case 0x2de834u: goto label_2de834;
        case 0x2de838u: goto label_2de838;
        case 0x2de83cu: goto label_2de83c;
        case 0x2de840u: goto label_2de840;
        case 0x2de844u: goto label_2de844;
        case 0x2de848u: goto label_2de848;
        case 0x2de84cu: goto label_2de84c;
        case 0x2de850u: goto label_2de850;
        case 0x2de854u: goto label_2de854;
        case 0x2de858u: goto label_2de858;
        case 0x2de85cu: goto label_2de85c;
        case 0x2de860u: goto label_2de860;
        case 0x2de864u: goto label_2de864;
        case 0x2de868u: goto label_2de868;
        case 0x2de86cu: goto label_2de86c;
        case 0x2de870u: goto label_2de870;
        case 0x2de874u: goto label_2de874;
        case 0x2de878u: goto label_2de878;
        case 0x2de87cu: goto label_2de87c;
        case 0x2de880u: goto label_2de880;
        case 0x2de884u: goto label_2de884;
        case 0x2de888u: goto label_2de888;
        case 0x2de88cu: goto label_2de88c;
        case 0x2de890u: goto label_2de890;
        case 0x2de894u: goto label_2de894;
        case 0x2de898u: goto label_2de898;
        case 0x2de89cu: goto label_2de89c;
        case 0x2de8a0u: goto label_2de8a0;
        case 0x2de8a4u: goto label_2de8a4;
        default: break;
    }

    ctx->pc = 0x2de340u;

label_2de340:
    // 0x2de340: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2de340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2de344:
    // 0x2de344: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x2de344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
label_2de348:
    // 0x2de348: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x2de348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
label_2de34c:
    // 0x2de34c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2de34cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2de350:
    // 0x2de350: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x2de350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
label_2de354:
    // 0x2de354: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2de354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2de358:
    // 0x2de358: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x2de358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
label_2de35c:
    // 0x2de35c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2de35cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2de360:
    // 0x2de360: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x2de360u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2de364:
    // 0x2de364: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2de364u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2de368:
    // 0x2de368: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2de368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_2de36c:
    // 0x2de36c: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2de36cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2de370:
    // 0x2de370: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x2de370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_2de374:
    // 0x2de374: 0x10400142  beqz        $v0, . + 4 + (0x142 << 2)
label_2de378:
    if (ctx->pc == 0x2DE378u) {
        ctx->pc = 0x2DE378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE374u;
        // 0x2de378: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE37Cu;
        goto label_2de37c;
    }
    ctx->pc = 0x2DE374u;
    {
        const bool branch_taken_0x2de374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE374u;
        // 0x2de378: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de374) {
            ctx->pc = 0x2DE880u;
            goto label_2de880;
        }
    }
    ctx->pc = 0x2DE37Cu;
label_2de37c:
    // 0x2de37c: 0xc0f6a96  jal         func_3DAA58
label_2de380:
    if (ctx->pc == 0x2DE380u) {
        ctx->pc = 0x2DE380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE37Cu;
        // 0x2de380: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE384u;
        goto label_2de384;
    }
    ctx->pc = 0x2DE37Cu;
    SET_GPR_U32(ctx, 31, 0x2DE384u);
    ctx->pc = 0x2DE380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE37Cu;
    // 0x2de380: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DE37Cu, 0x2DE384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE384u;
label_2de384:
    // 0x2de384: 0xc0f6a96  jal         func_3DAA58
label_2de388:
    if (ctx->pc == 0x2DE388u) {
        ctx->pc = 0x2DE388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE384u;
        // 0x2de388: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE38Cu;
        goto label_2de38c;
    }
    ctx->pc = 0x2DE384u;
    SET_GPR_U32(ctx, 31, 0x2DE38Cu);
    ctx->pc = 0x2DE388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE384u;
    // 0x2de388: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DE384u, 0x2DE38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE38Cu;
label_2de38c:
    // 0x2de38c: 0xc0f6a96  jal         func_3DAA58
label_2de390:
    if (ctx->pc == 0x2DE390u) {
        ctx->pc = 0x2DE390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE38Cu;
        // 0x2de390: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE394u;
        goto label_2de394;
    }
    ctx->pc = 0x2DE38Cu;
    SET_GPR_U32(ctx, 31, 0x2DE394u);
    ctx->pc = 0x2DE390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE38Cu;
    // 0x2de390: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DE38Cu, 0x2DE394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE394u;
label_2de394:
    // 0x2de394: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2de394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2de398:
    // 0x2de398: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2de398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2de39c:
    // 0x2de39c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2de39cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2de3a0:
    // 0x2de3a0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2de3a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2de3a4:
    // 0x2de3a4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2de3a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2de3a8:
    // 0x2de3a8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2de3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2de3ac:
    // 0x2de3ac: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2de3acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2de3b0:
    // 0x2de3b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2de3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2de3b4:
    // 0x2de3b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2de3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de3b8:
    // 0x2de3b8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2de3b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2de3bc:
    // 0x2de3bc: 0xc0b7830  jal         func_2DE0C0
label_2de3c0:
    if (ctx->pc == 0x2DE3C0u) {
        ctx->pc = 0x2DE3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE3BCu;
        // 0x2de3c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE3C4u;
        goto label_2de3c4;
    }
    ctx->pc = 0x2DE3BCu;
    SET_GPR_U32(ctx, 31, 0x2DE3C4u);
    ctx->pc = 0x2DE3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE3BCu;
    // 0x2de3c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE0C0u, 0x2DE3BCu, 0x2DE3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE3C4u;
label_2de3c4:
    // 0x2de3c4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2de3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2de3c8:
    // 0x2de3c8: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x2de3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2de3cc:
    // 0x2de3cc: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2de3ccu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2de3d0:
    // 0x2de3d0: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2de3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2de3d4:
    // 0x2de3d4: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x2de3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2de3d8:
    // 0x2de3d8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2de3d8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2de3dc:
    // 0x2de3dc: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2de3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2de3e0:
    // 0x2de3e0: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x2de3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2de3e4:
    // 0x2de3e4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2de3e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2de3e8:
    // 0x2de3e8: 0xc624000c  lwc1        $f4, 0xC($s1)
    ctx->pc = 0x2de3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2de3ec:
    // 0x2de3ec: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2de3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2de3f0:
    // 0x2de3f0: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x2de3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2de3f4:
    // 0x2de3f4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2de3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2de3f8:
    // 0x2de3f8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2de3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2de3fc:
    // 0x2de3fc: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x2de3fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_2de400:
    // 0x2de400: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x2de400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2de404:
    // 0x2de404: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2de404u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2de408:
    // 0x2de408: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2de408u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2de40c:
    // 0x2de40c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2de40cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2de410:
    // 0x2de410: 0xe7a4003c  swc1        $f4, 0x3C($sp)
    ctx->pc = 0x2de410u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2de414:
    // 0x2de414: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x2de414u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2de418:
    // 0x2de418: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2de418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2de41c:
    // 0x2de41c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2de41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2de420:
    // 0x2de420: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2de420u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2de424:
    // 0x2de424: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2de424u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2de428:
    // 0x2de428: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2de428u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2de42c:
    // 0x2de42c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2de42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2de430:
    // 0x2de430: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2de430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2de434:
    // 0x2de434: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2de434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2de438:
    // 0x2de438: 0x0  nop
    ctx->pc = 0x2de438u;
    // NOP
label_2de43c:
    // 0x2de43c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2de43cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2de440:
    // 0x2de440: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2de440u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2de444:
    // 0x2de444: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2de444u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2de448:
    // 0x2de448: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2de448u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2de44c:
    // 0x2de44c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2de44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2de450:
    // 0x2de450: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2de450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2de454:
    // 0x2de454: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2de454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de458:
    // 0x2de458: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x2de458u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2de45c:
    // 0x2de45c: 0x0  nop
    ctx->pc = 0x2de45cu;
    // NOP
label_2de460:
    // 0x2de460: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2de464:
    if (ctx->pc == 0x2DE464u) {
        ctx->pc = 0x2DE464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE460u;
        // 0x2de464: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE468u;
        goto label_2de468;
    }
    ctx->pc = 0x2DE460u;
    {
        const bool branch_taken_0x2de460 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DE464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE460u;
        // 0x2de464: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de460) {
            ctx->pc = 0x2DE47Cu;
            goto label_2de47c;
        }
    }
    ctx->pc = 0x2DE468u;
label_2de468:
    // 0x2de468: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2de468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_2de46c:
    // 0x2de46c: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2de46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de470:
    // 0x2de470: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2de470u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de474:
    // 0x2de474: 0x10000006  b           . + 4 + (0x6 << 2)
label_2de478:
    if (ctx->pc == 0x2DE478u) {
        ctx->pc = 0x2DE478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE474u;
        // 0x2de478: 0x4600ad02  mul.s       $f20, $f21, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE47Cu;
        goto label_2de47c;
    }
    ctx->pc = 0x2DE474u;
    {
        const bool branch_taken_0x2de474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE474u;
        // 0x2de478: 0x4600ad02  mul.s       $f20, $f21, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de474) {
            ctx->pc = 0x2DE490u;
            goto label_2de490;
        }
    }
    ctx->pc = 0x2DE47Cu;
label_2de47c:
    // 0x2de47c: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2de47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_2de480:
    // 0x2de480: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x2de480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2de484:
    // 0x2de484: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2de484u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de488:
    // 0x2de488: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2de488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de48c:
    // 0x2de48c: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x2de48cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2de490:
    // 0x2de490: 0x8e62005c  lw          $v0, 0x5C($s3)
    ctx->pc = 0x2de490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_2de494:
    // 0x2de494: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2de498:
    if (ctx->pc == 0x2DE498u) {
        ctx->pc = 0x2DE498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE494u;
        // 0x2de498: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE49Cu;
        goto label_2de49c;
    }
    ctx->pc = 0x2DE494u;
    {
        const bool branch_taken_0x2de494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE494u;
        // 0x2de498: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de494) {
            ctx->pc = 0x2DE4A4u;
            goto label_2de4a4;
        }
    }
    ctx->pc = 0x2DE49Cu;
label_2de49c:
    // 0x2de49c: 0x10000004  b           . + 4 + (0x4 << 2)
label_2de4a0:
    if (ctx->pc == 0x2DE4A0u) {
        ctx->pc = 0x2DE4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE49Cu;
        // 0x2de4a0: 0xc4402b30  lwc1        $f0, 0x2B30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE4A4u;
        goto label_2de4a4;
    }
    ctx->pc = 0x2DE49Cu;
    {
        const bool branch_taken_0x2de49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE49Cu;
        // 0x2de4a0: 0xc4402b30  lwc1        $f0, 0x2B30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de49c) {
            ctx->pc = 0x2DE4B0u;
            goto label_2de4b0;
        }
    }
    ctx->pc = 0x2DE4A4u;
label_2de4a4:
    // 0x2de4a4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2de4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_2de4a8:
    // 0x2de4a8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2de4a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2de4ac:
    // 0x2de4ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2de4acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2de4b0:
    // 0x2de4b0: 0x0  nop
    ctx->pc = 0x2de4b0u;
    // NOP
label_2de4b4:
    // 0x2de4b4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2de4b4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2de4b8:
    // 0x2de4b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2de4b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2de4bc:
    // 0x2de4bc: 0x0  nop
    ctx->pc = 0x2de4bcu;
    // NOP
label_2de4c0:
    // 0x2de4c0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2de4c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2de4c4:
    // 0x2de4c4: 0x0  nop
    ctx->pc = 0x2de4c4u;
    // NOP
label_2de4c8:
    // 0x2de4c8: 0x450200ee  bc1fl       . + 4 + (0xEE << 2)
label_2de4cc:
    if (ctx->pc == 0x2DE4CCu) {
        ctx->pc = 0x2DE4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4C8u;
        // 0x2de4cc: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE4D0u;
        goto label_2de4d0;
    }
    ctx->pc = 0x2DE4C8u;
    {
        const bool branch_taken_0x2de4c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de4c8) {
            ctx->pc = 0x2DE4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE4C8u;
            // 0x2de4cc: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE884u;
            goto label_2de884;
        }
    }
    ctx->pc = 0x2DE4D0u;
label_2de4d0:
    // 0x2de4d0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2de4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2de4d4:
    // 0x2de4d4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_2de4d8:
    if (ctx->pc == 0x2DE4D8u) {
        ctx->pc = 0x2DE4DCu;
        goto label_2de4dc;
    }
    ctx->pc = 0x2DE4D4u;
    {
        const bool branch_taken_0x2de4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de4d4) {
            ctx->pc = 0x2DE554u;
            goto label_2de554;
        }
    }
    ctx->pc = 0x2DE4DCu;
label_2de4dc:
    // 0x2de4dc: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
label_2de4e0:
    if (ctx->pc == 0x2DE4E0u) {
        ctx->pc = 0x2DE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4DCu;
        // 0x2de4e0: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE4E4u;
        goto label_2de4e4;
    }
    ctx->pc = 0x2DE4DCu;
    {
        const bool branch_taken_0x2de4dc = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2DE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4DCu;
        // 0x2de4e0: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de4dc) {
            ctx->pc = 0x2DE4F8u;
            goto label_2de4f8;
        }
    }
    ctx->pc = 0x2DE4E4u;
label_2de4e4:
    // 0x2de4e4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2de4e4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2de4e8:
    // 0x2de4e8: 0x0  nop
    ctx->pc = 0x2de4e8u;
    // NOP
label_2de4ec:
    // 0x2de4ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2de4ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2de4f0:
    // 0x2de4f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2de4f4:
    if (ctx->pc == 0x2DE4F4u) {
        ctx->pc = 0x2DE4F8u;
        goto label_2de4f8;
    }
    ctx->pc = 0x2DE4F0u;
    {
        const bool branch_taken_0x2de4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de4f0) {
            ctx->pc = 0x2DE510u;
            goto label_2de510;
        }
    }
    ctx->pc = 0x2DE4F8u;
label_2de4f8:
    // 0x2de4f8: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x2de4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_2de4fc:
    // 0x2de4fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2de4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2de500:
    // 0x2de500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2de500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2de504:
    // 0x2de504: 0x0  nop
    ctx->pc = 0x2de504u;
    // NOP
label_2de508:
    // 0x2de508: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2de508u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2de50c:
    // 0x2de50c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2de50cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2de510:
    // 0x2de510: 0x0  nop
    ctx->pc = 0x2de510u;
    // NOP
label_2de514:
    // 0x2de514: 0x0  nop
    ctx->pc = 0x2de514u;
    // NOP
label_2de518:
    // 0x2de518: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x2de518u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_2de51c:
    // 0x2de51c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2de51cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2de520:
    // 0x2de520: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2de520u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2de524:
    // 0x2de524: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2de524u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2de528:
    // 0x2de528: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2de528u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2de52c:
    // 0x2de52c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2de52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2de530:
    // 0x2de530: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x2de530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_2de534:
    // 0x2de534: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2de534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2de538:
    // 0x2de538: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2de538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de53c:
    // 0x2de53c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2de53cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2de540:
    // 0x2de540: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x2de540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_2de544:
    // 0x2de544: 0x40f809  jalr        $v0
label_2de548:
    if (ctx->pc == 0x2DE548u) {
        ctx->pc = 0x2DE548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE544u;
        // 0x2de548: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE54Cu;
        goto label_2de54c;
    }
    ctx->pc = 0x2DE544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DE54Cu);
        ctx->pc = 0x2DE548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE544u;
        // 0x2de548: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE544u, 0x2DE54Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DE54Cu;
label_2de54c:
    // 0x2de54c: 0x100000cd  b           . + 4 + (0xCD << 2)
label_2de550:
    if (ctx->pc == 0x2DE550u) {
        ctx->pc = 0x2DE550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE54Cu;
        // 0x2de550: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE554u;
        goto label_2de554;
    }
    ctx->pc = 0x2DE54Cu;
    {
        const bool branch_taken_0x2de54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE54Cu;
        // 0x2de550: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de54c) {
            ctx->pc = 0x2DE884u;
            goto label_2de884;
        }
    }
    ctx->pc = 0x2DE554u;
label_2de554:
    // 0x2de554: 0xc0f6a96  jal         func_3DAA58
label_2de558:
    if (ctx->pc == 0x2DE558u) {
        ctx->pc = 0x2DE558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE554u;
        // 0x2de558: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE55Cu;
        goto label_2de55c;
    }
    ctx->pc = 0x2DE554u;
    SET_GPR_U32(ctx, 31, 0x2DE55Cu);
    ctx->pc = 0x2DE558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE554u;
    // 0x2de558: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DE554u, 0x2DE55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE55Cu;
label_2de55c:
    // 0x2de55c: 0xc0f6a96  jal         func_3DAA58
label_2de560:
    if (ctx->pc == 0x2DE560u) {
        ctx->pc = 0x2DE560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE55Cu;
        // 0x2de560: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE564u;
        goto label_2de564;
    }
    ctx->pc = 0x2DE55Cu;
    SET_GPR_U32(ctx, 31, 0x2DE564u);
    ctx->pc = 0x2DE560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE55Cu;
    // 0x2de560: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DE55Cu, 0x2DE564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE564u;
label_2de564:
    // 0x2de564: 0xc0f6a96  jal         func_3DAA58
label_2de568:
    if (ctx->pc == 0x2DE568u) {
        ctx->pc = 0x2DE568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE564u;
        // 0x2de568: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE56Cu;
        goto label_2de56c;
    }
    ctx->pc = 0x2DE564u;
    SET_GPR_U32(ctx, 31, 0x2DE56Cu);
    ctx->pc = 0x2DE568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE564u;
    // 0x2de568: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DE564u, 0x2DE56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE56Cu;
label_2de56c:
    // 0x2de56c: 0xc0f6a96  jal         func_3DAA58
label_2de570:
    if (ctx->pc == 0x2DE570u) {
        ctx->pc = 0x2DE570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE56Cu;
        // 0x2de570: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE574u;
        goto label_2de574;
    }
    ctx->pc = 0x2DE56Cu;
    SET_GPR_U32(ctx, 31, 0x2DE574u);
    ctx->pc = 0x2DE570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE56Cu;
    // 0x2de570: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DE56Cu, 0x2DE574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE574u;
label_2de574:
    // 0x2de574: 0xc0f6a96  jal         func_3DAA58
label_2de578:
    if (ctx->pc == 0x2DE578u) {
        ctx->pc = 0x2DE578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE574u;
        // 0x2de578: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE57Cu;
        goto label_2de57c;
    }
    ctx->pc = 0x2DE574u;
    SET_GPR_U32(ctx, 31, 0x2DE57Cu);
    ctx->pc = 0x2DE578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE574u;
    // 0x2de578: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DE574u, 0x2DE57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE57Cu;
label_2de57c:
    // 0x2de57c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2de57cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2de580:
    // 0x2de580: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2de580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2de584:
    // 0x2de584: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2de584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2de588:
    // 0x2de588: 0x8e630088  lw          $v1, 0x88($s3)
    ctx->pc = 0x2de588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_2de58c:
    // 0x2de58c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2de58cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2de590:
    // 0x2de590: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2de590u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2de594:
    // 0x2de594: 0xd8630010  lqc2        $vf3, 0x10($v1)
    ctx->pc = 0x2de594u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_2de598:
    // 0x2de598: 0xd8640020  lqc2        $vf4, 0x20($v1)
    ctx->pc = 0x2de598u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_2de59c:
    // 0x2de59c: 0xd8650030  lqc2        $vf5, 0x30($v1)
    ctx->pc = 0x2de59cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_2de5a0:
    // 0x2de5a0: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2de5a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2de5a4:
    // 0x2de5a4: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2de5a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2de5a8:
    // 0x2de5a8: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2de5a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2de5ac:
    // 0x2de5ac: 0xfba50040  sqc2        $vf5, 0x40($sp)
    ctx->pc = 0x2de5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[5]));
label_2de5b0:
    // 0x2de5b0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2de5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2de5b4:
    // 0x2de5b4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2de5b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2de5b8:
    // 0x2de5b8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2de5b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2de5bc:
    // 0x2de5bc: 0xd8630010  lqc2        $vf3, 0x10($v1)
    ctx->pc = 0x2de5bcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_2de5c0:
    // 0x2de5c0: 0xd8640020  lqc2        $vf4, 0x20($v1)
    ctx->pc = 0x2de5c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_2de5c4:
    // 0x2de5c4: 0xd8650030  lqc2        $vf5, 0x30($v1)
    ctx->pc = 0x2de5c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_2de5c8:
    // 0x2de5c8: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2de5c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2de5cc:
    // 0x2de5cc: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2de5ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2de5d0:
    // 0x2de5d0: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2de5d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2de5d4:
    // 0x2de5d4: 0xfba50050  sqc2        $vf5, 0x50($sp)
    ctx->pc = 0x2de5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[5]));
label_2de5d8:
    // 0x2de5d8: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2de5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_2de5dc:
    // 0x2de5dc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2de5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_2de5e0:
    // 0x2de5e0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2de5e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2de5e4:
    // 0x2de5e4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2de5e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2de5e8:
    // 0x2de5e8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2de5e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2de5ec:
    // 0x2de5ec: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2de5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2de5f0:
    // 0x2de5f0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2de5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2de5f4:
    // 0x2de5f4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2de5f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2de5f8:
    // 0x2de5f8: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x2de5f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2de5fc:
    // 0x2de5fc: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2de5fcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2de600:
    // 0x2de600: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2de600u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2de604:
    // 0x2de604: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2de604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2de608:
    // 0x2de608: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x2de608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2de60c:
    // 0x2de60c: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x2de60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_2de610:
    // 0x2de610: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2de610u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2de614:
    // 0x2de614: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2de614u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2de618:
    // 0x2de618: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2de618u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2de61c:
    // 0x2de61c: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2de61cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2de620:
    // 0x2de620: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2de620u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2de624:
    // 0x2de624: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2de624u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2de628:
    // 0x2de628: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2de628u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2de62c:
    // 0x2de62c: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2de62cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2de630:
    // 0x2de630: 0xfba50070  sqc2        $vf5, 0x70($sp)
    ctx->pc = 0x2de630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[5]));
label_2de634:
    // 0x2de634: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x2de634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2de638:
    // 0x2de638: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x2de638u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_2de63c:
    // 0x2de63c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2de63cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2de640:
    // 0x2de640: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2de640u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2de644:
    // 0x2de644: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2de644u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2de648:
    // 0x2de648: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2de648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_2de64c:
    // 0x2de64c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2de64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2de650:
    // 0x2de650: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2de650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2de654:
    // 0x2de654: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2de654u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2de658:
    // 0x2de658: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2de658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2de65c:
    // 0x2de65c: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x2de65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2de660:
    // 0x2de660: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2de660u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2de664:
    // 0x2de664: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2de664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2de668:
    // 0x2de668: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x2de668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2de66c:
    // 0x2de66c: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x2de66cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2de670:
    // 0x2de670: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x2de670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de674:
    // 0x2de674: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2de674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2de678:
    // 0x2de678: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x2de678u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
label_2de67c:
    // 0x2de67c: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
label_2de680:
    if (ctx->pc == 0x2DE680u) {
        ctx->pc = 0x2DE680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE67Cu;
        // 0x2de680: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE684u;
        goto label_2de684;
    }
    ctx->pc = 0x2DE67Cu;
    {
        const bool branch_taken_0x2de67c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2DE680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE67Cu;
        // 0x2de680: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de67c) {
            ctx->pc = 0x2DE698u;
            goto label_2de698;
        }
    }
    ctx->pc = 0x2DE684u;
label_2de684:
    // 0x2de684: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x2de684u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2de688:
    // 0x2de688: 0x0  nop
    ctx->pc = 0x2de688u;
    // NOP
label_2de68c:
    // 0x2de68c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2de68cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2de690:
    // 0x2de690: 0x10000007  b           . + 4 + (0x7 << 2)
label_2de694:
    if (ctx->pc == 0x2DE694u) {
        ctx->pc = 0x2DE698u;
        goto label_2de698;
    }
    ctx->pc = 0x2DE690u;
    {
        const bool branch_taken_0x2de690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de690) {
            ctx->pc = 0x2DE6B0u;
            goto label_2de6b0;
        }
    }
    ctx->pc = 0x2DE698u;
label_2de698:
    // 0x2de698: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x2de698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_2de69c:
    // 0x2de69c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2de69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2de6a0:
    // 0x2de6a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2de6a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2de6a4:
    // 0x2de6a4: 0x0  nop
    ctx->pc = 0x2de6a4u;
    // NOP
label_2de6a8:
    // 0x2de6a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2de6a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2de6ac:
    // 0x2de6ac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2de6acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2de6b0:
    // 0x2de6b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2de6b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2de6b4:
    // 0x2de6b4: 0x0  nop
    ctx->pc = 0x2de6b4u;
    // NOP
label_2de6b8:
    // 0x2de6b8: 0x0  nop
    ctx->pc = 0x2de6b8u;
    // NOP
label_2de6bc:
    // 0x2de6bc: 0x46012103  div.s       $f4, $f4, $f1
    ctx->pc = 0x2de6bcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
label_2de6c0:
    // 0x2de6c0: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x2de6c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2de6c4:
    // 0x2de6c4: 0x0  nop
    ctx->pc = 0x2de6c4u;
    // NOP
label_2de6c8:
    // 0x2de6c8: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_2de6cc:
    if (ctx->pc == 0x2DE6CCu) {
        ctx->pc = 0x2DE6D0u;
        goto label_2de6d0;
    }
    ctx->pc = 0x2DE6C8u;
    {
        const bool branch_taken_0x2de6c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de6c8) {
            ctx->pc = 0x2DE718u;
            goto label_2de718;
        }
    }
    ctx->pc = 0x2DE6D0u;
label_2de6d0:
    // 0x2de6d0: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2de6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_2de6d4:
    // 0x2de6d4: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x2de6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_2de6d8:
    // 0x2de6d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2de6d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2de6dc:
    // 0x2de6dc: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2de6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de6e0:
    // 0x2de6e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2de6e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2de6e4:
    // 0x2de6e4: 0x0  nop
    ctx->pc = 0x2de6e4u;
    // NOP
label_2de6e8:
    // 0x2de6e8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_2de6ec:
    if (ctx->pc == 0x2DE6ECu) {
        ctx->pc = 0x2DE6F0u;
        goto label_2de6f0;
    }
    ctx->pc = 0x2DE6E8u;
    {
        const bool branch_taken_0x2de6e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de6e8) {
            ctx->pc = 0x2DE718u;
            goto label_2de718;
        }
    }
    ctx->pc = 0x2DE6F0u;
label_2de6f0:
    // 0x2de6f0: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x2de6f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2de6f4:
    // 0x2de6f4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2de6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_2de6f8:
    // 0x2de6f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2de6f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2de6fc:
    // 0x2de6fc: 0x0  nop
    ctx->pc = 0x2de6fcu;
    // NOP
label_2de700:
    // 0x2de700: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2de700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2de704:
    // 0x2de704: 0x0  nop
    ctx->pc = 0x2de704u;
    // NOP
label_2de708:
    // 0x2de708: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2de70c:
    if (ctx->pc == 0x2DE70Cu) {
        ctx->pc = 0x2DE70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE708u;
        // 0x2de70c: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE710u;
        goto label_2de710;
    }
    ctx->pc = 0x2DE708u;
    {
        const bool branch_taken_0x2de708 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DE70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE708u;
        // 0x2de70c: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de708) {
            ctx->pc = 0x2DE714u;
            goto label_2de714;
        }
    }
    ctx->pc = 0x2DE710u;
label_2de710:
    // 0x2de710: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x2de710u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_2de714:
    // 0x2de714: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x2de714u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_2de718:
    // 0x2de718: 0x4604a034  c.lt.s      $f20, $f4
    ctx->pc = 0x2de718u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2de71c:
    // 0x2de71c: 0x0  nop
    ctx->pc = 0x2de71cu;
    // NOP
label_2de720:
    // 0x2de720: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2de724:
    if (ctx->pc == 0x2DE724u) {
        ctx->pc = 0x2DE724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE720u;
        // 0x2de724: 0x4600a106  mov.s       $f4, $f20 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE728u;
        goto label_2de728;
    }
    ctx->pc = 0x2DE720u;
    {
        const bool branch_taken_0x2de720 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de720) {
            ctx->pc = 0x2DE724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE720u;
            // 0x2de724: 0x4600a106  mov.s       $f4, $f20 (Delay Slot)
            ctx->f[4] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE728u;
            goto label_2de728;
        }
    }
    ctx->pc = 0x2DE728u;
label_2de728:
    // 0x2de728: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x2de728u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2de72c:
    // 0x2de72c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2de72cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2de730:
    // 0x2de730: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2de730u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2de734:
    // 0x2de734: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2de734u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2de738:
    // 0x2de738: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2de738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2de73c:
    // 0x2de73c: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x2de73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_2de740:
    // 0x2de740: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2de740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2de744:
    // 0x2de744: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2de744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2de748:
    // 0x2de748: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2de748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2de74c:
    // 0x2de74c: 0x40f809  jalr        $v0
label_2de750:
    if (ctx->pc == 0x2DE750u) {
        ctx->pc = 0x2DE750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE74Cu;
        // 0x2de750: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE754u;
        goto label_2de754;
    }
    ctx->pc = 0x2DE74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DE754u);
        ctx->pc = 0x2DE750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE74Cu;
        // 0x2de750: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE74Cu, 0x2DE754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DE754u;
label_2de754:
    // 0x2de754: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2de754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2de758:
    // 0x2de758: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2de758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2de75c:
    // 0x2de75c: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x2de75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2de760:
    // 0x2de760: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2de760u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2de764:
    // 0x2de764: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2de764u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2de768:
    // 0x2de768: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2de768u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2de76c:
    // 0x2de76c: 0x46010044  c1          0x10044
    ctx->pc = 0x2de76cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_2de770:
    // 0x2de770: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2de770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_2de774:
    // 0x2de774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2de774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2de778:
    // 0x2de778: 0x0  nop
    ctx->pc = 0x2de778u;
    // NOP
label_2de77c:
    // 0x2de77c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2de77cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2de780:
    // 0x2de780: 0x0  nop
    ctx->pc = 0x2de780u;
    // NOP
label_2de784:
    // 0x2de784: 0x4500003e  bc1f        . + 4 + (0x3E << 2)
label_2de788:
    if (ctx->pc == 0x2DE788u) {
        ctx->pc = 0x2DE788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE784u;
        // 0x2de788: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE78Cu;
        goto label_2de78c;
    }
    ctx->pc = 0x2DE784u;
    {
        const bool branch_taken_0x2de784 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DE788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE784u;
        // 0x2de788: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de784) {
            ctx->pc = 0x2DE880u;
            goto label_2de880;
        }
    }
    ctx->pc = 0x2DE78Cu;
label_2de78c:
    // 0x2de78c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2de78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_2de790:
    // 0x2de790: 0x8c6395a0  lw          $v1, -0x6A60($v1)
    ctx->pc = 0x2de790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940064)));
label_2de794:
    // 0x2de794: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2de794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2de798:
    // 0x2de798: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2de798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2de79c:
    // 0x2de79c: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_2de7a0:
    if (ctx->pc == 0x2DE7A0u) {
        ctx->pc = 0x2DE7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE79Cu;
        // 0x2de7a0: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE7A4u;
        goto label_2de7a4;
    }
    ctx->pc = 0x2DE79Cu;
    {
        const bool branch_taken_0x2de79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de79c) {
            ctx->pc = 0x2DE7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE79Cu;
            // 0x2de7a0: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE884u;
            goto label_2de884;
        }
    }
    ctx->pc = 0x2DE7A4u;
label_2de7a4:
    // 0x2de7a4: 0xae630080  sw          $v1, 0x80($s3)
    ctx->pc = 0x2de7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 3));
label_2de7a8:
    // 0x2de7a8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2de7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2de7ac:
    // 0x2de7ac: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x2de7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
label_2de7b0:
    // 0x2de7b0: 0x24637ee0  addiu       $v1, $v1, 0x7EE0
    ctx->pc = 0x2de7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32480));
label_2de7b4:
    // 0x2de7b4: 0x8c8200b8  lw          $v0, 0xB8($a0)
    ctx->pc = 0x2de7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
label_2de7b8:
    // 0x2de7b8: 0x84510054  lh          $s1, 0x54($v0)
    ctx->pc = 0x2de7b8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 84)));
label_2de7bc:
    // 0x2de7bc: 0x118840  sll         $s1, $s1, 1
    ctx->pc = 0x2de7bcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_2de7c0:
    // 0x2de7c0: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x2de7c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_2de7c4:
    // 0x2de7c4: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2de7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2de7c8:
    // 0x2de7c8: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2de7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2de7cc:
    // 0x2de7cc: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x2de7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2de7d0:
    // 0x2de7d0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2de7d0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2de7d4:
    // 0x2de7d4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2de7d4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2de7d8:
    // 0x2de7d8: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2de7d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2de7dc:
    // 0x2de7dc: 0x46000004  c1          0x4
    ctx->pc = 0x2de7dcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_2de7e0:
    // 0x2de7e0: 0x3c0140d5  lui         $at, 0x40D5
    ctx->pc = 0x2de7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16597 << 16));
label_2de7e4:
    // 0x2de7e4: 0x34215556  ori         $at, $at, 0x5556
    ctx->pc = 0x2de7e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21846);
label_2de7e8:
    // 0x2de7e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2de7e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2de7ec:
    // 0x2de7ec: 0x24120028  addiu       $s2, $zero, 0x28
    ctx->pc = 0x2de7ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2de7f0:
    // 0x2de7f0: 0xc0e3f5e  jal         func_38FD78
label_2de7f4:
    if (ctx->pc == 0x2DE7F4u) {
        ctx->pc = 0x2DE7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7F0u;
        // 0x2de7f4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE7F8u;
        goto label_2de7f8;
    }
    ctx->pc = 0x2DE7F0u;
    SET_GPR_U32(ctx, 31, 0x2DE7F8u);
    ctx->pc = 0x2DE7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE7F0u;
    // 0x2de7f4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x2DE7F0u, 0x2DE7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE7F8u;
label_2de7f8:
    // 0x2de7f8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2de7f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2de7fc:
    // 0x2de7fc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2de7fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2de800:
    // 0x2de800: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x2de800u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
label_2de804:
    // 0x2de804: 0x26109b10  addiu       $s0, $s0, -0x64F0
    ctx->pc = 0x2de804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941456));
label_2de808:
    // 0x2de808: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2de808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2de80c:
    // 0x2de80c: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x2de80cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
label_2de810:
    // 0x2de810: 0xc0c3566  jal         func_30D598
label_2de814:
    if (ctx->pc == 0x2DE814u) {
        ctx->pc = 0x2DE814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE810u;
        // 0x2de814: 0x62900b  movn        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE818u;
        goto label_2de818;
    }
    ctx->pc = 0x2DE810u;
    SET_GPR_U32(ctx, 31, 0x2DE818u);
    ctx->pc = 0x2DE814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE810u;
    // 0x2de814: 0x62900b  movn        $s2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D598u, 0x2DE810u, 0x2DE818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE818u;
label_2de818:
    // 0x2de818: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2de818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2de81c:
    // 0x2de81c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2de81cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2de820:
    // 0x2de820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de824:
    // 0x2de824: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2de824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de828:
    // 0x2de828: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2de828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2de82c:
    // 0x2de82c: 0xc07f66a  jal         func_1FD9A8
label_2de830:
    if (ctx->pc == 0x2DE830u) {
        ctx->pc = 0x2DE830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE82Cu;
        // 0x2de830: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE834u;
        goto label_2de834;
    }
    ctx->pc = 0x2DE82Cu;
    SET_GPR_U32(ctx, 31, 0x2DE834u);
    ctx->pc = 0x2DE830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE82Cu;
    // 0x2de830: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9A8u, 0x2DE82Cu, 0x2DE834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE834u;
label_2de834:
    // 0x2de834: 0x2a52001f  slti        $s2, $s2, 0x1F
    ctx->pc = 0x2de834u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)31) ? 1 : 0);
label_2de838:
    // 0x2de838: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_2de83c:
    if (ctx->pc == 0x2DE83Cu) {
        ctx->pc = 0x2DE83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE838u;
        // 0x2de83c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE840u;
        goto label_2de840;
    }
    ctx->pc = 0x2DE838u;
    {
        const bool branch_taken_0x2de838 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE838u;
        // 0x2de83c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de838) {
            ctx->pc = 0x2DE864u;
            goto label_2de864;
        }
    }
    ctx->pc = 0x2DE840u;
label_2de840:
    // 0x2de840: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2de840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_2de844:
    // 0x2de844: 0x8c46bd50  lw          $a2, -0x42B0($v0)
    ctx->pc = 0x2de844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_2de848:
    // 0x2de848: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x2de848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_2de84c:
    // 0x2de84c: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2de84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2de850:
    // 0x2de850: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2de850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de854:
    // 0x2de854: 0xc046642  jal         func_119908
label_2de858:
    if (ctx->pc == 0x2DE858u) {
        ctx->pc = 0x2DE858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE854u;
        // 0x2de858: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE85Cu;
        goto label_2de85c;
    }
    ctx->pc = 0x2DE854u;
    SET_GPR_U32(ctx, 31, 0x2DE85Cu);
    ctx->pc = 0x2DE858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE854u;
    // 0x2de858: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x2DE854u, 0x2DE85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE85Cu;
label_2de85c:
    // 0x2de85c: 0x10000009  b           . + 4 + (0x9 << 2)
label_2de860:
    if (ctx->pc == 0x2DE860u) {
        ctx->pc = 0x2DE860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE85Cu;
        // 0x2de860: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE864u;
        goto label_2de864;
    }
    ctx->pc = 0x2DE85Cu;
    {
        const bool branch_taken_0x2de85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE85Cu;
        // 0x2de860: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de85c) {
            ctx->pc = 0x2DE884u;
            goto label_2de884;
        }
    }
    ctx->pc = 0x2DE864u;
label_2de864:
    // 0x2de864: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2de864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_2de868:
    // 0x2de868: 0x8c46bd50  lw          $a2, -0x42B0($v0)
    ctx->pc = 0x2de868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_2de86c:
    // 0x2de86c: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x2de86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_2de870:
    // 0x2de870: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2de870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_2de874:
    // 0x2de874: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2de874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de878:
    // 0x2de878: 0xc046642  jal         func_119908
label_2de87c:
    if (ctx->pc == 0x2DE87Cu) {
        ctx->pc = 0x2DE87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE878u;
        // 0x2de87c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE880u;
        goto label_2de880;
    }
    ctx->pc = 0x2DE878u;
    SET_GPR_U32(ctx, 31, 0x2DE880u);
    ctx->pc = 0x2DE87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE878u;
    // 0x2de87c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x2DE878u, 0x2DE880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE880u;
label_2de880:
    // 0x2de880: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x2de880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2de884:
    // 0x2de884: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x2de884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_2de888:
    // 0x2de888: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2de888u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2de88c:
    // 0x2de88c: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x2de88cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_2de890:
    // 0x2de890: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2de890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2de894:
    // 0x2de894: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x2de894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2de898:
    // 0x2de898: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2de898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2de89c:
    // 0x2de89c: 0x3e00008  jr          $ra
label_2de8a0:
    if (ctx->pc == 0x2DE8A0u) {
        ctx->pc = 0x2DE8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE89Cu;
        // 0x2de8a0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE8A4u;
        goto label_2de8a4;
    }
    ctx->pc = 0x2DE89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE89Cu;
        // 0x2de8a0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE8A4u;
label_2de8a4:
    // 0x2de8a4: 0x0  nop
    ctx->pc = 0x2de8a4u;
    // NOP
    ctx->pc = 0x2de8a8u;
}
