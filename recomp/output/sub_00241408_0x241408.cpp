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

// Function: sub_00241408
// Address: 0x241408 - 0x241a20
void sub_00241408_0x241408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241408_0x241408");
#endif

    switch (ctx->pc) {
        case 0x241408u: goto label_241408;
        case 0x24140cu: goto label_24140c;
        case 0x241410u: goto label_241410;
        case 0x241414u: goto label_241414;
        case 0x241418u: goto label_241418;
        case 0x24141cu: goto label_24141c;
        case 0x241420u: goto label_241420;
        case 0x241424u: goto label_241424;
        case 0x241428u: goto label_241428;
        case 0x24142cu: goto label_24142c;
        case 0x241430u: goto label_241430;
        case 0x241434u: goto label_241434;
        case 0x241438u: goto label_241438;
        case 0x24143cu: goto label_24143c;
        case 0x241440u: goto label_241440;
        case 0x241444u: goto label_241444;
        case 0x241448u: goto label_241448;
        case 0x24144cu: goto label_24144c;
        case 0x241450u: goto label_241450;
        case 0x241454u: goto label_241454;
        case 0x241458u: goto label_241458;
        case 0x24145cu: goto label_24145c;
        case 0x241460u: goto label_241460;
        case 0x241464u: goto label_241464;
        case 0x241468u: goto label_241468;
        case 0x24146cu: goto label_24146c;
        case 0x241470u: goto label_241470;
        case 0x241474u: goto label_241474;
        case 0x241478u: goto label_241478;
        case 0x24147cu: goto label_24147c;
        case 0x241480u: goto label_241480;
        case 0x241484u: goto label_241484;
        case 0x241488u: goto label_241488;
        case 0x24148cu: goto label_24148c;
        case 0x241490u: goto label_241490;
        case 0x241494u: goto label_241494;
        case 0x241498u: goto label_241498;
        case 0x24149cu: goto label_24149c;
        case 0x2414a0u: goto label_2414a0;
        case 0x2414a4u: goto label_2414a4;
        case 0x2414a8u: goto label_2414a8;
        case 0x2414acu: goto label_2414ac;
        case 0x2414b0u: goto label_2414b0;
        case 0x2414b4u: goto label_2414b4;
        case 0x2414b8u: goto label_2414b8;
        case 0x2414bcu: goto label_2414bc;
        case 0x2414c0u: goto label_2414c0;
        case 0x2414c4u: goto label_2414c4;
        case 0x2414c8u: goto label_2414c8;
        case 0x2414ccu: goto label_2414cc;
        case 0x2414d0u: goto label_2414d0;
        case 0x2414d4u: goto label_2414d4;
        case 0x2414d8u: goto label_2414d8;
        case 0x2414dcu: goto label_2414dc;
        case 0x2414e0u: goto label_2414e0;
        case 0x2414e4u: goto label_2414e4;
        case 0x2414e8u: goto label_2414e8;
        case 0x2414ecu: goto label_2414ec;
        case 0x2414f0u: goto label_2414f0;
        case 0x2414f4u: goto label_2414f4;
        case 0x2414f8u: goto label_2414f8;
        case 0x2414fcu: goto label_2414fc;
        case 0x241500u: goto label_241500;
        case 0x241504u: goto label_241504;
        case 0x241508u: goto label_241508;
        case 0x24150cu: goto label_24150c;
        case 0x241510u: goto label_241510;
        case 0x241514u: goto label_241514;
        case 0x241518u: goto label_241518;
        case 0x24151cu: goto label_24151c;
        case 0x241520u: goto label_241520;
        case 0x241524u: goto label_241524;
        case 0x241528u: goto label_241528;
        case 0x24152cu: goto label_24152c;
        case 0x241530u: goto label_241530;
        case 0x241534u: goto label_241534;
        case 0x241538u: goto label_241538;
        case 0x24153cu: goto label_24153c;
        case 0x241540u: goto label_241540;
        case 0x241544u: goto label_241544;
        case 0x241548u: goto label_241548;
        case 0x24154cu: goto label_24154c;
        case 0x241550u: goto label_241550;
        case 0x241554u: goto label_241554;
        case 0x241558u: goto label_241558;
        case 0x24155cu: goto label_24155c;
        case 0x241560u: goto label_241560;
        case 0x241564u: goto label_241564;
        case 0x241568u: goto label_241568;
        case 0x24156cu: goto label_24156c;
        case 0x241570u: goto label_241570;
        case 0x241574u: goto label_241574;
        case 0x241578u: goto label_241578;
        case 0x24157cu: goto label_24157c;
        case 0x241580u: goto label_241580;
        case 0x241584u: goto label_241584;
        case 0x241588u: goto label_241588;
        case 0x24158cu: goto label_24158c;
        case 0x241590u: goto label_241590;
        case 0x241594u: goto label_241594;
        case 0x241598u: goto label_241598;
        case 0x24159cu: goto label_24159c;
        case 0x2415a0u: goto label_2415a0;
        case 0x2415a4u: goto label_2415a4;
        case 0x2415a8u: goto label_2415a8;
        case 0x2415acu: goto label_2415ac;
        case 0x2415b0u: goto label_2415b0;
        case 0x2415b4u: goto label_2415b4;
        case 0x2415b8u: goto label_2415b8;
        case 0x2415bcu: goto label_2415bc;
        case 0x2415c0u: goto label_2415c0;
        case 0x2415c4u: goto label_2415c4;
        case 0x2415c8u: goto label_2415c8;
        case 0x2415ccu: goto label_2415cc;
        case 0x2415d0u: goto label_2415d0;
        case 0x2415d4u: goto label_2415d4;
        case 0x2415d8u: goto label_2415d8;
        case 0x2415dcu: goto label_2415dc;
        case 0x2415e0u: goto label_2415e0;
        case 0x2415e4u: goto label_2415e4;
        case 0x2415e8u: goto label_2415e8;
        case 0x2415ecu: goto label_2415ec;
        case 0x2415f0u: goto label_2415f0;
        case 0x2415f4u: goto label_2415f4;
        case 0x2415f8u: goto label_2415f8;
        case 0x2415fcu: goto label_2415fc;
        case 0x241600u: goto label_241600;
        case 0x241604u: goto label_241604;
        case 0x241608u: goto label_241608;
        case 0x24160cu: goto label_24160c;
        case 0x241610u: goto label_241610;
        case 0x241614u: goto label_241614;
        case 0x241618u: goto label_241618;
        case 0x24161cu: goto label_24161c;
        case 0x241620u: goto label_241620;
        case 0x241624u: goto label_241624;
        case 0x241628u: goto label_241628;
        case 0x24162cu: goto label_24162c;
        case 0x241630u: goto label_241630;
        case 0x241634u: goto label_241634;
        case 0x241638u: goto label_241638;
        case 0x24163cu: goto label_24163c;
        case 0x241640u: goto label_241640;
        case 0x241644u: goto label_241644;
        case 0x241648u: goto label_241648;
        case 0x24164cu: goto label_24164c;
        case 0x241650u: goto label_241650;
        case 0x241654u: goto label_241654;
        case 0x241658u: goto label_241658;
        case 0x24165cu: goto label_24165c;
        case 0x241660u: goto label_241660;
        case 0x241664u: goto label_241664;
        case 0x241668u: goto label_241668;
        case 0x24166cu: goto label_24166c;
        case 0x241670u: goto label_241670;
        case 0x241674u: goto label_241674;
        case 0x241678u: goto label_241678;
        case 0x24167cu: goto label_24167c;
        case 0x241680u: goto label_241680;
        case 0x241684u: goto label_241684;
        case 0x241688u: goto label_241688;
        case 0x24168cu: goto label_24168c;
        case 0x241690u: goto label_241690;
        case 0x241694u: goto label_241694;
        case 0x241698u: goto label_241698;
        case 0x24169cu: goto label_24169c;
        case 0x2416a0u: goto label_2416a0;
        case 0x2416a4u: goto label_2416a4;
        case 0x2416a8u: goto label_2416a8;
        case 0x2416acu: goto label_2416ac;
        case 0x2416b0u: goto label_2416b0;
        case 0x2416b4u: goto label_2416b4;
        case 0x2416b8u: goto label_2416b8;
        case 0x2416bcu: goto label_2416bc;
        case 0x2416c0u: goto label_2416c0;
        case 0x2416c4u: goto label_2416c4;
        case 0x2416c8u: goto label_2416c8;
        case 0x2416ccu: goto label_2416cc;
        case 0x2416d0u: goto label_2416d0;
        case 0x2416d4u: goto label_2416d4;
        case 0x2416d8u: goto label_2416d8;
        case 0x2416dcu: goto label_2416dc;
        case 0x2416e0u: goto label_2416e0;
        case 0x2416e4u: goto label_2416e4;
        case 0x2416e8u: goto label_2416e8;
        case 0x2416ecu: goto label_2416ec;
        case 0x2416f0u: goto label_2416f0;
        case 0x2416f4u: goto label_2416f4;
        case 0x2416f8u: goto label_2416f8;
        case 0x2416fcu: goto label_2416fc;
        case 0x241700u: goto label_241700;
        case 0x241704u: goto label_241704;
        case 0x241708u: goto label_241708;
        case 0x24170cu: goto label_24170c;
        case 0x241710u: goto label_241710;
        case 0x241714u: goto label_241714;
        case 0x241718u: goto label_241718;
        case 0x24171cu: goto label_24171c;
        case 0x241720u: goto label_241720;
        case 0x241724u: goto label_241724;
        case 0x241728u: goto label_241728;
        case 0x24172cu: goto label_24172c;
        case 0x241730u: goto label_241730;
        case 0x241734u: goto label_241734;
        case 0x241738u: goto label_241738;
        case 0x24173cu: goto label_24173c;
        case 0x241740u: goto label_241740;
        case 0x241744u: goto label_241744;
        case 0x241748u: goto label_241748;
        case 0x24174cu: goto label_24174c;
        case 0x241750u: goto label_241750;
        case 0x241754u: goto label_241754;
        case 0x241758u: goto label_241758;
        case 0x24175cu: goto label_24175c;
        case 0x241760u: goto label_241760;
        case 0x241764u: goto label_241764;
        case 0x241768u: goto label_241768;
        case 0x24176cu: goto label_24176c;
        case 0x241770u: goto label_241770;
        case 0x241774u: goto label_241774;
        case 0x241778u: goto label_241778;
        case 0x24177cu: goto label_24177c;
        case 0x241780u: goto label_241780;
        case 0x241784u: goto label_241784;
        case 0x241788u: goto label_241788;
        case 0x24178cu: goto label_24178c;
        case 0x241790u: goto label_241790;
        case 0x241794u: goto label_241794;
        case 0x241798u: goto label_241798;
        case 0x24179cu: goto label_24179c;
        case 0x2417a0u: goto label_2417a0;
        case 0x2417a4u: goto label_2417a4;
        case 0x2417a8u: goto label_2417a8;
        case 0x2417acu: goto label_2417ac;
        case 0x2417b0u: goto label_2417b0;
        case 0x2417b4u: goto label_2417b4;
        case 0x2417b8u: goto label_2417b8;
        case 0x2417bcu: goto label_2417bc;
        case 0x2417c0u: goto label_2417c0;
        case 0x2417c4u: goto label_2417c4;
        case 0x2417c8u: goto label_2417c8;
        case 0x2417ccu: goto label_2417cc;
        case 0x2417d0u: goto label_2417d0;
        case 0x2417d4u: goto label_2417d4;
        case 0x2417d8u: goto label_2417d8;
        case 0x2417dcu: goto label_2417dc;
        case 0x2417e0u: goto label_2417e0;
        case 0x2417e4u: goto label_2417e4;
        case 0x2417e8u: goto label_2417e8;
        case 0x2417ecu: goto label_2417ec;
        case 0x2417f0u: goto label_2417f0;
        case 0x2417f4u: goto label_2417f4;
        case 0x2417f8u: goto label_2417f8;
        case 0x2417fcu: goto label_2417fc;
        case 0x241800u: goto label_241800;
        case 0x241804u: goto label_241804;
        case 0x241808u: goto label_241808;
        case 0x24180cu: goto label_24180c;
        case 0x241810u: goto label_241810;
        case 0x241814u: goto label_241814;
        case 0x241818u: goto label_241818;
        case 0x24181cu: goto label_24181c;
        case 0x241820u: goto label_241820;
        case 0x241824u: goto label_241824;
        case 0x241828u: goto label_241828;
        case 0x24182cu: goto label_24182c;
        case 0x241830u: goto label_241830;
        case 0x241834u: goto label_241834;
        case 0x241838u: goto label_241838;
        case 0x24183cu: goto label_24183c;
        case 0x241840u: goto label_241840;
        case 0x241844u: goto label_241844;
        case 0x241848u: goto label_241848;
        case 0x24184cu: goto label_24184c;
        case 0x241850u: goto label_241850;
        case 0x241854u: goto label_241854;
        case 0x241858u: goto label_241858;
        case 0x24185cu: goto label_24185c;
        case 0x241860u: goto label_241860;
        case 0x241864u: goto label_241864;
        case 0x241868u: goto label_241868;
        case 0x24186cu: goto label_24186c;
        case 0x241870u: goto label_241870;
        case 0x241874u: goto label_241874;
        case 0x241878u: goto label_241878;
        case 0x24187cu: goto label_24187c;
        case 0x241880u: goto label_241880;
        case 0x241884u: goto label_241884;
        case 0x241888u: goto label_241888;
        case 0x24188cu: goto label_24188c;
        case 0x241890u: goto label_241890;
        case 0x241894u: goto label_241894;
        case 0x241898u: goto label_241898;
        case 0x24189cu: goto label_24189c;
        case 0x2418a0u: goto label_2418a0;
        case 0x2418a4u: goto label_2418a4;
        case 0x2418a8u: goto label_2418a8;
        case 0x2418acu: goto label_2418ac;
        case 0x2418b0u: goto label_2418b0;
        case 0x2418b4u: goto label_2418b4;
        case 0x2418b8u: goto label_2418b8;
        case 0x2418bcu: goto label_2418bc;
        case 0x2418c0u: goto label_2418c0;
        case 0x2418c4u: goto label_2418c4;
        case 0x2418c8u: goto label_2418c8;
        case 0x2418ccu: goto label_2418cc;
        case 0x2418d0u: goto label_2418d0;
        case 0x2418d4u: goto label_2418d4;
        case 0x2418d8u: goto label_2418d8;
        case 0x2418dcu: goto label_2418dc;
        case 0x2418e0u: goto label_2418e0;
        case 0x2418e4u: goto label_2418e4;
        case 0x2418e8u: goto label_2418e8;
        case 0x2418ecu: goto label_2418ec;
        case 0x2418f0u: goto label_2418f0;
        case 0x2418f4u: goto label_2418f4;
        case 0x2418f8u: goto label_2418f8;
        case 0x2418fcu: goto label_2418fc;
        case 0x241900u: goto label_241900;
        case 0x241904u: goto label_241904;
        case 0x241908u: goto label_241908;
        case 0x24190cu: goto label_24190c;
        case 0x241910u: goto label_241910;
        case 0x241914u: goto label_241914;
        case 0x241918u: goto label_241918;
        case 0x24191cu: goto label_24191c;
        case 0x241920u: goto label_241920;
        case 0x241924u: goto label_241924;
        case 0x241928u: goto label_241928;
        case 0x24192cu: goto label_24192c;
        case 0x241930u: goto label_241930;
        case 0x241934u: goto label_241934;
        case 0x241938u: goto label_241938;
        case 0x24193cu: goto label_24193c;
        case 0x241940u: goto label_241940;
        case 0x241944u: goto label_241944;
        case 0x241948u: goto label_241948;
        case 0x24194cu: goto label_24194c;
        case 0x241950u: goto label_241950;
        case 0x241954u: goto label_241954;
        case 0x241958u: goto label_241958;
        case 0x24195cu: goto label_24195c;
        case 0x241960u: goto label_241960;
        case 0x241964u: goto label_241964;
        case 0x241968u: goto label_241968;
        case 0x24196cu: goto label_24196c;
        case 0x241970u: goto label_241970;
        case 0x241974u: goto label_241974;
        case 0x241978u: goto label_241978;
        case 0x24197cu: goto label_24197c;
        case 0x241980u: goto label_241980;
        case 0x241984u: goto label_241984;
        case 0x241988u: goto label_241988;
        case 0x24198cu: goto label_24198c;
        case 0x241990u: goto label_241990;
        case 0x241994u: goto label_241994;
        case 0x241998u: goto label_241998;
        case 0x24199cu: goto label_24199c;
        case 0x2419a0u: goto label_2419a0;
        case 0x2419a4u: goto label_2419a4;
        case 0x2419a8u: goto label_2419a8;
        case 0x2419acu: goto label_2419ac;
        case 0x2419b0u: goto label_2419b0;
        case 0x2419b4u: goto label_2419b4;
        case 0x2419b8u: goto label_2419b8;
        case 0x2419bcu: goto label_2419bc;
        case 0x2419c0u: goto label_2419c0;
        case 0x2419c4u: goto label_2419c4;
        case 0x2419c8u: goto label_2419c8;
        case 0x2419ccu: goto label_2419cc;
        case 0x2419d0u: goto label_2419d0;
        case 0x2419d4u: goto label_2419d4;
        case 0x2419d8u: goto label_2419d8;
        case 0x2419dcu: goto label_2419dc;
        case 0x2419e0u: goto label_2419e0;
        case 0x2419e4u: goto label_2419e4;
        case 0x2419e8u: goto label_2419e8;
        case 0x2419ecu: goto label_2419ec;
        case 0x2419f0u: goto label_2419f0;
        case 0x2419f4u: goto label_2419f4;
        case 0x2419f8u: goto label_2419f8;
        case 0x2419fcu: goto label_2419fc;
        case 0x241a00u: goto label_241a00;
        case 0x241a04u: goto label_241a04;
        case 0x241a08u: goto label_241a08;
        case 0x241a0cu: goto label_241a0c;
        case 0x241a10u: goto label_241a10;
        case 0x241a14u: goto label_241a14;
        case 0x241a18u: goto label_241a18;
        case 0x241a1cu: goto label_241a1c;
        default: break;
    }

    ctx->pc = 0x241408u;

