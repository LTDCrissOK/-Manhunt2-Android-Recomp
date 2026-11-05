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

// Function: sub_00368638
// Address: 0x368638 - 0x368878
void sub_00368638_0x368638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368638_0x368638");
#endif

    switch (ctx->pc) {
        case 0x368638u: goto label_368638;
        case 0x36863cu: goto label_36863c;
        case 0x368640u: goto label_368640;
        case 0x368644u: goto label_368644;
        case 0x368648u: goto label_368648;
        case 0x36864cu: goto label_36864c;
        case 0x368650u: goto label_368650;
        case 0x368654u: goto label_368654;
        case 0x368658u: goto label_368658;
        case 0x36865cu: goto label_36865c;
        case 0x368660u: goto label_368660;
        case 0x368664u: goto label_368664;
        case 0x368668u: goto label_368668;
        case 0x36866cu: goto label_36866c;
        case 0x368670u: goto label_368670;
        case 0x368674u: goto label_368674;
        case 0x368678u: goto label_368678;
        case 0x36867cu: goto label_36867c;
        case 0x368680u: goto label_368680;
        case 0x368684u: goto label_368684;
        case 0x368688u: goto label_368688;
        case 0x36868cu: goto label_36868c;
        case 0x368690u: goto label_368690;
        case 0x368694u: goto label_368694;
        case 0x368698u: goto label_368698;
        case 0x36869cu: goto label_36869c;
        case 0x3686a0u: goto label_3686a0;
        case 0x3686a4u: goto label_3686a4;
        case 0x3686a8u: goto label_3686a8;
        case 0x3686acu: goto label_3686ac;
        case 0x3686b0u: goto label_3686b0;
        case 0x3686b4u: goto label_3686b4;
        case 0x3686b8u: goto label_3686b8;
        case 0x3686bcu: goto label_3686bc;
        case 0x3686c0u: goto label_3686c0;
        case 0x3686c4u: goto label_3686c4;
        case 0x3686c8u: goto label_3686c8;
        case 0x3686ccu: goto label_3686cc;
        case 0x3686d0u: goto label_3686d0;
        case 0x3686d4u: goto label_3686d4;
        case 0x3686d8u: goto label_3686d8;
        case 0x3686dcu: goto label_3686dc;
        case 0x3686e0u: goto label_3686e0;
        case 0x3686e4u: goto label_3686e4;
        case 0x3686e8u: goto label_3686e8;
        case 0x3686ecu: goto label_3686ec;
        case 0x3686f0u: goto label_3686f0;
        case 0x3686f4u: goto label_3686f4;
        case 0x3686f8u: goto label_3686f8;
        case 0x3686fcu: goto label_3686fc;
        case 0x368700u: goto label_368700;
        case 0x368704u: goto label_368704;
        case 0x368708u: goto label_368708;
        case 0x36870cu: goto label_36870c;
        case 0x368710u: goto label_368710;
        case 0x368714u: goto label_368714;
        case 0x368718u: goto label_368718;
        case 0x36871cu: goto label_36871c;
        case 0x368720u: goto label_368720;
        case 0x368724u: goto label_368724;
        case 0x368728u: goto label_368728;
        case 0x36872cu: goto label_36872c;
        case 0x368730u: goto label_368730;
        case 0x368734u: goto label_368734;
        case 0x368738u: goto label_368738;
        case 0x36873cu: goto label_36873c;
        case 0x368740u: goto label_368740;
        case 0x368744u: goto label_368744;
        case 0x368748u: goto label_368748;
        case 0x36874cu: goto label_36874c;
        case 0x368750u: goto label_368750;
        case 0x368754u: goto label_368754;
        case 0x368758u: goto label_368758;
        case 0x36875cu: goto label_36875c;
        case 0x368760u: goto label_368760;
        case 0x368764u: goto label_368764;
        case 0x368768u: goto label_368768;
        case 0x36876cu: goto label_36876c;
        case 0x368770u: goto label_368770;
        case 0x368774u: goto label_368774;
        case 0x368778u: goto label_368778;
        case 0x36877cu: goto label_36877c;
        case 0x368780u: goto label_368780;
        case 0x368784u: goto label_368784;
        case 0x368788u: goto label_368788;
        case 0x36878cu: goto label_36878c;
        case 0x368790u: goto label_368790;
        case 0x368794u: goto label_368794;
        case 0x368798u: goto label_368798;
        case 0x36879cu: goto label_36879c;
        case 0x3687a0u: goto label_3687a0;
        case 0x3687a4u: goto label_3687a4;
        case 0x3687a8u: goto label_3687a8;
        case 0x3687acu: goto label_3687ac;
        case 0x3687b0u: goto label_3687b0;
        case 0x3687b4u: goto label_3687b4;
        case 0x3687b8u: goto label_3687b8;
        case 0x3687bcu: goto label_3687bc;
        case 0x3687c0u: goto label_3687c0;
        case 0x3687c4u: goto label_3687c4;
        case 0x3687c8u: goto label_3687c8;
        case 0x3687ccu: goto label_3687cc;
        case 0x3687d0u: goto label_3687d0;
        case 0x3687d4u: goto label_3687d4;
        case 0x3687d8u: goto label_3687d8;
        case 0x3687dcu: goto label_3687dc;
        case 0x3687e0u: goto label_3687e0;
        case 0x3687e4u: goto label_3687e4;
        case 0x3687e8u: goto label_3687e8;
        case 0x3687ecu: goto label_3687ec;
        case 0x3687f0u: goto label_3687f0;
        case 0x3687f4u: goto label_3687f4;
        case 0x3687f8u: goto label_3687f8;
        case 0x3687fcu: goto label_3687fc;
        case 0x368800u: goto label_368800;
        case 0x368804u: goto label_368804;
        case 0x368808u: goto label_368808;
        case 0x36880cu: goto label_36880c;
        case 0x368810u: goto label_368810;
        case 0x368814u: goto label_368814;
        case 0x368818u: goto label_368818;
        case 0x36881cu: goto label_36881c;
        case 0x368820u: goto label_368820;
        case 0x368824u: goto label_368824;
        case 0x368828u: goto label_368828;
        case 0x36882cu: goto label_36882c;
        case 0x368830u: goto label_368830;
        case 0x368834u: goto label_368834;
        case 0x368838u: goto label_368838;
        case 0x36883cu: goto label_36883c;
        case 0x368840u: goto label_368840;
        case 0x368844u: goto label_368844;
        case 0x368848u: goto label_368848;
        case 0x36884cu: goto label_36884c;
        case 0x368850u: goto label_368850;
        case 0x368854u: goto label_368854;
        case 0x368858u: goto label_368858;
        case 0x36885cu: goto label_36885c;
        case 0x368860u: goto label_368860;
        case 0x368864u: goto label_368864;
        case 0x368868u: goto label_368868;
        case 0x36886cu: goto label_36886c;
        case 0x368870u: goto label_368870;
        case 0x368874u: goto label_368874;
        default: break;
    }

    ctx->pc = 0x368638u;

