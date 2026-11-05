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

// Function: sub_00258E90
// Address: 0x258e90 - 0x258f90
void sub_00258E90_0x258e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258E90_0x258e90");
#endif

    switch (ctx->pc) {
        case 0x258eb0u: goto label_258eb0;
        default: break;
    }

    ctx->pc = 0x258e90u;

    // 0x258e90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x258e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x258e94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x258e94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e98: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x258e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x258e9c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x258e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x258ea0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x258ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258ea4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x258ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x258ea8: 0xc084904  jal         func_212410
    ctx->pc = 0x258EA8u;
    SET_GPR_U32(ctx, 31, 0x258EB0u);
    ctx->pc = 0x258EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258EA8u;
    // 0x258eac: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212410u, 0x258EA8u, 0x258EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258EB0u;
label_258eb0:
    // 0x258eb0: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x258EB0u;
    {
        const bool branch_taken_0x258eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258EB0u;
        // 0x258eb4: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258eb0) {
            ctx->pc = 0x258F74u;
            goto label_258f74;
        }
    }
    ctx->pc = 0x258EB8u;
    // 0x258eb8: 0x8c43ebc8  lw          $v1, -0x1438($v0)
    ctx->pc = 0x258eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962120)));
    // 0x258ebc: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x258EBCu;
    {
        const bool branch_taken_0x258ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x258EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258EBCu;
        // 0x258ec0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ebc) {
            ctx->pc = 0x258F78u;
            goto label_258f78;
        }
    }
    ctx->pc = 0x258EC4u;
    // 0x258ec4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x258ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x258ec8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x258ec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x258ecc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x258eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258ed0: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x258ED0u;
    {
        const bool branch_taken_0x258ed0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x258ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258ED0u;
        // 0x258ed4: 0xe60010e4  swc1        $f0, 0x10E4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4324), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ed0) {
            ctx->pc = 0x258F78u;
            goto label_258f78;
        }
    }
    ctx->pc = 0x258ED8u;
    // 0x258ed8: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x258ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x258edc: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x258edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x258ee0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x258ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x258ee4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x258ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x258ee8: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x258ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x258eec: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x258eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x258ef0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x258ef0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x258ef4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x258ef4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x258ef8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x258ef8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x258efc: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x258efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x258f00: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x258f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x258f04: 0x260310f0  addiu       $v1, $s0, 0x10F0
    ctx->pc = 0x258f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4336));
    // 0x258f08: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x258f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258f0c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x258f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258f10: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x258f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x258f14: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x258f14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x258f18: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x258f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x258f1c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x258f1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x258f20: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x258f20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x258f24: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x258f24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258f28: 0xfa0110f0  sqc2        $vf1, 0x10F0($s0)
    ctx->pc = 0x258f28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x258f2c: 0xae0010f4  sw          $zero, 0x10F4($s0)
    ctx->pc = 0x258f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4340), GPR_U32(ctx, 0));
    // 0x258f30: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x258f30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x258f34: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x258f34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x258f38: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x258f38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x258f3c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x258f3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x258f40: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x258f40u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x258f44: 0x4a0003bf  vwaitq
    ctx->pc = 0x258f44u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x258f48: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x258f48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x258f4c: 0xfa0110f0  sqc2        $vf1, 0x10F0($s0)
    ctx->pc = 0x258f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x258f50: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x258f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x258f54: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x258f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x258f58: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x258F58u;
    {
        const bool branch_taken_0x258f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F58u;
        // 0x258f5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f58) {
            ctx->pc = 0x258F78u;
            goto label_258f78;
        }
    }
    ctx->pc = 0x258F60u;
    // 0x258f60: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x258f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x258f64: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x258f64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x258f68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x258f68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258f6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x258F6Cu;
    {
        const bool branch_taken_0x258f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F6Cu;
        // 0x258f70: 0xe60010e4  swc1        $f0, 0x10E4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4324), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f6c) {
            ctx->pc = 0x258F78u;
            goto label_258f78;
        }
    }
    ctx->pc = 0x258F74u;
label_258f74:
    // 0x258f74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x258f74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_258f78:
    // 0x258f78: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x258f78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258f7c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x258f7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x258f80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x258f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258f84: 0x3e00008  jr          $ra
    ctx->pc = 0x258F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F84u;
        // 0x258f88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258F8Cu;
    // 0x258f8c: 0x0  nop
    ctx->pc = 0x258f8cu;
    // NOP
    ctx->pc = 0x258f90u;
}
