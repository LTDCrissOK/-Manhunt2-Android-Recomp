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

// Function: sub_00270F50
// Address: 0x270f50 - 0x2710a0
void sub_00270F50_0x270f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270F50_0x270f50");
#endif

    switch (ctx->pc) {
        case 0x270fbcu: goto label_270fbc;
        case 0x270fccu: goto label_270fcc;
        case 0x271024u: goto label_271024;
        case 0x271034u: goto label_271034;
        default: break;
    }

    ctx->pc = 0x270f50u;

    // 0x270f50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x270f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x270f54: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x270f54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270f58: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x270f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x270f5c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x270f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x270f60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x270f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270f64: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x270f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x270f68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x270f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x270f6c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x270f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x270f70: 0x8e3200b8  lw          $s2, 0xB8($s1)
    ctx->pc = 0x270f70u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x270f74: 0xae250228  sw          $a1, 0x228($s1)
    ctx->pc = 0x270f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 552), GPR_U32(ctx, 5));
    // 0x270f78: 0xc64001b0  lwc1        $f0, 0x1B0($s2)
    ctx->pc = 0x270f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270f7c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x270f7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270f80: 0x0  nop
    ctx->pc = 0x270f80u;
    // NOP
    // 0x270f84: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x270F84u;
    {
        const bool branch_taken_0x270f84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F84u;
        // 0x270f88: 0x26330230  addiu       $s3, $s1, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f84) {
            ctx->pc = 0x270FA4u;
            goto label_270fa4;
        }
    }
    ctx->pc = 0x270F8Cu;
    // 0x270f8c: 0xc64001b4  lwc1        $f0, 0x1B4($s2)
    ctx->pc = 0x270f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270f90: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x270f90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270f94: 0x0  nop
    ctx->pc = 0x270f94u;
    // NOP
    // 0x270f98: 0x4501003a  bc1t        . + 4 + (0x3A << 2)
    ctx->pc = 0x270F98u;
    {
        const bool branch_taken_0x270f98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F98u;
        // 0x270f9c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f98) {
            ctx->pc = 0x271084u;
            goto label_271084;
        }
    }
    ctx->pc = 0x270FA0u;
    // 0x270fa0: 0x26330230  addiu       $s3, $s1, 0x230
    ctx->pc = 0x270fa0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
label_270fa4:
    // 0x270fa4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x270fa4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x270fa8: 0xfa210230  sqc2        $vf1, 0x230($s1)
    ctx->pc = 0x270fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 560), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x270fac: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x270facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x270fb0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x270fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x270fb4: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x270FB4u;
    SET_GPR_U32(ctx, 31, 0x270FBCu);
    ctx->pc = 0x270FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270FB4u;
    // 0x270fb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x270FB4u, 0x270FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270FBCu;
label_270fbc:
    // 0x270fbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x270FBCu;
    {
        const bool branch_taken_0x270fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270FBCu;
        // 0x270fc0: 0x260200a0  addiu       $v0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270fbc) {
            ctx->pc = 0x270FD0u;
            goto label_270fd0;
        }
    }
    ctx->pc = 0x270FC4u;
    // 0x270fc4: 0xc0c4900  jal         func_312400
    ctx->pc = 0x270FC4u;
    SET_GPR_U32(ctx, 31, 0x270FCCu);
    ctx->pc = 0x270FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270FC4u;
    // 0x270fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x270FC4u, 0x270FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270FCCu;
label_270fcc:
    // 0x270fcc: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x270fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_270fd0:
    // 0x270fd0: 0xc64001b0  lwc1        $f0, 0x1B0($s2)
    ctx->pc = 0x270fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270fd4: 0xc60300a0  lwc1        $f3, 0xA0($s0)
    ctx->pc = 0x270fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x270fd8: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x270fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270fdc: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x270fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270fe0: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x270fe0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x270fe4: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x270fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x270fe8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x270fe8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x270fec: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x270fecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x270ff0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x270ff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x270ff4: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x270ff4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x270ff8: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x270ff8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x270ffc: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x270ffcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x271000: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x271000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x271004: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x271004u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x271008: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x271008u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27100c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x27100cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x271010: 0xfa210230  sqc2        $vf1, 0x230($s1)
    ctx->pc = 0x271010u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 560), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x271014: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x271014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x271018: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x271018u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27101c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x27101Cu;
    SET_GPR_U32(ctx, 31, 0x271024u);
    ctx->pc = 0x271020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27101Cu;
    // 0x271020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x27101Cu, 0x271024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271024u;
label_271024:
    // 0x271024: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x271024u;
    {
        const bool branch_taken_0x271024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271024u;
        // 0x271028: 0x26020090  addiu       $v0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271024) {
            ctx->pc = 0x271038u;
            goto label_271038;
        }
    }
    ctx->pc = 0x27102Cu;
    // 0x27102c: 0xc0c4900  jal         func_312400
    ctx->pc = 0x27102Cu;
    SET_GPR_U32(ctx, 31, 0x271034u);
    ctx->pc = 0x271030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27102Cu;
    // 0x271030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x27102Cu, 0x271034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271034u;
label_271034:
    // 0x271034: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x271034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_271038:
    // 0x271038: 0xc64001b4  lwc1        $f0, 0x1B4($s2)
    ctx->pc = 0x271038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27103c: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x27103cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271040: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x271040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x271044: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x271044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x271048: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x271048u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27104c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x27104cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x271050: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x271050u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x271054: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x271054u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x271058: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x271058u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x27105c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x27105cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x271060: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x271060u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x271064: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x271064u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x271068: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x271068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x27106c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x27106cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x271070: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x271070u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271074: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x271074u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x271078: 0xfa210230  sqc2        $vf1, 0x230($s1)
    ctx->pc = 0x271078u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 560), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x27107c: 0xae330224  sw          $s3, 0x224($s1)
    ctx->pc = 0x27107cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 19));
    // 0x271080: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x271080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_271084:
    // 0x271084: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x271084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x271088: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x271088u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27108c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x27108cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x271090: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x271090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x271094: 0x3e00008  jr          $ra
    ctx->pc = 0x271094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271094u;
        // 0x271098: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27109Cu;
    // 0x27109c: 0x0  nop
    ctx->pc = 0x27109cu;
    // NOP
    ctx->pc = 0x2710a0u;
}
