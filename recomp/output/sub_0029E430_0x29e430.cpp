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

// Function: sub_0029E430
// Address: 0x29e430 - 0x29e988
void sub_0029E430_0x29e430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E430_0x29e430");
#endif

    switch (ctx->pc) {
        case 0x29e430u: goto label_29e430;
        case 0x29e434u: goto label_29e434;
        case 0x29e438u: goto label_29e438;
        case 0x29e43cu: goto label_29e43c;
        case 0x29e440u: goto label_29e440;
        case 0x29e444u: goto label_29e444;
        case 0x29e448u: goto label_29e448;
        case 0x29e44cu: goto label_29e44c;
        case 0x29e450u: goto label_29e450;
        case 0x29e454u: goto label_29e454;
        case 0x29e458u: goto label_29e458;
        case 0x29e45cu: goto label_29e45c;
        case 0x29e460u: goto label_29e460;
        case 0x29e464u: goto label_29e464;
        case 0x29e468u: goto label_29e468;
        case 0x29e46cu: goto label_29e46c;
        case 0x29e470u: goto label_29e470;
        case 0x29e474u: goto label_29e474;
        case 0x29e478u: goto label_29e478;
        case 0x29e47cu: goto label_29e47c;
        case 0x29e480u: goto label_29e480;
        case 0x29e484u: goto label_29e484;
        case 0x29e488u: goto label_29e488;
        case 0x29e48cu: goto label_29e48c;
        case 0x29e490u: goto label_29e490;
        case 0x29e494u: goto label_29e494;
        case 0x29e498u: goto label_29e498;
        case 0x29e49cu: goto label_29e49c;
        case 0x29e4a0u: goto label_29e4a0;
        case 0x29e4a4u: goto label_29e4a4;
        case 0x29e4a8u: goto label_29e4a8;
        case 0x29e4acu: goto label_29e4ac;
        case 0x29e4b0u: goto label_29e4b0;
        case 0x29e4b4u: goto label_29e4b4;
        case 0x29e4b8u: goto label_29e4b8;
        case 0x29e4bcu: goto label_29e4bc;
        case 0x29e4c0u: goto label_29e4c0;
        case 0x29e4c4u: goto label_29e4c4;
        case 0x29e4c8u: goto label_29e4c8;
        case 0x29e4ccu: goto label_29e4cc;
        case 0x29e4d0u: goto label_29e4d0;
        case 0x29e4d4u: goto label_29e4d4;
        case 0x29e4d8u: goto label_29e4d8;
        case 0x29e4dcu: goto label_29e4dc;
        case 0x29e4e0u: goto label_29e4e0;
        case 0x29e4e4u: goto label_29e4e4;
        case 0x29e4e8u: goto label_29e4e8;
        case 0x29e4ecu: goto label_29e4ec;
        case 0x29e4f0u: goto label_29e4f0;
        case 0x29e4f4u: goto label_29e4f4;
        case 0x29e4f8u: goto label_29e4f8;
        case 0x29e4fcu: goto label_29e4fc;
        case 0x29e500u: goto label_29e500;
        case 0x29e504u: goto label_29e504;
        case 0x29e508u: goto label_29e508;
        case 0x29e50cu: goto label_29e50c;
        case 0x29e510u: goto label_29e510;
        case 0x29e514u: goto label_29e514;
        case 0x29e518u: goto label_29e518;
        case 0x29e51cu: goto label_29e51c;
        case 0x29e520u: goto label_29e520;
        case 0x29e524u: goto label_29e524;
        case 0x29e528u: goto label_29e528;
        case 0x29e52cu: goto label_29e52c;
        case 0x29e530u: goto label_29e530;
        case 0x29e534u: goto label_29e534;
        case 0x29e538u: goto label_29e538;
        case 0x29e53cu: goto label_29e53c;
        case 0x29e540u: goto label_29e540;
        case 0x29e544u: goto label_29e544;
        case 0x29e548u: goto label_29e548;
        case 0x29e54cu: goto label_29e54c;
        case 0x29e550u: goto label_29e550;
        case 0x29e554u: goto label_29e554;
        case 0x29e558u: goto label_29e558;
        case 0x29e55cu: goto label_29e55c;
        case 0x29e560u: goto label_29e560;
        case 0x29e564u: goto label_29e564;
        case 0x29e568u: goto label_29e568;
        case 0x29e56cu: goto label_29e56c;
        case 0x29e570u: goto label_29e570;
        case 0x29e574u: goto label_29e574;
        case 0x29e578u: goto label_29e578;
        case 0x29e57cu: goto label_29e57c;
        case 0x29e580u: goto label_29e580;
        case 0x29e584u: goto label_29e584;
        case 0x29e588u: goto label_29e588;
        case 0x29e58cu: goto label_29e58c;
        case 0x29e590u: goto label_29e590;
        case 0x29e594u: goto label_29e594;
        case 0x29e598u: goto label_29e598;
        case 0x29e59cu: goto label_29e59c;
        case 0x29e5a0u: goto label_29e5a0;
        case 0x29e5a4u: goto label_29e5a4;
        case 0x29e5a8u: goto label_29e5a8;
        case 0x29e5acu: goto label_29e5ac;
        case 0x29e5b0u: goto label_29e5b0;
        case 0x29e5b4u: goto label_29e5b4;
        case 0x29e5b8u: goto label_29e5b8;
        case 0x29e5bcu: goto label_29e5bc;
        case 0x29e5c0u: goto label_29e5c0;
        case 0x29e5c4u: goto label_29e5c4;
        case 0x29e5c8u: goto label_29e5c8;
        case 0x29e5ccu: goto label_29e5cc;
        case 0x29e5d0u: goto label_29e5d0;
        case 0x29e5d4u: goto label_29e5d4;
        case 0x29e5d8u: goto label_29e5d8;
        case 0x29e5dcu: goto label_29e5dc;
        case 0x29e5e0u: goto label_29e5e0;
        case 0x29e5e4u: goto label_29e5e4;
        case 0x29e5e8u: goto label_29e5e8;
        case 0x29e5ecu: goto label_29e5ec;
        case 0x29e5f0u: goto label_29e5f0;
        case 0x29e5f4u: goto label_29e5f4;
        case 0x29e5f8u: goto label_29e5f8;
        case 0x29e5fcu: goto label_29e5fc;
        case 0x29e600u: goto label_29e600;
        case 0x29e604u: goto label_29e604;
        case 0x29e608u: goto label_29e608;
        case 0x29e60cu: goto label_29e60c;
        case 0x29e610u: goto label_29e610;
        case 0x29e614u: goto label_29e614;
        case 0x29e618u: goto label_29e618;
        case 0x29e61cu: goto label_29e61c;
        case 0x29e620u: goto label_29e620;
        case 0x29e624u: goto label_29e624;
        case 0x29e628u: goto label_29e628;
        case 0x29e62cu: goto label_29e62c;
        case 0x29e630u: goto label_29e630;
        case 0x29e634u: goto label_29e634;
        case 0x29e638u: goto label_29e638;
        case 0x29e63cu: goto label_29e63c;
        case 0x29e640u: goto label_29e640;
        case 0x29e644u: goto label_29e644;
        case 0x29e648u: goto label_29e648;
        case 0x29e64cu: goto label_29e64c;
        case 0x29e650u: goto label_29e650;
        case 0x29e654u: goto label_29e654;
        case 0x29e658u: goto label_29e658;
        case 0x29e65cu: goto label_29e65c;
        case 0x29e660u: goto label_29e660;
        case 0x29e664u: goto label_29e664;
        case 0x29e668u: goto label_29e668;
        case 0x29e66cu: goto label_29e66c;
        case 0x29e670u: goto label_29e670;
        case 0x29e674u: goto label_29e674;
        case 0x29e678u: goto label_29e678;
        case 0x29e67cu: goto label_29e67c;
        case 0x29e680u: goto label_29e680;
        case 0x29e684u: goto label_29e684;
        case 0x29e688u: goto label_29e688;
        case 0x29e68cu: goto label_29e68c;
        case 0x29e690u: goto label_29e690;
        case 0x29e694u: goto label_29e694;
        case 0x29e698u: goto label_29e698;
        case 0x29e69cu: goto label_29e69c;
        case 0x29e6a0u: goto label_29e6a0;
        case 0x29e6a4u: goto label_29e6a4;
        case 0x29e6a8u: goto label_29e6a8;
        case 0x29e6acu: goto label_29e6ac;
        case 0x29e6b0u: goto label_29e6b0;
        case 0x29e6b4u: goto label_29e6b4;
        case 0x29e6b8u: goto label_29e6b8;
        case 0x29e6bcu: goto label_29e6bc;
        case 0x29e6c0u: goto label_29e6c0;
        case 0x29e6c4u: goto label_29e6c4;
        case 0x29e6c8u: goto label_29e6c8;
        case 0x29e6ccu: goto label_29e6cc;
        case 0x29e6d0u: goto label_29e6d0;
        case 0x29e6d4u: goto label_29e6d4;
        case 0x29e6d8u: goto label_29e6d8;
        case 0x29e6dcu: goto label_29e6dc;
        case 0x29e6e0u: goto label_29e6e0;
        case 0x29e6e4u: goto label_29e6e4;
        case 0x29e6e8u: goto label_29e6e8;
        case 0x29e6ecu: goto label_29e6ec;
        case 0x29e6f0u: goto label_29e6f0;
        case 0x29e6f4u: goto label_29e6f4;
        case 0x29e6f8u: goto label_29e6f8;
        case 0x29e6fcu: goto label_29e6fc;
        case 0x29e700u: goto label_29e700;
        case 0x29e704u: goto label_29e704;
        case 0x29e708u: goto label_29e708;
        case 0x29e70cu: goto label_29e70c;
        case 0x29e710u: goto label_29e710;
        case 0x29e714u: goto label_29e714;
        case 0x29e718u: goto label_29e718;
        case 0x29e71cu: goto label_29e71c;
        case 0x29e720u: goto label_29e720;
        case 0x29e724u: goto label_29e724;
        case 0x29e728u: goto label_29e728;
        case 0x29e72cu: goto label_29e72c;
        case 0x29e730u: goto label_29e730;
        case 0x29e734u: goto label_29e734;
        case 0x29e738u: goto label_29e738;
        case 0x29e73cu: goto label_29e73c;
        case 0x29e740u: goto label_29e740;
        case 0x29e744u: goto label_29e744;
        case 0x29e748u: goto label_29e748;
        case 0x29e74cu: goto label_29e74c;
        case 0x29e750u: goto label_29e750;
        case 0x29e754u: goto label_29e754;
        case 0x29e758u: goto label_29e758;
        case 0x29e75cu: goto label_29e75c;
        case 0x29e760u: goto label_29e760;
        case 0x29e764u: goto label_29e764;
        case 0x29e768u: goto label_29e768;
        case 0x29e76cu: goto label_29e76c;
        case 0x29e770u: goto label_29e770;
        case 0x29e774u: goto label_29e774;
        case 0x29e778u: goto label_29e778;
        case 0x29e77cu: goto label_29e77c;
        case 0x29e780u: goto label_29e780;
        case 0x29e784u: goto label_29e784;
        case 0x29e788u: goto label_29e788;
        case 0x29e78cu: goto label_29e78c;
        case 0x29e790u: goto label_29e790;
        case 0x29e794u: goto label_29e794;
        case 0x29e798u: goto label_29e798;
        case 0x29e79cu: goto label_29e79c;
        case 0x29e7a0u: goto label_29e7a0;
        case 0x29e7a4u: goto label_29e7a4;
        case 0x29e7a8u: goto label_29e7a8;
        case 0x29e7acu: goto label_29e7ac;
        case 0x29e7b0u: goto label_29e7b0;
        case 0x29e7b4u: goto label_29e7b4;
        case 0x29e7b8u: goto label_29e7b8;
        case 0x29e7bcu: goto label_29e7bc;
        case 0x29e7c0u: goto label_29e7c0;
        case 0x29e7c4u: goto label_29e7c4;
        case 0x29e7c8u: goto label_29e7c8;
        case 0x29e7ccu: goto label_29e7cc;
        case 0x29e7d0u: goto label_29e7d0;
        case 0x29e7d4u: goto label_29e7d4;
        case 0x29e7d8u: goto label_29e7d8;
        case 0x29e7dcu: goto label_29e7dc;
        case 0x29e7e0u: goto label_29e7e0;
        case 0x29e7e4u: goto label_29e7e4;
        case 0x29e7e8u: goto label_29e7e8;
        case 0x29e7ecu: goto label_29e7ec;
        case 0x29e7f0u: goto label_29e7f0;
        case 0x29e7f4u: goto label_29e7f4;
        case 0x29e7f8u: goto label_29e7f8;
        case 0x29e7fcu: goto label_29e7fc;
        case 0x29e800u: goto label_29e800;
        case 0x29e804u: goto label_29e804;
        case 0x29e808u: goto label_29e808;
        case 0x29e80cu: goto label_29e80c;
        case 0x29e810u: goto label_29e810;
        case 0x29e814u: goto label_29e814;
        case 0x29e818u: goto label_29e818;
        case 0x29e81cu: goto label_29e81c;
        case 0x29e820u: goto label_29e820;
        case 0x29e824u: goto label_29e824;
        case 0x29e828u: goto label_29e828;
        case 0x29e82cu: goto label_29e82c;
        case 0x29e830u: goto label_29e830;
        case 0x29e834u: goto label_29e834;
        case 0x29e838u: goto label_29e838;
        case 0x29e83cu: goto label_29e83c;
        case 0x29e840u: goto label_29e840;
        case 0x29e844u: goto label_29e844;
        case 0x29e848u: goto label_29e848;
        case 0x29e84cu: goto label_29e84c;
        case 0x29e850u: goto label_29e850;
        case 0x29e854u: goto label_29e854;
        case 0x29e858u: goto label_29e858;
        case 0x29e85cu: goto label_29e85c;
        case 0x29e860u: goto label_29e860;
        case 0x29e864u: goto label_29e864;
        case 0x29e868u: goto label_29e868;
        case 0x29e86cu: goto label_29e86c;
        case 0x29e870u: goto label_29e870;
        case 0x29e874u: goto label_29e874;
        case 0x29e878u: goto label_29e878;
        case 0x29e87cu: goto label_29e87c;
        case 0x29e880u: goto label_29e880;
        case 0x29e884u: goto label_29e884;
        case 0x29e888u: goto label_29e888;
        case 0x29e88cu: goto label_29e88c;
        case 0x29e890u: goto label_29e890;
        case 0x29e894u: goto label_29e894;
        case 0x29e898u: goto label_29e898;
        case 0x29e89cu: goto label_29e89c;
        case 0x29e8a0u: goto label_29e8a0;
        case 0x29e8a4u: goto label_29e8a4;
        case 0x29e8a8u: goto label_29e8a8;
        case 0x29e8acu: goto label_29e8ac;
        case 0x29e8b0u: goto label_29e8b0;
        case 0x29e8b4u: goto label_29e8b4;
        case 0x29e8b8u: goto label_29e8b8;
        case 0x29e8bcu: goto label_29e8bc;
        case 0x29e8c0u: goto label_29e8c0;
        case 0x29e8c4u: goto label_29e8c4;
        case 0x29e8c8u: goto label_29e8c8;
        case 0x29e8ccu: goto label_29e8cc;
        case 0x29e8d0u: goto label_29e8d0;
        case 0x29e8d4u: goto label_29e8d4;
        case 0x29e8d8u: goto label_29e8d8;
        case 0x29e8dcu: goto label_29e8dc;
        case 0x29e8e0u: goto label_29e8e0;
        case 0x29e8e4u: goto label_29e8e4;
        case 0x29e8e8u: goto label_29e8e8;
        case 0x29e8ecu: goto label_29e8ec;
        case 0x29e8f0u: goto label_29e8f0;
        case 0x29e8f4u: goto label_29e8f4;
        case 0x29e8f8u: goto label_29e8f8;
        case 0x29e8fcu: goto label_29e8fc;
        case 0x29e900u: goto label_29e900;
        case 0x29e904u: goto label_29e904;
        case 0x29e908u: goto label_29e908;
        case 0x29e90cu: goto label_29e90c;
        case 0x29e910u: goto label_29e910;
        case 0x29e914u: goto label_29e914;
        case 0x29e918u: goto label_29e918;
        case 0x29e91cu: goto label_29e91c;
        case 0x29e920u: goto label_29e920;
        case 0x29e924u: goto label_29e924;
        case 0x29e928u: goto label_29e928;
        case 0x29e92cu: goto label_29e92c;
        case 0x29e930u: goto label_29e930;
        case 0x29e934u: goto label_29e934;
        case 0x29e938u: goto label_29e938;
        case 0x29e93cu: goto label_29e93c;
        case 0x29e940u: goto label_29e940;
        case 0x29e944u: goto label_29e944;
        case 0x29e948u: goto label_29e948;
        case 0x29e94cu: goto label_29e94c;
        case 0x29e950u: goto label_29e950;
        case 0x29e954u: goto label_29e954;
        case 0x29e958u: goto label_29e958;
        case 0x29e95cu: goto label_29e95c;
        case 0x29e960u: goto label_29e960;
        case 0x29e964u: goto label_29e964;
        case 0x29e968u: goto label_29e968;
        case 0x29e96cu: goto label_29e96c;
        case 0x29e970u: goto label_29e970;
        case 0x29e974u: goto label_29e974;
        case 0x29e978u: goto label_29e978;
        case 0x29e97cu: goto label_29e97c;
        case 0x29e980u: goto label_29e980;
        case 0x29e984u: goto label_29e984;
        default: break;
    }

    ctx->pc = 0x29e430u;

