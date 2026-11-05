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

// Function: sub_003BD440
// Address: 0x3bd440 - 0x3bd8b0
void sub_003BD440_0x3bd440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BD440_0x3bd440");
#endif

    switch (ctx->pc) {
        case 0x3bd440u: goto label_3bd440;
        case 0x3bd444u: goto label_3bd444;
        case 0x3bd448u: goto label_3bd448;
        case 0x3bd44cu: goto label_3bd44c;
        case 0x3bd450u: goto label_3bd450;
        case 0x3bd454u: goto label_3bd454;
        case 0x3bd458u: goto label_3bd458;
        case 0x3bd45cu: goto label_3bd45c;
        case 0x3bd460u: goto label_3bd460;
        case 0x3bd464u: goto label_3bd464;
        case 0x3bd468u: goto label_3bd468;
        case 0x3bd46cu: goto label_3bd46c;
        case 0x3bd470u: goto label_3bd470;
        case 0x3bd474u: goto label_3bd474;
        case 0x3bd478u: goto label_3bd478;
        case 0x3bd47cu: goto label_3bd47c;
        case 0x3bd480u: goto label_3bd480;
        case 0x3bd484u: goto label_3bd484;
        case 0x3bd488u: goto label_3bd488;
        case 0x3bd48cu: goto label_3bd48c;
        case 0x3bd490u: goto label_3bd490;
        case 0x3bd494u: goto label_3bd494;
        case 0x3bd498u: goto label_3bd498;
        case 0x3bd49cu: goto label_3bd49c;
        case 0x3bd4a0u: goto label_3bd4a0;
        case 0x3bd4a4u: goto label_3bd4a4;
        case 0x3bd4a8u: goto label_3bd4a8;
        case 0x3bd4acu: goto label_3bd4ac;
        case 0x3bd4b0u: goto label_3bd4b0;
        case 0x3bd4b4u: goto label_3bd4b4;
        case 0x3bd4b8u: goto label_3bd4b8;
        case 0x3bd4bcu: goto label_3bd4bc;
        case 0x3bd4c0u: goto label_3bd4c0;
        case 0x3bd4c4u: goto label_3bd4c4;
        case 0x3bd4c8u: goto label_3bd4c8;
        case 0x3bd4ccu: goto label_3bd4cc;
        case 0x3bd4d0u: goto label_3bd4d0;
        case 0x3bd4d4u: goto label_3bd4d4;
        case 0x3bd4d8u: goto label_3bd4d8;
        case 0x3bd4dcu: goto label_3bd4dc;
        case 0x3bd4e0u: goto label_3bd4e0;
        case 0x3bd4e4u: goto label_3bd4e4;
        case 0x3bd4e8u: goto label_3bd4e8;
        case 0x3bd4ecu: goto label_3bd4ec;
        case 0x3bd4f0u: goto label_3bd4f0;
        case 0x3bd4f4u: goto label_3bd4f4;
        case 0x3bd4f8u: goto label_3bd4f8;
        case 0x3bd4fcu: goto label_3bd4fc;
        case 0x3bd500u: goto label_3bd500;
        case 0x3bd504u: goto label_3bd504;
        case 0x3bd508u: goto label_3bd508;
        case 0x3bd50cu: goto label_3bd50c;
        case 0x3bd510u: goto label_3bd510;
        case 0x3bd514u: goto label_3bd514;
        case 0x3bd518u: goto label_3bd518;
        case 0x3bd51cu: goto label_3bd51c;
        case 0x3bd520u: goto label_3bd520;
        case 0x3bd524u: goto label_3bd524;
        case 0x3bd528u: goto label_3bd528;
        case 0x3bd52cu: goto label_3bd52c;
        case 0x3bd530u: goto label_3bd530;
        case 0x3bd534u: goto label_3bd534;
        case 0x3bd538u: goto label_3bd538;
        case 0x3bd53cu: goto label_3bd53c;
        case 0x3bd540u: goto label_3bd540;
        case 0x3bd544u: goto label_3bd544;
        case 0x3bd548u: goto label_3bd548;
        case 0x3bd54cu: goto label_3bd54c;
        case 0x3bd550u: goto label_3bd550;
        case 0x3bd554u: goto label_3bd554;
        case 0x3bd558u: goto label_3bd558;
        case 0x3bd55cu: goto label_3bd55c;
        case 0x3bd560u: goto label_3bd560;
        case 0x3bd564u: goto label_3bd564;
        case 0x3bd568u: goto label_3bd568;
        case 0x3bd56cu: goto label_3bd56c;
        case 0x3bd570u: goto label_3bd570;
        case 0x3bd574u: goto label_3bd574;
        case 0x3bd578u: goto label_3bd578;
        case 0x3bd57cu: goto label_3bd57c;
        case 0x3bd580u: goto label_3bd580;
        case 0x3bd584u: goto label_3bd584;
        case 0x3bd588u: goto label_3bd588;
        case 0x3bd58cu: goto label_3bd58c;
        case 0x3bd590u: goto label_3bd590;
        case 0x3bd594u: goto label_3bd594;
        case 0x3bd598u: goto label_3bd598;
        case 0x3bd59cu: goto label_3bd59c;
        case 0x3bd5a0u: goto label_3bd5a0;
        case 0x3bd5a4u: goto label_3bd5a4;
        case 0x3bd5a8u: goto label_3bd5a8;
        case 0x3bd5acu: goto label_3bd5ac;
        case 0x3bd5b0u: goto label_3bd5b0;
        case 0x3bd5b4u: goto label_3bd5b4;
        case 0x3bd5b8u: goto label_3bd5b8;
        case 0x3bd5bcu: goto label_3bd5bc;
        case 0x3bd5c0u: goto label_3bd5c0;
        case 0x3bd5c4u: goto label_3bd5c4;
        case 0x3bd5c8u: goto label_3bd5c8;
        case 0x3bd5ccu: goto label_3bd5cc;
        case 0x3bd5d0u: goto label_3bd5d0;
        case 0x3bd5d4u: goto label_3bd5d4;
        case 0x3bd5d8u: goto label_3bd5d8;
        case 0x3bd5dcu: goto label_3bd5dc;
        case 0x3bd5e0u: goto label_3bd5e0;
        case 0x3bd5e4u: goto label_3bd5e4;
        case 0x3bd5e8u: goto label_3bd5e8;
        case 0x3bd5ecu: goto label_3bd5ec;
        case 0x3bd5f0u: goto label_3bd5f0;
        case 0x3bd5f4u: goto label_3bd5f4;
        case 0x3bd5f8u: goto label_3bd5f8;
        case 0x3bd5fcu: goto label_3bd5fc;
        case 0x3bd600u: goto label_3bd600;
        case 0x3bd604u: goto label_3bd604;
        case 0x3bd608u: goto label_3bd608;
        case 0x3bd60cu: goto label_3bd60c;
        case 0x3bd610u: goto label_3bd610;
        case 0x3bd614u: goto label_3bd614;
        case 0x3bd618u: goto label_3bd618;
        case 0x3bd61cu: goto label_3bd61c;
        case 0x3bd620u: goto label_3bd620;
        case 0x3bd624u: goto label_3bd624;
        case 0x3bd628u: goto label_3bd628;
        case 0x3bd62cu: goto label_3bd62c;
        case 0x3bd630u: goto label_3bd630;
        case 0x3bd634u: goto label_3bd634;
        case 0x3bd638u: goto label_3bd638;
        case 0x3bd63cu: goto label_3bd63c;
        case 0x3bd640u: goto label_3bd640;
        case 0x3bd644u: goto label_3bd644;
        case 0x3bd648u: goto label_3bd648;
        case 0x3bd64cu: goto label_3bd64c;
        case 0x3bd650u: goto label_3bd650;
        case 0x3bd654u: goto label_3bd654;
        case 0x3bd658u: goto label_3bd658;
        case 0x3bd65cu: goto label_3bd65c;
        case 0x3bd660u: goto label_3bd660;
        case 0x3bd664u: goto label_3bd664;
        case 0x3bd668u: goto label_3bd668;
        case 0x3bd66cu: goto label_3bd66c;
        case 0x3bd670u: goto label_3bd670;
        case 0x3bd674u: goto label_3bd674;
        case 0x3bd678u: goto label_3bd678;
        case 0x3bd67cu: goto label_3bd67c;
        case 0x3bd680u: goto label_3bd680;
        case 0x3bd684u: goto label_3bd684;
        case 0x3bd688u: goto label_3bd688;
        case 0x3bd68cu: goto label_3bd68c;
        case 0x3bd690u: goto label_3bd690;
        case 0x3bd694u: goto label_3bd694;
        case 0x3bd698u: goto label_3bd698;
        case 0x3bd69cu: goto label_3bd69c;
        case 0x3bd6a0u: goto label_3bd6a0;
        case 0x3bd6a4u: goto label_3bd6a4;
        case 0x3bd6a8u: goto label_3bd6a8;
        case 0x3bd6acu: goto label_3bd6ac;
        case 0x3bd6b0u: goto label_3bd6b0;
        case 0x3bd6b4u: goto label_3bd6b4;
        case 0x3bd6b8u: goto label_3bd6b8;
        case 0x3bd6bcu: goto label_3bd6bc;
        case 0x3bd6c0u: goto label_3bd6c0;
        case 0x3bd6c4u: goto label_3bd6c4;
        case 0x3bd6c8u: goto label_3bd6c8;
        case 0x3bd6ccu: goto label_3bd6cc;
        case 0x3bd6d0u: goto label_3bd6d0;
        case 0x3bd6d4u: goto label_3bd6d4;
        case 0x3bd6d8u: goto label_3bd6d8;
        case 0x3bd6dcu: goto label_3bd6dc;
        case 0x3bd6e0u: goto label_3bd6e0;
        case 0x3bd6e4u: goto label_3bd6e4;
        case 0x3bd6e8u: goto label_3bd6e8;
        case 0x3bd6ecu: goto label_3bd6ec;
        case 0x3bd6f0u: goto label_3bd6f0;
        case 0x3bd6f4u: goto label_3bd6f4;
        case 0x3bd6f8u: goto label_3bd6f8;
        case 0x3bd6fcu: goto label_3bd6fc;
        case 0x3bd700u: goto label_3bd700;
        case 0x3bd704u: goto label_3bd704;
        case 0x3bd708u: goto label_3bd708;
        case 0x3bd70cu: goto label_3bd70c;
        case 0x3bd710u: goto label_3bd710;
        case 0x3bd714u: goto label_3bd714;
        case 0x3bd718u: goto label_3bd718;
        case 0x3bd71cu: goto label_3bd71c;
        case 0x3bd720u: goto label_3bd720;
        case 0x3bd724u: goto label_3bd724;
        case 0x3bd728u: goto label_3bd728;
        case 0x3bd72cu: goto label_3bd72c;
        case 0x3bd730u: goto label_3bd730;
        case 0x3bd734u: goto label_3bd734;
        case 0x3bd738u: goto label_3bd738;
        case 0x3bd73cu: goto label_3bd73c;
        case 0x3bd740u: goto label_3bd740;
        case 0x3bd744u: goto label_3bd744;
        case 0x3bd748u: goto label_3bd748;
        case 0x3bd74cu: goto label_3bd74c;
        case 0x3bd750u: goto label_3bd750;
        case 0x3bd754u: goto label_3bd754;
        case 0x3bd758u: goto label_3bd758;
        case 0x3bd75cu: goto label_3bd75c;
        case 0x3bd760u: goto label_3bd760;
        case 0x3bd764u: goto label_3bd764;
        case 0x3bd768u: goto label_3bd768;
        case 0x3bd76cu: goto label_3bd76c;
        case 0x3bd770u: goto label_3bd770;
        case 0x3bd774u: goto label_3bd774;
        case 0x3bd778u: goto label_3bd778;
        case 0x3bd77cu: goto label_3bd77c;
        case 0x3bd780u: goto label_3bd780;
        case 0x3bd784u: goto label_3bd784;
        case 0x3bd788u: goto label_3bd788;
        case 0x3bd78cu: goto label_3bd78c;
        case 0x3bd790u: goto label_3bd790;
        case 0x3bd794u: goto label_3bd794;
        case 0x3bd798u: goto label_3bd798;
        case 0x3bd79cu: goto label_3bd79c;
        case 0x3bd7a0u: goto label_3bd7a0;
        case 0x3bd7a4u: goto label_3bd7a4;
        case 0x3bd7a8u: goto label_3bd7a8;
        case 0x3bd7acu: goto label_3bd7ac;
        case 0x3bd7b0u: goto label_3bd7b0;
        case 0x3bd7b4u: goto label_3bd7b4;
        case 0x3bd7b8u: goto label_3bd7b8;
        case 0x3bd7bcu: goto label_3bd7bc;
        case 0x3bd7c0u: goto label_3bd7c0;
        case 0x3bd7c4u: goto label_3bd7c4;
        case 0x3bd7c8u: goto label_3bd7c8;
        case 0x3bd7ccu: goto label_3bd7cc;
        case 0x3bd7d0u: goto label_3bd7d0;
        case 0x3bd7d4u: goto label_3bd7d4;
        case 0x3bd7d8u: goto label_3bd7d8;
        case 0x3bd7dcu: goto label_3bd7dc;
        case 0x3bd7e0u: goto label_3bd7e0;
        case 0x3bd7e4u: goto label_3bd7e4;
        case 0x3bd7e8u: goto label_3bd7e8;
        case 0x3bd7ecu: goto label_3bd7ec;
        case 0x3bd7f0u: goto label_3bd7f0;
        case 0x3bd7f4u: goto label_3bd7f4;
        case 0x3bd7f8u: goto label_3bd7f8;
        case 0x3bd7fcu: goto label_3bd7fc;
        case 0x3bd800u: goto label_3bd800;
        case 0x3bd804u: goto label_3bd804;
        case 0x3bd808u: goto label_3bd808;
        case 0x3bd80cu: goto label_3bd80c;
        case 0x3bd810u: goto label_3bd810;
        case 0x3bd814u: goto label_3bd814;
        case 0x3bd818u: goto label_3bd818;
        case 0x3bd81cu: goto label_3bd81c;
        case 0x3bd820u: goto label_3bd820;
        case 0x3bd824u: goto label_3bd824;
        case 0x3bd828u: goto label_3bd828;
        case 0x3bd82cu: goto label_3bd82c;
        case 0x3bd830u: goto label_3bd830;
        case 0x3bd834u: goto label_3bd834;
        case 0x3bd838u: goto label_3bd838;
        case 0x3bd83cu: goto label_3bd83c;
        case 0x3bd840u: goto label_3bd840;
        case 0x3bd844u: goto label_3bd844;
        case 0x3bd848u: goto label_3bd848;
        case 0x3bd84cu: goto label_3bd84c;
        case 0x3bd850u: goto label_3bd850;
        case 0x3bd854u: goto label_3bd854;
        case 0x3bd858u: goto label_3bd858;
        case 0x3bd85cu: goto label_3bd85c;
        case 0x3bd860u: goto label_3bd860;
        case 0x3bd864u: goto label_3bd864;
        case 0x3bd868u: goto label_3bd868;
        case 0x3bd86cu: goto label_3bd86c;
        case 0x3bd870u: goto label_3bd870;
        case 0x3bd874u: goto label_3bd874;
        case 0x3bd878u: goto label_3bd878;
        case 0x3bd87cu: goto label_3bd87c;
        case 0x3bd880u: goto label_3bd880;
        case 0x3bd884u: goto label_3bd884;
        case 0x3bd888u: goto label_3bd888;
        case 0x3bd88cu: goto label_3bd88c;
        case 0x3bd890u: goto label_3bd890;
        case 0x3bd894u: goto label_3bd894;
        case 0x3bd898u: goto label_3bd898;
        case 0x3bd89cu: goto label_3bd89c;
        case 0x3bd8a0u: goto label_3bd8a0;
        case 0x3bd8a4u: goto label_3bd8a4;
        case 0x3bd8a8u: goto label_3bd8a8;
        case 0x3bd8acu: goto label_3bd8ac;
        default: break;
    }

    ctx->pc = 0x3bd440u;

