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

// Function: sub_001C1CB0
// Address: 0x1c1cb0 - 0x1c1eb0
void sub_001C1CB0_0x1c1cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1CB0_0x1c1cb0");
#endif

    switch (ctx->pc) {
        case 0x1c1cb0u: goto label_1c1cb0;
        case 0x1c1cb4u: goto label_1c1cb4;
        case 0x1c1cb8u: goto label_1c1cb8;
        case 0x1c1cbcu: goto label_1c1cbc;
        case 0x1c1cc0u: goto label_1c1cc0;
        case 0x1c1cc4u: goto label_1c1cc4;
        case 0x1c1cc8u: goto label_1c1cc8;
        case 0x1c1cccu: goto label_1c1ccc;
        case 0x1c1cd0u: goto label_1c1cd0;
        case 0x1c1cd4u: goto label_1c1cd4;
        case 0x1c1cd8u: goto label_1c1cd8;
        case 0x1c1cdcu: goto label_1c1cdc;
        case 0x1c1ce0u: goto label_1c1ce0;
        case 0x1c1ce4u: goto label_1c1ce4;
        case 0x1c1ce8u: goto label_1c1ce8;
        case 0x1c1cecu: goto label_1c1cec;
        case 0x1c1cf0u: goto label_1c1cf0;
        case 0x1c1cf4u: goto label_1c1cf4;
        case 0x1c1cf8u: goto label_1c1cf8;
        case 0x1c1cfcu: goto label_1c1cfc;
        case 0x1c1d00u: goto label_1c1d00;
        case 0x1c1d04u: goto label_1c1d04;
        case 0x1c1d08u: goto label_1c1d08;
        case 0x1c1d0cu: goto label_1c1d0c;
        case 0x1c1d10u: goto label_1c1d10;
        case 0x1c1d14u: goto label_1c1d14;
        case 0x1c1d18u: goto label_1c1d18;
        case 0x1c1d1cu: goto label_1c1d1c;
        case 0x1c1d20u: goto label_1c1d20;
        case 0x1c1d24u: goto label_1c1d24;
        case 0x1c1d28u: goto label_1c1d28;
        case 0x1c1d2cu: goto label_1c1d2c;
        case 0x1c1d30u: goto label_1c1d30;
        case 0x1c1d34u: goto label_1c1d34;
        case 0x1c1d38u: goto label_1c1d38;
        case 0x1c1d3cu: goto label_1c1d3c;
        case 0x1c1d40u: goto label_1c1d40;
        case 0x1c1d44u: goto label_1c1d44;
        case 0x1c1d48u: goto label_1c1d48;
        case 0x1c1d4cu: goto label_1c1d4c;
        case 0x1c1d50u: goto label_1c1d50;
        case 0x1c1d54u: goto label_1c1d54;
        case 0x1c1d58u: goto label_1c1d58;
        case 0x1c1d5cu: goto label_1c1d5c;
        case 0x1c1d60u: goto label_1c1d60;
        case 0x1c1d64u: goto label_1c1d64;
        case 0x1c1d68u: goto label_1c1d68;
        case 0x1c1d6cu: goto label_1c1d6c;
        case 0x1c1d70u: goto label_1c1d70;
        case 0x1c1d74u: goto label_1c1d74;
        case 0x1c1d78u: goto label_1c1d78;
        case 0x1c1d7cu: goto label_1c1d7c;
        case 0x1c1d80u: goto label_1c1d80;
        case 0x1c1d84u: goto label_1c1d84;
        case 0x1c1d88u: goto label_1c1d88;
        case 0x1c1d8cu: goto label_1c1d8c;
        case 0x1c1d90u: goto label_1c1d90;
        case 0x1c1d94u: goto label_1c1d94;
        case 0x1c1d98u: goto label_1c1d98;
        case 0x1c1d9cu: goto label_1c1d9c;
        case 0x1c1da0u: goto label_1c1da0;
        case 0x1c1da4u: goto label_1c1da4;
        case 0x1c1da8u: goto label_1c1da8;
        case 0x1c1dacu: goto label_1c1dac;
        case 0x1c1db0u: goto label_1c1db0;
        case 0x1c1db4u: goto label_1c1db4;
        case 0x1c1db8u: goto label_1c1db8;
        case 0x1c1dbcu: goto label_1c1dbc;
        case 0x1c1dc0u: goto label_1c1dc0;
        case 0x1c1dc4u: goto label_1c1dc4;
        case 0x1c1dc8u: goto label_1c1dc8;
        case 0x1c1dccu: goto label_1c1dcc;
        case 0x1c1dd0u: goto label_1c1dd0;
        case 0x1c1dd4u: goto label_1c1dd4;
        case 0x1c1dd8u: goto label_1c1dd8;
        case 0x1c1ddcu: goto label_1c1ddc;
        case 0x1c1de0u: goto label_1c1de0;
        case 0x1c1de4u: goto label_1c1de4;
        case 0x1c1de8u: goto label_1c1de8;
        case 0x1c1decu: goto label_1c1dec;
        case 0x1c1df0u: goto label_1c1df0;
        case 0x1c1df4u: goto label_1c1df4;
        case 0x1c1df8u: goto label_1c1df8;
        case 0x1c1dfcu: goto label_1c1dfc;
        case 0x1c1e00u: goto label_1c1e00;
        case 0x1c1e04u: goto label_1c1e04;
        case 0x1c1e08u: goto label_1c1e08;
        case 0x1c1e0cu: goto label_1c1e0c;
        case 0x1c1e10u: goto label_1c1e10;
        case 0x1c1e14u: goto label_1c1e14;
        case 0x1c1e18u: goto label_1c1e18;
        case 0x1c1e1cu: goto label_1c1e1c;
        case 0x1c1e20u: goto label_1c1e20;
        case 0x1c1e24u: goto label_1c1e24;
        case 0x1c1e28u: goto label_1c1e28;
        case 0x1c1e2cu: goto label_1c1e2c;
        case 0x1c1e30u: goto label_1c1e30;
        case 0x1c1e34u: goto label_1c1e34;
        case 0x1c1e38u: goto label_1c1e38;
        case 0x1c1e3cu: goto label_1c1e3c;
        case 0x1c1e40u: goto label_1c1e40;
        case 0x1c1e44u: goto label_1c1e44;
        case 0x1c1e48u: goto label_1c1e48;
        case 0x1c1e4cu: goto label_1c1e4c;
        case 0x1c1e50u: goto label_1c1e50;
        case 0x1c1e54u: goto label_1c1e54;
        case 0x1c1e58u: goto label_1c1e58;
        case 0x1c1e5cu: goto label_1c1e5c;
        case 0x1c1e60u: goto label_1c1e60;
        case 0x1c1e64u: goto label_1c1e64;
        case 0x1c1e68u: goto label_1c1e68;
        case 0x1c1e6cu: goto label_1c1e6c;
        case 0x1c1e70u: goto label_1c1e70;
        case 0x1c1e74u: goto label_1c1e74;
        case 0x1c1e78u: goto label_1c1e78;
        case 0x1c1e7cu: goto label_1c1e7c;
        case 0x1c1e80u: goto label_1c1e80;
        case 0x1c1e84u: goto label_1c1e84;
        case 0x1c1e88u: goto label_1c1e88;
        case 0x1c1e8cu: goto label_1c1e8c;
        case 0x1c1e90u: goto label_1c1e90;
        case 0x1c1e94u: goto label_1c1e94;
        case 0x1c1e98u: goto label_1c1e98;
        case 0x1c1e9cu: goto label_1c1e9c;
        case 0x1c1ea0u: goto label_1c1ea0;
        case 0x1c1ea4u: goto label_1c1ea4;
        case 0x1c1ea8u: goto label_1c1ea8;
        case 0x1c1eacu: goto label_1c1eac;
        default: break;
    }

    ctx->pc = 0x1c1cb0u;