label_241408:
    // 0x241408: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x241408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_24140c:
    // 0x24140c: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x24140cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
label_241410:
    // 0x241410: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x241410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_241414:
    // 0x241414: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x241414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_241418:
    // 0x241418: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x241418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_24141c:
    // 0x24141c: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x24141cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
label_241420:
    // 0x241420: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x241420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_241424:
    // 0x241424: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x241424u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_241428:
    // 0x241428: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x241428u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_24142c:
    // 0x24142c: 0x8e260334  lw          $a2, 0x334($s1)
    ctx->pc = 0x24142cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_241430:
    // 0x241430: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x241430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_241434:
    // 0x241434: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_241438:
    if (ctx->pc == 0x241438u) {
        ctx->pc = 0x241438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241434u;
        // 0x241438: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24143Cu;
        goto label_24143c;
    }
    ctx->pc = 0x241434u;
    {
        const bool branch_taken_0x241434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x241438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241434u;
        // 0x241438: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241434) {
            ctx->pc = 0x241444u;
            goto label_241444;
        }
    }
    ctx->pc = 0x24143Cu;
label_24143c:
    // 0x24143c: 0x10000009  b           . + 4 + (0x9 << 2)
label_241440:
    if (ctx->pc == 0x241440u) {
        ctx->pc = 0x241440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24143Cu;
        // 0x241440: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241444u;
        goto label_241444;
    }
    ctx->pc = 0x24143Cu;
    {
        const bool branch_taken_0x24143c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24143Cu;
        // 0x241440: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24143c) {
            ctx->pc = 0x241464u;
            goto label_241464;
        }
    }
    ctx->pc = 0x241444u;