label_29e430:
    // 0x29e430: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29e430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_29e434:
    // 0x29e434: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x29e434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_29e438:
    // 0x29e438: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29e438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_29e43c:
    // 0x29e43c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x29e43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_29e440:
    // 0x29e440: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29e440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_29e444:
    // 0x29e444: 0x2451c400  addiu       $s1, $v0, -0x3C00
    ctx->pc = 0x29e444u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951936));
label_29e448:
    // 0x29e448: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x29e448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_29e44c:
    // 0x29e44c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29e44cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29e450:
    // 0x29e450: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x29e450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_29e454:
    // 0x29e454: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x29e454u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29e458:
    // 0x29e458: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x29e458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_29e45c:
    // 0x29e45c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x29e45cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29e460:
    // 0x29e460: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x29e460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_29e464:
    // 0x29e464: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x29e464u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29e468:
    // 0x29e468: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x29e468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_29e46c:
    // 0x29e46c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x29e46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_29e470:
    // 0x29e470: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x29e470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_29e474:
    // 0x29e474: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x29e474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_29e478:
    // 0x29e478: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x29e478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_29e47c:
    // 0x29e47c: 0xa0f809  jalr        $a1
label_29e480:
    if (ctx->pc == 0x29E480u) {
        ctx->pc = 0x29E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E47Cu;
        // 0x29e480: 0x26500238  addiu       $s0, $s2, 0x238 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E484u;
        goto label_29e484;
    }
    ctx->pc = 0x29E47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x29E484u);
        ctx->pc = 0x29E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E47Cu;
        // 0x29e480: 0x26500238  addiu       $s0, $s2, 0x238 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 568));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E47Cu, 0x29E484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29E484u;
label_29e484:
    // 0x29e484: 0xc0a78b0  jal         func_29E2C0
label_29e488:
    if (ctx->pc == 0x29E488u) {
        ctx->pc = 0x29E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E484u;
        // 0x29e488: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E48Cu;
        goto label_29e48c;
    }
    ctx->pc = 0x29E484u;
    SET_GPR_U32(ctx, 31, 0x29E48Cu);
    ctx->pc = 0x29E488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E484u;
    // 0x29e488: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E2C0u, 0x29E484u, 0x29E48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E48Cu;
label_29e48c:
    // 0x29e48c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29e490:
    // 0x29e490: 0xc0d73cc  jal         func_35CF30
