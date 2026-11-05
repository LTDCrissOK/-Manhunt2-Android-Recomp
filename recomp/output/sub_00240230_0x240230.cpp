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

// Function: sub_00240230
// Address: 0x240230 - 0x2408d0
void sub_00240230_0x240230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240230_0x240230");
#endif

    switch (ctx->pc) {
        case 0x240230u: goto label_240230;
        case 0x240234u: goto label_240234;
        case 0x240238u: goto label_240238;
        case 0x24023cu: goto label_24023c;
        case 0x240240u: goto label_240240;
        case 0x240244u: goto label_240244;
        case 0x240248u: goto label_240248;
        case 0x24024cu: goto label_24024c;
        case 0x240250u: goto label_240250;
        case 0x240254u: goto label_240254;
        case 0x240258u: goto label_240258;
        case 0x24025cu: goto label_24025c;
        case 0x240260u: goto label_240260;
        case 0x240264u: goto label_240264;
        case 0x240268u: goto label_240268;
        case 0x24026cu: goto label_24026c;
        case 0x240270u: goto label_240270;
        case 0x240274u: goto label_240274;
        case 0x240278u: goto label_240278;
        case 0x24027cu: goto label_24027c;
        case 0x240280u: goto label_240280;
        case 0x240284u: goto label_240284;
        case 0x240288u: goto label_240288;
        case 0x24028cu: goto label_24028c;
        case 0x240290u: goto label_240290;
        case 0x240294u: goto label_240294;
        case 0x240298u: goto label_240298;
        case 0x24029cu: goto label_24029c;
        case 0x2402a0u: goto label_2402a0;
        case 0x2402a4u: goto label_2402a4;
        case 0x2402a8u: goto label_2402a8;
        case 0x2402acu: goto label_2402ac;
        case 0x2402b0u: goto label_2402b0;
        case 0x2402b4u: goto label_2402b4;
        case 0x2402b8u: goto label_2402b8;
        case 0x2402bcu: goto label_2402bc;
        case 0x2402c0u: goto label_2402c0;
        case 0x2402c4u: goto label_2402c4;
        case 0x2402c8u: goto label_2402c8;
        case 0x2402ccu: goto label_2402cc;
        case 0x2402d0u: goto label_2402d0;
        case 0x2402d4u: goto label_2402d4;
        case 0x2402d8u: goto label_2402d8;
        case 0x2402dcu: goto label_2402dc;
        case 0x2402e0u: goto label_2402e0;
        case 0x2402e4u: goto label_2402e4;
        case 0x2402e8u: goto label_2402e8;
        case 0x2402ecu: goto label_2402ec;
        case 0x2402f0u: goto label_2402f0;
        case 0x2402f4u: goto label_2402f4;
        case 0x2402f8u: goto label_2402f8;
        case 0x2402fcu: goto label_2402fc;
        case 0x240300u: goto label_240300;
        case 0x240304u: goto label_240304;
        case 0x240308u: goto label_240308;
        case 0x24030cu: goto label_24030c;
        case 0x240310u: goto label_240310;
        case 0x240314u: goto label_240314;
        case 0x240318u: goto label_240318;
        case 0x24031cu: goto label_24031c;
        case 0x240320u: goto label_240320;
        case 0x240324u: goto label_240324;
        case 0x240328u: goto label_240328;
        case 0x24032cu: goto label_24032c;
        case 0x240330u: goto label_240330;
        case 0x240334u: goto label_240334;
        case 0x240338u: goto label_240338;
        case 0x24033cu: goto label_24033c;
        case 0x240340u: goto label_240340;
        case 0x240344u: goto label_240344;
        case 0x240348u: goto label_240348;
        case 0x24034cu: goto label_24034c;
        case 0x240350u: goto label_240350;
        case 0x240354u: goto label_240354;
        case 0x240358u: goto label_240358;
        case 0x24035cu: goto label_24035c;
        case 0x240360u: goto label_240360;
        case 0x240364u: goto label_240364;
        case 0x240368u: goto label_240368;
        case 0x24036cu: goto label_24036c;
        case 0x240370u: goto label_240370;
        case 0x240374u: goto label_240374;
        case 0x240378u: goto label_240378;
        case 0x24037cu: goto label_24037c;
        case 0x240380u: goto label_240380;
        case 0x240384u: goto label_240384;
        case 0x240388u: goto label_240388;
        case 0x24038cu: goto label_24038c;
        case 0x240390u: goto label_240390;
        case 0x240394u: goto label_240394;
        case 0x240398u: goto label_240398;
        case 0x24039cu: goto label_24039c;
        case 0x2403a0u: goto label_2403a0;
        case 0x2403a4u: goto label_2403a4;
        case 0x2403a8u: goto label_2403a8;
        case 0x2403acu: goto label_2403ac;
        case 0x2403b0u: goto label_2403b0;
        case 0x2403b4u: goto label_2403b4;
        case 0x2403b8u: goto label_2403b8;
        case 0x2403bcu: goto label_2403bc;
        case 0x2403c0u: goto label_2403c0;
        case 0x2403c4u: goto label_2403c4;
        case 0x2403c8u: goto label_2403c8;
        case 0x2403ccu: goto label_2403cc;
        case 0x2403d0u: goto label_2403d0;
        case 0x2403d4u: goto label_2403d4;
        case 0x2403d8u: goto label_2403d8;
        case 0x2403dcu: goto label_2403dc;
        case 0x2403e0u: goto label_2403e0;
        case 0x2403e4u: goto label_2403e4;
        case 0x2403e8u: goto label_2403e8;
        case 0x2403ecu: goto label_2403ec;
        case 0x2403f0u: goto label_2403f0;
        case 0x2403f4u: goto label_2403f4;
        case 0x2403f8u: goto label_2403f8;
        case 0x2403fcu: goto label_2403fc;
        case 0x240400u: goto label_240400;
        case 0x240404u: goto label_240404;
        case 0x240408u: goto label_240408;
        case 0x24040cu: goto label_24040c;
        case 0x240410u: goto label_240410;
        case 0x240414u: goto label_240414;
        case 0x240418u: goto label_240418;
        case 0x24041cu: goto label_24041c;
        case 0x240420u: goto label_240420;
        case 0x240424u: goto label_240424;
        case 0x240428u: goto label_240428;
        case 0x24042cu: goto label_24042c;
        case 0x240430u: goto label_240430;
        case 0x240434u: goto label_240434;
        case 0x240438u: goto label_240438;
        case 0x24043cu: goto label_24043c;
        case 0x240440u: goto label_240440;
        case 0x240444u: goto label_240444;
        case 0x240448u: goto label_240448;
        case 0x24044cu: goto label_24044c;
        case 0x240450u: goto label_240450;
        case 0x240454u: goto label_240454;
        case 0x240458u: goto label_240458;
        case 0x24045cu: goto label_24045c;
        case 0x240460u: goto label_240460;
        case 0x240464u: goto label_240464;
        case 0x240468u: goto label_240468;
        case 0x24046cu: goto label_24046c;
        case 0x240470u: goto label_240470;
        case 0x240474u: goto label_240474;
        case 0x240478u: goto label_240478;
        case 0x24047cu: goto label_24047c;
        case 0x240480u: goto label_240480;
        case 0x240484u: goto label_240484;
        case 0x240488u: goto label_240488;
        case 0x24048cu: goto label_24048c;
        case 0x240490u: goto label_240490;
        case 0x240494u: goto label_240494;
        case 0x240498u: goto label_240498;
        case 0x24049cu: goto label_24049c;
        case 0x2404a0u: goto label_2404a0;
        case 0x2404a4u: goto label_2404a4;
        case 0x2404a8u: goto label_2404a8;
        case 0x2404acu: goto label_2404ac;
        case 0x2404b0u: goto label_2404b0;
        case 0x2404b4u: goto label_2404b4;
        case 0x2404b8u: goto label_2404b8;
        case 0x2404bcu: goto label_2404bc;
        case 0x2404c0u: goto label_2404c0;
        case 0x2404c4u: goto label_2404c4;
        case 0x2404c8u: goto label_2404c8;
        case 0x2404ccu: goto label_2404cc;
        case 0x2404d0u: goto label_2404d0;
        case 0x2404d4u: goto label_2404d4;
        case 0x2404d8u: goto label_2404d8;
        case 0x2404dcu: goto label_2404dc;
        case 0x2404e0u: goto label_2404e0;
        case 0x2404e4u: goto label_2404e4;
        case 0x2404e8u: goto label_2404e8;
        case 0x2404ecu: goto label_2404ec;
        case 0x2404f0u: goto label_2404f0;
        case 0x2404f4u: goto label_2404f4;
        case 0x2404f8u: goto label_2404f8;
        case 0x2404fcu: goto label_2404fc;
        case 0x240500u: goto label_240500;
        case 0x240504u: goto label_240504;
        case 0x240508u: goto label_240508;
        case 0x24050cu: goto label_24050c;
        case 0x240510u: goto label_240510;
        case 0x240514u: goto label_240514;
        case 0x240518u: goto label_240518;
        case 0x24051cu: goto label_24051c;
        case 0x240520u: goto label_240520;
        case 0x240524u: goto label_240524;
        case 0x240528u: goto label_240528;
        case 0x24052cu: goto label_24052c;
        case 0x240530u: goto label_240530;
        case 0x240534u: goto label_240534;
        case 0x240538u: goto label_240538;
        case 0x24053cu: goto label_24053c;
        case 0x240540u: goto label_240540;
        case 0x240544u: goto label_240544;
        case 0x240548u: goto label_240548;
        case 0x24054cu: goto label_24054c;
        case 0x240550u: goto label_240550;
        case 0x240554u: goto label_240554;
        case 0x240558u: goto label_240558;
        case 0x24055cu: goto label_24055c;
        case 0x240560u: goto label_240560;
        case 0x240564u: goto label_240564;
        case 0x240568u: goto label_240568;
        case 0x24056cu: goto label_24056c;
        case 0x240570u: goto label_240570;
        case 0x240574u: goto label_240574;
        case 0x240578u: goto label_240578;
        case 0x24057cu: goto label_24057c;
        case 0x240580u: goto label_240580;
        case 0x240584u: goto label_240584;
        case 0x240588u: goto label_240588;
        case 0x24058cu: goto label_24058c;
        case 0x240590u: goto label_240590;
        case 0x240594u: goto label_240594;
        case 0x240598u: goto label_240598;
        case 0x24059cu: goto label_24059c;
        case 0x2405a0u: goto label_2405a0;
        case 0x2405a4u: goto label_2405a4;
        case 0x2405a8u: goto label_2405a8;
        case 0x2405acu: goto label_2405ac;
        case 0x2405b0u: goto label_2405b0;
        case 0x2405b4u: goto label_2405b4;
        case 0x2405b8u: goto label_2405b8;
        case 0x2405bcu: goto label_2405bc;
        case 0x2405c0u: goto label_2405c0;
        case 0x2405c4u: goto label_2405c4;
        case 0x2405c8u: goto label_2405c8;
        case 0x2405ccu: goto label_2405cc;
        case 0x2405d0u: goto label_2405d0;
        case 0x2405d4u: goto label_2405d4;
        case 0x2405d8u: goto label_2405d8;
        case 0x2405dcu: goto label_2405dc;
        case 0x2405e0u: goto label_2405e0;
        case 0x2405e4u: goto label_2405e4;
        case 0x2405e8u: goto label_2405e8;
        case 0x2405ecu: goto label_2405ec;
        case 0x2405f0u: goto label_2405f0;
        case 0x2405f4u: goto label_2405f4;
        case 0x2405f8u: goto label_2405f8;
        case 0x2405fcu: goto label_2405fc;
        case 0x240600u: goto label_240600;
        case 0x240604u: goto label_240604;
        case 0x240608u: goto label_240608;
        case 0x24060cu: goto label_24060c;
        case 0x240610u: goto label_240610;
        case 0x240614u: goto label_240614;
        case 0x240618u: goto label_240618;
        case 0x24061cu: goto label_24061c;
        case 0x240620u: goto label_240620;
        case 0x240624u: goto label_240624;
        case 0x240628u: goto label_240628;
        case 0x24062cu: goto label_24062c;
        case 0x240630u: goto label_240630;
        case 0x240634u: goto label_240634;
        case 0x240638u: goto label_240638;
        case 0x24063cu: goto label_24063c;
        case 0x240640u: goto label_240640;
        case 0x240644u: goto label_240644;
        case 0x240648u: goto label_240648;
        case 0x24064cu: goto label_24064c;
        case 0x240650u: goto label_240650;
        case 0x240654u: goto label_240654;
        case 0x240658u: goto label_240658;
        case 0x24065cu: goto label_24065c;
        case 0x240660u: goto label_240660;
        case 0x240664u: goto label_240664;
        case 0x240668u: goto label_240668;
        case 0x24066cu: goto label_24066c;
        case 0x240670u: goto label_240670;
        case 0x240674u: goto label_240674;
        case 0x240678u: goto label_240678;
        case 0x24067cu: goto label_24067c;
        case 0x240680u: goto label_240680;
        case 0x240684u: goto label_240684;
        case 0x240688u: goto label_240688;
        case 0x24068cu: goto label_24068c;
        case 0x240690u: goto label_240690;
        case 0x240694u: goto label_240694;
        case 0x240698u: goto label_240698;
        case 0x24069cu: goto label_24069c;
        case 0x2406a0u: goto label_2406a0;
        case 0x2406a4u: goto label_2406a4;
        case 0x2406a8u: goto label_2406a8;
        case 0x2406acu: goto label_2406ac;
        case 0x2406b0u: goto label_2406b0;
        case 0x2406b4u: goto label_2406b4;
        case 0x2406b8u: goto label_2406b8;
        case 0x2406bcu: goto label_2406bc;
        case 0x2406c0u: goto label_2406c0;
        case 0x2406c4u: goto label_2406c4;
        case 0x2406c8u: goto label_2406c8;
        case 0x2406ccu: goto label_2406cc;
        case 0x2406d0u: goto label_2406d0;
        case 0x2406d4u: goto label_2406d4;
        case 0x2406d8u: goto label_2406d8;
        case 0x2406dcu: goto label_2406dc;
        case 0x2406e0u: goto label_2406e0;
        case 0x2406e4u: goto label_2406e4;
        case 0x2406e8u: goto label_2406e8;
        case 0x2406ecu: goto label_2406ec;
        case 0x2406f0u: goto label_2406f0;
        case 0x2406f4u: goto label_2406f4;
        case 0x2406f8u: goto label_2406f8;
        case 0x2406fcu: goto label_2406fc;
        case 0x240700u: goto label_240700;
        case 0x240704u: goto label_240704;
        case 0x240708u: goto label_240708;
        case 0x24070cu: goto label_24070c;
        case 0x240710u: goto label_240710;
        case 0x240714u: goto label_240714;
        case 0x240718u: goto label_240718;
        case 0x24071cu: goto label_24071c;
        case 0x240720u: goto label_240720;
        case 0x240724u: goto label_240724;
        case 0x240728u: goto label_240728;
        case 0x24072cu: goto label_24072c;
        case 0x240730u: goto label_240730;
        case 0x240734u: goto label_240734;
        case 0x240738u: goto label_240738;
        case 0x24073cu: goto label_24073c;
        case 0x240740u: goto label_240740;
        case 0x240744u: goto label_240744;
        case 0x240748u: goto label_240748;
        case 0x24074cu: goto label_24074c;
        case 0x240750u: goto label_240750;
        case 0x240754u: goto label_240754;
        case 0x240758u: goto label_240758;
        case 0x24075cu: goto label_24075c;
        case 0x240760u: goto label_240760;
        case 0x240764u: goto label_240764;
        case 0x240768u: goto label_240768;
        case 0x24076cu: goto label_24076c;
        case 0x240770u: goto label_240770;
        case 0x240774u: goto label_240774;
        case 0x240778u: goto label_240778;
        case 0x24077cu: goto label_24077c;
        case 0x240780u: goto label_240780;
        case 0x240784u: goto label_240784;
        case 0x240788u: goto label_240788;
        case 0x24078cu: goto label_24078c;
        case 0x240790u: goto label_240790;
        case 0x240794u: goto label_240794;
        case 0x240798u: goto label_240798;
        case 0x24079cu: goto label_24079c;
        case 0x2407a0u: goto label_2407a0;
        case 0x2407a4u: goto label_2407a4;
        case 0x2407a8u: goto label_2407a8;
        case 0x2407acu: goto label_2407ac;
        case 0x2407b0u: goto label_2407b0;
        case 0x2407b4u: goto label_2407b4;
        case 0x2407b8u: goto label_2407b8;
        case 0x2407bcu: goto label_2407bc;
        case 0x2407c0u: goto label_2407c0;
        case 0x2407c4u: goto label_2407c4;
        case 0x2407c8u: goto label_2407c8;
        case 0x2407ccu: goto label_2407cc;
        case 0x2407d0u: goto label_2407d0;
        case 0x2407d4u: goto label_2407d4;
        case 0x2407d8u: goto label_2407d8;
        case 0x2407dcu: goto label_2407dc;
        case 0x2407e0u: goto label_2407e0;
        case 0x2407e4u: goto label_2407e4;
        case 0x2407e8u: goto label_2407e8;
        case 0x2407ecu: goto label_2407ec;
        case 0x2407f0u: goto label_2407f0;
        case 0x2407f4u: goto label_2407f4;
        case 0x2407f8u: goto label_2407f8;
        case 0x2407fcu: goto label_2407fc;
        case 0x240800u: goto label_240800;
        case 0x240804u: goto label_240804;
        case 0x240808u: goto label_240808;
        case 0x24080cu: goto label_24080c;
        case 0x240810u: goto label_240810;
        case 0x240814u: goto label_240814;
        case 0x240818u: goto label_240818;
        case 0x24081cu: goto label_24081c;
        case 0x240820u: goto label_240820;
        case 0x240824u: goto label_240824;
        case 0x240828u: goto label_240828;
        case 0x24082cu: goto label_24082c;
        case 0x240830u: goto label_240830;
        case 0x240834u: goto label_240834;
        case 0x240838u: goto label_240838;
        case 0x24083cu: goto label_24083c;
        case 0x240840u: goto label_240840;
        case 0x240844u: goto label_240844;
        case 0x240848u: goto label_240848;
        case 0x24084cu: goto label_24084c;
        case 0x240850u: goto label_240850;
        case 0x240854u: goto label_240854;
        case 0x240858u: goto label_240858;
        case 0x24085cu: goto label_24085c;
        case 0x240860u: goto label_240860;
        case 0x240864u: goto label_240864;
        case 0x240868u: goto label_240868;
        case 0x24086cu: goto label_24086c;
        case 0x240870u: goto label_240870;
        case 0x240874u: goto label_240874;
        case 0x240878u: goto label_240878;
        case 0x24087cu: goto label_24087c;
        case 0x240880u: goto label_240880;
        case 0x240884u: goto label_240884;
        case 0x240888u: goto label_240888;
        case 0x24088cu: goto label_24088c;
        case 0x240890u: goto label_240890;
        case 0x240894u: goto label_240894;
        case 0x240898u: goto label_240898;
        case 0x24089cu: goto label_24089c;
        case 0x2408a0u: goto label_2408a0;
        case 0x2408a4u: goto label_2408a4;
        case 0x2408a8u: goto label_2408a8;
        case 0x2408acu: goto label_2408ac;
        case 0x2408b0u: goto label_2408b0;
        case 0x2408b4u: goto label_2408b4;
        case 0x2408b8u: goto label_2408b8;
        case 0x2408bcu: goto label_2408bc;
        case 0x2408c0u: goto label_2408c0;
        case 0x2408c4u: goto label_2408c4;
        case 0x2408c8u: goto label_2408c8;
        case 0x2408ccu: goto label_2408cc;
        default: break;
    }

    ctx->pc = 0x240230u;

