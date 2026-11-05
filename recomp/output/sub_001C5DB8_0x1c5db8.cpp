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

// Function: sub_001C5DB8
// Address: 0x1c5db8 - 0x1c5f98
void sub_001C5DB8_0x1c5db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5DB8_0x1c5db8");
#endif

    switch (ctx->pc) {
        case 0x1c5e2cu: goto label_1c5e2c;
        case 0x1c5e44u: goto label_1c5e44;
        case 0x1c5e50u: goto label_1c5e50;
        case 0x1c5e78u: goto label_1c5e78;
        case 0x1c5e88u: goto label_1c5e88;
        case 0x1c5e90u: goto label_1c5e90;
        case 0x1c5ea8u: goto label_1c5ea8;
        case 0x1c5eb4u: goto label_1c5eb4;
        case 0x1c5ec8u: goto label_1c5ec8;
        case 0x1c5f14u: goto label_1c5f14;
        default: break;
    }

    ctx->pc = 0x1c5db8u;

    // 0x1c5db8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c5db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c5dbc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1c5dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1c5dc0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1c5dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1c5dc4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c5dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5dc8: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1c5dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1c5dcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c5dccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5dd0: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1c5dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1c5dd4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1c5dd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5dd8: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1c5dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x1c5ddc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1c5ddcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5de0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1c5de0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1c5de4: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1c5de4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5de8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1c5de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1c5dec: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1c5decu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1c5df0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1c5df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1c5df4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1c5df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1c5df8: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1c5df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1c5dfc: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1c5dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1c5e00: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1c5e00u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1c5e04: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x1c5e04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1c5e08: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1c5e08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c5e0c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1c5e0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c5e10: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1c5e10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c5e14: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c5e14u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c5e18: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c5e18u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c5e1c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1c5e1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5e20: 0xfac10000  sqc2        $vf1, 0x0($s6)
    ctx->pc = 0x1c5e20u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c5e24: 0xc07173a  jal         func_1C5CE8
    ctx->pc = 0x1C5E24u;
    SET_GPR_U32(ctx, 31, 0x1C5E2Cu);
    ctx->pc = 0x1C5E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E24u;
    // 0x1c5e28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5CE8u, 0x1C5E24u, 0x1C5E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E2Cu;
label_1c5e2c:
    // 0x1c5e2c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5E2Cu;
    {
        const bool branch_taken_0x1c5e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E2Cu;
        // 0x1c5e30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e2c) {
            ctx->pc = 0x1C5E48u;
            goto label_1c5e48;
        }
    }
    ctx->pc = 0x1C5E34u;
    // 0x1c5e34: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5E34u;
    {
        const bool branch_taken_0x1c5e34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E34u;
        // 0x1c5e38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e34) {
            ctx->pc = 0x1C5E48u;
            goto label_1c5e48;
        }
    }
    ctx->pc = 0x1C5E3Cu;
    // 0x1c5e3c: 0xc0715aa  jal         func_1C56A8
    ctx->pc = 0x1C5E3Cu;
    SET_GPR_U32(ctx, 31, 0x1C5E44u);
    ctx->pc = 0x1C5E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E3Cu;
    // 0x1c5e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C56A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C56A8u, 0x1C5E3Cu, 0x1C5E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E44u;
label_1c5e44:
    // 0x1c5e44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c5e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c5e48:
    // 0x1c5e48: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C5E48u;
    SET_GPR_U32(ctx, 31, 0x1C5E50u);
    ctx->pc = 0x1C5E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E48u;
    // 0x1c5e4c: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C5E48u, 0x1C5E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E50u;