label_241444:
    // 0x241444: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x241444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_241448:
    // 0x241448: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x241448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24144c:
    // 0x24144c: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
label_241450:
    if (ctx->pc == 0x241450u) {
        ctx->pc = 0x241450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24144Cu;
        // 0x241450: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241454u;
        goto label_241454;
    }
    ctx->pc = 0x24144Cu;
    {
        const bool branch_taken_0x24144c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x241450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24144Cu;
        // 0x241450: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24144c) {
            ctx->pc = 0x24143Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24143c;
        }
    }
    ctx->pc = 0x241454u;
label_241454:
    // 0x241454: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x241454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_241458:
    // 0x241458: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_24145c:
    if (ctx->pc == 0x24145Cu) {
        ctx->pc = 0x24145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241458u;
        // 0x24145c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241460u;
        goto label_241460;
    }
    ctx->pc = 0x241458u;
    {
        const bool branch_taken_0x241458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241458u;
        // 0x24145c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241458) {
            ctx->pc = 0x241448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241448;
        }
    }
    ctx->pc = 0x241460u;
label_241460:
    // 0x241460: 0x8cd001e8  lw          $s0, 0x1E8($a2)
    ctx->pc = 0x241460u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_241464:
    // 0x241464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x241464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_241468:
    // 0x241468: 0xc08dc16  jal         func_237058
label_24146c:
    if (ctx->pc == 0x24146Cu) {
        ctx->pc = 0x24146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241468u;
        // 0x24146c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241470u;
        goto label_241470;
    }
    ctx->pc = 0x241468u;
    SET_GPR_U32(ctx, 31, 0x241470u);
    ctx->pc = 0x24146Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241468u;
    // 0x24146c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x241468u, 0x241470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241470u;
label_241470:
    // 0x241470: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x241470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_241474:
    // 0x241474: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x241474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_241478:
    // 0x241478: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x241478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_24147c:
    // 0x24147c: 0x5443015f  bnel        $v0, $v1, . + 4 + (0x15F << 2)
label_241480:
    if (ctx->pc == 0x241480u) {
        ctx->pc = 0x241480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24147Cu;
        // 0x241480: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241484u;
        goto label_241484;
    }
    ctx->pc = 0x24147Cu;
    {
        const bool branch_taken_0x24147c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24147c) {
            ctx->pc = 0x241480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24147Cu;
            // 0x241480: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2419FCu;
            goto label_2419fc;
        }
    }
    ctx->pc = 0x241484u;
label_241484:
    // 0x241484: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x241484u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
label_241488:
    // 0x241488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24148c:
    // 0x24148c: 0x24a56318  addiu       $a1, $a1, 0x6318
    ctx->pc = 0x24148cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25368));
label_241490:
    // 0x241490: 0xc073fde  jal         func_1CFF78
label_241494:
    if (ctx->pc == 0x241494u) {
        ctx->pc = 0x241494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241490u;
        // 0x241494: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241498u;
        goto label_241498;
    }
    ctx->pc = 0x241490u;
    SET_GPR_U32(ctx, 31, 0x241498u);
    ctx->pc = 0x241494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241490u;
    // 0x241494: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x241490u, 0x241498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241498u;
label_241498:
    // 0x241498: 0x8e25038c  lw          $a1, 0x38C($s1)
    ctx->pc = 0x241498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
label_24149c:
    // 0x24149c: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x24149cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2414a0:
    // 0x2414a0: 0x8ca60334  lw          $a2, 0x334($a1)
    ctx->pc = 0x2414a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 820)));
label_2414a4:
    // 0x2414a4: 0x8c640150  lw          $a0, 0x150($v1)
    ctx->pc = 0x2414a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2414a8:
    // 0x2414a8: 0x8cc20150  lw          $v0, 0x150($a2)
    ctx->pc = 0x2414a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
label_2414ac:
    // 0x2414ac: 0x10440013  beq         $v0, $a0, . + 4 + (0x13 << 2)
label_2414b0:
    if (ctx->pc == 0x2414B0u) {
        ctx->pc = 0x2414B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414ACu;
        // 0x2414b0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2414B4u;
        goto label_2414b4;
    }
    ctx->pc = 0x2414ACu;
    {
        const bool branch_taken_0x2414ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2414B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414ACu;
        // 0x2414b0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2414ac) {
            ctx->pc = 0x2414FCu;
            goto label_2414fc;
        }
    }
    ctx->pc = 0x2414B4u;
label_2414b4:
    // 0x2414b4: 0xc069a8c  jal         func_1A6A30
label_2414b8:
    if (ctx->pc == 0x2414B8u) {
        ctx->pc = 0x2414B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414B4u;
        // 0x2414b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2414BCu;
        goto label_2414bc;
    }
    ctx->pc = 0x2414B4u;
    SET_GPR_U32(ctx, 31, 0x2414BCu);
    ctx->pc = 0x2414B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2414B4u;
    // 0x2414b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6A30u, 0x2414B4u, 0x2414BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2414BCu;
label_2414bc:
    // 0x2414bc: 0x8e23038c  lw          $v1, 0x38C($s1)
    ctx->pc = 0x2414bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
label_2414c0:
    // 0x2414c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2414c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2414c4:
    // 0x2414c4: 0xc06a23e  jal         func_1A88F8
label_2414c8:
    if (ctx->pc == 0x2414C8u) {
        ctx->pc = 0x2414C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414C4u;
        // 0x2414c8: 0x8c640334  lw          $a0, 0x334($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2414CCu;
        goto label_2414cc;
    }
    ctx->pc = 0x2414C4u;
    SET_GPR_U32(ctx, 31, 0x2414CCu);
    ctx->pc = 0x2414C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2414C4u;
    // 0x2414c8: 0x8c640334  lw          $a0, 0x334($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x2414C4u, 0x2414CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2414CCu;
label_2414cc:
    // 0x2414cc: 0x8e22038c  lw          $v0, 0x38C($s1)
    ctx->pc = 0x2414ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
label_2414d0:
    // 0x2414d0: 0xc06a328  jal         func_1A8CA0
label_2414d4:
    if (ctx->pc == 0x2414D4u) {
        ctx->pc = 0x2414D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414D0u;
        // 0x2414d4: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2414D8u;
        goto label_2414d8;
    }
    ctx->pc = 0x2414D0u;
    SET_GPR_U32(ctx, 31, 0x2414D8u);
    ctx->pc = 0x2414D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2414D0u;
    // 0x2414d4: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x2414D0u, 0x2414D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2414D8u;
label_2414d8:
    // 0x2414d8: 0x8e23038c  lw          $v1, 0x38C($s1)
    ctx->pc = 0x2414d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
label_2414dc:
    // 0x2414dc: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x2414dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_2414e0:
    // 0x2414e0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2414e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_2414e4:
    // 0x2414e4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2414e8:
    if (ctx->pc == 0x2414E8u) {
        ctx->pc = 0x2414ECu;
        goto label_2414ec;
    }
    ctx->pc = 0x2414E4u;
    {
        const bool branch_taken_0x2414e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2414e4) {
            ctx->pc = 0x241508u;
            goto label_241508;
        }
    }
    ctx->pc = 0x2414ECu;
