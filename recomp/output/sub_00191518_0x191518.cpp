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

// Function: sub_00191518
// Address: 0x191518 - 0x191770
void sub_00191518_0x191518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191518_0x191518");
#endif

    switch (ctx->pc) {
        case 0x191518u: goto label_191518;
        case 0x19151cu: goto label_19151c;
        case 0x191520u: goto label_191520;
        case 0x191524u: goto label_191524;
        case 0x191528u: goto label_191528;
        case 0x19152cu: goto label_19152c;
        case 0x191530u: goto label_191530;
        case 0x191534u: goto label_191534;
        case 0x191538u: goto label_191538;
        case 0x19153cu: goto label_19153c;
        case 0x191540u: goto label_191540;
        case 0x191544u: goto label_191544;
        case 0x191548u: goto label_191548;
        case 0x19154cu: goto label_19154c;
        case 0x191550u: goto label_191550;
        case 0x191554u: goto label_191554;
        case 0x191558u: goto label_191558;
        case 0x19155cu: goto label_19155c;
        case 0x191560u: goto label_191560;
        case 0x191564u: goto label_191564;
        case 0x191568u: goto label_191568;
        case 0x19156cu: goto label_19156c;
        case 0x191570u: goto label_191570;
        case 0x191574u: goto label_191574;
        case 0x191578u: goto label_191578;
        case 0x19157cu: goto label_19157c;
        case 0x191580u: goto label_191580;
        case 0x191584u: goto label_191584;
        case 0x191588u: goto label_191588;
        case 0x19158cu: goto label_19158c;
        case 0x191590u: goto label_191590;
        case 0x191594u: goto label_191594;
        case 0x191598u: goto label_191598;
        case 0x19159cu: goto label_19159c;
        case 0x1915a0u: goto label_1915a0;
        case 0x1915a4u: goto label_1915a4;
        case 0x1915a8u: goto label_1915a8;
        case 0x1915acu: goto label_1915ac;
        case 0x1915b0u: goto label_1915b0;
        case 0x1915b4u: goto label_1915b4;
        case 0x1915b8u: goto label_1915b8;
        case 0x1915bcu: goto label_1915bc;
        case 0x1915c0u: goto label_1915c0;
        case 0x1915c4u: goto label_1915c4;
        case 0x1915c8u: goto label_1915c8;
        case 0x1915ccu: goto label_1915cc;
        case 0x1915d0u: goto label_1915d0;
        case 0x1915d4u: goto label_1915d4;
        case 0x1915d8u: goto label_1915d8;
        case 0x1915dcu: goto label_1915dc;
        case 0x1915e0u: goto label_1915e0;
        case 0x1915e4u: goto label_1915e4;
        case 0x1915e8u: goto label_1915e8;
        case 0x1915ecu: goto label_1915ec;
        case 0x1915f0u: goto label_1915f0;
        case 0x1915f4u: goto label_1915f4;
        case 0x1915f8u: goto label_1915f8;
        case 0x1915fcu: goto label_1915fc;
        case 0x191600u: goto label_191600;
        case 0x191604u: goto label_191604;
        case 0x191608u: goto label_191608;
        case 0x19160cu: goto label_19160c;
        case 0x191610u: goto label_191610;
        case 0x191614u: goto label_191614;
        case 0x191618u: goto label_191618;
        case 0x19161cu: goto label_19161c;
        case 0x191620u: goto label_191620;
        case 0x191624u: goto label_191624;
        case 0x191628u: goto label_191628;
        case 0x19162cu: goto label_19162c;
        case 0x191630u: goto label_191630;
        case 0x191634u: goto label_191634;
        case 0x191638u: goto label_191638;
        case 0x19163cu: goto label_19163c;
        case 0x191640u: goto label_191640;
        case 0x191644u: goto label_191644;
        case 0x191648u: goto label_191648;
        case 0x19164cu: goto label_19164c;
        case 0x191650u: goto label_191650;
        case 0x191654u: goto label_191654;
        case 0x191658u: goto label_191658;
        case 0x19165cu: goto label_19165c;
        case 0x191660u: goto label_191660;
        case 0x191664u: goto label_191664;
        case 0x191668u: goto label_191668;
        case 0x19166cu: goto label_19166c;
        case 0x191670u: goto label_191670;
        case 0x191674u: goto label_191674;
        case 0x191678u: goto label_191678;
        case 0x19167cu: goto label_19167c;
        case 0x191680u: goto label_191680;
        case 0x191684u: goto label_191684;
        case 0x191688u: goto label_191688;
        case 0x19168cu: goto label_19168c;
        case 0x191690u: goto label_191690;
        case 0x191694u: goto label_191694;
        case 0x191698u: goto label_191698;
        case 0x19169cu: goto label_19169c;
        case 0x1916a0u: goto label_1916a0;
        case 0x1916a4u: goto label_1916a4;
        case 0x1916a8u: goto label_1916a8;
        case 0x1916acu: goto label_1916ac;
        case 0x1916b0u: goto label_1916b0;
        case 0x1916b4u: goto label_1916b4;
        case 0x1916b8u: goto label_1916b8;
        case 0x1916bcu: goto label_1916bc;
        case 0x1916c0u: goto label_1916c0;
        case 0x1916c4u: goto label_1916c4;
        case 0x1916c8u: goto label_1916c8;
        case 0x1916ccu: goto label_1916cc;
        case 0x1916d0u: goto label_1916d0;
        case 0x1916d4u: goto label_1916d4;
        case 0x1916d8u: goto label_1916d8;
        case 0x1916dcu: goto label_1916dc;
        case 0x1916e0u: goto label_1916e0;
        case 0x1916e4u: goto label_1916e4;
        case 0x1916e8u: goto label_1916e8;
        case 0x1916ecu: goto label_1916ec;
        case 0x1916f0u: goto label_1916f0;
        case 0x1916f4u: goto label_1916f4;
        case 0x1916f8u: goto label_1916f8;
        case 0x1916fcu: goto label_1916fc;
        case 0x191700u: goto label_191700;
        case 0x191704u: goto label_191704;
        case 0x191708u: goto label_191708;
        case 0x19170cu: goto label_19170c;
        case 0x191710u: goto label_191710;
        case 0x191714u: goto label_191714;
        case 0x191718u: goto label_191718;
        case 0x19171cu: goto label_19171c;
        case 0x191720u: goto label_191720;
        case 0x191724u: goto label_191724;
        case 0x191728u: goto label_191728;
        case 0x19172cu: goto label_19172c;
        case 0x191730u: goto label_191730;
        case 0x191734u: goto label_191734;
        case 0x191738u: goto label_191738;
        case 0x19173cu: goto label_19173c;
        case 0x191740u: goto label_191740;
        case 0x191744u: goto label_191744;
        case 0x191748u: goto label_191748;
        case 0x19174cu: goto label_19174c;
        case 0x191750u: goto label_191750;
        case 0x191754u: goto label_191754;
        case 0x191758u: goto label_191758;
        case 0x19175cu: goto label_19175c;
        case 0x191760u: goto label_191760;
        case 0x191764u: goto label_191764;
        case 0x191768u: goto label_191768;
        case 0x19176cu: goto label_19176c;
        default: break;
    }

    ctx->pc = 0x191518u;

