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

// Function: sub_001E0070
// Address: 0x1e0070 - 0x1e0418
void sub_001E0070_0x1e0070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0070_0x1e0070");
#endif

    switch (ctx->pc) {
        case 0x1e00a0u: goto label_1e00a0;
        case 0x1e00a8u: goto label_1e00a8;
        default: break;
    }

    ctx->pc = 0x1e0070u;

    // 0x1e0070: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e0070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e0074: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1e0074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1e0078: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1e0078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1e007c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e007cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0080: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1e0080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1e0084: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e0084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0088: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1e0088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1e008c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e008cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0090: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e0090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1e0094: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1e0094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0098: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E0098u;
    SET_GPR_U32(ctx, 31, 0x1E00A0u);
    ctx->pc = 0x1E009Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0098u;
    // 0x1e009c: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E0098u, 0x1E00A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00A0u;
label_1e00a0:
    // 0x1e00a0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E00A0u;
    SET_GPR_U32(ctx, 31, 0x1E00A8u);
    ctx->pc = 0x1E00A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E00A0u;
    // 0x1e00a4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E00A0u, 0x1E00A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00A8u;
label_1e00a8:
    // 0x1e00a8: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x1e00a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e00ac: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x1e00acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e00b0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1e00b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e00b4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1e00b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e00b8: 0x0  nop
    ctx->pc = 0x1e00b8u;
    // NOP
    // 0x1e00bc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E00BCu;
    {
        const bool branch_taken_0x1e00bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E00C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E00BCu;
        // 0x1e00c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e00bc) {
            ctx->pc = 0x1E00D4u;
            goto label_1e00d4;
        }
    }
    ctx->pc = 0x1E00C4u;
    // 0x1e00c4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1e00c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1e00c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e00c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e00cc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E00CCu;
    {
        const bool branch_taken_0x1e00cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E00D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E00CCu;
        // 0x1e00d0: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e00cc) {
            ctx->pc = 0x1E00F4u;
            goto label_1e00f4;
        }
    }
    ctx->pc = 0x1E00D4u;
label_1e00d4:
    // 0x1e00d4: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x1e00d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e00d8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1e00d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e00dc: 0x0  nop
    ctx->pc = 0x1e00dcu;
    // NOP
    // 0x1e00e0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1E00E0u;
    {
        const bool branch_taken_0x1e00e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E00E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E00E0u;
        // 0x1e00e4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e00e0) {
            ctx->pc = 0x1E0120u;
            goto label_1e0120;
        }
    }
    ctx->pc = 0x1E00E8u;
    // 0x1e00e8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1e00e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1e00ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e00ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e00f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e00f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e00f4:
    // 0x1e00f4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1e00f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e00f8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1e00f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e00fc: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1e00fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e0100: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x1e0100u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e0104: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1e0104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1e0108: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1e0108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1e010c: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x1e010cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x1e0110: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e0110u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e0114: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e0114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0118: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0118u;
    {
        const bool branch_taken_0x1e0118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0118u;
        // 0x1e011c: 0x26420010  addiu       $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0118) {
            ctx->pc = 0x1E0130u;
            goto label_1e0130;
        }
    }
    ctx->pc = 0x1E0120u;
label_1e0120:
    // 0x1e0120: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e0120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0124: 0xc440d88c  lwc1        $f0, -0x2774($v0)
    ctx->pc = 0x1e0124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0128: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e0128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e012c: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x1e012cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1e0130:
    // 0x1e0130: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1e0130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e0134: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e0134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0138: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e0138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e013c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1e013cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0140: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1e0140u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0144: 0x0  nop
    ctx->pc = 0x1e0144u;
    // NOP
    // 0x1e0148: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0148u;
    {
        const bool branch_taken_0x1e0148 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0148u;
        // 0x1e014c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0148) {
            ctx->pc = 0x1E0160u;
            goto label_1e0160;
        }
    }
    ctx->pc = 0x1E0150u;
    // 0x1e0150: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1e0150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1e0154: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e0154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e0158: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E0158u;
    {
        const bool branch_taken_0x1e0158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0158u;
        // 0x1e015c: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0158) {
            ctx->pc = 0x1E0180u;
            goto label_1e0180;
        }
    }
    ctx->pc = 0x1E0160u;