label_2414ec:
    // 0x2414ec: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2414ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2414f0:
    // 0x2414f0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2414f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2414f4:
    // 0x2414f4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2414f8:
    if (ctx->pc == 0x2414F8u) {
        ctx->pc = 0x2414F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414F4u;
        // 0x2414f8: 0xe46012b0  swc1        $f0, 0x12B0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4784), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2414FCu;
        goto label_2414fc;
    }
    ctx->pc = 0x2414F4u;
    {
        const bool branch_taken_0x2414f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2414F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414F4u;
        // 0x2414f8: 0xe46012b0  swc1        $f0, 0x12B0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4784), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2414f4) {
            ctx->pc = 0x241508u;
            goto label_241508;
        }
    }
    ctx->pc = 0x2414FCu;
label_2414fc:
    // 0x2414fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2414fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_241500:
    // 0x241500: 0xc08f982  jal         func_23E608
label_241504:
    if (ctx->pc == 0x241504u) {
        ctx->pc = 0x241504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241500u;
        // 0x241504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241508u;
        goto label_241508;
    }
    ctx->pc = 0x241500u;
    SET_GPR_U32(ctx, 31, 0x241508u);
    ctx->pc = 0x241504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241500u;
    // 0x241504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E608u, 0x241500u, 0x241508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241508u;
label_241508:
    // 0x241508: 0xc0899bc  jal         func_2266F0
label_24150c:
    if (ctx->pc == 0x24150Cu) {
        ctx->pc = 0x24150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241508u;
        // 0x24150c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241510u;
        goto label_241510;
    }
    ctx->pc = 0x241508u;
    SET_GPR_U32(ctx, 31, 0x241510u);
    ctx->pc = 0x24150Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241508u;
    // 0x24150c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x241508u, 0x241510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241510u;
label_241510:
    // 0x241510: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x241510u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241514:
    // 0x241514: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x241514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_241518:
    // 0x241518: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x241518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_24151c:
    // 0x24151c: 0x8e430274  lw          $v1, 0x274($s2)
    ctx->pc = 0x24151cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 628)));
label_241520:
    // 0x241520: 0x8c450150  lw          $a1, 0x150($v0)
    ctx->pc = 0x241520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_241524:
    // 0x241524: 0x10a40014  beq         $a1, $a0, . + 4 + (0x14 << 2)
label_241528:
    if (ctx->pc == 0x241528u) {
        ctx->pc = 0x241528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241524u;
        // 0x241528: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24152Cu;
        goto label_24152c;
    }
    ctx->pc = 0x241524u;
    {
        const bool branch_taken_0x241524 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x241528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241524u;
        // 0x241528: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241524) {
            ctx->pc = 0x241578u;
            goto label_241578;
        }
    }
    ctx->pc = 0x24152Cu;
label_24152c:
    // 0x24152c: 0x28a20025  slti        $v0, $a1, 0x25
    ctx->pc = 0x24152cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)37) ? 1 : 0);
label_241530:
    // 0x241530: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_241534:
    if (ctx->pc == 0x241534u) {
        ctx->pc = 0x241534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241530u;
        // 0x241534: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241538u;
        goto label_241538;
    }
    ctx->pc = 0x241530u;
    {
        const bool branch_taken_0x241530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241530u;
        // 0x241534: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241530) {
            ctx->pc = 0x241548u;
            goto label_241548;
        }
    }
    ctx->pc = 0x241538u;
label_241538:
    // 0x241538: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
label_24153c:
    if (ctx->pc == 0x24153Cu) {
        ctx->pc = 0x24153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241538u;
        // 0x24153c: 0x8e23038c  lw          $v1, 0x38C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241540u;
        goto label_241540;
    }
    ctx->pc = 0x241538u;
    {
        const bool branch_taken_0x241538 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x241538) {
            ctx->pc = 0x24153Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241538u;
            // 0x24153c: 0x8e23038c  lw          $v1, 0x38C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24155Cu;
            goto label_24155c;
        }
    }
    ctx->pc = 0x241540u;
label_241540:
    // 0x241540: 0x1000001c  b           . + 4 + (0x1C << 2)
label_241544:
    if (ctx->pc == 0x241544u) {
        ctx->pc = 0x241544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241540u;
        // 0x241544: 0xc600001c  lwc1        $f0, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x241548u;
        goto label_241548;
    }
    ctx->pc = 0x241540u;
    {
        const bool branch_taken_0x241540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241540u;
        // 0x241544: 0xc600001c  lwc1        $f0, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x241540) {
            ctx->pc = 0x2415B4u;
            goto label_2415b4;
        }
    }
    ctx->pc = 0x241548u;
label_241548:
    // 0x241548: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x241548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_24154c:
    // 0x24154c: 0x50a20012  beql        $a1, $v0, . + 4 + (0x12 << 2)
label_241550:
    if (ctx->pc == 0x241550u) {
        ctx->pc = 0x241550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24154Cu;
        // 0x241550: 0x8e23038c  lw          $v1, 0x38C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241554u;
        goto label_241554;
    }
    ctx->pc = 0x24154Cu;
    {
        const bool branch_taken_0x24154c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x24154c) {
            ctx->pc = 0x241550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24154Cu;
            // 0x241550: 0x8e23038c  lw          $v1, 0x38C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241598u;
            goto label_241598;
        }
    }
    ctx->pc = 0x241554u;
label_241554:
    // 0x241554: 0x10000017  b           . + 4 + (0x17 << 2)
label_241558:
    if (ctx->pc == 0x241558u) {
        ctx->pc = 0x241558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241554u;
        // 0x241558: 0xc600001c  lwc1        $f0, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24155Cu;
        goto label_24155c;
    }
    ctx->pc = 0x241554u;
    {
        const bool branch_taken_0x241554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241554u;
        // 0x241558: 0xc600001c  lwc1        $f0, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x241554) {
            ctx->pc = 0x2415B4u;
            goto label_2415b4;
        }
    }
    ctx->pc = 0x24155Cu;
label_24155c:
    // 0x24155c: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x24155cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_241560:
    // 0x241560: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x241560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_241564:
    // 0x241564: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
label_241568:
    if (ctx->pc == 0x241568u) {
        ctx->pc = 0x241568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241564u;
        // 0x241568: 0xc4d500c0  lwc1        $f21, 0xC0($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24156Cu;
        goto label_24156c;
    }
    ctx->pc = 0x241564u;
    {
        const bool branch_taken_0x241564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241564) {
            ctx->pc = 0x241568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241564u;
            // 0x241568: 0xc4d500c0  lwc1        $f21, 0xC0($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x241570u;
            goto label_241570;
        }
    }
    ctx->pc = 0x24156Cu;
label_24156c:
    // 0x24156c: 0xc4d500d0  lwc1        $f21, 0xD0($a2)
    ctx->pc = 0x24156cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_241570:
    // 0x241570: 0x1000000f  b           . + 4 + (0xF << 2)
label_241574:
    if (ctx->pc == 0x241574u) {
        ctx->pc = 0x241574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241570u;
        // 0x241574: 0xc4d400e0  lwc1        $f20, 0xE0($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x241578u;
        goto label_241578;
    }
    ctx->pc = 0x241570u;
    {
        const bool branch_taken_0x241570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241570u;
        // 0x241574: 0xc4d400e0  lwc1        $f20, 0xE0($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x241570) {
            ctx->pc = 0x2415B0u;
            goto label_2415b0;
        }
    }
    ctx->pc = 0x241578u;
label_241578:
    // 0x241578: 0x8e23038c  lw          $v1, 0x38C($s1)
    ctx->pc = 0x241578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
label_24157c:
    // 0x24157c: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x24157cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_241580:
    // 0x241580: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x241580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_241584:
    // 0x241584: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
label_241588:
    if (ctx->pc == 0x241588u) {
        ctx->pc = 0x241588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241584u;
        // 0x241588: 0xc4d500c4  lwc1        $f21, 0xC4($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24158Cu;
        goto label_24158c;
    }
    ctx->pc = 0x241584u;
    {
        const bool branch_taken_0x241584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241584) {
            ctx->pc = 0x241588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241584u;
            // 0x241588: 0xc4d500c4  lwc1        $f21, 0xC4($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x241590u;
            goto label_241590;
        }
    }
    ctx->pc = 0x24158Cu;
label_24158c:
    // 0x24158c: 0xc4d500d4  lwc1        $f21, 0xD4($a2)
    ctx->pc = 0x24158cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_241590:
    // 0x241590: 0x10000007  b           . + 4 + (0x7 << 2)
label_241594:
    if (ctx->pc == 0x241594u) {
        ctx->pc = 0x241594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241590u;
        // 0x241594: 0xc4d400e4  lwc1        $f20, 0xE4($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x241598u;
        goto label_241598;
    }
    ctx->pc = 0x241590u;
    {
        const bool branch_taken_0x241590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241590u;
        // 0x241594: 0xc4d400e4  lwc1        $f20, 0xE4($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x241590) {
            ctx->pc = 0x2415B0u;
            goto label_2415b0;
        }
    }
    ctx->pc = 0x241598u;