label_1c1cb0:
    // 0x1c1cb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c1cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1c1cb4:
    // 0x1c1cb4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c1cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c1cb8:
    // 0x1c1cb8: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x1c1cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_1c1cbc:
    // 0x1c1cbc: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1c1cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_1c1cc0:
    // 0x1c1cc0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c1cc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1cc4:
    // 0x1c1cc4: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1c1cc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1c1cc8:
    // 0x1c1cc8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c1cc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c1ccc:
    // 0x1c1ccc: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1c1cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_1c1cd0:
    // 0x1c1cd0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1c1cd0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1c1cd4:
    // 0x1c1cd4: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1c1cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1c1cd8:
    // 0x1c1cd8: 0x266301e0  addiu       $v1, $s3, 0x1E0
    ctx->pc = 0x1c1cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
label_1c1cdc:
    // 0x1c1cdc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1c1cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1c1ce0:
    // 0x1c1ce0: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x1c1ce0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1c1ce4:
    // 0x1c1ce4: 0xae6204b0  sw          $v0, 0x4B0($s3)
    ctx->pc = 0x1c1ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1200), GPR_U32(ctx, 2));
label_1c1ce8:
    // 0x1c1ce8: 0xae6004d0  sw          $zero, 0x4D0($s3)
    ctx->pc = 0x1c1ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1232), GPR_U32(ctx, 0));