label_368638:
    // 0x368638: 0x70000c28  padduw      $at, $zero, $zero
    ctx->pc = 0x368638u;
    SET_GPR_VEC(ctx, 1, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_36863c:
    // 0x36863c: 0x70001428  padduw      $v0, $zero, $zero
    ctx->pc = 0x36863cu;
    SET_GPR_VEC(ctx, 2, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_368640:
    // 0x368640: 0x70001c28  padduw      $v1, $zero, $zero
    ctx->pc = 0x368640u;
    SET_GPR_VEC(ctx, 3, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_368644:
    // 0x368644: 0x70002428  padduw      $a0, $zero, $zero
    ctx->pc = 0x368644u;
    SET_GPR_VEC(ctx, 4, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_368648:
    // 0x368648: 0x70002c28  padduw      $a1, $zero, $zero
    ctx->pc = 0x368648u;
    SET_GPR_VEC(ctx, 5, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_36864c:
    // 0x36864c: 0x70003428  padduw      $a2, $zero, $zero
    ctx->pc = 0x36864cu;
    SET_GPR_VEC(ctx, 6, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_368650:
    // 0x368650: 0x70003c28  padduw      $a3, $zero, $zero
    ctx->pc = 0x368650u;
    SET_GPR_VEC(ctx, 7, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_368654:
    // 0x368654: 0x70004428  padduw      $t0, $zero, $zero
    ctx->pc = 0x368654u;
    SET_GPR_VEC(ctx, 8, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_368658:
    // 0x368658: 0x70004c28  padduw      $t1, $zero, $zero
    ctx->pc = 0x368658u;
    SET_GPR_VEC(ctx, 9, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_36865c:
    // 0x36865c: 0x70005428  padduw      $t2, $zero, $zero
    ctx->pc = 0x36865cu;
    SET_GPR_VEC(ctx, 10, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_368660:
    // 0x368660: 0x70005c28  padduw      $t3, $zero, $zero
    ctx->pc = 0x368660u;
    SET_GPR_VEC(ctx, 11, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_368664:
    // 0x368664: 0x70006428  padduw      $t4, $zero, $zero
    ctx->pc = 0x368664u;
    SET_GPR_VEC(ctx, 12, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_368668:
    // 0x368668: 0x70006c28  padduw      $t5, $zero, $zero
    ctx->pc = 0x368668u;
    SET_GPR_VEC(ctx, 13, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_36866c:
    // 0x36866c: 0x70007428  padduw      $t6, $zero, $zero
    ctx->pc = 0x36866cu;
    SET_GPR_VEC(ctx, 14, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_368670:
    // 0x368670: 0x70007c28  padduw      $t7, $zero, $zero
    ctx->pc = 0x368670u;
    SET_GPR_VEC(ctx, 15, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_368674:
    // 0x368674: 0x70008428  padduw      $s0, $zero, $zero
    ctx->pc = 0x368674u;
    SET_GPR_VEC(ctx, 16, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_368678:
    // 0x368678: 0x70008c28  padduw      $s1, $zero, $zero
    ctx->pc = 0x368678u;
    SET_GPR_VEC(ctx, 17, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_36867c:
    // 0x36867c: 0x70009428  padduw      $s2, $zero, $zero
    ctx->pc = 0x36867cu;
    SET_GPR_VEC(ctx, 18, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_368680:
    // 0x368680: 0x70009c28  padduw      $s3, $zero, $zero
    ctx->pc = 0x368680u;
    SET_GPR_VEC(ctx, 19, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_368684:
    // 0x368684: 0x7000a428  padduw      $s4, $zero, $zero
    ctx->pc = 0x368684u;
    SET_GPR_VEC(ctx, 20, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_368688:
    // 0x368688: 0x7000ac28  padduw      $s5, $zero, $zero
    ctx->pc = 0x368688u;
    SET_GPR_VEC(ctx, 21, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_36868c:
    // 0x36868c: 0x7000b428  padduw      $s6, $zero, $zero
    ctx->pc = 0x36868cu;
    SET_GPR_VEC(ctx, 22, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_368690:
    // 0x368690: 0x7000bc28  padduw      $s7, $zero, $zero
    ctx->pc = 0x368690u;
    SET_GPR_VEC(ctx, 23, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_368694:
    // 0x368694: 0x7000c428  padduw      $t8, $zero, $zero
    ctx->pc = 0x368694u;
    SET_GPR_VEC(ctx, 24, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_368698:
    // 0x368698: 0x7000cc28  padduw      $t9, $zero, $zero
    ctx->pc = 0x368698u;
    SET_GPR_VEC(ctx, 25, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_36869c:
    // 0x36869c: 0x7000e428  padduw      $gp, $zero, $zero
    ctx->pc = 0x36869cu;
    SET_GPR_VEC(ctx, 28, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3686a0:
    // 0x3686a0: 0x7000ec28  padduw      $sp, $zero, $zero
    ctx->pc = 0x3686a0u;
    SET_GPR_VEC(ctx, 29, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3686a4:
    // 0x3686a4: 0x7000f428  padduw      $fp, $zero, $zero
    ctx->pc = 0x3686a4u;
    SET_GPR_VEC(ctx, 30, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3686a8:
    // 0x3686a8: 0x7000fc28  padduw      $ra, $zero, $zero
    ctx->pc = 0x3686a8u;
    SET_GPR_VEC(ctx, 31, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3686ac:
    // 0x3686ac: 0x11  mthi        $zero
    ctx->pc = 0x3686acu;
    ctx->hi = GPR_U64(ctx, 0);
label_3686b0:
    // 0x3686b0: 0x70000011  mthi1       $zero
    ctx->pc = 0x3686b0u;
    ctx->hi1 = GPR_U64(ctx, 0);
label_3686b4:
    // 0x3686b4: 0x13  mtlo        $zero
    ctx->pc = 0x3686b4u;
    ctx->lo = GPR_U64(ctx, 0);
label_3686b8:
    // 0x3686b8: 0x70000013  mtlo1       $zero
    ctx->pc = 0x3686b8u;
    ctx->lo1 = GPR_U64(ctx, 0);
label_3686bc:
    // 0x3686bc: 0x4190000  mtsah       $zero, 0x0
    ctx->pc = 0x3686bcu;
    ctx->sa = ((GPR_U32(ctx, 0) ^ (uint32_t)0) & 0x7) << 4;
label_3686c0:
    // 0x3686c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3686c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3686c4:
    // 0x3686c4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3686c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3686c8:
    // 0x3686c8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3686c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3686cc:
    // 0x3686cc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3686ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3686d0:
    // 0x3686d0: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x3686d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3686d4:
    // 0x3686d4: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x3686d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_3686d8:
    // 0x3686d8: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x3686d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_3686dc:
    // 0x3686dc: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x3686dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_3686e0:
    // 0x3686e0: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x3686e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_3686e4:
    // 0x3686e4: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x3686e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_3686e8:
    // 0x3686e8: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x3686e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_3686ec:
    // 0x3686ec: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x3686ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_3686f0:
    // 0x3686f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3686f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3686f4:
    // 0x3686f4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3686f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3686f8:
    // 0x3686f8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3686f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3686fc:
    // 0x3686fc: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x3686fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_368700:
    // 0x368700: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x368700u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_368704:
    // 0x368704: 0x44808800  mtc1        $zero, $f17
    ctx->pc = 0x368704u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_368708:
    // 0x368708: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x368708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_36870c:
    // 0x36870c: 0x44809800  mtc1        $zero, $f19
    ctx->pc = 0x36870cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
label_368710:
    // 0x368710: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x368710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_368714:
    // 0x368714: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x368714u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_368718:
    // 0x368718: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x368718u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_36871c:
    // 0x36871c: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x36871cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_368720:
    // 0x368720: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x368720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_368724:
    // 0x368724: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x368724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_368728:
    // 0x368728: 0x4480d000  mtc1        $zero, $f26
    ctx->pc = 0x368728u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_36872c:
    // 0x36872c: 0x4480d800  mtc1        $zero, $f27
    ctx->pc = 0x36872cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
label_368730:
    // 0x368730: 0x4480e000  mtc1        $zero, $f28
    ctx->pc = 0x368730u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
label_368734:
    // 0x368734: 0x4480e800  mtc1        $zero, $f29
    ctx->pc = 0x368734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
label_368738:
    // 0x368738: 0x4480f000  mtc1        $zero, $f30
    ctx->pc = 0x368738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
label_36873c:
    // 0x36873c: 0x4480f800  mtc1        $zero, $f31
    ctx->pc = 0x36873cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[31], &bits, sizeof(bits)); }
label_368740:
    // 0x368740: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x368740u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_368744:
    // 0x368744: 0x40f  sync.p
    ctx->pc = 0x368744u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_368748:
    // 0x368748: 0x44c0f800  ctc1        $zero, $FpcCsr
    ctx->pc = 0x368748u;
    ctx->fcr31 = GPR_U32(ctx, 0) & 0x0183FFFF;
label_36874c:
    // 0x36874c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36874cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_368750:
    // 0x368750: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x368750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_368754:
    // 0x368754: 0x24422b00  addiu       $v0, $v0, 0x2B00
    ctx->pc = 0x368754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11008));
label_368758:
    // 0x368758: 0x2463b280  addiu       $v1, $v1, -0x4D80
    ctx->pc = 0x368758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947456));
label_36875c:
    // 0x36875c: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x36875cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_368760:
    // 0x368760: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_368764:
    if (ctx->pc == 0x368764u) {
        ctx->pc = 0x368768u;
        goto label_368768;
    }
    ctx->pc = 0x368760u;
    {
        const bool branch_taken_0x368760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x368760) {
            ctx->pc = 0x36877Cu;
            goto label_36877c;
        }
    }
    ctx->pc = 0x368768u;
label_368768:
    // 0x368768: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x368768u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_36876c:
    // 0x36876c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36876cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_368770:
    // 0x368770: 0x0  nop
    ctx->pc = 0x368770u;
    // NOP
label_368774:
    // 0x368774: 0x80da1d7  j           func_36875C
label_368778:
    if (ctx->pc == 0x368778u) {
        ctx->pc = 0x36877Cu;
        goto label_36877c;
    }
    ctx->pc = 0x368774u;
    ctx->pc = 0x36875Cu;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_36875c;
    ctx->pc = 0x36877Cu;
label_36877c:
    // 0x36877c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x36877cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_368780:
    // 0x368780: 0x3484fff0  ori         $a0, $a0, 0xFFF0
    ctx->pc = 0x368780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65520);
label_368784:
    // 0x368784: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x368784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_368788:
    // 0x368788: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
label_36878c:
    if (ctx->pc == 0x36878Cu) {
        ctx->pc = 0x368790u;
        goto label_368790;
    }
    ctx->pc = 0x368788u;
    {
        const bool branch_taken_0x368788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x368788) {
            ctx->pc = 0x3687A8u;
            goto label_3687a8;
        }
    }
    ctx->pc = 0x368790u;
label_368790:
    // 0x368790: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x368790u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
label_368794:
    // 0x368794: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x368794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_368798:
    // 0x368798: 0x0  nop
    ctx->pc = 0x368798u;
    // NOP
label_36879c:
    // 0x36879c: 0x0  nop
    ctx->pc = 0x36879cu;
    // NOP
label_3687a0:
    // 0x3687a0: 0x80da1e2  j           func_368788
label_3687a4:
    if (ctx->pc == 0x3687A4u) {
        ctx->pc = 0x3687A8u;
        goto label_3687a8;
    }
    ctx->pc = 0x3687A0u;
    ctx->pc = 0x368788u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_368788;
    ctx->pc = 0x3687A8u;
label_3687a8:
    // 0x3687a8: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_3687ac:
    if (ctx->pc == 0x3687ACu) {
        ctx->pc = 0x3687B0u;
        goto label_3687b0;
    }
    ctx->pc = 0x3687A8u;
    {
        const bool branch_taken_0x3687a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3687a8) {
            ctx->pc = 0x3687C8u;
            goto label_3687c8;
        }
    }
    ctx->pc = 0x3687B0u;
label_3687b0:
    // 0x3687b0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x3687b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_3687b4:
    // 0x3687b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3687b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3687b8:
    // 0x3687b8: 0x0  nop
    ctx->pc = 0x3687b8u;
    // NOP
label_3687bc:
    // 0x3687bc: 0x0  nop
    ctx->pc = 0x3687bcu;
    // NOP
label_3687c0:
    // 0x3687c0: 0x80da1ea  j           func_3687A8
label_3687c4:
    if (ctx->pc == 0x3687C4u) {
        ctx->pc = 0x3687C8u;
        goto label_3687c8;
    }
    ctx->pc = 0x3687C0u;
    ctx->pc = 0x3687A8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_3687a8;
    ctx->pc = 0x3687C8u;
label_3687c8:
    // 0x3687c8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x3687c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_3687cc:
    // 0x3687cc: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x3687ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_3687d0:
    // 0x3687d0: 0x3c060000  lui         $a2, 0x0
    ctx->pc = 0x3687d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)0 << 16));
label_3687d4:
    // 0x3687d4: 0x3c07005c  lui         $a3, 0x5C
    ctx->pc = 0x3687d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)92 << 16));
label_3687d8:
    // 0x3687d8: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x3687d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
label_3687dc:
    // 0x3687dc: 0x2484aa70  addiu       $a0, $a0, -0x5590
    ctx->pc = 0x3687dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945392));
label_3687e0:
    // 0x3687e0: 0x24a57280  addiu       $a1, $a1, 0x7280
    ctx->pc = 0x3687e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29312));
label_3687e4:
    // 0x3687e4: 0x24c64000  addiu       $a2, $a2, 0x4000
    ctx->pc = 0x3687e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
label_3687e8:
    // 0x3687e8: 0x24e7ed80  addiu       $a3, $a3, -0x1280
    ctx->pc = 0x3687e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962560));
label_3687ec:
    // 0x3687ec: 0x25088880  addiu       $t0, $t0, -0x7780
    ctx->pc = 0x3687ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294936704));
label_3687f0:
    // 0x3687f0: 0x80e02d  daddu       $gp, $a0, $zero
    ctx->pc = 0x3687f0u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3687f4:
    // 0x3687f4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x3687f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3687f8:
    // 0x3687f8: 0xc  syscall     0
    ctx->pc = 0x3687f8u;
    ctx->pc = 0x3687FCu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3687fc:
    // 0x3687fc: 0x40e82d  daddu       $sp, $v0, $zero
    ctx->pc = 0x3687fcu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_368800:
    // 0x368800: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x368800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_368804:
    // 0x368804: 0x3c050000  lui         $a1, 0x0
    ctx->pc = 0x368804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)0 << 16));
label_368808:
    // 0x368808: 0x2484b280  addiu       $a0, $a0, -0x4D80
    ctx->pc = 0x368808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947456));
