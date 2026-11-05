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

// Function: sub_001B8F40
// Address: 0x1b8f40 - 0x1b90a8
void sub_001B8F40_0x1b8f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8F40_0x1b8f40");
#endif

    switch (ctx->pc) {
        case 0x1b8f70u: goto label_1b8f70;
        case 0x1b9024u: goto label_1b9024;
        case 0x1b9048u: goto label_1b9048;
        case 0x1b9054u: goto label_1b9054;
        case 0x1b9060u: goto label_1b9060;
        case 0x1b9074u: goto label_1b9074;
        default: break;
    }

    ctx->pc = 0x1b8f40u;

    // 0x1b8f40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1b8f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1b8f44: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x1b8f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x1b8f48: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x1b8f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x1b8f4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b8f4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8f50: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x1b8f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x1b8f54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b8f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8f58: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x1b8f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x1b8f5c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1b8f5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8f60: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x1b8f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x1b8f64: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x1b8f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x1b8f68: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B8F68u;
    SET_GPR_U32(ctx, 31, 0x1B8F70u);
    ctx->pc = 0x1B8F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8F68u;
    // 0x1b8f6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B8F68u, 0x1B8F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8F70u;
label_1b8f70:
    // 0x1b8f70: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b8f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b8f74: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1b8f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b8f78: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1b8f78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8f7c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1b8f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1b8f80: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x1b8f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x1b8f84: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1b8f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1b8f88: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1b8f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1b8f8c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b8f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b8f90: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1b8f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1b8f94: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1b8f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1b8f98: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8F98u;
    {
        const bool branch_taken_0x1b8f98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F98u;
        // 0x1b8f9c: 0xae13003c  sw          $s3, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f98) {
            ctx->pc = 0x1B8FACu;
            goto label_1b8fac;
        }
    }
    ctx->pc = 0x1B8FA0u;
    // 0x1b8fa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8fa4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B8FA4u;
    {
        const bool branch_taken_0x1b8fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8FA4u;
        // 0x1b8fa8: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8fa4) {
            ctx->pc = 0x1B8FB0u;
            goto label_1b8fb0;
        }
    }
    ctx->pc = 0x1B8FACu;
label_1b8fac:
    // 0x1b8fac: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1b8facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_1b8fb0:
    // 0x1b8fb0: 0x8e630104  lw          $v1, 0x104($s3)
    ctx->pc = 0x1b8fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x1b8fb4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b8fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b8fb8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1b8fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1b8fbc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b8fbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8fc0: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1b8fc0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b8fc4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b8fc4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b8fc8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1b8fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b8fcc: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x1b8fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b8fd0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1b8fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b8fd4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1b8fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8fd8: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1b8fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8fdc: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x1b8fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b8fe0: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1b8fe0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1b8fe4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1b8fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1b8fe8: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1b8fe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1b8fec: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x1b8fecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1b8ff0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1b8ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b8ff4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1b8ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b8ff8: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1b8ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b8ffc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1b8ffcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1b9000: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1b9000u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1b9004: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1b9004u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1b9008: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1b9008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1b900c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b900cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9010: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b9010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9014: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b9014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9018: 0x8e621000  lw          $v0, 0x1000($s3)
    ctx->pc = 0x1b9018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x1b901c: 0xc06fb1e  jal         func_1BEC78
    ctx->pc = 0x1B901Cu;
    SET_GPR_U32(ctx, 31, 0x1B9024u);
    ctx->pc = 0x1B9020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B901Cu;
    // 0x1b9020: 0xac430068  sw          $v1, 0x68($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEC78u, 0x1B901Cu, 0x1B9024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9024u;
label_1b9024:
    // 0x1b9024: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1b9024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1b9028: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1b9028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1b902c: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x1b902cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b9030: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x1b9030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b9034: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x1b9034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1b9038: 0x8c50019c  lw          $s0, 0x19C($v0)
    ctx->pc = 0x1b9038u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 412)));
    // 0x1b903c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b903cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9040: 0xc06faee  jal         func_1BEBB8
    ctx->pc = 0x1B9040u;
    SET_GPR_U32(ctx, 31, 0x1B9048u);
    ctx->pc = 0x1B9044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9040u;
    // 0x1b9044: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x1B9040u, 0x1B9048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9048u;
label_1b9048:
    // 0x1b9048: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x1b9048u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b904c: 0xc095368  jal         func_254DA0
    ctx->pc = 0x1B904Cu;
    SET_GPR_U32(ctx, 31, 0x1B9054u);
    ctx->pc = 0x1B9050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B904Cu;
    // 0x1b9050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x1B904Cu, 0x1B9054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9054u;
label_1b9054:
    // 0x1b9054: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b9054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9058: 0xc06fad8  jal         func_1BEB60
    ctx->pc = 0x1B9058u;
    SET_GPR_U32(ctx, 31, 0x1B9060u);
    ctx->pc = 0x1B905Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9058u;
    // 0x1b905c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEB60u, 0x1B9058u, 0x1B9060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9060u;
label_1b9060:
    // 0x1b9060: 0x8e641000  lw          $a0, 0x1000($s3)
    ctx->pc = 0x1b9060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x1b9064: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b9064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9068: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b9068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b906c: 0xc071260  jal         func_1C4980
    ctx->pc = 0x1B906Cu;
    SET_GPR_U32(ctx, 31, 0x1B9074u);
    ctx->pc = 0x1B9070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B906Cu;
    // 0x1b9070: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4980u, 0x1B906Cu, 0x1B9074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9074u;
label_1b9074:
    // 0x1b9074: 0x26820f90  addiu       $v0, $s4, 0xF90
    ctx->pc = 0x1b9074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 3984));
    // 0x1b9078: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x1b9078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b907c: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x1b907cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1b9080: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1b9080u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b9084: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x1b9084u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b9088: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1b9088u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b908c: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x1b908cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1b9090: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1b9090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1b9094: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x1b9094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x1b9098: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1b9098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x1b909c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B909Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B90A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B909Cu;
        // 0x1b90a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B909Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B90A4u;
    // 0x1b90a4: 0x0  nop
    ctx->pc = 0x1b90a4u;
    // NOP
    ctx->pc = 0x1b90a8u;
}