label_1e0160:
    // 0x1e0160: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x1e0160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0164: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1e0164u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0168: 0x0  nop
    ctx->pc = 0x1e0168u;
    // NOP
    // 0x1e016c: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1E016Cu;
    {
        const bool branch_taken_0x1e016c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E016Cu;
        // 0x1e0170: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e016c) {
            ctx->pc = 0x1E01BCu;
            goto label_1e01bc;
        }
    }
    ctx->pc = 0x1E0174u;
    // 0x1e0174: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1e0174u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1e0178: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e0178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e017c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e017cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e0180:
    // 0x1e0180: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1e0180u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e0184: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1e0184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e0188: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1e0188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1e018c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1e018cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e0190: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1e0190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e0194: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1e0194u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1e0198: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1e0198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1e019c: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x1e019cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x1e01a0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1e01a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1e01a4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e01a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e01a8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1e01a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e01ac: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e01acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e01b0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e01b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e01b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E01B4u;
    {
        const bool branch_taken_0x1e01b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E01B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E01B4u;
        // 0x1e01b8: 0xc4c20008  lwc1        $f2, 0x8($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e01b4) {
            ctx->pc = 0x1E01CCu;
            goto label_1e01cc;
        }
    }
    ctx->pc = 0x1E01BCu;
label_1e01bc:
    // 0x1e01bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e01bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e01c0: 0xc440d88c  lwc1        $f0, -0x2774($v0)
    ctx->pc = 0x1e01c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e01c4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1e01c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e01c8: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x1e01c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e01cc:
    // 0x1e01cc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1e01ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e01d0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1e01d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e01d4: 0x0  nop
    ctx->pc = 0x1e01d4u;
    // NOP
    // 0x1e01d8: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1E01D8u;
    {
        const bool branch_taken_0x1e01d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e01d8) {
            ctx->pc = 0x1E01DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E01D8u;
            // 0x1e01dc: 0xc6220028  lwc1        $f2, 0x28($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E01F0u;
            goto label_1e01f0;
        }
    }
    ctx->pc = 0x1E01E0u;
    // 0x1e01e0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1e01e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1e01e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e01e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e01e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E01E8u;
    {
        const bool branch_taken_0x1e01e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E01ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E01E8u;
        // 0x1e01ec: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e01e8) {
            ctx->pc = 0x1E020Cu;
            goto label_1e020c;
        }
    }
    ctx->pc = 0x1E01F0u;
label_1e01f0:
    // 0x1e01f0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1e01f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e01f4: 0x0  nop
    ctx->pc = 0x1e01f4u;
    // NOP
    // 0x1e01f8: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1E01F8u;
    {
        const bool branch_taken_0x1e01f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E01FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E01F8u;
        // 0x1e01fc: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e01f8) {
            ctx->pc = 0x1E0248u;
            goto label_1e0248;
        }
    }
    ctx->pc = 0x1E0200u;
    // 0x1e0200: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1e0200u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1e0204: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e0204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e0208: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e0208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e020c:
    // 0x1e020c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1e020cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e0210: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1e0210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e0214: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1e0214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1e0218: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1e0218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e021c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1e021cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e0220: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1e0220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1e0224: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1e0224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1e0228: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x1e0228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x1e022c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1e022cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1e0230: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e0230u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0234: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1e0234u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e0238: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e0238u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e023c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e023cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0240: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0240u;
    {
        const bool branch_taken_0x1e0240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0240u;
        // 0x1e0244: 0xc6400020  lwc1        $f0, 0x20($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0240) {
            ctx->pc = 0x1E0258u;
            goto label_1e0258;
        }
    }
    ctx->pc = 0x1E0248u;
