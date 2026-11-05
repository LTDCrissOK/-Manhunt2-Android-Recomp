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

// Function: sub_001FE608
// Address: 0x1fe608 - 0x1feb40
void sub_001FE608_0x1fe608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE608_0x1fe608");
#endif

    switch (ctx->pc) {
        case 0x1fe608u: goto label_1fe608;
        case 0x1fe60cu: goto label_1fe60c;
        case 0x1fe610u: goto label_1fe610;
        case 0x1fe614u: goto label_1fe614;
        case 0x1fe618u: goto label_1fe618;
        case 0x1fe61cu: goto label_1fe61c;
        case 0x1fe620u: goto label_1fe620;
        case 0x1fe624u: goto label_1fe624;
        case 0x1fe628u: goto label_1fe628;
        case 0x1fe62cu: goto label_1fe62c;
        case 0x1fe630u: goto label_1fe630;
        case 0x1fe634u: goto label_1fe634;
        case 0x1fe638u: goto label_1fe638;
        case 0x1fe63cu: goto label_1fe63c;
        case 0x1fe640u: goto label_1fe640;
        case 0x1fe644u: goto label_1fe644;
        case 0x1fe648u: goto label_1fe648;
        case 0x1fe64cu: goto label_1fe64c;
        case 0x1fe650u: goto label_1fe650;
        case 0x1fe654u: goto label_1fe654;
        case 0x1fe658u: goto label_1fe658;
        case 0x1fe65cu: goto label_1fe65c;
        case 0x1fe660u: goto label_1fe660;
        case 0x1fe664u: goto label_1fe664;
        case 0x1fe668u: goto label_1fe668;
        case 0x1fe66cu: goto label_1fe66c;
        case 0x1fe670u: goto label_1fe670;
        case 0x1fe674u: goto label_1fe674;
        case 0x1fe678u: goto label_1fe678;
        case 0x1fe67cu: goto label_1fe67c;
        case 0x1fe680u: goto label_1fe680;
        case 0x1fe684u: goto label_1fe684;
        case 0x1fe688u: goto label_1fe688;
        case 0x1fe68cu: goto label_1fe68c;
        case 0x1fe690u: goto label_1fe690;
        case 0x1fe694u: goto label_1fe694;
        case 0x1fe698u: goto label_1fe698;
        case 0x1fe69cu: goto label_1fe69c;
        case 0x1fe6a0u: goto label_1fe6a0;
        case 0x1fe6a4u: goto label_1fe6a4;
        case 0x1fe6a8u: goto label_1fe6a8;
        case 0x1fe6acu: goto label_1fe6ac;
        case 0x1fe6b0u: goto label_1fe6b0;
        case 0x1fe6b4u: goto label_1fe6b4;
        case 0x1fe6b8u: goto label_1fe6b8;
        case 0x1fe6bcu: goto label_1fe6bc;
        case 0x1fe6c0u: goto label_1fe6c0;
        case 0x1fe6c4u: goto label_1fe6c4;
        case 0x1fe6c8u: goto label_1fe6c8;
        case 0x1fe6ccu: goto label_1fe6cc;
        case 0x1fe6d0u: goto label_1fe6d0;
        case 0x1fe6d4u: goto label_1fe6d4;
        case 0x1fe6d8u: goto label_1fe6d8;
        case 0x1fe6dcu: goto label_1fe6dc;
        case 0x1fe6e0u: goto label_1fe6e0;
        case 0x1fe6e4u: goto label_1fe6e4;
        case 0x1fe6e8u: goto label_1fe6e8;
        case 0x1fe6ecu: goto label_1fe6ec;
        case 0x1fe6f0u: goto label_1fe6f0;
        case 0x1fe6f4u: goto label_1fe6f4;
        case 0x1fe6f8u: goto label_1fe6f8;
        case 0x1fe6fcu: goto label_1fe6fc;
        case 0x1fe700u: goto label_1fe700;
        case 0x1fe704u: goto label_1fe704;
        case 0x1fe708u: goto label_1fe708;
        case 0x1fe70cu: goto label_1fe70c;
        case 0x1fe710u: goto label_1fe710;
        case 0x1fe714u: goto label_1fe714;
        case 0x1fe718u: goto label_1fe718;
        case 0x1fe71cu: goto label_1fe71c;
        case 0x1fe720u: goto label_1fe720;
        case 0x1fe724u: goto label_1fe724;
        case 0x1fe728u: goto label_1fe728;
        case 0x1fe72cu: goto label_1fe72c;
        case 0x1fe730u: goto label_1fe730;
        case 0x1fe734u: goto label_1fe734;
        case 0x1fe738u: goto label_1fe738;
        case 0x1fe73cu: goto label_1fe73c;
        case 0x1fe740u: goto label_1fe740;
        case 0x1fe744u: goto label_1fe744;
        case 0x1fe748u: goto label_1fe748;
        case 0x1fe74cu: goto label_1fe74c;
        case 0x1fe750u: goto label_1fe750;
        case 0x1fe754u: goto label_1fe754;
        case 0x1fe758u: goto label_1fe758;
        case 0x1fe75cu: goto label_1fe75c;
        case 0x1fe760u: goto label_1fe760;
        case 0x1fe764u: goto label_1fe764;
        case 0x1fe768u: goto label_1fe768;
        case 0x1fe76cu: goto label_1fe76c;
        case 0x1fe770u: goto label_1fe770;
        case 0x1fe774u: goto label_1fe774;
        case 0x1fe778u: goto label_1fe778;
        case 0x1fe77cu: goto label_1fe77c;
        case 0x1fe780u: goto label_1fe780;
        case 0x1fe784u: goto label_1fe784;
        case 0x1fe788u: goto label_1fe788;
        case 0x1fe78cu: goto label_1fe78c;
        case 0x1fe790u: goto label_1fe790;
        case 0x1fe794u: goto label_1fe794;
        case 0x1fe798u: goto label_1fe798;
        case 0x1fe79cu: goto label_1fe79c;
        case 0x1fe7a0u: goto label_1fe7a0;
        case 0x1fe7a4u: goto label_1fe7a4;
        case 0x1fe7a8u: goto label_1fe7a8;
        case 0x1fe7acu: goto label_1fe7ac;
        case 0x1fe7b0u: goto label_1fe7b0;
        case 0x1fe7b4u: goto label_1fe7b4;
        case 0x1fe7b8u: goto label_1fe7b8;
        case 0x1fe7bcu: goto label_1fe7bc;
        case 0x1fe7c0u: goto label_1fe7c0;
        case 0x1fe7c4u: goto label_1fe7c4;
        case 0x1fe7c8u: goto label_1fe7c8;
        case 0x1fe7ccu: goto label_1fe7cc;
        case 0x1fe7d0u: goto label_1fe7d0;
        case 0x1fe7d4u: goto label_1fe7d4;
        case 0x1fe7d8u: goto label_1fe7d8;
        case 0x1fe7dcu: goto label_1fe7dc;
        case 0x1fe7e0u: goto label_1fe7e0;
        case 0x1fe7e4u: goto label_1fe7e4;
        case 0x1fe7e8u: goto label_1fe7e8;
        case 0x1fe7ecu: goto label_1fe7ec;
        case 0x1fe7f0u: goto label_1fe7f0;
        case 0x1fe7f4u: goto label_1fe7f4;
        case 0x1fe7f8u: goto label_1fe7f8;
        case 0x1fe7fcu: goto label_1fe7fc;
        case 0x1fe800u: goto label_1fe800;
        case 0x1fe804u: goto label_1fe804;
        case 0x1fe808u: goto label_1fe808;
        case 0x1fe80cu: goto label_1fe80c;
        case 0x1fe810u: goto label_1fe810;
        case 0x1fe814u: goto label_1fe814;
        case 0x1fe818u: goto label_1fe818;
        case 0x1fe81cu: goto label_1fe81c;
        case 0x1fe820u: goto label_1fe820;
        case 0x1fe824u: goto label_1fe824;
        case 0x1fe828u: goto label_1fe828;
        case 0x1fe82cu: goto label_1fe82c;
        case 0x1fe830u: goto label_1fe830;
        case 0x1fe834u: goto label_1fe834;
        case 0x1fe838u: goto label_1fe838;
        case 0x1fe83cu: goto label_1fe83c;
        case 0x1fe840u: goto label_1fe840;
        case 0x1fe844u: goto label_1fe844;
        case 0x1fe848u: goto label_1fe848;
        case 0x1fe84cu: goto label_1fe84c;
        case 0x1fe850u: goto label_1fe850;
        case 0x1fe854u: goto label_1fe854;
        case 0x1fe858u: goto label_1fe858;
        case 0x1fe85cu: goto label_1fe85c;
        case 0x1fe860u: goto label_1fe860;
        case 0x1fe864u: goto label_1fe864;
        case 0x1fe868u: goto label_1fe868;
        case 0x1fe86cu: goto label_1fe86c;
        case 0x1fe870u: goto label_1fe870;
        case 0x1fe874u: goto label_1fe874;
        case 0x1fe878u: goto label_1fe878;
        case 0x1fe87cu: goto label_1fe87c;
        case 0x1fe880u: goto label_1fe880;
        case 0x1fe884u: goto label_1fe884;
        case 0x1fe888u: goto label_1fe888;
        case 0x1fe88cu: goto label_1fe88c;
        case 0x1fe890u: goto label_1fe890;
        case 0x1fe894u: goto label_1fe894;
        case 0x1fe898u: goto label_1fe898;
        case 0x1fe89cu: goto label_1fe89c;
        case 0x1fe8a0u: goto label_1fe8a0;
        case 0x1fe8a4u: goto label_1fe8a4;
        case 0x1fe8a8u: goto label_1fe8a8;
        case 0x1fe8acu: goto label_1fe8ac;
        case 0x1fe8b0u: goto label_1fe8b0;
        case 0x1fe8b4u: goto label_1fe8b4;
        case 0x1fe8b8u: goto label_1fe8b8;
        case 0x1fe8bcu: goto label_1fe8bc;
        case 0x1fe8c0u: goto label_1fe8c0;
        case 0x1fe8c4u: goto label_1fe8c4;
        case 0x1fe8c8u: goto label_1fe8c8;
        case 0x1fe8ccu: goto label_1fe8cc;
        case 0x1fe8d0u: goto label_1fe8d0;
        case 0x1fe8d4u: goto label_1fe8d4;
        case 0x1fe8d8u: goto label_1fe8d8;
        case 0x1fe8dcu: goto label_1fe8dc;
        case 0x1fe8e0u: goto label_1fe8e0;
        case 0x1fe8e4u: goto label_1fe8e4;
        case 0x1fe8e8u: goto label_1fe8e8;
        case 0x1fe8ecu: goto label_1fe8ec;
        case 0x1fe8f0u: goto label_1fe8f0;
        case 0x1fe8f4u: goto label_1fe8f4;
        case 0x1fe8f8u: goto label_1fe8f8;
        case 0x1fe8fcu: goto label_1fe8fc;
        case 0x1fe900u: goto label_1fe900;
        case 0x1fe904u: goto label_1fe904;
        case 0x1fe908u: goto label_1fe908;
        case 0x1fe90cu: goto label_1fe90c;
        case 0x1fe910u: goto label_1fe910;
        case 0x1fe914u: goto label_1fe914;
        case 0x1fe918u: goto label_1fe918;
        case 0x1fe91cu: goto label_1fe91c;
        case 0x1fe920u: goto label_1fe920;
        case 0x1fe924u: goto label_1fe924;
        case 0x1fe928u: goto label_1fe928;
        case 0x1fe92cu: goto label_1fe92c;
        case 0x1fe930u: goto label_1fe930;
        case 0x1fe934u: goto label_1fe934;
        case 0x1fe938u: goto label_1fe938;
        case 0x1fe93cu: goto label_1fe93c;
        case 0x1fe940u: goto label_1fe940;
        case 0x1fe944u: goto label_1fe944;
        case 0x1fe948u: goto label_1fe948;
        case 0x1fe94cu: goto label_1fe94c;
        case 0x1fe950u: goto label_1fe950;
        case 0x1fe954u: goto label_1fe954;
        case 0x1fe958u: goto label_1fe958;
        case 0x1fe95cu: goto label_1fe95c;
        case 0x1fe960u: goto label_1fe960;
        case 0x1fe964u: goto label_1fe964;
        case 0x1fe968u: goto label_1fe968;
        case 0x1fe96cu: goto label_1fe96c;
        case 0x1fe970u: goto label_1fe970;
        case 0x1fe974u: goto label_1fe974;
        case 0x1fe978u: goto label_1fe978;
        case 0x1fe97cu: goto label_1fe97c;
        case 0x1fe980u: goto label_1fe980;
        case 0x1fe984u: goto label_1fe984;
        case 0x1fe988u: goto label_1fe988;
        case 0x1fe98cu: goto label_1fe98c;
        case 0x1fe990u: goto label_1fe990;
        case 0x1fe994u: goto label_1fe994;
        case 0x1fe998u: goto label_1fe998;
        case 0x1fe99cu: goto label_1fe99c;
        case 0x1fe9a0u: goto label_1fe9a0;
        case 0x1fe9a4u: goto label_1fe9a4;
        case 0x1fe9a8u: goto label_1fe9a8;
        case 0x1fe9acu: goto label_1fe9ac;
        case 0x1fe9b0u: goto label_1fe9b0;
        case 0x1fe9b4u: goto label_1fe9b4;
        case 0x1fe9b8u: goto label_1fe9b8;
        case 0x1fe9bcu: goto label_1fe9bc;
        case 0x1fe9c0u: goto label_1fe9c0;
        case 0x1fe9c4u: goto label_1fe9c4;
        case 0x1fe9c8u: goto label_1fe9c8;
        case 0x1fe9ccu: goto label_1fe9cc;
        case 0x1fe9d0u: goto label_1fe9d0;
        case 0x1fe9d4u: goto label_1fe9d4;
        case 0x1fe9d8u: goto label_1fe9d8;
        case 0x1fe9dcu: goto label_1fe9dc;
        case 0x1fe9e0u: goto label_1fe9e0;
        case 0x1fe9e4u: goto label_1fe9e4;
        case 0x1fe9e8u: goto label_1fe9e8;
        case 0x1fe9ecu: goto label_1fe9ec;
        case 0x1fe9f0u: goto label_1fe9f0;
        case 0x1fe9f4u: goto label_1fe9f4;
        case 0x1fe9f8u: goto label_1fe9f8;
        case 0x1fe9fcu: goto label_1fe9fc;
        case 0x1fea00u: goto label_1fea00;
        case 0x1fea04u: goto label_1fea04;
        case 0x1fea08u: goto label_1fea08;
        case 0x1fea0cu: goto label_1fea0c;
        case 0x1fea10u: goto label_1fea10;
        case 0x1fea14u: goto label_1fea14;
        case 0x1fea18u: goto label_1fea18;
        case 0x1fea1cu: goto label_1fea1c;
        case 0x1fea20u: goto label_1fea20;
        case 0x1fea24u: goto label_1fea24;
        case 0x1fea28u: goto label_1fea28;
        case 0x1fea2cu: goto label_1fea2c;
        case 0x1fea30u: goto label_1fea30;
        case 0x1fea34u: goto label_1fea34;
        case 0x1fea38u: goto label_1fea38;
        case 0x1fea3cu: goto label_1fea3c;
        case 0x1fea40u: goto label_1fea40;
        case 0x1fea44u: goto label_1fea44;
        case 0x1fea48u: goto label_1fea48;
        case 0x1fea4cu: goto label_1fea4c;
        case 0x1fea50u: goto label_1fea50;
        case 0x1fea54u: goto label_1fea54;
        case 0x1fea58u: goto label_1fea58;
        case 0x1fea5cu: goto label_1fea5c;
        case 0x1fea60u: goto label_1fea60;
        case 0x1fea64u: goto label_1fea64;
        case 0x1fea68u: goto label_1fea68;
        case 0x1fea6cu: goto label_1fea6c;
        case 0x1fea70u: goto label_1fea70;
        case 0x1fea74u: goto label_1fea74;
        case 0x1fea78u: goto label_1fea78;
        case 0x1fea7cu: goto label_1fea7c;
        case 0x1fea80u: goto label_1fea80;
        case 0x1fea84u: goto label_1fea84;
        case 0x1fea88u: goto label_1fea88;
        case 0x1fea8cu: goto label_1fea8c;
        case 0x1fea90u: goto label_1fea90;
        case 0x1fea94u: goto label_1fea94;
        case 0x1fea98u: goto label_1fea98;
        case 0x1fea9cu: goto label_1fea9c;
        case 0x1feaa0u: goto label_1feaa0;
        case 0x1feaa4u: goto label_1feaa4;
        case 0x1feaa8u: goto label_1feaa8;
        case 0x1feaacu: goto label_1feaac;
        case 0x1feab0u: goto label_1feab0;
        case 0x1feab4u: goto label_1feab4;
        case 0x1feab8u: goto label_1feab8;
        case 0x1feabcu: goto label_1feabc;
        case 0x1feac0u: goto label_1feac0;
        case 0x1feac4u: goto label_1feac4;
        case 0x1feac8u: goto label_1feac8;
        case 0x1feaccu: goto label_1feacc;
        case 0x1fead0u: goto label_1fead0;
        case 0x1fead4u: goto label_1fead4;
        case 0x1fead8u: goto label_1fead8;
        case 0x1feadcu: goto label_1feadc;
        case 0x1feae0u: goto label_1feae0;
        case 0x1feae4u: goto label_1feae4;
        case 0x1feae8u: goto label_1feae8;
        case 0x1feaecu: goto label_1feaec;
        case 0x1feaf0u: goto label_1feaf0;
        case 0x1feaf4u: goto label_1feaf4;
        case 0x1feaf8u: goto label_1feaf8;
        case 0x1feafcu: goto label_1feafc;
        case 0x1feb00u: goto label_1feb00;
        case 0x1feb04u: goto label_1feb04;
        case 0x1feb08u: goto label_1feb08;
        case 0x1feb0cu: goto label_1feb0c;
        case 0x1feb10u: goto label_1feb10;
        case 0x1feb14u: goto label_1feb14;
        case 0x1feb18u: goto label_1feb18;
        case 0x1feb1cu: goto label_1feb1c;
        case 0x1feb20u: goto label_1feb20;
        case 0x1feb24u: goto label_1feb24;
        case 0x1feb28u: goto label_1feb28;
        case 0x1feb2cu: goto label_1feb2c;
        case 0x1feb30u: goto label_1feb30;
        case 0x1feb34u: goto label_1feb34;
        case 0x1feb38u: goto label_1feb38;
        case 0x1feb3cu: goto label_1feb3c;
        default: break;
    }

    ctx->pc = 0x1fe608u;