label_29e494:
    if (ctx->pc == 0x29E494u) {
        ctx->pc = 0x29E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E490u;
        // 0x29e494: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E498u;
        goto label_29e498;
    }
    ctx->pc = 0x29E490u;
    SET_GPR_U32(ctx, 31, 0x29E498u);
    ctx->pc = 0x29E494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E490u;
    // 0x29e494: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29E490u, 0x29E498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E498u;
label_29e498:
    // 0x29e498: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29e49c:
    // 0x29e49c: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
label_29e4a0:
    if (ctx->pc == 0x29E4A0u) {
        ctx->pc = 0x29E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E49Cu;
        // 0x29e4a0: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E4A4u;
        goto label_29e4a4;
    }
    ctx->pc = 0x29E49Cu;
    {
        const bool branch_taken_0x29e49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E49Cu;
        // 0x29e4a0: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e49c) {
            ctx->pc = 0x29E624u;
            goto label_29e624;
        }
    }
    ctx->pc = 0x29E4A4u;
label_29e4a4:
    // 0x29e4a4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x29e4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_29e4a8:
    // 0x29e4a8: 0x24532508  addiu       $s3, $v0, 0x2508
    ctx->pc = 0x29e4a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 9480));
label_29e4ac:
    // 0x29e4ac: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x29e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_29e4b0:
    // 0x29e4b0: 0x8e710090  lw          $s1, 0x90($s3)
    ctx->pc = 0x29e4b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_29e4b4:
    // 0x29e4b4: 0x24638f20  addiu       $v1, $v1, -0x70E0
    ctx->pc = 0x29e4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938400));
label_29e4b8:
    // 0x29e4b8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29e4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_29e4bc:
    // 0x29e4bc: 0x8e750094  lw          $s5, 0x94($s3)
    ctx->pc = 0x29e4bcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_29e4c0:
    // 0x29e4c0: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x29e4c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_29e4c4:
    // 0x29e4c4: 0x8e74008c  lw          $s4, 0x8C($s3)
    ctx->pc = 0x29e4c4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_29e4c8:
    // 0x29e4c8: 0x24a5c408  addiu       $a1, $a1, -0x3BF8
    ctx->pc = 0x29e4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951944));
label_29e4cc:
    // 0x29e4cc: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x29e4ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_29e4d0:
    // 0x29e4d0: 0xc0f0a8a  jal         func_3C2A28
label_29e4d4:
    if (ctx->pc == 0x29E4D4u) {
        ctx->pc = 0x29E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E4D0u;
        // 0x29e4d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E4D8u;
        goto label_29e4d8;
    }
    ctx->pc = 0x29E4D0u;
    SET_GPR_U32(ctx, 31, 0x29E4D8u);
    ctx->pc = 0x29E4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E4D0u;
    // 0x29e4d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x29E4D0u, 0x29E4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E4D8u;
label_29e4d8:
    // 0x29e4d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_29e4dc:
    if (ctx->pc == 0x29E4DCu) {
        ctx->pc = 0x29E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E4D8u;
        // 0x29e4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E4E0u;
        goto label_29e4e0;
    }
    ctx->pc = 0x29E4D8u;
    {
        const bool branch_taken_0x29e4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E4D8u;
        // 0x29e4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e4d8) {
            ctx->pc = 0x29E4F4u;
            goto label_29e4f4;
        }
    }
    ctx->pc = 0x29E4E0u;
label_29e4e0:
    // 0x29e4e0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29e4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_29e4e4:
    // 0x29e4e4: 0xc0f0a8a  jal         func_3C2A28
label_29e4e8:
    if (ctx->pc == 0x29E4E8u) {
        ctx->pc = 0x29E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E4E4u;
        // 0x29e4e8: 0x24a5c418  addiu       $a1, $a1, -0x3BE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E4ECu;
        goto label_29e4ec;
    }
    ctx->pc = 0x29E4E4u;
    SET_GPR_U32(ctx, 31, 0x29E4ECu);
    ctx->pc = 0x29E4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E4E4u;
    // 0x29e4e8: 0x24a5c418  addiu       $a1, $a1, -0x3BE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x29E4E4u, 0x29E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E4ECu;
label_29e4ec:
    // 0x29e4ec: 0x54400033  bnel        $v0, $zero, . + 4 + (0x33 << 2)
label_29e4f0:
    if (ctx->pc == 0x29E4F0u) {
        ctx->pc = 0x29E4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E4ECu;
        // 0x29e4f0: 0x3c100047  lui         $s0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E4F4u;
        goto label_29e4f4;
    }
    ctx->pc = 0x29E4ECu;
    {
        const bool branch_taken_0x29e4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e4ec) {
            ctx->pc = 0x29E4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E4ECu;
            // 0x29e4f0: 0x3c100047  lui         $s0, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E5BCu;
            goto label_29e5bc;
        }
    }
    ctx->pc = 0x29E4F4u;
label_29e4f4:
    // 0x29e4f4: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x29e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_29e4f8:
    // 0x29e4f8: 0x2911826  xor         $v1, $s4, $s1
    ctx->pc = 0x29e4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) ^ GPR_U64(ctx, 17));
label_29e4fc:
    // 0x29e4fc: 0x2222018  mult        $a0, $s1, $v0
    ctx->pc = 0x29e4fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_29e500:
    // 0x29e500: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x29e500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_29e504:
    // 0x29e504: 0x2c640001  sltiu       $a0, $v1, 0x1
    ctx->pc = 0x29e504u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_29e508:
    // 0x29e508: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29e508u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e50c:
    // 0x29e50c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29e510:
    // 0x29e510: 0x16a30005  bne         $s5, $v1, . + 4 + (0x5 << 2)
label_29e514:
    if (ctx->pc == 0x29E514u) {
        ctx->pc = 0x29E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E510u;
        // 0x29e514: 0x905100ec  lbu         $s1, 0xEC($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E518u;
        goto label_29e518;
    }
    ctx->pc = 0x29E510u;
    {
        const bool branch_taken_0x29e510 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x29E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E510u;
        // 0x29e514: 0x905100ec  lbu         $s1, 0xEC($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e510) {
            ctx->pc = 0x29E528u;
            goto label_29e528;
        }
    }
    ctx->pc = 0x29E518u;
label_29e518:
    // 0x29e518: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_29e51c:
    if (ctx->pc == 0x29E51Cu) {
        ctx->pc = 0x29E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E518u;
        // 0x29e51c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E520u;
        goto label_29e520;
    }
    ctx->pc = 0x29E518u;
    {
        const bool branch_taken_0x29e518 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E518u;
        // 0x29e51c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e518) {
            ctx->pc = 0x29E530u;
            goto label_29e530;
        }
    }
    ctx->pc = 0x29E520u;
label_29e520:
    // 0x29e520: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
label_29e524:
    if (ctx->pc == 0x29E524u) {
        ctx->pc = 0x29E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E520u;
        // 0x29e524: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E528u;
        goto label_29e528;
    }
    ctx->pc = 0x29E520u;
    {
        const bool branch_taken_0x29e520 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e520) {
            ctx->pc = 0x29E524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E520u;
            // 0x29e524: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E534u;
            goto label_29e534;
        }
    }
    ctx->pc = 0x29E528u;
label_29e528:
    // 0x29e528: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x29e528u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29e52c:
    // 0x29e52c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x29e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_29e530:
    // 0x29e530: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29e530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e534:
    // 0x29e534: 0x2455c428  addiu       $s5, $v0, -0x3BD8
    ctx->pc = 0x29e534u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951976));
label_29e538:
    // 0x29e538: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x29e538u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
label_29e53c:
    // 0x29e53c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x29e53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29e540:
    // 0x29e540: 0xc0d7424  jal         func_35D090
label_29e544:
    if (ctx->pc == 0x29E544u) {
        ctx->pc = 0x29E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E540u;
        // 0x29e544: 0x2614c438  addiu       $s4, $s0, -0x3BC8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E548u;
        goto label_29e548;
    }
    ctx->pc = 0x29E540u;
    SET_GPR_U32(ctx, 31, 0x29E548u);
    ctx->pc = 0x29E544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E540u;
    // 0x29e544: 0x2614c438  addiu       $s4, $s0, -0x3BC8 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29E540u, 0x29E548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E548u;
label_29e548:
    // 0x29e548: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29e548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e54c:
    // 0x29e54c: 0xc0a7ab0  jal         func_29EAC0
label_29e550:
    if (ctx->pc == 0x29E550u) {
        ctx->pc = 0x29E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E54Cu;
        // 0x29e550: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E554u;
        goto label_29e554;
    }
    ctx->pc = 0x29E54Cu;
    SET_GPR_U32(ctx, 31, 0x29E554u);
    ctx->pc = 0x29E550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E54Cu;
    // 0x29e550: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EAC0u, 0x29E54Cu, 0x29E554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E554u;
label_29e554:
    // 0x29e554: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29e554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e558:
    // 0x29e558: 0xa053006c  sb          $s3, 0x6C($v0)
    ctx->pc = 0x29e558u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 108), (uint8_t)GPR_U32(ctx, 19));
label_29e55c:
    // 0x29e55c: 0xc0d7412  jal         func_35D048
label_29e560:
    if (ctx->pc == 0x29E560u) {
        ctx->pc = 0x29E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E55Cu;
        // 0x29e560: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E564u;
        goto label_29e564;
    }
    ctx->pc = 0x29E55Cu;
    SET_GPR_U32(ctx, 31, 0x29E564u);
    ctx->pc = 0x29E560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E55Cu;
    // 0x29e560: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29E55Cu, 0x29E564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E564u;
label_29e564:
    // 0x29e564: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29e564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e568:
    // 0x29e568: 0xc0d7424  jal         func_35D090
label_29e56c:
    if (ctx->pc == 0x29E56Cu) {
        ctx->pc = 0x29E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E568u;
        // 0x29e56c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E570u;
        goto label_29e570;
    }
    ctx->pc = 0x29E568u;
    SET_GPR_U32(ctx, 31, 0x29E570u);
    ctx->pc = 0x29E56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E568u;
    // 0x29e56c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29E568u, 0x29E570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E570u;
label_29e570:
    // 0x29e570: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29e570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e574:
    // 0x29e574: 0xc0a7ab0  jal         func_29EAC0