label_1c1cec:
    // 0x1c1cec: 0xae600338  sw          $zero, 0x338($s3)
    ctx->pc = 0x1c1cecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 824), GPR_U32(ctx, 0));
label_1c1cf0:
    // 0x1c1cf0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1c1cf0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c1cf4:
    // 0x1c1cf4: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1c1cf4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1c1cf8:
    // 0x1c1cf8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c1cf8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1c1cfc:
    // 0x1c1cfc: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c1cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c1d00:
    // 0x1c1d00: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1c1d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c1d04:
    // 0x1c1d04: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c1d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c1d08:
    // 0x1c1d08: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1c1d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c1d0c:
    // 0x1c1d0c: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x1c1d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1c1d10:
    // 0x1c1d10: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1c1d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c1d14:
    // 0x1c1d14: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1c1d14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c1d18:
    // 0x1c1d18: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1c1d18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c1d1c:
    // 0x1c1d1c: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1c1d1cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1c1d20:
    // 0x1c1d20: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1c1d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c1d24:
    // 0x1c1d24: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1c1d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c1d28:
    // 0x1c1d28: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1c1d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1c1d2c:
    // 0x1c1d2c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c1d2cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1c1d30:
    // 0x1c1d30: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c1d30u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_1c1d34:
    // 0x1c1d34: 0x4604255c  madd.s      $f21, $f4, $f4
    ctx->pc = 0x1c1d34u;
    ctx->f[21] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_1c1d38:
    // 0x1c1d38: 0x46150544  c1          0x150544
    ctx->pc = 0x1c1d38u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
label_1c1d3c:
    // 0x1c1d3c: 0x26700310  addiu       $s0, $s3, 0x310
    ctx->pc = 0x1c1d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
label_1c1d40:
    // 0x1c1d40: 0xc6600350  lwc1        $f0, 0x350($s3)
    ctx->pc = 0x1c1d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c1d44:
    // 0x1c1d44: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c1d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c1d48:
    // 0x1c1d48: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1c1d48u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1c1d4c:
    // 0x1c1d4c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1c1d50:
    if (ctx->pc == 0x1C1D50u) {
        ctx->pc = 0x1C1D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D4Cu;
        // 0x1c1d50: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D54u;
        goto label_1c1d54;
    }
    ctx->pc = 0x1C1D4Cu;
    {
        const bool branch_taken_0x1c1d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D4Cu;
        // 0x1c1d50: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d4c) {
            ctx->pc = 0x1C1D70u;
            goto label_1c1d70;
        }
    }
    ctx->pc = 0x1C1D54u;
