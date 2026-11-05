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

// Function: sub_001C7ED8
// Address: 0x1c7ed8 - 0x1c8320
void sub_001C7ED8_0x1c7ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7ED8_0x1c7ed8");
#endif

    switch (ctx->pc) {
        case 0x1c7ff8u: goto label_1c7ff8;
        case 0x1c800cu: goto label_1c800c;
        case 0x1c8110u: goto label_1c8110;
        case 0x1c8124u: goto label_1c8124;
        case 0x1c8228u: goto label_1c8228;
        case 0x1c823cu: goto label_1c823c;
        default: break;
    }

    ctx->pc = 0x1c7ed8u;

    // 0x1c7ed8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c7ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c7edc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1c7edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1c7ee0: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1c7ee0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1c7ee4: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1c7ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x1c7ee8: 0xc454c758  lwc1        $f20, -0x38A8($v0)
    ctx->pc = 0x1c7ee8u;
    { uint32_t bits = FAST_READ32(0x45C758u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c7eec: 0x24635b40  addiu       $v1, $v1, 0x5B40
    ctx->pc = 0x1c7eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23360));
    // 0x1c7ef0: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x1c7ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x1c7ef4: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1c7ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1c7ef8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c7ef8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7efc: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x1c7efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x1c7f00: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1c7f00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f04: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x1c7f04u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1c7f08: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1c7f08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f0c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1c7f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1c7f10: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x1c7f10u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x1c7f14: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1c7f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x1c7f18: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1c7f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1c7f1c: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x1c7f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x1c7f20: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x1c7f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x1c7f24: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1c7f24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1c7f28: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1c7f28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(FAST_READ128(0x575B40u));
    // 0x1c7f2c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1c7f2cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1c7f30: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1c7f30u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7f34: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c7f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7f38: 0xc4e4000c  lwc1        $f4, 0xC($a3)
    ctx->pc = 0x1c7f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c7f3c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1c7f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c7f40: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x1c7f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c7f44: 0x26710330  addiu       $s1, $s3, 0x330
    ctx->pc = 0x1c7f44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 816));
    // 0x1c7f48: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x1c7f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c7f4c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1c7f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c7f50: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x1c7f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7f54: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1c7f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1c7f58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c7f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7f5c: 0x0  nop
    ctx->pc = 0x1c7f5cu;
    // NOP
    // 0x1c7f60: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1c7f60u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1c7f64: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1c7f64u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1c7f68: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1c7f68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c7f6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c7f6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c7f70: 0xe7a4002c  swc1        $f4, 0x2C($sp)
    ctx->pc = 0x1c7f70u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c7f74: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x1c7f74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1c7f78: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x1c7f78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1c7f7c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1c7f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1c7f80: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1c7f80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c7f84: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c7f84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c7f88: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c7f88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7f8c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1c7f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7f90: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1c7f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7f94: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1c7f94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f98: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1c7f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7f9c: 0x26700090  addiu       $s0, $s3, 0x90
    ctx->pc = 0x1c7f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x1c7fa0: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1c7fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c7fa4: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x1c7fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c7fa8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1c7fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c7fac: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1c7facu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1c7fb0: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1c7fb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1c7fb4: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x1c7fb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1c7fb8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1c7fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1c7fbc: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1C7FBCu;
    {
        const bool branch_taken_0x1c7fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FBCu;
        // 0x1c7fc0: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7fbc) {
            ctx->pc = 0x1C80CCu;
            goto label_1c80cc;
        }
    }
    ctx->pc = 0x1C7FC4u;
    // 0x1c7fc4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1c7fc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c7fc8: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1c7fc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c7fcc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c7fccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7fd0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1c7fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7fd4: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x1c7fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c7fd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c7fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7fdc: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1c7fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7fe0: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1c7fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7fe4: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1c7fe4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1c7fe8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1c7fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1c7fec: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x1c7fecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c7ff0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C7FF0u;
    SET_GPR_U32(ctx, 31, 0x1C7FF8u);
    ctx->pc = 0x1C7FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7FF0u;
    // 0x1c7ff4: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C7FF0u, 0x1C7FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7FF8u;
label_1c7ff8:
    // 0x1c7ff8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c7ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8000: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1c8000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c8004: 0xc0791fe  jal         func_1E47F8
    ctx->pc = 0x1C8004u;
    SET_GPR_U32(ctx, 31, 0x1C800Cu);
    ctx->pc = 0x1C8008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8004u;
    // 0x1c8008: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E47F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E47F8u, 0x1C8004u, 0x1C800Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C800Cu;
