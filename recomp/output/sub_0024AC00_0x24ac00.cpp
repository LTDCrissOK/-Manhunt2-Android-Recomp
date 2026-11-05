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

// Function: sub_0024AC00
// Address: 0x24ac00 - 0x24ade0
void sub_0024AC00_0x24ac00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AC00_0x24ac00");
#endif

    switch (ctx->pc) {
        case 0x24ac3cu: goto label_24ac3c;
        case 0x24ac44u: goto label_24ac44;
        case 0x24ad8cu: goto label_24ad8c;
        case 0x24ada0u: goto label_24ada0;
        default: break;
    }

    ctx->pc = 0x24ac00u;

    // 0x24ac00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x24ac00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x24ac04: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x24ac04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x24ac08: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x24ac08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x24ac0c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24ac0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ac10: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x24ac10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x24ac14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24ac14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ac18: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x24ac18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x24ac1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24ac1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ac20: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x24ac20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x24ac24: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x24ac24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ac28: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x24ac28u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x24ac2c: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x24ac2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x24ac30: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x24ac30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x24ac34: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24AC34u;
    SET_GPR_U32(ctx, 31, 0x24AC3Cu);
    ctx->pc = 0x24AC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AC34u;
    // 0x24ac38: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24AC34u, 0x24AC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AC3Cu;
label_24ac3c:
    // 0x24ac3c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24AC3Cu;
    SET_GPR_U32(ctx, 31, 0x24AC44u);
    ctx->pc = 0x24AC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AC3Cu;
    // 0x24ac40: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24AC3Cu, 0x24AC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AC44u;
label_24ac44:
    // 0x24ac44: 0x8e630104  lw          $v1, 0x104($s3)
    ctx->pc = 0x24ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x24ac48: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x24ac48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24ac4c: 0xc605000c  lwc1        $f5, 0xC($s0)
    ctx->pc = 0x24ac4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24ac50: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x24ac50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24ac54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24ac58: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x24ac58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24ac5c: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x24ac5cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
    // 0x24ac60: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x24ac60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ac64: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x24ac64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24ac68: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x24ac68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x24ac6c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24ac6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24ac70: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x24ac70u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x24ac74: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x24ac74u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x24ac78: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24ac78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ac7c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x24ac7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ac80: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x24ac80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24ac84: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x24ac84u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x24ac88: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x24ac88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ac8c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x24ac8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24ac90: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x24ac90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ac94: 0xe7b40034  swc1        $f20, 0x34($sp)
    ctx->pc = 0x24ac94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24ac98: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x24ac98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x24ac9c: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x24ac9cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x24aca0: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x24aca0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x24aca4: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x24aca4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x24aca8: 0xe7a5004c  swc1        $f5, 0x4C($sp)
    ctx->pc = 0x24aca8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x24acac: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x24acacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x24acb0: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x24acb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x24acb4: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x24acb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x24acb8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x24acb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24acbc: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x24acbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24acc0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24acc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24acc4: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x24acc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24acc8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x24acc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24accc: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x24acccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24acd0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x24acd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24acd4: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x24acd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24acd8: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x24acd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24acdc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x24acdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x24ace0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x24ace0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x24ace4: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x24ace4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x24ace8: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x24ace8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x24acec: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24acecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24acf0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x24acf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24acf4: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x24acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24acf8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x24acf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24acfc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x24acfcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24ad00: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24ad00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24ad04: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x24ad04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24ad08: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x24ad08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ad0c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x24ad0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24ad10: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x24ad10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ad14: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x24ad14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ad18: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x24ad18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24ad1c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x24ad1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x24ad20: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x24ad20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x24ad24: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x24ad24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x24ad28: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x24ad28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x24ad2c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24ad2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24ad30: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x24ad30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24ad34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ad38: 0x1622000e  bne         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24AD38u;
    {
        const bool branch_taken_0x24ad38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x24AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AD38u;
        // 0x24ad3c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ad38) {
            ctx->pc = 0x24AD74u;
            goto label_24ad74;
        }
    }
    ctx->pc = 0x24AD40u;
    // 0x24ad40: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x24ad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ad44: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x24ad44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ad48: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x24ad48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ad4c: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x24ad4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24ad50: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x24ad50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x24ad54: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x24ad54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x24ad58: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x24ad58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x24ad5c: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x24ad5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x24ad60: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x24ad60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24ad64: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x24ad64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24ad68: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24ad68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24ad6c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x24ad6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24ad70: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24ad70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24ad74:
    // 0x24ad74: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x24ad74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ad78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24ad78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ad7c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24ad7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ad80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24ad80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ad84: 0xc08c5e8  jal         func_2317A0
    ctx->pc = 0x24AD84u;
    SET_GPR_U32(ctx, 31, 0x24AD8Cu);
    ctx->pc = 0x24AD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AD84u;
    // 0x24ad88: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2317A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2317A0u, 0x24AD84u, 0x24AD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AD8Cu;
label_24ad8c:
    // 0x24ad8c: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x24ad8cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24ad90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24ad90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ad94: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x24ad94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ad98: 0xc092b7a  jal         func_24ADE8
    ctx->pc = 0x24AD98u;
    SET_GPR_U32(ctx, 31, 0x24ADA0u);
    ctx->pc = 0x24AD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AD98u;
    // 0x24ad9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24ADE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24ADE8u, 0x24AD98u, 0x24ADA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ADA0u;
label_24ada0:
    // 0x24ada0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24ada0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ada4: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x24ada4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x24ada8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x24ada8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24adac: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x24adacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24adb0: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x24adb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24adb4: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x24adb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24adb8: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x24adb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x24adbc: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x24adbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24adc0: 0x3e00008  jr          $ra
    ctx->pc = 0x24ADC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ADC0u;
        // 0x24adc4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24ADC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24ADC8u;
    // 0x24adc8: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x24adc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x24adcc: 0x0  nop
    ctx->pc = 0x24adccu;
    // NOP
    // 0x24add0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x24add0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x24add4: 0x0  nop
    ctx->pc = 0x24add4u;
    // NOP
    // 0x24add8: 0x27bd0210  addiu       $sp, $sp, 0x210
    ctx->pc = 0x24add8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x24addc: 0x0  nop
    ctx->pc = 0x24addcu;
    // NOP
    ctx->pc = 0x24ade0u;
}