label_191518:
    // 0x191518: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x191518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_19151c:
    // 0x19151c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x19151cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_191520:
    // 0x191520: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x191520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_191524:
    // 0x191524: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x191524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_191528:
    // 0x191528: 0xc061a12  jal         func_186848
label_19152c:
    if (ctx->pc == 0x19152Cu) {
        ctx->pc = 0x19152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191528u;
        // 0x19152c: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x191530u;
        goto label_191530;
    }
    ctx->pc = 0x191528u;
    SET_GPR_U32(ctx, 31, 0x191530u);
    ctx->pc = 0x19152Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191528u;
    // 0x19152c: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x191528u, 0x191530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191530u;
label_191530:
    // 0x191530: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x191530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_191534:
    // 0x191534: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x191534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_191538:
    // 0x191538: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x191538u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_19153c:
    // 0x19153c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x19153cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_191540:
    // 0x191540: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x191540u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_191544:
    // 0x191544: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x191544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_191548:
    // 0x191548: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x191548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19154c:
    // 0x19154c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x19154cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_191550:
    // 0x191550: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x191550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_191554:
    // 0x191554: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x191554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_191558:
    // 0x191558: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x191558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19155c:
    // 0x19155c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19155cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_191560:
    // 0x191560: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x191560u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_191564:
    // 0x191564: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x191564u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_191568:
    // 0x191568: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x191568u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19156c:
    // 0x19156c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x19156cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_191570:
    // 0x191570: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x191570u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_191574:
    // 0x191574: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x191574u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_191578:
    // 0x191578: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x191578u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_19157c:
    // 0x19157c: 0x4a0003bf  vwaitq
    ctx->pc = 0x19157cu;
    // VWAITQ (Q already resolved in this runtime)
