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

// Function: sub_003ECF38
// Address: 0x3ecf38 - 0x3ed168
void sub_003ECF38_0x3ecf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ECF38_0x3ecf38");
#endif

    switch (ctx->pc) {
        case 0x3ecf78u: goto label_3ecf78;
        default: break;
    }

    ctx->pc = 0x3ecf38u;

    // 0x3ecf38: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3ecf38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x3ecf3c: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x3ecf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x3ecf40: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3ecf40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecf44: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x3ecf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x3ecf48: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x3ecf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x3ecf4c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3ecf4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecf50: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x3ecf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x3ecf54: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3ecf54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecf58: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x3ecf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x3ecf5c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3ecf5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecf60: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x3ecf60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x3ecf64: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x3ecf64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecf68: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3ecf68u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3ecf6c: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x3ecf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x3ecf70: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3ECF70u;
    SET_GPR_U32(ctx, 31, 0x3ECF78u);
    ctx->pc = 0x3ECF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECF70u;
    // 0x3ecf74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3ECF70u, 0x3ECF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECF78u;
label_3ecf78:
    // 0x3ecf78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ecf78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3ecf7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ecf7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ecf80: 0x4614a082  mul.s       $f2, $f20, $f20
    ctx->pc = 0x3ecf80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x3ecf84: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x3ecf84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x3ecf88: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ecf88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3ecf8c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3ecf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3ecf90: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x3ecf90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x3ecf94: 0xc606000c  lwc1        $f6, 0xC($s0)
    ctx->pc = 0x3ecf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3ecf98: 0x46141282  mul.s       $f10, $f2, $f20
    ctx->pc = 0x3ecf98u;
    ctx->f[10] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x3ecf9c: 0xc629000c  lwc1        $f9, 0xC($s1)
    ctx->pc = 0x3ecf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3ecfa0: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x3ecfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3ecfa4: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x3ecfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3ecfa8: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x3ecfa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3ecfac: 0xc6070004  lwc1        $f7, 0x4($s0)
    ctx->pc = 0x3ecfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3ecfb0: 0xc6280000  lwc1        $f8, 0x0($s1)
    ctx->pc = 0x3ecfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3ecfb4: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x3ecfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3ecfb8: 0xc6250004  lwc1        $f5, 0x4($s1)
    ctx->pc = 0x3ecfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3ecfbc: 0x460d00c2  mul.s       $f3, $f0, $f13
    ctx->pc = 0x3ecfbcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x3ecfc0: 0xc60b0008  lwc1        $f11, 0x8($s0)
    ctx->pc = 0x3ecfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x3ecfc4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3ecfc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3ecfc8: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x3ecfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3ecfcc: 0x4603a502  mul.s       $f20, $f20, $f3
    ctx->pc = 0x3ecfccu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x3ecfd0: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x3ecfd0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x3ecfd4: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x3ecfd4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3ecfd8: 0x4609a242  mul.s       $f9, $f20, $f9
    ctx->pc = 0x3ecfd8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[20], ctx->f[9]);
    // 0x3ecfdc: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x3ecfdcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x3ecfe0: 0xe7a6004c  swc1        $f6, 0x4C($sp)
    ctx->pc = 0x3ecfe0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3ecfe4: 0x4608a202  mul.s       $f8, $f20, $f8
    ctx->pc = 0x3ecfe4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[20], ctx->f[8]);
    // 0x3ecfe8: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x3ecfe8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3ecfec: 0x4605a142  mul.s       $f5, $f20, $f5
    ctx->pc = 0x3ecfecu;
    ctx->f[5] = FPU_MUL_S(ctx->f[20], ctx->f[5]);
    // 0x3ecff0: 0xe7a9005c  swc1        $f9, 0x5C($sp)
    ctx->pc = 0x3ecff0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x3ecff4: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x3ecff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x3ecff8: 0xe7a70044  swc1        $f7, 0x44($sp)
    ctx->pc = 0x3ecff8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3ecffc: 0x460ca502  mul.s       $f20, $f20, $f12
    ctx->pc = 0x3ecffcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x3ed000: 0xe7a80050  swc1        $f8, 0x50($sp)
    ctx->pc = 0x3ed000u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3ed004: 0xe7a50054  swc1        $f5, 0x54($sp)
    ctx->pc = 0x3ed004u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3ed008: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3ed008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3ed00c: 0xe7b40058  swc1        $f20, 0x58($sp)
    ctx->pc = 0x3ed00cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x3ed010: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3ed010u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ed014: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3ed014u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ed018: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3ed018u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3ed01c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x3ed01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3ed020: 0x460d0842  mul.s       $f1, $f1, $f13
    ctx->pc = 0x3ed020u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x3ed024: 0xc644000c  lwc1        $f4, 0xC($s2)
    ctx->pc = 0x3ed024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3ed028: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x3ed028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ed02c: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x3ed02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3ed030: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x3ed030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ed034: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3ed034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3ed038: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3ed038u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3ed03c: 0xc6480008  lwc1        $f8, 0x8($s2)
    ctx->pc = 0x3ed03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3ed040: 0xc7a50060  lwc1        $f5, 0x60($sp)
    ctx->pc = 0x3ed040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3ed044: 0xc7a70064  lwc1        $f7, 0x64($sp)
    ctx->pc = 0x3ed044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3ed048: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x3ed048u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3ed04c: 0xc7a60068  lwc1        $f6, 0x68($sp)
    ctx->pc = 0x3ed04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3ed050: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x3ed050u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3ed054: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x3ed054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ed058: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3ed058u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3ed05c: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x3ed05cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3ed060: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x3ed060u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x3ed064: 0xe7a70034  swc1        $f7, 0x34($sp)
    ctx->pc = 0x3ed064u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3ed068: 0xe7a60038  swc1        $f6, 0x38($sp)
    ctx->pc = 0x3ed068u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3ed06c: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x3ed06cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x3ed070: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x3ed070u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3ed074: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x3ed074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x3ed078: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x3ed078u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3ed07c: 0xe7a4006c  swc1        $f4, 0x6C($sp)
    ctx->pc = 0x3ed07cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x3ed080: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3ed080u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ed084: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x3ed084u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ed088: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3ed088u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3ed08c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x3ed08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3ed090: 0xc665000c  lwc1        $f5, 0xC($s3)
    ctx->pc = 0x3ed090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3ed094: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x3ed094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3ed098: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x3ed098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ed09c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x3ed09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ed0a0: 0x46055142  mul.s       $f5, $f10, $f5
    ctx->pc = 0x3ed0a0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
    // 0x3ed0a4: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x3ed0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ed0a8: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x3ed0a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x3ed0ac: 0x46015042  mul.s       $f1, $f10, $f1
    ctx->pc = 0x3ed0acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x3ed0b0: 0xc7a60070  lwc1        $f6, 0x70($sp)
    ctx->pc = 0x3ed0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3ed0b4: 0x46025282  mul.s       $f10, $f10, $f2
    ctx->pc = 0x3ed0b4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
    // 0x3ed0b8: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x3ed0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ed0bc: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x3ed0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ed0c0: 0xc7a4007c  lwc1        $f4, 0x7C($sp)
    ctx->pc = 0x3ed0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3ed0c4: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x3ed0c4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3ed0c8: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x3ed0c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3ed0cc: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x3ed0ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3ed0d0: 0xe7a4002c  swc1        $f4, 0x2C($sp)
    ctx->pc = 0x3ed0d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x3ed0d4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x3ed0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3ed0d8: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x3ed0d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x3ed0dc: 0xe7aa0078  swc1        $f10, 0x78($sp)
    ctx->pc = 0x3ed0dcu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3ed0e0: 0xe7a5007c  swc1        $f5, 0x7C($sp)
    ctx->pc = 0x3ed0e0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x3ed0e4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3ed0e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ed0e8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x3ed0e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ed0ec: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3ed0ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3ed0f0: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x3ed0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3ed0f4: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x3ed0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ed0f8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x3ed0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ed0fc: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x3ed0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ed100: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x3ed100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ed104: 0xc7a2008c  lwc1        $f2, 0x8C($sp)
    ctx->pc = 0x3ed104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ed108: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x3ed108u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3ed10c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x3ed10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3ed110: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x3ed110u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3ed114: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x3ed114u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x3ed118: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3ed118u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ed11c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3ed11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3ed120: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x3ed120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ed124: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3ed124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed128: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3ed128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ed12c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x3ed12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ed130: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x3ed130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ed134: 0xe6830000  swc1        $f3, 0x0($s4)
    ctx->pc = 0x3ed134u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x3ed138: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x3ed138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x3ed13c: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x3ed13cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x3ed140: 0xe682000c  swc1        $f2, 0xC($s4)
    ctx->pc = 0x3ed140u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x3ed144: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x3ed144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3ed148: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x3ed148u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3ed14c: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x3ed14cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3ed150: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x3ed150u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3ed154: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x3ed154u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3ed158: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x3ed158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3ed15c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x3ed15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3ed160: 0x3e00008  jr          $ra
    ctx->pc = 0x3ED160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED160u;
        // 0x3ed164: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ED168u;
}
