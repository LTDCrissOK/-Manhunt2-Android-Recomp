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

// Function: sub_0036ACD0
// Address: 0x36acd0 - 0x36add0
void sub_0036ACD0_0x36acd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036ACD0_0x36acd0");
#endif

    switch (ctx->pc) {
        case 0x36adb8u: goto label_36adb8;
        default: break;
    }

    ctx->pc = 0x36acd0u;

    // 0x36acd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36acd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36acd4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x36acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x36acd8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x36acd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x36acdc: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x36acdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36ace0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x36ace0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x36ace4: 0x2450ca60  addiu       $s0, $v0, -0x35A0
    ctx->pc = 0x36ace4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953568));
    // 0x36ace8: 0xc483000c  lwc1        $f3, 0xC($a0)
    ctx->pc = 0x36ace8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36acec: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x36acecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36acf0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x36acf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36acf4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x36acf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36acf8: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x36acf8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BCA78u));
    // 0x36acfc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x36acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BCA84u));
    // 0x36ad00: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x36ad00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x36ad04: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x36ad04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36ad08: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x36ad08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36ad0c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x36ad0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x36ad10: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x36AD10u;
    {
        const bool branch_taken_0x36ad10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AD10u;
        // 0x36ad14: 0xe7a3001c  swc1        $f3, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ad10) {
            ctx->pc = 0x36AD40u;
            goto label_36ad40;
        }
    }
    ctx->pc = 0x36AD18u;
    // 0x36ad18: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x36ad18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36ad1c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x36ad1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36ad20: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x36ad20u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x36ad24: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x36ad24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x36ad28: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x36ad28u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x36ad2c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x36ad2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36ad30: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x36ad30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36ad34: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x36ad34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36ad38: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x36ad38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36ad3c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x36ad3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_36ad40:
    // 0x36ad40: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x36ad40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x36ad44: 0x24427d90  addiu       $v0, $v0, 0x7D90
    ctx->pc = 0x36ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32144));
    // 0x36ad48: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x36ad48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36ad4c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x36ad4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(FAST_READ128(0x5A7D90u));
    // 0x36ad50: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36ad50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36ad54: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x36ad54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36ad58: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x36ad58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ad5c: 0x3c04aaaa  lui         $a0, 0xAAAA
    ctx->pc = 0x36ad5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43690 << 16));
    // 0x36ad60: 0x3484aaab  ori         $a0, $a0, 0xAAAB
    ctx->pc = 0x36ad60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
    // 0x36ad64: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x36ad64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x36ad68: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x36ad68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ad6c: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x36ad6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x36ad70: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x36ad70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ad74: 0xe4cc000c  swc1        $f12, 0xC($a2)
    ctx->pc = 0x36ad74u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x36ad78: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x36ad78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x36ad7c: 0xe4cd0010  swc1        $f13, 0x10($a2)
    ctx->pc = 0x36ad7cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x36ad80: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x36ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ad84: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x36ad84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x36ad88: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x36ad88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x36ad8c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x36ad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x36ad90: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x36ad90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x36ad94: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x36ad94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x36ad98: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x36ad98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x36ad9c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x36ad9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x36ada0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x36ada0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x36ada4: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x36ada4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x36ada8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36ADA8u;
    {
        const bool branch_taken_0x36ada8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36ADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ADA8u;
        // 0x36adac: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ada8) {
            ctx->pc = 0x36ADC0u;
            goto label_36adc0;
        }
    }
    ctx->pc = 0x36ADB0u;
    // 0x36adb0: 0xc0daa80  jal         func_36AA00
    ctx->pc = 0x36ADB0u;
    SET_GPR_U32(ctx, 31, 0x36ADB8u);
    ctx->pc = 0x36ADB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ADB0u;
    // 0x36adb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AA00u, 0x36ADB0u, 0x36ADB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ADB8u;
label_36adb8:
    // 0x36adb8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x36adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x36adbc: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x36adbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_36adc0:
    // 0x36adc0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x36adc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36adc4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x36adc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36adc8: 0x3e00008  jr          $ra
    ctx->pc = 0x36ADC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ADC8u;
        // 0x36adcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36ADC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36ADD0u;
}