label_1fe608:
    // 0x1fe608: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1fe608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1fe60c:
    // 0x1fe60c: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x1fe60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_1fe610:
    // 0x1fe610: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x1fe610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_1fe614:
    // 0x1fe614: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fe614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fe618:
    // 0x1fe618: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x1fe618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
label_1fe61c:
    // 0x1fe61c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1fe61cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fe620:
    // 0x1fe620: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x1fe620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_1fe624:
    // 0x1fe624: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1fe624u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fe628:
    // 0x1fe628: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x1fe628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
label_1fe62c:
    // 0x1fe62c: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x1fe62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_1fe630:
    // 0x1fe630: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x1fe630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
label_1fe634:
    // 0x1fe634: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x1fe634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
label_1fe638:
    // 0x1fe638: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1fe638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
label_1fe63c:
    // 0x1fe63c: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x1fe63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
label_1fe640:
    // 0x1fe640: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x1fe640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1fe644:
    // 0x1fe644: 0x10800132  beqz        $a0, . + 4 + (0x132 << 2)
label_1fe648:
    if (ctx->pc == 0x1FE648u) {
        ctx->pc = 0x1FE648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE644u;
        // 0x1fe648: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE64Cu;
        goto label_1fe64c;
    }
    ctx->pc = 0x1FE644u;
    {
        const bool branch_taken_0x1fe644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE644u;
        // 0x1fe648: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe644) {
            ctx->pc = 0x1FEB10u;
            goto label_1feb10;
        }
    }
    ctx->pc = 0x1FE64Cu;