label_240230:
    // 0x240230: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x240230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_240234:
    // 0x240234: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x240234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_240238:
    // 0x240238: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x240238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_24023c:
    // 0x24023c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24023cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240240:
    // 0x240240: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x240240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_240244:
    // 0x240244: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x240244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_240248:
    // 0x240248: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x240248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_24024c:
    // 0x24024c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x24024cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_240250:
    // 0x240250: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x240250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_240254:
    // 0x240254: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x240254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_240258:
    // 0x240258: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x240258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_24025c:
    // 0x24025c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x24025cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_240260:
    // 0x240260: 0xc08fed2  jal         func_23FB48
label_240264:
    if (ctx->pc == 0x240264u) {
        ctx->pc = 0x240264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240260u;
        // 0x240264: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240268u;
        goto label_240268;
    }
    ctx->pc = 0x240260u;
    SET_GPR_U32(ctx, 31, 0x240268u);
    ctx->pc = 0x240264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240260u;
    // 0x240264: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x240260u, 0x240268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240268u;
label_240268:
    // 0x240268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x240268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24026c:
    // 0x24026c: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x24026cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_240270:
    // 0x240270: 0xc08fed2  jal         func_23FB48
label_240274:
    if (ctx->pc == 0x240274u) {
        ctx->pc = 0x240274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240270u;
        // 0x240274: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240278u;
        goto label_240278;
    }
    ctx->pc = 0x240270u;
    SET_GPR_U32(ctx, 31, 0x240278u);
    ctx->pc = 0x240274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240270u;
    // 0x240274: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x240270u, 0x240278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240278u;
