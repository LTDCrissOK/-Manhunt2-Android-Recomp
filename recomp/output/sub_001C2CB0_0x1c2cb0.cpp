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

// Function: sub_001C2CB0
// Address: 0x1c2cb0 - 0x1c2e20
void sub_001C2CB0_0x1c2cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2CB0_0x1c2cb0");
#endif

    switch (ctx->pc) {
        case 0x1c2cb0u: goto label_1c2cb0;
        case 0x1c2cb4u: goto label_1c2cb4;
        case 0x1c2cb8u: goto label_1c2cb8;
        case 0x1c2cbcu: goto label_1c2cbc;
        case 0x1c2cc0u: goto label_1c2cc0;
        case 0x1c2cc4u: goto label_1c2cc4;
        case 0x1c2cc8u: goto label_1c2cc8;
        case 0x1c2cccu: goto label_1c2ccc;
        case 0x1c2cd0u: goto label_1c2cd0;
        case 0x1c2cd4u: goto label_1c2cd4;
        case 0x1c2cd8u: goto label_1c2cd8;
        case 0x1c2cdcu: goto label_1c2cdc;
        case 0x1c2ce0u: goto label_1c2ce0;
        case 0x1c2ce4u: goto label_1c2ce4;
        case 0x1c2ce8u: goto label_1c2ce8;
        case 0x1c2cecu: goto label_1c2cec;
        case 0x1c2cf0u: goto label_1c2cf0;
        case 0x1c2cf4u: goto label_1c2cf4;
        case 0x1c2cf8u: goto label_1c2cf8;
        case 0x1c2cfcu: goto label_1c2cfc;
        case 0x1c2d00u: goto label_1c2d00;
        case 0x1c2d04u: goto label_1c2d04;
        case 0x1c2d08u: goto label_1c2d08;
        case 0x1c2d0cu: goto label_1c2d0c;
        case 0x1c2d10u: goto label_1c2d10;
        case 0x1c2d14u: goto label_1c2d14;
        case 0x1c2d18u: goto label_1c2d18;
        case 0x1c2d1cu: goto label_1c2d1c;
        case 0x1c2d20u: goto label_1c2d20;
        case 0x1c2d24u: goto label_1c2d24;
        case 0x1c2d28u: goto label_1c2d28;
        case 0x1c2d2cu: goto label_1c2d2c;
        case 0x1c2d30u: goto label_1c2d30;
        case 0x1c2d34u: goto label_1c2d34;
        case 0x1c2d38u: goto label_1c2d38;
        case 0x1c2d3cu: goto label_1c2d3c;
        case 0x1c2d40u: goto label_1c2d40;
        case 0x1c2d44u: goto label_1c2d44;
        case 0x1c2d48u: goto label_1c2d48;
        case 0x1c2d4cu: goto label_1c2d4c;
        case 0x1c2d50u: goto label_1c2d50;
        case 0x1c2d54u: goto label_1c2d54;
        case 0x1c2d58u: goto label_1c2d58;
        case 0x1c2d5cu: goto label_1c2d5c;
        case 0x1c2d60u: goto label_1c2d60;
        case 0x1c2d64u: goto label_1c2d64;
        case 0x1c2d68u: goto label_1c2d68;
        case 0x1c2d6cu: goto label_1c2d6c;
        case 0x1c2d70u: goto label_1c2d70;
        case 0x1c2d74u: goto label_1c2d74;
        case 0x1c2d78u: goto label_1c2d78;
        case 0x1c2d7cu: goto label_1c2d7c;
        case 0x1c2d80u: goto label_1c2d80;
        case 0x1c2d84u: goto label_1c2d84;
        case 0x1c2d88u: goto label_1c2d88;
        case 0x1c2d8cu: goto label_1c2d8c;
        case 0x1c2d90u: goto label_1c2d90;
        case 0x1c2d94u: goto label_1c2d94;
        case 0x1c2d98u: goto label_1c2d98;
        case 0x1c2d9cu: goto label_1c2d9c;
        case 0x1c2da0u: goto label_1c2da0;
        case 0x1c2da4u: goto label_1c2da4;
        case 0x1c2da8u: goto label_1c2da8;
        case 0x1c2dacu: goto label_1c2dac;
        case 0x1c2db0u: goto label_1c2db0;
        case 0x1c2db4u: goto label_1c2db4;
        case 0x1c2db8u: goto label_1c2db8;
        case 0x1c2dbcu: goto label_1c2dbc;
        case 0x1c2dc0u: goto label_1c2dc0;
        case 0x1c2dc4u: goto label_1c2dc4;
        case 0x1c2dc8u: goto label_1c2dc8;
        case 0x1c2dccu: goto label_1c2dcc;
        case 0x1c2dd0u: goto label_1c2dd0;
        case 0x1c2dd4u: goto label_1c2dd4;
        case 0x1c2dd8u: goto label_1c2dd8;
        case 0x1c2ddcu: goto label_1c2ddc;
        case 0x1c2de0u: goto label_1c2de0;
        case 0x1c2de4u: goto label_1c2de4;
        case 0x1c2de8u: goto label_1c2de8;
        case 0x1c2decu: goto label_1c2dec;
        case 0x1c2df0u: goto label_1c2df0;
        case 0x1c2df4u: goto label_1c2df4;
        case 0x1c2df8u: goto label_1c2df8;
        case 0x1c2dfcu: goto label_1c2dfc;
        case 0x1c2e00u: goto label_1c2e00;
        case 0x1c2e04u: goto label_1c2e04;
        case 0x1c2e08u: goto label_1c2e08;
        case 0x1c2e0cu: goto label_1c2e0c;
        case 0x1c2e10u: goto label_1c2e10;
        case 0x1c2e14u: goto label_1c2e14;
        case 0x1c2e18u: goto label_1c2e18;
        case 0x1c2e1cu: goto label_1c2e1c;
        default: break;
    }

    ctx->pc = 0x1c2cb0u;