label_3bd440:
    // 0x3bd440: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3bd440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3bd444:
    // 0x3bd444: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3bd444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_3bd448:
    // 0x3bd448: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x3bd448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_3bd44c:
    // 0x3bd44c: 0x34630810  ori         $v1, $v1, 0x810
    ctx->pc = 0x3bd44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2064);
label_3bd450:
    // 0x3bd450: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3bd450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3bd454:
    // 0x3bd454: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x3bd454u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3bd458:
    // 0x3bd458: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x3bd458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_3bd45c:
    // 0x3bd45c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x3bd45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_3bd460:
    // 0x3bd460: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x3bd460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_3bd464:
    // 0x3bd464: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3bd464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_3bd468:
    // 0x3bd468: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3bd468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_3bd46c:
    // 0x3bd46c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3bd46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3bd470:
    // 0x3bd470: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3bd470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_3bd474:
    // 0x3bd474: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3bd474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3bd478:
    // 0x3bd478: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3bd478u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000810
label_3bd47c:
    // 0x3bd47c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3bd47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_3bd480:
    // 0x3bd480: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
label_3bd484:
    if (ctx->pc == 0x3BD484u) {
        ctx->pc = 0x3BD484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD480u;
        // 0x3bd484: 0x3c160043  lui         $s6, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD488u;
        goto label_3bd488;
    }
    ctx->pc = 0x3BD480u;
    {
        const bool branch_taken_0x3bd480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD480u;
        // 0x3bd484: 0x3c160043  lui         $s6, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd480) {
            ctx->pc = 0x3BD670u;
            goto label_3bd670;
        }
    }
    ctx->pc = 0x3BD488u;