label_240278:
    // 0x240278: 0x8e220418  lw          $v0, 0x418($s1)
    ctx->pc = 0x240278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_24027c:
    // 0x24027c: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x24027cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_240280:
    // 0x240280: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_240284:
    if (ctx->pc == 0x240284u) {
        ctx->pc = 0x240284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240280u;
        // 0x240284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240288u;
        goto label_240288;
    }
    ctx->pc = 0x240280u;
    {
        const bool branch_taken_0x240280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240280u;
        // 0x240284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240280) {
            ctx->pc = 0x2402ACu;
            goto label_2402ac;
        }
    }
    ctx->pc = 0x240288u;
label_240288:
    // 0x240288: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x240288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_24028c:
    // 0x24028c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x24028cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_240290:
    // 0x240290: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_240294:
    if (ctx->pc == 0x240294u) {
        ctx->pc = 0x240294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240290u;
        // 0x240294: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240298u;
        goto label_240298;
    }
    ctx->pc = 0x240290u;
    {
        const bool branch_taken_0x240290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240290u;
        // 0x240294: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240290) {
            ctx->pc = 0x2402B0u;
            goto label_2402b0;
        }
    }
    ctx->pc = 0x240298u;
label_240298:
    // 0x240298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x240298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24029c:
    // 0x24029c: 0xc08fed2  jal         func_23FB48
label_2402a0:
    if (ctx->pc == 0x2402A0u) {
        ctx->pc = 0x2402A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24029Cu;
        // 0x2402a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2402A4u;
        goto label_2402a4;
    }
    ctx->pc = 0x24029Cu;
    SET_GPR_U32(ctx, 31, 0x2402A4u);
    ctx->pc = 0x2402A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24029Cu;
    // 0x2402a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x24029Cu, 0x2402A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2402A4u;
label_2402a4:
    // 0x2402a4: 0x10000005  b           . + 4 + (0x5 << 2)
label_2402a8:
    if (ctx->pc == 0x2402A8u) {
        ctx->pc = 0x2402A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402A4u;
        // 0x2402a8: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2402ACu;
        goto label_2402ac;
    }
    ctx->pc = 0x2402A4u;
    {
        const bool branch_taken_0x2402a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2402A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402A4u;
        // 0x2402a8: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2402a4) {
            ctx->pc = 0x2402BCu;
            goto label_2402bc;
        }
    }
    ctx->pc = 0x2402ACu;
label_2402ac:
    // 0x2402ac: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x2402acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_2402b0:
    // 0x2402b0: 0xc08fed2  jal         func_23FB48
label_2402b4:
    if (ctx->pc == 0x2402B4u) {
        ctx->pc = 0x2402B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402B0u;
        // 0x2402b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2402B8u;
        goto label_2402b8;
    }
    ctx->pc = 0x2402B0u;
    SET_GPR_U32(ctx, 31, 0x2402B8u);
    ctx->pc = 0x2402B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2402B0u;
    // 0x2402b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2402B0u, 0x2402B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2402B8u;
label_2402b8:
    // 0x2402b8: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x2402b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_2402bc:
    // 0x2402bc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2402bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2402c0:
    // 0x2402c0: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x2402c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_2402c4:
    // 0x2402c4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2402c8:
    if (ctx->pc == 0x2402C8u) {
        ctx->pc = 0x2402C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402C4u;
        // 0x2402c8: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2402CCu;
        goto label_2402cc;
    }
    ctx->pc = 0x2402C4u;
    {
        const bool branch_taken_0x2402c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2402C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402C4u;
        // 0x2402c8: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2402c4) {
            ctx->pc = 0x2402D4u;
            goto label_2402d4;
        }
    }
    ctx->pc = 0x2402CCu;
label_2402cc:
    // 0x2402cc: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_2402d0:
    if (ctx->pc == 0x2402D0u) {
        ctx->pc = 0x2402D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402CCu;
        // 0x2402d0: 0x8e250334  lw          $a1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2402D4u;
        goto label_2402d4;
    }
    ctx->pc = 0x2402CCu;
    {
        const bool branch_taken_0x2402cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2402cc) {
            ctx->pc = 0x2402D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2402CCu;
            // 0x2402d0: 0x8e250334  lw          $a1, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2402F0u;
            goto label_2402f0;
        }
    }
    ctx->pc = 0x2402D4u;
label_2402d4:
    // 0x2402d4: 0x8c8300a0  lw          $v1, 0xA0($a0)
    ctx->pc = 0x2402d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_2402d8:
    // 0x2402d8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_2402dc:
    if (ctx->pc == 0x2402DCu) {
        ctx->pc = 0x2402DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402D8u;
        // 0x2402dc: 0x8e250334  lw          $a1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2402E0u;
        goto label_2402e0;
    }
    ctx->pc = 0x2402D8u;
    {
        const bool branch_taken_0x2402d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2402d8) {
            ctx->pc = 0x2402DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2402D8u;
            // 0x2402dc: 0x8e250334  lw          $a1, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2402F0u;
            goto label_2402f0;
        }
    }
    ctx->pc = 0x2402E0u;
label_2402e0:
    // 0x2402e0: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x2402e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
label_2402e4:
    // 0x2402e4: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x2402e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
label_2402e8:
    // 0x2402e8: 0xa462002a  sh          $v0, 0x2A($v1)
    ctx->pc = 0x2402e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 2));
label_2402ec:
    // 0x2402ec: 0x8e250334  lw          $a1, 0x334($s1)
    ctx->pc = 0x2402ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2402f0:
    // 0x2402f0: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x2402f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
label_2402f4:
    // 0x2402f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2402f8:
    if (ctx->pc == 0x2402F8u) {
        ctx->pc = 0x2402F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402F4u;
        // 0x2402f8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2402FCu;
        goto label_2402fc;
    }
    ctx->pc = 0x2402F4u;
    {
        const bool branch_taken_0x2402f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2402F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402F4u;
        // 0x2402f8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2402f4) {
            ctx->pc = 0x240310u;
            goto label_240310;
        }
    }
    ctx->pc = 0x2402FCu;
label_2402fc:
    // 0x2402fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2402fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240300:
    // 0x240300: 0x1000000e  b           . + 4 + (0xE << 2)
label_240304:
    if (ctx->pc == 0x240304u) {
        ctx->pc = 0x240304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240300u;
        // 0x240304: 0x3c170040  lui         $s7, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240308u;
        goto label_240308;
    }
    ctx->pc = 0x240300u;
    {
        const bool branch_taken_0x240300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240300u;
        // 0x240304: 0x3c170040  lui         $s7, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240300) {
            ctx->pc = 0x24033Cu;
            goto label_24033c;
        }
    }
    ctx->pc = 0x240308u;
label_240308:
    // 0x240308: 0x1000000c  b           . + 4 + (0xC << 2)
label_24030c:
    if (ctx->pc == 0x24030Cu) {
        ctx->pc = 0x24030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240308u;
        // 0x24030c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240310u;
        goto label_240310;
    }
    ctx->pc = 0x240308u;
    {
        const bool branch_taken_0x240308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240308u;
        // 0x24030c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240308) {
            ctx->pc = 0x24033Cu;
            goto label_24033c;
        }
    }
    ctx->pc = 0x240310u;
label_240310:
    // 0x240310: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x240310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240314:
    // 0x240314: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x240314u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_240318:
    // 0x240318: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x240318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_24031c:
    // 0x24031c: 0x0  nop
    ctx->pc = 0x24031cu;
    // NOP
label_240320:
    // 0x240320: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x240320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_240324:
    // 0x240324: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_240328:
    if (ctx->pc == 0x240328u) {
        ctx->pc = 0x240328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240324u;
        // 0x240328: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24032Cu;
        goto label_24032c;
    }
    ctx->pc = 0x240324u;
    {
        const bool branch_taken_0x240324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240324u;
        // 0x240328: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240324) {
            ctx->pc = 0x240308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240308;
        }
    }
    ctx->pc = 0x24032Cu;
label_24032c:
    // 0x24032c: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x24032cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_240330:
    // 0x240330: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_240334:
    if (ctx->pc == 0x240334u) {
        ctx->pc = 0x240334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240330u;
        // 0x240334: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240338u;
        goto label_240338;
    }
    ctx->pc = 0x240330u;
    {
        const bool branch_taken_0x240330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240330u;
        // 0x240334: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240330) {
            ctx->pc = 0x240320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240320;
        }
    }
    ctx->pc = 0x240338u;
label_240338:
    // 0x240338: 0x8ca301e8  lw          $v1, 0x1E8($a1)
    ctx->pc = 0x240338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
label_24033c:
    // 0x24033c: 0xc464001c  lwc1        $f4, 0x1C($v1)
    ctx->pc = 0x24033cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_240340:
    // 0x240340: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x240340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240344:
    // 0x240344: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x240344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_240348:
    // 0x240348: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x240348u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24034c:
    // 0x24034c: 0x8cc20160  lw          $v0, 0x160($a2)
    ctx->pc = 0x24034cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 352)));
label_240350:
    // 0x240350: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x240350u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240354:
    // 0x240354: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_240358:
    if (ctx->pc == 0x240358u) {
        ctx->pc = 0x240358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240354u;
        // 0x240358: 0x46002041  sub.s       $f1, $f4, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24035Cu;
        goto label_24035c;
    }
    ctx->pc = 0x240354u;
    {
        const bool branch_taken_0x240354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240354u;
        // 0x240358: 0x46002041  sub.s       $f1, $f4, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x240354) {
            ctx->pc = 0x240438u;
            goto label_240438;
        }
    }
    ctx->pc = 0x24035Cu;
label_24035c:
    // 0x24035c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x24035cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_240360:
    // 0x240360: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x240360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_240364:
    // 0x240364: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x240364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_240368:
    // 0x240368: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x240368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24036c:
    // 0x24036c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x24036cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_240370:
    // 0x240370: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x240370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_240374:
    // 0x240374: 0x0  nop
    ctx->pc = 0x240374u;
    // NOP
label_240378:
    // 0x240378: 0x0  nop
    ctx->pc = 0x240378u;
    // NOP
label_24037c:
    // 0x24037c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x24037cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_240380:
    // 0x240380: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x240380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_240384:
    // 0x240384: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x240384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_240388:
    // 0x240388: 0x0  nop
    ctx->pc = 0x240388u;
    // NOP
label_24038c:
    // 0x24038c: 0x0  nop
    ctx->pc = 0x24038cu;
    // NOP
label_240390:
    // 0x240390: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x240390u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
label_240394:
    // 0x240394: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
