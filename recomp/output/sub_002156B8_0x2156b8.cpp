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

// Function: sub_002156B8
// Address: 0x2156b8 - 0x215828
void sub_002156B8_0x2156b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002156B8_0x2156b8");
#endif

    switch (ctx->pc) {
        case 0x2157c8u: goto label_2157c8;
        case 0x215810u: goto label_215810;
        default: break;
    }

    ctx->pc = 0x2156b8u;

    // 0x2156b8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2156b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2156bc: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x2156bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2156c0: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x2156c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x2156c4: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x2156c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2156c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2156c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2156cc: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x2156ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x2156d0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2156d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2156d4: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2156d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2156d8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2156d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2156dc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2156dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2156e0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2156e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2156e4: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2156e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2156e8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2156e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2156ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2156ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2156f0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2156f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2156f4: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x2156f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2156f8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2156f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2156fc: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x2156fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x215700: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x215700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x215704: 0x0  nop
    ctx->pc = 0x215704u;
    // NOP
    // 0x215708: 0x0  nop
    ctx->pc = 0x215708u;
    // NOP
    // 0x21570c: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x21570cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x215710: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x215710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215714: 0x0  nop
    ctx->pc = 0x215714u;
    // NOP
    // 0x215718: 0x0  nop
    ctx->pc = 0x215718u;
    // NOP
    // 0x21571c: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x21571cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x215720: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x215720u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x215724: 0xc4a60010  lwc1        $f6, 0x10($a1)
    ctx->pc = 0x215724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x215728: 0x0  nop
    ctx->pc = 0x215728u;
    // NOP
    // 0x21572c: 0x0  nop
    ctx->pc = 0x21572cu;
    // NOP
    // 0x215730: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x215730u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x215734: 0xc467000c  lwc1        $f7, 0xC($v1)
    ctx->pc = 0x215734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x215738: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x215738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21573c: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x21573cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x215740: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x215740u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x215744: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x215744u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x215748: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x215748u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x21574c: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x21574cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x215750: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x215750u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x215754: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x215754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x215758: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x215758u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x21575c: 0xe7a7002c  swc1        $f7, 0x2C($sp)
    ctx->pc = 0x21575cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x215760: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x215760u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x215764: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x215764u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x215768: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x215768u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x21576c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x21576cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x215770: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x215770u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215774: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x215774u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x215778: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x215778u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21577c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x21577cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x215780: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x215780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x215784: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x215784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x215788: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x215788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21578c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x21578cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215790: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x215790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x215794: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x215794u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x215798: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x215798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x21579c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x21579cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2157a0: 0xe7a5003c  swc1        $f5, 0x3C($sp)
    ctx->pc = 0x2157a0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2157a4: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2157a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2157a8: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2157a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2157ac: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x2157acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2157b0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2157b0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2157b4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2157b4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2157b8: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x2157b8u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2157bc: 0x46140504  c1          0x140504
    ctx->pc = 0x2157bcu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x2157c0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2157C0u;
    SET_GPR_U32(ctx, 31, 0x2157C8u);
    ctx->pc = 0x2157C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2157C0u;
    // 0x2157c4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2157C0u, 0x2157C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2157C8u;
label_2157c8:
    // 0x2157c8: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2157c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2157cc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2157ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2157d0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2157d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2157d4: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2157d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x2157d8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2157d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2157dc: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2157dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2157e0: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2157e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2157e4: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x2157e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2157e8: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x2157e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2157ec: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2157ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2157f0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2157f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2157f4: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2157f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2157f8: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x2157f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2157fc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2157fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x215800: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x215800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x215804: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215808: 0xc0854d4  jal         func_215350
    ctx->pc = 0x215808u;
    SET_GPR_U32(ctx, 31, 0x215810u);
    ctx->pc = 0x21580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215808u;
    // 0x21580c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215350u, 0x215808u, 0x215810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215810u;
label_215810:
    // 0x215810: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x215810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x215814: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x215814u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x215818: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x215818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21581c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x21581cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x215820: 0x3e00008  jr          $ra
    ctx->pc = 0x215820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215820u;
        // 0x215824: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215828u;
}
