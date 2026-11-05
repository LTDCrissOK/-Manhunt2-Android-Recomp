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

// Function: sub_0019DAE0
// Address: 0x19dae0 - 0x19dc18
void sub_0019DAE0_0x19dae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019DAE0_0x19dae0");
#endif

    switch (ctx->pc) {
        case 0x19db10u: goto label_19db10;
        case 0x19db28u: goto label_19db28;
        case 0x19db40u: goto label_19db40;
        case 0x19dba0u: goto label_19dba0;
        default: break;
    }

    ctx->pc = 0x19dae0u;

    // 0x19dae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19dae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19dae4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x19dae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x19dae8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x19dae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x19daec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19daecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19daf0: 0xc60100bc  lwc1        $f1, 0xBC($s0)
    ctx->pc = 0x19daf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19daf4: 0xc60000ac  lwc1        $f0, 0xAC($s0)
    ctx->pc = 0x19daf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19daf8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19daf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dafc: 0x0  nop
    ctx->pc = 0x19dafcu;
    // NOP
    // 0x19db00: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x19DB00u;
    {
        const bool branch_taken_0x19db00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DB00u;
        // 0x19db04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19db00) {
            ctx->pc = 0x19DBF4u;
            goto label_19dbf4;
        }
    }
    ctx->pc = 0x19DB08u;
    // 0x19db08: 0xc061a26  jal         func_186898
    ctx->pc = 0x19DB08u;
    SET_GPR_U32(ctx, 31, 0x19DB10u);
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x19DB08u, 0x19DB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DB10u;
label_19db10:
    // 0x19db10: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x19db10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x19db14: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x19db14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x19db18: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19DB18u;
    {
        const bool branch_taken_0x19db18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19db18) {
            ctx->pc = 0x19DB38u;
            goto label_19db38;
        }
    }
    ctx->pc = 0x19DB20u;
    // 0x19db20: 0xc061a26  jal         func_186898
    ctx->pc = 0x19DB20u;
    SET_GPR_U32(ctx, 31, 0x19DB28u);
    ctx->pc = 0x19DB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DB20u;
    // 0x19db24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x19DB20u, 0x19DB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DB28u;
label_19db28:
    // 0x19db28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19db28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19db2c: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x19db2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x19db30: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x19DB30u;
    {
        const bool branch_taken_0x19db30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DB30u;
        // 0x19db34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19db30) {
            ctx->pc = 0x19DBF4u;
            goto label_19dbf4;
        }
    }
    ctx->pc = 0x19DB38u;
label_19db38:
    // 0x19db38: 0xc061a12  jal         func_186848
    ctx->pc = 0x19DB38u;
    SET_GPR_U32(ctx, 31, 0x19DB40u);
    ctx->pc = 0x19DB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DB38u;
    // 0x19db3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19DB38u, 0x19DB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DB40u;
label_19db40:
    // 0x19db40: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x19db40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x19db44: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x19db44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x19db48: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x19db48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19db4c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x19db4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19db50: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x19db50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19db54: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x19db54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19db58: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x19db58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19db5c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x19db5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19db60: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x19db60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19db64: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x19db64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19db68: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19db68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19db6c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19db6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19db70: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x19db70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19db74: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x19db74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19db78: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x19db78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19db7c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x19db7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19db80: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x19db80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19db84: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x19db84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19db88: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x19db88u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x19db8c: 0x4a0003bf  vwaitq
    ctx->pc = 0x19db8cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19db90: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x19db90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19db94: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x19db94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19db98: 0xc061a12  jal         func_186848
    ctx->pc = 0x19DB98u;
    SET_GPR_U32(ctx, 31, 0x19DBA0u);
    ctx->pc = 0x19DB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DB98u;
    // 0x19db9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19DB98u, 0x19DBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DBA0u;
label_19dba0:
    // 0x19dba0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19dba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19dba4: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x19dba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dba8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19dba8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dbac: 0x0  nop
    ctx->pc = 0x19dbacu;
    // NOP
    // 0x19dbb0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19DBB0u;
    {
        const bool branch_taken_0x19dbb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBB0u;
        // 0x19dbb4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dbb0) {
            ctx->pc = 0x19DBBCu;
            goto label_19dbbc;
        }
    }
    ctx->pc = 0x19DBB8u;
    // 0x19dbb8: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x19dbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_19dbbc:
    // 0x19dbbc: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x19dbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19dbc0: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x19dbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19dbc4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x19dbc4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x19dbc8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x19dbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19dbcc: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x19dbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19dbd0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x19dbd0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x19dbd4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x19dbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19dbd8: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x19dbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19dbdc: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x19dbdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x19dbe0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19dbe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dbe4: 0x0  nop
    ctx->pc = 0x19dbe4u;
    // NOP
    // 0x19dbe8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x19DBE8u;
    {
        const bool branch_taken_0x19dbe8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBE8u;
        // 0x19dbec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dbe8) {
            ctx->pc = 0x19DBF4u;
            goto label_19dbf4;
        }
    }
    ctx->pc = 0x19DBF0u;
    // 0x19dbf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19dbf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19dbf4:
    // 0x19dbf4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x19dbf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19dbf8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x19dbf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19dbfc: 0x3e00008  jr          $ra
    ctx->pc = 0x19DBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBFCu;
        // 0x19dc00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DBFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DC04u;
    // 0x19dc04: 0x0  nop
    ctx->pc = 0x19dc04u;
    // NOP
    // 0x19dc08: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x19dc08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc0c: 0x0  nop
    ctx->pc = 0x19dc0cu;
    // NOP
    // 0x19dc10: 0x0  nop
    ctx->pc = 0x19dc10u;
    // NOP
    // 0x19dc14: 0x0  nop
    ctx->pc = 0x19dc14u;
    // NOP
    ctx->pc = 0x19dc18u;
}
