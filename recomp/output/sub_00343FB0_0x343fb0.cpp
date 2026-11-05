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

// Function: sub_00343FB0
// Address: 0x343fb0 - 0x344098
void sub_00343FB0_0x343fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343FB0_0x343fb0");
#endif

    switch (ctx->pc) {
        case 0x344000u: goto label_344000;
        case 0x344010u: goto label_344010;
        default: break;
    }

    ctx->pc = 0x343fb0u;

    // 0x343fb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x343fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x343fb4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x343fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x343fb8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x343fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x343fbc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x343fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343fc0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x343fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x343fc4: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x343fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x343fc8: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x343fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x343fcc: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x343fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x343fd0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x343fd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x343fd4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x343fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x343fd8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x343fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x343fdc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x343fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x343fe0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x343fe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x343fe4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x343fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x343fe8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x343fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x343fec: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x343fecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343ff0: 0xf8610030  sqc2        $vf1, 0x30($v1)
    ctx->pc = 0x343ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x343ff4: 0x8c900100  lw          $s0, 0x100($a0)
    ctx->pc = 0x343ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x343ff8: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x343FF8u;
    SET_GPR_U32(ctx, 31, 0x344000u);
    ctx->pc = 0x343FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343FF8u;
    // 0x343ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x343FF8u, 0x344000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344000u;
label_344000:
    // 0x344000: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x344000u;
    {
        const bool branch_taken_0x344000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x344004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344000u;
        // 0x344004: 0x260300b0  addiu       $v1, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344000) {
            ctx->pc = 0x344014u;
            goto label_344014;
        }
    }
    ctx->pc = 0x344008u;
    // 0x344008: 0xc0c4900  jal         func_312400
    ctx->pc = 0x344008u;
    SET_GPR_U32(ctx, 31, 0x344010u);
    ctx->pc = 0x34400Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344008u;
    // 0x34400c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x344008u, 0x344010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344010u;
label_344010:
    // 0x344010: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x344010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_344014:
    // 0x344014: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x344014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x344018: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x344018u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34401c: 0xf8410070  sqc2        $vf1, 0x70($v0)
    ctx->pc = 0x34401cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x344020: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x344020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x344024: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x344024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x344028: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x344028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x34402c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x34402cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x344030: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x344030u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x344034: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x344034u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x344038: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x344038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34403c: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x34403cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x344040: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x344040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x344044: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x344044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x344048: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x344048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34404c: 0xc7a5002c  lwc1        $f5, 0x2C($sp)
    ctx->pc = 0x34404cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x344050: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x344050u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x344054: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x344054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x344058: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x344058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x34405c: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x34405cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x344060: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x344060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x344064: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x344064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x344068: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x344068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34406c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x34406cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x344070: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x344070u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x344074: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x344074u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x344078: 0x46000004  c1          0x4
    ctx->pc = 0x344078u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x34407c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x34407cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x344080: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x344080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344084: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x344084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x344088: 0xe4800068  swc1        $f0, 0x68($a0)
    ctx->pc = 0x344088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x34408c: 0x3e00008  jr          $ra
    ctx->pc = 0x34408Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34408Cu;
        // 0x344090: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34408Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344094u;
    // 0x344094: 0x0  nop
    ctx->pc = 0x344094u;
    // NOP
    ctx->pc = 0x344098u;
}