label_1c2cb0:
    // 0x1c2cb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c2cb4:
    // 0x1c2cb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c2cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c2cb8:
    // 0x1c2cb8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1c2cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1c2cbc:
    // 0x1c2cbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2cbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c2cc0:
    // 0x1c2cc0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1c2cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1c2cc4:
    // 0x1c2cc4: 0xae0304b0  sw          $v1, 0x4B0($s0)
    ctx->pc = 0x1c2cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1200), GPR_U32(ctx, 3));
label_1c2cc8:
    // 0x1c2cc8: 0x260201e0  addiu       $v0, $s0, 0x1E0
    ctx->pc = 0x1c2cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
label_1c2ccc:
    // 0x1c2ccc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1c2cccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1c2cd0:
    // 0x1c2cd0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c2cd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c2cd4:
    // 0x1c2cd4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c2cd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1c2cd8:
    // 0x1c2cd8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c2cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c2cdc:
    // 0x1c2cdc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1c2cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c2ce0:
    // 0x1c2ce0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c2ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c2ce4:
    // 0x1c2ce4: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1c2ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c2ce8:
    // 0x1c2ce8: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x1c2ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1c2cec:
    // 0x1c2cec: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1c2cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c2cf0:
    // 0x1c2cf0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1c2cf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c2cf4:
    // 0x1c2cf4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1c2cf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c2cf8:
    // 0x1c2cf8: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1c2cf8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1c2cfc:
    // 0x1c2cfc: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1c2cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c2d00:
    // 0x1c2d00: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1c2d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c2d04:
    // 0x1c2d04: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1c2d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1c2d08:
    // 0x1c2d08: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c2d08u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1c2d0c:
    // 0x1c2d0c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c2d0cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_1c2d10:
    // 0x1c2d10: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x1c2d10u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_1c2d14:
    // 0x1c2d14: 0x46050144  c1          0x50144
    ctx->pc = 0x1c2d14u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
label_1c2d18:
    // 0x1c2d18: 0x460c2834  c.lt.s      $f5, $f12
    ctx->pc = 0x1c2d18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c2d1c:
    // 0x1c2d1c: 0x0  nop
    ctx->pc = 0x1c2d1cu;
    // NOP
label_1c2d20:
    // 0x1c2d20: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_1c2d24:
    if (ctx->pc == 0x1C2D24u) {
        ctx->pc = 0x1C2D28u;
        goto label_1c2d28;
    }
    ctx->pc = 0x1C2D20u;
    {
        const bool branch_taken_0x1c2d20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c2d20) {
            ctx->pc = 0x1C2D64u;
            goto label_1c2d64;
        }
    }
    ctx->pc = 0x1C2D28u;
label_1c2d28:
    // 0x1c2d28: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x1c2d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c2d2c:
    // 0x1c2d2c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1c2d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c2d30:
    // 0x1c2d30: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1c2d30u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1c2d34:
    // 0x1c2d34: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x1c2d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c2d38:
    // 0x1c2d38: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1c2d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c2d3c:
    // 0x1c2d3c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1c2d3cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_1c2d40:
    // 0x1c2d40: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x1c2d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c2d44:
    // 0x1c2d44: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1c2d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c2d48:
    // 0x1c2d48: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1c2d48u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1c2d4c:
    // 0x1c2d4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c2d4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c2d50:
    // 0x1c2d50: 0x0  nop
    ctx->pc = 0x1c2d50u;
    // NOP