label_191580:
    // 0x191580: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x191580u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_191584:
    // 0x191584: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x191584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_191588:
    // 0x191588: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x191588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19158c:
    // 0x19158c: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x19158cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_191590:
    // 0x191590: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x191590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_191594:
    // 0x191594: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x191594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_191598:
    // 0x191598: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x191598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19159c:
    // 0x19159c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x19159cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1915a0:
    // 0x1915a0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1915a0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1915a4:
    // 0x1915a4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1915a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1915a8:
    // 0x1915a8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1915a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1915ac:
    // 0x1915ac: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1915acu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_1915b0:
    // 0x1915b0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1915b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1915b4:
    // 0x1915b4: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1915b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1915b8:
    // 0x1915b8: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x1915b8u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1915bc:
    // 0x1915bc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1915bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1915c0:
    // 0x1915c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1915c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1915c4:
    // 0x1915c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1915c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1915c8:
    // 0x1915c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1915c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1915cc:
    // 0x1915cc: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x1915ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1915d0:
    // 0x1915d0: 0x0  nop
    ctx->pc = 0x1915d0u;
    // NOP
label_1915d4:
    // 0x1915d4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1915d8:
    if (ctx->pc == 0x1915D8u) {
        ctx->pc = 0x1915DCu;
        goto label_1915dc;
    }
    ctx->pc = 0x1915D4u;
    {
        const bool branch_taken_0x1915d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1915d4) {
            ctx->pc = 0x1915E4u;
            goto label_1915e4;
        }
    }
    ctx->pc = 0x1915DCu;
label_1915dc:
    // 0x1915dc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1915e0:
    if (ctx->pc == 0x1915E0u) {
        ctx->pc = 0x1915E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915DCu;
        // 0x1915e0: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1915E4u;
        goto label_1915e4;
    }
    ctx->pc = 0x1915DCu;
    {
        const bool branch_taken_0x1915dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1915E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915DCu;
        // 0x1915e0: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1915dc) {
            ctx->pc = 0x1915F4u;
            goto label_1915f4;
        }
    }
    ctx->pc = 0x1915E4u;
label_1915e4:
    // 0x1915e4: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x1915e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1915e8:
    // 0x1915e8: 0x0  nop
    ctx->pc = 0x1915e8u;
    // NOP
label_1915ec:
    // 0x1915ec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1915f0:
    if (ctx->pc == 0x1915F0u) {
        ctx->pc = 0x1915F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915ECu;
        // 0x1915f0: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1915F4u;
        goto label_1915f4;
    }
    ctx->pc = 0x1915ECu;
    {
        const bool branch_taken_0x1915ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1915ec) {
            ctx->pc = 0x1915F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1915ECu;
            // 0x1915f0: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1915F4u;
            goto label_1915f4;
        }
    }
    ctx->pc = 0x1915F4u;
label_1915f4:
    // 0x1915f4: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x1915f4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_1915f8:
    // 0x1915f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1915f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1915fc:
    // 0x1915fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1915fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_191600:
    // 0x191600: 0x0  nop
    ctx->pc = 0x191600u;
    // NOP
label_191604:
    // 0x191604: 0x460ca301  sub.s       $f12, $f20, $f12
    ctx->pc = 0x191604u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
label_191608:
    // 0x191608: 0x460c0304  c1          0xC0304
    ctx->pc = 0x191608u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_19160c:
    // 0x19160c: 0xc0e404c  jal         func_390130