label_1c5e50:
    // 0x1c5e50: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c5e50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5e54: 0x8e230318  lw          $v1, 0x318($s1)
    ctx->pc = 0x1c5e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
    // 0x1c5e58: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1c5e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1c5e5c: 0x8c770fe8  lw          $s7, 0xFE8($v1)
    ctx->pc = 0x1c5e5cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
    // 0x1c5e60: 0x8ee200c8  lw          $v0, 0xC8($s7)
    ctx->pc = 0x1c5e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 200)));
    // 0x1c5e64: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1C5E64u;
    {
        const bool branch_taken_0x1c5e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E64u;
        // 0x1c5e68: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e64) {
            ctx->pc = 0x1C5F58u;
            goto label_1c5f58;
        }
    }
    ctx->pc = 0x1C5E6Cu;
    // 0x1c5e6c: 0x26330070  addiu       $s3, $s1, 0x70
    ctx->pc = 0x1c5e6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x1c5e70: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1c5e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1c5e74: 0x0  nop
    ctx->pc = 0x1c5e74u;
    // NOP
label_1c5e78:
    // 0x1c5e78: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x1c5e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1c5e7c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1C5E7Cu;
    {
        const bool branch_taken_0x1c5e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E7Cu;
        // 0x1c5e80: 0x8fb00010  lw          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e7c) {
            ctx->pc = 0x1C5F28u;
            goto label_1c5f28;
        }
    }
    ctx->pc = 0x1C5E84u;
    // 0x1c5e84: 0x0  nop
    ctx->pc = 0x1c5e84u;
    // NOP
label_1c5e88:
    // 0x1c5e88: 0xc071746  jal         func_1C5D18
    ctx->pc = 0x1C5E88u;
    SET_GPR_U32(ctx, 31, 0x1C5E90u);
    ctx->pc = 0x1C5E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E88u;
    // 0x1c5e8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D18u, 0x1C5E88u, 0x1C5E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E90u;
label_1c5e90:
    // 0x1c5e90: 0x5452002a  bnel        $v0, $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x1C5E90u;
    {
        const bool branch_taken_0x1c5e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1c5e90) {
            ctx->pc = 0x1C5E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5E90u;
            // 0x1c5e94: 0xafb00010  sw          $s0, 0x10($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5F3Cu;
            goto label_1c5f3c;
        }
    }
    ctx->pc = 0x1C5E98u;
    // 0x1c5e98: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C5E98u;
    {
        const bool branch_taken_0x1c5e98 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E98u;
        // 0x1c5e9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e98) {
            ctx->pc = 0x1C5EBCu;
            goto label_1c5ebc;
        }
    }
    ctx->pc = 0x1C5EA0u;
    // 0x1c5ea0: 0xc071750  jal         func_1C5D40
    ctx->pc = 0x1C5EA0u;
    SET_GPR_U32(ctx, 31, 0x1C5EA8u);
    ctx->pc = 0x1C5EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5EA0u;
    // 0x1c5ea4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D40u, 0x1C5EA0u, 0x1C5EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5EA8u;
label_1c5ea8:
    // 0x1c5ea8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c5ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5eac: 0xc0f62ca  jal         func_3D8B28
    ctx->pc = 0x1C5EACu;
    SET_GPR_U32(ctx, 31, 0x1C5EB4u);
    ctx->pc = 0x1C5EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5EACu;
    // 0x1c5eb0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8B28u, 0x1C5EACu, 0x1C5EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5EB4u;
label_1c5eb4:
    // 0x1c5eb4: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C5EB4u;
    {
        const bool branch_taken_0x1c5eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5eb4) {
            ctx->pc = 0x1C5EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5EB4u;
            // 0x1c5eb8: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5F20u;
            goto label_1c5f20;
        }
    }
    ctx->pc = 0x1C5EBCu;
label_1c5ebc:
    // 0x1c5ebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c5ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ec0: 0xc071750  jal         func_1C5D40
    ctx->pc = 0x1C5EC0u;
    SET_GPR_U32(ctx, 31, 0x1C5EC8u);
    ctx->pc = 0x1C5EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5EC0u;
    // 0x1c5ec4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D40u, 0x1C5EC0u, 0x1C5EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5EC8u;
