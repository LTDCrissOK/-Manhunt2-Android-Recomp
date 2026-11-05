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

// Function: sub_0036ABC0
// Address: 0x36abc0 - 0x36acd0
void sub_0036ABC0_0x36abc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036ABC0_0x36abc0");
#endif

    switch (ctx->pc) {
        case 0x36acb4u: goto label_36acb4;
        default: break;
    }

    ctx->pc = 0x36abc0u;

    // 0x36abc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36abc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36abc4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x36abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x36abc8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x36abc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x36abcc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x36abccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36abd0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x36abd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x36abd4: 0x2450ca60  addiu       $s0, $v0, -0x35A0
    ctx->pc = 0x36abd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953568));
    // 0x36abd8: 0x8e080018  lw          $t0, 0x18($s0)
    ctx->pc = 0x36abd8u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x6BCA78u));
    // 0x36abdc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x36abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BCA84u));
    // 0x36abe0: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x36abe0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36abe4: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x36abe4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36abe8: 0xe7ae0008  swc1        $f14, 0x8($sp)
    ctx->pc = 0x36abe8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36abec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x36ABECu;
    {
        const bool branch_taken_0x36abec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ABECu;
        // 0x36abf0: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36abec) {
            ctx->pc = 0x36AC1Cu;
            goto label_36ac1c;
        }
    }
    ctx->pc = 0x36ABF4u;
    // 0x36abf4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36abf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36abf8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x36abf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36abfc: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x36abfcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x36ac00: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x36ac00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x36ac04: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x36ac04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x36ac08: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x36ac08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36ac0c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x36ac0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36ac10: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x36ac10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36ac14: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x36ac14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36ac18: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36ac18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_36ac1c:
    // 0x36ac1c: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x36ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x36ac20: 0x24427d90  addiu       $v0, $v0, 0x7D90
    ctx->pc = 0x36ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32144));
    // 0x36ac24: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36ac24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ac28: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x36ac28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(FAST_READ128(0x5A7D90u));
    // 0x36ac2c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36ac2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36ac30: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36ac30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36ac34: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x36ac34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ac38: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x36ac38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x36ac3c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x36ac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x36ac40: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x36ac40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x36ac44: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x36ac44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x36ac48: 0x71e00  sll         $v1, $a3, 24
    ctx->pc = 0x36ac48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x36ac4c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x36ac4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x36ac50: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x36ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x36ac54: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x36ac54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ac58: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x36ac58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x36ac5c: 0x312400ff  andi        $a0, $t1, 0xFF
    ctx->pc = 0x36ac5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x36ac60: 0x3c05aaaa  lui         $a1, 0xAAAA
    ctx->pc = 0x36ac60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43690 << 16));
    // 0x36ac64: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x36ac64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x36ac68: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x36ac68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x36ac6c: 0x34a5aaab  ori         $a1, $a1, 0xAAAB
    ctx->pc = 0x36ac6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43691);
    // 0x36ac70: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x36ac70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ac74: 0xad030014  sw          $v1, 0x14($t0)
    ctx->pc = 0x36ac74u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 3));
    // 0x36ac78: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x36ac78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x36ac7c: 0xe50f000c  swc1        $f15, 0xC($t0)
    ctx->pc = 0x36ac7cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x36ac80: 0xe5100010  swc1        $f16, 0x10($t0)
    ctx->pc = 0x36ac80u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x36ac84: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x36ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x36ac88: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x36ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x36ac8c: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x36ac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x36ac90: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x36ac90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x36ac94: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x36ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x36ac98: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x36ac98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x36ac9c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x36ac9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x36aca0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x36aca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36aca4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36ACA4u;
    {
        const bool branch_taken_0x36aca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ACA4u;
        // 0x36aca8: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36aca4) {
            ctx->pc = 0x36ACBCu;
            goto label_36acbc;
        }
    }
    ctx->pc = 0x36ACACu;
    // 0x36acac: 0xc0daa80  jal         func_36AA00
    ctx->pc = 0x36ACACu;
    SET_GPR_U32(ctx, 31, 0x36ACB4u);
    ctx->pc = 0x36ACB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ACACu;
    // 0x36acb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AA00u, 0x36ACACu, 0x36ACB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ACB4u;
label_36acb4:
    // 0x36acb4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x36acb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x36acb8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x36acb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_36acbc:
    // 0x36acbc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x36acbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36acc0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x36acc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36acc4: 0x3e00008  jr          $ra
    ctx->pc = 0x36ACC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ACC4u;
        // 0x36acc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36ACC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36ACCCu;
    // 0x36accc: 0x0  nop
    ctx->pc = 0x36acccu;
    // NOP
    ctx->pc = 0x36acd0u;
}
