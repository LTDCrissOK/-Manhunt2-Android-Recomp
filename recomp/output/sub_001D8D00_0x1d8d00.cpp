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

// Function: sub_001D8D00
// Address: 0x1d8d00 - 0x1d8f08
void sub_001D8D00_0x1d8d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8D00_0x1d8d00");
#endif

    switch (ctx->pc) {
        case 0x1d8d48u: goto label_1d8d48;
        case 0x1d8d50u: goto label_1d8d50;
        case 0x1d8d6cu: goto label_1d8d6c;
        case 0x1d8dacu: goto label_1d8dac;
        case 0x1d8e74u: goto label_1d8e74;
        default: break;
    }

    ctx->pc = 0x1d8d00u;

    // 0x1d8d00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1d8d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1d8d04: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1d8d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x1d8d08: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1d8d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1d8d0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d8d0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8d10: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1d8d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1d8d14: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d8d14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8d18: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x1d8d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x1d8d1c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1d8d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1d8d20: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1d8d20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1d8d24: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1d8d24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1d8d28: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1d8d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1d8d2c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d8d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d8d30: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1d8d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1d8d34: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1d8d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1d8d38: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1D8D38u;
    {
        const bool branch_taken_0x1d8d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8D38u;
        // 0x1d8d3c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8d38) {
            ctx->pc = 0x1D8E60u;
            goto label_1d8e60;
        }
    }
    ctx->pc = 0x1D8D40u;
    // 0x1d8d40: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1D8D40u;
    SET_GPR_U32(ctx, 31, 0x1D8D48u);
    ctx->pc = 0x1D8D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8D40u;
    // 0x1d8d44: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1D8D40u, 0x1D8D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8D48u;
label_1d8d48:
    // 0x1d8d48: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1D8D48u;
    SET_GPR_U32(ctx, 31, 0x1D8D50u);
    ctx->pc = 0x1D8D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8D48u;
    // 0x1d8d4c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1D8D48u, 0x1D8D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8D50u;
label_1d8d50:
    // 0x1d8d50: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x1d8d50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d8d54: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1d8d54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d8d58: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x1d8d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1d8d5c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1d8d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d8d60: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1d8d60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8d64: 0xc079d08  jal         func_1E7420
    ctx->pc = 0x1D8D64u;
    SET_GPR_U32(ctx, 31, 0x1D8D6Cu);
    ctx->pc = 0x1D8D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8D64u;
    // 0x1d8d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7420u, 0x1D8D64u, 0x1D8D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8D6Cu;
label_1d8d6c:
    // 0x1d8d6c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1d8d6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d8d70: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1d8d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d8d74: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1d8d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d8d78: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1d8d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d8d7c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1d8d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1d8d80: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1d8d80u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1d8d84: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1d8d84u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1d8d88: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1d8d88u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1d8d8c: 0x46000004  c1          0x4
    ctx->pc = 0x1d8d8cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1d8d90: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1d8d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1d8d94: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d8d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d8d98: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d8d98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d8d9c: 0x24a5d7b8  addiu       $a1, $a1, -0x2848
    ctx->pc = 0x1d8d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956984));
    // 0x1d8da0: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x1d8da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1d8da4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1D8DA4u;
    SET_GPR_U32(ctx, 31, 0x1D8DACu);
    ctx->pc = 0x1D8DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8DA4u;
    // 0x1d8da8: 0x46140542  mul.s       $f21, $f0, $f20 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1D8DA4u, 0x1D8DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8DACu;
label_1d8dac:
    // 0x1d8dac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d8dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d8db0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8DB0u;
    {
        const bool branch_taken_0x1d8db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8DB0u;
        // 0x1d8db4: 0xc7a30000  lwc1        $f3, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8db0) {
            ctx->pc = 0x1D8DC8u;
            goto label_1d8dc8;
        }
    }
    ctx->pc = 0x1D8DB8u;
    // 0x1d8db8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1d8db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1d8dbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d8dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8dc0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1D8DC0u;
    {
        const bool branch_taken_0x1d8dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8DC0u;
        // 0x1d8dc4: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8dc0) {
            ctx->pc = 0x1D8E34u;
            goto label_1d8e34;
        }
    }
    ctx->pc = 0x1D8DC8u;