label_1fe64c:
    // 0x1fe64c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1fe64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1fe650:
    // 0x1fe650: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1fe650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1fe654:
    // 0x1fe654: 0x60f809  jalr        $v1
label_1fe658:
    if (ctx->pc == 0x1FE658u) {
        ctx->pc = 0x1FE65Cu;
        goto label_1fe65c;
    }
    ctx->pc = 0x1FE654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FE65Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE654u, 0x1FE65Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE65Cu;
label_1fe65c:
    // 0x1fe65c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fe65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe660:
    // 0x1fe660: 0x12020070  beq         $s0, $v0, . + 4 + (0x70 << 2)
label_1fe664:
    if (ctx->pc == 0x1FE664u) {
        ctx->pc = 0x1FE664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE660u;
        // 0x1fe664: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE668u;
        goto label_1fe668;
    }
    ctx->pc = 0x1FE660u;
    {
        const bool branch_taken_0x1fe660 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FE664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE660u;
        // 0x1fe664: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe660) {
            ctx->pc = 0x1FE824u;
            goto label_1fe824;
        }
    }
    ctx->pc = 0x1FE668u;
label_1fe668:
    // 0x1fe668: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1fe66c:
    if (ctx->pc == 0x1FE66Cu) {
        ctx->pc = 0x1FE66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE668u;
        // 0x1fe66c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE670u;
        goto label_1fe670;
    }
    ctx->pc = 0x1FE668u;
    {
        const bool branch_taken_0x1fe668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe668) {
            ctx->pc = 0x1FE66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE668u;
            // 0x1fe66c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE680u;
            goto label_1fe680;
        }
    }
    ctx->pc = 0x1FE670u;
label_1fe670:
    // 0x1fe670: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_1fe674:
    if (ctx->pc == 0x1FE674u) {
        ctx->pc = 0x1FE674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE670u;
        // 0x1fe674: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE678u;
        goto label_1fe678;
    }
    ctx->pc = 0x1FE670u;
    {
        const bool branch_taken_0x1fe670 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE670u;
        // 0x1fe674: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe670) {
            ctx->pc = 0x1FE690u;
            goto label_1fe690;
        }
    }
    ctx->pc = 0x1FE678u;
label_1fe678:
    // 0x1fe678: 0x10000127  b           . + 4 + (0x127 << 2)
label_1fe67c:
    if (ctx->pc == 0x1FE67Cu) {
        ctx->pc = 0x1FE67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE678u;
        // 0x1fe67c: 0xdfb10088  ld          $s1, 0x88($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE680u;
        goto label_1fe680;
    }
    ctx->pc = 0x1FE678u;
    {
        const bool branch_taken_0x1fe678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE678u;
        // 0x1fe67c: 0xdfb10088  ld          $s1, 0x88($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe678) {
            ctx->pc = 0x1FEB18u;
            goto label_1feb18;
        }
    }
    ctx->pc = 0x1FE680u;
label_1fe680:
    // 0x1fe680: 0x120200cc  beq         $s0, $v0, . + 4 + (0xCC << 2)
label_1fe684:
    if (ctx->pc == 0x1FE684u) {
        ctx->pc = 0x1FE684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE680u;
        // 0x1fe684: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE688u;
        goto label_1fe688;
    }
    ctx->pc = 0x1FE680u;
    {
        const bool branch_taken_0x1fe680 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FE684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE680u;
        // 0x1fe684: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe680) {
            ctx->pc = 0x1FE9B4u;
            goto label_1fe9b4;
        }
    }
    ctx->pc = 0x1FE688u;
label_1fe688:
    // 0x1fe688: 0x10000123  b           . + 4 + (0x123 << 2)
label_1fe68c:
    if (ctx->pc == 0x1FE68Cu) {
        ctx->pc = 0x1FE68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE688u;
        // 0x1fe68c: 0xdfb10088  ld          $s1, 0x88($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE690u;
        goto label_1fe690;
    }
    ctx->pc = 0x1FE688u;
    {
        const bool branch_taken_0x1fe688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE688u;
        // 0x1fe68c: 0xdfb10088  ld          $s1, 0x88($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe688) {
            ctx->pc = 0x1FEB18u;
            goto label_1feb18;
        }
    }
    ctx->pc = 0x1FE690u;
label_1fe690:
    // 0x1fe690: 0xc0d737c  jal         func_35CDF0
label_1fe694:
    if (ctx->pc == 0x1FE694u) {
        ctx->pc = 0x1FE694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE690u;
        // 0x1fe694: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE698u;
        goto label_1fe698;
    }
    ctx->pc = 0x1FE690u;
    SET_GPR_U32(ctx, 31, 0x1FE698u);
    ctx->pc = 0x1FE694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE690u;
    // 0x1fe694: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x1FE690u, 0x1FE698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE698u;
label_1fe698:
    // 0x1fe698: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1fe698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1fe69c:
    // 0x1fe69c: 0x8c629e40  lw          $v0, -0x61C0($v1)
    ctx->pc = 0x1fe69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942272)));
label_1fe6a0:
    // 0x1fe6a0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1fe6a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1fe6a4:
    // 0x1fe6a4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_1fe6a8:
    if (ctx->pc == 0x1FE6A8u) {
        ctx->pc = 0x1FE6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6A4u;
        // 0x1fe6a8: 0x27b30030  addiu       $s3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE6ACu;
        goto label_1fe6ac;
    }
    ctx->pc = 0x1FE6A4u;
    {
        const bool branch_taken_0x1fe6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6A4u;
        // 0x1fe6a8: 0x27b30030  addiu       $s3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe6a4) {
            ctx->pc = 0x1FE744u;
            goto label_1fe744;
        }
    }
    ctx->pc = 0x1FE6ACu;
label_1fe6ac:
    // 0x1fe6ac: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x1fe6acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
label_1fe6b0:
    // 0x1fe6b0: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1fe6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_1fe6b4:
    // 0x1fe6b4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1fe6b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1fe6b8:
    // 0x1fe6b8: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1fe6b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1fe6bc:
    // 0x1fe6bc: 0x24c606c8  addiu       $a2, $a2, 0x6C8
    ctx->pc = 0x1fe6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1736));
label_1fe6c0:
    // 0x1fe6c0: 0x24a50470  addiu       $a1, $a1, 0x470
    ctx->pc = 0x1fe6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1136));
label_1fe6c4:
    // 0x1fe6c4: 0xc0d74c6  jal         func_35D318
label_1fe6c8:
    if (ctx->pc == 0x1FE6C8u) {
        ctx->pc = 0x1FE6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6C4u;
        // 0x1fe6c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE6CCu;
        goto label_1fe6cc;
    }
    ctx->pc = 0x1FE6C4u;
    SET_GPR_U32(ctx, 31, 0x1FE6CCu);
    ctx->pc = 0x1FE6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE6C4u;
    // 0x1fe6c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x1FE6C4u, 0x1FE6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE6CCu;
label_1fe6cc:
    // 0x1fe6cc: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x1fe6ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1fe6d0:
    // 0x1fe6d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1fe6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fe6d4:
    // 0x1fe6d4: 0xc0d7424  jal         func_35D090
label_1fe6d8:
    if (ctx->pc == 0x1FE6D8u) {
        ctx->pc = 0x1FE6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6D4u;
        // 0x1fe6d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE6DCu;
        goto label_1fe6dc;
    }
    ctx->pc = 0x1FE6D4u;
    SET_GPR_U32(ctx, 31, 0x1FE6DCu);
    ctx->pc = 0x1FE6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE6D4u;
    // 0x1fe6d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x1FE6D4u, 0x1FE6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE6DCu;
label_1fe6dc:
    // 0x1fe6dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1fe6dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fe6e0:
    // 0x1fe6e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fe6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fe6e4:
    // 0x1fe6e4: 0xc0d74a8  jal         func_35D2A0
label_1fe6e8:
    if (ctx->pc == 0x1FE6E8u) {
        ctx->pc = 0x1FE6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6E4u;
        // 0x1fe6e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE6ECu;
        goto label_1fe6ec;
    }
    ctx->pc = 0x1FE6E4u;
    SET_GPR_U32(ctx, 31, 0x1FE6ECu);
    ctx->pc = 0x1FE6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE6E4u;
    // 0x1fe6e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x1FE6E4u, 0x1FE6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE6ECu;
label_1fe6ec:
    // 0x1fe6ec: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1fe6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_1fe6f0:
    // 0x1fe6f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fe6f4:
    // 0x1fe6f4: 0x24c606d8  addiu       $a2, $a2, 0x6D8
    ctx->pc = 0x1fe6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1752));
label_1fe6f8:
    // 0x1fe6f8: 0xc0d74c6  jal         func_35D318
label_1fe6fc:
    if (ctx->pc == 0x1FE6FCu) {
        ctx->pc = 0x1FE6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6F8u;
        // 0x1fe6fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE700u;
        goto label_1fe700;
    }
    ctx->pc = 0x1FE6F8u;
    SET_GPR_U32(ctx, 31, 0x1FE700u);
    ctx->pc = 0x1FE6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE6F8u;
    // 0x1fe6fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x1FE6F8u, 0x1FE700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE700u;
label_1fe700:
    // 0x1fe700: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fe700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fe704:
    // 0x1fe704: 0xc0d745c  jal         func_35D170
label_1fe708:
    if (ctx->pc == 0x1FE708u) {
        ctx->pc = 0x1FE708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE704u;
        // 0x1fe708: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE70Cu;
        goto label_1fe70c;
    }
    ctx->pc = 0x1FE704u;
    SET_GPR_U32(ctx, 31, 0x1FE70Cu);
    ctx->pc = 0x1FE708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE704u;
    // 0x1fe708: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x1FE704u, 0x1FE70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE70Cu;