label_1e0248:
    // 0x1e0248: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e0248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e024c: 0xc440d88c  lwc1        $f0, -0x2774($v0)
    ctx->pc = 0x1e024cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0250: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1e0250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e0254: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1e0254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e0258:
    // 0x1e0258: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1e0258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e025c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1e025cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0260: 0x0  nop
    ctx->pc = 0x1e0260u;
    // NOP
    // 0x1e0264: 0x45000061  bc1f        . + 4 + (0x61 << 2)
    ctx->pc = 0x1E0264u;
    {
        const bool branch_taken_0x1e0264 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0264u;
        // 0x1e0268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0264) {
            ctx->pc = 0x1E03ECu;
            goto label_1e03ec;
        }
    }
    ctx->pc = 0x1E026Cu;
    // 0x1e026c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1e026cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0270: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1e0270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0274: 0x0  nop
    ctx->pc = 0x1e0274u;
    // NOP
    // 0x1e0278: 0x4500005b  bc1f        . + 4 + (0x5B << 2)
    ctx->pc = 0x1E0278u;
    {
        const bool branch_taken_0x1e0278 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0278u;
        // 0x1e027c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0278) {
            ctx->pc = 0x1E03E8u;
            goto label_1e03e8;
        }
    }
    ctx->pc = 0x1E0280u;
    // 0x1e0280: 0x10820027  beq         $a0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1E0280u;
    {
        const bool branch_taken_0x1e0280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0280u;
        // 0x1e0284: 0xe6630000  swc1        $f3, 0x0($s3) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0280) {
            ctx->pc = 0x1E0320u;
            goto label_1e0320;
        }
    }
    ctx->pc = 0x1E0288u;
    // 0x1e0288: 0x2c820003  sltiu       $v0, $a0, 0x3
    ctx->pc = 0x1e0288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e028c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E028Cu;
    {
        const bool branch_taken_0x1e028c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E028Cu;
        // 0x1e0290: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e028c) {
            ctx->pc = 0x1E02A4u;
            goto label_1e02a4;
        }
    }
    ctx->pc = 0x1E0294u;
    // 0x1e0294: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0294u;
    {
        const bool branch_taken_0x1e0294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e0294) {
            ctx->pc = 0x1E0298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0294u;
            // 0x1e0298: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E02B8u;
            goto label_1e02b8;
        }
    }
    ctx->pc = 0x1E029Cu;
    // 0x1e029c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1E029Cu;
    {
        const bool branch_taken_0x1e029c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E02A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E029Cu;
        // 0x1e02a0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e029c) {
            ctx->pc = 0x1E03F0u;
            goto label_1e03f0;
        }
    }
    ctx->pc = 0x1E02A4u;
label_1e02a4:
    // 0x1e02a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e02a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e02a8: 0x1082002e  beq         $a0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1E02A8u;
    {
        const bool branch_taken_0x1e02a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E02ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02A8u;
        // 0x1e02ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e02a8) {
            ctx->pc = 0x1E0364u;
            goto label_1e0364;
        }
    }
    ctx->pc = 0x1E02B0u;
    // 0x1e02b0: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1E02B0u;
    {
        const bool branch_taken_0x1e02b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E02B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02B0u;
        // 0x1e02b4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e02b0) {
            ctx->pc = 0x1E03F0u;
            goto label_1e03f0;
        }
    }
    ctx->pc = 0x1E02B8u;
label_1e02b8:
    // 0x1e02b8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1e02b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e02bc: 0xc441d88c  lwc1        $f1, -0x2774($v0)
    ctx->pc = 0x1e02bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e02c0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e02c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e02c4: 0x0  nop
    ctx->pc = 0x1e02c4u;
    // NOP
    // 0x1e02c8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1E02C8u;
    {
        const bool branch_taken_0x1e02c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E02CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02C8u;
        // 0x1e02cc: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e02c8) {
            ctx->pc = 0x1E02DCu;
            goto label_1e02dc;
        }
    }
    ctx->pc = 0x1E02D0u;
    // 0x1e02d0: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x1e02d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e02d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E02D4u;
    {
        const bool branch_taken_0x1e02d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E02D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02D4u;
        // 0x1e02d8: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e02d4) {
            ctx->pc = 0x1E0310u;
            goto label_1e0310;
        }
    }
    ctx->pc = 0x1E02DCu;
label_1e02dc:
    // 0x1e02dc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e02dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e02e0: 0x0  nop
    ctx->pc = 0x1e02e0u;
    // NOP
    // 0x1e02e4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1E02E4u;
    {
        const bool branch_taken_0x1e02e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E02E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02E4u;
        // 0x1e02e8: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e02e4) {
            ctx->pc = 0x1E02F8u;
            goto label_1e02f8;
        }
    }
    ctx->pc = 0x1E02ECu;
    // 0x1e02ec: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1e02ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e02f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E02F0u;
    {
        const bool branch_taken_0x1e02f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E02F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02F0u;
        // 0x1e02f4: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e02f0) {
            ctx->pc = 0x1E0310u;
            goto label_1e0310;
        }
    }
    ctx->pc = 0x1E02F8u;