label_29e578:
    if (ctx->pc == 0x29E578u) {
        ctx->pc = 0x29E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E574u;
        // 0x29e578: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E57Cu;
        goto label_29e57c;
    }
    ctx->pc = 0x29E574u;
    SET_GPR_U32(ctx, 31, 0x29E57Cu);
    ctx->pc = 0x29E578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E574u;
    // 0x29e578: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EAC0u, 0x29E574u, 0x29E57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E57Cu;
label_29e57c:
    // 0x29e57c: 0xa051006c  sb          $s1, 0x6C($v0)
    ctx->pc = 0x29e57cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 108), (uint8_t)GPR_U32(ctx, 17));
label_29e580:
    // 0x29e580: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29e580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e584:
    // 0x29e584: 0xc0d7412  jal         func_35D048
label_29e588:
    if (ctx->pc == 0x29E588u) {
        ctx->pc = 0x29E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E584u;
        // 0x29e588: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E58Cu;
        goto label_29e58c;
    }
    ctx->pc = 0x29E584u;
    SET_GPR_U32(ctx, 31, 0x29E58Cu);
    ctx->pc = 0x29E588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E584u;
    // 0x29e588: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29E584u, 0x29E58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E58Cu;
label_29e58c:
    // 0x29e58c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_29e590:
    if (ctx->pc == 0x29E590u) {
        ctx->pc = 0x29E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E58Cu;
        // 0x29e590: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E594u;
        goto label_29e594;
    }
    ctx->pc = 0x29E58Cu;
    {
        const bool branch_taken_0x29e58c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E58Cu;
        // 0x29e590: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e58c) {
            ctx->pc = 0x29E5A8u;
            goto label_29e5a8;
        }
    }
    ctx->pc = 0x29E594u;
label_29e594:
    // 0x29e594: 0xc0d7424  jal         func_35D090
label_29e598:
    if (ctx->pc == 0x29E598u) {
        ctx->pc = 0x29E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E594u;
        // 0x29e598: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E59Cu;
        goto label_29e59c;
    }
    ctx->pc = 0x29E594u;
    SET_GPR_U32(ctx, 31, 0x29E59Cu);
    ctx->pc = 0x29E598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E594u;
    // 0x29e598: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29E594u, 0x29E59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E59Cu;
label_29e59c:
    // 0x29e59c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29e59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29e5a0:
    // 0x29e5a0: 0x10000048  b           . + 4 + (0x48 << 2)
label_29e5a4:
    if (ctx->pc == 0x29E5A4u) {
        ctx->pc = 0x29E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5A0u;
        // 0x29e5a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E5A8u;
        goto label_29e5a8;
    }
    ctx->pc = 0x29E5A0u;
    {
        const bool branch_taken_0x29e5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5A0u;
        // 0x29e5a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e5a0) {
            ctx->pc = 0x29E6C4u;
            goto label_29e6c4;
        }
    }
    ctx->pc = 0x29E5A8u;
label_29e5a8:
    // 0x29e5a8: 0xc0d7424  jal         func_35D090
label_29e5ac:
    if (ctx->pc == 0x29E5ACu) {
        ctx->pc = 0x29E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5A8u;
        // 0x29e5ac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E5B0u;
        goto label_29e5b0;
    }
    ctx->pc = 0x29E5A8u;
    SET_GPR_U32(ctx, 31, 0x29E5B0u);
    ctx->pc = 0x29E5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E5A8u;
    // 0x29e5ac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29E5A8u, 0x29E5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E5B0u;
label_29e5b0:
    // 0x29e5b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29e5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29e5b4:
    // 0x29e5b4: 0x10000043  b           . + 4 + (0x43 << 2)
label_29e5b8:
    if (ctx->pc == 0x29E5B8u) {
        ctx->pc = 0x29E5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5B4u;
        // 0x29e5b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E5BCu;
        goto label_29e5bc;
    }
    ctx->pc = 0x29E5B4u;
    {
        const bool branch_taken_0x29e5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5B4u;
        // 0x29e5b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e5b4) {
            ctx->pc = 0x29E6C4u;
            goto label_29e6c4;
        }
    }
    ctx->pc = 0x29E5BCu;
label_29e5bc:
    // 0x29e5bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29e5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e5c0:
    // 0x29e5c0: 0x2610c428  addiu       $s0, $s0, -0x3BD8
    ctx->pc = 0x29e5c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951976));
label_29e5c4:
    // 0x29e5c4: 0x3c110047  lui         $s1, 0x47
    ctx->pc = 0x29e5c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)71 << 16));
label_29e5c8:
    // 0x29e5c8: 0xc0d7424  jal         func_35D090
label_29e5cc:
    if (ctx->pc == 0x29E5CCu) {
        ctx->pc = 0x29E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5C8u;
        // 0x29e5cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E5D0u;
        goto label_29e5d0;
    }
    ctx->pc = 0x29E5C8u;
    SET_GPR_U32(ctx, 31, 0x29E5D0u);
    ctx->pc = 0x29E5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E5C8u;
    // 0x29e5cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29E5C8u, 0x29E5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E5D0u;
label_29e5d0:
    // 0x29e5d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29e5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e5d4:
    // 0x29e5d4: 0xc0a7ab0  jal         func_29EAC0
label_29e5d8:
    if (ctx->pc == 0x29E5D8u) {
        ctx->pc = 0x29E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5D4u;
        // 0x29e5d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E5DCu;
        goto label_29e5dc;
    }
    ctx->pc = 0x29E5D4u;
    SET_GPR_U32(ctx, 31, 0x29E5DCu);
    ctx->pc = 0x29E5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E5D4u;
    // 0x29e5d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EAC0u, 0x29E5D4u, 0x29E5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E5DCu;
label_29e5dc:
    // 0x29e5dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29e5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29e5e0:
    // 0x29e5e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29e5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e5e4:
    // 0x29e5e4: 0xa043006c  sb          $v1, 0x6C($v0)
    ctx->pc = 0x29e5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 108), (uint8_t)GPR_U32(ctx, 3));
label_29e5e8:
    // 0x29e5e8: 0xc0d7412  jal         func_35D048
label_29e5ec:
    if (ctx->pc == 0x29E5ECu) {
        ctx->pc = 0x29E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5E8u;
        // 0x29e5ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E5F0u;
        goto label_29e5f0;
    }
    ctx->pc = 0x29E5E8u;
    SET_GPR_U32(ctx, 31, 0x29E5F0u);
    ctx->pc = 0x29E5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E5E8u;
    // 0x29e5ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29E5E8u, 0x29E5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E5F0u;
label_29e5f0:
    // 0x29e5f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29e5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e5f4:
    // 0x29e5f4: 0xc0d7424  jal         func_35D090
label_29e5f8:
    if (ctx->pc == 0x29E5F8u) {
        ctx->pc = 0x29E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5F4u;
        // 0x29e5f8: 0x2625c438  addiu       $a1, $s1, -0x3BC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294951992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E5FCu;
        goto label_29e5fc;
    }
    ctx->pc = 0x29E5F4u;
    SET_GPR_U32(ctx, 31, 0x29E5FCu);
    ctx->pc = 0x29E5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E5F4u;
    // 0x29e5f8: 0x2625c438  addiu       $a1, $s1, -0x3BC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294951992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29E5F4u, 0x29E5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E5FCu;
label_29e5fc:
    // 0x29e5fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29e5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e600:
    // 0x29e600: 0xc0a7ab0  jal         func_29EAC0
label_29e604:
    if (ctx->pc == 0x29E604u) {
        ctx->pc = 0x29E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E600u;
        // 0x29e604: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E608u;
        goto label_29e608;
    }
    ctx->pc = 0x29E600u;
    SET_GPR_U32(ctx, 31, 0x29E608u);
    ctx->pc = 0x29E604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E600u;
    // 0x29e604: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EAC0u, 0x29E600u, 0x29E608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E608u;
label_29e608:
    // 0x29e608: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29e608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e60c:
    // 0x29e60c: 0xa040006c  sb          $zero, 0x6C($v0)
    ctx->pc = 0x29e60cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 108), (uint8_t)GPR_U32(ctx, 0));
label_29e610:
    // 0x29e610: 0xc0d7412  jal         func_35D048
label_29e614:
    if (ctx->pc == 0x29E614u) {
        ctx->pc = 0x29E614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E610u;
        // 0x29e614: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E618u;
        goto label_29e618;
    }
    ctx->pc = 0x29E610u;
    SET_GPR_U32(ctx, 31, 0x29E618u);
    ctx->pc = 0x29E614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E610u;
    // 0x29e614: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29E610u, 0x29E618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E618u;
label_29e618:
    // 0x29e618: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29e618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e61c:
    // 0x29e61c: 0x10000025  b           . + 4 + (0x25 << 2)
label_29e620:
    if (ctx->pc == 0x29E620u) {
        ctx->pc = 0x29E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E61Cu;
        // 0x29e620: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E624u;
        goto label_29e624;
    }
    ctx->pc = 0x29E61Cu;
    {
        const bool branch_taken_0x29e61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E61Cu;
        // 0x29e620: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e61c) {
            ctx->pc = 0x29E6B4u;
            goto label_29e6b4;
        }
    }
    ctx->pc = 0x29E624u;
label_29e624:
    // 0x29e624: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x29e624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_29e628:
    // 0x29e628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29e62c:
    // 0x29e62c: 0x2450c450  addiu       $s0, $v0, -0x3BB0
    ctx->pc = 0x29e62cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952016));
label_29e630:
    // 0x29e630: 0xc0d73cc  jal         func_35CF30
label_29e634:
    if (ctx->pc == 0x29E634u) {
        ctx->pc = 0x29E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E630u;
        // 0x29e634: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E638u;
        goto label_29e638;
    }
    ctx->pc = 0x29E630u;
    SET_GPR_U32(ctx, 31, 0x29E638u);
    ctx->pc = 0x29E634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E630u;
    // 0x29e634: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29E630u, 0x29E638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E638u;
