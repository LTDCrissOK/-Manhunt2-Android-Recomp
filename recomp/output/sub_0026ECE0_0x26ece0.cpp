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

// Function: sub_0026ECE0
// Address: 0x26ece0 - 0x26ee68
void sub_0026ECE0_0x26ece0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026ECE0_0x26ece0");
#endif

    switch (ctx->pc) {
        case 0x26ed00u: goto label_26ed00;
        case 0x26ed40u: goto label_26ed40;
        case 0x26ed50u: goto label_26ed50;
        case 0x26ed70u: goto label_26ed70;
        case 0x26ed80u: goto label_26ed80;
        case 0x26edd8u: goto label_26edd8;
        case 0x26ede8u: goto label_26ede8;
        case 0x26ee48u: goto label_26ee48;
        default: break;
    }

    ctx->pc = 0x26ece0u;

    // 0x26ece0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26ece0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26ece4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x26ece4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x26ece8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26ece8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x26ecec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26ececu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26ecf0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x26ecf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x26ecf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26ecf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26ecf8: 0xc0845aa  jal         func_2116A8
    ctx->pc = 0x26ECF8u;
    SET_GPR_U32(ctx, 31, 0x26ED00u);
    ctx->pc = 0x26ECFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ECF8u;
    // 0x26ecfc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2116A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2116A8u, 0x26ECF8u, 0x26ED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ED00u;
label_26ed00:
    // 0x26ed00: 0x8e3200b8  lw          $s2, 0xB8($s1)
    ctx->pc = 0x26ed00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x26ed04: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x26ed04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ed08: 0xc64001b0  lwc1        $f0, 0x1B0($s2)
    ctx->pc = 0x26ed08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ed0c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x26ed0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ed10: 0x0  nop
    ctx->pc = 0x26ed10u;
    // NOP
    // 0x26ed14: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x26ED14u;
    {
        const bool branch_taken_0x26ed14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ed14) {
            ctx->pc = 0x26ED18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26ED14u;
            // 0x26ed18: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26ED34u;
            goto label_26ed34;
        }
    }
    ctx->pc = 0x26ED1Cu;
    // 0x26ed1c: 0xc64001b4  lwc1        $f0, 0x1B4($s2)
    ctx->pc = 0x26ed1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ed20: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x26ed20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ed24: 0x0  nop
    ctx->pc = 0x26ed24u;
    // NOP
    // 0x26ed28: 0x45030043  bc1tl       . + 4 + (0x43 << 2)
    ctx->pc = 0x26ED28u;
    {
        const bool branch_taken_0x26ed28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ed28) {
            ctx->pc = 0x26ED2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26ED28u;
            // 0x26ed2c: 0x8e42020c  lw          $v0, 0x20C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EE38u;
            goto label_26ee38;
        }
    }
    ctx->pc = 0x26ED30u;
    // 0x26ed30: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x26ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_26ed34:
    // 0x26ed34: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26ed34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26ed38: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x26ED38u;
    SET_GPR_U32(ctx, 31, 0x26ED40u);
    ctx->pc = 0x26ED3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ED38u;
    // 0x26ed3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x26ED38u, 0x26ED40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ED40u;
label_26ed40:
    // 0x26ed40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26ED40u;
    {
        const bool branch_taken_0x26ed40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED40u;
        // 0x26ed44: 0x260300b0  addiu       $v1, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed40) {
            ctx->pc = 0x26ED54u;
            goto label_26ed54;
        }
    }
    ctx->pc = 0x26ED48u;
    // 0x26ed48: 0xc0c4900  jal         func_312400
    ctx->pc = 0x26ED48u;
    SET_GPR_U32(ctx, 31, 0x26ED50u);
    ctx->pc = 0x26ED4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ED48u;
    // 0x26ed4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x26ED48u, 0x26ED50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ED50u;
label_26ed50:
    // 0x26ed50: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x26ed50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_26ed54:
    // 0x26ed54: 0x26330230  addiu       $s3, $s1, 0x230
    ctx->pc = 0x26ed54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    // 0x26ed58: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x26ed58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26ed5c: 0xfa210230  sqc2        $vf1, 0x230($s1)
    ctx->pc = 0x26ed5cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 560), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26ed60: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x26ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x26ed64: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26ed64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26ed68: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x26ED68u;
    SET_GPR_U32(ctx, 31, 0x26ED70u);
    ctx->pc = 0x26ED6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ED68u;
    // 0x26ed6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x26ED68u, 0x26ED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ED70u;