label_1e02f8:
    // 0x1e02f8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e02f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e02fc: 0x0  nop
    ctx->pc = 0x1e02fcu;
    // NOP
    // 0x1e0300: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0300u;
    {
        const bool branch_taken_0x1e0300 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0300) {
            ctx->pc = 0x1E0310u;
            goto label_1e0310;
        }
    }
    ctx->pc = 0x1E0308u;
    // 0x1e0308: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1e0308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e030c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1e030cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1e0310:
    // 0x1e0310: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e0310u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0314: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1e0314u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0318: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1E0318u;
    {
        const bool branch_taken_0x1e0318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0318u;
        // 0x1e031c: 0x26020010  addiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0318) {
            ctx->pc = 0x1E03B0u;
            goto label_1e03b0;
        }
    }
    ctx->pc = 0x1E0320u;
label_1e0320:
    // 0x1e0320: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1e0320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e0324: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e0324u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e0328: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1e0328u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e032c: 0x0  nop
    ctx->pc = 0x1e032cu;
    // NOP
    // 0x1e0330: 0x0  nop
    ctx->pc = 0x1e0330u;
    // NOP
    // 0x1e0334: 0x46030004  c1          0x30004
    ctx->pc = 0x1e0334u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1e0338: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e0338u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e033c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e033cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e0340: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1e0340u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e0344: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1e0344u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0348: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1e0348u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e034c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1e034cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0350: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1e0350u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e0354: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e0354u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0358: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1e0358u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e035c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1E035Cu;
    {
        const bool branch_taken_0x1e035c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E035Cu;
        // 0x1e0360: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e035c) {
            ctx->pc = 0x1E03ECu;
            goto label_1e03ec;
        }
    }
    ctx->pc = 0x1E0364u;
label_1e0364:
    // 0x1e0364: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e0364u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0368: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1e0368u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e036c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e036cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e0370: 0x0  nop
    ctx->pc = 0x1e0370u;
    // NOP
    // 0x1e0374: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x1e0374u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0378: 0x0  nop
    ctx->pc = 0x1e0378u;
    // NOP
    // 0x1e037c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1E037Cu;
    {
        const bool branch_taken_0x1e037c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E037Cu;
        // 0x1e0380: 0x26020010  addiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e037c) {
            ctx->pc = 0x1E03B0u;
            goto label_1e03b0;
        }
    }
    ctx->pc = 0x1E0384u;
    // 0x1e0384: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e0384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e0388: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e0388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e038c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1e038cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e0390: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1e0390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e0394: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1e0394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1e0398: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x1e0398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1e039c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1e039cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1e03a0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e03a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e03a4: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1e03a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e03a8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E03A8u;
    {
        const bool branch_taken_0x1e03a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E03ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E03A8u;
        // 0x1e03ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e03a8) {
            ctx->pc = 0x1E03ECu;
            goto label_1e03ec;
        }
    }
    ctx->pc = 0x1E03B0u;
label_1e03b0:
    // 0x1e03b0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1e03b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e03b4: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1e03b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e03b8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e03b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e03bc: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1e03bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e03c0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e03c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e03c4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1e03c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e03c8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1e03c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e03cc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1e03ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e03d0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1e03d0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e03d4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e03d4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e03d8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1e03d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e03dc: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1e03dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e03e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E03E0u;
    {
        const bool branch_taken_0x1e03e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E03E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E03E0u;
        // 0x1e03e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e03e0) {
            ctx->pc = 0x1E03ECu;
            goto label_1e03ec;
        }
    }
    ctx->pc = 0x1E03E8u;
label_1e03e8:
    // 0x1e03e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e03e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e03ec:
    // 0x1e03ec: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1e03ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e03f0:
    // 0x1e03f0: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1e03f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e03f4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1e03f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e03f8: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1e03f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e03fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e03fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e0400: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0400u;
        // 0x1e0404: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0408u;
    // 0x1e0408: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x1e0408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e040c: 0x0  nop
    ctx->pc = 0x1e040cu;
    // NOP
    // 0x1e0410: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1e0410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e0414: 0x0  nop
    ctx->pc = 0x1e0414u;
    // NOP
    ctx->pc = 0x1e0418u;
}
