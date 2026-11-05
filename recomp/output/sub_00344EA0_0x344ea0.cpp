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

// Function: sub_00344EA0
// Address: 0x344ea0 - 0x344f80
void sub_00344EA0_0x344ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344EA0_0x344ea0");
#endif

    switch (ctx->pc) {
        case 0x344ec8u: goto label_344ec8;
        case 0x344ed0u: goto label_344ed0;
        case 0x344f3cu: goto label_344f3c;
        case 0x344f58u: goto label_344f58;
        default: break;
    }

    ctx->pc = 0x344ea0u;

    // 0x344ea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x344ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x344ea4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x344ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x344ea8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x344ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x344eac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344eb0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x344eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x344eb4: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x344eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x344eb8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x344EB8u;
    {
        const bool branch_taken_0x344eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x344EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344EB8u;
        // 0x344ebc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344eb8) {
            ctx->pc = 0x344F44u;
            goto label_344f44;
        }
    }
    ctx->pc = 0x344EC0u;
    // 0x344ec0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x344EC0u;
    SET_GPR_U32(ctx, 31, 0x344EC8u);
    ctx->pc = 0x344EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344EC0u;
    // 0x344ec4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x344EC0u, 0x344EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344EC8u;
label_344ec8:
    // 0x344ec8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x344EC8u;
    SET_GPR_U32(ctx, 31, 0x344ED0u);
    ctx->pc = 0x344ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344EC8u;
    // 0x344ecc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x344EC8u, 0x344ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344ED0u;
label_344ed0:
    // 0x344ed0: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x344ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x344ed4: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x344ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x344ed8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x344ed8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x344edc: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x344edcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x344ee0: 0xd8830010  lqc2        $vf3, 0x10($a0)
    ctx->pc = 0x344ee0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x344ee4: 0xd8840020  lqc2        $vf4, 0x20($a0)
    ctx->pc = 0x344ee4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x344ee8: 0xd8850030  lqc2        $vf5, 0x30($a0)
    ctx->pc = 0x344ee8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x344eec: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x344eecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x344ef0: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x344ef0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x344ef4: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x344ef4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x344ef8: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x344ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x344efc: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x344efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x344f00: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x344f00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x344f04: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x344f04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x344f08: 0xd8830010  lqc2        $vf3, 0x10($a0)
    ctx->pc = 0x344f08u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x344f0c: 0xd8840020  lqc2        $vf4, 0x20($a0)
    ctx->pc = 0x344f0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x344f10: 0xd8850030  lqc2        $vf5, 0x30($a0)
    ctx->pc = 0x344f10u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x344f14: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x344f14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x344f18: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x344f18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x344f1c: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x344f1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x344f20: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x344f20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x344f24: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x344f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x344f28: 0xc60d0080  lwc1        $f13, 0x80($s0)
    ctx->pc = 0x344f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x344f2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x344f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344f30: 0xc60c0038  lwc1        $f12, 0x38($s0)
    ctx->pc = 0x344f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x344f34: 0xc0d16f6  jal         func_345BD8
    ctx->pc = 0x344F34u;
    SET_GPR_U32(ctx, 31, 0x344F3Cu);
    ctx->pc = 0x344F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344F34u;
    // 0x344f38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345BD8u, 0x344F34u, 0x344F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344F3Cu;
label_344f3c:
    // 0x344f3c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x344F3Cu;
    {
        const bool branch_taken_0x344f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344F3Cu;
        // 0x344f40: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344f3c) {
            ctx->pc = 0x344F5Cu;
            goto label_344f5c;
        }
    }
    ctx->pc = 0x344F44u;
label_344f44:
    // 0x344f44: 0xc60c0038  lwc1        $f12, 0x38($s0)
    ctx->pc = 0x344f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x344f48: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x344f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x344f4c: 0xc60d0080  lwc1        $f13, 0x80($s0)
    ctx->pc = 0x344f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x344f50: 0xc0d16f6  jal         func_345BD8
    ctx->pc = 0x344F50u;
    SET_GPR_U32(ctx, 31, 0x344F58u);
    ctx->pc = 0x344F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344F50u;
    // 0x344f54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345BD8u, 0x344F50u, 0x344F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344F58u;
label_344f58:
    // 0x344f58: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x344f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_344f5c:
    // 0x344f5c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x344f5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x344f60: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x344f60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x344f64: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x344f64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x344f68: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x344f68u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x344f6c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x344f6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x344f70: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x344f70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344f74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x344f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x344f78: 0x3e00008  jr          $ra
    ctx->pc = 0x344F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344F78u;
        // 0x344f7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344F80u;
}
