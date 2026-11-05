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

// Function: sub_001E3D70
// Address: 0x1e3d70 - 0x1e40b8
void sub_001E3D70_0x1e3d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3D70_0x1e3d70");
#endif

    switch (ctx->pc) {
        case 0x1e3de8u: goto label_1e3de8;
        case 0x1e3df4u: goto label_1e3df4;
        case 0x1e3ff4u: goto label_1e3ff4;
        case 0x1e4030u: goto label_1e4030;
        case 0x1e4058u: goto label_1e4058;
        case 0x1e4080u: goto label_1e4080;
        default: break;
    }

    ctx->pc = 0x1e3d70u;

    // 0x1e3d70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e3d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1e3d74: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1e3d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1e3d78: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1e3d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x1e3d7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e3d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3d80: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1e3d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1e3d84: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e3d84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3d88: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x1e3d88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1e3d8c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1e3d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e3d90: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1e3d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1e3d94: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x1e3d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1e3d98: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1e3d98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1e3d9c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e3d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e3da0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e3da0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3da4: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x1e3da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e3da8: 0xc446000c  lwc1        $f6, 0xC($v0)
    ctx->pc = 0x1e3da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1e3dac: 0xc467000c  lwc1        $f7, 0xC($v1)
    ctx->pc = 0x1e3dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1e3db0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1e3db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3db4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1e3db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3db8: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1e3db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3dbc: 0xc6230020  lwc1        $f3, 0x20($s1)
    ctx->pc = 0x1e3dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3dc0: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x1e3dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e3dc4: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x1e3dc4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1e3dc8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e3dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e3dcc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1e3dccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e3dd0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1e3dd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e3dd4: 0xe7a6000c  swc1        $f6, 0xC($sp)
    ctx->pc = 0x1e3dd4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e3dd8: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1e3dd8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e3ddc: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x1e3ddcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1e3de0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E3DE0u;
    SET_GPR_U32(ctx, 31, 0x1E3DE8u);
    ctx->pc = 0x1E3DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3DE0u;
    // 0x1e3de4: 0xe7a7001c  swc1        $f7, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E3DE0u, 0x1E3DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3DE8u;
label_1e3de8:
    // 0x1e3de8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e3de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3dec: 0xc078d78  jal         func_1E35E0
    ctx->pc = 0x1E3DECu;
    SET_GPR_U32(ctx, 31, 0x1E3DF4u);
    ctx->pc = 0x1E3DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3DECu;
    // 0x1e3df0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E35E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E35E0u, 0x1E3DECu, 0x1E3DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3DF4u;