label_3bd488:
    // 0x3bd488: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x3bd488u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
label_3bd48c:
    // 0x3bd48c: 0x26c2ca48  addiu       $v0, $s6, -0x35B8
    ctx->pc = 0x3bd48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953544));
label_3bd490:
    // 0x3bd490: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x3bd490u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3bd494:
    // 0x3bd494: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x3bd494u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3bd498:
    // 0x3bd498: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x3bd498u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3bd49c:
    // 0x3bd49c: 0x36730800  ori         $s3, $s3, 0x800
    ctx->pc = 0x3bd49cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2048);
label_3bd4a0:
    // 0x3bd4a0: 0x10000054  b           . + 4 + (0x54 << 2)
label_3bd4a4:
    if (ctx->pc == 0x3BD4A4u) {
        ctx->pc = 0x3BD4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD4A0u;
        // 0x3bd4a4: 0x241e3999  addiu       $fp, $zero, 0x3999 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 14745));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD4A8u;
        goto label_3bd4a8;
    }
    ctx->pc = 0x3BD4A0u;
    {
        const bool branch_taken_0x3bd4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD4A0u;
        // 0x3bd4a4: 0x241e3999  addiu       $fp, $zero, 0x3999 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 14745));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd4a0) {
            ctx->pc = 0x3BD5F4u;
            goto label_3bd5f4;
        }
    }
    ctx->pc = 0x3BD4A8u;
label_3bd4a8:
    // 0x3bd4a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3bd4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3bd4ac:
    // 0x3bd4ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3bd4b0:
    if (ctx->pc == 0x3BD4B0u) {
        ctx->pc = 0x3BD4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD4ACu;
        // 0x3bd4b0: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD4B4u;
        goto label_3bd4b4;
    }
    ctx->pc = 0x3BD4ACu;
    {
        const bool branch_taken_0x3bd4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD4ACu;
        // 0x3bd4b0: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd4ac) {
            ctx->pc = 0x3BD4BCu;
            goto label_3bd4bc;
        }
    }
    ctx->pc = 0x3BD4B4u;
label_3bd4b4:
    // 0x3bd4b4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3bd4b8:
    if (ctx->pc == 0x3BD4B8u) {
        ctx->pc = 0x3BD4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD4B4u;
        // 0x3bd4b8: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD4BCu;
        goto label_3bd4bc;
    }
    ctx->pc = 0x3BD4B4u;
    {
        const bool branch_taken_0x3bd4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD4B4u;
        // 0x3bd4b8: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd4b4) {
            ctx->pc = 0x3BD4C0u;
            goto label_3bd4c0;
        }
    }
    ctx->pc = 0x3BD4BCu;
label_3bd4bc:
    // 0x3bd4bc: 0xacb20018  sw          $s2, 0x18($a1)
    ctx->pc = 0x3bd4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 18));
label_3bd4c0:
    // 0x3bd4c0: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_3bd4c4:
    if (ctx->pc == 0x3BD4C4u) {
        ctx->pc = 0x3BD4C8u;
        goto label_3bd4c8;
    }
    ctx->pc = 0x3BD4C0u;
    {
        const bool branch_taken_0x3bd4c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bd4c0) {
            ctx->pc = 0x3BD4D0u;
            goto label_3bd4d0;
        }
    }
    ctx->pc = 0x3BD4C8u;
label_3bd4c8:
    // 0x3bd4c8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3bd4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3bd4cc:
    // 0x3bd4cc: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3bd4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_3bd4d0:
    // 0x3bd4d0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3bd4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3bd4d4:
    // 0x3bd4d4: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x3bd4d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_3bd4d8:
    // 0x3bd4d8: 0xde060018  ld          $a2, 0x18($s0)
    ctx->pc = 0x3bd4d8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_3bd4dc:
    // 0x3bd4dc: 0x26b1ca48  addiu       $s1, $s5, -0x35B8
    ctx->pc = 0x3bd4dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294953544));
