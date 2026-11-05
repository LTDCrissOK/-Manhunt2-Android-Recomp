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

// Function: sub_0030C1B8
// Address: 0x30c1b8 - 0x30c350
void sub_0030C1B8_0x30c1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C1B8_0x30c1b8");
#endif

    switch (ctx->pc) {
        case 0x30c20cu: goto label_30c20c;
        case 0x30c21cu: goto label_30c21c;
        default: break;
    }

    ctx->pc = 0x30c1b8u;

    // 0x30c1b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30c1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30c1bc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x30c1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x30c1c0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x30c1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x30c1c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30c1c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c1c8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x30c1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x30c1cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30c1ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c1d0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x30c1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x30c1d4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x30c1d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x30c1d8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x30c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x30c1dc: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x30c1dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x30c1e0: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x30c1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x30c1e4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x30c1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c1e8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x30c1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c1ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30c1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c1f0: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x30c1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30c1f4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x30c1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30c1f8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x30c1f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30c1fc: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x30c1fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30c200: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x30c200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x30c204: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x30C204u;
    SET_GPR_U32(ctx, 31, 0x30C20Cu);
    ctx->pc = 0x30C208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C204u;
    // 0x30c208: 0xc474000c  lwc1        $f20, 0xC($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x30C204u, 0x30C20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C20Cu;
label_30c20c:
    // 0x30c20c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C20Cu;
    {
        const bool branch_taken_0x30c20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C20Cu;
        // 0x30c210: 0x26220080  addiu       $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c20c) {
            ctx->pc = 0x30C220u;
            goto label_30c220;
        }
    }
    ctx->pc = 0x30C214u;
    // 0x30c214: 0xc0c4900  jal         func_312400
    ctx->pc = 0x30C214u;
    SET_GPR_U32(ctx, 31, 0x30C21Cu);
    ctx->pc = 0x30C218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C214u;
    // 0x30c218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x30C214u, 0x30C21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C21Cu;
label_30c21c:
    // 0x30c21c: 0x26220080  addiu       $v0, $s1, 0x80
    ctx->pc = 0x30c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_30c220:
    // 0x30c220: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x30c220u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c224: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x30c224u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30c228: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x30c228u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30c22c: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x30c22cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x30c230: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x30c230u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x30c234: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x30c234u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x30c238: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x30c238u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x30c23c: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x30c23cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x30c240: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x30c240u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30c244: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x30c244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30c248: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x30c248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c24c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x30c24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c250: 0x46140100  add.s       $f4, $f0, $f20
    ctx->pc = 0x30c250u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x30c254: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x30c254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30c258: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x30c258u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x30c25c: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x30c25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30c260: 0x461411c0  add.s       $f7, $f2, $f20
    ctx->pc = 0x30c260u;
    ctx->f[7] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
    // 0x30c264: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x30c264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x30c268: 0x46140940  add.s       $f5, $f1, $f20
    ctx->pc = 0x30c268u;
    ctx->f[5] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x30c26c: 0x46001986  mov.s       $f6, $f3
    ctx->pc = 0x30c26cu;
    ctx->f[6] = FPU_MOV_S(ctx->f[3]);
    // 0x30c270: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x30c270u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x30c274: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x30c274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x30c278: 0x46141081  sub.s       $f2, $f2, $f20
    ctx->pc = 0x30c278u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
    // 0x30c27c: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x30c27cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x30c280: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x30c280u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c284: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x30c284u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x30c288: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x30c288u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x30c28c: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x30c28cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x30c290: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x30c290u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x30c294: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x30C294u;
    {
        const bool branch_taken_0x30c294 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C294u;
        // 0x30c298: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c294) {
            ctx->pc = 0x30C2A0u;
            goto label_30c2a0;
        }
    }
    ctx->pc = 0x30C29Cu;
    // 0x30c29c: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x30c29cu;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
label_30c2a0:
    // 0x30c2a0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x30c2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c2a4: 0xe6060000  swc1        $f6, 0x0($s0)
    ctx->pc = 0x30c2a4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x30c2a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30c2a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c2ac: 0x0  nop
    ctx->pc = 0x30c2acu;
    // NOP
    // 0x30c2b0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x30C2B0u;
    {
        const bool branch_taken_0x30c2b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C2B0u;
        // 0x30c2b4: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c2b0) {
            ctx->pc = 0x30C2BCu;
            goto label_30c2bc;
        }
    }
    ctx->pc = 0x30C2B8u;
    // 0x30c2b8: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x30c2b8u;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
label_30c2bc:
    // 0x30c2bc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x30c2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c2c0: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x30c2c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x30c2c4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x30c2c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c2c8: 0x0  nop
    ctx->pc = 0x30c2c8u;
    // NOP
    // 0x30c2cc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x30C2CCu;
    {
        const bool branch_taken_0x30c2cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C2CCu;
        // 0x30c2d0: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c2cc) {
            ctx->pc = 0x30C2D8u;
            goto label_30c2d8;
        }
    }
    ctx->pc = 0x30C2D4u;
    // 0x30c2d4: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x30c2d4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_30c2d8:
    // 0x30c2d8: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x30c2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c2dc: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x30c2dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x30c2e0: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x30c2e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c2e4: 0x0  nop
    ctx->pc = 0x30c2e4u;
    // NOP
    // 0x30c2e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x30C2E8u;
    {
        const bool branch_taken_0x30c2e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C2E8u;
        // 0x30c2ec: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c2e8) {
            ctx->pc = 0x30C2F4u;
            goto label_30c2f4;
        }
    }
    ctx->pc = 0x30C2F0u;
    // 0x30c2f0: 0x46002046  mov.s       $f1, $f4
    ctx->pc = 0x30c2f0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[4]);
label_30c2f4:
    // 0x30c2f4: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x30c2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c2f8: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x30c2f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x30c2fc: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x30c2fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c300: 0x0  nop
    ctx->pc = 0x30c300u;
    // NOP
    // 0x30c304: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x30C304u;
    {
        const bool branch_taken_0x30c304 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C304u;
        // 0x30c308: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c304) {
            ctx->pc = 0x30C310u;
            goto label_30c310;
        }
    }
    ctx->pc = 0x30C30Cu;
    // 0x30c30c: 0x46002846  mov.s       $f1, $f5
    ctx->pc = 0x30c30cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[5]);
label_30c310:
    // 0x30c310: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x30c310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c314: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x30c314u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c318: 0x0  nop
    ctx->pc = 0x30c318u;
    // NOP
    // 0x30c31c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x30C31Cu;
    {
        const bool branch_taken_0x30c31c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C31Cu;
        // 0x30c320: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c31c) {
            ctx->pc = 0x30C328u;
            goto label_30c328;
        }
    }
    ctx->pc = 0x30C324u;
    // 0x30c324: 0x46003806  mov.s       $f0, $f7
    ctx->pc = 0x30c324u;
    ctx->f[0] = FPU_MOV_S(ctx->f[7]);
label_30c328:
    // 0x30c328: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x30c328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x30c32c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x30c32cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c330: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x30c330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30c334: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x30c334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30c338: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x30c338u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30c33c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x30c33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30c340: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x30c340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30c344: 0x3e00008  jr          $ra
    ctx->pc = 0x30C344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C344u;
        // 0x30c348: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C34Cu;
    // 0x30c34c: 0x0  nop
    ctx->pc = 0x30c34cu;
    // NOP
    ctx->pc = 0x30c350u;
}