label_1c800c:
    // 0x1c800c: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1c800cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c8010: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1c8010u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c8014: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c8014u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8018: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1c8018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c801c: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x1c801cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8020: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1c8020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c8024: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1c8024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8028: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1c8028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c802c: 0xc7a5005c  lwc1        $f5, 0x5C($sp)
    ctx->pc = 0x1c802cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1c8030: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1c8030u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1c8034: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1c8034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1c8038: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1c8038u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1c803c: 0xe7a5004c  swc1        $f5, 0x4C($sp)
    ctx->pc = 0x1c803cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1c8040: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1c8040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8044: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1c8044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8048: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1c8048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c804c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c804cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c8050: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c8050u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c8054: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x1c8054u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c8058: 0x46050144  c1          0x50144
    ctx->pc = 0x1c8058u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c805c: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x1c805cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8060: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1c8060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8064: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1c8064u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c8068: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x1c8068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c806c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1c806cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8070: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1c8070u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1c8074: 0xc6c20008  lwc1        $f2, 0x8($s6)
    ctx->pc = 0x1c8074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8078: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1c8078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c807c: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1c807cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c8080: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8080u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8084: 0x0  nop
    ctx->pc = 0x1c8084u;
    // NOP
    // 0x1c8088: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c8088u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c808c: 0x0  nop
    ctx->pc = 0x1c808cu;
    // NOP
    // 0x1c8090: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8090u;
    {
        const bool branch_taken_0x1c8090 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8090) {
            ctx->pc = 0x1C80B4u;
            goto label_1c80b4;
        }
    }
    ctx->pc = 0x1C8098u;
    // 0x1c8098: 0x46142834  c.lt.s      $f5, $f20
    ctx->pc = 0x1c8098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c809c: 0x0  nop
    ctx->pc = 0x1c809cu;
    // NOP
    // 0x1c80a0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1C80A0u;
    {
        const bool branch_taken_0x1c80a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C80A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C80A0u;
        // 0x1c80a4: 0x26710150  addiu       $s1, $s3, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c80a0) {
            ctx->pc = 0x1C80D0u;
            goto label_1c80d0;
        }
    }
    ctx->pc = 0x1C80A8u;
    // 0x1c80a8: 0x46002d46  mov.s       $f21, $f5
    ctx->pc = 0x1c80a8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[5]);
    // 0x1c80ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C80ACu;
    {
        const bool branch_taken_0x1c80ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C80B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C80ACu;
        // 0x1c80b0: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c80ac) {
            ctx->pc = 0x1C80D0u;
            goto label_1c80d0;
        }
    }
    ctx->pc = 0x1C80B4u;
label_1c80b4:
    // 0x1c80b4: 0x46142834  c.lt.s      $f5, $f20
    ctx->pc = 0x1c80b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c80b8: 0x0  nop
    ctx->pc = 0x1c80b8u;
    // NOP
    // 0x1c80bc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C80BCu;
    {
        const bool branch_taken_0x1c80bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C80C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C80BCu;
        // 0x1c80c0: 0x26710150  addiu       $s1, $s3, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c80bc) {
            ctx->pc = 0x1C80D0u;
            goto label_1c80d0;
        }
    }
    ctx->pc = 0x1C80C4u;
    // 0x1c80c4: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x1c80c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x1c80c8: 0x46002d06  mov.s       $f20, $f5
    ctx->pc = 0x1c80c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[5]);
label_1c80cc:
    // 0x1c80cc: 0x26710150  addiu       $s1, $s3, 0x150
    ctx->pc = 0x1c80ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
label_1c80d0:
    // 0x1c80d0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1c80d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c80d4: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1C80D4u;
    {
        const bool branch_taken_0x1c80d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C80D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C80D4u;
        // 0x1c80d8: 0x26700330  addiu       $s0, $s3, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c80d4) {
            ctx->pc = 0x1C81E4u;
            goto label_1c81e4;
        }
    }
    ctx->pc = 0x1C80DCu;
    // 0x1c80dc: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1c80dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c80e0: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1c80e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c80e4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c80e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c80e8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1c80e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c80ec: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x1c80ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c80f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c80f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c80f4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1c80f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c80f8: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1c80f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c80fc: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1c80fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1c8100: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1c8100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1c8104: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x1c8104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c8108: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C8108u;
    SET_GPR_U32(ctx, 31, 0x1C8110u);
    ctx->pc = 0x1C810Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8108u;
    // 0x1c810c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C8108u, 0x1C8110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8110u;