label_3bd4e0:
    // 0x3bd4e0: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x3bd4e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_3bd4e4:
    // 0x3bd4e4: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x3bd4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_3bd4e8:
    // 0x3bd4e8: 0x86302d  daddu       $a2, $a0, $a2
    ctx->pc = 0x3bd4e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 6));
label_3bd4ec:
    // 0x3bd4ec: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x3bd4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_3bd4f0:
    // 0x3bd4f0: 0xc3302f  dsubu       $a2, $a2, $v1
    ctx->pc = 0x3bd4f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 3));
label_3bd4f4:
    // 0x3bd4f4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3bd4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3bd4f8:
    // 0x3bd4f8: 0x8e1c002c  lw          $gp, 0x2C($s0)
    ctx->pc = 0x3bd4f8u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3bd4fc:
    // 0x3bd4fc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3bd4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3bd500:
    // 0x3bd500: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x3bd500u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3bd504:
    // 0x3bd504: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x3bd504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3bd508:
    // 0x3bd508: 0xe42025  or          $a0, $a3, $a0
    ctx->pc = 0x3bd508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_3bd50c:
    // 0x3bd50c: 0xde050020  ld          $a1, 0x20($s0)
    ctx->pc = 0x3bd50cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_3bd510:
    // 0x3bd510: 0x40f809  jalr        $v0
label_3bd514:
    if (ctx->pc == 0x3BD514u) {
        ctx->pc = 0x3BD514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD510u;
        // 0x3bd514: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD518u;
        goto label_3bd518;
    }
    ctx->pc = 0x3BD510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BD518u);
        ctx->pc = 0x3BD514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD510u;
        // 0x3bd514: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD510u, 0x3BD518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BD518u;
label_3bd518:
    // 0x3bd518: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3bd518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bd51c:
    // 0x3bd51c: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
label_3bd520:
    if (ctx->pc == 0x3BD520u) {
        ctx->pc = 0x3BD520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD51Cu;
        // 0x3bd520: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD524u;
        goto label_3bd524;
    }
    ctx->pc = 0x3BD51Cu;
    {
        const bool branch_taken_0x3bd51c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BD520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD51Cu;
        // 0x3bd520: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd51c) {
            ctx->pc = 0x3BD53Cu;
            goto label_3bd53c;
        }
    }
    ctx->pc = 0x3BD524u;
label_3bd524:
    // 0x3bd524: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3bd524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3bd528:
    // 0x3bd528: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3bd528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3bd52c:
    // 0x3bd52c: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x3bd52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_3bd530:
    // 0x3bd530: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3bd530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3bd534:
    // 0x3bd534: 0x1000002e  b           . + 4 + (0x2E << 2)
label_3bd538:
    if (ctx->pc == 0x3BD538u) {
        ctx->pc = 0x3BD538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD534u;
        // 0x3bd538: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD53Cu;
        goto label_3bd53c;
    }
    ctx->pc = 0x3BD534u;
    {
        const bool branch_taken_0x3bd534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD534u;
        // 0x3bd538: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd534) {
            ctx->pc = 0x3BD5F0u;
            goto label_3bd5f0;
        }
    }
    ctx->pc = 0x3BD53Cu;
label_3bd53c:
    // 0x3bd53c: 0x14c2000b  bne         $a2, $v0, . + 4 + (0xB << 2)
label_3bd540:
    if (ctx->pc == 0x3BD540u) {
        ctx->pc = 0x3BD540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD53Cu;
        // 0x3bd540: 0x24023998  addiu       $v0, $zero, 0x3998 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD544u;
        goto label_3bd544;
    }
    ctx->pc = 0x3BD53Cu;
    {
        const bool branch_taken_0x3bd53c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BD540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD53Cu;
        // 0x3bd540: 0x24023998  addiu       $v0, $zero, 0x3998 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd53c) {
            ctx->pc = 0x3BD56Cu;
            goto label_3bd56c;
        }
    }
    ctx->pc = 0x3BD544u;
label_3bd544:
    // 0x3bd544: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3bd544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_3bd548:
    // 0x3bd548: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3bd548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_3bd54c:
    // 0x3bd54c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3bd54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3bd550:
    // 0x3bd550: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3bd550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3bd554:
    // 0x3bd554: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3bd554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3bd558:
    // 0x3bd558: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bd558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3bd55c:
    // 0x3bd55c: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x3bd55cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
label_3bd560:
    // 0x3bd560: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x3bd560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_3bd564:
    // 0x3bd564: 0x10000023  b           . + 4 + (0x23 << 2)
label_3bd568:
    if (ctx->pc == 0x3BD568u) {
        ctx->pc = 0x3BD568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD564u;
        // 0x3bd568: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD56Cu;
        goto label_3bd56c;
    }
    ctx->pc = 0x3BD564u;
    {
        const bool branch_taken_0x3bd564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD564u;
        // 0x3bd568: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd564) {
            ctx->pc = 0x3BD5F4u;
            goto label_3bd5f4;
        }
    }
    ctx->pc = 0x3BD56Cu;
label_3bd56c:
    // 0x3bd56c: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x3bd56cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_3bd570:
    // 0x3bd570: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x3bd570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_3bd574:
    // 0x3bd574: 0xde040010  ld          $a0, 0x10($s0)
    ctx->pc = 0x3bd574u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_3bd578:
    // 0x3bd578: 0x3c2300a  movz        $a2, $fp, $v0
    ctx->pc = 0x3bd578u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 30));
label_3bd57c:
    // 0x3bd57c: 0xde050018  ld          $a1, 0x18($s0)
    ctx->pc = 0x3bd57cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_3bd580:
    // 0x3bd580: 0x66182d  daddu       $v1, $v1, $a2
    ctx->pc = 0x3bd580u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 6));
label_3bd584:
    // 0x3bd584: 0x64202d  daddu       $a0, $v1, $a0
    ctx->pc = 0x3bd584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
label_3bd588:
    // 0x3bd588: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x3bd588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3bd58c:
    // 0x3bd58c: 0x85382f  dsubu       $a3, $a0, $a1
    ctx->pc = 0x3bd58cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) - GPR_U64(ctx, 5));
label_3bd590:
    // 0x3bd590: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x3bd590u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
label_3bd594:
    // 0x3bd594: 0x10000003  b           . + 4 + (0x3 << 2)
label_3bd598:
    if (ctx->pc == 0x3BD598u) {
        ctx->pc = 0x3BD598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD594u;
        // 0x3bd598: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD59Cu;
        goto label_3bd59c;
    }
    ctx->pc = 0x3BD594u;
    {
        const bool branch_taken_0x3bd594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD594u;
        // 0x3bd598: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd594) {
            ctx->pc = 0x3BD5A4u;
            goto label_3bd5a4;
        }
    }
    ctx->pc = 0x3BD59Cu;
label_3bd59c:
    // 0x3bd59c: 0x0  nop
    ctx->pc = 0x3bd59cu;
    // NOP