label_240398:
    if (ctx->pc == 0x240398u) {
        ctx->pc = 0x24039Cu;
        goto label_24039c;
    }
    ctx->pc = 0x240394u;
    {
        const bool branch_taken_0x240394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x240394) {
            ctx->pc = 0x2403B4u;
            goto label_2403b4;
        }
    }
    ctx->pc = 0x24039Cu;
label_24039c:
    // 0x24039c: 0x3c013f02  lui         $at, 0x3F02
    ctx->pc = 0x24039cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16130 << 16));
label_2403a0:
    // 0x2403a0: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x2403a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_2403a4:
    // 0x2403a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2403a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2403a8:
    // 0x2403a8: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x2403a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_2403ac:
    // 0x2403ac: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2403acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_2403b0:
    // 0x2403b0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2403b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2403b4:
    // 0x2403b4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2403b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2403b8:
    // 0x2403b8: 0x0  nop
    ctx->pc = 0x2403b8u;
    // NOP
label_2403bc:
    // 0x2403bc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2403c0:
    if (ctx->pc == 0x2403C0u) {
        ctx->pc = 0x2403C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2403BCu;
        // 0x2403c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2403C4u;
        goto label_2403c4;
    }
    ctx->pc = 0x2403BCu;
    {
        const bool branch_taken_0x2403bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2403C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2403BCu;
        // 0x2403c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2403bc) {
            ctx->pc = 0x2403D4u;
            goto label_2403d4;
        }
    }
    ctx->pc = 0x2403C4u;
label_2403c4:
    // 0x2403c4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2403c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2403c8:
    // 0x2403c8: 0x0  nop
    ctx->pc = 0x2403c8u;
    // NOP
label_2403cc:
    // 0x2403cc: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_2403d0:
    if (ctx->pc == 0x2403D0u) {
        ctx->pc = 0x2403D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2403CCu;
        // 0x2403d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2403D4u;
        goto label_2403d4;
    }
    ctx->pc = 0x2403CCu;
    {
        const bool branch_taken_0x2403cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2403cc) {
            ctx->pc = 0x2403D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2403CCu;
            // 0x2403d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2403F4u;
            goto label_2403f4;
        }
    }
    ctx->pc = 0x2403D4u;
label_2403d4:
    // 0x2403d4: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x2403d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2403d8:
    // 0x2403d8: 0x0  nop
    ctx->pc = 0x2403d8u;
    // NOP
label_2403dc:
    // 0x2403dc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2403e0:
    if (ctx->pc == 0x2403E0u) {
        ctx->pc = 0x2403E4u;
        goto label_2403e4;
    }
    ctx->pc = 0x2403DCu;
    {
        const bool branch_taken_0x2403dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2403dc) {
            ctx->pc = 0x2403F4u;
            goto label_2403f4;
        }
    }
    ctx->pc = 0x2403E4u;
label_2403e4:
    // 0x2403e4: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x2403e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2403e8:
    // 0x2403e8: 0x0  nop
    ctx->pc = 0x2403e8u;
    // NOP
label_2403ec:
    // 0x2403ec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2403f0:
    if (ctx->pc == 0x2403F0u) {
        ctx->pc = 0x2403F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2403ECu;
        // 0x2403f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2403F4u;
        goto label_2403f4;
    }
    ctx->pc = 0x2403ECu;
    {
        const bool branch_taken_0x2403ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2403ec) {
            ctx->pc = 0x2403F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2403ECu;
            // 0x2403f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2403F4u;
            goto label_2403f4;
        }
    }
    ctx->pc = 0x2403F4u;
label_2403f4:
    // 0x2403f4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2403f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2403f8:
    // 0x2403f8: 0x0  nop
    ctx->pc = 0x2403f8u;
    // NOP
label_2403fc:
    // 0x2403fc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_240400:
    if (ctx->pc == 0x240400u) {
        ctx->pc = 0x240400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2403FCu;
        // 0x240400: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240404u;
        goto label_240404;
    }
    ctx->pc = 0x2403FCu;
    {
        const bool branch_taken_0x2403fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x240400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2403FCu;
        // 0x240400: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2403fc) {
            ctx->pc = 0x240414u;
            goto label_240414;
        }
    }
    ctx->pc = 0x240404u;
label_240404:
    // 0x240404: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x240404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_240408:
    // 0x240408: 0x0  nop
    ctx->pc = 0x240408u;
    // NOP
label_24040c:
    // 0x24040c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_240410:
    if (ctx->pc == 0x240410u) {
        ctx->pc = 0x240410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24040Cu;
        // 0x240410: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240414u;
        goto label_240414;
    }
    ctx->pc = 0x24040Cu;
    {
        const bool branch_taken_0x24040c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24040c) {
            ctx->pc = 0x240410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24040Cu;
            // 0x240410: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240414u;
            goto label_240414;
        }
    }
    ctx->pc = 0x240414u;
label_240414:
    // 0x240414: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x240414u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_240418:
    // 0x240418: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x240418u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24041c:
    // 0x24041c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_240420:
    if (ctx->pc == 0x240420u) {
        ctx->pc = 0x240420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24041Cu;
        // 0x240420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240424u;
        goto label_240424;
    }
    ctx->pc = 0x24041Cu;
    {
        const bool branch_taken_0x24041c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x240420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24041Cu;
        // 0x240420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24041c) {
            ctx->pc = 0x240434u;
            goto label_240434;
        }
    }
    ctx->pc = 0x240424u;
label_240424:
    // 0x240424: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x240424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_240428:
    // 0x240428: 0x0  nop
    ctx->pc = 0x240428u;
    // NOP
label_24042c:
    // 0x24042c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_240430:
    if (ctx->pc == 0x240430u) {
        ctx->pc = 0x240430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24042Cu;
        // 0x240430: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240434u;
        goto label_240434;
    }
    ctx->pc = 0x24042Cu;
    {
        const bool branch_taken_0x24042c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24042c) {
            ctx->pc = 0x240430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24042Cu;
            // 0x240430: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240434u;
            goto label_240434;
        }
    }
    ctx->pc = 0x240434u;
label_240434:
    // 0x240434: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x240434u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240438:
    // 0x240438: 0x108000ef  beqz        $a0, . + 4 + (0xEF << 2)
label_24043c:
    if (ctx->pc == 0x24043Cu) {
        ctx->pc = 0x24043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240438u;
        // 0x24043c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240440u;
        goto label_240440;
    }
    ctx->pc = 0x240438u;
    {
        const bool branch_taken_0x240438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240438u;
        // 0x24043c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240438) {
            ctx->pc = 0x2407F8u;
            goto label_2407f8;
        }
    }
    ctx->pc = 0x240440u;
label_240440:
    // 0x240440: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x240440u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_240444:
    // 0x240444: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x240444u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240448:
    // 0x240448: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x240448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_24044c:
    // 0x24044c: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x24044cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_240450:
    // 0x240450: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x240450u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_240454:
    // 0x240454: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_240458:
    if (ctx->pc == 0x240458u) {
        ctx->pc = 0x240458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240454u;
        // 0x240458: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24045Cu;
        goto label_24045c;
    }
    ctx->pc = 0x240454u;
    {
        const bool branch_taken_0x240454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240454u;
        // 0x240458: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240454) {
            ctx->pc = 0x240490u;
            goto label_240490;
        }
    }
    ctx->pc = 0x24045Cu;
label_24045c:
    // 0x24045c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x24045cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_240460:
    // 0x240460: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_240464:
    if (ctx->pc == 0x240464u) {
        ctx->pc = 0x240464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240460u;
        // 0x240464: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240468u;
        goto label_240468;
    }
    ctx->pc = 0x240460u;
    {
        const bool branch_taken_0x240460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x240460) {
            ctx->pc = 0x240464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240460u;
            // 0x240464: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240494u;
            goto label_240494;
        }
    }
    ctx->pc = 0x240468u;
label_240468:
    // 0x240468: 0xc0924a8  jal         func_2492A0
label_24046c:
    if (ctx->pc == 0x24046Cu) {
        ctx->pc = 0x24046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240468u;
        // 0x24046c: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240470u;
        goto label_240470;
    }
    ctx->pc = 0x240468u;
    SET_GPR_U32(ctx, 31, 0x240470u);
    ctx->pc = 0x24046Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240468u;
    // 0x24046c: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x240468u, 0x240470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240470u;
label_240470:
    // 0x240470: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_240474:
    if (ctx->pc == 0x240474u) {
        ctx->pc = 0x240474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240470u;
        // 0x240474: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240478u;
        goto label_240478;
    }
    ctx->pc = 0x240470u;
    {
        const bool branch_taken_0x240470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240470) {
            ctx->pc = 0x240474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240470u;
            // 0x240474: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240494u;
            goto label_240494;
        }
    }
    ctx->pc = 0x240478u;
label_240478:
    // 0x240478: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x240478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_24047c:
    // 0x24047c: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x24047cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_240480:
    // 0x240480: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_240484:
    if (ctx->pc == 0x240484u) {
        ctx->pc = 0x240484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240480u;
        // 0x240484: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240488u;
        goto label_240488;
    }
    ctx->pc = 0x240480u;
    {
        const bool branch_taken_0x240480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240480u;
        // 0x240484: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240480) {
            ctx->pc = 0x240490u;
            goto label_240490;
        }
    }
    ctx->pc = 0x240488u;
label_240488:
    // 0x240488: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_24048c:
    if (ctx->pc == 0x24048Cu) {
        ctx->pc = 0x240490u;
        goto label_240490;
    }
    ctx->pc = 0x240488u;
    {
        const bool branch_taken_0x240488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x240488) {
            ctx->pc = 0x240494u;
            goto label_240494;
        }
    }
    ctx->pc = 0x240490u;
label_240490:
    // 0x240490: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x240490u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240494:
    // 0x240494: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_240498:
    if (ctx->pc == 0x240498u) {
        ctx->pc = 0x24049Cu;
        goto label_24049c;
    }
    ctx->pc = 0x240494u;
    {
        const bool branch_taken_0x240494 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x240494) {
            ctx->pc = 0x2404B4u;
            goto label_2404b4;
        }
    }
    ctx->pc = 0x24049Cu;
label_24049c:
    // 0x24049c: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x24049cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_2404a0:
    // 0x2404a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2404a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2404a4:
    // 0x2404a4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2404a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2404a8:
    // 0x2404a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2404a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2404ac:
    // 0x2404ac: 0x38630045  xori        $v1, $v1, 0x45
    ctx->pc = 0x2404acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)69);
label_2404b0:
    // 0x2404b0: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x2404b0u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2404b4:
    // 0x2404b4: 0x5660001f  bnel        $s3, $zero, . + 4 + (0x1F << 2)