label_36880c:
    // 0x36880c: 0x24a54000  addiu       $a1, $a1, 0x4000
    ctx->pc = 0x36880cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
label_368810:
    // 0x368810: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x368810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_368814:
    // 0x368814: 0xc  syscall     0
    ctx->pc = 0x368814u;
    ctx->pc = 0x368818u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_368818:
    // 0x368818: 0xc0f40a2  jal         func_3D0288
label_36881c:
    if (ctx->pc == 0x36881Cu) {
        ctx->pc = 0x368820u;
        goto label_368820;
    }
    ctx->pc = 0x368818u;
    SET_GPR_U32(ctx, 31, 0x368820u);
    ctx->pc = 0x3D0288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0288u, 0x368818u, 0x368820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368820u;
label_368820:
    // 0x368820: 0xc0f2708  jal         func_3C9C20
label_368824:
    if (ctx->pc == 0x368824u) {
        ctx->pc = 0x368824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368820u;
        // 0x368824: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368828u;
        goto label_368828;
    }
    ctx->pc = 0x368820u;
    SET_GPR_U32(ctx, 31, 0x368828u);
    ctx->pc = 0x368824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368820u;
    // 0x368824: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9C20u, 0x368820u, 0x368828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368828u;
label_368828:
    // 0x368828: 0x3c10003d  lui         $s0, 0x3D
    ctx->pc = 0x368828u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)61 << 16));