label_191610:
    if (ctx->pc == 0x191610u) {
        ctx->pc = 0x191614u;
        goto label_191614;
    }
    ctx->pc = 0x19160Cu;
    SET_GPR_U32(ctx, 31, 0x191614u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x19160Cu, 0x191614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191614u;
label_191614:
    // 0x191614: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x191614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_191618:
    // 0x191618: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x191618u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_19161c:
    // 0x19161c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19161cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_191620:
    // 0x191620: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x191620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_191624:
    // 0x191624: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x191624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_191628:
    // 0x191628: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x191628u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_19162c:
    // 0x19162c: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x19162cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_191630:
    // 0x191630: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_191634:
    if (ctx->pc == 0x191634u) {
        ctx->pc = 0x191634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191630u;
        // 0x191634: 0x46140080  add.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x191638u;
        goto label_191638;
    }
    ctx->pc = 0x191630u;
    {
        const bool branch_taken_0x191630 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x191634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191630u;
        // 0x191634: 0x46140080  add.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191630) {
            ctx->pc = 0x19164Cu;
            goto label_19164c;
        }
    }
    ctx->pc = 0x191638u;
label_191638:
    // 0x191638: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x191638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19163c:
    // 0x19163c: 0x0  nop
    ctx->pc = 0x19163cu;
    // NOP
label_191640:
    // 0x191640: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x191640u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_191644:
    // 0x191644: 0x10000008  b           . + 4 + (0x8 << 2)
label_191648:
    if (ctx->pc == 0x191648u) {
        ctx->pc = 0x19164Cu;
        goto label_19164c;
    }
    ctx->pc = 0x191644u;
    {
        const bool branch_taken_0x191644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191644) {
            ctx->pc = 0x191668u;
            goto label_191668;
        }
    }
    ctx->pc = 0x19164Cu;
label_19164c:
    // 0x19164c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19164cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_191650:
    // 0x191650: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x191650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_191654:
    // 0x191654: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x191654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_191658:
    // 0x191658: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x191658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19165c:
    // 0x19165c: 0x0  nop
    ctx->pc = 0x19165cu;
    // NOP
label_191660:
    // 0x191660: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x191660u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_191664:
    // 0x191664: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x191664u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_191668:
    // 0x191668: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x191668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_19166c:
    // 0x19166c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19166cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_191670:
    // 0x191670: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x191670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191674:
    // 0x191674: 0x0  nop
    ctx->pc = 0x191674u;
    // NOP
label_191678:
    // 0x191678: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x191678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19167c:
    // 0x19167c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x19167cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_191680:
    // 0x191680: 0x0  nop
    ctx->pc = 0x191680u;
    // NOP
label_191684:
    // 0x191684: 0x45010027  bc1t        . + 4 + (0x27 << 2)
label_191688:
    if (ctx->pc == 0x191688u) {
        ctx->pc = 0x19168Cu;
        goto label_19168c;
    }
    ctx->pc = 0x191684u;
    {
        const bool branch_taken_0x191684 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x191684) {
            ctx->pc = 0x191724u;
            goto label_191724;
        }
    }
    ctx->pc = 0x19168Cu;
label_19168c:
    // 0x19168c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x19168cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_191690:
    // 0x191690: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_191694:
    if (ctx->pc == 0x191694u) {
        ctx->pc = 0x191698u;
        goto label_191698;
    }
    ctx->pc = 0x191690u;
    {
        const bool branch_taken_0x191690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191690) {
            ctx->pc = 0x1916E8u;
            goto label_1916e8;
        }
    }
    ctx->pc = 0x191698u;
label_191698:
    // 0x191698: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x191698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19169c:
    // 0x19169c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x19169cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_1916a0:
    // 0x1916a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1916a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1916a4:
    // 0x1916a4: 0x0  nop
    ctx->pc = 0x1916a4u;
    // NOP
label_1916a8:
    // 0x1916a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1916a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1916ac:
    // 0x1916ac: 0x0  nop
    ctx->pc = 0x1916acu;
    // NOP
label_1916b0:
    // 0x1916b0: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_1916b4:
    if (ctx->pc == 0x1916B4u) {
        ctx->pc = 0x1916B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1916B0u;
        // 0x1916b4: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1916B8u;
        goto label_1916b8;
    }
    ctx->pc = 0x1916B0u;
    {
        const bool branch_taken_0x1916b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1916b0) {
            ctx->pc = 0x1916B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1916B0u;
            // 0x1916b4: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1916D4u;
            goto label_1916d4;
        }
    }
    ctx->pc = 0x1916B8u;
