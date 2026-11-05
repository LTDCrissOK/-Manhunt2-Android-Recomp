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

// Function: sub_002151E0
// Address: 0x2151e0 - 0x215350
void sub_002151E0_0x2151e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002151E0_0x2151e0");
#endif

    switch (ctx->pc) {
        case 0x2152f0u: goto label_2152f0;
        case 0x215338u: goto label_215338;
        default: break;
    }

    ctx->pc = 0x2151e0u;

    // 0x2151e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2151e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2151e4: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x2151e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2151e8: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x2151e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x2151ec: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x2151ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2151f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2151f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2151f4: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x2151f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x2151f8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2151f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2151fc: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2151fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x215200: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x215200u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x215204: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x215204u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215208: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x215208u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21520c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x21520cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x215210: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x215210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x215214: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215218: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x215218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21521c: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x21521cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x215220: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x215220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x215224: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x215224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x215228: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x215228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21522c: 0x0  nop
    ctx->pc = 0x21522cu;
    // NOP
    // 0x215230: 0x0  nop
    ctx->pc = 0x215230u;
    // NOP
    // 0x215234: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x215234u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x215238: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x215238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21523c: 0x0  nop
    ctx->pc = 0x21523cu;
    // NOP
    // 0x215240: 0x0  nop
    ctx->pc = 0x215240u;
    // NOP
    // 0x215244: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x215244u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x215248: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x215248u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x21524c: 0xc4a60010  lwc1        $f6, 0x10($a1)
    ctx->pc = 0x21524cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x215250: 0x0  nop
    ctx->pc = 0x215250u;
    // NOP
    // 0x215254: 0x0  nop
    ctx->pc = 0x215254u;
    // NOP
    // 0x215258: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x215258u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x21525c: 0xc467000c  lwc1        $f7, 0xC($v1)
    ctx->pc = 0x21525cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x215260: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x215260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215264: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x215264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x215268: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x215268u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x21526c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x21526cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x215270: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x215270u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x215274: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x215274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x215278: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x215278u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x21527c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x21527cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x215280: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x215280u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x215284: 0xe7a7002c  swc1        $f7, 0x2C($sp)
    ctx->pc = 0x215284u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x215288: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x215288u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21528c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x21528cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x215290: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x215290u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x215294: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x215294u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x215298: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x215298u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21529c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x21529cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2152a0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2152a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2152a4: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2152a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2152a8: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x2152a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2152ac: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2152acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2152b0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2152b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2152b4: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x2152b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2152b8: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x2152b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2152bc: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x2152bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2152c0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2152c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2152c4: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x2152c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2152c8: 0xe7a5003c  swc1        $f5, 0x3C($sp)
    ctx->pc = 0x2152c8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2152cc: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2152ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2152d0: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2152d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2152d4: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x2152d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2152d8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2152d8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2152dc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2152dcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2152e0: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x2152e0u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2152e4: 0x46140504  c1          0x140504
    ctx->pc = 0x2152e4u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x2152e8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2152E8u;
    SET_GPR_U32(ctx, 31, 0x2152F0u);
    ctx->pc = 0x2152ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2152E8u;
    // 0x2152ec: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2152E8u, 0x2152F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2152F0u;
label_2152f0:
    // 0x2152f0: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2152f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2152f4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2152f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2152f8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2152f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2152fc: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2152fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x215300: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x215300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x215304: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x215304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215308: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x215308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21530c: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x21530cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x215310: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x215310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x215314: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x215314u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x215318: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x215318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x21531c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x21531cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x215320: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x215320u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x215324: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x215324u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x215328: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x215328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21532c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21532cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215330: 0xc0854d4  jal         func_215350
    ctx->pc = 0x215330u;
    SET_GPR_U32(ctx, 31, 0x215338u);
    ctx->pc = 0x215334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215330u;
    // 0x215334: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215350u, 0x215330u, 0x215338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215338u;
label_215338:
    // 0x215338: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x215338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21533c: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x21533cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x215340: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x215340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x215344: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x215344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x215348: 0x3e00008  jr          $ra
    ctx->pc = 0x215348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215348u;
        // 0x21534c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215350u;
}