label_2404b8:
    if (ctx->pc == 0x2404B8u) {
        ctx->pc = 0x2404B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404B4u;
        // 0x2404b8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2404BCu;
        goto label_2404bc;
    }
    ctx->pc = 0x2404B4u;
    {
        const bool branch_taken_0x2404b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2404b4) {
            ctx->pc = 0x2404B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2404B4u;
            // 0x2404b8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240534u;
            goto label_240534;
        }
    }
    ctx->pc = 0x2404BCu;
label_2404bc:
    // 0x2404bc: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2404bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_2404c0:
    // 0x2404c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2404c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2404c4:
    // 0x2404c4: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2404c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_2404c8:
    // 0x2404c8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2404c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2404cc:
    // 0x2404cc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_2404d0:
    if (ctx->pc == 0x2404D0u) {
        ctx->pc = 0x2404D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404CCu;
        // 0x2404d0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2404D4u;
        goto label_2404d4;
    }
    ctx->pc = 0x2404CCu;
    {
        const bool branch_taken_0x2404cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2404D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404CCu;
        // 0x2404d0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404cc) {
            ctx->pc = 0x240508u;
            goto label_240508;
        }
    }
    ctx->pc = 0x2404D4u;
label_2404d4:
    // 0x2404d4: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2404d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_2404d8:
    // 0x2404d8: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_2404dc:
    if (ctx->pc == 0x2404DCu) {
        ctx->pc = 0x2404DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404D8u;
        // 0x2404dc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2404E0u;
        goto label_2404e0;
    }
    ctx->pc = 0x2404D8u;
    {
        const bool branch_taken_0x2404d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2404d8) {
            ctx->pc = 0x2404DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2404D8u;
            // 0x2404dc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24050Cu;
            goto label_24050c;
        }
    }
    ctx->pc = 0x2404E0u;
label_2404e0:
    // 0x2404e0: 0xc0924a8  jal         func_2492A0
label_2404e4:
    if (ctx->pc == 0x2404E4u) {
        ctx->pc = 0x2404E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404E0u;
        // 0x2404e4: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2404E8u;
        goto label_2404e8;
    }
    ctx->pc = 0x2404E0u;
    SET_GPR_U32(ctx, 31, 0x2404E8u);
    ctx->pc = 0x2404E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2404E0u;
    // 0x2404e4: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2404E0u, 0x2404E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2404E8u;
label_2404e8:
    // 0x2404e8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2404ec:
    if (ctx->pc == 0x2404ECu) {
        ctx->pc = 0x2404ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404E8u;
        // 0x2404ec: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2404F0u;
        goto label_2404f0;
    }
    ctx->pc = 0x2404E8u;
    {
        const bool branch_taken_0x2404e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2404e8) {
            ctx->pc = 0x2404ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2404E8u;
            // 0x2404ec: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24050Cu;
            goto label_24050c;
        }
    }
    ctx->pc = 0x2404F0u;
label_2404f0:
    // 0x2404f0: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2404f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_2404f4:
    // 0x2404f4: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2404f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_2404f8:
    // 0x2404f8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2404fc:
    if (ctx->pc == 0x2404FCu) {
        ctx->pc = 0x2404FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404F8u;
        // 0x2404fc: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240500u;
        goto label_240500;
    }
    ctx->pc = 0x2404F8u;
    {
        const bool branch_taken_0x2404f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2404FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404F8u;
        // 0x2404fc: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404f8) {
            ctx->pc = 0x240508u;
            goto label_240508;
        }
    }
    ctx->pc = 0x240500u;
label_240500:
    // 0x240500: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_240504:
    if (ctx->pc == 0x240504u) {
        ctx->pc = 0x240508u;
        goto label_240508;
    }
    ctx->pc = 0x240500u;
    {
        const bool branch_taken_0x240500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x240500) {
            ctx->pc = 0x24050Cu;
            goto label_24050c;
        }
    }
    ctx->pc = 0x240508u;
label_240508:
    // 0x240508: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x240508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24050c:
    // 0x24050c: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_240510:
    if (ctx->pc == 0x240510u) {
        ctx->pc = 0x240514u;
        goto label_240514;
    }
    ctx->pc = 0x24050Cu;
    {
        const bool branch_taken_0x24050c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x24050c) {
            ctx->pc = 0x24052Cu;
            goto label_24052c;
        }
    }
    ctx->pc = 0x240514u;
label_240514:
    // 0x240514: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x240514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_240518:
    // 0x240518: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x240518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24051c:
    // 0x24051c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x24051cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_240520:
    // 0x240520: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x240520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_240524:
    // 0x240524: 0x38630049  xori        $v1, $v1, 0x49
    ctx->pc = 0x240524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)73);
label_240528:
    // 0x240528: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x240528u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_24052c:
    // 0x24052c: 0x56600001  bnel        $s3, $zero, . + 4 + (0x1 << 2)
label_240530:
    if (ctx->pc == 0x240530u) {
        ctx->pc = 0x240530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24052Cu;
        // 0x240530: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240534u;
        goto label_240534;
    }
    ctx->pc = 0x24052Cu;
    {
        const bool branch_taken_0x24052c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x24052c) {
            ctx->pc = 0x240530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24052Cu;
            // 0x240530: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240534u;
            goto label_240534;
        }
    }
    ctx->pc = 0x240534u;
label_240534:
    // 0x240534: 0x52a0002f  beql        $s5, $zero, . + 4 + (0x2F << 2)
label_240538:
    if (ctx->pc == 0x240538u) {
        ctx->pc = 0x240538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240534u;
        // 0x240538: 0x8e300334  lw          $s0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24053Cu;
        goto label_24053c;
    }
    ctx->pc = 0x240534u;
    {
        const bool branch_taken_0x240534 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x240534) {
            ctx->pc = 0x240538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240534u;
            // 0x240538: 0x8e300334  lw          $s0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2405F4u;
            goto label_2405f4;
        }
    }
    ctx->pc = 0x24053Cu;
label_24053c:
    // 0x24053c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x24053cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_240540:
    // 0x240540: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x240540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_240544:
    // 0x240544: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_240548:
    if (ctx->pc == 0x240548u) {
        ctx->pc = 0x240548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240544u;
        // 0x240548: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24054Cu;
        goto label_24054c;
    }
    ctx->pc = 0x240544u;
    {
        const bool branch_taken_0x240544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240544u;
        // 0x240548: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240544) {
            ctx->pc = 0x2405CCu;
            goto label_2405cc;
        }
    }
    ctx->pc = 0x24054Cu;
label_24054c:
    // 0x24054c: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x24054cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_240550:
    // 0x240550: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x240550u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240554:
    // 0x240554: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x240554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_240558:
    // 0x240558: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x240558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_24055c:
    // 0x24055c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x24055cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_240560:
    // 0x240560: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_240564:
    if (ctx->pc == 0x240564u) {
        ctx->pc = 0x240564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240560u;
        // 0x240564: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240568u;
        goto label_240568;
    }
    ctx->pc = 0x240560u;
    {
        const bool branch_taken_0x240560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240560u;
        // 0x240564: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240560) {
            ctx->pc = 0x24059Cu;
            goto label_24059c;
        }
    }
    ctx->pc = 0x240568u;
label_240568:
    // 0x240568: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x240568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_24056c:
    // 0x24056c: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_240570:
    if (ctx->pc == 0x240570u) {
        ctx->pc = 0x240570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24056Cu;
        // 0x240570: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240574u;
        goto label_240574;
    }
    ctx->pc = 0x24056Cu;
    {
        const bool branch_taken_0x24056c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24056c) {
            ctx->pc = 0x240570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24056Cu;
            // 0x240570: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2405A0u;
            goto label_2405a0;
        }
    }
    ctx->pc = 0x240574u;
label_240574:
    // 0x240574: 0xc0924a8  jal         func_2492A0
label_240578:
    if (ctx->pc == 0x240578u) {
        ctx->pc = 0x240578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240574u;
        // 0x240578: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24057Cu;
        goto label_24057c;
    }
    ctx->pc = 0x240574u;
    SET_GPR_U32(ctx, 31, 0x24057Cu);
    ctx->pc = 0x240578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240574u;
    // 0x240578: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x240574u, 0x24057Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24057Cu;
label_24057c:
    // 0x24057c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_240580:
    if (ctx->pc == 0x240580u) {
        ctx->pc = 0x240580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24057Cu;
        // 0x240580: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240584u;
        goto label_240584;
    }
    ctx->pc = 0x24057Cu;
    {
        const bool branch_taken_0x24057c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24057c) {
            ctx->pc = 0x240580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24057Cu;
            // 0x240580: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2405A0u;
            goto label_2405a0;
        }
    }
    ctx->pc = 0x240584u;
label_240584:
    // 0x240584: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x240584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_240588:
    // 0x240588: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x240588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_24058c:
    // 0x24058c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_240590:
    if (ctx->pc == 0x240590u) {
        ctx->pc = 0x240590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24058Cu;
        // 0x240590: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240594u;
        goto label_240594;
    }
    ctx->pc = 0x24058Cu;
    {
        const bool branch_taken_0x24058c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24058Cu;
        // 0x240590: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24058c) {
            ctx->pc = 0x24059Cu;
            goto label_24059c;
        }
    }
    ctx->pc = 0x240594u;
label_240594:
    // 0x240594: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_240598:
    if (ctx->pc == 0x240598u) {
        ctx->pc = 0x24059Cu;
        goto label_24059c;
    }
    ctx->pc = 0x240594u;
    {
        const bool branch_taken_0x240594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x240594) {
            ctx->pc = 0x2405A0u;
            goto label_2405a0;
        }
    }
    ctx->pc = 0x24059Cu;
label_24059c:
    // 0x24059c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x24059cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2405a0:
    // 0x2405a0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_2405a4:
    if (ctx->pc == 0x2405A4u) {
        ctx->pc = 0x2405A8u;
        goto label_2405a8;
    }
    ctx->pc = 0x2405A0u;
    {
        const bool branch_taken_0x2405a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2405a0) {
            ctx->pc = 0x2405C0u;
            goto label_2405c0;
        }
    }
    ctx->pc = 0x2405A8u;
label_2405a8:
    // 0x2405a8: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x2405a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_2405ac:
    // 0x2405ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2405acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2405b0:
    // 0x2405b0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2405b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2405b4:
    // 0x2405b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2405b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2405b8:
    // 0x2405b8: 0x38630045  xori        $v1, $v1, 0x45
    ctx->pc = 0x2405b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)69);
label_2405bc:
    // 0x2405bc: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x2405bcu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2405c0:
    // 0x2405c0: 0x5660005c  bnel        $s3, $zero, . + 4 + (0x5C << 2)
