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

// Function: sub_00248ED0
// Address: 0x248ed0 - 0x2490a8
void sub_00248ED0_0x248ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248ED0_0x248ed0");
#endif

    switch (ctx->pc) {
        case 0x248fd0u: goto label_248fd0;
        case 0x248fd8u: goto label_248fd8;
        case 0x249070u: goto label_249070;
        case 0x249088u: goto label_249088;
        default: break;
    }

    ctx->pc = 0x248ed0u;

    // 0x248ed0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x248ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x248ed4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x248ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x248ed8: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x248ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x248edc: 0x906298d1  lbu         $v0, -0x672F($v1)
    ctx->pc = 0x248edcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F98D1u));
    // 0x248ee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x248ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248ee4: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x248EE4u;
    {
        const bool branch_taken_0x248ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248EE4u;
        // 0x248ee8: 0xffbf00a8  sd          $ra, 0xA8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ee4) {
            ctx->pc = 0x249078u;
            goto label_249078;
        }
    }
    ctx->pc = 0x248EECu;
    // 0x248eec: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x248eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x248ef0: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x248ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x248ef4: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x248EF4u;
    {
        const bool branch_taken_0x248ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x248EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248EF4u;
        // 0x248ef8: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ef4) {
            ctx->pc = 0x249078u;
            goto label_249078;
        }
    }
    ctx->pc = 0x248EFCu;
    // 0x248efc: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x248efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x248f00: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x248f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x248f04: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x248f04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x248f08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248f0c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x248f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x248f10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x248f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x248f14: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x248f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x248f18: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x248f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x248f1c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x248f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x248f20: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x248f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x248f24: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x248f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x248f28: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x248f28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x248f2c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x248f2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x248f30: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x248f30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x248f34: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x248f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x248f38: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x248f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248f3c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x248f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248f40: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x248f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x248f44: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x248f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x248f48: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x248f48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x248f4c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x248f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x248f50: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x248f50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x248f54: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x248f54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x248f58: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x248f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x248f5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x248f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x248f60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x248f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x248f64: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x248f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x248f68: 0xc4620060  lwc1        $f2, 0x60($v1)
    ctx->pc = 0x248f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x248f6c: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x248f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x248f70: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x248f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x248f74: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x248f74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x248f78: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x248f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248f7c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x248f7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x248f80: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x248f80u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x248f84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x248f84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x248f88: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x248f88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x248f8c: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x248f8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x248f90: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x248f90u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x248f94: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x248f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x248f98: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x248f98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248f9c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x248f9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x248fa0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x248fa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x248fa4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x248fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x248fa8: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x248fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x248fac: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x248facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x248fb0: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x248fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248fb4: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x248fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248fb8: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x248fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x248fbc: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x248fbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x248fc0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x248fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x248fc4: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x248fc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x248fc8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x248FC8u;
    SET_GPR_U32(ctx, 31, 0x248FD0u);
    ctx->pc = 0x248FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248FC8u;
    // 0x248fcc: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x248FC8u, 0x248FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248FD0u;
label_248fd0:
    // 0x248fd0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x248FD0u;
    SET_GPR_U32(ctx, 31, 0x248FD8u);
    ctx->pc = 0x248FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248FD0u;
    // 0x248fd4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x248FD0u, 0x248FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248FD8u;
label_248fd8:
    // 0x248fd8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x248fd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248fdc: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x248fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x248fe0: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x248fe0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248fe4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x248fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x248fe8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x248fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x248fec: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x248fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x248ff0: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x248ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x248ff4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x248ff4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x248ff8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x248ff8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x248ffc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x248ffcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x249000: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x249000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x249004: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x249004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x249008: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x249008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24900c: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x24900cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x249010: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x249010u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x249014: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x249014u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x249018: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x249018u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x24901c: 0x0  nop
    ctx->pc = 0x24901cu;
    // NOP
    // 0x249020: 0x0  nop
    ctx->pc = 0x249020u;
    // NOP
    // 0x249024: 0x46010084  c1          0x10084
    ctx->pc = 0x249024u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x249028: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x249028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x24902c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24902cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249030: 0x0  nop
    ctx->pc = 0x249030u;
    // NOP
    // 0x249034: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x249034u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x249038: 0x0  nop
    ctx->pc = 0x249038u;
    // NOP
    // 0x24903c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x24903Cu;
    {
        const bool branch_taken_0x24903c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x249040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24903Cu;
        // 0x249040: 0xe7a20090  swc1        $f2, 0x90($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24903c) {
            ctx->pc = 0x249068u;
            goto label_249068;
        }
    }
    ctx->pc = 0x249044u;
    // 0x249044: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x249044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x249048: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x249048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24904c: 0x0  nop
    ctx->pc = 0x24904cu;
    // NOP
    // 0x249050: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x249050u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x249054: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x249054u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x249058: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x249058u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24905c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x24905cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x249060: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x249060u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x249064: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x249064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_249068:
    // 0x249068: 0xc077878  jal         func_1DE1E0
    ctx->pc = 0x249068u;
    SET_GPR_U32(ctx, 31, 0x249070u);
    ctx->pc = 0x24906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249068u;
    // 0x24906c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1E0u, 0x249068u, 0x249070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249070u;
label_249070:
    // 0x249070: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x249070u;
    {
        const bool branch_taken_0x249070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249070) {
            ctx->pc = 0x249080u;
            goto label_249080;
        }
    }
    ctx->pc = 0x249078u;
label_249078:
    // 0x249078: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x249078u;
    {
        const bool branch_taken_0x249078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249078u;
        // 0x24907c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249078) {
            ctx->pc = 0x24908Cu;
            goto label_24908c;
        }
    }
    ctx->pc = 0x249080u;
label_249080:
    // 0x249080: 0xc092388  jal         func_248E20
    ctx->pc = 0x249080u;
    SET_GPR_U32(ctx, 31, 0x249088u);
    ctx->pc = 0x249084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249080u;
    // 0x249084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248E20u, 0x249080u, 0x249088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249088u;
label_249088:
    // 0x249088: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x249088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_24908c:
    // 0x24908c: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x24908cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x249090: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x249090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x249094: 0x3e00008  jr          $ra
    ctx->pc = 0x249094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249094u;
        // 0x249098: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24909Cu;
    // 0x24909c: 0x0  nop
    ctx->pc = 0x24909cu;
    // NOP
    // 0x2490a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2490a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2490a4: 0x0  nop
    ctx->pc = 0x2490a4u;
    // NOP
    ctx->pc = 0x2490a8u;
}