label_3bd5a0:
    // 0x3bd5a0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x3bd5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3bd5a4:
    // 0x3bd5a4: 0x50c0000a  beql        $a2, $zero, . + 4 + (0xA << 2)
label_3bd5a8:
    if (ctx->pc == 0x3BD5A8u) {
        ctx->pc = 0x3BD5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD5A4u;
        // 0x3bd5a8: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD5ACu;
        goto label_3bd5ac;
    }
    ctx->pc = 0x3BD5A4u;
    {
        const bool branch_taken_0x3bd5a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bd5a4) {
            ctx->pc = 0x3BD5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BD5A4u;
            // 0x3bd5a8: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BD5D0u;
            goto label_3bd5d0;
        }
    }
    ctx->pc = 0x3BD5ACu;
label_3bd5ac:
    // 0x3bd5ac: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x3bd5acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
label_3bd5b0:
    // 0x3bd5b0: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x3bd5b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
label_3bd5b4:
    // 0x3bd5b4: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x3bd5b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
label_3bd5b8:
    // 0x3bd5b8: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3bd5b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_3bd5bc:
    // 0x3bd5bc: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x3bd5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
label_3bd5c0:
    // 0x3bd5c0: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x3bd5c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3bd5c4:
    // 0x3bd5c4: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
label_3bd5c8:
    if (ctx->pc == 0x3BD5C8u) {
        ctx->pc = 0x3BD5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD5C4u;
        // 0x3bd5c8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD5CCu;
        goto label_3bd5cc;
    }
    ctx->pc = 0x3BD5C4u;
    {
        const bool branch_taken_0x3bd5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bd5c4) {
            ctx->pc = 0x3BD5C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BD5C4u;
            // 0x3bd5c8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BD5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bd5a0;
        }
    }
    ctx->pc = 0x3BD5CCu;
label_3bd5cc:
    // 0x3bd5cc: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x3bd5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
label_3bd5d0:
    // 0x3bd5d0: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
label_3bd5d4:
    if (ctx->pc == 0x3BD5D4u) {
        ctx->pc = 0x3BD5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD5D0u;
        // 0x3bd5d4: 0xae060000  sw          $a2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD5D8u;
        goto label_3bd5d8;
    }
    ctx->pc = 0x3BD5D0u;
    {
        const bool branch_taken_0x3bd5d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD5D0u;
        // 0x3bd5d4: 0xae060000  sw          $a2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd5d0) {
            ctx->pc = 0x3BD5DCu;
            goto label_3bd5dc;
        }
    }
    ctx->pc = 0x3BD5D8u;
label_3bd5d8:
    // 0x3bd5d8: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x3bd5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
label_3bd5dc:
    // 0x3bd5dc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_3bd5e0:
    if (ctx->pc == 0x3BD5E0u) {
        ctx->pc = 0x3BD5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD5DCu;
        // 0x3bd5e0: 0x26a2ca48  addiu       $v0, $s5, -0x35B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294953544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD5E4u;
        goto label_3bd5e4;
    }
    ctx->pc = 0x3BD5DCu;
    {
        const bool branch_taken_0x3bd5dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD5DCu;
        // 0x3bd5e0: 0x26a2ca48  addiu       $v0, $s5, -0x35B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294953544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd5dc) {
            ctx->pc = 0x3BD5ECu;
            goto label_3bd5ec;
        }
    }
    ctx->pc = 0x3BD5E4u;
label_3bd5e4:
    // 0x3bd5e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3bd5e8:
    if (ctx->pc == 0x3BD5E8u) {
        ctx->pc = 0x3BD5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD5E4u;
        // 0x3bd5e8: 0xacb00000  sw          $s0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD5ECu;
        goto label_3bd5ec;
    }
    ctx->pc = 0x3BD5E4u;
    {
        const bool branch_taken_0x3bd5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD5E4u;
        // 0x3bd5e8: 0xacb00000  sw          $s0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd5e4) {
            ctx->pc = 0x3BD5F0u;
            goto label_3bd5f0;
        }
    }
    ctx->pc = 0x3BD5ECu;
label_3bd5ec:
    // 0x3bd5ec: 0xac500018  sw          $s0, 0x18($v0)
    ctx->pc = 0x3bd5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
label_3bd5f0:
    // 0x3bd5f0: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x3bd5f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3bd5f4:
    // 0x3bd5f4: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
label_3bd5f8:
    if (ctx->pc == 0x3BD5F8u) {
        ctx->pc = 0x3BD5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD5F4u;
        // 0x3bd5f8: 0x2685ca48  addiu       $a1, $s4, -0x35B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294953544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD5FCu;
        goto label_3bd5fc;
    }
    ctx->pc = 0x3BD5F4u;
    {
        const bool branch_taken_0x3bd5f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD5F4u;
        // 0x3bd5f8: 0x2685ca48  addiu       $a1, $s4, -0x35B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294953544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd5f4) {
            ctx->pc = 0x3BD670u;
            goto label_3bd670;
        }
    }
    ctx->pc = 0x3BD5FCu;
label_3bd5fc:
    // 0x3bd5fc: 0xde020020  ld          $v0, 0x20($s0)
    ctx->pc = 0x3bd5fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_3bd600:
    // 0x3bd600: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x3bd600u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_3bd604:
    // 0x3bd604: 0xde040018  ld          $a0, 0x18($s0)
    ctx->pc = 0x3bd604u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_3bd608:
    // 0x3bd608: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3bd608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_3bd60c:
    // 0x3bd60c: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x3bd60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
label_3bd610:
    // 0x3bd610: 0x9e640000  lwu         $a0, 0x0($s3)
    ctx->pc = 0x3bd610u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3bd614:
    // 0x3bd614: 0x8e680010  lw          $t0, 0x10($s3)
    ctx->pc = 0x3bd614u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3bd618:
    // 0x3bd618: 0xde8aca48  ld          $t2, -0x35B8($s4)
    ctx->pc = 0x3bd618u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 20), 4294953544)));
label_3bd61c:
    // 0x3bd61c: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x3bd61cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
label_3bd620:
    // 0x3bd620: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
label_3bd624:
    if (ctx->pc == 0x3BD624u) {
        ctx->pc = 0x3BD624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD620u;
        // 0x3bd624: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD628u;
        goto label_3bd628;
    }
    ctx->pc = 0x3BD620u;
    {
        const bool branch_taken_0x3bd620 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD620u;
        // 0x3bd624: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd620) {
            ctx->pc = 0x3BD644u;
            goto label_3bd644;
        }
    }
    ctx->pc = 0x3BD628u;
label_3bd628:
    // 0x3bd628: 0x9e640000  lwu         $a0, 0x0($s3)
    ctx->pc = 0x3bd628u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3bd62c:
    // 0x3bd62c: 0x2409fbff  addiu       $t1, $zero, -0x401
    ctx->pc = 0x3bd62cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
label_3bd630:
    // 0x3bd630: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3bd630u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_3bd634:
    // 0x3bd634: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x3bd634u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
label_3bd638:
    // 0x3bd638: 0xfe8aca48  sd          $t2, -0x35B8($s4)
    ctx->pc = 0x3bd638u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 4294953544), GPR_U64(ctx, 10));
label_3bd63c:
    // 0x3bd63c: 0xae680010  sw          $t0, 0x10($s3)
    ctx->pc = 0x3bd63cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 8));