label_2405c4:
    if (ctx->pc == 0x2405C4u) {
        ctx->pc = 0x2405C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405C0u;
        // 0x2405c4: 0x8e230418  lw          $v1, 0x418($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2405C8u;
        goto label_2405c8;
    }
    ctx->pc = 0x2405C0u;
    {
        const bool branch_taken_0x2405c0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2405c0) {
            ctx->pc = 0x2405C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2405C0u;
            // 0x2405c4: 0x8e230418  lw          $v1, 0x418($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240734u;
            goto label_240734;
        }
    }
    ctx->pc = 0x2405C8u;
label_2405c8:
    // 0x2405c8: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x2405c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_2405cc:
    // 0x2405cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2405ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2405d0:
    // 0x2405d0: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_2405d4:
    if (ctx->pc == 0x2405D4u) {
        ctx->pc = 0x2405D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405D0u;
        // 0x2405d4: 0x24449b10  addiu       $a0, $v0, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2405D8u;
        goto label_2405d8;
    }
    ctx->pc = 0x2405D0u;
    {
        const bool branch_taken_0x2405d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2405D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405D0u;
        // 0x2405d4: 0x24449b10  addiu       $a0, $v0, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2405d0) {
            ctx->pc = 0x2405E0u;
            goto label_2405e0;
        }
    }
    ctx->pc = 0x2405D8u;
label_2405d8:
    // 0x2405d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2405d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2405dc:
    // 0x2405dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2405dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2405e0:
    // 0x2405e0: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x2405e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2405e4:
    // 0x2405e4: 0xc07f4c2  jal         func_1FD308
label_2405e8:
    if (ctx->pc == 0x2405E8u) {
        ctx->pc = 0x2405E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405E4u;
        // 0x2405e8: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2405ECu;
        goto label_2405ec;
    }
    ctx->pc = 0x2405E4u;
    SET_GPR_U32(ctx, 31, 0x2405ECu);
    ctx->pc = 0x2405E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2405E4u;
    // 0x2405e8: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x2405E4u, 0x2405ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2405ECu;
label_2405ec:
    // 0x2405ec: 0x10000051  b           . + 4 + (0x51 << 2)
label_2405f0:
    if (ctx->pc == 0x2405F0u) {
        ctx->pc = 0x2405F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405ECu;
        // 0x2405f0: 0x8e230418  lw          $v1, 0x418($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2405F4u;
        goto label_2405f4;
    }
    ctx->pc = 0x2405ECu;
    {
        const bool branch_taken_0x2405ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2405F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405ECu;
        // 0x2405f0: 0x8e230418  lw          $v1, 0x418($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2405ec) {
            ctx->pc = 0x240734u;
            goto label_240734;
        }
    }
    ctx->pc = 0x2405F4u;
label_2405f4:
    // 0x2405f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2405f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2405f8:
    // 0x2405f8: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2405f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_2405fc:
    // 0x2405fc: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2405fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_240600:
    // 0x240600: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x240600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_240604:
    // 0x240604: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_240608:
    if (ctx->pc == 0x240608u) {
        ctx->pc = 0x240608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240604u;
        // 0x240608: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24060Cu;
        goto label_24060c;
    }
    ctx->pc = 0x240604u;
    {
        const bool branch_taken_0x240604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240604u;
        // 0x240608: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240604) {
            ctx->pc = 0x240640u;
            goto label_240640;
        }
    }
    ctx->pc = 0x24060Cu;
label_24060c:
    // 0x24060c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x24060cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_240610:
    // 0x240610: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_240614:
    if (ctx->pc == 0x240614u) {
        ctx->pc = 0x240614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240610u;
        // 0x240614: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240618u;
        goto label_240618;
    }
    ctx->pc = 0x240610u;
    {
        const bool branch_taken_0x240610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x240610) {
            ctx->pc = 0x240614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240610u;
            // 0x240614: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240644u;
            goto label_240644;
        }
    }
    ctx->pc = 0x240618u;
label_240618:
    // 0x240618: 0xc0924a8  jal         func_2492A0
label_24061c:
    if (ctx->pc == 0x24061Cu) {
        ctx->pc = 0x24061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240618u;
        // 0x24061c: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240620u;
        goto label_240620;
    }
    ctx->pc = 0x240618u;
    SET_GPR_U32(ctx, 31, 0x240620u);
    ctx->pc = 0x24061Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240618u;
    // 0x24061c: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x240618u, 0x240620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240620u;
label_240620:
    // 0x240620: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_240624:
    if (ctx->pc == 0x240624u) {
        ctx->pc = 0x240624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240620u;
        // 0x240624: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240628u;
        goto label_240628;
    }
    ctx->pc = 0x240620u;
    {
        const bool branch_taken_0x240620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240620) {
            ctx->pc = 0x240624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240620u;
            // 0x240624: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240644u;
            goto label_240644;
        }
    }
    ctx->pc = 0x240628u;
label_240628:
    // 0x240628: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x240628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_24062c:
    // 0x24062c: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x24062cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_240630:
    // 0x240630: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_240634:
    if (ctx->pc == 0x240634u) {
        ctx->pc = 0x240634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240630u;
        // 0x240634: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240638u;
        goto label_240638;
    }
    ctx->pc = 0x240630u;
    {
        const bool branch_taken_0x240630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240630u;
        // 0x240634: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240630) {
            ctx->pc = 0x240640u;
            goto label_240640;
        }
    }
    ctx->pc = 0x240638u;
label_240638:
    // 0x240638: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_24063c:
    if (ctx->pc == 0x24063Cu) {
        ctx->pc = 0x240640u;
        goto label_240640;
    }
    ctx->pc = 0x240638u;
    {
        const bool branch_taken_0x240638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x240638) {
            ctx->pc = 0x240644u;
            goto label_240644;
        }
    }
    ctx->pc = 0x240640u;
label_240640:
    // 0x240640: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x240640u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240644:
    // 0x240644: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_240648:
    if (ctx->pc == 0x240648u) {
        ctx->pc = 0x24064Cu;
        goto label_24064c;
    }
    ctx->pc = 0x240644u;
    {
        const bool branch_taken_0x240644 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x240644) {
            ctx->pc = 0x240664u;
            goto label_240664;
        }
    }
    ctx->pc = 0x24064Cu;
label_24064c:
    // 0x24064c: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x24064cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_240650:
    // 0x240650: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x240650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_240654:
    // 0x240654: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x240654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_240658:
    // 0x240658: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x240658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24065c:
    // 0x24065c: 0x3863003d  xori        $v1, $v1, 0x3D
    ctx->pc = 0x24065cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)61);
label_240660:
    // 0x240660: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x240660u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_240664:
    // 0x240664: 0x16600020  bnez        $s3, . + 4 + (0x20 << 2)
label_240668:
    if (ctx->pc == 0x240668u) {
        ctx->pc = 0x240668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240664u;
        // 0x240668: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24066Cu;
        goto label_24066c;
    }
    ctx->pc = 0x240664u;
    {
        const bool branch_taken_0x240664 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x240668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240664u;
        // 0x240668: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240664) {
            ctx->pc = 0x2406E8u;
            goto label_2406e8;
        }
    }
    ctx->pc = 0x24066Cu;
label_24066c:
    // 0x24066c: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x24066cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_240670:
    // 0x240670: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x240670u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240674:
    // 0x240674: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x240674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_240678:
    // 0x240678: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x240678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_24067c:
    // 0x24067c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x24067cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_240680:
    // 0x240680: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_240684:
    if (ctx->pc == 0x240684u) {
        ctx->pc = 0x240684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240680u;
        // 0x240684: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240688u;
        goto label_240688;
    }
    ctx->pc = 0x240680u;
    {
        const bool branch_taken_0x240680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240680u;
        // 0x240684: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240680) {
            ctx->pc = 0x2406BCu;
            goto label_2406bc;
        }
    }
    ctx->pc = 0x240688u;
label_240688:
    // 0x240688: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x240688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_24068c:
    // 0x24068c: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_240690:
    if (ctx->pc == 0x240690u) {
        ctx->pc = 0x240690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24068Cu;
        // 0x240690: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240694u;
        goto label_240694;
    }
    ctx->pc = 0x24068Cu;
    {
        const bool branch_taken_0x24068c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24068c) {
            ctx->pc = 0x240690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24068Cu;
            // 0x240690: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2406C0u;
            goto label_2406c0;
        }
    }
    ctx->pc = 0x240694u;
label_240694:
    // 0x240694: 0xc0924a8  jal         func_2492A0
label_240698:
    if (ctx->pc == 0x240698u) {
        ctx->pc = 0x240698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240694u;
        // 0x240698: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24069Cu;
        goto label_24069c;
    }
    ctx->pc = 0x240694u;
    SET_GPR_U32(ctx, 31, 0x24069Cu);
    ctx->pc = 0x240698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240694u;
    // 0x240698: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x240694u, 0x24069Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24069Cu;
label_24069c:
    // 0x24069c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2406a0:
    if (ctx->pc == 0x2406A0u) {
        ctx->pc = 0x2406A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24069Cu;
        // 0x2406a0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2406A4u;
        goto label_2406a4;
    }
    ctx->pc = 0x24069Cu;
    {
        const bool branch_taken_0x24069c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24069c) {
            ctx->pc = 0x2406A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24069Cu;
            // 0x2406a0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2406C0u;
            goto label_2406c0;
        }
    }
    ctx->pc = 0x2406A4u;
label_2406a4:
    // 0x2406a4: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2406a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_2406a8:
    // 0x2406a8: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2406a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_2406ac:
    // 0x2406ac: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2406b0:
    if (ctx->pc == 0x2406B0u) {
        ctx->pc = 0x2406B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406ACu;
        // 0x2406b0: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2406B4u;
        goto label_2406b4;
    }
    ctx->pc = 0x2406ACu;
    {
        const bool branch_taken_0x2406ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2406B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406ACu;
        // 0x2406b0: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2406ac) {
            ctx->pc = 0x2406BCu;
            goto label_2406bc;
        }
    }
    ctx->pc = 0x2406B4u;
label_2406b4:
    // 0x2406b4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2406b8:
    if (ctx->pc == 0x2406B8u) {
        ctx->pc = 0x2406BCu;
        goto label_2406bc;
    }
    ctx->pc = 0x2406B4u;
    {
        const bool branch_taken_0x2406b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2406b4) {
            ctx->pc = 0x2406C0u;
            goto label_2406c0;
        }
    }
    ctx->pc = 0x2406BCu;
label_2406bc:
    // 0x2406bc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2406bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2406c0:
    // 0x2406c0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_2406c4:
    if (ctx->pc == 0x2406C4u) {
        ctx->pc = 0x2406C8u;
        goto label_2406c8;
    }
    ctx->pc = 0x2406C0u;
    {
        const bool branch_taken_0x2406c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2406c0) {
            ctx->pc = 0x2406E0u;
            goto label_2406e0;
        }
    }
    ctx->pc = 0x2406C8u;