label_1c2d54:
    // 0x1c2d54: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c2d54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c2d58:
    // 0x1c2d58: 0x0  nop
    ctx->pc = 0x1c2d58u;
    // NOP
label_1c2d5c:
    // 0x1c2d5c: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
label_1c2d60:
    if (ctx->pc == 0x1C2D60u) {
        ctx->pc = 0x1C2D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D5Cu;
        // 0x1c2d60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2D64u;
        goto label_1c2d64;
    }
    ctx->pc = 0x1C2D5Cu;
    {
        const bool branch_taken_0x1c2d5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C2D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D5Cu;
        // 0x1c2d60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d5c) {
            ctx->pc = 0x1C2E10u;
            goto label_1c2e10;
        }
    }
    ctx->pc = 0x1C2D64u;
label_1c2d64:
    // 0x1c2d64: 0x46056834  c.lt.s      $f13, $f5
    ctx->pc = 0x1c2d64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c2d68:
    // 0x1c2d68: 0x0  nop
    ctx->pc = 0x1c2d68u;
    // NOP
label_1c2d6c:
    // 0x1c2d6c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_1c2d70:
    if (ctx->pc == 0x1C2D70u) {
        ctx->pc = 0x1C2D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D6Cu;
        // 0x1c2d70: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2D74u;
        goto label_1c2d74;
    }
    ctx->pc = 0x1C2D6Cu;
    {
        const bool branch_taken_0x1c2d6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C2D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D6Cu;
        // 0x1c2d70: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d6c) {
            ctx->pc = 0x1C2DB4u;
            goto label_1c2db4;
        }
    }
    ctx->pc = 0x1C2D74u;
label_1c2d74:
    // 0x1c2d74: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x1c2d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c2d78:
    // 0x1c2d78: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1c2d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c2d7c:
    // 0x1c2d7c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1c2d7cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1c2d80:
    // 0x1c2d80: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x1c2d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c2d84:
    // 0x1c2d84: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1c2d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c2d88:
    // 0x1c2d88: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1c2d88u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_1c2d8c:
    // 0x1c2d8c: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x1c2d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c2d90:
    // 0x1c2d90: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1c2d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c2d94:
    // 0x1c2d94: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1c2d94u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1c2d98:
    // 0x1c2d98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c2d98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c2d9c:
    // 0x1c2d9c: 0x0  nop
    ctx->pc = 0x1c2d9cu;
    // NOP
label_1c2da0:
    // 0x1c2da0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c2da0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c2da4:
    // 0x1c2da4: 0x0  nop
    ctx->pc = 0x1c2da4u;
    // NOP
label_1c2da8:
    // 0x1c2da8: 0x45010019  bc1t        . + 4 + (0x19 << 2)
label_1c2dac:
    if (ctx->pc == 0x1C2DACu) {
        ctx->pc = 0x1C2DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DA8u;
        // 0x1c2dac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2DB0u;
        goto label_1c2db0;
    }
    ctx->pc = 0x1C2DA8u;
    {
        const bool branch_taken_0x1c2da8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C2DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DA8u;
        // 0x1c2dac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2da8) {
            ctx->pc = 0x1C2E10u;
            goto label_1c2e10;
        }
    }
    ctx->pc = 0x1C2DB0u;
label_1c2db0:
    // 0x1c2db0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1c2db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1c2db4:
    // 0x1c2db4: 0xc070f74  jal         func_1C3DD0
label_1c2db8:
    if (ctx->pc == 0x1C2DB8u) {
        ctx->pc = 0x1C2DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DB4u;
        // 0x1c2db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2DBCu;
        goto label_1c2dbc;
    }
    ctx->pc = 0x1C2DB4u;
    SET_GPR_U32(ctx, 31, 0x1C2DBCu);
    ctx->pc = 0x1C2DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2DB4u;
    // 0x1c2db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3DD0u, 0x1C2DB4u, 0x1C2DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2DBCu;
