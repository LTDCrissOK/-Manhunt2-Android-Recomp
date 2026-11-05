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

// Function: sub_001CAFA0
// Address: 0x1cafa0 - 0x1cb0d8
void sub_001CAFA0_0x1cafa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CAFA0_0x1cafa0");
#endif

    switch (ctx->pc) {
        case 0x1caff0u: goto label_1caff0;
        default: break;
    }

    ctx->pc = 0x1cafa0u;

    // 0x1cafa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cafa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cafa4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1cafa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1cafa8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1cafa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1cafac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cafacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cafb0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1cafb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1cafb4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1cafb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1cafb8: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1cafb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cafbc: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x1cafbcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cafc0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1cafc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cafc4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1cafc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1cafc8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CAFC8u;
    {
        const bool branch_taken_0x1cafc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFC8u;
        // 0x1cafcc: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cafc8) {
            ctx->pc = 0x1CAFE8u;
            goto label_1cafe8;
        }
    }
    ctx->pc = 0x1CAFD0u;
    // 0x1cafd0: 0x1620003a  bnez        $s1, . + 4 + (0x3A << 2)
    ctx->pc = 0x1CAFD0u;
    {
        const bool branch_taken_0x1cafd0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFD0u;
        // 0x1cafd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cafd0) {
            ctx->pc = 0x1CB0BCu;
            goto label_1cb0bc;
        }
    }
    ctx->pc = 0x1CAFD8u;
    // 0x1cafd8: 0x16400039  bnez        $s2, . + 4 + (0x39 << 2)
    ctx->pc = 0x1CAFD8u;
    {
        const bool branch_taken_0x1cafd8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFD8u;
        // 0x1cafdc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cafd8) {
            ctx->pc = 0x1CB0C0u;
            goto label_1cb0c0;
        }
    }
    ctx->pc = 0x1CAFE0u;
    // 0x1cafe0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1CAFE0u;
    {
        const bool branch_taken_0x1cafe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFE0u;
        // 0x1cafe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cafe0) {
            ctx->pc = 0x1CB0C0u;
            goto label_1cb0c0;
        }
    }
    ctx->pc = 0x1CAFE8u;
label_1cafe8:
    // 0x1cafe8: 0xc072c36  jal         func_1CB0D8
    ctx->pc = 0x1CAFE8u;
    SET_GPR_U32(ctx, 31, 0x1CAFF0u);
    ctx->pc = 0x1CAFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAFE8u;
    // 0x1cafec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB0D8u, 0x1CAFE8u, 0x1CAFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAFF0u;
label_1caff0:
    // 0x1caff0: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x1caff0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1caff4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1caff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1caff8: 0x8ce40104  lw          $a0, 0x104($a3)
    ctx->pc = 0x1caff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 260)));
    // 0x1caffc: 0x8cc50104  lw          $a1, 0x104($a2)
    ctx->pc = 0x1caffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x1cb000: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cb000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cb004: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1cb004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cb008: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x1cb008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1cb00c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1cb00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1cb010: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1cb010u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cb014: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1cb014u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cb018: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1cb018u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cb01c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1cb01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cb020: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1cb020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb024: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1cb024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb028: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1cb028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb02c: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x1cb02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1cb030: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1cb030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cb034: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1cb034u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1cb038: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1cb038u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1cb03c: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1cb03cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1cb040: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1cb040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb044: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1cb044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cb048: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1cb048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1cb04c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1cb04cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1cb050: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1cb050u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1cb054: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1cb054u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1cb058: 0x0  nop
    ctx->pc = 0x1cb058u;
    // NOP
    // 0x1cb05c: 0x0  nop
    ctx->pc = 0x1cb05cu;
    // NOP
    // 0x1cb060: 0x46000044  c1          0x44
    ctx->pc = 0x1cb060u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1cb064: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1cb064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1cb068: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x1cb068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1cb06c: 0x8cc20318  lw          $v0, 0x318($a2)
    ctx->pc = 0x1cb06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 792)));
    // 0x1cb070: 0x54470005  bnel        $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB070u;
    {
        const bool branch_taken_0x1cb070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x1cb070) {
            ctx->pc = 0x1CB074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB070u;
            // 0x1cb074: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB088u;
            goto label_1cb088;
        }
    }
    ctx->pc = 0x1CB078u;
    // 0x1cb078: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cb078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cb07c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x1cb07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x1cb080: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1cb080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1cb084: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1cb084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1cb088:
    // 0x1cb088: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1cb088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cb08c: 0x8c430318  lw          $v1, 0x318($v0)
    ctx->pc = 0x1cb08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 792)));
    // 0x1cb090: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB090u;
    {
        const bool branch_taken_0x1cb090 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CB094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB090u;
        // 0x1cb094: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb090) {
            ctx->pc = 0x1CB0A4u;
            goto label_1cb0a4;
        }
    }
    ctx->pc = 0x1CB098u;
    // 0x1cb098: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x1cb098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x1cb09c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cb09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1cb0a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cb0a4:
    // 0x1cb0a4: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB0A4u;
    {
        const bool branch_taken_0x1cb0a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CB0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0A4u;
        // 0x1cb0a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb0a4) {
            ctx->pc = 0x1CB0BCu;
            goto label_1cb0bc;
        }
    }
    ctx->pc = 0x1CB0ACu;
    // 0x1cb0ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cb0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cb0b0: 0x16420002  bne         $s2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CB0B0u;
    {
        const bool branch_taken_0x1cb0b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CB0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0B0u;
        // 0x1cb0b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb0b0) {
            ctx->pc = 0x1CB0BCu;
            goto label_1cb0bc;
        }
    }
    ctx->pc = 0x1CB0B8u;
    // 0x1cb0b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cb0b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb0bc:
    // 0x1cb0bc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1cb0bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cb0c0:
    // 0x1cb0c0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1cb0c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cb0c4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1cb0c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cb0c8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1cb0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cb0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0CCu;
        // 0x1cb0d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB0D4u;
    // 0x1cb0d4: 0x0  nop
    ctx->pc = 0x1cb0d4u;
    // NOP
    ctx->pc = 0x1cb0d8u;
}