label_1e3df4:
    // 0x1e3df4: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x1e3df4u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x1e3df8: 0xc6150020  lwc1        $f21, 0x20($s0)
    ctx->pc = 0x1e3df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e3dfc: 0x46002005  abs.s       $f0, $f4
    ctx->pc = 0x1e3dfcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[4]);
    // 0x1e3e00: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1e3e00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3e04: 0x0  nop
    ctx->pc = 0x1e3e04u;
    // NOP
    // 0x1e3e08: 0x4500005c  bc1f        . + 4 + (0x5C << 2)
    ctx->pc = 0x1E3E08u;
    {
        const bool branch_taken_0x1e3e08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E08u;
        // 0x1e3e0c: 0xc7a30010  lwc1        $f3, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3e08) {
            ctx->pc = 0x1E3F7Cu;
            goto label_1e3f7c;
        }
    }
    ctx->pc = 0x1E3E10u;
    // 0x1e3e10: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1e3e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e3e14: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1e3e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3e18: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1e3e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3e1c: 0x4603a8c2  mul.s       $f3, $f21, $f3
    ctx->pc = 0x1e3e1cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x1e3e20: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1e3e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3e24: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1e3e24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1e3e28: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1e3e28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x1e3e2c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1e3e2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1e3e30: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x1e3e30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1e3e34: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1e3e34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1e3e38: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1e3e38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1e3e3c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1e3e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1e3e40: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e3e40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3e44: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1e3e44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e3e48: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e3e48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3e4c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1e3e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3e50: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x1e3e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3e54: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e3e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e3e58: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x1e3e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3e5c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1e3e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e3e60: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1e3e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3e64: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x1e3e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3e68: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x1e3e68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1e3e6c: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x1e3e6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1e3e70: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1e3e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1e3e74: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x1e3e74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1e3e78: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e3e78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3e7c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e3e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3e80: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1e3e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e3e84: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e3e84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3e88: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1e3e88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e3e8c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e3e8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3e90: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1e3e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3e94: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1e3e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3e98: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1e3e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e3e9c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1e3e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3ea0: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1e3ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3ea4: 0xc7a4004c  lwc1        $f4, 0x4C($sp)
    ctx->pc = 0x1e3ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e3ea8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1e3ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1e3eac: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1e3eacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1e3eb0: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1e3eb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1e3eb4: 0xe7a4003c  swc1        $f4, 0x3C($sp)
    ctx->pc = 0x1e3eb4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1e3eb8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1e3eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3ebc: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1e3ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3ec0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e3ec0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e3ec4: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1e3ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3ec8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1e3ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3ecc: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e3eccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e3ed0: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x1e3ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3ed4: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1e3ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3ed8: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1e3ed8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e3edc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e3edcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3ee0: 0x0  nop
    ctx->pc = 0x1e3ee0u;
    // NOP
    // 0x1e3ee4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e3ee4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3ee8: 0x0  nop
    ctx->pc = 0x1e3ee8u;
    // NOP
    // 0x1e3eec: 0x4503006a  bc1tl       . + 4 + (0x6A << 2)
    ctx->pc = 0x1E3EECu;
    {
        const bool branch_taken_0x1e3eec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e3eec) {
            ctx->pc = 0x1E3EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E3EECu;
            // 0x1e3ef0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E4098u;
            goto label_1e4098;
        }
    }
    ctx->pc = 0x1E3EF4u;
    // 0x1e3ef4: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1e3ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3ef8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1e3ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3efc: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e3efcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e3f00: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1e3f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3f04: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1e3f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3f08: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e3f08u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e3f0c: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x1e3f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3f10: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1e3f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3f14: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1e3f14u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e3f18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e3f18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3f1c: 0x0  nop
    ctx->pc = 0x1e3f1cu;
    // NOP
    // 0x1e3f20: 0x4501005d  bc1t        . + 4 + (0x5D << 2)
    ctx->pc = 0x1E3F20u;
    {
        const bool branch_taken_0x1e3f20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F20u;
        // 0x1e3f24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f20) {
            ctx->pc = 0x1E4098u;
            goto label_1e4098;
        }
    }
    ctx->pc = 0x1E3F28u;
    // 0x1e3f28: 0x0  nop
    ctx->pc = 0x1e3f28u;
    // NOP
    // 0x1e3f2c: 0x0  nop
    ctx->pc = 0x1e3f2cu;
    // NOP
    // 0x1e3f30: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1e3f30u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e3f34: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1e3f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3f38: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x1e3f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3f3c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x1e3f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3f40: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x1e3f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e3f44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e3f44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e3f48: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x1e3f48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1e3f4c: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x1e3f4cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1e3f50: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1e3f50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1e3f54: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1e3f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1e3f58: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1e3f58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1e3f5c: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x1e3f5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1e3f60: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1e3f60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1e3f64: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1e3f64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e3f68: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1e3f68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e3f6c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e3f6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3f70: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e3f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3f74: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1E3F74u;
    {
        const bool branch_taken_0x1e3f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3f74) {
            ctx->pc = 0x1E3FECu;
            goto label_1e3fec;
        }
    }
    ctx->pc = 0x1E3F7Cu;
label_1e3f7c:
    // 0x1e3f7c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1e3f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e3f80: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1e3f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3f84: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1e3f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3f88: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1e3f88u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1e3f8c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1e3f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3f90: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1e3f90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1e3f94: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1e3f94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1e3f98: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1e3f98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1e3f9c: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x1e3f9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1e3fa0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1e3fa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1e3fa4: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1e3fa4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1e3fa8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1e3fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1e3fac: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e3facu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3fb0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1e3fb0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3fb4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e3fb4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3fb8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1e3fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3fbc: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x1e3fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3fc0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1e3fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e3fc4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1e3fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3fc8: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1e3fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3fcc: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x1e3fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3fd0: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x1e3fd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1e3fd4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1e3fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1e3fd8: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x1e3fd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1e3fdc: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x1e3fdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1e3fe0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e3fe0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3fe4: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e3fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3fe8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e3fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e3fec:
    // 0x1e3fec: 0xc078dca  jal         func_1E3728
    ctx->pc = 0x1E3FECu;
    SET_GPR_U32(ctx, 31, 0x1E3FF4u);
    ctx->pc = 0x1E3FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3FECu;
    // 0x1e3ff0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3728u, 0x1E3FECu, 0x1E3FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3FF4u;