label_29e638:
    // 0x29e638: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29e63c:
    // 0x29e63c: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_29e640:
    if (ctx->pc == 0x29E640u) {
        ctx->pc = 0x29E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E63Cu;
        // 0x29e640: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E644u;
        goto label_29e644;
    }
    ctx->pc = 0x29E63Cu;
    {
        const bool branch_taken_0x29e63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E63Cu;
        // 0x29e640: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e63c) {
            ctx->pc = 0x29E730u;
            goto label_29e730;
        }
    }
    ctx->pc = 0x29E644u;
label_29e644:
    // 0x29e644: 0xc0a71e0  jal         func_29C780
label_29e648:
    if (ctx->pc == 0x29E648u) {
        ctx->pc = 0x29E64Cu;
        goto label_29e64c;
    }
    ctx->pc = 0x29E644u;
    SET_GPR_U32(ctx, 31, 0x29E64Cu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x29E644u, 0x29E64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E64Cu;
label_29e64c:
    // 0x29e64c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x29e64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_29e650:
    // 0x29e650: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_29e654:
    if (ctx->pc == 0x29E654u) {
        ctx->pc = 0x29E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E650u;
        // 0x29e654: 0x24840230  addiu       $a0, $a0, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E658u;
        goto label_29e658;
    }
    ctx->pc = 0x29E650u;
    {
        const bool branch_taken_0x29e650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E650u;
        // 0x29e654: 0x24840230  addiu       $a0, $a0, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e650) {
            ctx->pc = 0x29E670u;
            goto label_29e670;
        }
    }
    ctx->pc = 0x29E658u;
label_29e658:
    // 0x29e658: 0xc0d73cc  jal         func_35CF30
label_29e65c:
    if (ctx->pc == 0x29E65Cu) {
        ctx->pc = 0x29E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E658u;
        // 0x29e65c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E660u;
        goto label_29e660;
    }
    ctx->pc = 0x29E658u;
    SET_GPR_U32(ctx, 31, 0x29E660u);
    ctx->pc = 0x29E65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E658u;
    // 0x29e65c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29E658u, 0x29E660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E660u;
label_29e660:
    // 0x29e660: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29e660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_29e664:
    // 0x29e664: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29e668:
    // 0x29e668: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
label_29e66c:
    if (ctx->pc == 0x29E66Cu) {
        ctx->pc = 0x29E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E668u;
        // 0x29e66c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E670u;
        goto label_29e670;
    }
    ctx->pc = 0x29E668u;
    {
        const bool branch_taken_0x29e668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e668) {
            ctx->pc = 0x29E66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E668u;
            // 0x29e66c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E730u;
            goto label_29e730;
        }
    }
    ctx->pc = 0x29E670u;
label_29e670:
    // 0x29e670: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x29e670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_29e674:
    // 0x29e674: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x29e674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_29e678:
    // 0x29e678: 0x8c43259c  lw          $v1, 0x259C($v0)
    ctx->pc = 0x29e678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9628)));
label_29e67c:
    // 0x29e67c: 0x14640018  bne         $v1, $a0, . + 4 + (0x18 << 2)
label_29e680:
    if (ctx->pc == 0x29E680u) {
        ctx->pc = 0x29E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E67Cu;
        // 0x29e680: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E684u;
        goto label_29e684;
    }
    ctx->pc = 0x29E67Cu;
    {
        const bool branch_taken_0x29e67c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x29E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E67Cu;
        // 0x29e680: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e67c) {
            ctx->pc = 0x29E6E0u;
            goto label_29e6e0;
        }
    }
    ctx->pc = 0x29E684u;
label_29e684:
    // 0x29e684: 0xc0d7424  jal         func_35D090
label_29e688:
    if (ctx->pc == 0x29E688u) {
        ctx->pc = 0x29E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E684u;
        // 0x29e688: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E68Cu;
        goto label_29e68c;
    }
    ctx->pc = 0x29E684u;
    SET_GPR_U32(ctx, 31, 0x29E68Cu);
    ctx->pc = 0x29E688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E684u;
    // 0x29e688: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29E684u, 0x29E68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E68Cu;
label_29e68c:
    // 0x29e68c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29e68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e690:
    // 0x29e690: 0xc0a7ab0  jal         func_29EAC0
label_29e694:
    if (ctx->pc == 0x29E694u) {
        ctx->pc = 0x29E694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E690u;
        // 0x29e694: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E698u;
        goto label_29e698;
    }
    ctx->pc = 0x29E690u;
    SET_GPR_U32(ctx, 31, 0x29E698u);
    ctx->pc = 0x29E694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E690u;
    // 0x29e694: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EAC0u, 0x29E690u, 0x29E698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E698u;
label_29e698:
    // 0x29e698: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29e698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e69c:
    // 0x29e69c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29e69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29e6a0:
    // 0x29e6a0: 0xc0d7412  jal         func_35D048
label_29e6a4:
    if (ctx->pc == 0x29E6A4u) {
        ctx->pc = 0x29E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E6A0u;
        // 0x29e6a4: 0xa040006c  sb          $zero, 0x6C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 108), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E6A8u;
        goto label_29e6a8;
    }
    ctx->pc = 0x29E6A0u;
    SET_GPR_U32(ctx, 31, 0x29E6A8u);
    ctx->pc = 0x29E6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E6A0u;
    // 0x29e6a4: 0xa040006c  sb          $zero, 0x6C($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 108), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29E6A0u, 0x29E6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E6A8u;
label_29e6a8:
    // 0x29e6a8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29e6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_29e6ac:
    // 0x29e6ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29e6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e6b0:
    // 0x29e6b0: 0x24a5c460  addiu       $a1, $a1, -0x3BA0
    ctx->pc = 0x29e6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952032));
label_29e6b4:
    // 0x29e6b4: 0xc0d7424  jal         func_35D090
label_29e6b8:
    if (ctx->pc == 0x29E6B8u) {
        ctx->pc = 0x29E6BCu;
        goto label_29e6bc;
    }
    ctx->pc = 0x29E6B4u;
    SET_GPR_U32(ctx, 31, 0x29E6BCu);
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29E6B4u, 0x29E6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E6BCu;
label_29e6bc:
    // 0x29e6bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29e6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e6c0:
    // 0x29e6c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29e6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29e6c4:
    // 0x29e6c4: 0xc0a789c  jal         func_29E270
label_29e6c8:
    if (ctx->pc == 0x29E6C8u) {
        ctx->pc = 0x29E6CCu;
        goto label_29e6cc;
    }
    ctx->pc = 0x29E6C4u;
    SET_GPR_U32(ctx, 31, 0x29E6CCu);
    ctx->pc = 0x29E270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E270u, 0x29E6C4u, 0x29E6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E6CCu;
label_29e6cc:
    // 0x29e6cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29e6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e6d0:
    // 0x29e6d0: 0xc0d7412  jal         func_35D048
label_29e6d4:
    if (ctx->pc == 0x29E6D4u) {
        ctx->pc = 0x29E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E6D0u;
        // 0x29e6d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E6D8u;
        goto label_29e6d8;
    }
    ctx->pc = 0x29E6D0u;
    SET_GPR_U32(ctx, 31, 0x29E6D8u);
    ctx->pc = 0x29E6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E6D0u;
    // 0x29e6d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29E6D0u, 0x29E6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E6D8u;
label_29e6d8:
    // 0x29e6d8: 0x10000015  b           . + 4 + (0x15 << 2)
label_29e6dc:
    if (ctx->pc == 0x29E6DCu) {
        ctx->pc = 0x29E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E6D8u;
        // 0x29e6dc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E6E0u;
        goto label_29e6e0;
    }
    ctx->pc = 0x29E6D8u;
    {
        const bool branch_taken_0x29e6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E6D8u;
        // 0x29e6dc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e6d8) {
            ctx->pc = 0x29E730u;
            goto label_29e730;
        }
    }
    ctx->pc = 0x29E6E0u;
label_29e6e0:
    // 0x29e6e0: 0xc0d7424  jal         func_35D090
label_29e6e4:
    if (ctx->pc == 0x29E6E4u) {
        ctx->pc = 0x29E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E6E0u;
        // 0x29e6e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E6E8u;
        goto label_29e6e8;
    }
    ctx->pc = 0x29E6E0u;
    SET_GPR_U32(ctx, 31, 0x29E6E8u);
    ctx->pc = 0x29E6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E6E0u;
    // 0x29e6e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29E6E0u, 0x29E6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E6E8u;
label_29e6e8:
    // 0x29e6e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29e6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e6ec:
    // 0x29e6ec: 0xc0a7ab0  jal         func_29EAC0
label_29e6f0:
    if (ctx->pc == 0x29E6F0u) {
        ctx->pc = 0x29E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E6ECu;
        // 0x29e6f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E6F4u;
        goto label_29e6f4;
    }
    ctx->pc = 0x29E6ECu;
    SET_GPR_U32(ctx, 31, 0x29E6F4u);
    ctx->pc = 0x29E6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E6ECu;
    // 0x29e6f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EAC0u, 0x29E6ECu, 0x29E6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E6F4u;
label_29e6f4:
    // 0x29e6f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29e6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29e6f8:
    // 0x29e6f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29e6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e6fc:
    // 0x29e6fc: 0xa043006c  sb          $v1, 0x6C($v0)
    ctx->pc = 0x29e6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 108), (uint8_t)GPR_U32(ctx, 3));
label_29e700:
    // 0x29e700: 0xc0d7412  jal         func_35D048
label_29e704:
    if (ctx->pc == 0x29E704u) {
        ctx->pc = 0x29E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E700u;
        // 0x29e704: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E708u;
        goto label_29e708;
    }
    ctx->pc = 0x29E700u;
    SET_GPR_U32(ctx, 31, 0x29E708u);
    ctx->pc = 0x29E704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E700u;
    // 0x29e704: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29E700u, 0x29E708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E708u;
label_29e708:
    // 0x29e708: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29e708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e70c:
    // 0x29e70c: 0xc0d7424  jal         func_35D090
label_29e710:
    if (ctx->pc == 0x29E710u) {
        ctx->pc = 0x29E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E70Cu;
        // 0x29e710: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E714u;
        goto label_29e714;
    }
    ctx->pc = 0x29E70Cu;
    SET_GPR_U32(ctx, 31, 0x29E714u);
    ctx->pc = 0x29E710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E70Cu;
    // 0x29e710: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29E70Cu, 0x29E714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E714u;