label_1c8110:
    // 0x1c8110: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c8110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8114: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c8114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8118: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1c8118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c811c: 0xc0791fe  jal         func_1E47F8
    ctx->pc = 0x1C811Cu;
    SET_GPR_U32(ctx, 31, 0x1C8124u);
    ctx->pc = 0x1C8120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C811Cu;
    // 0x1c8120: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E47F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E47F8u, 0x1C811Cu, 0x1C8124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8124u;
label_1c8124:
    // 0x1c8124: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1c8124u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c8128: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1c8128u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c812c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c812cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8130: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1c8130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c8134: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x1c8134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8138: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1c8138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c813c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1c813cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8140: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1c8140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8144: 0xc7a5005c  lwc1        $f5, 0x5C($sp)
    ctx->pc = 0x1c8144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1c8148: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1c8148u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1c814c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1c814cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1c8150: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1c8150u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1c8154: 0xe7a5004c  swc1        $f5, 0x4C($sp)
    ctx->pc = 0x1c8154u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1c8158: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1c8158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c815c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1c815cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8160: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1c8160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c8164: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c8164u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c8168: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c8168u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c816c: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x1c816cu;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c8170: 0x46050144  c1          0x50144
    ctx->pc = 0x1c8170u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c8174: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x1c8174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8178: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1c8178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c817c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1c817cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c8180: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x1c8180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8184: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1c8184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8188: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1c8188u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1c818c: 0xc6c20008  lwc1        $f2, 0x8($s6)
    ctx->pc = 0x1c818cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8190: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1c8190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8194: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1c8194u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c8198: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c819c: 0x0  nop
    ctx->pc = 0x1c819cu;
    // NOP
    // 0x1c81a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c81a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c81a4: 0x0  nop
    ctx->pc = 0x1c81a4u;
    // NOP
    // 0x1c81a8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C81A8u;
    {
        const bool branch_taken_0x1c81a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c81a8) {
            ctx->pc = 0x1C81CCu;
            goto label_1c81cc;
        }
    }
    ctx->pc = 0x1C81B0u;
    // 0x1c81b0: 0x46152834  c.lt.s      $f5, $f21
    ctx->pc = 0x1c81b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c81b4: 0x0  nop
    ctx->pc = 0x1c81b4u;
    // NOP
    // 0x1c81b8: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x1C81B8u;
    {
        const bool branch_taken_0x1c81b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c81b8) {
            ctx->pc = 0x1C81BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C81B8u;
            // 0x1c81bc: 0x26710210  addiu       $s1, $s3, 0x210 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 528));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C81E8u;
            goto label_1c81e8;
        }
    }
    ctx->pc = 0x1C81C0u;
    // 0x1c81c0: 0x46002d46  mov.s       $f21, $f5
    ctx->pc = 0x1c81c0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[5]);
    // 0x1c81c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C81C4u;
    {
        const bool branch_taken_0x1c81c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C81C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81C4u;
        // 0x1c81c8: 0xae910000  sw          $s1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c81c4) {
            ctx->pc = 0x1C81E4u;
            goto label_1c81e4;
        }
    }
    ctx->pc = 0x1C81CCu;
label_1c81cc:
    // 0x1c81cc: 0x46142834  c.lt.s      $f5, $f20
    ctx->pc = 0x1c81ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c81d0: 0x0  nop
    ctx->pc = 0x1c81d0u;
    // NOP
    // 0x1c81d4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1C81D4u;
    {
        const bool branch_taken_0x1c81d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c81d4) {
            ctx->pc = 0x1C81D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C81D4u;
            // 0x1c81d8: 0x26710210  addiu       $s1, $s3, 0x210 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 528));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C81E8u;
            goto label_1c81e8;
        }
    }
    ctx->pc = 0x1C81DCu;
    // 0x1c81dc: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x1c81dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
    // 0x1c81e0: 0x46002d06  mov.s       $f20, $f5
    ctx->pc = 0x1c81e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[5]);
label_1c81e4:
    // 0x1c81e4: 0x26710210  addiu       $s1, $s3, 0x210
    ctx->pc = 0x1c81e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 528));