label_36882c:
    // 0x36882c: 0x26104b18  addiu       $s0, $s0, 0x4B18
    ctx->pc = 0x36882cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19224));
label_368830:
    // 0x368830: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_368834:
    if (ctx->pc == 0x368834u) {
        ctx->pc = 0x368838u;
        goto label_368838;
    }
    ctx->pc = 0x368830u;
    {
        const bool branch_taken_0x368830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x368830) {
            ctx->pc = 0x368840u;
            goto label_368840;
        }
    }
    ctx->pc = 0x368838u;
label_368838:
    // 0x368838: 0x200f809  jalr        $s0
label_36883c:
    if (ctx->pc == 0x36883Cu) {
        ctx->pc = 0x368840u;
        goto label_368840;
    }
    ctx->pc = 0x368838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x368840u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368838u, 0x368840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x368840u;
label_368840:
    // 0x368840: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x368840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_368844:
    // 0x368844: 0x24844b20  addiu       $a0, $a0, 0x4B20
    ctx->pc = 0x368844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19232));
label_368848:
    // 0x368848: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_36884c:
    if (ctx->pc == 0x36884Cu) {
        ctx->pc = 0x368850u;
        goto label_368850;
    }
    ctx->pc = 0x368848u;
    {
        const bool branch_taken_0x368848 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x368848) {
            ctx->pc = 0x368858u;
            goto label_368858;
        }
    }
    ctx->pc = 0x368850u;