label_1916b8:
    // 0x1916b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1916b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1916bc:
    // 0x1916bc: 0x0  nop
    ctx->pc = 0x1916bcu;
    // NOP
label_1916c0:
    // 0x1916c0: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1916c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1916c4:
    // 0x1916c4: 0x0  nop
    ctx->pc = 0x1916c4u;
    // NOP
label_1916c8:
    // 0x1916c8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1916cc:
    if (ctx->pc == 0x1916CCu) {
        ctx->pc = 0x1916D0u;
        goto label_1916d0;
    }
    ctx->pc = 0x1916C8u;
    {
        const bool branch_taken_0x1916c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1916c8) {
            ctx->pc = 0x1916E8u;
            goto label_1916e8;
        }
    }
    ctx->pc = 0x1916D0u;
label_1916d0:
    // 0x1916d0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1916d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1916d4:
    // 0x1916d4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1916d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1916d8:
    // 0x1916d8: 0x40f809  jalr        $v0
label_1916dc:
    if (ctx->pc == 0x1916DCu) {
        ctx->pc = 0x1916DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1916D8u;
        // 0x1916dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1916E0u;
        goto label_1916e0;
    }
    ctx->pc = 0x1916D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1916E0u);
        ctx->pc = 0x1916DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1916D8u;
        // 0x1916dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1916D8u, 0x1916E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1916E0u;
label_1916e0:
    // 0x1916e0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1916e4:
    if (ctx->pc == 0x1916E4u) {
        ctx->pc = 0x1916E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1916E0u;
        // 0x1916e4: 0xc6010024  lwc1        $f1, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1916E8u;
        goto label_1916e8;
    }
    ctx->pc = 0x1916E0u;
    {
        const bool branch_taken_0x1916e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1916e0) {
            ctx->pc = 0x1916E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1916E0u;
            // 0x1916e4: 0xc6010024  lwc1        $f1, 0x24($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x191708u;
            goto label_191708;
        }
    }
    ctx->pc = 0x1916E8u;
label_1916e8:
    // 0x1916e8: 0xc061a1e  jal         func_186878
label_1916ec:
    if (ctx->pc == 0x1916ECu) {
        ctx->pc = 0x1916ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1916E8u;
        // 0x1916ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1916F0u;
        goto label_1916f0;
    }
    ctx->pc = 0x1916E8u;
    SET_GPR_U32(ctx, 31, 0x1916F0u);
    ctx->pc = 0x1916ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1916E8u;
    // 0x1916ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1916E8u, 0x1916F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1916F0u;
label_1916f0:
    // 0x1916f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1916f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1916f4:
    // 0x1916f4: 0xc06cdea  jal         func_1B37A8
label_1916f8:
    if (ctx->pc == 0x1916F8u) {
        ctx->pc = 0x1916F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1916F4u;
        // 0x1916f8: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1916FCu;
        goto label_1916fc;
    }
    ctx->pc = 0x1916F4u;
    SET_GPR_U32(ctx, 31, 0x1916FCu);
    ctx->pc = 0x1916F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1916F4u;
    // 0x1916f8: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B37A8u, 0x1916F4u, 0x1916FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1916FCu;
label_1916fc:
    // 0x1916fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1916fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191700:
    // 0x191700: 0x10000015  b           . + 4 + (0x15 << 2)
label_191704:
    if (ctx->pc == 0x191704u) {
        ctx->pc = 0x191704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191700u;
        // 0x191704: 0xae020094  sw          $v0, 0x94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191708u;
        goto label_191708;
    }
    ctx->pc = 0x191700u;
    {
        const bool branch_taken_0x191700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191700u;
        // 0x191704: 0xae020094  sw          $v0, 0x94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191700) {
            ctx->pc = 0x191758u;
            goto label_191758;
        }
    }
    ctx->pc = 0x191708u;
label_191708:
    // 0x191708: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x191708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_19170c:
    // 0x19170c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19170cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191710:
    // 0x191710: 0x0  nop
    ctx->pc = 0x191710u;
    // NOP
label_191714:
    // 0x191714: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x191714u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_191718:
    // 0x191718: 0x0  nop
    ctx->pc = 0x191718u;
    // NOP
