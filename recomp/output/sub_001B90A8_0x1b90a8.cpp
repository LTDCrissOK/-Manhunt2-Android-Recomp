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

// Function: sub_001B90A8
// Address: 0x1b90a8 - 0x1b9350
void sub_001B90A8_0x1b90a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B90A8_0x1b90a8");
#endif

    switch (ctx->pc) {
        case 0x1b9110u: goto label_1b9110;
        case 0x1b9128u: goto label_1b9128;
        case 0x1b9168u: goto label_1b9168;
        case 0x1b9290u: goto label_1b9290;
        case 0x1b92e8u: goto label_1b92e8;
        default: break;
    }

    ctx->pc = 0x1b90a8u;

    // 0x1b90a8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b90a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1b90ac: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1b90acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1b90b0: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1b90b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1b90b4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1b90b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b90b8: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1b90b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x1b90bc: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1b90bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b90c0: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b90c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b90c4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1b90c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b90c8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1b90c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1b90cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b90ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b90d0: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1b90d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1b90d4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1b90d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b90d8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1b90d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1b90dc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1b90dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b90e0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1b90e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1b90e4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b90e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b90e8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1b90e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1b90ec: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1b90ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1b90f0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1b90f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1b90f4: 0xe7b70088  swc1        $f23, 0x88($sp)
    ctx->pc = 0x1b90f4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1b90f8: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x1b90f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1b90fc: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1b90fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1b9100: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x1b9100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x1b9104: 0xafaa0018  sw          $t2, 0x18($sp)
    ctx->pc = 0x1b9104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 10));
    // 0x1b9108: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B9108u;
    SET_GPR_U32(ctx, 31, 0x1B9110u);
    ctx->pc = 0x1B910Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9108u;
    // 0x1b910c: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B9108u, 0x1B9110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9110u;
label_1b9110:
    // 0x1b9110: 0x3c014434  lui         $at, 0x4434
    ctx->pc = 0x1b9110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17460 << 16));
    // 0x1b9114: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b9114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b9118: 0x12e0007c  beqz        $s7, . + 4 + (0x7C << 2)
    ctx->pc = 0x1B9118u;
    {
        const bool branch_taken_0x1b9118 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9118u;
        // 0x1b911c: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9118) {
            ctx->pc = 0x1B930Cu;
            goto label_1b930c;
        }
    }
    ctx->pc = 0x1B9120u;
    // 0x1b9120: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x1b9120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9124: 0x0  nop
    ctx->pc = 0x1b9124u;
    // NOP
label_1b9128:
    // 0x1b9128: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b9128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b912c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x1b912cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1b9130: 0x54600072  bnel        $v1, $zero, . + 4 + (0x72 << 2)
    ctx->pc = 0x1B9130u;
    {
        const bool branch_taken_0x1b9130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9130) {
            ctx->pc = 0x1B9134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9130u;
            // 0x1b9134: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B92FCu;
            goto label_1b92fc;
        }
    }
    ctx->pc = 0x1B9138u;
    // 0x1b9138: 0x13c00063  beqz        $fp, . + 4 + (0x63 << 2)
    ctx->pc = 0x1B9138u;
    {
        const bool branch_taken_0x1b9138 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9138u;
        // 0x1b913c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9138) {
            ctx->pc = 0x1B92C8u;
            goto label_1b92c8;
        }
    }
    ctx->pc = 0x1B9140u;
    // 0x1b9140: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1b9140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1b9144: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1b9144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1b9148: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x1b9148u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b914c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b914cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9150: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1b9150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1b9154: 0x8fb00014  lw          $s0, 0x14($sp)
    ctx->pc = 0x1b9154u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1b9158: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1b9158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x1b915c: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1b915cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x1b9160: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1b9160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1b9164: 0x0  nop
    ctx->pc = 0x1b9164u;
    // NOP