label_1e3ff4:
    // 0x1e3ff4: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1E3FF4u;
    {
        const bool branch_taken_0x1e3ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3FF4u;
        // 0x1e3ff8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ff4) {
            ctx->pc = 0x1E4098u;
            goto label_1e4098;
        }
    }
    ctx->pc = 0x1E3FFCu;
    // 0x1e3ffc: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1e3ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4000: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x1e4000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e4004: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x1e4004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e4008: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e4008u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e400c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e400cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e4010: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x1e4010u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e4014: 0x4615ad42  mul.s       $f21, $f21, $f21
    ctx->pc = 0x1e4014u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x1e4018: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1e4018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e401c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x1e401cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e4020: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e4020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4024: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e4024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4028: 0xc078e8a  jal         func_1E3A28
    ctx->pc = 0x1E4028u;
    SET_GPR_U32(ctx, 31, 0x1E4030u);
    ctx->pc = 0x1E402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4028u;
    // 0x1e402c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A28u, 0x1E4028u, 0x1E4030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4030u;
label_1e4030:
    // 0x1e4030: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1e4030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4034: 0x0  nop
    ctx->pc = 0x1e4034u;
    // NOP
    // 0x1e4038: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x1E4038u;
    {
        const bool branch_taken_0x1e4038 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4038u;
        // 0x1e403c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4038) {
            ctx->pc = 0x1E4090u;
            goto label_1e4090;
        }
    }
    ctx->pc = 0x1E4040u;
    // 0x1e4040: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1e4040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e4044: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e4044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4048: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x1e4048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e404c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e404cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4050: 0xc078e8a  jal         func_1E3A28
    ctx->pc = 0x1E4050u;
    SET_GPR_U32(ctx, 31, 0x1E4058u);
    ctx->pc = 0x1E4054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4050u;
    // 0x1e4054: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A28u, 0x1E4050u, 0x1E4058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4058u;
label_1e4058:
    // 0x1e4058: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1e4058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e405c: 0x0  nop
    ctx->pc = 0x1e405cu;
    // NOP
    // 0x1e4060: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
    ctx->pc = 0x1E4060u;
    {
        const bool branch_taken_0x1e4060 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4060) {
            ctx->pc = 0x1E4064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E4060u;
            // 0x1e4064: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E4094u;
            goto label_1e4094;
        }
    }
    ctx->pc = 0x1E4068u;
    // 0x1e4068: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x1e4068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e406c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e406cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4070: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1e4070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e4074: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e4074u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e4078: 0xc078e8a  jal         func_1E3A28
    ctx->pc = 0x1E4078u;
    SET_GPR_U32(ctx, 31, 0x1E4080u);
    ctx->pc = 0x1E407Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4078u;
    // 0x1e407c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A28u, 0x1E4078u, 0x1E4080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4080u;
label_1e4080:
    // 0x1e4080: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1e4080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4084: 0x0  nop
    ctx->pc = 0x1e4084u;
    // NOP
    // 0x1e4088: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4088u;
    {
        const bool branch_taken_0x1e4088 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4088u;
        // 0x1e408c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4088) {
            ctx->pc = 0x1E4098u;
            goto label_1e4098;
        }
    }
    ctx->pc = 0x1E4090u;
label_1e4090:
    // 0x1e4090: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1e4090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4094:
    // 0x1e4094: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e4094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4098:
    // 0x1e4098: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1e4098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e409c: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1e409cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e40a0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1e40a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e40a4: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1e40a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1e40a8: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x1e40a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e40ac: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1e40acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e40b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E40B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E40B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40B0u;
        // 0x1e40b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E40B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E40B8u;
}