label_2406c8:
    // 0x2406c8: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x2406c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_2406cc:
    // 0x2406cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2406ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2406d0:
    // 0x2406d0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2406d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2406d4:
    // 0x2406d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2406d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2406d8:
    // 0x2406d8: 0x38630041  xori        $v1, $v1, 0x41
    ctx->pc = 0x2406d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65);
label_2406dc:
    // 0x2406dc: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x2406dcu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2406e0:
    // 0x2406e0: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
label_2406e4:
    if (ctx->pc == 0x2406E4u) {
        ctx->pc = 0x2406E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406E0u;
        // 0x2406e4: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2406E8u;
        goto label_2406e8;
    }
    ctx->pc = 0x2406E0u;
    {
        const bool branch_taken_0x2406e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2406E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406E0u;
        // 0x2406e4: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2406e0) {
            ctx->pc = 0x240710u;
            goto label_240710;
        }
    }
    ctx->pc = 0x2406E8u;
label_2406e8:
    // 0x2406e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2406e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2406ec:
    // 0x2406ec: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_2406f0:
    if (ctx->pc == 0x2406F0u) {
        ctx->pc = 0x2406F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406ECu;
        // 0x2406f0: 0x24449b10  addiu       $a0, $v0, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2406F4u;
        goto label_2406f4;
    }
    ctx->pc = 0x2406ECu;
    {
        const bool branch_taken_0x2406ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2406F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406ECu;
        // 0x2406f0: 0x24449b10  addiu       $a0, $v0, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2406ec) {
            ctx->pc = 0x2406FCu;
            goto label_2406fc;
        }
    }
    ctx->pc = 0x2406F4u;
label_2406f4:
    // 0x2406f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2406f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2406f8:
    // 0x2406f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2406f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2406fc:
    // 0x2406fc: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x2406fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_240700:
    // 0x240700: 0xc07f4c2  jal         func_1FD308
label_240704:
    if (ctx->pc == 0x240704u) {
        ctx->pc = 0x240704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240700u;
        // 0x240704: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240708u;
        goto label_240708;
    }
    ctx->pc = 0x240700u;
    SET_GPR_U32(ctx, 31, 0x240708u);
    ctx->pc = 0x240704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240700u;
    // 0x240704: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x240700u, 0x240708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240708u;
label_240708:
    // 0x240708: 0x1000000a  b           . + 4 + (0xA << 2)
label_24070c:
    if (ctx->pc == 0x24070Cu) {
        ctx->pc = 0x24070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240708u;
        // 0x24070c: 0x8e230418  lw          $v1, 0x418($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240710u;
        goto label_240710;
    }
    ctx->pc = 0x240708u;
    {
        const bool branch_taken_0x240708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240708u;
        // 0x24070c: 0x8e230418  lw          $v1, 0x418($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240708) {
            ctx->pc = 0x240734u;
            goto label_240734;
        }
    }
    ctx->pc = 0x240710u;
label_240710:
    // 0x240710: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x240710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_240714:
    // 0x240714: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_240718:
    if (ctx->pc == 0x240718u) {
        ctx->pc = 0x240718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240714u;
        // 0x240718: 0x24449b10  addiu       $a0, $v0, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24071Cu;
        goto label_24071c;
    }
    ctx->pc = 0x240714u;
    {
        const bool branch_taken_0x240714 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x240718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240714u;
        // 0x240718: 0x24449b10  addiu       $a0, $v0, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240714) {
            ctx->pc = 0x240724u;
            goto label_240724;
        }
    }
    ctx->pc = 0x24071Cu;
label_24071c:
    // 0x24071c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24071cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_240720:
    // 0x240720: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x240720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_240724:
    // 0x240724: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x240724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_240728:
    // 0x240728: 0xc07f4c2  jal         func_1FD308
label_24072c:
    if (ctx->pc == 0x24072Cu) {
        ctx->pc = 0x24072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240728u;
        // 0x24072c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240730u;
        goto label_240730;
    }
    ctx->pc = 0x240728u;
    SET_GPR_U32(ctx, 31, 0x240730u);
    ctx->pc = 0x24072Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240728u;
    // 0x24072c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x240728u, 0x240730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240730u;
label_240730:
    // 0x240730: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x240730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_240734:
    // 0x240734: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x240734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_240738:
    // 0x240738: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_24073c:
    if (ctx->pc == 0x24073Cu) {
        ctx->pc = 0x24073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240738u;
        // 0x24073c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240740u;
        goto label_240740;
    }
    ctx->pc = 0x240738u;
    {
        const bool branch_taken_0x240738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x240738) {
            ctx->pc = 0x24073Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240738u;
            // 0x24073c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24075Cu;
            goto label_24075c;
        }
    }
    ctx->pc = 0x240740u;
label_240740:
    // 0x240740: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x240740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_240744:
    // 0x240744: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x240744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_240748:
    // 0x240748: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x240748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_24074c:
    // 0x24074c: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x24074cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
label_240750:
    // 0x240750: 0xc07f4c2  jal         func_1FD308
label_240754:
    if (ctx->pc == 0x240754u) {
        ctx->pc = 0x240754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240750u;
        // 0x240754: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240758u;
        goto label_240758;
    }
    ctx->pc = 0x240750u;
    SET_GPR_U32(ctx, 31, 0x240758u);
    ctx->pc = 0x240754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240750u;
    // 0x240754: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x240750u, 0x240758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240758u;
label_240758:
    // 0x240758: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x240758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24075c:
    // 0x24075c: 0xc091c16  jal         func_247058
label_240760:
    if (ctx->pc == 0x240760u) {
        ctx->pc = 0x240760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24075Cu;
        // 0x240760: 0x3410ffff  ori         $s0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x240764u;
        goto label_240764;
    }
    ctx->pc = 0x24075Cu;
    SET_GPR_U32(ctx, 31, 0x240764u);
    ctx->pc = 0x240760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24075Cu;
    // 0x240760: 0x3410ffff  ori         $s0, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x247058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247058u, 0x24075Cu, 0x240764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240764u;
label_240764:
    // 0x240764: 0xc08952c  jal         func_2254B0
label_240768:
    if (ctx->pc == 0x240768u) {
        ctx->pc = 0x240768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240764u;
        // 0x240768: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24076Cu;
        goto label_24076c;
    }
    ctx->pc = 0x240764u;
    SET_GPR_U32(ctx, 31, 0x24076Cu);
    ctx->pc = 0x240768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240764u;
    // 0x240768: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2254B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2254B0u, 0x240764u, 0x24076Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24076Cu;
label_24076c:
    // 0x24076c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_240770:
    if (ctx->pc == 0x240770u) {
        ctx->pc = 0x240770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24076Cu;
        // 0x240770: 0x3c04005a  lui         $a0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240774u;
        goto label_240774;
    }
    ctx->pc = 0x24076Cu;
    {
        const bool branch_taken_0x24076c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24076Cu;
        // 0x240770: 0x3c04005a  lui         $a0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24076c) {
            ctx->pc = 0x240790u;
            goto label_240790;
        }
    }
    ctx->pc = 0x240774u;
label_240774:
    // 0x240774: 0x8e25025c  lw          $a1, 0x25C($s1)
    ctx->pc = 0x240774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
label_240778:
    // 0x240778: 0x8e260258  lw          $a2, 0x258($s1)
    ctx->pc = 0x240778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_24077c:
    // 0x24077c: 0x24847ee0  addiu       $a0, $a0, 0x7EE0
    ctx->pc = 0x24077cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32480));
label_240780:
    // 0x240780: 0xc0c362e  jal         func_30D8B8
label_240784:
    if (ctx->pc == 0x240784u) {
        ctx->pc = 0x240784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240780u;
        // 0x240784: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240788u;
        goto label_240788;
    }
    ctx->pc = 0x240780u;
    SET_GPR_U32(ctx, 31, 0x240788u);
    ctx->pc = 0x240784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240780u;
    // 0x240784: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D8B8u, 0x240780u, 0x240788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240788u;
label_240788:
    // 0x240788: 0x10000004  b           . + 4 + (0x4 << 2)
label_24078c:
    if (ctx->pc == 0x24078Cu) {
        ctx->pc = 0x24078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240788u;
        // 0x24078c: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x240790u;
        goto label_240790;
    }
    ctx->pc = 0x240788u;
    {
        const bool branch_taken_0x240788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240788u;
        // 0x24078c: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x240788) {
            ctx->pc = 0x24079Cu;
            goto label_24079c;
        }
    }
    ctx->pc = 0x240790u;
label_240790:
    // 0x240790: 0x92220280  lbu         $v0, 0x280($s1)
    ctx->pc = 0x240790u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 640)));
label_240794:
    // 0x240794: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_240798:
    if (ctx->pc == 0x240798u) {
        ctx->pc = 0x240798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240794u;
        // 0x240798: 0x9630027c  lhu         $s0, 0x27C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 636)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24079Cu;
        goto label_24079c;
    }
    ctx->pc = 0x240794u;
    {
        const bool branch_taken_0x240794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240794) {
            ctx->pc = 0x240798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240794u;
            // 0x240798: 0x9630027c  lhu         $s0, 0x27C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24079Cu;
            goto label_24079c;
        }
    }
    ctx->pc = 0x24079Cu;
label_24079c:
    // 0x24079c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x24079cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2407a0:
    // 0x2407a0: 0x16020016  bne         $s0, $v0, . + 4 + (0x16 << 2)
label_2407a4:
    if (ctx->pc == 0x2407A4u) {
        ctx->pc = 0x2407A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407A0u;
        // 0x2407a4: 0xc6e196c8  lwc1        $f1, -0x6938($s7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294940360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2407A8u;
        goto label_2407a8;
    }
    ctx->pc = 0x2407A0u;
    {
        const bool branch_taken_0x2407a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2407A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407A0u;
        // 0x2407a4: 0xc6e196c8  lwc1        $f1, -0x6938($s7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294940360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2407a0) {
            ctx->pc = 0x2407FCu;
            goto label_2407fc;
        }
    }
    ctx->pc = 0x2407A8u;
label_2407a8:
    // 0x2407a8: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2407a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_2407ac:
    // 0x2407ac: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2407acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_2407b0:
    // 0x2407b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2407b4:
    if (ctx->pc == 0x2407B4u) {
        ctx->pc = 0x2407B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407B0u;
        // 0x2407b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2407B8u;
        goto label_2407b8;
    }
    ctx->pc = 0x2407B0u;
    {
        const bool branch_taken_0x2407b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2407B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407B0u;
        // 0x2407b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2407b0) {
            ctx->pc = 0x2407D0u;
            goto label_2407d0;
        }
    }
    ctx->pc = 0x2407B8u;
label_2407b8:
    // 0x2407b8: 0x8e23041c  lw          $v1, 0x41C($s1)
    ctx->pc = 0x2407b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1052)));
