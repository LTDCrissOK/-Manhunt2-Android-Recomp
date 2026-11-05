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

// Function: sub_001E8D18
// Address: 0x1e8d18 - 0x1e8ea0
void sub_001E8D18_0x1e8d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8D18_0x1e8d18");
#endif

    switch (ctx->pc) {
        case 0x1e8dc8u: goto label_1e8dc8;
        case 0x1e8e38u: goto label_1e8e38;
        default: break;
    }

    ctx->pc = 0x1e8d18u;

    // 0x1e8d18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e8d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e8d1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e8d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e8d20: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e8d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e8d24: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1e8d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1e8d28: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1e8d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1e8d2c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1e8d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d30: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1e8d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1e8d34: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e8d34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d38: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1e8d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1e8d3c: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x1e8d3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d40: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1e8d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1e8d44: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e8d44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d48: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1e8d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1e8d4c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x1e8d4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d50: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x1e8d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x1e8d54: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1e8d54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d58: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1e8d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1e8d5c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1e8d5cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d60: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x1e8d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x1e8d64: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1e8d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1e8d68: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x1e8d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e8d6c: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x1e8d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e8d70: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1e8d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8d74: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1e8d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8d78: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1e8d78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e8d7c: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x1e8d7cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e8d80: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x1e8d80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e8d84: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1e8d84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e8d88: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1e8d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e8d8c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e8d8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8d90: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1e8d90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e8d94: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1e8d94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e8d98: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1e8d98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e8d9c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1e8d9cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e8da0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e8da0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e8da4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1e8da4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e8da8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e8da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e8dac: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1e8dacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1e8db0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e8db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e8db4: 0x1242002c  beq         $s2, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1E8DB4u;
    {
        const bool branch_taken_0x1e8db4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E8DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8DB4u;
        // 0x1e8db8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8db4) {
            ctx->pc = 0x1E8E68u;
            goto label_1e8e68;
        }
    }
    ctx->pc = 0x1E8DBCu;
    // 0x1e8dbc: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x1e8dbcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e8dc0: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x1e8dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1e8dc4: 0x0  nop
    ctx->pc = 0x1e8dc4u;
    // NOP
label_1e8dc8:
    // 0x1e8dc8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1e8dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e8dcc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1e8dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8dd0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1e8dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8dd4: 0x24c20020  addiu       $v0, $a2, 0x20
    ctx->pc = 0x1e8dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1e8dd8: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x1e8dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e8ddc: 0xc624000c  lwc1        $f4, 0xC($s1)
    ctx->pc = 0x1e8ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e8de0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1e8de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e8de4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1e8de4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1e8de8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1e8de8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1e8dec: 0xe7a4001c  swc1        $f4, 0x1C($sp)
    ctx->pc = 0x1e8decu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1e8df0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1e8df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e8df4: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1e8df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e8df8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e8df8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e8dfc: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1e8dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e8e00: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1e8e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e8e04: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e8e04u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e8e08: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1e8e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e8e0c: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1e8e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e8e10: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1e8e10u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e8e14: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x1e8e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8e18: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e8e18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8e1c: 0x0  nop
    ctx->pc = 0x1e8e1cu;
    // NOP
    // 0x1e8e20: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x1E8E20u;
    {
        const bool branch_taken_0x1e8e20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8e20) {
            ctx->pc = 0x1E8E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8E20u;
            // 0x1e8e24: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8E60u;
            goto label_1e8e60;
        }
    }
    ctx->pc = 0x1E8E28u;
    // 0x1e8e28: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1e8e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8e2c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1e8e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e8e30: 0xc07a3a8  jal         func_1E8EA0
    ctx->pc = 0x1E8E30u;
    SET_GPR_U32(ctx, 31, 0x1E8E38u);
    ctx->pc = 0x1E8E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8E30u;
    // 0x1e8e34: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EA0u, 0x1E8E30u, 0x1E8E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E38u;
label_1e8e38:
    // 0x1e8e38: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E8E38u;
    {
        const bool branch_taken_0x1e8e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E38u;
        // 0x1e8e3c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8e38) {
            ctx->pc = 0x1E8E60u;
            goto label_1e8e60;
        }
    }
    ctx->pc = 0x1E8E40u;
    // 0x1e8e40: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1e8e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e8e44: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1e8e44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8e48: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e8e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e8e4c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e8e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8e50: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1e8e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1e8e54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e8e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e8e58: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1e8e58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1e8e5c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1e8e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1e8e60:
    // 0x1e8e60: 0x165effd9  bne         $s2, $fp, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1E8E60u;
    {
        const bool branch_taken_0x1e8e60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 30));
        ctx->pc = 0x1E8E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E60u;
        // 0x1e8e64: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8e60) {
            ctx->pc = 0x1E8DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8dc8;
        }
    }
    ctx->pc = 0x1E8E68u;
label_1e8e68:
    // 0x1e8e68: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1e8e68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8e6c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1e8e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8e70: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1e8e70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e8e74: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1e8e74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8e78: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1e8e78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e8e7c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1e8e7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e8e80: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1e8e80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e8e84: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1e8e84u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e8e88: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x1e8e88u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e8e8c: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x1e8e8cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e8e90: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1e8e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1e8e94: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E94u;
        // 0x1e8e98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8E9Cu;
    // 0x1e8e9c: 0x0  nop
    ctx->pc = 0x1e8e9cu;
    // NOP
    ctx->pc = 0x1e8ea0u;
}