label_1b9168:
    // 0x1b9168: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b9168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b916c: 0x8c821000  lw          $v0, 0x1000($a0)
    ctx->pc = 0x1b916cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4096)));
    // 0x1b9170: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x1b9170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1b9174: 0x54600051  bnel        $v1, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x1B9174u;
    {
        const bool branch_taken_0x1b9174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9174) {
            ctx->pc = 0x1B9178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9174u;
            // 0x1b9178: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B92BCu;
            goto label_1b92bc;
        }
    }
    ctx->pc = 0x1B917Cu;
    // 0x1b917c: 0x8c820fe8  lw          $v0, 0xFE8($a0)
    ctx->pc = 0x1b917cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4072)));
    // 0x1b9180: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1b9180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1b9184: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x1b9184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x1b9188: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1b9188u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b918c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1b918cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9190: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b9190u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b9194: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b9194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b9198: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1b9198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b919c: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1b919cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1b91a0: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1b91a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1b91a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b91a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b91a8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1b91a8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1b91ac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b91acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b91b0: 0x0  nop
    ctx->pc = 0x1b91b0u;
    // NOP
    // 0x1b91b4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1B91B4u;
    {
        const bool branch_taken_0x1b91b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B91B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B91B4u;
        // 0x1b91b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b91b4) {
            ctx->pc = 0x1B91E8u;
            goto label_1b91e8;
        }
    }
    ctx->pc = 0x1B91BCu;
    // 0x1b91bc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1b91bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b91c0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1b91c0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1b91c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b91c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b91c8: 0x0  nop
    ctx->pc = 0x1b91c8u;
    // NOP
    // 0x1b91cc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B91CCu;
    {
        const bool branch_taken_0x1b91cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B91D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B91CCu;
        // 0x1b91d0: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b91cc) {
            ctx->pc = 0x1B91E8u;
            goto label_1b91e8;
        }
    }
    ctx->pc = 0x1B91D4u;
    // 0x1b91d4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1b91d4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1b91d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b91d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b91dc: 0x0  nop
    ctx->pc = 0x1b91dcu;
    // NOP
    // 0x1b91e0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B91E0u;
    {
        const bool branch_taken_0x1b91e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b91e0) {
            ctx->pc = 0x1B91E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B91E0u;
            // 0x1b91e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B91E8u;
            goto label_1b91e8;
        }
    }
    ctx->pc = 0x1B91E8u;
label_1b91e8:
    // 0x1b91e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B91E8u;
    {
        const bool branch_taken_0x1b91e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b91e8) {
            ctx->pc = 0x1B91FCu;
            goto label_1b91fc;
        }
    }
    ctx->pc = 0x1B91F0u;
    // 0x1b91f0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b91f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b91f4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1B91F4u;
    {
        const bool branch_taken_0x1b91f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b91f4) {
            ctx->pc = 0x1B9294u;
            goto label_1b9294;
        }
    }
    ctx->pc = 0x1B91FCu;
label_1b91fc:
    // 0x1b91fc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b91fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9200: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1b9200u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b9204: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1b9204u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b9208: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1b9208u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b920c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1b920cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1b9210: 0x4a0003bf  vwaitq
    ctx->pc = 0x1b9210u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1b9214: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1b9214u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b9218: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b9218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b921c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1b921cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b9220: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1b9220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b9224: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1b9224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b9228: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1b9228u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b922c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1b922cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b9230: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1b9230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b9234: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1b9234u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1b9238: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1b9238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b923c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1b923cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b9240: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x1b9240u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b9244: 0x46176834  c.lt.s      $f13, $f23
    ctx->pc = 0x1b9244u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9248: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b9248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b924c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b924cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9250: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9250u;
    {
        const bool branch_taken_0x1b9250 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9250) {
            ctx->pc = 0x1B9268u;
            goto label_1b9268;
        }
    }
    ctx->pc = 0x1B9258u;
    // 0x1b9258: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1b9258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1b925c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b925cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b9260: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9260u;
    {
        const bool branch_taken_0x1b9260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9260u;
        // 0x1b9264: 0x460d6b02  mul.s       $f12, $f13, $f13 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9260) {
            ctx->pc = 0x1B927Cu;
            goto label_1b927c;
        }
    }
    ctx->pc = 0x1B9268u;
label_1b9268:
    // 0x1b9268: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x1b9268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b926c: 0x0  nop
    ctx->pc = 0x1b926cu;
    // NOP
    // 0x1b9270: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B9270u;
    {
        const bool branch_taken_0x1b9270 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9270) {
            ctx->pc = 0x1B9274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9270u;
            // 0x1b9274: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9278u;
            goto label_1b9278;
        }
    }
    ctx->pc = 0x1B9278u;