label_26ed70:
    // 0x26ed70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26ED70u;
    {
        const bool branch_taken_0x26ed70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED70u;
        // 0x26ed74: 0x260200a0  addiu       $v0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed70) {
            ctx->pc = 0x26ED84u;
            goto label_26ed84;
        }
    }
    ctx->pc = 0x26ED78u;
    // 0x26ed78: 0xc0c4900  jal         func_312400
    ctx->pc = 0x26ED78u;
    SET_GPR_U32(ctx, 31, 0x26ED80u);
    ctx->pc = 0x26ED7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ED78u;
    // 0x26ed7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x26ED78u, 0x26ED80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ED80u;
label_26ed80:
    // 0x26ed80: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x26ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_26ed84:
    // 0x26ed84: 0xc64001b0  lwc1        $f0, 0x1B0($s2)
    ctx->pc = 0x26ed84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ed88: 0xc60300a0  lwc1        $f3, 0xA0($s0)
    ctx->pc = 0x26ed88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26ed8c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x26ed8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ed90: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x26ed90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26ed94: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x26ed94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x26ed98: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x26ed98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26ed9c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x26ed9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26eda0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x26eda0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x26eda4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x26eda4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x26eda8: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x26eda8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26edac: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x26edacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x26edb0: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x26edb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26edb4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x26edb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26edb8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x26edb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x26edbc: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x26edbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26edc0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26edc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26edc4: 0xfa210230  sqc2        $vf1, 0x230($s1)
    ctx->pc = 0x26edc4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 560), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26edc8: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x26edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x26edcc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26edccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26edd0: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x26EDD0u;
    SET_GPR_U32(ctx, 31, 0x26EDD8u);
    ctx->pc = 0x26EDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EDD0u;
    // 0x26edd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x26EDD0u, 0x26EDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EDD8u;
label_26edd8:
    // 0x26edd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26EDD8u;
    {
        const bool branch_taken_0x26edd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EDD8u;
        // 0x26eddc: 0x26020090  addiu       $v0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26edd8) {
            ctx->pc = 0x26EDECu;
            goto label_26edec;
        }
    }
    ctx->pc = 0x26EDE0u;
    // 0x26ede0: 0xc0c4900  jal         func_312400
    ctx->pc = 0x26EDE0u;
    SET_GPR_U32(ctx, 31, 0x26EDE8u);
    ctx->pc = 0x26EDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EDE0u;
    // 0x26ede4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x26EDE0u, 0x26EDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EDE8u;
label_26ede8:
    // 0x26ede8: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x26ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_26edec:
    // 0x26edec: 0xc64001b4  lwc1        $f0, 0x1B4($s2)
    ctx->pc = 0x26edecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26edf0: 0xc6030090  lwc1        $f3, 0x90($s0)
    ctx->pc = 0x26edf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26edf4: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x26edf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26edf8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x26edf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26edfc: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x26edfcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x26ee00: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x26ee00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26ee04: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x26ee04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26ee08: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x26ee08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x26ee0c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x26ee0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x26ee10: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x26ee10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26ee14: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x26ee14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x26ee18: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x26ee18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26ee1c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x26ee1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26ee20: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x26ee20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x26ee24: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x26ee24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ee28: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26ee28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26ee2c: 0xfa210230  sqc2        $vf1, 0x230($s1)
    ctx->pc = 0x26ee2cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 560), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26ee30: 0xae330224  sw          $s3, 0x224($s1)
    ctx->pc = 0x26ee30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 19));
    // 0x26ee34: 0x8e42020c  lw          $v0, 0x20C($s2)
    ctx->pc = 0x26ee34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
label_26ee38:
    // 0x26ee38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26EE38u;
    {
        const bool branch_taken_0x26ee38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE38u;
        // 0x26ee3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ee38) {
            ctx->pc = 0x26EE48u;
            goto label_26ee48;
        }
    }
    ctx->pc = 0x26EE40u;
    // 0x26ee40: 0xc0848ba  jal         func_2122E8
    ctx->pc = 0x26EE40u;
    SET_GPR_U32(ctx, 31, 0x26EE48u);
    ctx->pc = 0x26EE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EE40u;
    // 0x26ee44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2122E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2122E8u, 0x26EE40u, 0x26EE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EE48u;
label_26ee48:
    // 0x26ee48: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x26ee48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ee4c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x26ee4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26ee50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26ee50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ee54: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x26ee54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ee58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26ee58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26ee5c: 0x3e00008  jr          $ra
    ctx->pc = 0x26EE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE5Cu;
        // 0x26ee60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EE64u;
    // 0x26ee64: 0x0  nop
    ctx->pc = 0x26ee64u;
    // NOP
    ctx->pc = 0x26ee68u;
}