label_241598:
    // 0x241598: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x241598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_24159c:
    // 0x24159c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x24159cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_2415a0:
    // 0x2415a0: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
label_2415a4:
    if (ctx->pc == 0x2415A4u) {
        ctx->pc = 0x2415A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2415A0u;
        // 0x2415a4: 0xc4d500c4  lwc1        $f21, 0xC4($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2415A8u;
        goto label_2415a8;
    }
    ctx->pc = 0x2415A0u;
    {
        const bool branch_taken_0x2415a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2415a0) {
            ctx->pc = 0x2415A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2415A0u;
            // 0x2415a4: 0xc4d500c4  lwc1        $f21, 0xC4($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2415ACu;
            goto label_2415ac;
        }
    }
    ctx->pc = 0x2415A8u;
label_2415a8:
    // 0x2415a8: 0xc4d500d4  lwc1        $f21, 0xD4($a2)
    ctx->pc = 0x2415a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2415ac:
    // 0x2415ac: 0xc4d400e8  lwc1        $f20, 0xE8($a2)
    ctx->pc = 0x2415acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2415b0:
    // 0x2415b0: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x2415b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2415b4:
    // 0x2415b4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2415b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2415b8:
    // 0x2415b8: 0x0  nop
    ctx->pc = 0x2415b8u;
    // NOP
label_2415bc:
    // 0x2415bc: 0x4500010b  bc1f        . + 4 + (0x10B << 2)
label_2415c0:
    if (ctx->pc == 0x2415C0u) {
        ctx->pc = 0x2415C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2415BCu;
        // 0x2415c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2415C4u;
        goto label_2415c4;
    }
    ctx->pc = 0x2415BCu;
    {
        const bool branch_taken_0x2415bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2415C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2415BCu;
        // 0x2415c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2415bc) {
            ctx->pc = 0x2419ECu;
            goto label_2419ec;
        }
    }
    ctx->pc = 0x2415C4u;
label_2415c4:
    // 0x2415c4: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x2415c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_2415c8:
    // 0x2415c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2415c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2415cc:
    // 0x2415cc: 0x1440010b  bnez        $v0, . + 4 + (0x10B << 2)
label_2415d0:
    if (ctx->pc == 0x2415D0u) {
        ctx->pc = 0x2415D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2415CCu;
        // 0x2415d0: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2415D4u;
        goto label_2415d4;
    }
    ctx->pc = 0x2415CCu;
    {
        const bool branch_taken_0x2415cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2415D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2415CCu;
        // 0x2415d0: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2415cc) {
            ctx->pc = 0x2419FCu;
            goto label_2419fc;
        }
    }
    ctx->pc = 0x2415D4u;
label_2415d4:
    // 0x2415d4: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2415d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_2415d8:
    // 0x2415d8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2415d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_2415dc:
    // 0x2415dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2415e0:
    if (ctx->pc == 0x2415E0u) {
        ctx->pc = 0x2415E4u;
        goto label_2415e4;
    }
    ctx->pc = 0x2415DCu;
    {
        const bool branch_taken_0x2415dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2415dc) {
            ctx->pc = 0x2415F8u;
            goto label_2415f8;
        }
    }
    ctx->pc = 0x2415E4u;
label_2415e4:
    // 0x2415e4: 0x8e23038c  lw          $v1, 0x38C($s1)
    ctx->pc = 0x2415e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
label_2415e8:
    // 0x2415e8: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x2415e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_2415ec:
    // 0x2415ec: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2415ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_2415f0:
    // 0x2415f0: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_2415f4:
    if (ctx->pc == 0x2415F4u) {
        ctx->pc = 0x2415F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2415F0u;
        // 0x2415f4: 0x8e24038c  lw          $a0, 0x38C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2415F8u;
        goto label_2415f8;
    }
    ctx->pc = 0x2415F0u;
    {
        const bool branch_taken_0x2415f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2415f0) {
            ctx->pc = 0x2415F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2415F0u;
            // 0x2415f4: 0x8e24038c  lw          $a0, 0x38C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24162Cu;
            goto label_24162c;
        }
    }
    ctx->pc = 0x2415F8u;
label_2415f8:
    // 0x2415f8: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x2415f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
label_2415fc:
    // 0x2415fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2415fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_241600:
    // 0x241600: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x241600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_241604:
    // 0x241604: 0x8c44bd50  lw          $a0, -0x42B0($v0)
    ctx->pc = 0x241604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_241608:
    // 0x241608: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x241608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24160c:
    // 0x24160c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x24160cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_241610:
    // 0x241610: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x241610u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_241614:
    // 0x241614: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x241614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_241618:
    // 0x241618: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x241618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24161c:
    // 0x24161c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x24161cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_241620:
    // 0x241620: 0xc0b98b0  jal         func_2E62C0
label_241624:
    if (ctx->pc == 0x241624u) {
        ctx->pc = 0x241624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241620u;
        // 0x241624: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241628u;
        goto label_241628;
    }
    ctx->pc = 0x241620u;
    SET_GPR_U32(ctx, 31, 0x241628u);
    ctx->pc = 0x241624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241620u;
    // 0x241624: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E62C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E62C0u, 0x241620u, 0x241628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241628u;
label_241628:
    // 0x241628: 0x8e24038c  lw          $a0, 0x38C($s1)
    ctx->pc = 0x241628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
label_24162c:
    // 0x24162c: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x24162cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_241630:
    // 0x241630: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x241630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_241634:
    // 0x241634: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_241638:
    if (ctx->pc == 0x241638u) {
        ctx->pc = 0x241638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241634u;
        // 0x241638: 0x8c830390  lw          $v1, 0x390($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 912)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24163Cu;
        goto label_24163c;
    }
    ctx->pc = 0x241634u;
    {
        const bool branch_taken_0x241634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241634) {
            ctx->pc = 0x241638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241634u;
            // 0x241638: 0x8c830390  lw          $v1, 0x390($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 912)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241698u;
            goto label_241698;
        }
    }
    ctx->pc = 0x24163Cu;
label_24163c:
    // 0x24163c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x24163cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_241640:
    // 0x241640: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x241640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_241644:
    // 0x241644: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x241644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_241648:
    // 0x241648: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x241648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_24164c:
    // 0x24164c: 0x24449b10  addiu       $a0, $v0, -0x64F0
    ctx->pc = 0x24164cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
label_241650:
    // 0x241650: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x241650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_241654:
    // 0x241654: 0xc07f4c2  jal         func_1FD308
label_241658:
    if (ctx->pc == 0x241658u) {
        ctx->pc = 0x241658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241654u;
        // 0x241658: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24165Cu;
        goto label_24165c;
    }
    ctx->pc = 0x241654u;
    SET_GPR_U32(ctx, 31, 0x24165Cu);
    ctx->pc = 0x241658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241654u;
    // 0x241658: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x241654u, 0x24165Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24165Cu;
label_24165c:
    // 0x24165c: 0xc0a2302  jal         func_288C08
label_241660:
    if (ctx->pc == 0x241660u) {
        ctx->pc = 0x241660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24165Cu;
        // 0x241660: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241664u;
        goto label_241664;
    }
    ctx->pc = 0x24165Cu;
    SET_GPR_U32(ctx, 31, 0x241664u);
    ctx->pc = 0x241660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24165Cu;
    // 0x241660: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C08u, 0x24165Cu, 0x241664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241664u;
label_241664:
    // 0x241664: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x241664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_241668:
    // 0x241668: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x241668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_24166c:
    // 0x24166c: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x24166cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_241670:
    // 0x241670: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x241670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_241674:
    // 0x241674: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x241674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241678:
    // 0x241678: 0xc046642  jal         func_119908
label_24167c:
    if (ctx->pc == 0x24167Cu) {
        ctx->pc = 0x24167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241678u;
        // 0x24167c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241680u;
        goto label_241680;
    }
    ctx->pc = 0x241678u;
    SET_GPR_U32(ctx, 31, 0x241680u);
    ctx->pc = 0x24167Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241678u;
    // 0x24167c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x241678u, 0x241680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241680u;
label_241680:
    // 0x241680: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x241680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_241684:
    // 0x241684: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x241684u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_241688:
    // 0x241688: 0xc0ae68e  jal         func_2B9A38
label_24168c:
    if (ctx->pc == 0x24168Cu) {
        ctx->pc = 0x24168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241688u;
        // 0x24168c: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241690u;
        goto label_241690;
    }
    ctx->pc = 0x241688u;
    SET_GPR_U32(ctx, 31, 0x241690u);
    ctx->pc = 0x24168Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241688u;
    // 0x24168c: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9A38u, 0x241688u, 0x241690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241690u;
label_241690:
    // 0x241690: 0x1000000b  b           . + 4 + (0xB << 2)
label_241694:
    if (ctx->pc == 0x241694u) {
        ctx->pc = 0x241698u;
        goto label_241698;
    }
    ctx->pc = 0x241690u;
    {
        const bool branch_taken_0x241690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241690) {
            ctx->pc = 0x2416C0u;
            goto label_2416c0;
        }
    }
    ctx->pc = 0x241698u;