label_1b9278:
    // 0x1b9278: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x1b9278u;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_1b927c:
    // 0x1b927c: 0x460cb301  sub.s       $f12, $f22, $f12
    ctx->pc = 0x1b927cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[12]);
    // 0x1b9280: 0x0  nop
    ctx->pc = 0x1b9280u;
    // NOP
    // 0x1b9284: 0x460c0304  c1          0xC0304
    ctx->pc = 0x1b9284u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x1b9288: 0xc0e404c  jal         func_390130
    ctx->pc = 0x1B9288u;
    SET_GPR_U32(ctx, 31, 0x1B9290u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x1B9288u, 0x1B9290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9290u;
label_1b9290:
    // 0x1b9290: 0x46150042  mul.s       $f1, $f0, $f21
    ctx->pc = 0x1b9290u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1b9294:
    // 0x1b9294: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1b9294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1b9298: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b9298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b929c: 0x0  nop
    ctx->pc = 0x1b929cu;
    // NOP
    // 0x1b92a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b92a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b92a4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1b92a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b92a8: 0x0  nop
    ctx->pc = 0x1b92a8u;
    // NOP
    // 0x1b92ac: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B92ACu;
    {
        const bool branch_taken_0x1b92ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B92B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B92ACu;
        // 0x1b92b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b92ac) {
            ctx->pc = 0x1B92BCu;
            goto label_1b92bc;
        }
    }
    ctx->pc = 0x1B92B4u;
    // 0x1b92b4: 0x8e140000  lw          $s4, 0x0($s0)
    ctx->pc = 0x1b92b4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b92b8: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x1b92b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_1b92bc:
    // 0x1b92bc: 0x23e102b  sltu        $v0, $s1, $fp
    ctx->pc = 0x1b92bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x1b92c0: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x1B92C0u;
    {
        const bool branch_taken_0x1b92c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B92C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B92C0u;
        // 0x1b92c4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b92c0) {
            ctx->pc = 0x1B9168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9168;
        }
    }
    ctx->pc = 0x1B92C8u;
label_1b92c8:
    // 0x1b92c8: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B92C8u;
    {
        const bool branch_taken_0x1b92c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B92CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B92C8u;
        // 0x1b92cc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b92c8) {
            ctx->pc = 0x1B930Cu;
            goto label_1b930c;
        }
    }
    ctx->pc = 0x1B92D0u;
    // 0x1b92d0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1b92d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b92d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b92d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b92d8: 0x3c014434  lui         $at, 0x4434
    ctx->pc = 0x1b92d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17460 << 16));
    // 0x1b92dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b92dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b92e0: 0xc06e3d0  jal         func_1B8F40
    ctx->pc = 0x1B92E0u;
    SET_GPR_U32(ctx, 31, 0x1B92E8u);
    ctx->pc = 0x1B92E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B92E0u;
    // 0x1b92e4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F40u, 0x1B92E0u, 0x1B92E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B92E8u;
label_1b92e8:
    // 0x1b92e8: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1b92e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1b92ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b92ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b92f0: 0x10570006  beq         $v0, $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B92F0u;
    {
        const bool branch_taken_0x1b92f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x1B92F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B92F0u;
        // 0x1b92f4: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b92f0) {
            ctx->pc = 0x1B930Cu;
            goto label_1b930c;
        }
    }
    ctx->pc = 0x1B92F8u;
    // 0x1b92f8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1b92f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1b92fc:
    // 0x1b92fc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1b92fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1b9300: 0x2d7102b  sltu        $v0, $s6, $s7
    ctx->pc = 0x1b9300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x1b9304: 0x1440ff88  bnez        $v0, . + 4 + (-0x78 << 2)
    ctx->pc = 0x1B9304u;
    {
        const bool branch_taken_0x1b9304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9304u;
        // 0x1b9308: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9304) {
            ctx->pc = 0x1B9128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9128;
        }
    }
    ctx->pc = 0x1B930Cu;
label_1b930c:
    // 0x1b930c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b930cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9310: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1b9310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9314: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b9314u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b9318: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1b9318u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b931c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1b931cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b9320: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1b9320u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1b9324: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1b9324u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b9328: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1b9328u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1b932c: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1b932cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b9330: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1b9330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9334: 0xc7b70088  lwc1        $f23, 0x88($sp)
    ctx->pc = 0x1b9334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1b9338: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x1b9338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1b933c: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1b933cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b9340: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1b9340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b9344: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9344u;
        // 0x1b9348: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B934Cu;
    // 0x1b934c: 0x0  nop
    ctx->pc = 0x1b934cu;
    // NOP
    ctx->pc = 0x1b9350u;
}