label_1fe70c:
    // 0x1fe70c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fe710:
    // 0x1fe710: 0xc0d7412  jal         func_35D048
label_1fe714:
    if (ctx->pc == 0x1FE714u) {
        ctx->pc = 0x1FE714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE710u;
        // 0x1fe714: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE718u;
        goto label_1fe718;
    }
    ctx->pc = 0x1FE710u;
    SET_GPR_U32(ctx, 31, 0x1FE718u);
    ctx->pc = 0x1FE714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE710u;
    // 0x1fe714: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1FE710u, 0x1FE718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE718u;
label_1fe718:
    // 0x1fe718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fe718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fe71c:
    // 0x1fe71c: 0xc0d7412  jal         func_35D048
label_1fe720:
    if (ctx->pc == 0x1FE720u) {
        ctx->pc = 0x1FE720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE71Cu;
        // 0x1fe720: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE724u;
        goto label_1fe724;
    }
    ctx->pc = 0x1FE71Cu;
    SET_GPR_U32(ctx, 31, 0x1FE724u);
    ctx->pc = 0x1FE720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE71Cu;
    // 0x1fe720: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1FE71Cu, 0x1FE724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE724u;
label_1fe724:
    // 0x1fe724: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fe724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fe728:
    // 0x1fe728: 0xc0d7412  jal         func_35D048
label_1fe72c:
    if (ctx->pc == 0x1FE72Cu) {
        ctx->pc = 0x1FE72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE728u;
        // 0x1fe72c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE730u;
        goto label_1fe730;
    }
    ctx->pc = 0x1FE728u;
    SET_GPR_U32(ctx, 31, 0x1FE730u);
    ctx->pc = 0x1FE72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE728u;
    // 0x1fe72c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1FE728u, 0x1FE730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE730u;
label_1fe730:
    // 0x1fe730: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fe730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fe734:
    // 0x1fe734: 0xc0d7412  jal         func_35D048
label_1fe738:
    if (ctx->pc == 0x1FE738u) {
        ctx->pc = 0x1FE738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE734u;
        // 0x1fe738: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE73Cu;
        goto label_1fe73c;
    }
    ctx->pc = 0x1FE734u;
    SET_GPR_U32(ctx, 31, 0x1FE73Cu);
    ctx->pc = 0x1FE738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE734u;
    // 0x1fe738: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1FE734u, 0x1FE73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE73Cu;
label_1fe73c:
    // 0x1fe73c: 0x10000027  b           . + 4 + (0x27 << 2)
label_1fe740:
    if (ctx->pc == 0x1FE740u) {
        ctx->pc = 0x1FE740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE73Cu;
        // 0x1fe740: 0x8ea40008  lw          $a0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE744u;
        goto label_1fe744;
    }
    ctx->pc = 0x1FE73Cu;
    {
        const bool branch_taken_0x1fe73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE73Cu;
        // 0x1fe740: 0x8ea40008  lw          $a0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe73c) {
            ctx->pc = 0x1FE7DCu;
            goto label_1fe7dc;
        }
    }
    ctx->pc = 0x1FE744u;
label_1fe744:
    // 0x1fe744: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x1fe744u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1fe748:
    // 0x1fe748: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x1fe748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
label_1fe74c:
    // 0x1fe74c: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1fe74cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_1fe750:
    // 0x1fe750: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1fe750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1fe754:
    // 0x1fe754: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1fe754u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1fe758:
    // 0x1fe758: 0x24c606c8  addiu       $a2, $a2, 0x6C8
    ctx->pc = 0x1fe758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1736));
label_1fe75c:
    // 0x1fe75c: 0x24a50468  addiu       $a1, $a1, 0x468
    ctx->pc = 0x1fe75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1128));
label_1fe760:
    // 0x1fe760: 0xc0d74c6  jal         func_35D318
label_1fe764:
    if (ctx->pc == 0x1FE764u) {
        ctx->pc = 0x1FE764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE760u;
        // 0x1fe764: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE768u;
        goto label_1fe768;
    }
    ctx->pc = 0x1FE760u;
    SET_GPR_U32(ctx, 31, 0x1FE768u);
    ctx->pc = 0x1FE764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE760u;
    // 0x1fe764: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x1FE760u, 0x1FE768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE768u;
label_1fe768:
    // 0x1fe768: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x1fe768u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1fe76c:
    // 0x1fe76c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1fe76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fe770:
    // 0x1fe770: 0xc0d7424  jal         func_35D090
label_1fe774:
    if (ctx->pc == 0x1FE774u) {
        ctx->pc = 0x1FE774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE770u;
        // 0x1fe774: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE778u;
        goto label_1fe778;
    }
    ctx->pc = 0x1FE770u;
    SET_GPR_U32(ctx, 31, 0x1FE778u);
    ctx->pc = 0x1FE774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE770u;
    // 0x1fe774: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x1FE770u, 0x1FE778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE778u;
label_1fe778:
    // 0x1fe778: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1fe778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fe77c:
    // 0x1fe77c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fe77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fe780:
    // 0x1fe780: 0xc0d74a8  jal         func_35D2A0
label_1fe784:
    if (ctx->pc == 0x1FE784u) {
        ctx->pc = 0x1FE784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE780u;
        // 0x1fe784: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE788u;
        goto label_1fe788;
    }
    ctx->pc = 0x1FE780u;
    SET_GPR_U32(ctx, 31, 0x1FE788u);
    ctx->pc = 0x1FE784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE780u;
    // 0x1fe784: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x1FE780u, 0x1FE788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE788u;
label_1fe788:
    // 0x1fe788: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1fe788u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_1fe78c:
    // 0x1fe78c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fe790:
    // 0x1fe790: 0x24c606d8  addiu       $a2, $a2, 0x6D8
    ctx->pc = 0x1fe790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1752));
label_1fe794:
    // 0x1fe794: 0xc0d74c6  jal         func_35D318
label_1fe798:
    if (ctx->pc == 0x1FE798u) {
        ctx->pc = 0x1FE798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE794u;
        // 0x1fe798: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE79Cu;
        goto label_1fe79c;
    }
    ctx->pc = 0x1FE794u;
    SET_GPR_U32(ctx, 31, 0x1FE79Cu);
    ctx->pc = 0x1FE798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE794u;
    // 0x1fe798: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x1FE794u, 0x1FE79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE79Cu;
label_1fe79c:
    // 0x1fe79c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fe79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fe7a0:
    // 0x1fe7a0: 0xc0d745c  jal         func_35D170
label_1fe7a4:
    if (ctx->pc == 0x1FE7A4u) {
        ctx->pc = 0x1FE7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7A0u;
        // 0x1fe7a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE7A8u;
        goto label_1fe7a8;
    }
    ctx->pc = 0x1FE7A0u;
    SET_GPR_U32(ctx, 31, 0x1FE7A8u);
    ctx->pc = 0x1FE7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE7A0u;
    // 0x1fe7a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x1FE7A0u, 0x1FE7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE7A8u;
label_1fe7a8:
    // 0x1fe7a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fe7ac:
    // 0x1fe7ac: 0xc0d7412  jal         func_35D048
label_1fe7b0:
    if (ctx->pc == 0x1FE7B0u) {
        ctx->pc = 0x1FE7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7ACu;
        // 0x1fe7b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE7B4u;
        goto label_1fe7b4;
    }
    ctx->pc = 0x1FE7ACu;
    SET_GPR_U32(ctx, 31, 0x1FE7B4u);
    ctx->pc = 0x1FE7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE7ACu;
    // 0x1fe7b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1FE7ACu, 0x1FE7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE7B4u;
label_1fe7b4:
    // 0x1fe7b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fe7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fe7b8:
    // 0x1fe7b8: 0xc0d7412  jal         func_35D048
label_1fe7bc:
    if (ctx->pc == 0x1FE7BCu) {
        ctx->pc = 0x1FE7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7B8u;
        // 0x1fe7bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE7C0u;
        goto label_1fe7c0;
    }
    ctx->pc = 0x1FE7B8u;
    SET_GPR_U32(ctx, 31, 0x1FE7C0u);
    ctx->pc = 0x1FE7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE7B8u;
    // 0x1fe7bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1FE7B8u, 0x1FE7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE7C0u;
label_1fe7c0:
    // 0x1fe7c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fe7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fe7c4:
    // 0x1fe7c4: 0xc0d7412  jal         func_35D048
label_1fe7c8:
    if (ctx->pc == 0x1FE7C8u) {
        ctx->pc = 0x1FE7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7C4u;
        // 0x1fe7c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE7CCu;
        goto label_1fe7cc;
    }
    ctx->pc = 0x1FE7C4u;
    SET_GPR_U32(ctx, 31, 0x1FE7CCu);
    ctx->pc = 0x1FE7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE7C4u;
    // 0x1fe7c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1FE7C4u, 0x1FE7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE7CCu;
label_1fe7cc:
    // 0x1fe7cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fe7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fe7d0:
    // 0x1fe7d0: 0xc0d7412  jal         func_35D048
label_1fe7d4:
    if (ctx->pc == 0x1FE7D4u) {
        ctx->pc = 0x1FE7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7D0u;
        // 0x1fe7d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE7D8u;
        goto label_1fe7d8;
    }
    ctx->pc = 0x1FE7D0u;
    SET_GPR_U32(ctx, 31, 0x1FE7D8u);
    ctx->pc = 0x1FE7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE7D0u;
    // 0x1fe7d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1FE7D0u, 0x1FE7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE7D8u;
label_1fe7d8:
    // 0x1fe7d8: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x1fe7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1fe7dc:
    // 0x1fe7dc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1fe7dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1fe7e0:
    // 0x1fe7e0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1fe7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1fe7e4:
    // 0x1fe7e4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1fe7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1fe7e8:
    // 0x1fe7e8: 0x40f809  jalr        $v0