label_241698:
    // 0x241698: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x241698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_24169c:
    // 0x24169c: 0xac830390  sw          $v1, 0x390($a0)
    ctx->pc = 0x24169cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 912), GPR_U32(ctx, 3));
label_2416a0:
    // 0x2416a0: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2416a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_2416a4:
    // 0x2416a4: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2416a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_2416a8:
    // 0x2416a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2416ac:
    if (ctx->pc == 0x2416ACu) {
        ctx->pc = 0x2416ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416A8u;
        // 0x2416ac: 0x3c13004a  lui         $s3, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2416B0u;
        goto label_2416b0;
    }
    ctx->pc = 0x2416A8u;
    {
        const bool branch_taken_0x2416a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2416ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416A8u;
        // 0x2416ac: 0x3c13004a  lui         $s3, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2416a8) {
            ctx->pc = 0x2416C0u;
            goto label_2416c0;
        }
    }
    ctx->pc = 0x2416B0u;
label_2416b0:
    // 0x2416b0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2416b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2416b4:
    // 0x2416b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2416b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2416b8:
    // 0x2416b8: 0xc0ae6b8  jal         func_2B9AE0
label_2416bc:
    if (ctx->pc == 0x2416BCu) {
        ctx->pc = 0x2416BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416B8u;
        // 0x2416bc: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2416C0u;
        goto label_2416c0;
    }
    ctx->pc = 0x2416B8u;
    SET_GPR_U32(ctx, 31, 0x2416C0u);
    ctx->pc = 0x2416BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2416B8u;
    // 0x2416bc: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9AE0u, 0x2416B8u, 0x2416C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2416C0u;
label_2416c0:
    // 0x2416c0: 0xc0899bc  jal         func_2266F0
label_2416c4:
    if (ctx->pc == 0x2416C4u) {
        ctx->pc = 0x2416C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416C0u;
        // 0x2416c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2416C8u;
        goto label_2416c8;
    }
    ctx->pc = 0x2416C0u;
    SET_GPR_U32(ctx, 31, 0x2416C8u);
    ctx->pc = 0x2416C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2416C0u;
    // 0x2416c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2416C0u, 0x2416C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2416C8u;
label_2416c8:
    // 0x2416c8: 0x8c430274  lw          $v1, 0x274($v0)
    ctx->pc = 0x2416c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_2416cc:
    // 0x2416cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2416ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2416d0:
    // 0x2416d0: 0x24050433  addiu       $a1, $zero, 0x433
    ctx->pc = 0x2416d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1075));
label_2416d4:
    // 0x2416d4: 0xc08a1f2  jal         func_2287C8
label_2416d8:
    if (ctx->pc == 0x2416D8u) {
        ctx->pc = 0x2416D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416D4u;
        // 0x2416d8: 0xac430280  sw          $v1, 0x280($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2416DCu;
        goto label_2416dc;
    }
    ctx->pc = 0x2416D4u;
    SET_GPR_U32(ctx, 31, 0x2416DCu);
    ctx->pc = 0x2416D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2416D4u;
    // 0x2416d8: 0xac430280  sw          $v1, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x2416D4u, 0x2416DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2416DCu;
label_2416dc:
    // 0x2416dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2416dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2416e0:
    // 0x2416e0: 0xc0f70ce  jal         func_3DC338
label_2416e4:
    if (ctx->pc == 0x2416E4u) {
        ctx->pc = 0x2416E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416E0u;
        // 0x2416e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2416E8u;
        goto label_2416e8;
    }
    ctx->pc = 0x2416E0u;
    SET_GPR_U32(ctx, 31, 0x2416E8u);
    ctx->pc = 0x2416E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2416E0u;
    // 0x2416e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2416E0u, 0x2416E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2416E8u;
label_2416e8:
    // 0x2416e8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2416ec:
    if (ctx->pc == 0x2416ECu) {
        ctx->pc = 0x2416ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416E8u;
        // 0x2416ec: 0xc60000b0  lwc1        $f0, 0xB0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2416F0u;
        goto label_2416f0;
    }
    ctx->pc = 0x2416E8u;
    {
        const bool branch_taken_0x2416e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2416e8) {
            ctx->pc = 0x2416ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2416E8u;
            // 0x2416ec: 0xc60000b0  lwc1        $f0, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2416FCu;
            goto label_2416fc;
        }
    }
    ctx->pc = 0x2416F0u;
label_2416f0:
    // 0x2416f0: 0xc0c4900  jal         func_312400
label_2416f4:
    if (ctx->pc == 0x2416F4u) {
        ctx->pc = 0x2416F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416F0u;
        // 0x2416f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2416F8u;
        goto label_2416f8;
    }
    ctx->pc = 0x2416F0u;
    SET_GPR_U32(ctx, 31, 0x2416F8u);
    ctx->pc = 0x2416F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2416F0u;
    // 0x2416f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2416F0u, 0x2416F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2416F8u;
label_2416f8:
    // 0x2416f8: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x2416f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2416fc:
    // 0x2416fc: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x2416fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_241700:
    // 0x241700: 0x8e28038c  lw          $t0, 0x38C($s1)
    ctx->pc = 0x241700u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
label_241704:
    // 0x241704: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x241704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_241708:
    // 0x241708: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x241708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_24170c:
    // 0x24170c: 0x26649b10  addiu       $a0, $s3, -0x64F0
    ctx->pc = 0x24170cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941456));
label_241710:
    // 0x241710: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x241710u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_241714:
    // 0x241714: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x241714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_241718:
    // 0x241718: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x241718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_24171c:
    // 0x24171c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24171cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_241720:
    // 0x241720: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x241720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241724:
    // 0x241724: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x241724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_241728:
    // 0x241728: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x241728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24172c:
    // 0x24172c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x24172cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_241730:
    // 0x241730: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x241730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_241734:
    // 0x241734: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x241734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_241738:
    // 0x241738: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x241738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24173c:
    // 0x24173c: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x24173cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_241740:
    // 0x241740: 0x8d0300b8  lw          $v1, 0xB8($t0)
    ctx->pc = 0x241740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 184)));
label_241744:
    // 0x241744: 0x8e4200b8  lw          $v0, 0xB8($s2)
    ctx->pc = 0x241744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_241748:
    // 0x241748: 0x90690054  lbu         $t1, 0x54($v1)
    ctx->pc = 0x241748u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 84)));
label_24174c:
    // 0x24174c: 0xc07f550  jal         func_1FD540
label_241750:
    if (ctx->pc == 0x241750u) {
        ctx->pc = 0x241750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24174Cu;
        // 0x241750: 0x90480054  lbu         $t0, 0x54($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241754u;
        goto label_241754;
    }
    ctx->pc = 0x24174Cu;
    SET_GPR_U32(ctx, 31, 0x241754u);
    ctx->pc = 0x241750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24174Cu;
    // 0x241750: 0x90480054  lbu         $t0, 0x54($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD540u, 0x24174Cu, 0x241754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241754u;
label_241754:
    // 0x241754: 0x8e22038c  lw          $v0, 0x38C($s1)
    ctx->pc = 0x241754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
label_241758:
    // 0x241758: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x241758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_24175c:
    // 0x24175c: 0x8c450104  lw          $a1, 0x104($v0)
    ctx->pc = 0x24175cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_241760:
    // 0x241760: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x241760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_241764:
    // 0x241764: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x241764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_241768:
    // 0x241768: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x241768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_24176c:
    // 0x24176c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x24176cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_241770:
    // 0x241770: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x241770u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_241774:
    // 0x241774: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x241774u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_241778:
    // 0x241778: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x241778u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_24177c:
    // 0x24177c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x24177cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_241780:
    // 0x241780: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x241780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_241784:
    // 0x241784: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x241784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_241788:
    // 0x241788: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x241788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24178c:
    // 0x24178c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x24178cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_241790:
    // 0x241790: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x241790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_241794:
    // 0x241794: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x241794u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_241798:
    // 0x241798: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x241798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_24179c:
    // 0x24179c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x24179cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2417a0:
    // 0x2417a0: 0xc0b1488  jal         func_2C5220
label_2417a4:
    if (ctx->pc == 0x2417A4u) {
        ctx->pc = 0x2417A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417A0u;
        // 0x2417a4: 0xe7a2002c  swc1        $f2, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2417A8u;
        goto label_2417a8;
    }
    ctx->pc = 0x2417A0u;
    SET_GPR_U32(ctx, 31, 0x2417A8u);
    ctx->pc = 0x2417A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2417A0u;
    // 0x2417a4: 0xe7a2002c  swc1        $f2, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2417A0u, 0x2417A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2417A8u;
label_2417a8:
    // 0x2417a8: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2417a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2417ac:
    // 0x2417ac: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2417acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2417b0:
    // 0x2417b0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2417b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2417b4:
    // 0x2417b4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2417b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2417b8:
    // 0x2417b8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2417b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2417bc:
    // 0x2417bc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2417bcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2417c0:
    // 0x2417c0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2417c0u;
    // VWAITQ (Q already resolved in this runtime)