label_1c1d54:
    // 0x1c1d54: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1c1d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c1d58:
    // 0x1c1d58: 0xc0f61e8  jal         func_3D87A0
label_1c1d5c:
    if (ctx->pc == 0x1C1D5Cu) {
        ctx->pc = 0x1C1D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D58u;
        // 0x1c1d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D60u;
        goto label_1c1d60;
    }
    ctx->pc = 0x1C1D58u;
    SET_GPR_U32(ctx, 31, 0x1C1D60u);
    ctx->pc = 0x1C1D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D58u;
    // 0x1c1d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1C1D58u, 0x1C1D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D60u;
label_1c1d60:
    // 0x1c1d60: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c1d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c1d64:
    // 0x1c1d64: 0x0  nop
    ctx->pc = 0x1c1d64u;
    // NOP
label_1c1d68:
    // 0x1c1d68: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_1c1d6c:
    if (ctx->pc == 0x1C1D6Cu) {
        ctx->pc = 0x1C1D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D68u;
        // 0x1c1d6c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D70u;
        goto label_1c1d70;
    }
    ctx->pc = 0x1C1D68u;
    {
        const bool branch_taken_0x1c1d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1d68) {
            ctx->pc = 0x1C1D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1D68u;
            // 0x1c1d6c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1d58;
        }
    }
    ctx->pc = 0x1C1D70u;
label_1c1d70:
    // 0x1c1d70: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x1c1d70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c1d74:
    // 0x1c1d74: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1c1d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1c1d78:
    // 0x1c1d78: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c1d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1c1d7c:
    // 0x1c1d7c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1c1d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1c1d80:
    // 0x1c1d80: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1c1d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1c1d84:
    // 0x1c1d84: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1c1d88:
    if (ctx->pc == 0x1C1D88u) {
        ctx->pc = 0x1C1D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D84u;
        // 0x1c1d88: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D8Cu;
        goto label_1c1d8c;
    }
    ctx->pc = 0x1C1D84u;
    {
        const bool branch_taken_0x1c1d84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D84u;
        // 0x1c1d88: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d84) {
            ctx->pc = 0x1C1DA8u;
            goto label_1c1da8;
        }
    }
    ctx->pc = 0x1C1D8Cu;
label_1c1d8c:
    // 0x1c1d8c: 0x8e630394  lw          $v1, 0x394($s3)
    ctx->pc = 0x1c1d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 916)));
label_1c1d90:
    // 0x1c1d90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c1d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1d94:
    // 0x1c1d94: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1c1d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1c1d98:
    // 0x1c1d98: 0x40f809  jalr        $v0
label_1c1d9c:
    if (ctx->pc == 0x1C1D9Cu) {
        ctx->pc = 0x1C1D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D98u;
        // 0x1c1d9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1DA0u;
        goto label_1c1da0;
    }
    ctx->pc = 0x1C1D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1DA0u);
        ctx->pc = 0x1C1D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D98u;
        // 0x1c1d9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1D98u, 0x1C1DA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C1DA0u;
label_1c1da0:
    // 0x1c1da0: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1c1da4:
    if (ctx->pc == 0x1C1DA4u) {
        ctx->pc = 0x1C1DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1DA0u;
        // 0x1c1da4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1DA8u;
        goto label_1c1da8;
    }
    ctx->pc = 0x1C1DA0u;
    {
        const bool branch_taken_0x1c1da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1DA0u;
        // 0x1c1da4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1da0) {
            ctx->pc = 0x1C1E8Cu;
            goto label_1c1e8c;
        }
    }
    ctx->pc = 0x1C1DA8u;