label_19171c:
    // 0x19171c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_191720:
    if (ctx->pc == 0x191720u) {
        ctx->pc = 0x191720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19171Cu;
        // 0x191720: 0x8e020094  lw          $v0, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191724u;
        goto label_191724;
    }
    ctx->pc = 0x19171Cu;
    {
        const bool branch_taken_0x19171c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19171c) {
            ctx->pc = 0x191720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19171Cu;
            // 0x191720: 0x8e020094  lw          $v0, 0x94($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19173Cu;
            goto label_19173c;
        }
    }
    ctx->pc = 0x191724u;
label_191724:
    // 0x191724: 0xc061a1e  jal         func_186878
label_191728:
    if (ctx->pc == 0x191728u) {
        ctx->pc = 0x191728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191724u;
        // 0x191728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19172Cu;
        goto label_19172c;
    }
    ctx->pc = 0x191724u;
    SET_GPR_U32(ctx, 31, 0x19172Cu);
    ctx->pc = 0x191728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191724u;
    // 0x191728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x191724u, 0x19172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19172Cu;
label_19172c:
    // 0x19172c: 0xc06cdb4  jal         func_1B36D0
label_191730:
    if (ctx->pc == 0x191730u) {
        ctx->pc = 0x191730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19172Cu;
        // 0x191730: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191734u;
        goto label_191734;
    }
    ctx->pc = 0x19172Cu;
    SET_GPR_U32(ctx, 31, 0x191734u);
    ctx->pc = 0x191730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19172Cu;
    // 0x191730: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36D0u, 0x19172Cu, 0x191734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191734u;
label_191734:
    // 0x191734: 0x10000008  b           . + 4 + (0x8 << 2)
label_191738:
    if (ctx->pc == 0x191738u) {
        ctx->pc = 0x191738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191734u;
        // 0x191738: 0xae000094  sw          $zero, 0x94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19173Cu;
        goto label_19173c;
    }
    ctx->pc = 0x191734u;
    {
        const bool branch_taken_0x191734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191734u;
        // 0x191738: 0xae000094  sw          $zero, 0x94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191734) {
            ctx->pc = 0x191758u;
            goto label_191758;
        }
    }
    ctx->pc = 0x19173Cu;
label_19173c:
    // 0x19173c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_191740:
    if (ctx->pc == 0x191740u) {
        ctx->pc = 0x191740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19173Cu;
        // 0x191740: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191744u;
        goto label_191744;
    }
    ctx->pc = 0x19173Cu;
    {
        const bool branch_taken_0x19173c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19173c) {
            ctx->pc = 0x191740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19173Cu;
            // 0x191740: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19175Cu;
            goto label_19175c;
        }
    }
    ctx->pc = 0x191744u;
label_191744:
    // 0x191744: 0xc061a1e  jal         func_186878
label_191748:
    if (ctx->pc == 0x191748u) {
        ctx->pc = 0x191748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191744u;
        // 0x191748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19174Cu;
        goto label_19174c;
    }
    ctx->pc = 0x191744u;
    SET_GPR_U32(ctx, 31, 0x19174Cu);
    ctx->pc = 0x191748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191744u;
    // 0x191748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x191744u, 0x19174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19174Cu;
label_19174c:
    // 0x19174c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19174cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191750:
    // 0x191750: 0xc06cdea  jal         func_1B37A8
label_191754:
    if (ctx->pc == 0x191754u) {
        ctx->pc = 0x191754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191750u;
        // 0x191754: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191758u;
        goto label_191758;
    }
    ctx->pc = 0x191750u;
    SET_GPR_U32(ctx, 31, 0x191758u);
    ctx->pc = 0x191754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191750u;
    // 0x191754: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B37A8u, 0x191750u, 0x191758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191758u;
label_191758:
    // 0x191758: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x191758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19175c:
    // 0x19175c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x19175cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_191760:
    // 0x191760: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x191760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_191764:
    // 0x191764: 0x3e00008  jr          $ra
label_191768:
    if (ctx->pc == 0x191768u) {
        ctx->pc = 0x191768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191764u;
        // 0x191768: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19176Cu;
        goto label_19176c;
    }
    ctx->pc = 0x191764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191764u;
        // 0x191768: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19176Cu;
label_19176c:
    // 0x19176c: 0x0  nop
    ctx->pc = 0x19176cu;
    // NOP
    ctx->pc = 0x191770u;
}