label_2417c4:
    // 0x2417c4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2417c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2417c8:
    // 0x2417c8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2417c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2417cc:
    // 0x2417cc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2417ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2417d0:
    // 0x2417d0: 0x24825b50  addiu       $v0, $a0, 0x5B50
    ctx->pc = 0x2417d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 23376));
label_2417d4:
    // 0x2417d4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2417d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2417d8:
    // 0x2417d8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2417d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2417dc:
    // 0x2417dc: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2417dcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2417e0:
    // 0x2417e0: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2417e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2417e4:
    // 0x2417e4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2417e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2417e8:
    // 0x2417e8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2417e8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2417ec:
    // 0x2417ec: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2417ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2417f0:
    // 0x2417f0: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2417f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2417f4:
    // 0x2417f4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2417f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2417f8:
    // 0x2417f8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2417f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2417fc:
    // 0x2417fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2417fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_241800:
    // 0x241800: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x241800u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241804:
    // 0x241804: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x241804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_241808:
    // 0x241808: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x241808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_24180c:
    // 0x24180c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24180cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_241810:
    // 0x241810: 0x0  nop
    ctx->pc = 0x241810u;
    // NOP
label_241814:
    // 0x241814: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_241818:
    if (ctx->pc == 0x241818u) {
        ctx->pc = 0x241818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241814u;
        // 0x241818: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24181Cu;
        goto label_24181c;
    }
    ctx->pc = 0x241814u;
    {
        const bool branch_taken_0x241814 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x241818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241814u;
        // 0x241818: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241814) {
            ctx->pc = 0x241824u;
            goto label_241824;
        }
    }
    ctx->pc = 0x24181Cu;
label_24181c:
    // 0x24181c: 0x10000005  b           . + 4 + (0x5 << 2)
label_241820:
    if (ctx->pc == 0x241820u) {
        ctx->pc = 0x241820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24181Cu;
        // 0x241820: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x241824u;
        goto label_241824;
    }
    ctx->pc = 0x24181Cu;
    {
        const bool branch_taken_0x24181c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24181Cu;
        // 0x241820: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24181c) {
            ctx->pc = 0x241834u;
            goto label_241834;
        }
    }
    ctx->pc = 0x241824u;
label_241824:
    // 0x241824: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x241824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_241828:
    // 0x241828: 0x0  nop
    ctx->pc = 0x241828u;
    // NOP
label_24182c:
    // 0x24182c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_241830:
    if (ctx->pc == 0x241830u) {
        ctx->pc = 0x241830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24182Cu;
        // 0x241830: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x241834u;
        goto label_241834;
    }
    ctx->pc = 0x24182Cu;
    {
        const bool branch_taken_0x24182c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24182c) {
            ctx->pc = 0x241830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24182Cu;
            // 0x241830: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x241834u;
            goto label_241834;
        }
    }
    ctx->pc = 0x241834u;
label_241834:
    // 0x241834: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x241834u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_241838:
    // 0x241838: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x241838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_24183c:
    // 0x24183c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24183cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_241840:
    // 0x241840: 0x0  nop
    ctx->pc = 0x241840u;
    // NOP
label_241844:
    // 0x241844: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x241844u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_241848:
    // 0x241848: 0x0  nop
    ctx->pc = 0x241848u;
    // NOP
label_24184c:
    // 0x24184c: 0x45010036  bc1t        . + 4 + (0x36 << 2)
label_241850:
    if (ctx->pc == 0x241850u) {
        ctx->pc = 0x241850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24184Cu;
        // 0x241850: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241854u;
        goto label_241854;
    }
    ctx->pc = 0x24184Cu;
    {
        const bool branch_taken_0x24184c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x241850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24184Cu;
        // 0x241850: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24184c) {
            ctx->pc = 0x241928u;
            goto label_241928;
        }
    }
    ctx->pc = 0x241854u;
label_241854:
    // 0x241854: 0x24905b50  addiu       $s0, $a0, 0x5B50
    ctx->pc = 0x241854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 23376));
label_241858:
    // 0x241858: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x241858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24185c:
    // 0x24185c: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x24185cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_241860:
    // 0x241860: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x241860u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_241864:
    // 0x241864: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x241864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_241868:
    // 0x241868: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x241868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24186c:
    // 0x24186c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x24186cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_241870:
    // 0x241870: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x241870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_241874:
    // 0x241874: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x241874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_241878:
    // 0x241878: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x241878u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_24187c:
    // 0x24187c: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x24187cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_241880:
    // 0x241880: 0x460c0b01  sub.s       $f12, $f1, $f12
    ctx->pc = 0x241880u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
label_241884:
    // 0x241884: 0x460c0304  c1          0xC0304
    ctx->pc = 0x241884u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_241888:
    // 0x241888: 0xc0e404c  jal         func_390130
label_24188c:
    if (ctx->pc == 0x24188Cu) {
        ctx->pc = 0x241890u;
        goto label_241890;
    }
    ctx->pc = 0x241888u;
    SET_GPR_U32(ctx, 31, 0x241890u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x241888u, 0x241890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241890u;
label_241890:
    // 0x241890: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x241890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_241894:
    // 0x241894: 0x46000147  neg.s       $f5, $f0
    ctx->pc = 0x241894u;
    ctx->f[5] = FPU_NEG_S(ctx->f[0]);
label_241898:
    // 0x241898: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x241898u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_24189c:
    // 0x24189c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x24189cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2418a0:
    // 0x2418a0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2418a0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2418a4:
    // 0x2418a4: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2418a4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2418a8:
    // 0x2418a8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2418a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2418ac:
    // 0x2418ac: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2418acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2418b0:
    // 0x2418b0: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x2418b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2418b4:
    // 0x2418b4: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x2418b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2418b8:
    // 0x2418b8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2418b8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2418bc:
    // 0x2418bc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2418bcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2418c0:
    // 0x2418c0: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2418c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2418c4:
    // 0x2418c4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2418c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_2418c8:
    // 0x2418c8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2418c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_2418cc:
    // 0x2418cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2418ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2418d0:
    // 0x2418d0: 0x0  nop
    ctx->pc = 0x2418d0u;
    // NOP
label_2418d4:
    // 0x2418d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2418d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2418d8:
    // 0x2418d8: 0x0  nop
    ctx->pc = 0x2418d8u;
    // NOP
label_2418dc:
    // 0x2418dc: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_2418e0:
    if (ctx->pc == 0x2418E0u) {
        ctx->pc = 0x2418E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418DCu;
        // 0x2418e0: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2418E4u;
        goto label_2418e4;
    }
    ctx->pc = 0x2418DCu;
    {
        const bool branch_taken_0x2418dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2418E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418DCu;
        // 0x2418e0: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2418dc) {
            ctx->pc = 0x241928u;
            goto label_241928;
        }
    }
    ctx->pc = 0x2418E4u;
label_2418e4:
    // 0x2418e4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2418e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2418e8:
    // 0x2418e8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2418e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2418ec:
    // 0x2418ec: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2418ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2418f0:
    // 0x2418f0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2418f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2418f4:
    // 0x2418f4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2418f4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2418f8:
    // 0x2418f8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2418f8u;
    // VWAITQ (Q already resolved in this runtime)
label_2418fc:
    // 0x2418fc: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2418fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_241900:
    // 0x241900: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x241900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_241904:
    // 0x241904: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x241904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_241908:
    // 0x241908: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x241908u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_24190c:
    // 0x24190c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x24190cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_241910:
    // 0x241910: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x241910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_241914:
    // 0x241914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241918:
    // 0x241918: 0xc0b1548  jal         func_2C5520
label_24191c:
    if (ctx->pc == 0x24191Cu) {
        ctx->pc = 0x24191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241918u;
        // 0x24191c: 0x460c2b02  mul.s       $f12, $f5, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x241920u;
        goto label_241920;
    }
    ctx->pc = 0x241918u;
    SET_GPR_U32(ctx, 31, 0x241920u);
    ctx->pc = 0x24191Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241918u;
    // 0x24191c: 0x460c2b02  mul.s       $f12, $f5, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5520u, 0x241918u, 0x241920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241920u;
label_241920:
    // 0x241920: 0x10000004  b           . + 4 + (0x4 << 2)
label_241924:
    if (ctx->pc == 0x241924u) {
        ctx->pc = 0x241924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241920u;
        // 0x241924: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241928u;
        goto label_241928;
    }
    ctx->pc = 0x241920u;
    {
        const bool branch_taken_0x241920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241920u;
        // 0x241924: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241920) {
            ctx->pc = 0x241934u;
            goto label_241934;
        }
    }
    ctx->pc = 0x241928u;
label_241928:
    // 0x241928: 0xc0b1488  jal         func_2C5220
label_24192c:
    if (ctx->pc == 0x24192Cu) {
        ctx->pc = 0x24192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241928u;
        // 0x24192c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241930u;
        goto label_241930;
    }
    ctx->pc = 0x241928u;
    SET_GPR_U32(ctx, 31, 0x241930u);
    ctx->pc = 0x24192Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241928u;
    // 0x24192c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x241928u, 0x241930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241930u;