label_1c81e8:
    // 0x1c81e8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1c81e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c81ec: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1C81ECu;
    {
        const bool branch_taken_0x1c81ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C81F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81ECu;
        // 0x1c81f0: 0x26700330  addiu       $s0, $s3, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c81ec) {
            ctx->pc = 0x1C82F0u;
            goto label_1c82f0;
        }
    }
    ctx->pc = 0x1C81F4u;
    // 0x1c81f4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1c81f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c81f8: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1c81f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c81fc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c81fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8200: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1c8200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c8204: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x1c8204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8208: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c8208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c820c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1c820cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8210: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1c8210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8214: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1c8214u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1c8218: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1c8218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1c821c: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x1c821cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c8220: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C8220u;
    SET_GPR_U32(ctx, 31, 0x1C8228u);
    ctx->pc = 0x1C8224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8220u;
    // 0x1c8224: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C8220u, 0x1C8228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8228u;
label_1c8228:
    // 0x1c8228: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c8228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c822c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c822cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8230: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1c8230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c8234: 0xc0791fe  jal         func_1E47F8
    ctx->pc = 0x1C8234u;
    SET_GPR_U32(ctx, 31, 0x1C823Cu);
    ctx->pc = 0x1C8238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8234u;
    // 0x1c8238: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E47F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E47F8u, 0x1C8234u, 0x1C823Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C823Cu;
label_1c823c:
    // 0x1c823c: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1c823cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c8240: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1c8240u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c8244: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c8244u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8248: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1c8248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c824c: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x1c824cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8250: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1c8250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c8254: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1c8254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8258: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1c8258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c825c: 0xc7a5005c  lwc1        $f5, 0x5C($sp)
    ctx->pc = 0x1c825cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1c8260: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1c8260u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1c8264: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1c8264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1c8268: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1c8268u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1c826c: 0xe7a5004c  swc1        $f5, 0x4C($sp)
    ctx->pc = 0x1c826cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1c8270: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1c8270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8274: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1c8274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8278: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1c8278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c827c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c827cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c8280: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c8280u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c8284: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x1c8284u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c8288: 0x46050144  c1          0x50144
    ctx->pc = 0x1c8288u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c828c: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x1c828cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8290: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1c8290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8294: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1c8294u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c8298: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x1c8298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c829c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1c829cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c82a0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1c82a0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1c82a4: 0xc6c20008  lwc1        $f2, 0x8($s6)
    ctx->pc = 0x1c82a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c82a8: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1c82a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c82ac: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1c82acu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c82b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c82b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c82b4: 0x0  nop
    ctx->pc = 0x1c82b4u;
    // NOP
    // 0x1c82b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c82b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c82bc: 0x0  nop
    ctx->pc = 0x1c82bcu;
    // NOP
    // 0x1c82c0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C82C0u;
    {
        const bool branch_taken_0x1c82c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c82c0) {
            ctx->pc = 0x1C82E0u;
            goto label_1c82e0;
        }
    }
    ctx->pc = 0x1C82C8u;
    // 0x1c82c8: 0x46152834  c.lt.s      $f5, $f21
    ctx->pc = 0x1c82c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c82cc: 0x0  nop
    ctx->pc = 0x1c82ccu;
    // NOP
    // 0x1c82d0: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1C82D0u;
    {
        const bool branch_taken_0x1c82d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c82d0) {
            ctx->pc = 0x1C82D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C82D0u;
            // 0x1c82d4: 0xae910000  sw          $s1, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C82F0u;
            goto label_1c82f0;
        }
    }
    ctx->pc = 0x1C82D8u;
    // 0x1c82d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C82D8u;
    {
        const bool branch_taken_0x1c82d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C82DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82D8u;
        // 0x1c82dc: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82d8) {
            ctx->pc = 0x1C82F4u;
            goto label_1c82f4;
        }
    }
    ctx->pc = 0x1C82E0u;
label_1c82e0:
    // 0x1c82e0: 0x46142834  c.lt.s      $f5, $f20
    ctx->pc = 0x1c82e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c82e4: 0x0  nop
    ctx->pc = 0x1c82e4u;
    // NOP
    // 0x1c82e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C82E8u;
    {
        const bool branch_taken_0x1c82e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c82e8) {
            ctx->pc = 0x1C82ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C82E8u;
            // 0x1c82ec: 0xaeb10000  sw          $s1, 0x0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C82F0u;
            goto label_1c82f0;
        }
    }
    ctx->pc = 0x1C82F0u;
label_1c82f0:
    // 0x1c82f0: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1c82f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1c82f4:
    // 0x1c82f4: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1c82f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c82f8: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1c82f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c82fc: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x1c82fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1c8300: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1c8300u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c8304: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x1c8304u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8308: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x1c8308u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c830c: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x1c830cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c8310: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x1c8310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c8314: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1c8314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c8318: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8318u;
        // 0x1c831c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8320u;
}