label_3bd640:
    // 0x3bd640: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x3bd640u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3bd644:
    // 0x3bd644: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x3bd644u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
label_3bd648:
    // 0x3bd648: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x3bd648u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
label_3bd64c:
    // 0x3bd64c: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x3bd64cu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_3bd650:
    // 0x3bd650: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x3bd650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
label_3bd654:
    // 0x3bd654: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x3bd654u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
label_3bd658:
    // 0x3bd658: 0x1242014  dsllv       $a0, $a0, $t1
    ctx->pc = 0x3bd658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 9) & 0x3F));
label_3bd65c:
    // 0x3bd65c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x3bd65cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3bd660:
    // 0x3bd660: 0x1040ff91  beqz        $v0, . + 4 + (-0x6F << 2)
label_3bd664:
    if (ctx->pc == 0x3BD664u) {
        ctx->pc = 0x3BD664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD660u;
        // 0x3bd664: 0x26c3ca48  addiu       $v1, $s6, -0x35B8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD668u;
        goto label_3bd668;
    }
    ctx->pc = 0x3BD660u;
    {
        const bool branch_taken_0x3bd660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD660u;
        // 0x3bd664: 0x26c3ca48  addiu       $v1, $s6, -0x35B8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd660) {
            ctx->pc = 0x3BD4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bd4a8;
        }
    }
    ctx->pc = 0x3BD668u;
label_3bd668:
    // 0x3bd668: 0x10000003  b           . + 4 + (0x3 << 2)
label_3bd66c:
    if (ctx->pc == 0x3BD66Cu) {
        ctx->pc = 0x3BD66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD668u;
        // 0x3bd66c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD670u;
        goto label_3bd670;
    }
    ctx->pc = 0x3BD668u;
    {
        const bool branch_taken_0x3bd668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD668u;
        // 0x3bd66c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd668) {
            ctx->pc = 0x3BD678u;
            goto label_3bd678;
        }
    }
    ctx->pc = 0x3BD670u;
label_3bd670:
    // 0x3bd670: 0x26c3ca48  addiu       $v1, $s6, -0x35B8
    ctx->pc = 0x3bd670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953544));
label_3bd674:
    // 0x3bd674: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3bd674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3bd678:
    // 0x3bd678: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3bd678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_3bd67c:
    // 0x3bd67c: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x3bd67cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
label_3bd680:
    // 0x3bd680: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x3bd680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_3bd684:
    // 0x3bd684: 0x9c4b0000  lwu         $t3, 0x0($v0)
    ctx->pc = 0x3bd684u;
    SET_GPR_ZE32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3bd688:
    // 0x3bd688: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x3bd688u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 16))); // MMIO: 0x10000810
label_3bd68c:
    // 0x3bd68c: 0xdecaca48  ld          $t2, -0x35B8($s6)
    ctx->pc = 0x3bd68cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 22), 4294953544)));
label_3bd690:
    // 0x3bd690: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x3bd690u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
label_3bd694:
    // 0x3bd694: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
label_3bd698:
    if (ctx->pc == 0x3BD698u) {
        ctx->pc = 0x3BD698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD694u;
        // 0x3bd698: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD69Cu;
        goto label_3bd69c;
    }
    ctx->pc = 0x3BD694u;
    {
        const bool branch_taken_0x3bd694 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD694u;
        // 0x3bd698: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd694) {
            ctx->pc = 0x3BD6B8u;
            goto label_3bd6b8;
        }
    }
    ctx->pc = 0x3BD69Cu;
label_3bd69c:
    // 0x3bd69c: 0x9c4b0000  lwu         $t3, 0x0($v0)
    ctx->pc = 0x3bd69cu;
    SET_GPR_ZE32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3bd6a0:
    // 0x3bd6a0: 0x2409fbff  addiu       $t1, $zero, -0x401
    ctx->pc = 0x3bd6a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
label_3bd6a4:
    // 0x3bd6a4: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3bd6a4u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_3bd6a8:
    // 0x3bd6a8: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x3bd6a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
label_3bd6ac:
    // 0x3bd6ac: 0xfecaca48  sd          $t2, -0x35B8($s6)
    ctx->pc = 0x3bd6acu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 4294953544), GPR_U64(ctx, 10));
label_3bd6b0:
    // 0x3bd6b0: 0xac480010  sw          $t0, 0x10($v0)
    ctx->pc = 0x3bd6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 8));
label_3bd6b4:
    // 0x3bd6b4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x3bd6b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3bd6b8:
    // 0x3bd6b8: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x3bd6b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
label_3bd6bc:
    // 0x3bd6bc: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x3bd6bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
label_3bd6c0:
    // 0x3bd6c0: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x3bd6c0u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_3bd6c4:
    // 0x3bd6c4: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x3bd6c4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
label_3bd6c8:
    // 0x3bd6c8: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x3bd6c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
label_3bd6cc:
    // 0x3bd6cc: 0x12b5814  dsllv       $t3, $t3, $t1
    ctx->pc = 0x3bd6ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (GPR_U32(ctx, 9) & 0x3F));
label_3bd6d0:
    // 0x3bd6d0: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x3bd6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3bd6d4:
    // 0x3bd6d4: 0x4810052  bgez        $a0, . + 4 + (0x52 << 2)
label_3bd6d8:
    if (ctx->pc == 0x3BD6D8u) {
        ctx->pc = 0x3BD6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD6D4u;
        // 0x3bd6d8: 0x8c660018  lw          $a2, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD6DCu;
        goto label_3bd6dc;
    }
    ctx->pc = 0x3BD6D4u;
    {
        const bool branch_taken_0x3bd6d4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x3BD6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD6D4u;
        // 0x3bd6d8: 0x8c660018  lw          $a2, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd6d4) {
            ctx->pc = 0x3BD820u;
            goto label_3bd820;
        }
    }
    ctx->pc = 0x3BD6DCu;
label_3bd6dc:
    // 0x3bd6dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3bd6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_3bd6e0:
    // 0x3bd6e0: 0x34420810  ori         $v0, $v0, 0x810
    ctx->pc = 0x3bd6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
label_3bd6e4:
    // 0x3bd6e4: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x3bd6e4u;
    SET_GPR_S32(ctx, 9, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000810
label_3bd6e8:
    // 0x3bd6e8: 0x54c0000b  bnel        $a2, $zero, . + 4 + (0xB << 2)
label_3bd6ec:
    if (ctx->pc == 0x3BD6ECu) {
        ctx->pc = 0x3BD6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD6E8u;
        // 0x3bd6ec: 0xdcc20020  ld          $v0, 0x20($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD6F0u;
        goto label_3bd6f0;
    }
    ctx->pc = 0x3BD6E8u;
    {
        const bool branch_taken_0x3bd6e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bd6e8) {
            ctx->pc = 0x3BD6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BD6E8u;
            // 0x3bd6ec: 0xdcc20020  ld          $v0, 0x20($a2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BD718u;
            goto label_3bd718;
        }
    }
    ctx->pc = 0x3BD6F0u;
label_3bd6f0:
    // 0x3bd6f0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3bd6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_3bd6f4:
    // 0x3bd6f4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3bd6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3bd6f8:
    // 0x3bd6f8: 0x34630820  ori         $v1, $v1, 0x820
    ctx->pc = 0x3bd6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2080);