label_1c1da8:
    // 0x1c1da8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c1da8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1dac:
    // 0x1c1dac: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1c1dacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1c1db0:
    // 0x1c1db0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1c1db0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1c1db4:
    // 0x1c1db4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1c1db4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1c1db8:
    // 0x1c1db8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c1db8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_1c1dbc:
    // 0x1c1dbc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c1dbcu;
    // VWAITQ (Q already resolved in this runtime)
label_1c1dc0:
    // 0x1c1dc0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1c1dc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1c1dc4:
    // 0x1c1dc4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c1dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c1dc8:
    // 0x1c1dc8: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x1c1dc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1c1dcc:
    // 0x1c1dcc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c1dccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1dd0:
    // 0x1c1dd0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c1dd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1c1dd4:
    // 0x1c1dd4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1c1dd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1c1dd8:
    // 0x1c1dd8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c1dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c1ddc:
    // 0x1c1ddc: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1c1ddcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1c1de0:
    // 0x1c1de0: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1c1de0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1de4:
    // 0x1c1de4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c1de4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1c1de8:
    // 0x1c1de8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1c1de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c1dec:
    // 0x1c1dec: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x1c1decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c1df0:
    // 0x1c1df0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1c1df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c1df4:
    // 0x1c1df4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1c1df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c1df8:
    // 0x1c1df8: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1c1df8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c1dfc:
    // 0x1c1dfc: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c1dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c1e00:
    // 0x1c1e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1e04:
    // 0x1c1e04: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x1c1e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c1e08:
    // 0x1c1e08: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x1c1e08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1c1e0c:
    // 0x1c1e0c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1c1e0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1c1e10:
    // 0x1c1e10: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1c1e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1c1e14:
    // 0x1c1e14: 0xc0f6a96  jal         func_3DAA58
label_1c1e18:
    if (ctx->pc == 0x1C1E18u) {
        ctx->pc = 0x1C1E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E14u;
        // 0x1c1e18: 0xe7a30010  swc1        $f3, 0x10($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E1Cu;
        goto label_1c1e1c;
    }
    ctx->pc = 0x1C1E14u;
    SET_GPR_U32(ctx, 31, 0x1C1E1Cu);
    ctx->pc = 0x1C1E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E14u;
    // 0x1c1e18: 0xe7a30010  swc1        $f3, 0x10($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C1E14u, 0x1C1E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E1Cu;
label_1c1e1c:
    // 0x1c1e1c: 0x3c110043  lui         $s1, 0x43
    ctx->pc = 0x1c1e1cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)67 << 16));
label_1c1e20:
    // 0x1c1e20: 0xae6004d0  sw          $zero, 0x4D0($s3)
    ctx->pc = 0x1c1e20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1232), GPR_U32(ctx, 0));
label_1c1e24:
    // 0x1c1e24: 0x26310f90  addiu       $s1, $s1, 0xF90
    ctx->pc = 0x1c1e24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3984));
label_1c1e28:
    // 0x1c1e28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c1e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c1e2c:
    // 0x1c1e2c: 0xafb10048  sw          $s1, 0x48($sp)
    ctx->pc = 0x1c1e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 17));
label_1c1e30:
    // 0x1c1e30: 0x266400f0  addiu       $a0, $s3, 0xF0
    ctx->pc = 0x1c1e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
label_1c1e34:
    // 0x1c1e34: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1c1e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1c1e38:
    // 0x1c1e38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c1e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1e3c:
    // 0x1c1e3c: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x1c1e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
label_1c1e40:
    // 0x1c1e40: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1c1e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c1e44:
    // 0x1c1e44: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c1e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c1e48:
    // 0x1c1e48: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1c1e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c1e4c:
    // 0x1c1e4c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1c1e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1c1e50:
    // 0x1c1e50: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1c1e50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1c1e54:
    // 0x1c1e54: 0xc06fb58  jal         func_1BED60