label_241930:
    // 0x241930: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x241930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241934:
    // 0x241934: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x241934u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_241938:
    // 0x241938: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x241938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_24193c:
    // 0x24193c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x24193cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_241940:
    // 0x241940: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x241940u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_241944:
    // 0x241944: 0x24844f20  addiu       $a0, $a0, 0x4F20
    ctx->pc = 0x241944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
label_241948:
    // 0x241948: 0x24a552d8  addiu       $a1, $a1, 0x52D8
    ctx->pc = 0x241948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21208));
label_24194c:
    // 0x24194c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24194cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241950:
    // 0x241950: 0xc0b0a1c  jal         func_2C2870
label_241954:
    if (ctx->pc == 0x241954u) {
        ctx->pc = 0x241954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241950u;
        // 0x241954: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241958u;
        goto label_241958;
    }
    ctx->pc = 0x241950u;
    SET_GPR_U32(ctx, 31, 0x241958u);
    ctx->pc = 0x241954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241950u;
    // 0x241954: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2870u, 0x241950u, 0x241958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241958u;
label_241958:
    // 0x241958: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_24195c:
    if (ctx->pc == 0x24195Cu) {
        ctx->pc = 0x24195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241958u;
        // 0x24195c: 0x8e22038c  lw          $v0, 0x38C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241960u;
        goto label_241960;
    }
    ctx->pc = 0x241958u;
    {
        const bool branch_taken_0x241958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241958) {
            ctx->pc = 0x24195Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241958u;
            // 0x24195c: 0x8e22038c  lw          $v0, 0x38C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24196Cu;
            goto label_24196c;
        }
    }
    ctx->pc = 0x241960u;
label_241960:
    // 0x241960: 0xc0b0ef2  jal         func_2C3BC8
label_241964:
    if (ctx->pc == 0x241964u) {
        ctx->pc = 0x241964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241960u;
        // 0x241964: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241968u;
        goto label_241968;
    }
    ctx->pc = 0x241960u;
    SET_GPR_U32(ctx, 31, 0x241968u);
    ctx->pc = 0x241964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241960u;
    // 0x241964: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3BC8u, 0x241960u, 0x241968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241968u;
label_241968:
    // 0x241968: 0x8e22038c  lw          $v0, 0x38C($s1)
    ctx->pc = 0x241968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
label_24196c:
    // 0x24196c: 0xac511068  sw          $s1, 0x1068($v0)
    ctx->pc = 0x24196cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4200), GPR_U32(ctx, 17));
label_241970:
    // 0x241970: 0x8e23038c  lw          $v1, 0x38C($s1)
    ctx->pc = 0x241970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
label_241974:
    // 0x241974: 0x906200c1  lbu         $v0, 0xC1($v1)
    ctx->pc = 0x241974u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 193)));
label_241978:
    // 0x241978: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x241978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_24197c:
    // 0x24197c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_241980:
    if (ctx->pc == 0x241980u) {
        ctx->pc = 0x241980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24197Cu;
        // 0x241980: 0x8e24038c  lw          $a0, 0x38C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241984u;
        goto label_241984;
    }
    ctx->pc = 0x24197Cu;
    {
        const bool branch_taken_0x24197c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24197c) {
            ctx->pc = 0x241980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24197Cu;
            // 0x241980: 0x8e24038c  lw          $a0, 0x38C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2419B8u;
            goto label_2419b8;
        }
    }
    ctx->pc = 0x241984u;
label_241984:
    // 0x241984: 0xc46000d0  lwc1        $f0, 0xD0($v1)
    ctx->pc = 0x241984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_241988:
    // 0x241988: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x241988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
label_24198c:
    // 0x24198c: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x24198cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_241990:
    // 0x241990: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x241990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_241994:
    // 0x241994: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x241994u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
label_241998:
    // 0x241998: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x241998u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24199c:
    // 0x24199c: 0x0  nop
    ctx->pc = 0x24199cu;
    // NOP
label_2419a0:
    // 0x2419a0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_2419a4:
    if (ctx->pc == 0x2419A4u) {
        ctx->pc = 0x2419A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419A0u;
        // 0x2419a4: 0x8e24038c  lw          $a0, 0x38C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2419A8u;
        goto label_2419a8;
    }
    ctx->pc = 0x2419A0u;
    {
        const bool branch_taken_0x2419a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2419a0) {
            ctx->pc = 0x2419A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2419A0u;
            // 0x2419a4: 0x8e24038c  lw          $a0, 0x38C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2419B8u;
            goto label_2419b8;
        }
    }
    ctx->pc = 0x2419A8u;
label_2419a8:
    // 0x2419a8: 0xc069af6  jal         func_1A6BD8
label_2419ac:
    if (ctx->pc == 0x2419ACu) {
        ctx->pc = 0x2419ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419A8u;
        // 0x2419ac: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2419B0u;
        goto label_2419b0;
    }
    ctx->pc = 0x2419A8u;
    SET_GPR_U32(ctx, 31, 0x2419B0u);
    ctx->pc = 0x2419ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2419A8u;
    // 0x2419ac: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BD8u, 0x2419A8u, 0x2419B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2419B0u;
label_2419b0:
    // 0x2419b0: 0x10000009  b           . + 4 + (0x9 << 2)
label_2419b4:
    if (ctx->pc == 0x2419B4u) {
        ctx->pc = 0x2419B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419B0u;
        // 0x2419b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2419B8u;
        goto label_2419b8;
    }
    ctx->pc = 0x2419B0u;
    {
        const bool branch_taken_0x2419b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2419B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419B0u;
        // 0x2419b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2419b0) {
            ctx->pc = 0x2419D8u;
            goto label_2419d8;
        }
    }
    ctx->pc = 0x2419B8u;
label_2419b8:
    // 0x2419b8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2419b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2419bc:
    // 0x2419bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2419bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2419c0:
    // 0x2419c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2419c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2419c4:
    // 0x2419c4: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x2419c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_2419c8:
    // 0x2419c8: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x2419c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_2419cc:
    // 0x2419cc: 0x40f809  jalr        $v0
label_2419d0:
    if (ctx->pc == 0x2419D0u) {
        ctx->pc = 0x2419D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419CCu;
        // 0x2419d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2419D4u;
        goto label_2419d4;
    }
    ctx->pc = 0x2419CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2419D4u);
        ctx->pc = 0x2419D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419CCu;
        // 0x2419d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2419CCu, 0x2419D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2419D4u;
label_2419d4:
    // 0x2419d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2419d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2419d8:
    // 0x2419d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2419d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2419dc:
    // 0x2419dc: 0xc08fed2  jal         func_23FB48
label_2419e0:
    if (ctx->pc == 0x2419E0u) {
        ctx->pc = 0x2419E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419DCu;
        // 0x2419e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2419E4u;
        goto label_2419e4;
    }
    ctx->pc = 0x2419DCu;
    SET_GPR_U32(ctx, 31, 0x2419E4u);
    ctx->pc = 0x2419E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2419DCu;
    // 0x2419e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2419DCu, 0x2419E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2419E4u;
label_2419e4:
    // 0x2419e4: 0x10000005  b           . + 4 + (0x5 << 2)
label_2419e8:
    if (ctx->pc == 0x2419E8u) {
        ctx->pc = 0x2419E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419E4u;
        // 0x2419e8: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2419ECu;
        goto label_2419ec;
    }
    ctx->pc = 0x2419E4u;
    {
        const bool branch_taken_0x2419e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2419E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419E4u;
        // 0x2419e8: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2419e4) {
            ctx->pc = 0x2419FCu;
            goto label_2419fc;
        }
    }
    ctx->pc = 0x2419ECu;
label_2419ec:
    // 0x2419ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2419ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2419f0:
    // 0x2419f0: 0xc08fed2  jal         func_23FB48
label_2419f4:
    if (ctx->pc == 0x2419F4u) {
        ctx->pc = 0x2419F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419F0u;
        // 0x2419f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2419F8u;
        goto label_2419f8;
    }
    ctx->pc = 0x2419F0u;
    SET_GPR_U32(ctx, 31, 0x2419F8u);
    ctx->pc = 0x2419F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2419F0u;
    // 0x2419f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2419F0u, 0x2419F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2419F8u;
label_2419f8:
    // 0x2419f8: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x2419f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2419fc:
    // 0x2419fc: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x2419fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_241a00:
    // 0x241a00: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x241a00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_241a04:
    // 0x241a04: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x241a04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_241a08:
    // 0x241a08: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x241a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_241a0c:
    // 0x241a0c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x241a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_241a10:
    // 0x241a10: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x241a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_241a14:
    // 0x241a14: 0x3e00008  jr          $ra
label_241a18:
    if (ctx->pc == 0x241A18u) {
        ctx->pc = 0x241A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A14u;
        // 0x241a18: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241A1Cu;
        goto label_241a1c;
    }
    ctx->pc = 0x241A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A14u;
        // 0x241a18: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241A1Cu;
label_241a1c:
    // 0x241a1c: 0x0  nop
    ctx->pc = 0x241a1cu;
    // NOP
    ctx->pc = 0x241a20u;
}