label_1fe7ec:
    if (ctx->pc == 0x1FE7ECu) {
        ctx->pc = 0x1FE7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7E8u;
        // 0x1fe7ec: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE7F0u;
        goto label_1fe7f0;
    }
    ctx->pc = 0x1FE7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE7F0u);
        ctx->pc = 0x1FE7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7E8u;
        // 0x1fe7ec: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE7E8u, 0x1FE7F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE7F0u;
label_1fe7f0:
    // 0x1fe7f0: 0xc081710  jal         func_205C40
label_1fe7f4:
    if (ctx->pc == 0x1FE7F4u) {
        ctx->pc = 0x1FE7F8u;
        goto label_1fe7f8;
    }
    ctx->pc = 0x1FE7F0u;
    SET_GPR_U32(ctx, 31, 0x1FE7F8u);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x1FE7F0u, 0x1FE7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE7F8u;
label_1fe7f8:
    // 0x1fe7f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fe7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe7fc:
    // 0x1fe7fc: 0xc0817d4  jal         func_205F50
label_1fe800:
    if (ctx->pc == 0x1FE800u) {
        ctx->pc = 0x1FE800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7FCu;
        // 0x1fe800: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE804u;
        goto label_1fe804;
    }
    ctx->pc = 0x1FE7FCu;
    SET_GPR_U32(ctx, 31, 0x1FE804u);
    ctx->pc = 0x1FE800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE7FCu;
    // 0x1fe800: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F50u, 0x1FE7FCu, 0x1FE804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE804u;
label_1fe804:
    // 0x1fe804: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x1fe804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1fe808:
    // 0x1fe808: 0xc081560  jal         func_205580
label_1fe80c:
    if (ctx->pc == 0x1FE80Cu) {
        ctx->pc = 0x1FE80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE808u;
        // 0x1fe80c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE810u;
        goto label_1fe810;
    }
    ctx->pc = 0x1FE808u;
    SET_GPR_U32(ctx, 31, 0x1FE810u);
    ctx->pc = 0x1FE80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE808u;
    // 0x1fe80c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205580u, 0x1FE808u, 0x1FE810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE810u;
label_1fe810:
    // 0x1fe810: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x1fe810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1fe814:
    // 0x1fe814: 0xc08156c  jal         func_2055B0
label_1fe818:
    if (ctx->pc == 0x1FE818u) {
        ctx->pc = 0x1FE818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE814u;
        // 0x1fe818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE81Cu;
        goto label_1fe81c;
    }
    ctx->pc = 0x1FE814u;
    SET_GPR_U32(ctx, 31, 0x1FE81Cu);
    ctx->pc = 0x1FE818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE814u;
    // 0x1fe818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2055B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2055B0u, 0x1FE814u, 0x1FE81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE81Cu;
label_1fe81c:
    // 0x1fe81c: 0x10000061  b           . + 4 + (0x61 << 2)
label_1fe820:
    if (ctx->pc == 0x1FE820u) {
        ctx->pc = 0x1FE820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE81Cu;
        // 0x1fe820: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE824u;
        goto label_1fe824;
    }
    ctx->pc = 0x1FE81Cu;
    {
        const bool branch_taken_0x1fe81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE81Cu;
        // 0x1fe820: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe81c) {
            ctx->pc = 0x1FE9A4u;
            goto label_1fe9a4;
        }
    }
    ctx->pc = 0x1FE824u;
label_1fe824:
    // 0x1fe824: 0xc075e16  jal         func_1D7858
label_1fe828:
    if (ctx->pc == 0x1FE828u) {
        ctx->pc = 0x1FE828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE824u;
        // 0x1fe828: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE82Cu;
        goto label_1fe82c;
    }
    ctx->pc = 0x1FE824u;
    SET_GPR_U32(ctx, 31, 0x1FE82Cu);
    ctx->pc = 0x1FE828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE824u;
    // 0x1fe828: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7858u, 0x1FE824u, 0x1FE82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE82Cu;
label_1fe82c:
    // 0x1fe82c: 0x3c130046  lui         $s3, 0x46
    ctx->pc = 0x1fe82cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)70 << 16));
label_1fe830:
    // 0x1fe830: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x1fe830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1fe834:
    // 0x1fe834: 0x267306b0  addiu       $s3, $s3, 0x6B0
    ctx->pc = 0x1fe834u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1712));
label_1fe838:
    // 0x1fe838: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x1fe838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
label_1fe83c:
    // 0x1fe83c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1fe83cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1fe840:
    // 0x1fe840: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x1fe840u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1fe844:
    // 0x1fe844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fe848:
    // 0x1fe848: 0x24a50468  addiu       $a1, $a1, 0x468
    ctx->pc = 0x1fe848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1128));
label_1fe84c:
    // 0x1fe84c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1fe84cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fe850:
    // 0x1fe850: 0xc0d74c6  jal         func_35D318
label_1fe854:
    if (ctx->pc == 0x1FE854u) {
        ctx->pc = 0x1FE854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE850u;
        // 0x1fe854: 0x240b82d  daddu       $s7, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE858u;
        goto label_1fe858;
    }
    ctx->pc = 0x1FE850u;
    SET_GPR_U32(ctx, 31, 0x1FE858u);
    ctx->pc = 0x1FE854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE850u;
    // 0x1fe854: 0x240b82d  daddu       $s7, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x1FE850u, 0x1FE858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE858u;
label_1fe858:
    // 0x1fe858: 0x280f02d  daddu       $fp, $s4, $zero
    ctx->pc = 0x1fe858u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fe85c:
    // 0x1fe85c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1fe85cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fe860:
    // 0x1fe860: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fe860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fe864:
    // 0x1fe864: 0xc0d74a8  jal         func_35D2A0
label_1fe868:
    if (ctx->pc == 0x1FE868u) {
        ctx->pc = 0x1FE868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE864u;
        // 0x1fe868: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE86Cu;
        goto label_1fe86c;
    }
    ctx->pc = 0x1FE864u;
    SET_GPR_U32(ctx, 31, 0x1FE86Cu);
    ctx->pc = 0x1FE868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE864u;
    // 0x1fe868: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x1FE864u, 0x1FE86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE86Cu;
label_1fe86c:
    // 0x1fe86c: 0x3c110046  lui         $s1, 0x46
    ctx->pc = 0x1fe86cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
label_1fe870:
    // 0x1fe870: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fe870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fe874:
    // 0x1fe874: 0x263106e0  addiu       $s1, $s1, 0x6E0
    ctx->pc = 0x1fe874u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1760));
label_1fe878:
    // 0x1fe878: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fe878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fe87c:
    // 0x1fe87c: 0xc0d74c6  jal         func_35D318
label_1fe880:
    if (ctx->pc == 0x1FE880u) {
        ctx->pc = 0x1FE880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE87Cu;
        // 0x1fe880: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE884u;
        goto label_1fe884;
    }
    ctx->pc = 0x1FE87Cu;
    SET_GPR_U32(ctx, 31, 0x1FE884u);
    ctx->pc = 0x1FE880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE87Cu;
    // 0x1fe880: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x1FE87Cu, 0x1FE884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE884u;
label_1fe884:
    // 0x1fe884: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fe884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fe888:
    // 0x1fe888: 0xc0d7412  jal         func_35D048
label_1fe88c:
    if (ctx->pc == 0x1FE88Cu) {
        ctx->pc = 0x1FE88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE888u;
        // 0x1fe88c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE890u;
        goto label_1fe890;
    }
    ctx->pc = 0x1FE888u;
    SET_GPR_U32(ctx, 31, 0x1FE890u);
    ctx->pc = 0x1FE88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE888u;
    // 0x1fe88c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1FE888u, 0x1FE890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE890u;
label_1fe890:
    // 0x1fe890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fe894:
    // 0x1fe894: 0xc0d7412  jal         func_35D048
label_1fe898:
    if (ctx->pc == 0x1FE898u) {
        ctx->pc = 0x1FE898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE894u;
        // 0x1fe898: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE89Cu;
        goto label_1fe89c;
    }
    ctx->pc = 0x1FE894u;
    SET_GPR_U32(ctx, 31, 0x1FE89Cu);
    ctx->pc = 0x1FE898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE894u;
    // 0x1fe898: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1FE894u, 0x1FE89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE89Cu;
label_1fe89c:
    // 0x1fe89c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fe89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fe8a0:
    // 0x1fe8a0: 0xc0d75d0  jal         func_35D740
label_1fe8a4:
    if (ctx->pc == 0x1FE8A4u) {
        ctx->pc = 0x1FE8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8A0u;
        // 0x1fe8a4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE8A8u;
        goto label_1fe8a8;
    }
    ctx->pc = 0x1FE8A0u;
    SET_GPR_U32(ctx, 31, 0x1FE8A8u);
    ctx->pc = 0x1FE8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE8A0u;
    // 0x1fe8a4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D740u, 0x1FE8A0u, 0x1FE8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE8A8u;
label_1fe8a8:
    // 0x1fe8a8: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1fe8a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1fe8ac:
    // 0x1fe8ac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1fe8acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fe8b0:
    // 0x1fe8b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fe8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fe8b4:
    // 0x1fe8b4: 0xc0d74e8  jal         func_35D3A0
label_1fe8b8:
    if (ctx->pc == 0x1FE8B8u) {
        ctx->pc = 0x1FE8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8B4u;
        // 0x1fe8b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE8BCu;
        goto label_1fe8bc;
    }
    ctx->pc = 0x1FE8B4u;
    SET_GPR_U32(ctx, 31, 0x1FE8BCu);
    ctx->pc = 0x1FE8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE8B4u;
    // 0x1fe8b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D3A0u, 0x1FE8B4u, 0x1FE8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE8BCu;
label_1fe8bc:
    // 0x1fe8bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fe8bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fe8c0:
    // 0x1fe8c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fe8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fe8c4:
    // 0x1fe8c4: 0xc0d74c6  jal         func_35D318
label_1fe8c8:
    if (ctx->pc == 0x1FE8C8u) {
        ctx->pc = 0x1FE8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8C4u;
        // 0x1fe8c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE8CCu;
        goto label_1fe8cc;
    }
    ctx->pc = 0x1FE8C4u;
    SET_GPR_U32(ctx, 31, 0x1FE8CCu);
    ctx->pc = 0x1FE8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE8C4u;
    // 0x1fe8c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x1FE8C4u, 0x1FE8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE8CCu;