label_29e714:
    // 0x29e714: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29e714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e718:
    // 0x29e718: 0xc0a789c  jal         func_29E270
label_29e71c:
    if (ctx->pc == 0x29E71Cu) {
        ctx->pc = 0x29E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E718u;
        // 0x29e71c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E720u;
        goto label_29e720;
    }
    ctx->pc = 0x29E718u;
    SET_GPR_U32(ctx, 31, 0x29E720u);
    ctx->pc = 0x29E71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E718u;
    // 0x29e71c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E270u, 0x29E718u, 0x29E720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E720u;
label_29e720:
    // 0x29e720: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29e720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e724:
    // 0x29e724: 0xc0d7412  jal         func_35D048
label_29e728:
    if (ctx->pc == 0x29E728u) {
        ctx->pc = 0x29E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E724u;
        // 0x29e728: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E72Cu;
        goto label_29e72c;
    }
    ctx->pc = 0x29E724u;
    SET_GPR_U32(ctx, 31, 0x29E72Cu);
    ctx->pc = 0x29E728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E724u;
    // 0x29e728: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29E724u, 0x29E72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E72Cu;
label_29e72c:
    // 0x29e72c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29e72cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_29e730:
    // 0x29e730: 0x26440238  addiu       $a0, $s2, 0x238
    ctx->pc = 0x29e730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 568));
label_29e734:
    // 0x29e734: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29e734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29e738:
    // 0x29e738: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29e738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29e73c:
    // 0x29e73c: 0xc0d73cc  jal         func_35CF30
label_29e740:
    if (ctx->pc == 0x29E740u) {
        ctx->pc = 0x29E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E73Cu;
        // 0x29e740: 0x24a5c478  addiu       $a1, $a1, -0x3B88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E744u;
        goto label_29e744;
    }
    ctx->pc = 0x29E73Cu;
    SET_GPR_U32(ctx, 31, 0x29E744u);
    ctx->pc = 0x29E740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E73Cu;
    // 0x29e740: 0x24a5c478  addiu       $a1, $a1, -0x3B88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29E73Cu, 0x29E744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E744u;
label_29e744:
    // 0x29e744: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29e748:
    // 0x29e748: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_29e74c:
    if (ctx->pc == 0x29E74Cu) {
        ctx->pc = 0x29E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E748u;
        // 0x29e74c: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E750u;
        goto label_29e750;
    }
    ctx->pc = 0x29E748u;
    {
        const bool branch_taken_0x29e748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E748u;
        // 0x29e74c: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e748) {
            ctx->pc = 0x29E77Cu;
            goto label_29e77c;
        }
    }
    ctx->pc = 0x29E750u;
label_29e750:
    // 0x29e750: 0xc0a71e0  jal         func_29C780
label_29e754:
    if (ctx->pc == 0x29E754u) {
        ctx->pc = 0x29E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E750u;
        // 0x29e754: 0xa0407df4  sb          $zero, 0x7DF4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 32244), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E758u;
        goto label_29e758;
    }
    ctx->pc = 0x29E750u;
    SET_GPR_U32(ctx, 31, 0x29E758u);
    ctx->pc = 0x29E754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E750u;
    // 0x29e754: 0xa0407df4  sb          $zero, 0x7DF4($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 32244), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x29E750u, 0x29E758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E758u;
label_29e758:
    // 0x29e758: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29e758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29e75c:
    // 0x29e75c: 0xc0a7428  jal         func_29D0A0
label_29e760:
    if (ctx->pc == 0x29E760u) {
        ctx->pc = 0x29E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E75Cu;
        // 0x29e760: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E764u;
        goto label_29e764;
    }
    ctx->pc = 0x29E75Cu;
    SET_GPR_U32(ctx, 31, 0x29E764u);
    ctx->pc = 0x29E760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E75Cu;
    // 0x29e760: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x29E75Cu, 0x29E764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E764u;
label_29e764:
    // 0x29e764: 0xc0a1a80  jal         func_286A00
label_29e768:
    if (ctx->pc == 0x29E768u) {
        ctx->pc = 0x29E76Cu;
        goto label_29e76c;
    }
    ctx->pc = 0x29E764u;
    SET_GPR_U32(ctx, 31, 0x29E76Cu);
    ctx->pc = 0x286A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A00u, 0x29E764u, 0x29E76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E76Cu;
label_29e76c:
    // 0x29e76c: 0xc0a1988  jal         func_286620
label_29e770:
    if (ctx->pc == 0x29E770u) {
        ctx->pc = 0x29E774u;
        goto label_29e774;
    }
    ctx->pc = 0x29E76Cu;
    SET_GPR_U32(ctx, 31, 0x29E774u);
    ctx->pc = 0x286620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286620u, 0x29E76Cu, 0x29E774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E774u;
label_29e774:
    // 0x29e774: 0x10000031  b           . + 4 + (0x31 << 2)
label_29e778:
    if (ctx->pc == 0x29E778u) {
        ctx->pc = 0x29E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E774u;
        // 0x29e778: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E77Cu;
        goto label_29e77c;
    }
    ctx->pc = 0x29E774u;
    {
        const bool branch_taken_0x29e774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E774u;
        // 0x29e778: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e774) {
            ctx->pc = 0x29E83Cu;
            goto label_29e83c;
        }
    }
    ctx->pc = 0x29E77Cu;
label_29e77c:
    // 0x29e77c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29e77cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_29e780:
    // 0x29e780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29e784:
    // 0x29e784: 0xc0d73cc  jal         func_35CF30
label_29e788:
    if (ctx->pc == 0x29E788u) {
        ctx->pc = 0x29E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E784u;
        // 0x29e788: 0x24a5c490  addiu       $a1, $a1, -0x3B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E78Cu;
        goto label_29e78c;
    }
    ctx->pc = 0x29E784u;
    SET_GPR_U32(ctx, 31, 0x29E78Cu);
    ctx->pc = 0x29E788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E784u;
    // 0x29e788: 0x24a5c490  addiu       $a1, $a1, -0x3B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29E784u, 0x29E78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E78Cu;
label_29e78c:
    // 0x29e78c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29e790:
    // 0x29e790: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_29e794:
    if (ctx->pc == 0x29E794u) {
        ctx->pc = 0x29E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E790u;
        // 0x29e794: 0x3c030052  lui         $v1, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E798u;
        goto label_29e798;
    }
    ctx->pc = 0x29E790u;
    {
        const bool branch_taken_0x29e790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E790u;
        // 0x29e794: 0x3c030052  lui         $v1, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e790) {
            ctx->pc = 0x29E7D0u;
            goto label_29e7d0;
        }
    }
    ctx->pc = 0x29E798u;
label_29e798:
    // 0x29e798: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29e798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_29e79c:
    // 0x29e79c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29e7a0:
    // 0x29e7a0: 0xc0d73cc  jal         func_35CF30
label_29e7a4:
    if (ctx->pc == 0x29E7A4u) {
        ctx->pc = 0x29E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E7A0u;
        // 0x29e7a4: 0x24a5c4a0  addiu       $a1, $a1, -0x3B60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E7A8u;
        goto label_29e7a8;
    }
    ctx->pc = 0x29E7A0u;
    SET_GPR_U32(ctx, 31, 0x29E7A8u);
    ctx->pc = 0x29E7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E7A0u;
    // 0x29e7a4: 0x24a5c4a0  addiu       $a1, $a1, -0x3B60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29E7A0u, 0x29E7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E7A8u;
label_29e7a8:
    // 0x29e7a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29e7ac:
    // 0x29e7ac: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_29e7b0:
    if (ctx->pc == 0x29E7B0u) {
        ctx->pc = 0x29E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E7ACu;
        // 0x29e7b0: 0x3c030052  lui         $v1, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E7B4u;
        goto label_29e7b4;
    }
    ctx->pc = 0x29E7ACu;
    {
        const bool branch_taken_0x29e7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E7ACu;
        // 0x29e7b0: 0x3c030052  lui         $v1, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e7ac) {
            ctx->pc = 0x29E7D0u;
            goto label_29e7d0;
        }
    }
    ctx->pc = 0x29E7B4u;
label_29e7b4:
    // 0x29e7b4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29e7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_29e7b8:
    // 0x29e7b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29e7bc:
    // 0x29e7bc: 0xc0d73cc  jal         func_35CF30
label_29e7c0:
    if (ctx->pc == 0x29E7C0u) {
        ctx->pc = 0x29E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E7BCu;
        // 0x29e7c0: 0x24a5c4b0  addiu       $a1, $a1, -0x3B50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E7C4u;
        goto label_29e7c4;
    }
    ctx->pc = 0x29E7BCu;
    SET_GPR_U32(ctx, 31, 0x29E7C4u);
    ctx->pc = 0x29E7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E7BCu;
    // 0x29e7c0: 0x24a5c4b0  addiu       $a1, $a1, -0x3B50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29E7BCu, 0x29E7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E7C4u;
label_29e7c4:
    // 0x29e7c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29e7c8:
    // 0x29e7c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_29e7cc:
    if (ctx->pc == 0x29E7CCu) {
        ctx->pc = 0x29E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E7C8u;
        // 0x29e7cc: 0x3c030052  lui         $v1, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E7D0u;
        goto label_29e7d0;
    }
    ctx->pc = 0x29E7C8u;
    {
        const bool branch_taken_0x29e7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E7C8u;
        // 0x29e7cc: 0x3c030052  lui         $v1, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e7c8) {
            ctx->pc = 0x29E7E4u;
            goto label_29e7e4;
        }
    }
    ctx->pc = 0x29E7D0u;
label_29e7d0:
    // 0x29e7d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29e7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29e7d4:
    // 0x29e7d4: 0x2464ac80  addiu       $a0, $v1, -0x5380
    ctx->pc = 0x29e7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945920));
label_29e7d8:
    // 0x29e7d8: 0xac65ac80  sw          $a1, -0x5380($v1)
    ctx->pc = 0x29e7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294945920), GPR_U32(ctx, 5));
