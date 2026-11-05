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

// Function: sub_002141C8
// Address: 0x2141c8 - 0x2143b0
void sub_002141C8_0x2141c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002141C8_0x2141c8");
#endif

    switch (ctx->pc) {
        case 0x214284u: goto label_214284;
        case 0x21428cu: goto label_21428c;
        case 0x214334u: goto label_214334;
        case 0x214358u: goto label_214358;
        default: break;
    }

    ctx->pc = 0x2141c8u;

    // 0x2141c8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2141c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2141cc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2141ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2141d0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2141d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2141d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2141d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2141d8: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x2141d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x2141dc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2141dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2141e0: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2141e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2141e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2141e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2141e8: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x2141e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x2141ec: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2141ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2141f0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2141f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2141f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2141f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2141f8: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x2141f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x2141fc: 0x8e250104  lw          $a1, 0x104($s1)
    ctx->pc = 0x2141fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x214200: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x214200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x214204: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x214204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x214208: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x214208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21420c: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x21420cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x214210: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x214210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214214: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x214214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x214218: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x214218u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x21421c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x21421cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x214220: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x214220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214224: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x214224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x214228: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x214228u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21422c: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x21422cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x214230: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x214230u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x214234: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x214234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x214238: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x214238u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x21423c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x21423cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x214240: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x214240u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x214244: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x214244u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x214248: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x214248u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21424c: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x21424cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x214250: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x214250u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x214254: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x214254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214258: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x214258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21425c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x21425cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x214260: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x214260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214264: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x214264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214268: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x214268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21426c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x21426cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x214270: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x214270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x214274: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x214274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x214278: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x214278u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x21427c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x21427Cu;
    SET_GPR_U32(ctx, 31, 0x214284u);
    ctx->pc = 0x214280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21427Cu;
    // 0x214280: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x21427Cu, 0x214284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214284u;
label_214284:
    // 0x214284: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x214284u;
    SET_GPR_U32(ctx, 31, 0x21428Cu);
    ctx->pc = 0x214288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214284u;
    // 0x214288: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x214284u, 0x21428Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21428Cu;
label_21428c:
    // 0x21428c: 0x7a020070  lq          $v0, 0x70($s0)
    ctx->pc = 0x21428cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x214290: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x214290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x214294: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x214294u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214298: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x214298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21429c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x21429cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x2142a0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2142a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2142a4: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x2142a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x2142a8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2142a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2142ac: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2142acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2142b0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2142b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2142b4: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2142b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2142b8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2142b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2142bc: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2142bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2142c0: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x2142c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2142c4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2142c4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2142c8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2142c8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2142cc: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2142ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2142d0: 0x0  nop
    ctx->pc = 0x2142d0u;
    // NOP
    // 0x2142d4: 0x0  nop
    ctx->pc = 0x2142d4u;
    // NOP
    // 0x2142d8: 0x46000044  c1          0x44
    ctx->pc = 0x2142d8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2142dc: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2142dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2142e0: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2142e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2142e4: 0x0  nop
    ctx->pc = 0x2142e4u;
    // NOP
    // 0x2142e8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2142E8u;
    {
        const bool branch_taken_0x2142e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2142ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2142E8u;
        // 0x2142ec: 0xe7a10090  swc1        $f1, 0x90($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2142e8) {
            ctx->pc = 0x214314u;
            goto label_214314;
        }
    }
    ctx->pc = 0x2142F0u;
    // 0x2142f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2142f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2142f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2142f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2142f8: 0x0  nop
    ctx->pc = 0x2142f8u;
    // NOP
    // 0x2142fc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2142fcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x214300: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x214300u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x214304: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x214304u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x214308: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x214308u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x21430c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x21430cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x214310: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x214310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_214314:
    // 0x214314: 0x3c05fbfb  lui         $a1, 0xFBFB
    ctx->pc = 0x214314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64507 << 16));
    // 0x214318: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x214318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21431c: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x21431cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x214320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x214320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214324: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x214324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214328: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x214328u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21432c: 0xc07797e  jal         func_1DE5F8
    ctx->pc = 0x21432Cu;
    SET_GPR_U32(ctx, 31, 0x214334u);
    ctx->pc = 0x214330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21432Cu;
    // 0x214330: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE5F8u, 0x21432Cu, 0x214334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214334u;
label_214334:
    // 0x214334: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x214334u;
    {
        const bool branch_taken_0x214334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214334u;
        // 0x214338: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214334) {
            ctx->pc = 0x214394u;
            goto label_214394;
        }
    }
    ctx->pc = 0x21433Cu;
    // 0x21433c: 0x8c432b1c  lw          $v1, 0x2B1C($v0)
    ctx->pc = 0x21433cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11036)));
    // 0x214340: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x214340u;
    {
        const bool branch_taken_0x214340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x214344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214340u;
        // 0x214344: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214340) {
            ctx->pc = 0x214394u;
            goto label_214394;
        }
    }
    ctx->pc = 0x214348u;
    // 0x214348: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x214348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x21434c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x21434cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214350: 0x8c452b20  lw          $a1, 0x2B20($v0)
    ctx->pc = 0x214350u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x482B20u));
    // 0x214354: 0x0  nop
    ctx->pc = 0x214354u;
    // NOP
label_214358:
    // 0x214358: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x214358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21435c: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x21435cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x214360: 0x3862000a  xori        $v0, $v1, 0xA
    ctx->pc = 0x214360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)10);
    // 0x214364: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x214364u;
    {
        const bool branch_taken_0x214364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214364u;
        // 0x214368: 0x38620008  xori        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214364) {
            ctx->pc = 0x214380u;
            goto label_214380;
        }
    }
    ctx->pc = 0x21436Cu;
    // 0x21436c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x21436Cu;
    {
        const bool branch_taken_0x21436c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21436c) {
            ctx->pc = 0x214370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21436Cu;
            // 0x214370: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214388u;
            goto label_214388;
        }
    }
    ctx->pc = 0x214374u;
    // 0x214374: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x214374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x214378: 0x50510003  beql        $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x214378u;
    {
        const bool branch_taken_0x214378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x214378) {
            ctx->pc = 0x21437Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214378u;
            // 0x21437c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214388u;
            goto label_214388;
        }
    }
    ctx->pc = 0x214380u;
label_214380:
    // 0x214380: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x214380u;
    {
        const bool branch_taken_0x214380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214380u;
        // 0x214384: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214380) {
            ctx->pc = 0x214398u;
            goto label_214398;
        }
    }
    ctx->pc = 0x214388u;
label_214388:
    // 0x214388: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x214388u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x21438c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x21438Cu;
    {
        const bool branch_taken_0x21438c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21438Cu;
        // 0x214390: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21438c) {
            ctx->pc = 0x214358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214358;
        }
    }
    ctx->pc = 0x214394u;
label_214394:
    // 0x214394: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x214394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_214398:
    // 0x214398: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x214398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21439c: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x21439cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2143a0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2143a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2143a4: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2143a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2143a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2143A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2143ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2143A8u;
        // 0x2143ac: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2143A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2143B0u;
}