label_368850:
    // 0x368850: 0xc0f0278  jal         func_3C09E0
label_368854:
    if (ctx->pc == 0x368854u) {
        ctx->pc = 0x368858u;
        goto label_368858;
    }
    ctx->pc = 0x368850u;
    SET_GPR_U32(ctx, 31, 0x368858u);
    ctx->pc = 0x3C09E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09E0u, 0x368850u, 0x368858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368858u;
label_368858:
    // 0x368858: 0x42000038  ei
    ctx->pc = 0x368858u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_36885c:
    // 0x36885c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x36885cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_368860:
    // 0x368860: 0x2442ed80  addiu       $v0, $v0, -0x1280
    ctx->pc = 0x368860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962560));
label_368864:
    // 0x368864: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x368864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_368868:
    // 0x368868: 0xc0da392  jal         func_368E48
label_36886c:
    if (ctx->pc == 0x36886Cu) {
        ctx->pc = 0x36886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368868u;
        // 0x36886c: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368870u;
        goto label_368870;
    }
    ctx->pc = 0x368868u;
    SET_GPR_U32(ctx, 31, 0x368870u);
    ctx->pc = 0x36886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368868u;
    // 0x36886c: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368E48u, 0x368868u, 0x368870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368870u;
label_368870:
    // 0x368870: 0x80f02b2  j           func_3C0AC8
label_368874:
    if (ctx->pc == 0x368874u) {
        ctx->pc = 0x368874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368870u;
        // 0x368874: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368878u;
        goto label_fallthrough_0x368870;
    }
    ctx->pc = 0x368870u;
    ctx->pc = 0x368874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368870u;
    // 0x368874: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0AC8u;
    sub_003C0AC8_0x3c0ac8(rdram, ctx, runtime); return;
label_fallthrough_0x368870:
    ctx->pc = 0x368878u;
}