label_1c1e58:
    if (ctx->pc == 0x1C1E58u) {
        ctx->pc = 0x1C1E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E54u;
        // 0x1c1e58: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E5Cu;
        goto label_1c1e5c;
    }
    ctx->pc = 0x1C1E54u;
    SET_GPR_U32(ctx, 31, 0x1C1E5Cu);
    ctx->pc = 0x1C1E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E54u;
    // 0x1c1e58: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED60u, 0x1C1E54u, 0x1C1E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E5Cu;
label_1c1e5c:
    // 0x1c1e5c: 0x26640110  addiu       $a0, $s3, 0x110
    ctx->pc = 0x1c1e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
label_1c1e60:
    // 0x1c1e60: 0xc06fb58  jal         func_1BED60
label_1c1e64:
    if (ctx->pc == 0x1C1E64u) {
        ctx->pc = 0x1C1E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E60u;
        // 0x1c1e64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E68u;
        goto label_1c1e68;
    }
    ctx->pc = 0x1C1E60u;
    SET_GPR_U32(ctx, 31, 0x1C1E68u);
    ctx->pc = 0x1C1E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E60u;
    // 0x1c1e64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED60u, 0x1C1E60u, 0x1C1E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E68u;
label_1c1e68:
    // 0x1c1e68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c1e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1e6c:
    // 0x1c1e6c: 0xc06fb58  jal         func_1BED60
label_1c1e70:
    if (ctx->pc == 0x1C1E70u) {
        ctx->pc = 0x1C1E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E6Cu;
        // 0x1c1e70: 0x26640130  addiu       $a0, $s3, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E74u;
        goto label_1c1e74;
    }
    ctx->pc = 0x1C1E6Cu;
    SET_GPR_U32(ctx, 31, 0x1C1E74u);
    ctx->pc = 0x1C1E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E6Cu;
    // 0x1c1e70: 0x26640130  addiu       $a0, $s3, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED60u, 0x1C1E6Cu, 0x1C1E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E74u;
label_1c1e74:
    // 0x1c1e74: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1c1e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1c1e78:
    // 0x1c1e78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c1e78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c1e7c:
    // 0x1c1e7c: 0xc070894  jal         func_1C2250
label_1c1e80:
    if (ctx->pc == 0x1C1E80u) {
        ctx->pc = 0x1C1E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E7Cu;
        // 0x1c1e80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E84u;
        goto label_1c1e84;
    }
    ctx->pc = 0x1C1E7Cu;
    SET_GPR_U32(ctx, 31, 0x1C1E84u);
    ctx->pc = 0x1C1E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E7Cu;
    // 0x1c1e80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C1E7Cu, 0x1C1E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E84u;
label_1c1e84:
    // 0x1c1e84: 0xafb10048  sw          $s1, 0x48($sp)
    ctx->pc = 0x1c1e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 17));
label_1c1e88:
    // 0x1c1e88: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1c1e88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1c1e8c:
    // 0x1c1e8c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1c1e8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1c1e90:
    // 0x1c1e90: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1c1e90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1c1e94:
    // 0x1c1e94: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x1c1e94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1c1e98:
    // 0x1c1e98: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1c1e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1c1e9c:
    // 0x1c1e9c: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x1c1e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c1ea0:
    // 0x1c1ea0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1c1ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c1ea4:
    // 0x1c1ea4: 0x3e00008  jr          $ra
label_1c1ea8:
    if (ctx->pc == 0x1C1EA8u) {
        ctx->pc = 0x1C1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1EA4u;
        // 0x1c1ea8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1EACu;
        goto label_1c1eac;
    }
    ctx->pc = 0x1C1EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1EA4u;
        // 0x1c1ea8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1EACu;
label_1c1eac:
    // 0x1c1eac: 0x0  nop
    ctx->pc = 0x1c1eacu;
    // NOP
    ctx->pc = 0x1c1eb0u;
}