label_1fe8cc:
    // 0x1fe8cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fe8d0:
    // 0x1fe8d0: 0xc0d7412  jal         func_35D048
label_1fe8d4:
    if (ctx->pc == 0x1FE8D4u) {
        ctx->pc = 0x1FE8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8D0u;
        // 0x1fe8d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE8D8u;
        goto label_1fe8d8;
    }
    ctx->pc = 0x1FE8D0u;
    SET_GPR_U32(ctx, 31, 0x1FE8D8u);
    ctx->pc = 0x1FE8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE8D0u;
    // 0x1fe8d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1FE8D0u, 0x1FE8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE8D8u;
label_1fe8d8:
    // 0x1fe8d8: 0x92a20100  lbu         $v0, 0x100($s5)
    ctx->pc = 0x1fe8d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 256)));
label_1fe8dc:
    // 0x1fe8dc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1fe8e0:
    if (ctx->pc == 0x1FE8E0u) {
        ctx->pc = 0x1FE8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8DCu;
        // 0x1fe8e0: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE8E4u;
        goto label_1fe8e4;
    }
    ctx->pc = 0x1FE8DCu;
    {
        const bool branch_taken_0x1fe8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8DCu;
        // 0x1fe8e0: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe8dc) {
            ctx->pc = 0x1FE914u;
            goto label_1fe914;
        }
    }
    ctx->pc = 0x1FE8E4u;
label_1fe8e4:
    // 0x1fe8e4: 0xc0805d6  jal         func_201758
label_1fe8e8:
    if (ctx->pc == 0x1FE8E8u) {
        ctx->pc = 0x1FE8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8E4u;
        // 0x1fe8e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE8ECu;
        goto label_1fe8ec;
    }
    ctx->pc = 0x1FE8E4u;
    SET_GPR_U32(ctx, 31, 0x1FE8ECu);
    ctx->pc = 0x1FE8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE8E4u;
    // 0x1fe8e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201758u, 0x1FE8E4u, 0x1FE8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE8ECu;
label_1fe8ec:
    // 0x1fe8ec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1fe8ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe8f0:
    // 0x1fe8f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fe8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fe8f4:
    // 0x1fe8f4: 0x10c20014  beq         $a2, $v0, . + 4 + (0x14 << 2)
label_1fe8f8:
    if (ctx->pc == 0x1FE8F8u) {
        ctx->pc = 0x1FE8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8F4u;
        // 0x1fe8f8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE8FCu;
        goto label_1fe8fc;
    }
    ctx->pc = 0x1FE8F4u;
    {
        const bool branch_taken_0x1fe8f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FE8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8F4u;
        // 0x1fe8f8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe8f4) {
            ctx->pc = 0x1FE948u;
            goto label_1fe948;
        }
    }
    ctx->pc = 0x1FE8FCu;
label_1fe8fc:
    // 0x1fe8fc: 0x8ea200fc  lw          $v0, 0xFC($s5)
    ctx->pc = 0x1fe8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 252)));
label_1fe900:
    // 0x1fe900: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x1fe900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1fe904:
    // 0x1fe904: 0xc081436  jal         func_2050D8
label_1fe908:
    if (ctx->pc == 0x1FE908u) {
        ctx->pc = 0x1FE908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE904u;
        // 0x1fe908: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE90Cu;
        goto label_1fe90c;
    }
    ctx->pc = 0x1FE904u;
    SET_GPR_U32(ctx, 31, 0x1FE90Cu);
    ctx->pc = 0x1FE908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE904u;
    // 0x1fe908: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2050D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2050D8u, 0x1FE904u, 0x1FE90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE90Cu;
label_1fe90c:
    // 0x1fe90c: 0x1000000e  b           . + 4 + (0xE << 2)
label_1fe910:
    if (ctx->pc == 0x1FE910u) {
        ctx->pc = 0x1FE914u;
        goto label_1fe914;
    }
    ctx->pc = 0x1FE90Cu;
    {
        const bool branch_taken_0x1fe90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe90c) {
            ctx->pc = 0x1FE948u;
            goto label_1fe948;
        }
    }
    ctx->pc = 0x1FE914u;
label_1fe914:
    // 0x1fe914: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1fe914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1fe918:
    // 0x1fe918: 0x8c439e40  lw          $v1, -0x61C0($v0)
    ctx->pc = 0x1fe918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942272)));
label_1fe91c:
    // 0x1fe91c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_1fe920:
    if (ctx->pc == 0x1FE920u) {
        ctx->pc = 0x1FE920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE91Cu;
        // 0x1fe920: 0x8ea40008  lw          $a0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE924u;
        goto label_1fe924;
    }
    ctx->pc = 0x1FE91Cu;
    {
        const bool branch_taken_0x1fe91c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe91c) {
            ctx->pc = 0x1FE920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE91Cu;
            // 0x1fe920: 0x8ea40008  lw          $a0, 0x8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE934u;
            goto label_1fe934;
        }
    }
    ctx->pc = 0x1FE924u;
label_1fe924:
    // 0x1fe924: 0xc0dbe86  jal         func_36FA18
label_1fe928:
    if (ctx->pc == 0x1FE928u) {
        ctx->pc = 0x1FE928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE924u;
        // 0x1fe928: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE92Cu;
        goto label_1fe92c;
    }
    ctx->pc = 0x1FE924u;
    SET_GPR_U32(ctx, 31, 0x1FE92Cu);
    ctx->pc = 0x1FE928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE924u;
    // 0x1fe928: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x1FE924u, 0x1FE92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE92Cu;
label_1fe92c:
    // 0x1fe92c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1fe930:
    if (ctx->pc == 0x1FE930u) {
        ctx->pc = 0x1FE934u;
        goto label_1fe934;
    }
    ctx->pc = 0x1FE92Cu;
    {
        const bool branch_taken_0x1fe92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe92c) {
            ctx->pc = 0x1FE948u;
            goto label_1fe948;
        }
    }
    ctx->pc = 0x1FE934u;
label_1fe934:
    // 0x1fe934: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1fe934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1fe938:
    // 0x1fe938: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1fe938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1fe93c:
    // 0x1fe93c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1fe93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1fe940:
    // 0x1fe940: 0x40f809  jalr        $v0
label_1fe944:
    if (ctx->pc == 0x1FE944u) {
        ctx->pc = 0x1FE944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE940u;
        // 0x1fe944: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE948u;
        goto label_1fe948;
    }
    ctx->pc = 0x1FE940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE948u);
        ctx->pc = 0x1FE944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE940u;
        // 0x1fe944: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE940u, 0x1FE948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE948u;
label_1fe948:
    // 0x1fe948: 0xc081710  jal         func_205C40
label_1fe94c:
    if (ctx->pc == 0x1FE94Cu) {
        ctx->pc = 0x1FE950u;
        goto label_1fe950;
    }
    ctx->pc = 0x1FE948u;
    SET_GPR_U32(ctx, 31, 0x1FE950u);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x1FE948u, 0x1FE950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE950u;
label_1fe950:
    // 0x1fe950: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fe950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe954:
    // 0x1fe954: 0xc0817d4  jal         func_205F50
label_1fe958:
    if (ctx->pc == 0x1FE958u) {
        ctx->pc = 0x1FE958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE954u;
        // 0x1fe958: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE95Cu;
        goto label_1fe95c;
    }
    ctx->pc = 0x1FE954u;
    SET_GPR_U32(ctx, 31, 0x1FE95Cu);
    ctx->pc = 0x1FE958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE954u;
    // 0x1fe958: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F50u, 0x1FE954u, 0x1FE95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE95Cu;
label_1fe95c:
    // 0x1fe95c: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x1fe95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1fe960:
    // 0x1fe960: 0xc081560  jal         func_205580
label_1fe964:
    if (ctx->pc == 0x1FE964u) {
        ctx->pc = 0x1FE964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE960u;
        // 0x1fe964: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE968u;
        goto label_1fe968;
    }
    ctx->pc = 0x1FE960u;
    SET_GPR_U32(ctx, 31, 0x1FE968u);
    ctx->pc = 0x1FE964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE960u;
    // 0x1fe964: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205580u, 0x1FE960u, 0x1FE968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE968u;
label_1fe968:
    // 0x1fe968: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x1fe968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1fe96c:
    // 0x1fe96c: 0xc08156c  jal         func_2055B0
label_1fe970:
    if (ctx->pc == 0x1FE970u) {
        ctx->pc = 0x1FE970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE96Cu;
        // 0x1fe970: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE974u;
        goto label_1fe974;
    }
    ctx->pc = 0x1FE96Cu;
    SET_GPR_U32(ctx, 31, 0x1FE974u);
    ctx->pc = 0x1FE970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE96Cu;
    // 0x1fe970: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2055B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2055B0u, 0x1FE96Cu, 0x1FE974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE974u;
label_1fe974:
    // 0x1fe974: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1fe974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fe978:
    // 0x1fe978: 0xc07fc44  jal         func_1FF110
label_1fe97c:
    if (ctx->pc == 0x1FE97Cu) {
        ctx->pc = 0x1FE97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE978u;
        // 0x1fe97c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE980u;
        goto label_1fe980;
    }
    ctx->pc = 0x1FE978u;
    SET_GPR_U32(ctx, 31, 0x1FE980u);
    ctx->pc = 0x1FE97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE978u;
    // 0x1fe97c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF110u, 0x1FE978u, 0x1FE980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE980u;
label_1fe980:
    // 0x1fe980: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fe980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe984:
    // 0x1fe984: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1fe984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1fe988:
    // 0x1fe988: 0xa2a2004b  sb          $v0, 0x4B($s5)
    ctx->pc = 0x1fe988u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 75), (uint8_t)GPR_U32(ctx, 2));
label_1fe98c:
    // 0x1fe98c: 0xc0d7412  jal         func_35D048