label_3bd6fc:
    // 0x3bd6fc: 0x3442f7ff  ori         $v0, $v0, 0xF7FF
    ctx->pc = 0x3bd6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63487);
label_3bd700:
    // 0x3bd700: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x3bd700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
label_3bd704:
    // 0x3bd704: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3bd704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3bd708:
    // 0x3bd708: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x3bd708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
label_3bd70c:
    // 0x3bd70c: 0xac220810  sw          $v0, 0x810($at)
    ctx->pc = 0x3bd70cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 2064), GPR_U32(ctx, 2)); // MMIO: 0x10000810
label_3bd710:
    // 0x3bd710: 0x10000044  b           . + 4 + (0x44 << 2)
label_3bd714:
    if (ctx->pc == 0x3BD714u) {
        ctx->pc = 0x3BD714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD710u;
        // 0x3bd714: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD718u;
        goto label_3bd718;
    }
    ctx->pc = 0x3BD710u;
    {
        const bool branch_taken_0x3bd710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD710u;
        // 0x3bd714: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd710) {
            ctx->pc = 0x3BD824u;
            goto label_3bd824;
        }
    }
    ctx->pc = 0x3BD718u;
label_3bd718:
    // 0x3bd718: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x3bd718u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
label_3bd71c:
    // 0x3bd71c: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x3bd71cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
label_3bd720:
    // 0x3bd720: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3bd720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_3bd724:
    // 0x3bd724: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3bd724u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3bd728:
    // 0x3bd728: 0x10c00018  beqz        $a2, . + 4 + (0x18 << 2)
label_3bd72c:
    if (ctx->pc == 0x3BD72Cu) {
        ctx->pc = 0x3BD72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD728u;
        // 0x3bd72c: 0x44382f  dsubu       $a3, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD730u;
        goto label_3bd730;
    }
    ctx->pc = 0x3BD728u;
    {
        const bool branch_taken_0x3bd728 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD728u;
        // 0x3bd72c: 0x44382f  dsubu       $a3, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd728) {
            ctx->pc = 0x3BD78Cu;
            goto label_3bd78c;
        }
    }
    ctx->pc = 0x3BD730u;
label_3bd730:
    // 0x3bd730: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x3bd730u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
label_3bd734:
    // 0x3bd734: 0x64e37333  daddiu      $v1, $a3, 0x7333
    ctx->pc = 0x3bd734u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)29491);
label_3bd738:
    // 0x3bd738: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x3bd738u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
label_3bd73c:
    // 0x3bd73c: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x3bd73cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
label_3bd740:
    // 0x3bd740: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x3bd740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
label_3bd744:
    // 0x3bd744: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x3bd744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
label_3bd748:
    // 0x3bd748: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x3bd748u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3bd74c:
    // 0x3bd74c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_3bd750:
    if (ctx->pc == 0x3BD750u) {
        ctx->pc = 0x3BD750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD74Cu;
        // 0x3bd750: 0x31280003  andi        $t0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD754u;
        goto label_3bd754;
    }
    ctx->pc = 0x3BD74Cu;
    {
        const bool branch_taken_0x3bd74c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD74Cu;
        // 0x3bd750: 0x31280003  andi        $t0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd74c) {
            ctx->pc = 0x3BD78Cu;
            goto label_3bd78c;
        }
    }
    ctx->pc = 0x3BD754u;
label_3bd754:
    // 0x3bd754: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3bd754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bd758:
    // 0x3bd758: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3bd758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3bd75c:
    // 0x3bd75c: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
label_3bd760:
    if (ctx->pc == 0x3BD760u) {
        ctx->pc = 0x3BD760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD75Cu;
        // 0x3bd760: 0x64e37333  daddiu      $v1, $a3, 0x7333 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)29491);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD764u;
        goto label_3bd764;
    }
    ctx->pc = 0x3BD75Cu;
    {
        const bool branch_taken_0x3bd75c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD75Cu;
        // 0x3bd760: 0x64e37333  daddiu      $v1, $a3, 0x7333 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)29491);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd75c) {
            ctx->pc = 0x3BD790u;
            goto label_3bd790;
        }
    }
    ctx->pc = 0x3BD764u;
label_3bd764:
    // 0x3bd764: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x3bd764u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
label_3bd768:
    // 0x3bd768: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x3bd768u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
label_3bd76c:
    // 0x3bd76c: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x3bd76cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
label_3bd770:
    // 0x3bd770: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x3bd770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
label_3bd774:
    // 0x3bd774: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x3bd774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
label_3bd778:
    // 0x3bd778: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x3bd778u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3bd77c:
    // 0x3bd77c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_3bd780:
    if (ctx->pc == 0x3BD780u) {
        ctx->pc = 0x3BD780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD77Cu;
        // 0x3bd780: 0xeb102f  dsubu       $v0, $a3, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) - GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD784u;
        goto label_3bd784;
    }
    ctx->pc = 0x3BD77Cu;
    {
        const bool branch_taken_0x3bd77c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bd77c) {
            ctx->pc = 0x3BD780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BD77Cu;
            // 0x3bd780: 0xeb102f  dsubu       $v0, $a3, $t3 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) - GPR_U64(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BD794u;
            goto label_3bd794;
        }
    }
    ctx->pc = 0x3BD784u;
label_3bd784:
    // 0x3bd784: 0x1000fff4  b           . + 4 + (-0xC << 2)
label_3bd788:
    if (ctx->pc == 0x3BD788u) {
        ctx->pc = 0x3BD788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD784u;
        // 0x3bd788: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD78Cu;
        goto label_3bd78c;
    }
    ctx->pc = 0x3BD784u;
    {
        const bool branch_taken_0x3bd784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD784u;
        // 0x3bd788: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd784) {
            ctx->pc = 0x3BD758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bd758;
        }
    }
    ctx->pc = 0x3BD78Cu;
label_3bd78c:
    // 0x3bd78c: 0x31280003  andi        $t0, $t1, 0x3
    ctx->pc = 0x3bd78cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
label_3bd790:
    // 0x3bd790: 0xeb102f  dsubu       $v0, $a3, $t3
    ctx->pc = 0x3bd790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) - GPR_U64(ctx, 11));
label_3bd794:
    // 0x3bd794: 0x28427333  slti        $v0, $v0, 0x7333
    ctx->pc = 0x3bd794u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29491) ? 1 : 0);
label_3bd798:
    // 0x3bd798: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_3bd79c:
    if (ctx->pc == 0x3BD79Cu) {
        ctx->pc = 0x3BD79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD798u;
        // 0x3bd79c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD7A0u;
        goto label_3bd7a0;
    }
    ctx->pc = 0x3BD798u;
    {
        const bool branch_taken_0x3bd798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD798u;
        // 0x3bd79c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd798) {
            ctx->pc = 0x3BD7ECu;
            goto label_3bd7ec;
        }
    }
    ctx->pc = 0x3BD7A0u;
label_3bd7a0:
    // 0x3bd7a0: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x3bd7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_3bd7a4:
    // 0x3bd7a4: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x3bd7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