label_1c5ec8:
    // 0x1c5ec8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c5ec8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c5ecc: 0xdbc20000  lqc2        $vf2, 0x0($fp)
    ctx->pc = 0x1c5eccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1c5ed0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c5ed0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5ed4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c5ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c5ed8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1c5ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c5edc: 0xc6c30000  lwc1        $f3, 0x0($s6)
    ctx->pc = 0x1c5edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c5ee0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1c5ee0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c5ee4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1c5ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c5ee8: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x1c5ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c5eec: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1c5eecu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1c5ef0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1c5ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c5ef4: 0xc6c30008  lwc1        $f3, 0x8($s6)
    ctx->pc = 0x1c5ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c5ef8: 0x4603151c  madd.s      $f20, $f2, $f3
    ctx->pc = 0x1c5ef8u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c5efc: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x1c5efcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5f00: 0x0  nop
    ctx->pc = 0x1c5f00u;
    // NOP
    // 0x1c5f04: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5F04u;
    {
        const bool branch_taken_0x1c5f04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F04u;
        // 0x1c5f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f04) {
            ctx->pc = 0x1C5F1Cu;
            goto label_1c5f1c;
        }
    }
    ctx->pc = 0x1C5F0Cu;
    // 0x1c5f0c: 0xc071750  jal         func_1C5D40
    ctx->pc = 0x1C5F0Cu;
    SET_GPR_U32(ctx, 31, 0x1C5F14u);
    ctx->pc = 0x1C5F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5F0Cu;
    // 0x1c5f10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D40u, 0x1C5F0Cu, 0x1C5F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5F14u;
label_1c5f14:
    // 0x1c5f14: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x1c5f14u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x1c5f18: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c5f18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c5f1c:
    // 0x1c5f1c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1c5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1c5f20:
    // 0x1c5f20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c5f20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c5f24: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x1c5f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_1c5f28:
    // 0x1c5f28: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c5f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c5f2c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1c5f2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1c5f30: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1c5f30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c5f34: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1C5F34u;
    {
        const bool branch_taken_0x1c5f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F34u;
        // 0x1c5f38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f34) {
            ctx->pc = 0x1C5E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5e88;
        }
    }
    ctx->pc = 0x1C5F3Cu;
label_1c5f3c:
    // 0x1c5f3c: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5F3Cu;
    {
        const bool branch_taken_0x1c5f3c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F3Cu;
        // 0x1c5f40: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f3c) {
            ctx->pc = 0x1C5F5Cu;
            goto label_1c5f5c;
        }
    }
    ctx->pc = 0x1C5F44u;
    // 0x1c5f44: 0x8ee200c8  lw          $v0, 0xC8($s7)
    ctx->pc = 0x1c5f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 200)));
    // 0x1c5f48: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c5f48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c5f4c: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x1c5f4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1c5f50: 0x5040ffc9  beql        $v0, $zero, . + 4 + (-0x37 << 2)
    ctx->pc = 0x1C5F50u;
    {
        const bool branch_taken_0x1c5f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5f50) {
            ctx->pc = 0x1C5F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5F50u;
            // 0x1c5f54: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5e78;
        }
    }
    ctx->pc = 0x1C5F58u;
label_1c5f58:
    // 0x1c5f58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c5f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5f5c:
    // 0x1c5f5c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1c5f5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5f60: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1c5f60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5f64: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1c5f64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c5f68: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1c5f68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5f6c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1c5f6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c5f70: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1c5f70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c5f74: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1c5f74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c5f78: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1c5f78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c5f7c: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1c5f7cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c5f80: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1c5f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c5f84: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1c5f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c5f88: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1c5f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c5f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F8Cu;
        // 0x1c5f90: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5F94u;
    // 0x1c5f94: 0x0  nop
    ctx->pc = 0x1c5f94u;
    // NOP
    ctx->pc = 0x1c5f98u;
}