label_1fe990:
    if (ctx->pc == 0x1FE990u) {
        ctx->pc = 0x1FE990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE98Cu;
        // 0x1fe990: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE994u;
        goto label_1fe994;
    }
    ctx->pc = 0x1FE98Cu;
    SET_GPR_U32(ctx, 31, 0x1FE994u);
    ctx->pc = 0x1FE990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE98Cu;
    // 0x1fe990: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1FE98Cu, 0x1FE994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE994u;
label_1fe994:
    // 0x1fe994: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fe994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1fe998:
    // 0x1fe998: 0xc0d7412  jal         func_35D048
label_1fe99c:
    if (ctx->pc == 0x1FE99Cu) {
        ctx->pc = 0x1FE99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE998u;
        // 0x1fe99c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE9A0u;
        goto label_1fe9a0;
    }
    ctx->pc = 0x1FE998u;
    SET_GPR_U32(ctx, 31, 0x1FE9A0u);
    ctx->pc = 0x1FE99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE998u;
    // 0x1fe99c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1FE998u, 0x1FE9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE9A0u;
label_1fe9a0:
    // 0x1fe9a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fe9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fe9a4:
    // 0x1fe9a4: 0xc0d7412  jal         func_35D048
label_1fe9a8:
    if (ctx->pc == 0x1FE9A8u) {
        ctx->pc = 0x1FE9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9A4u;
        // 0x1fe9a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE9ACu;
        goto label_1fe9ac;
    }
    ctx->pc = 0x1FE9A4u;
    SET_GPR_U32(ctx, 31, 0x1FE9ACu);
    ctx->pc = 0x1FE9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE9A4u;
    // 0x1fe9a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1FE9A4u, 0x1FE9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE9ACu;
label_1fe9ac:
    // 0x1fe9ac: 0x10000059  b           . + 4 + (0x59 << 2)
label_1fe9b0:
    if (ctx->pc == 0x1FE9B0u) {
        ctx->pc = 0x1FE9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9ACu;
        // 0x1fe9b0: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE9B4u;
        goto label_1fe9b4;
    }
    ctx->pc = 0x1FE9ACu;
    {
        const bool branch_taken_0x1fe9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9ACu;
        // 0x1fe9b0: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9ac) {
            ctx->pc = 0x1FEB14u;
            goto label_1feb14;
        }
    }
    ctx->pc = 0x1FE9B4u;
label_1fe9b4:
    // 0x1fe9b4: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x1fe9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_1fe9b8:
    // 0x1fe9b8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1fe9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1fe9bc:
    // 0x1fe9bc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1fe9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1fe9c0:
    // 0x1fe9c0: 0x40f809  jalr        $v0
label_1fe9c4:
    if (ctx->pc == 0x1FE9C4u) {
        ctx->pc = 0x1FE9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9C0u;
        // 0x1fe9c4: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE9C8u;
        goto label_1fe9c8;
    }
    ctx->pc = 0x1FE9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE9C8u);
        ctx->pc = 0x1FE9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9C0u;
        // 0x1fe9c4: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE9C0u, 0x1FE9C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE9C8u;
label_1fe9c8:
    // 0x1fe9c8: 0x8ea3010c  lw          $v1, 0x10C($s5)
    ctx->pc = 0x1fe9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 268)));
label_1fe9cc:
    // 0x1fe9cc: 0x1071001d  beq         $v1, $s1, . + 4 + (0x1D << 2)
label_1fe9d0:
    if (ctx->pc == 0x1FE9D0u) {
        ctx->pc = 0x1FE9D4u;
        goto label_1fe9d4;
    }
    ctx->pc = 0x1FE9CCu;
    {
        const bool branch_taken_0x1fe9cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x1fe9cc) {
            ctx->pc = 0x1FEA44u;
            goto label_1fea44;
        }
    }
    ctx->pc = 0x1FE9D4u;
label_1fe9d4:
    // 0x1fe9d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fe9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fe9d8:
    // 0x1fe9d8: 0xc0b4c04  jal         func_2D3010
label_1fe9dc:
    if (ctx->pc == 0x1FE9DCu) {
        ctx->pc = 0x1FE9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9D8u;
        // 0x1fe9dc: 0x24050258  addiu       $a1, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE9E0u;
        goto label_1fe9e0;
    }
    ctx->pc = 0x1FE9D8u;
    SET_GPR_U32(ctx, 31, 0x1FE9E0u);
    ctx->pc = 0x1FE9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE9D8u;
    // 0x1fe9dc: 0x24050258  addiu       $a1, $zero, 0x258 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3010u, 0x1FE9D8u, 0x1FE9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE9E0u;
label_1fe9e0:
    // 0x1fe9e0: 0xc09eb04  jal         func_27AC10
label_1fe9e4:
    if (ctx->pc == 0x1FE9E4u) {
        ctx->pc = 0x1FE9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9E0u;
        // 0x1fe9e4: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE9E8u;
        goto label_1fe9e8;
    }
    ctx->pc = 0x1FE9E0u;
    SET_GPR_U32(ctx, 31, 0x1FE9E8u);
    ctx->pc = 0x1FE9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE9E0u;
    // 0x1fe9e4: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC10u, 0x1FE9E0u, 0x1FE9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE9E8u;
label_1fe9e8:
    // 0x1fe9e8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1fe9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1fe9ec:
    // 0x1fe9ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fe9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe9f0:
    // 0x1fe9f0: 0x8c669368  lw          $a2, -0x6C98($v1)
    ctx->pc = 0x1fe9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939496)));
label_1fe9f4:
    // 0x1fe9f4: 0xc0d74c6  jal         func_35D318
label_1fe9f8:
    if (ctx->pc == 0x1FE9F8u) {
        ctx->pc = 0x1FE9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9F4u;
        // 0x1fe9f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE9FCu;
        goto label_1fe9fc;
    }
    ctx->pc = 0x1FE9F4u;
    SET_GPR_U32(ctx, 31, 0x1FE9FCu);
    ctx->pc = 0x1FE9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE9F4u;
    // 0x1fe9f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x1FE9F4u, 0x1FE9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE9FCu;
label_1fe9fc:
    // 0x1fe9fc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1fe9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1fea00:
    // 0x1fea00: 0xc0b4c30  jal         func_2D30C0
label_1fea04:
    if (ctx->pc == 0x1FEA04u) {
        ctx->pc = 0x1FEA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA00u;
        // 0x1fea04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEA08u;
        goto label_1fea08;
    }
    ctx->pc = 0x1FEA00u;
    SET_GPR_U32(ctx, 31, 0x1FEA08u);
    ctx->pc = 0x1FEA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEA00u;
    // 0x1fea04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D30C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30C0u, 0x1FEA00u, 0x1FEA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEA08u;
label_1fea08:
    // 0x1fea08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1fea0c:
    if (ctx->pc == 0x1FEA0Cu) {
        ctx->pc = 0x1FEA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA08u;
        // 0x1fea0c: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEA10u;
        goto label_1fea10;
    }
    ctx->pc = 0x1FEA08u;
    {
        const bool branch_taken_0x1fea08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA08u;
        // 0x1fea0c: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea08) {
            ctx->pc = 0x1FEA20u;
            goto label_1fea20;
        }
    }
    ctx->pc = 0x1FEA10u;
label_1fea10:
    // 0x1fea10: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1fea10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1fea14:
    // 0x1fea14: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x1fea14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1fea18:
    // 0x1fea18: 0xc081436  jal         func_2050D8
label_1fea1c:
    if (ctx->pc == 0x1FEA1Cu) {
        ctx->pc = 0x1FEA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA18u;
        // 0x1fea1c: 0x8ea6010c  lw          $a2, 0x10C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEA20u;
        goto label_1fea20;
    }
    ctx->pc = 0x1FEA18u;
    SET_GPR_U32(ctx, 31, 0x1FEA20u);
    ctx->pc = 0x1FEA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEA18u;
    // 0x1fea1c: 0x8ea6010c  lw          $a2, 0x10C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2050D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2050D8u, 0x1FEA18u, 0x1FEA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEA20u;
label_1fea20:
    // 0x1fea20: 0xaeb1010c  sw          $s1, 0x10C($s5)
    ctx->pc = 0x1fea20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 268), GPR_U32(ctx, 17));
label_1fea24:
    // 0x1fea24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fea24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fea28:
    // 0x1fea28: 0xc0d7412  jal         func_35D048
label_1fea2c:
    if (ctx->pc == 0x1FEA2Cu) {
        ctx->pc = 0x1FEA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA28u;
        // 0x1fea2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEA30u;
        goto label_1fea30;
    }
    ctx->pc = 0x1FEA28u;
    SET_GPR_U32(ctx, 31, 0x1FEA30u);
    ctx->pc = 0x1FEA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEA28u;
    // 0x1fea2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1FEA28u, 0x1FEA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEA30u;
label_1fea30:
    // 0x1fea30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fea30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fea34:
    // 0x1fea34: 0xc0b4c1a  jal         func_2D3068
label_1fea38:
    if (ctx->pc == 0x1FEA38u) {
        ctx->pc = 0x1FEA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA34u;
        // 0x1fea38: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEA3Cu;
        goto label_1fea3c;
    }
    ctx->pc = 0x1FEA34u;
    SET_GPR_U32(ctx, 31, 0x1FEA3Cu);
    ctx->pc = 0x1FEA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEA34u;
    // 0x1fea38: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3068u, 0x1FEA34u, 0x1FEA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEA3Cu;
label_1fea3c:
    // 0x1fea3c: 0x10000027  b           . + 4 + (0x27 << 2)
label_1fea40:
    if (ctx->pc == 0x1FEA40u) {
        ctx->pc = 0x1FEA44u;
        goto label_1fea44;
    }
    ctx->pc = 0x1FEA3Cu;
    {
        const bool branch_taken_0x1fea3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fea3c) {
            ctx->pc = 0x1FEADCu;
            goto label_1feadc;
        }
    }
    ctx->pc = 0x1FEA44u;
label_1fea44:
    // 0x1fea44: 0xc075e16  jal         func_1D7858