label_3bd7a8:
    // 0x3bd7a8: 0x24027333  addiu       $v0, $zero, 0x7333
    ctx->pc = 0x3bd7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29491));
label_3bd7ac:
    // 0x3bd7ac: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3bd7acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3bd7b0:
    // 0x3bd7b0: 0x821016  dsrlv       $v0, $v0, $a0
    ctx->pc = 0x3bd7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 4) & 0x3F));
label_3bd7b4:
    // 0x3bd7b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3bd7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3bd7b8:
    // 0x3bd7b8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3bd7b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3bd7bc:
    // 0x3bd7bc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3bd7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_3bd7c0:
    // 0x3bd7c0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3bd7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3bd7c4:
    // 0x3bd7c4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3bd7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3bd7c8:
    // 0x3bd7c8: 0x34840820  ori         $a0, $a0, 0x820
    ctx->pc = 0x3bd7c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2080);
label_3bd7cc:
    // 0x3bd7cc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3bd7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_3bd7d0:
    // 0x3bd7d0: 0x3463f7ff  ori         $v1, $v1, 0xF7FF
    ctx->pc = 0x3bd7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63487);
label_3bd7d4:
    // 0x3bd7d4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3bd7d4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000820
label_3bd7d8:
    // 0x3bd7d8: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x3bd7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_3bd7dc:
    // 0x3bd7dc: 0x34420810  ori         $v0, $v0, 0x810
    ctx->pc = 0x3bd7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
label_3bd7e0:
    // 0x3bd7e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3bd7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3bd7e4:
    // 0x3bd7e4: 0x1000000f  b           . + 4 + (0xF << 2)
label_3bd7e8:
    if (ctx->pc == 0x3BD7E8u) {
        ctx->pc = 0x3BD7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD7E4u;
        // 0x3bd7e8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD7ECu;
        goto label_3bd7ec;
    }
    ctx->pc = 0x3BD7E4u;
    {
        const bool branch_taken_0x3bd7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD7E4u;
        // 0x3bd7e8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd7e4) {
            ctx->pc = 0x3BD824u;
            goto label_3bd824;
        }
    }
    ctx->pc = 0x3BD7ECu;
label_3bd7ec:
    // 0x3bd7ec: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3bd7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3bd7f0:
    // 0x3bd7f0: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x3bd7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_3bd7f4:
    // 0x3bd7f4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3bd7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_3bd7f8:
    // 0x3bd7f8: 0x3463f7ff  ori         $v1, $v1, 0xF7FF
    ctx->pc = 0x3bd7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63487);
label_3bd7fc:
    // 0x3bd7fc: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x3bd7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_3bd800:
    // 0x3bd800: 0xa72816  dsrlv       $a1, $a3, $a1
    ctx->pc = 0x3bd800u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) >> (GPR_U32(ctx, 5) & 0x3F));
label_3bd804:
    // 0x3bd804: 0x34840810  ori         $a0, $a0, 0x810
    ctx->pc = 0x3bd804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2064);
label_3bd808:
    // 0x3bd808: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3bd808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_3bd80c:
    // 0x3bd80c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3bd80cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3bd810:
    // 0x3bd810: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3bd810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_3bd814:
    // 0x3bd814: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3bd814u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_3bd818:
    // 0x3bd818: 0x34420820  ori         $v0, $v0, 0x820
    ctx->pc = 0x3bd818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2080);
label_3bd81c:
    // 0x3bd81c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3bd81cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3bd820:
    // 0x3bd820: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3bd820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_3bd824:
    // 0x3bd824: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x3bd824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_3bd828:
    // 0x3bd828: 0x9c430000  lwu         $v1, 0x0($v0)
    ctx->pc = 0x3bd828u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3bd82c:
    // 0x3bd82c: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x3bd82cu;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 16))); // MMIO: 0x10000810
label_3bd830:
    // 0x3bd830: 0xdecaca48  ld          $t2, -0x35B8($s6)
    ctx->pc = 0x3bd830u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 22), 4294953544)));
label_3bd834:
    // 0x3bd834: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x3bd834u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
label_3bd838:
    // 0x3bd838: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
label_3bd83c:
    if (ctx->pc == 0x3BD83Cu) {
        ctx->pc = 0x3BD83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD838u;
        // 0x3bd83c: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD840u;
        goto label_3bd840;
    }
    ctx->pc = 0x3BD838u;
    {
        const bool branch_taken_0x3bd838 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD838u;
        // 0x3bd83c: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd838) {
            ctx->pc = 0x3BD85Cu;
            goto label_3bd85c;
        }
    }
    ctx->pc = 0x3BD840u;
label_3bd840:
    // 0x3bd840: 0x9c430000  lwu         $v1, 0x0($v0)
    ctx->pc = 0x3bd840u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3bd844:
    // 0x3bd844: 0x2409fbff  addiu       $t1, $zero, -0x401
    ctx->pc = 0x3bd844u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
label_3bd848:
    // 0x3bd848: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3bd848u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_3bd84c:
    // 0x3bd84c: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x3bd84cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
label_3bd850:
    // 0x3bd850: 0xfecaca48  sd          $t2, -0x35B8($s6)
    ctx->pc = 0x3bd850u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 4294953544), GPR_U64(ctx, 10));
label_3bd854:
    // 0x3bd854: 0xac480010  sw          $t0, 0x10($v0)
    ctx->pc = 0x3bd854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 8));
label_3bd858:
    // 0x3bd858: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x3bd858u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3bd85c:
    // 0x3bd85c: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x3bd85cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
label_3bd860:
    // 0x3bd860: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x3bd860u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
label_3bd864:
    // 0x3bd864: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x3bd864u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_3bd868:
    // 0x3bd868: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x3bd868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
label_3bd86c:
    // 0x3bd86c: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x3bd86cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
label_3bd870:
    // 0x3bd870: 0x1231814  dsllv       $v1, $v1, $t1
    ctx->pc = 0x3bd870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 9) & 0x3F));
label_3bd874:
    // 0x3bd874: 0xf  sync
    ctx->pc = 0x3bd874u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3bd878:
    // 0x3bd878: 0x42000038  ei
    ctx->pc = 0x3bd878u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_3bd87c:
    // 0x3bd87c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3bd87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3bd880:
    // 0x3bd880: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bd880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bd884:
    // 0x3bd884: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x3bd884u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3bd888:
    // 0x3bd888: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x3bd888u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3bd88c:
    // 0x3bd88c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x3bd88cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3bd890:
    // 0x3bd890: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x3bd890u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3bd894:
    // 0x3bd894: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3bd894u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3bd898:
    // 0x3bd898: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3bd898u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3bd89c:
    // 0x3bd89c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3bd89cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3bd8a0:
    // 0x3bd8a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3bd8a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3bd8a4:
    // 0x3bd8a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3bd8a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3bd8a8:
    // 0x3bd8a8: 0x3e00008  jr          $ra
label_3bd8ac:
    if (ctx->pc == 0x3BD8ACu) {
        ctx->pc = 0x3BD8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD8A8u;
        // 0x3bd8ac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD8B0u;
        goto label_fallthrough_0x3bd8a8;
    }
    ctx->pc = 0x3BD8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BD8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD8A8u;
        // 0x3bd8ac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3bd8a8:
    ctx->pc = 0x3BD8B0u;
}
