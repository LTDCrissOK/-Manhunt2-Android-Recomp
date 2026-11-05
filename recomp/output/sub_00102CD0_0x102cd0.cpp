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

// Function: sub_00102CD0
// Address: 0x102cd0 - 0x102e40
void sub_00102CD0_0x102cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102CD0_0x102cd0");
#endif

    switch (ctx->pc) {
        case 0x102d14u: goto label_102d14;
        case 0x102d88u: goto label_102d88;
        case 0x102d90u: goto label_102d90;
        case 0x102dc0u: goto label_102dc0;
        default: break;
    }

    ctx->pc = 0x102cd0u;

    // 0x102cd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x102cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x102cd4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x102cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x102cd8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x102cd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102cdc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x102cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x102ce0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x102ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x102ce4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x102ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ce8: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x102ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x102cec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x102cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102cf0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x102cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x102cf4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x102cf4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102cf8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x102cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x102cfc: 0xa5800b  movn        $s0, $a1, $a1
    ctx->pc = 0x102cfcu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x102d00: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x102d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x102d04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x102d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102d08: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x102d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x102d0c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x102D0Cu;
    SET_GPR_U32(ctx, 31, 0x102D14u);
    ctx->pc = 0x102D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102D0Cu;
    // 0x102d10: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x102D0Cu, 0x102D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102D14u;
label_102d14:
    // 0x102d14: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x102d14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102d18: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x102d18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x102d1c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x102d1cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102d20: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x102d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x102d24: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x102d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x102d28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x102d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x102d2c: 0x0  nop
    ctx->pc = 0x102d2cu;
    // NOP
    // 0x102d30: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x102d30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x102d34: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x102d34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102d38: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x102d38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x102d3c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x102d3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102d40: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x102d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x102d44: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x102d44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102d48: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x102d48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x102d4c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x102d4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102d50: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x102d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x102d54: 0x92720022  lbu         $s2, 0x22($s3)
    ctx->pc = 0x102d54u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x102d58: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x102D58u;
    {
        const bool branch_taken_0x102d58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x102D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D58u;
        // 0x102d5c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102d58) {
            ctx->pc = 0x102D68u;
            goto label_102d68;
        }
    }
    ctx->pc = 0x102D60u;
    // 0x102d60: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x102D60u;
    {
        const bool branch_taken_0x102d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D60u;
        // 0x102d64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102d60) {
            ctx->pc = 0x102E14u;
            goto label_102e14;
        }
    }
    ctx->pc = 0x102D68u;
label_102d68:
    // 0x102d68: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x102d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x102d6c: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x102d6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x102d70: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x102d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x102d74: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x102d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x102d78: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x102D78u;
    {
        const bool branch_taken_0x102d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D78u;
        // 0x102d7c: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102d78) {
            ctx->pc = 0x102E10u;
            goto label_102e10;
        }
    }
    ctx->pc = 0x102D80u;
    // 0x102d80: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x102d80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x102d84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x102d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_102d88:
    // 0x102d88: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x102D88u;
    SET_GPR_U32(ctx, 31, 0x102D90u);
    ctx->pc = 0x102D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102D88u;
    // 0x102d8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x102D88u, 0x102D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102D90u;
label_102d90:
    // 0x102d90: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x102d90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102d94: 0x5060001b  beql        $v1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x102D94u;
    {
        const bool branch_taken_0x102d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x102d94) {
            ctx->pc = 0x102D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102D94u;
            // 0x102d98: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102E04u;
            goto label_102e04;
        }
    }
    ctx->pc = 0x102D9Cu;
    // 0x102d9c: 0x90620014  lbu         $v0, 0x14($v1)
    ctx->pc = 0x102d9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x102da0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x102da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x102da4: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x102DA4u;
    {
        const bool branch_taken_0x102da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102da4) {
            ctx->pc = 0x102DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102DA4u;
            // 0x102da8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102E04u;
            goto label_102e04;
        }
    }
    ctx->pc = 0x102DACu;
    // 0x102dac: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x102dacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102db0: 0x52150014  beql        $s0, $s5, . + 4 + (0x14 << 2)
    ctx->pc = 0x102DB0u;
    {
        const bool branch_taken_0x102db0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        if (branch_taken_0x102db0) {
            ctx->pc = 0x102DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102DB0u;
            // 0x102db4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102E04u;
            goto label_102e04;
        }
    }
    ctx->pc = 0x102DB8u;
    // 0x102db8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x102DB8u;
    SET_GPR_U32(ctx, 31, 0x102DC0u);
    ctx->pc = 0x102DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102DB8u;
    // 0x102dbc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x102DB8u, 0x102DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102DC0u;
label_102dc0:
    // 0x102dc0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x102dc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102dc4: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x102dc4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102dc8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x102dc8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102dcc: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x102dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x102dd0: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x102dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x102dd4: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x102dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x102dd8: 0xc6c40008  lwc1        $f4, 0x8($s6)
    ctx->pc = 0x102dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x102ddc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x102ddcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x102de0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x102de0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x102de4: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x102de4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x102de8: 0x46000004  c1          0x4
    ctx->pc = 0x102de8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x102dec: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x102decu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x102df0: 0x0  nop
    ctx->pc = 0x102df0u;
    // NOP
    // 0x102df4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x102DF4u;
    {
        const bool branch_taken_0x102df4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x102DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DF4u;
        // 0x102df8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102df4) {
            ctx->pc = 0x102E04u;
            goto label_102e04;
        }
    }
    ctx->pc = 0x102DFCu;
    // 0x102dfc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x102dfcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x102e00: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x102e00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_102e04:
    // 0x102e04: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x102e04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x102e08: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x102E08u;
    {
        const bool branch_taken_0x102e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102e08) {
            ctx->pc = 0x102E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102E08u;
            // 0x102e0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102d88;
        }
    }
    ctx->pc = 0x102E10u;
label_102e10:
    // 0x102e10: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x102e10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_102e14:
    // 0x102e14: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x102e14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102e18: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x102e18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x102e1c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x102e1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102e20: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x102e20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x102e24: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x102e24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x102e28: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x102e28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x102e2c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x102e2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x102e30: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x102e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x102e34: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x102e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x102e38: 0x3e00008  jr          $ra
    ctx->pc = 0x102E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E38u;
        // 0x102e3c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102E40u;
}