label_1fea48:
    if (ctx->pc == 0x1FEA48u) {
        ctx->pc = 0x1FEA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA44u;
        // 0x1fea48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEA4Cu;
        goto label_1fea4c;
    }
    ctx->pc = 0x1FEA44u;
    SET_GPR_U32(ctx, 31, 0x1FEA4Cu);
    ctx->pc = 0x1FEA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEA44u;
    // 0x1fea48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7858u, 0x1FEA44u, 0x1FEA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEA4Cu;
label_1fea4c:
    // 0x1fea4c: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x1fea4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1fea50:
    // 0x1fea50: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x1fea50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
label_1fea54:
    // 0x1fea54: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1fea54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_1fea58:
    // 0x1fea58: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1fea58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1fea5c:
    // 0x1fea5c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1fea5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1fea60:
    // 0x1fea60: 0x24a50468  addiu       $a1, $a1, 0x468
    ctx->pc = 0x1fea60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1128));
label_1fea64:
    // 0x1fea64: 0x24c606b0  addiu       $a2, $a2, 0x6B0
    ctx->pc = 0x1fea64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1712));
label_1fea68:
    // 0x1fea68: 0xc0d74c6  jal         func_35D318
label_1fea6c:
    if (ctx->pc == 0x1FEA6Cu) {
        ctx->pc = 0x1FEA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA68u;
        // 0x1fea6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEA70u;
        goto label_1fea70;
    }
    ctx->pc = 0x1FEA68u;
    SET_GPR_U32(ctx, 31, 0x1FEA70u);
    ctx->pc = 0x1FEA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEA68u;
    // 0x1fea6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x1FEA68u, 0x1FEA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEA70u;
label_1fea70:
    // 0x1fea70: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1fea70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fea74:
    // 0x1fea74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fea74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fea78:
    // 0x1fea78: 0xc0d74a8  jal         func_35D2A0
label_1fea7c:
    if (ctx->pc == 0x1FEA7Cu) {
        ctx->pc = 0x1FEA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA78u;
        // 0x1fea7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEA80u;
        goto label_1fea80;
    }
    ctx->pc = 0x1FEA78u;
    SET_GPR_U32(ctx, 31, 0x1FEA80u);
    ctx->pc = 0x1FEA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEA78u;
    // 0x1fea7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x1FEA78u, 0x1FEA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEA80u;
label_1fea80:
    // 0x1fea80: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1fea80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_1fea84:
    // 0x1fea84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fea84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fea88:
    // 0x1fea88: 0x24c606f0  addiu       $a2, $a2, 0x6F0
    ctx->pc = 0x1fea88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1776));
label_1fea8c:
    // 0x1fea8c: 0xc0d74c6  jal         func_35D318
label_1fea90:
    if (ctx->pc == 0x1FEA90u) {
        ctx->pc = 0x1FEA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA8Cu;
        // 0x1fea90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEA94u;
        goto label_1fea94;
    }
    ctx->pc = 0x1FEA8Cu;
    SET_GPR_U32(ctx, 31, 0x1FEA94u);
    ctx->pc = 0x1FEA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEA8Cu;
    // 0x1fea90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x1FEA8Cu, 0x1FEA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEA94u;
label_1fea94:
    // 0x1fea94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fea94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fea98:
    // 0x1fea98: 0xc0d7412  jal         func_35D048
label_1fea9c:
    if (ctx->pc == 0x1FEA9Cu) {
        ctx->pc = 0x1FEA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA98u;
        // 0x1fea9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEAA0u;
        goto label_1feaa0;
    }
    ctx->pc = 0x1FEA98u;
    SET_GPR_U32(ctx, 31, 0x1FEAA0u);
    ctx->pc = 0x1FEA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEA98u;
    // 0x1fea9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1FEA98u, 0x1FEAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEAA0u;
label_1feaa0:
    // 0x1feaa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1feaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1feaa4:
    // 0x1feaa4: 0xc0d7412  jal         func_35D048
label_1feaa8:
    if (ctx->pc == 0x1FEAA8u) {
        ctx->pc = 0x1FEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAA4u;
        // 0x1feaa8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEAACu;
        goto label_1feaac;
    }
    ctx->pc = 0x1FEAA4u;
    SET_GPR_U32(ctx, 31, 0x1FEAACu);
    ctx->pc = 0x1FEAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEAA4u;
    // 0x1feaa8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1FEAA4u, 0x1FEAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEAACu;
label_1feaac:
    // 0x1feaac: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x1feaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1feab0:
    // 0x1feab0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1feab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1feab4:
    // 0x1feab4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1feab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1feab8:
    // 0x1feab8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1feab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1feabc:
    // 0x1feabc: 0x40f809  jalr        $v0
label_1feac0:
    if (ctx->pc == 0x1FEAC0u) {
        ctx->pc = 0x1FEAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEABCu;
        // 0x1feac0: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEAC4u;
        goto label_1feac4;
    }
    ctx->pc = 0x1FEABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FEAC4u);
        ctx->pc = 0x1FEAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEABCu;
        // 0x1feac0: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEABCu, 0x1FEAC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FEAC4u;
label_1feac4:
    // 0x1feac4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1feac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1feac8:
    // 0x1feac8: 0xc0d7412  jal         func_35D048
label_1feacc:
    if (ctx->pc == 0x1FEACCu) {
        ctx->pc = 0x1FEACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAC8u;
        // 0x1feacc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEAD0u;
        goto label_1fead0;
    }
    ctx->pc = 0x1FEAC8u;
    SET_GPR_U32(ctx, 31, 0x1FEAD0u);
    ctx->pc = 0x1FEACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEAC8u;
    // 0x1feacc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1FEAC8u, 0x1FEAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEAD0u;
label_1fead0:
    // 0x1fead0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fead0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fead4:
    // 0x1fead4: 0xc0d7412  jal         func_35D048
label_1fead8:
    if (ctx->pc == 0x1FEAD8u) {
        ctx->pc = 0x1FEAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAD4u;
        // 0x1fead8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEADCu;
        goto label_1feadc;
    }
    ctx->pc = 0x1FEAD4u;
    SET_GPR_U32(ctx, 31, 0x1FEADCu);
    ctx->pc = 0x1FEAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEAD4u;
    // 0x1fead8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1FEAD4u, 0x1FEADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEADCu;
label_1feadc:
    // 0x1feadc: 0xc081710  jal         func_205C40
label_1feae0:
    if (ctx->pc == 0x1FEAE0u) {
        ctx->pc = 0x1FEAE4u;
        goto label_1feae4;
    }
    ctx->pc = 0x1FEADCu;
    SET_GPR_U32(ctx, 31, 0x1FEAE4u);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x1FEADCu, 0x1FEAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEAE4u;
label_1feae4:
    // 0x1feae4: 0x8ea500c0  lw          $a1, 0xC0($s5)
    ctx->pc = 0x1feae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 192)));
label_1feae8:
    // 0x1feae8: 0xc0817d4  jal         func_205F50
label_1feaec:
    if (ctx->pc == 0x1FEAECu) {
        ctx->pc = 0x1FEAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAE8u;
        // 0x1feaec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEAF0u;
        goto label_1feaf0;
    }
    ctx->pc = 0x1FEAE8u;
    SET_GPR_U32(ctx, 31, 0x1FEAF0u);
    ctx->pc = 0x1FEAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEAE8u;
    // 0x1feaec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F50u, 0x1FEAE8u, 0x1FEAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEAF0u;
label_1feaf0:
    // 0x1feaf0: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x1feaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1feaf4:
    // 0x1feaf4: 0xc081560  jal         func_205580
label_1feaf8:
    if (ctx->pc == 0x1FEAF8u) {
        ctx->pc = 0x1FEAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAF4u;
        // 0x1feaf8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEAFCu;
        goto label_1feafc;
    }
    ctx->pc = 0x1FEAF4u;
    SET_GPR_U32(ctx, 31, 0x1FEAFCu);
    ctx->pc = 0x1FEAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEAF4u;
    // 0x1feaf8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205580u, 0x1FEAF4u, 0x1FEAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEAFCu;
label_1feafc:
    // 0x1feafc: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x1feafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1feb00:
    // 0x1feb00: 0xc08156c  jal         func_2055B0
label_1feb04:
    if (ctx->pc == 0x1FEB04u) {
        ctx->pc = 0x1FEB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB00u;
        // 0x1feb04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEB08u;
        goto label_1feb08;
    }
    ctx->pc = 0x1FEB00u;
    SET_GPR_U32(ctx, 31, 0x1FEB08u);
    ctx->pc = 0x1FEB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEB00u;
    // 0x1feb04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2055B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2055B0u, 0x1FEB00u, 0x1FEB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEB08u;
label_1feb08:
    // 0x1feb08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1feb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1feb0c:
    // 0x1feb0c: 0xa2a2004c  sb          $v0, 0x4C($s5)
    ctx->pc = 0x1feb0cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 76), (uint8_t)GPR_U32(ctx, 2));
label_1feb10:
    // 0x1feb10: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x1feb10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1feb14:
    // 0x1feb14: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x1feb14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_1feb18:
    // 0x1feb18: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1feb18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1feb1c:
    // 0x1feb1c: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x1feb1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_1feb20:
    // 0x1feb20: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1feb20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1feb24:
    // 0x1feb24: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x1feb24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_1feb28:
    // 0x1feb28: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x1feb28u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1feb2c:
    // 0x1feb2c: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x1feb2cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_1feb30:
    // 0x1feb30: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1feb30u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1feb34:
    // 0x1feb34: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x1feb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
label_1feb38:
    // 0x1feb38: 0x3e00008  jr          $ra
label_1feb3c:
    if (ctx->pc == 0x1FEB3Cu) {
        ctx->pc = 0x1FEB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB38u;
        // 0x1feb3c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEB40u;
        goto label_fallthrough_0x1feb38;
    }
    ctx->pc = 0x1FEB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB38u;
        // 0x1feb3c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1feb38:
    ctx->pc = 0x1FEB40u;
}