label_1d8dc8:
    // 0x1d8dc8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1d8dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d8dcc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1d8dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8dd0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1d8dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d8dd4: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x1d8dd4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x1d8dd8: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1d8dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8ddc: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1d8ddcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1d8de0: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x1d8de0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x1d8de4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1d8de4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1d8de8: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x1d8de8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1d8dec: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1d8decu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1d8df0: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1d8df0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1d8df4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1d8df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1d8df8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1d8df8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d8dfc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1d8dfcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d8e00: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1d8e00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d8e04: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1d8e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d8e08: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1d8e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8e0c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1d8e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8e10: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x1d8e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d8e14: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x1d8e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d8e18: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1d8e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1d8e1c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1d8e1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1d8e20: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1d8e20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1d8e24: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x1d8e24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1d8e28: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1d8e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d8e2c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1d8e2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d8e30: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x1d8e30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
label_1d8e34:
    // 0x1d8e34: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x1d8e34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x1d8e38: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d8e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d8e3c: 0xe4550020  swc1        $f21, 0x20($v0)
    ctx->pc = 0x1d8e3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1d8e40: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x1d8e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x1d8e44: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1d8e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8e48: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1d8e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8e4c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1d8e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d8e50: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x1d8e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d8e54: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1d8e54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1d8e58: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1D8E58u;
    {
        const bool branch_taken_0x1d8e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E58u;
        // 0x1d8e5c: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e58) {
            ctx->pc = 0x1D8EBCu;
            goto label_1d8ebc;
        }
    }
    ctx->pc = 0x1D8E60u;
label_1d8e60:
    // 0x1d8e60: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x1d8e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d8e64: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D8E64u;
    {
        const bool branch_taken_0x1d8e64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E64u;
        // 0x1d8e68: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e64) {
            ctx->pc = 0x1D8EC8u;
            goto label_1d8ec8;
        }
    }
    ctx->pc = 0x1D8E6Cu;
    // 0x1d8e6c: 0xc07a1b4  jal         func_1E86D0
    ctx->pc = 0x1D8E6Cu;
    SET_GPR_U32(ctx, 31, 0x1D8E74u);
    ctx->pc = 0x1D8E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8E6Cu;
    // 0x1d8e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E86D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E86D0u, 0x1D8E6Cu, 0x1D8E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8E74u;
label_1d8e74:
    // 0x1d8e74: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1d8e74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d8e78: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1d8e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d8e7c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1d8e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1d8e80: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1d8e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1d8e84: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1d8e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1d8e88: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1d8e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1d8e8c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1d8e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d8e90: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1d8e90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d8e94: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1d8e94u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d8e98: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1d8e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d8e9c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1d8e9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8ea0: 0xf8610020  sqc2        $vf1, 0x20($v1)
    ctx->pc = 0x1d8ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d8ea4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1d8ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8ea8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1d8ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8eac: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1d8eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d8eb0: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x1d8eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d8eb4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1d8eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1d8eb8: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1d8eb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1d8ebc:
    // 0x1d8ebc: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x1d8ebcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1d8ec0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D8EC0u;
    {
        const bool branch_taken_0x1d8ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8EC0u;
        // 0x1d8ec4: 0xe623000c  swc1        $f3, 0xC($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ec0) {
            ctx->pc = 0x1D8EDCu;
            goto label_1d8edc;
        }
    }
    ctx->pc = 0x1D8EC8u;
label_1d8ec8:
    // 0x1d8ec8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1d8ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8ecc: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1d8eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1d8ed0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1d8ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1d8ed4: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1d8ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1d8ed8: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1d8ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1d8edc:
    // 0x1d8edc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d8edcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ee0: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1d8ee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d8ee4: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1d8ee4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1d8ee8: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1d8ee8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d8eec: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x1d8eecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1d8ef0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1d8ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d8ef4: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1d8ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d8ef8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1d8ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d8efc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8EFCu;
        // 0x1d8f00: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8F04u;
    // 0x1d8f04: 0x0  nop
    ctx->pc = 0x1d8f04u;
    // NOP
    ctx->pc = 0x1d8f08u;
}