label_29e7dc:
    // 0x29e7dc: 0x10000013  b           . + 4 + (0x13 << 2)
label_29e7e0:
    if (ctx->pc == 0x29E7E0u) {
        ctx->pc = 0x29E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E7DCu;
        // 0x29e7e0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E7E4u;
        goto label_29e7e4;
    }
    ctx->pc = 0x29E7DCu;
    {
        const bool branch_taken_0x29e7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E7DCu;
        // 0x29e7e0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e7dc) {
            ctx->pc = 0x29E82Cu;
            goto label_29e82c;
        }
    }
    ctx->pc = 0x29E7E4u;
label_29e7e4:
    // 0x29e7e4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29e7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_29e7e8:
    // 0x29e7e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29e7ec:
    // 0x29e7ec: 0xc0d73cc  jal         func_35CF30
label_29e7f0:
    if (ctx->pc == 0x29E7F0u) {
        ctx->pc = 0x29E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E7ECu;
        // 0x29e7f0: 0x24a5c4c8  addiu       $a1, $a1, -0x3B38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E7F4u;
        goto label_29e7f4;
    }
    ctx->pc = 0x29E7ECu;
    SET_GPR_U32(ctx, 31, 0x29E7F4u);
    ctx->pc = 0x29E7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E7ECu;
    // 0x29e7f0: 0x24a5c4c8  addiu       $a1, $a1, -0x3B38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29E7ECu, 0x29E7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E7F4u;
label_29e7f4:
    // 0x29e7f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29e7f8:
    // 0x29e7f8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_29e7fc:
    if (ctx->pc == 0x29E7FCu) {
        ctx->pc = 0x29E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E7F8u;
        // 0x29e7fc: 0x3c030052  lui         $v1, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E800u;
        goto label_29e800;
    }
    ctx->pc = 0x29E7F8u;
    {
        const bool branch_taken_0x29e7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E7F8u;
        // 0x29e7fc: 0x3c030052  lui         $v1, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e7f8) {
            ctx->pc = 0x29E81Cu;
            goto label_29e81c;
        }
    }
    ctx->pc = 0x29E800u;
label_29e800:
    // 0x29e800: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29e800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_29e804:
    // 0x29e804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29e808:
    // 0x29e808: 0xc0d73cc  jal         func_35CF30
label_29e80c:
    if (ctx->pc == 0x29E80Cu) {
        ctx->pc = 0x29E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E808u;
        // 0x29e80c: 0x24a5c4d8  addiu       $a1, $a1, -0x3B28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E810u;
        goto label_29e810;
    }
    ctx->pc = 0x29E808u;
    SET_GPR_U32(ctx, 31, 0x29E810u);
    ctx->pc = 0x29E80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E808u;
    // 0x29e80c: 0x24a5c4d8  addiu       $a1, $a1, -0x3B28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29E808u, 0x29E810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E810u;
label_29e810:
    // 0x29e810: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29e814:
    // 0x29e814: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_29e818:
    if (ctx->pc == 0x29E818u) {
        ctx->pc = 0x29E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E814u;
        // 0x29e818: 0x3c030052  lui         $v1, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E81Cu;
        goto label_29e81c;
    }
    ctx->pc = 0x29E814u;
    {
        const bool branch_taken_0x29e814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E814u;
        // 0x29e818: 0x3c030052  lui         $v1, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e814) {
            ctx->pc = 0x29E838u;
            goto label_29e838;
        }
    }
    ctx->pc = 0x29E81Cu;
label_29e81c:
    // 0x29e81c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29e81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29e820:
    // 0x29e820: 0x2464ac80  addiu       $a0, $v1, -0x5380
    ctx->pc = 0x29e820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945920));
label_29e824:
    // 0x29e824: 0xac65ac80  sw          $a1, -0x5380($v1)
    ctx->pc = 0x29e824u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294945920), GPR_U32(ctx, 5));
label_29e828:
    // 0x29e828: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x29e828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_29e82c:
    // 0x29e82c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29e830:
    // 0x29e830: 0xac82591c  sw          $v0, 0x591C($a0)
    ctx->pc = 0x29e830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22812), GPR_U32(ctx, 2));
label_29e834:
    // 0x29e834: 0xac8658f8  sw          $a2, 0x58F8($a0)
    ctx->pc = 0x29e834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22776), GPR_U32(ctx, 6));
label_29e838:
    // 0x29e838: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29e838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_29e83c:
    // 0x29e83c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29e840:
    // 0x29e840: 0xc0d73cc  jal         func_35CF30
label_29e844:
    if (ctx->pc == 0x29E844u) {
        ctx->pc = 0x29E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E840u;
        // 0x29e844: 0x24a5c4e8  addiu       $a1, $a1, -0x3B18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E848u;
        goto label_29e848;
    }
    ctx->pc = 0x29E840u;
    SET_GPR_U32(ctx, 31, 0x29E848u);
    ctx->pc = 0x29E844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E840u;
    // 0x29e844: 0x24a5c4e8  addiu       $a1, $a1, -0x3B18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29E840u, 0x29E848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E848u;
label_29e848:
    // 0x29e848: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29e84c:
    // 0x29e84c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_29e850:
    if (ctx->pc == 0x29E850u) {
        ctx->pc = 0x29E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E84Cu;
        // 0x29e850: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E854u;
        goto label_29e854;
    }
    ctx->pc = 0x29E84Cu;
    {
        const bool branch_taken_0x29e84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E84Cu;
        // 0x29e850: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e84c) {
            ctx->pc = 0x29E878u;
            goto label_29e878;
        }
    }
    ctx->pc = 0x29E854u;
label_29e854:
    // 0x29e854: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29e854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e858:
    // 0x29e858: 0xc0d7424  jal         func_35D090
label_29e85c:
    if (ctx->pc == 0x29E85Cu) {
        ctx->pc = 0x29E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E858u;
        // 0x29e85c: 0x24a5c500  addiu       $a1, $a1, -0x3B00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E860u;
        goto label_29e860;
    }
    ctx->pc = 0x29E858u;
    SET_GPR_U32(ctx, 31, 0x29E860u);
    ctx->pc = 0x29E85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E858u;
    // 0x29e85c: 0x24a5c500  addiu       $a1, $a1, -0x3B00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29E858u, 0x29E860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E860u;
label_29e860:
    // 0x29e860: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29e860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29e864:
    // 0x29e864: 0xc0a789c  jal         func_29E270
label_29e868:
    if (ctx->pc == 0x29E868u) {
        ctx->pc = 0x29E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E864u;
        // 0x29e868: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E86Cu;
        goto label_29e86c;
    }
    ctx->pc = 0x29E864u;
    SET_GPR_U32(ctx, 31, 0x29E86Cu);
    ctx->pc = 0x29E868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E864u;
    // 0x29e868: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E270u, 0x29E864u, 0x29E86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E86Cu;
label_29e86c:
    // 0x29e86c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29e86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e870:
    // 0x29e870: 0xc0d7412  jal         func_35D048
label_29e874:
    if (ctx->pc == 0x29E874u) {
        ctx->pc = 0x29E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E870u;
        // 0x29e874: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E878u;
        goto label_29e878;
    }
    ctx->pc = 0x29E870u;
    SET_GPR_U32(ctx, 31, 0x29E878u);
    ctx->pc = 0x29E874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E870u;
    // 0x29e874: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29E870u, 0x29E878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E878u;
label_29e878:
    // 0x29e878: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x29e878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_29e87c:
    // 0x29e87c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29e880:
    // 0x29e880: 0xc0d73cc  jal         func_35CF30
label_29e884:
    if (ctx->pc == 0x29E884u) {
        ctx->pc = 0x29E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E880u;
        // 0x29e884: 0x2445c438  addiu       $a1, $v0, -0x3BC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E888u;
        goto label_29e888;
    }
    ctx->pc = 0x29E880u;
    SET_GPR_U32(ctx, 31, 0x29E888u);
    ctx->pc = 0x29E884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E880u;
    // 0x29e884: 0x2445c438  addiu       $a1, $v0, -0x3BC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29E880u, 0x29E888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E888u;
label_29e888:
    // 0x29e888: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29e88c:
    // 0x29e88c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_29e890:
    if (ctx->pc == 0x29E890u) {
        ctx->pc = 0x29E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E88Cu;
        // 0x29e890: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E894u;
        goto label_29e894;
    }
    ctx->pc = 0x29E88Cu;
    {
        const bool branch_taken_0x29e88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E88Cu;
        // 0x29e890: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e88c) {
            ctx->pc = 0x29E8B4u;
            goto label_29e8b4;
        }
    }
    ctx->pc = 0x29E894u;
label_29e894:
    // 0x29e894: 0xc0d7424  jal         func_35D090
label_29e898:
    if (ctx->pc == 0x29E898u) {
        ctx->pc = 0x29E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E894u;
        // 0x29e898: 0x27c5c400  addiu       $a1, $fp, -0x3C00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294951936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E89Cu;
        goto label_29e89c;
    }
    ctx->pc = 0x29E894u;
    SET_GPR_U32(ctx, 31, 0x29E89Cu);
    ctx->pc = 0x29E898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E894u;
    // 0x29e898: 0x27c5c400  addiu       $a1, $fp, -0x3C00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294951936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29E894u, 0x29E89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E89Cu;
label_29e89c:
    // 0x29e89c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29e89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29e8a0:
    // 0x29e8a0: 0xc0a789c  jal         func_29E270
label_29e8a4:
    if (ctx->pc == 0x29E8A4u) {
        ctx->pc = 0x29E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8A0u;
        // 0x29e8a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E8A8u;
        goto label_29e8a8;
    }
    ctx->pc = 0x29E8A0u;
    SET_GPR_U32(ctx, 31, 0x29E8A8u);
    ctx->pc = 0x29E8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E8A0u;
    // 0x29e8a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E270u, 0x29E8A0u, 0x29E8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E8A8u;
label_29e8a8:
    // 0x29e8a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29e8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e8ac:
    // 0x29e8ac: 0xc0d7412  jal         func_35D048