label_1c2dbc:
    // 0x1c2dbc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1c2dc0:
    if (ctx->pc == 0x1C2DC0u) {
        ctx->pc = 0x1C2DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DBCu;
        // 0x1c2dc0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2DC4u;
        goto label_1c2dc4;
    }
    ctx->pc = 0x1C2DBCu;
    {
        const bool branch_taken_0x1c2dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DBCu;
        // 0x1c2dc0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2dbc) {
            ctx->pc = 0x1C2DF8u;
            goto label_1c2df8;
        }
    }
    ctx->pc = 0x1C2DC4u;
label_1c2dc4:
    // 0x1c2dc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c2dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2dc8:
    // 0x1c2dc8: 0xc07023a  jal         func_1C08E8
label_1c2dcc:
    if (ctx->pc == 0x1C2DCCu) {
        ctx->pc = 0x1C2DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DC8u;
        // 0x1c2dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2DD0u;
        goto label_1c2dd0;
    }
    ctx->pc = 0x1C2DC8u;
    SET_GPR_U32(ctx, 31, 0x1C2DD0u);
    ctx->pc = 0x1C2DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2DC8u;
    // 0x1c2dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C08E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C08E8u, 0x1C2DC8u, 0x1C2DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2DD0u;
label_1c2dd0:
    // 0x1c2dd0: 0x8e030394  lw          $v1, 0x394($s0)
    ctx->pc = 0x1c2dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 916)));
label_1c2dd4:
    // 0x1c2dd4: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1c2dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1c2dd8:
    // 0x1c2dd8: 0x40f809  jalr        $v0
label_1c2ddc:
    if (ctx->pc == 0x1C2DDCu) {
        ctx->pc = 0x1C2DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DD8u;
        // 0x1c2ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2DE0u;
        goto label_1c2de0;
    }
    ctx->pc = 0x1C2DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C2DE0u);
        ctx->pc = 0x1C2DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DD8u;
        // 0x1c2ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2DD8u, 0x1C2DE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C2DE0u;
label_1c2de0:
    // 0x1c2de0: 0xc06f894  jal         func_1BE250
label_1c2de4:
    if (ctx->pc == 0x1C2DE4u) {
        ctx->pc = 0x1C2DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DE0u;
        // 0x1c2de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2DE8u;
        goto label_1c2de8;
    }
    ctx->pc = 0x1C2DE0u;
    SET_GPR_U32(ctx, 31, 0x1C2DE8u);
    ctx->pc = 0x1C2DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2DE0u;
    // 0x1c2de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE250u, 0x1C2DE0u, 0x1C2DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2DE8u;
label_1c2de8:
    // 0x1c2de8: 0x8e030338  lw          $v1, 0x338($s0)
    ctx->pc = 0x1c2de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_1c2dec:
    // 0x1c2dec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c2decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c2df0:
    // 0x1c2df0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c2df4:
    if (ctx->pc == 0x1C2DF4u) {
        ctx->pc = 0x1C2DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DF0u;
        // 0x1c2df4: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2DF8u;
        goto label_1c2df8;
    }
    ctx->pc = 0x1C2DF0u;
    {
        const bool branch_taken_0x1c2df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DF0u;
        // 0x1c2df4: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2df0) {
            ctx->pc = 0x1C2E10u;
            goto label_1c2e10;
        }
    }
    ctx->pc = 0x1C2DF8u;
label_1c2df8:
    // 0x1c2df8: 0x8e030394  lw          $v1, 0x394($s0)
    ctx->pc = 0x1c2df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 916)));
label_1c2dfc:
    // 0x1c2dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c2e00:
    // 0x1c2e00: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1c2e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1c2e04:
    // 0x1c2e04: 0x40f809  jalr        $v0
label_1c2e08:
    if (ctx->pc == 0x1C2E08u) {
        ctx->pc = 0x1C2E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E04u;
        // 0x1c2e08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2E0Cu;
        goto label_1c2e0c;
    }
    ctx->pc = 0x1C2E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C2E0Cu);
        ctx->pc = 0x1C2E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E04u;
        // 0x1c2e08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2E04u, 0x1C2E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C2E0Cu;
label_1c2e0c:
    // 0x1c2e0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c2e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c2e10:
    // 0x1c2e10: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1c2e10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c2e14:
    // 0x1c2e14: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c2e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1c2e18:
    // 0x1c2e18: 0x3e00008  jr          $ra
label_1c2e1c:
    if (ctx->pc == 0x1C2E1Cu) {
        ctx->pc = 0x1C2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E18u;
        // 0x1c2e1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2E20u;
        goto label_fallthrough_0x1c2e18;
    }
    ctx->pc = 0x1C2E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E18u;
        // 0x1c2e1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c2e18:
    ctx->pc = 0x1C2E20u;
}