label_2407bc:
    // 0x2407bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2407bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2407c0:
    // 0x2407c0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_2407c4:
    if (ctx->pc == 0x2407C4u) {
        ctx->pc = 0x2407C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407C0u;
        // 0x2407c4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2407C8u;
        goto label_2407c8;
    }
    ctx->pc = 0x2407C0u;
    {
        const bool branch_taken_0x2407c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2407C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407C0u;
        // 0x2407c4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2407c0) {
            ctx->pc = 0x2407E8u;
            goto label_2407e8;
        }
    }
    ctx->pc = 0x2407C8u;
label_2407c8:
    // 0x2407c8: 0x10000009  b           . + 4 + (0x9 << 2)
label_2407cc:
    if (ctx->pc == 0x2407CCu) {
        ctx->pc = 0x2407D0u;
        goto label_2407d0;
    }
    ctx->pc = 0x2407C8u;
    {
        const bool branch_taken_0x2407c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2407c8) {
            ctx->pc = 0x2407F0u;
            goto label_2407f0;
        }
    }
    ctx->pc = 0x2407D0u;
label_2407d0:
    // 0x2407d0: 0x8e23041c  lw          $v1, 0x41C($s1)
    ctx->pc = 0x2407d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1052)));
label_2407d4:
    // 0x2407d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2407d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2407d8:
    // 0x2407d8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2407dc:
    if (ctx->pc == 0x2407DCu) {
        ctx->pc = 0x2407DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407D8u;
        // 0x2407dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2407E0u;
        goto label_2407e0;
    }
    ctx->pc = 0x2407D8u;
    {
        const bool branch_taken_0x2407d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2407DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407D8u;
        // 0x2407dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2407d8) {
            ctx->pc = 0x2407E8u;
            goto label_2407e8;
        }
    }
    ctx->pc = 0x2407E0u;
label_2407e0:
    // 0x2407e0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_2407e4:
    if (ctx->pc == 0x2407E4u) {
        ctx->pc = 0x2407E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407E0u;
        // 0x2407e4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2407E8u;
        goto label_2407e8;
    }
    ctx->pc = 0x2407E0u;
    {
        const bool branch_taken_0x2407e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2407E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407E0u;
        // 0x2407e4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2407e0) {
            ctx->pc = 0x2407F0u;
            goto label_2407f0;
        }
    }
    ctx->pc = 0x2407E8u;
label_2407e8:
    // 0x2407e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2407e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2407ec:
    // 0x2407ec: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2407ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2407f0:
    // 0x2407f0: 0xc08fa62  jal         func_23E988
label_2407f4:
    if (ctx->pc == 0x2407F4u) {
        ctx->pc = 0x2407F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407F0u;
        // 0x2407f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2407F8u;
        goto label_2407f8;
    }
    ctx->pc = 0x2407F0u;
    SET_GPR_U32(ctx, 31, 0x2407F8u);
    ctx->pc = 0x2407F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2407F0u;
    // 0x2407f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E988u, 0x2407F0u, 0x2407F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2407F8u;
label_2407f8:
    // 0x2407f8: 0xc6e196c8  lwc1        $f1, -0x6938($s7)
    ctx->pc = 0x2407f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294940360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2407fc:
    // 0x2407fc: 0xc62004f0  lwc1        $f0, 0x4F0($s1)
    ctx->pc = 0x2407fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_240800:
    // 0x240800: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x240800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_240804:
    // 0x240804: 0x0  nop
    ctx->pc = 0x240804u;
    // NOP
label_240808:
    // 0x240808: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_24080c:
    if (ctx->pc == 0x24080Cu) {
        ctx->pc = 0x24080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240808u;
        // 0x24080c: 0xe62104f0  swc1        $f1, 0x4F0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1264), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x240810u;
        goto label_240810;
    }
    ctx->pc = 0x240808u;
    {
        const bool branch_taken_0x240808 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x240808) {
            ctx->pc = 0x24080Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240808u;
            // 0x24080c: 0xe62104f0  swc1        $f1, 0x4F0($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1264), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x240810u;
            goto label_240810;
        }
    }
    ctx->pc = 0x240810u;
label_240810:
    // 0x240810: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x240810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_240814:
    // 0x240814: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x240814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_240818:
    // 0x240818: 0x40f809  jalr        $v0
label_24081c:
    if (ctx->pc == 0x24081Cu) {
        ctx->pc = 0x24081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240818u;
        // 0x24081c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240820u;
        goto label_240820;
    }
    ctx->pc = 0x240818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x240820u);
        ctx->pc = 0x24081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240818u;
        // 0x24081c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240818u, 0x240820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240820u;
label_240820:
    // 0x240820: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x240820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_240824:
    // 0x240824: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x240824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_240828:
    // 0x240828: 0x2462fff4  addiu       $v0, $v1, -0xC
    ctx->pc = 0x240828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_24082c:
    // 0x24082c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x24082cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_240830:
    // 0x240830: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_240834:
    if (ctx->pc == 0x240834u) {
        ctx->pc = 0x240834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240830u;
        // 0x240834: 0x8e260334  lw          $a2, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240838u;
        goto label_240838;
    }
    ctx->pc = 0x240830u;
    {
        const bool branch_taken_0x240830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240830) {
            ctx->pc = 0x240834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240830u;
            // 0x240834: 0x8e260334  lw          $a2, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24084Cu;
            goto label_24084c;
        }
    }
    ctx->pc = 0x240838u;
label_240838:
    // 0x240838: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x240838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_24083c:
    // 0x24083c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x24083cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_240840:
    // 0x240840: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_240844:
    if (ctx->pc == 0x240844u) {
        ctx->pc = 0x240844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240840u;
        // 0x240844: 0x8e2200c4  lw          $v0, 0xC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240848u;
        goto label_240848;
    }
    ctx->pc = 0x240840u;
    {
        const bool branch_taken_0x240840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240840) {
            ctx->pc = 0x240844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240840u;
            // 0x240844: 0x8e2200c4  lw          $v0, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240888u;
            goto label_240888;
        }
    }
    ctx->pc = 0x240848u;
label_240848:
    // 0x240848: 0x8e260334  lw          $a2, 0x334($s1)
    ctx->pc = 0x240848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_24084c:
    // 0x24084c: 0x8cc201e4  lw          $v0, 0x1E4($a2)
    ctx->pc = 0x24084cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_240850:
    // 0x240850: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_240854:
    if (ctx->pc == 0x240854u) {
        ctx->pc = 0x240854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240850u;
        // 0x240854: 0x8c8400a0  lw          $a0, 0xA0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240858u;
        goto label_240858;
    }
    ctx->pc = 0x240850u;
    {
        const bool branch_taken_0x240850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240850u;
        // 0x240854: 0x8c8400a0  lw          $a0, 0xA0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240850) {
            ctx->pc = 0x24087Cu;
            goto label_24087c;
        }
    }
    ctx->pc = 0x240858u;
label_240858:
    // 0x240858: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x240858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24085c:
    // 0x24085c: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x24085cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_240860:
    // 0x240860: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x240860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_240864:
    // 0x240864: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_240868:
    if (ctx->pc == 0x240868u) {
        ctx->pc = 0x240868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240864u;
        // 0x240868: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24086Cu;
        goto label_24086c;
    }
    ctx->pc = 0x240864u;
    {
        const bool branch_taken_0x240864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240864u;
        // 0x240868: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240864) {
            ctx->pc = 0x24087Cu;
            goto label_24087c;
        }
    }
    ctx->pc = 0x24086Cu;
label_24086c:
    // 0x24086c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x24086cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_240870:
    // 0x240870: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_240874:
    if (ctx->pc == 0x240874u) {
        ctx->pc = 0x240874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240870u;
        // 0x240874: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240878u;
        goto label_240878;
    }
    ctx->pc = 0x240870u;
    {
        const bool branch_taken_0x240870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240870u;
        // 0x240874: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240870) {
            ctx->pc = 0x240860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240860;
        }
    }
    ctx->pc = 0x240878u;
label_240878:
    // 0x240878: 0x8cc201e8  lw          $v0, 0x1E8($a2)
    ctx->pc = 0x240878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_24087c:
    // 0x24087c: 0xc073e86  jal         func_1CFA18
label_240880:
    if (ctx->pc == 0x240880u) {
        ctx->pc = 0x240880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24087Cu;
        // 0x240880: 0xc44c001c  lwc1        $f12, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x240884u;
        goto label_240884;
    }
    ctx->pc = 0x24087Cu;
    SET_GPR_U32(ctx, 31, 0x240884u);
    ctx->pc = 0x240880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24087Cu;
    // 0x240880: 0xc44c001c  lwc1        $f12, 0x1C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x24087Cu, 0x240884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240884u;
label_240884:
    // 0x240884: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x240884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_240888:
    // 0x240888: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x240888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_24088c:
    // 0x24088c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_240890:
    if (ctx->pc == 0x240890u) {
        ctx->pc = 0x240890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24088Cu;
        // 0x240890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240894u;
        goto label_240894;
    }
    ctx->pc = 0x24088Cu;
    {
        const bool branch_taken_0x24088c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24088Cu;
        // 0x240890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24088c) {
            ctx->pc = 0x2408A4u;
            goto label_2408a4;
        }
    }
    ctx->pc = 0x240894u;
label_240894:
    // 0x240894: 0xc08e3b2  jal         func_238EC8
label_240898:
    if (ctx->pc == 0x240898u) {
        ctx->pc = 0x240898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240894u;
        // 0x240898: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24089Cu;
        goto label_24089c;
    }
    ctx->pc = 0x240894u;
    SET_GPR_U32(ctx, 31, 0x24089Cu);
    ctx->pc = 0x240898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240894u;
    // 0x240898: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238EC8u, 0x240894u, 0x24089Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24089Cu;
label_24089c:
    // 0x24089c: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x24089cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_2408a0:
    // 0x2408a0: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x2408a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_2408a4:
    // 0x2408a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2408a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2408a8:
    // 0x2408a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2408a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2408ac:
    // 0x2408ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2408acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2408b0:
    // 0x2408b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2408b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2408b4:
    // 0x2408b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2408b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2408b8:
    // 0x2408b8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2408b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2408bc:
    // 0x2408bc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2408bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2408c0:
    // 0x2408c0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2408c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2408c4:
    // 0x2408c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2408c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2408c8:
    // 0x2408c8: 0x3e00008  jr          $ra
label_2408cc:
    if (ctx->pc == 0x2408CCu) {
        ctx->pc = 0x2408CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2408C8u;
        // 0x2408cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2408D0u;
        goto label_fallthrough_0x2408c8;
    }
    ctx->pc = 0x2408C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2408CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2408C8u;
        // 0x2408cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2408C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2408c8:
    ctx->pc = 0x2408D0u;
}