label_29e8b0:
    if (ctx->pc == 0x29E8B0u) {
        ctx->pc = 0x29E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8ACu;
        // 0x29e8b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E8B4u;
        goto label_29e8b4;
    }
    ctx->pc = 0x29E8ACu;
    SET_GPR_U32(ctx, 31, 0x29E8B4u);
    ctx->pc = 0x29E8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E8ACu;
    // 0x29e8b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29E8ACu, 0x29E8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E8B4u;
label_29e8b4:
    // 0x29e8b4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29e8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_29e8b8:
    // 0x29e8b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29e8bc:
    // 0x29e8bc: 0xc0d73cc  jal         func_35CF30
label_29e8c0:
    if (ctx->pc == 0x29E8C0u) {
        ctx->pc = 0x29E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8BCu;
        // 0x29e8c0: 0x24a5c520  addiu       $a1, $a1, -0x3AE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E8C4u;
        goto label_29e8c4;
    }
    ctx->pc = 0x29E8BCu;
    SET_GPR_U32(ctx, 31, 0x29E8C4u);
    ctx->pc = 0x29E8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E8BCu;
    // 0x29e8c0: 0x24a5c520  addiu       $a1, $a1, -0x3AE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29E8BCu, 0x29E8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E8C4u;
label_29e8c4:
    // 0x29e8c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29e8c8:
    // 0x29e8c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_29e8cc:
    if (ctx->pc == 0x29E8CCu) {
        ctx->pc = 0x29E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8C8u;
        // 0x29e8cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E8D0u;
        goto label_29e8d0;
    }
    ctx->pc = 0x29E8C8u;
    {
        const bool branch_taken_0x29e8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8C8u;
        // 0x29e8cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e8c8) {
            ctx->pc = 0x29E8F0u;
            goto label_29e8f0;
        }
    }
    ctx->pc = 0x29E8D0u;
label_29e8d0:
    // 0x29e8d0: 0xc0d7424  jal         func_35D090
label_29e8d4:
    if (ctx->pc == 0x29E8D4u) {
        ctx->pc = 0x29E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8D0u;
        // 0x29e8d4: 0x2625c478  addiu       $a1, $s1, -0x3B88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E8D8u;
        goto label_29e8d8;
    }
    ctx->pc = 0x29E8D0u;
    SET_GPR_U32(ctx, 31, 0x29E8D8u);
    ctx->pc = 0x29E8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E8D0u;
    // 0x29e8d4: 0x2625c478  addiu       $a1, $s1, -0x3B88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29E8D0u, 0x29E8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E8D8u;
label_29e8d8:
    // 0x29e8d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29e8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29e8dc:
    // 0x29e8dc: 0xc0a789c  jal         func_29E270
label_29e8e0:
    if (ctx->pc == 0x29E8E0u) {
        ctx->pc = 0x29E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8DCu;
        // 0x29e8e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E8E4u;
        goto label_29e8e4;
    }
    ctx->pc = 0x29E8DCu;
    SET_GPR_U32(ctx, 31, 0x29E8E4u);
    ctx->pc = 0x29E8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E8DCu;
    // 0x29e8e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E270u, 0x29E8DCu, 0x29E8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E8E4u;
label_29e8e4:
    // 0x29e8e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29e8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e8e8:
    // 0x29e8e8: 0xc0d7412  jal         func_35D048
label_29e8ec:
    if (ctx->pc == 0x29E8ECu) {
        ctx->pc = 0x29E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8E8u;
        // 0x29e8ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E8F0u;
        goto label_29e8f0;
    }
    ctx->pc = 0x29E8E8u;
    SET_GPR_U32(ctx, 31, 0x29E8F0u);
    ctx->pc = 0x29E8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E8E8u;
    // 0x29e8ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29E8E8u, 0x29E8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E8F0u;
label_29e8f0:
    // 0x29e8f0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29e8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_29e8f4:
    // 0x29e8f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29e8f8:
    // 0x29e8f8: 0xc0d73cc  jal         func_35CF30
label_29e8fc:
    if (ctx->pc == 0x29E8FCu) {
        ctx->pc = 0x29E8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8F8u;
        // 0x29e8fc: 0x24a5c530  addiu       $a1, $a1, -0x3AD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E900u;
        goto label_29e900;
    }
    ctx->pc = 0x29E8F8u;
    SET_GPR_U32(ctx, 31, 0x29E900u);
    ctx->pc = 0x29E8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E8F8u;
    // 0x29e8fc: 0x24a5c530  addiu       $a1, $a1, -0x3AD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29E8F8u, 0x29E900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E900u;
label_29e900:
    // 0x29e900: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29e904:
    // 0x29e904: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_29e908:
    if (ctx->pc == 0x29E908u) {
        ctx->pc = 0x29E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E904u;
        // 0x29e908: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E90Cu;
        goto label_29e90c;
    }
    ctx->pc = 0x29E904u;
    {
        const bool branch_taken_0x29e904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E904u;
        // 0x29e908: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e904) {
            ctx->pc = 0x29E924u;
            goto label_29e924;
        }
    }
    ctx->pc = 0x29E90Cu;
label_29e90c:
    // 0x29e90c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29e910:
    // 0x29e910: 0xc0d73cc  jal         func_35CF30
label_29e914:
    if (ctx->pc == 0x29E914u) {
        ctx->pc = 0x29E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E910u;
        // 0x29e914: 0x2625c478  addiu       $a1, $s1, -0x3B88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E918u;
        goto label_29e918;
    }
    ctx->pc = 0x29E910u;
    SET_GPR_U32(ctx, 31, 0x29E918u);
    ctx->pc = 0x29E914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E910u;
    // 0x29e914: 0x2625c478  addiu       $a1, $s1, -0x3B88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29E910u, 0x29E918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E918u;
label_29e918:
    // 0x29e918: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29e91c:
    // 0x29e91c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_29e920:
    if (ctx->pc == 0x29E920u) {
        ctx->pc = 0x29E920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E91Cu;
        // 0x29e920: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E924u;
        goto label_29e924;
    }
    ctx->pc = 0x29E91Cu;
    {
        const bool branch_taken_0x29e91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E91Cu;
        // 0x29e920: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e91c) {
            ctx->pc = 0x29E930u;
            goto label_29e930;
        }
    }
    ctx->pc = 0x29E924u;
label_29e924:
    // 0x29e924: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29e924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29e928:
    // 0x29e928: 0x10000003  b           . + 4 + (0x3 << 2)
label_29e92c:
    if (ctx->pc == 0x29E92Cu) {
        ctx->pc = 0x29E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E928u;
        // 0x29e92c: 0xa062a929  sb          $v0, -0x56D7($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294945065), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E930u;
        goto label_29e930;
    }
    ctx->pc = 0x29E928u;
    {
        const bool branch_taken_0x29e928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E928u;
        // 0x29e92c: 0xa062a929  sb          $v0, -0x56D7($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294945065), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e928) {
            ctx->pc = 0x29E938u;
            goto label_29e938;
        }
    }
    ctx->pc = 0x29E930u;
label_29e930:
    // 0x29e930: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29e930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_29e934:
    // 0x29e934: 0xa040a929  sb          $zero, -0x56D7($v0)
    ctx->pc = 0x29e934u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294945065), (uint8_t)GPR_U32(ctx, 0));
label_29e938:
    // 0x29e938: 0x8e44021c  lw          $a0, 0x21C($s2)
    ctx->pc = 0x29e938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 540)));
label_29e93c:
    // 0x29e93c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_29e940:
    if (ctx->pc == 0x29E940u) {
        ctx->pc = 0x29E940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E93Cu;
        // 0x29e940: 0xae57000c  sw          $s7, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E944u;
        goto label_29e944;
    }
    ctx->pc = 0x29E93Cu;
    {
        const bool branch_taken_0x29e93c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e93c) {
            ctx->pc = 0x29E940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E93Cu;
            // 0x29e940: 0xae57000c  sw          $s7, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E958u;
            goto label_29e958;
        }
    }
    ctx->pc = 0x29E944u;
label_29e944:
    // 0x29e944: 0x52c00004  beql        $s6, $zero, . + 4 + (0x4 << 2)
label_29e948:
    if (ctx->pc == 0x29E948u) {
        ctx->pc = 0x29E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E944u;
        // 0x29e948: 0xae57000c  sw          $s7, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E94Cu;
        goto label_29e94c;
    }
    ctx->pc = 0x29E944u;
    {
        const bool branch_taken_0x29e944 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e944) {
            ctx->pc = 0x29E948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E944u;
            // 0x29e948: 0xae57000c  sw          $s7, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E958u;
            goto label_29e958;
        }
    }
    ctx->pc = 0x29E94Cu;
label_29e94c:
    // 0x29e94c: 0xc0a3c36  jal         func_28F0D8
label_29e950:
    if (ctx->pc == 0x29E950u) {
        ctx->pc = 0x29E954u;
        goto label_29e954;
    }
    ctx->pc = 0x29E94Cu;
    SET_GPR_U32(ctx, 31, 0x29E954u);
    ctx->pc = 0x28F0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F0D8u, 0x29E94Cu, 0x29E954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E954u;
label_29e954:
    // 0x29e954: 0xae57000c  sw          $s7, 0xC($s2)
    ctx->pc = 0x29e954u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 23));
label_29e958:
    // 0x29e958: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29e958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29e95c:
    // 0x29e95c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x29e95cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29e960:
    // 0x29e960: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29e960u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29e964:
    // 0x29e964: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x29e964u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29e968:
    // 0x29e968: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x29e968u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29e96c:
    // 0x29e96c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x29e96cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_29e970:
    // 0x29e970: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x29e970u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29e974:
    // 0x29e974: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x29e974u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_29e978:
    // 0x29e978: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x29e978u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_29e97c:
    // 0x29e97c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x29e97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_29e980:
    // 0x29e980: 0x3e00008  jr          $ra
label_29e984:
    if (ctx->pc == 0x29E984u) {
        ctx->pc = 0x29E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E980u;
        // 0x29e984: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E988u;
        goto label_fallthrough_0x29e980;
    }
    ctx->pc = 0x29E980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E980u;
        // 0x29e984: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29e980:
    ctx->pc = 0x29E988u;
}
