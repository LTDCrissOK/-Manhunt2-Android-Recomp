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

// Function: sub_002D1D78
// Address: 0x2d1d78 - 0x2d22a0
void sub_002D1D78_0x2d1d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1D78_0x2d1d78");
#endif

    switch (ctx->pc) {
        case 0x2d1e18u: goto label_2d1e18;
        case 0x2d1e2cu: goto label_2d1e2c;
        case 0x2d1f28u: goto label_2d1f28;
        case 0x2d1fa0u: goto label_2d1fa0;
        case 0x2d2018u: goto label_2d2018;
        case 0x2d2090u: goto label_2d2090;
        case 0x2d217cu: goto label_2d217c;
        case 0x2d2190u: goto label_2d2190;
        case 0x2d21b8u: goto label_2d21b8;
        case 0x2d21d0u: goto label_2d21d0;
        case 0x2d21f8u: goto label_2d21f8;
        case 0x2d2210u: goto label_2d2210;
        case 0x2d2238u: goto label_2d2238;
        case 0x2d2250u: goto label_2d2250;
        case 0x2d227cu: goto label_2d227c;
        default: break;
    }

    ctx->pc = 0x2d1d78u;

    // 0x2d1d78: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2d1d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2d1d7c: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x2d1d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x2d1d80: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2d1d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2d1d84: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d1d84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d88: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2d1d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x2d1d8c: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2d1d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2d1d90: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2d1d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2d1d94: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2d1d94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2d1d98: 0x92620014  lbu         $v0, 0x14($s3)
    ctx->pc = 0x2d1d98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2d1d9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1D9Cu;
    {
        const bool branch_taken_0x2d1d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1d9c) {
            ctx->pc = 0x2D1DACu;
            goto label_2d1dac;
        }
    }
    ctx->pc = 0x2D1DA4u;
    // 0x2d1da4: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2D1DA4u;
    {
        const bool branch_taken_0x2d1da4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1DA4u;
        // 0x2d1da8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1da4) {
            ctx->pc = 0x2D1E48u;
            goto label_2d1e48;
        }
    }
    ctx->pc = 0x2D1DACu;
label_2d1dac:
    // 0x2d1dac: 0x10a00024  beqz        $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D1DACu;
    {
        const bool branch_taken_0x2d1dac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1DACu;
        // 0x2d1db0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1dac) {
            ctx->pc = 0x2D1E40u;
            goto label_2d1e40;
        }
    }
    ctx->pc = 0x2D1DB4u;
    // 0x2d1db4: 0xc6620030  lwc1        $f2, 0x30($s3)
    ctx->pc = 0x2d1db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d1db8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2d1db8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d1dbc: 0x0  nop
    ctx->pc = 0x2d1dbcu;
    // NOP
    // 0x2d1dc0: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x2d1dc0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1dc4: 0x0  nop
    ctx->pc = 0x2d1dc4u;
    // NOP
    // 0x2d1dc8: 0x4503001e  bc1tl       . + 4 + (0x1E << 2)
    ctx->pc = 0x2D1DC8u;
    {
        const bool branch_taken_0x2d1dc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d1dc8) {
            ctx->pc = 0x2D1DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1DC8u;
            // 0x2d1dcc: 0xa2600074  sb          $zero, 0x74($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 116), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1E44u;
            goto label_2d1e44;
        }
    }
    ctx->pc = 0x2D1DD0u;
    // 0x2d1dd0: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x2d1dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1dd4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2d1dd4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1dd8: 0x0  nop
    ctx->pc = 0x2d1dd8u;
    // NOP
    // 0x2d1ddc: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
    ctx->pc = 0x2D1DDCu;
    {
        const bool branch_taken_0x2d1ddc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d1ddc) {
            ctx->pc = 0x2D1DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1DDCu;
            // 0x2d1de0: 0xa2600074  sb          $zero, 0x74($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 116), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1E44u;
            goto label_2d1e44;
        }
    }
    ctx->pc = 0x2D1DE4u;
    // 0x2d1de4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2d1de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2d1de8: 0x26700030  addiu       $s0, $s3, 0x30
    ctx->pc = 0x2d1de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x2d1dec: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x2d1decu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x2d1df0: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x2d1df0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x2d1df4: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2d1df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x2d1df8: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2d1df8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x2d1dfc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2d1dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2d1e00: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x2d1e00u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x2d1e04: 0xe46200e0  swc1        $f2, 0xE0($v1)
    ctx->pc = 0x2d1e04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 224), bits); }
    // 0x2d1e08: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2d1e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1e0c: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x2d1e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
    // 0x2d1e10: 0xc0e3e70  jal         func_38F9C0
    ctx->pc = 0x2D1E10u;
    SET_GPR_U32(ctx, 31, 0x2D1E18u);
    ctx->pc = 0x2D1E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1E10u;
    // 0x2d1e14: 0xc66c0030  lwc1        $f12, 0x30($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9C0u, 0x2D1E10u, 0x2D1E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1E18u;
label_2d1e18:
    // 0x2d1e18: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2d1e18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2d1e1c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2d1e1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2d1e20: 0xe620bb7c  swc1        $f0, -0x4484($s1)
    ctx->pc = 0x2d1e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294949756), bits); }
    // 0x2d1e24: 0xc0e3e70  jal         func_38F9C0
    ctx->pc = 0x2D1E24u;
    SET_GPR_U32(ctx, 31, 0x2D1E2Cu);
    ctx->pc = 0x2D1E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1E24u;
    // 0x2d1e28: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9C0u, 0x2D1E24u, 0x2D1E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1E2Cu;
label_2d1e2c:
    // 0x2d1e2c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2d1e2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2d1e30: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2d1e30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2d1e34: 0xe640bb80  swc1        $f0, -0x4480($s2)
    ctx->pc = 0x2d1e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294949760), bits); }
    // 0x2d1e38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D1E38u;
    {
        const bool branch_taken_0x2d1e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E38u;
        // 0x2d1e3c: 0xa2600074  sb          $zero, 0x74($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 116), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1e38) {
            ctx->pc = 0x2D1E44u;
            goto label_2d1e44;
        }
    }
    ctx->pc = 0x2D1E40u;
label_2d1e40:
    // 0x2d1e40: 0xa2620074  sb          $v0, 0x74($s3)
    ctx->pc = 0x2d1e40u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 116), (uint8_t)GPR_U32(ctx, 2));
label_2d1e44:
    // 0x2d1e44: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2d1e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_2d1e48:
    // 0x2d1e48: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x2d1e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x2d1e4c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D1E4Cu;
    {
        const bool branch_taken_0x2d1e4c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2D1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E4Cu;
        // 0x2d1e50: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1e4c) {
            ctx->pc = 0x2D1E68u;
            goto label_2d1e68;
        }
    }
    ctx->pc = 0x2D1E54u;
    // 0x2d1e54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d1e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d1e58: 0x0  nop
    ctx->pc = 0x2d1e58u;
    // NOP
    // 0x2d1e5c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d1e5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d1e60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D1E60u;
    {
        const bool branch_taken_0x2d1e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1e60) {
            ctx->pc = 0x2D1E80u;
            goto label_2d1e80;
        }
    }
    ctx->pc = 0x2D1E68u;
label_2d1e68:
    // 0x2d1e68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d1e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d1e6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d1e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d1e70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d1e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d1e74: 0x0  nop
    ctx->pc = 0x2d1e74u;
    // NOP
    // 0x2d1e78: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d1e78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d1e7c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2d1e7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2d1e80:
    // 0x2d1e80: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2d1e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2d1e84: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2d1e84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2d1e88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d1e88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d1e8c: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x2d1e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2d1e90: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2d1e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2d1e94: 0x26650078  addiu       $a1, $s3, 0x78
    ctx->pc = 0x2d1e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2d1e98: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2d1e98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d1e9c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2d1e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2d1ea0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d1ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2d1ea4: 0x26680080  addiu       $t0, $s3, 0x80
    ctx->pc = 0x2d1ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x2d1ea8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2d1ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2d1eac: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x2d1eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d1eb0: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x2d1eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x2d1eb4: 0x2666008c  addiu       $a2, $s3, 0x8C
    ctx->pc = 0x2d1eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 140));
    // 0x2d1eb8: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x2d1eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
    // 0x2d1ebc: 0x266b0094  addiu       $t3, $s3, 0x94
    ctx->pc = 0x2d1ebcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 148));
    // 0x2d1ec0: 0xae6000b0  sw          $zero, 0xB0($s3)
    ctx->pc = 0x2d1ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 0));
    // 0x2d1ec4: 0x266900a0  addiu       $t1, $s3, 0xA0
    ctx->pc = 0x2d1ec4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x2d1ec8: 0xae6000c4  sw          $zero, 0xC4($s3)
    ctx->pc = 0x2d1ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 0));
    // 0x2d1ecc: 0x266c00a8  addiu       $t4, $s3, 0xA8
    ctx->pc = 0x2d1eccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 168));
    // 0x2d1ed0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2d1ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2d1ed4: 0x266a00b4  addiu       $t2, $s3, 0xB4
    ctx->pc = 0x2d1ed4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 180));
    // 0x2d1ed8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x2d1ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x2d1edc: 0x266d00bc  addiu       $t5, $s3, 0xBC
    ctx->pc = 0x2d1edcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 19), 188));
    // 0x2d1ee0: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x2d1ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x2d1ee4: 0x266e00c8  addiu       $t6, $s3, 0xC8
    ctx->pc = 0x2d1ee4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 19), 200));
    // 0x2d1ee8: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2d1ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2d1eec: 0x266f00d0  addiu       $t7, $s3, 0xD0
    ctx->pc = 0x2d1eecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x2d1ef0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2d1ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x2d1ef4: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x2d1ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x2d1ef8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2d1ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2d1efc: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2d1efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2d1f00: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x2d1f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x2d1f04: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2d1f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2d1f08: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2d1f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x2d1f0c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x2d1f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x2d1f10: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x2d1f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x2d1f14: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2d1f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d1f18: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D1F18u;
    {
        const bool branch_taken_0x2d1f18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D1F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F18u;
        // 0x2d1f1c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1f18) {
            ctx->pc = 0x2D1F40u;
            goto label_2d1f40;
        }
    }
    ctx->pc = 0x2D1F20u;
    // 0x2d1f20: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2d1f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2d1f24: 0x0  nop
    ctx->pc = 0x2d1f24u;
    // NOP
label_2d1f28:
    // 0x2d1f28: 0x0  nop
    ctx->pc = 0x2d1f28u;
    // NOP
    // 0x2d1f2c: 0x0  nop
    ctx->pc = 0x2d1f2cu;
    // NOP
    // 0x2d1f30: 0x0  nop
    ctx->pc = 0x2d1f30u;
    // NOP
    // 0x2d1f34: 0x0  nop
    ctx->pc = 0x2d1f34u;
    // NOP
    // 0x2d1f38: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D1F38u;
    {
        const bool branch_taken_0x2d1f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d1f38) {
            ctx->pc = 0x2D1F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1F38u;
            // 0x2d1f3c: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1f28;
        }
    }
    ctx->pc = 0x2D1F40u;
label_2d1f40:
    // 0x2d1f40: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x2d1f40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x2d1f44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d1f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1f48: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2d1f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d1f4c: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x2d1f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x2d1f50: 0x8e65007c  lw          $a1, 0x7C($s3)
    ctx->pc = 0x2d1f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2d1f54: 0xae620078  sw          $v0, 0x78($s3)
    ctx->pc = 0x2d1f54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 2));
    // 0x2d1f58: 0xae63007c  sw          $v1, 0x7C($s3)
    ctx->pc = 0x2d1f58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 3));
    // 0x2d1f5c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2d1f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2d1f60: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x2d1f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2d1f64: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2d1f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2d1f68: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x2d1f68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x2d1f6c: 0x6ba2000f  ldl         $v0, 0xF($sp)
    ctx->pc = 0x2d1f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d1f70: 0x6fa20008  ldr         $v0, 0x8($sp)
    ctx->pc = 0x2d1f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d1f74: 0xb2620087  sdl         $v0, 0x87($s3)
    ctx->pc = 0x2d1f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d1f78: 0xb6620080  sdr         $v0, 0x80($s3)
    ctx->pc = 0x2d1f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d1f7c: 0x6ba20067  ldl         $v0, 0x67($sp)
    ctx->pc = 0x2d1f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d1f80: 0x6fa20060  ldr         $v0, 0x60($sp)
    ctx->pc = 0x2d1f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d1f84: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x2d1f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d1f88: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x2d1f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d1f8c: 0x8e64008c  lw          $a0, 0x8C($s3)
    ctx->pc = 0x2d1f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x2d1f90: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2d1f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2d1f94: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D1F94u;
    {
        const bool branch_taken_0x2d1f94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D1F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F94u;
        // 0x2d1f98: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1f94) {
            ctx->pc = 0x2D1FB8u;
            goto label_2d1fb8;
        }
    }
    ctx->pc = 0x2D1F9Cu;
    // 0x2d1f9c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2d1f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2d1fa0:
    // 0x2d1fa0: 0x0  nop
    ctx->pc = 0x2d1fa0u;
    // NOP
    // 0x2d1fa4: 0x0  nop
    ctx->pc = 0x2d1fa4u;
    // NOP
    // 0x2d1fa8: 0x0  nop
    ctx->pc = 0x2d1fa8u;
    // NOP
    // 0x2d1fac: 0x0  nop
    ctx->pc = 0x2d1facu;
    // NOP
    // 0x2d1fb0: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D1FB0u;
    {
        const bool branch_taken_0x2d1fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d1fb0) {
            ctx->pc = 0x2D1FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1FB0u;
            // 0x2d1fb4: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1fa0;
        }
    }
    ctx->pc = 0x2D1FB8u;
label_2d1fb8:
    // 0x2d1fb8: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x2d1fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x2d1fbc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d1fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1fc0: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2d1fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2d1fc4: 0x8e64008c  lw          $a0, 0x8C($s3)
    ctx->pc = 0x2d1fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x2d1fc8: 0x8e650090  lw          $a1, 0x90($s3)
    ctx->pc = 0x2d1fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x2d1fcc: 0xae62008c  sw          $v0, 0x8C($s3)
    ctx->pc = 0x2d1fccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 2));
    // 0x2d1fd0: 0xae630090  sw          $v1, 0x90($s3)
    ctx->pc = 0x2d1fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
    // 0x2d1fd4: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2d1fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2d1fd8: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x2d1fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2d1fdc: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x2d1fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x2d1fe0: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x2d1fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x2d1fe4: 0x6ba2002f  ldl         $v0, 0x2F($sp)
    ctx->pc = 0x2d1fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d1fe8: 0x6fa20028  ldr         $v0, 0x28($sp)
    ctx->pc = 0x2d1fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d1fec: 0xb262009b  sdl         $v0, 0x9B($s3)
    ctx->pc = 0x2d1fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 155); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d1ff0: 0xb6620094  sdr         $v0, 0x94($s3)
    ctx->pc = 0x2d1ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 148); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d1ff4: 0x6ba20067  ldl         $v0, 0x67($sp)
    ctx->pc = 0x2d1ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d1ff8: 0x6fa20060  ldr         $v0, 0x60($sp)
    ctx->pc = 0x2d1ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d1ffc: 0xb3a2002f  sdl         $v0, 0x2F($sp)
    ctx->pc = 0x2d1ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d2000: 0xb7a20028  sdr         $v0, 0x28($sp)
    ctx->pc = 0x2d2000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d2004: 0x8e6400a0  lw          $a0, 0xA0($s3)
    ctx->pc = 0x2d2004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
    // 0x2d2008: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x2d2008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2d200c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D200Cu;
    {
        const bool branch_taken_0x2d200c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D2010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D200Cu;
        // 0x2d2010: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d200c) {
            ctx->pc = 0x2D2030u;
            goto label_2d2030;
        }
    }
    ctx->pc = 0x2D2014u;
    // 0x2d2014: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2d2014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2d2018:
    // 0x2d2018: 0x0  nop
    ctx->pc = 0x2d2018u;
    // NOP
    // 0x2d201c: 0x0  nop
    ctx->pc = 0x2d201cu;
    // NOP
    // 0x2d2020: 0x0  nop
    ctx->pc = 0x2d2020u;
    // NOP
    // 0x2d2024: 0x0  nop
    ctx->pc = 0x2d2024u;
    // NOP
    // 0x2d2028: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D2028u;
    {
        const bool branch_taken_0x2d2028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d2028) {
            ctx->pc = 0x2D202Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2028u;
            // 0x2d202c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2018;
        }
    }
    ctx->pc = 0x2D2030u;
label_2d2030:
    // 0x2d2030: 0xad240004  sw          $a0, 0x4($t1)
    ctx->pc = 0x2d2030u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 4));
    // 0x2d2034: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d2034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2038: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x2d2038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2d203c: 0x8e6400a0  lw          $a0, 0xA0($s3)
    ctx->pc = 0x2d203cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
    // 0x2d2040: 0x8e6500a4  lw          $a1, 0xA4($s3)
    ctx->pc = 0x2d2040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
    // 0x2d2044: 0xae6200a0  sw          $v0, 0xA0($s3)
    ctx->pc = 0x2d2044u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 2));
    // 0x2d2048: 0xae6300a4  sw          $v1, 0xA4($s3)
    ctx->pc = 0x2d2048u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 3));
    // 0x2d204c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2d204cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2d2050: 0x8d820004  lw          $v0, 0x4($t4)
    ctx->pc = 0x2d2050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x2d2054: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x2d2054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x2d2058: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x2d2058u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x2d205c: 0x6ba2003f  ldl         $v0, 0x3F($sp)
    ctx->pc = 0x2d205cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d2060: 0x6fa20038  ldr         $v0, 0x38($sp)
    ctx->pc = 0x2d2060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d2064: 0xb26200af  sdl         $v0, 0xAF($s3)
    ctx->pc = 0x2d2064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d2068: 0xb66200a8  sdr         $v0, 0xA8($s3)
    ctx->pc = 0x2d2068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d206c: 0x6ba20067  ldl         $v0, 0x67($sp)
    ctx->pc = 0x2d206cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d2070: 0x6fa20060  ldr         $v0, 0x60($sp)
    ctx->pc = 0x2d2070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d2074: 0xb3a2003f  sdl         $v0, 0x3F($sp)
    ctx->pc = 0x2d2074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d2078: 0xb7a20038  sdr         $v0, 0x38($sp)
    ctx->pc = 0x2d2078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d207c: 0x8e6400b4  lw          $a0, 0xB4($s3)
    ctx->pc = 0x2d207cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x2d2080: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x2d2080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x2d2084: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D2084u;
    {
        const bool branch_taken_0x2d2084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D2088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2084u;
        // 0x2d2088: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2084) {
            ctx->pc = 0x2D20A8u;
            goto label_2d20a8;
        }
    }
    ctx->pc = 0x2D208Cu;
    // 0x2d208c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2d208cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2d2090:
    // 0x2d2090: 0x0  nop
    ctx->pc = 0x2d2090u;
    // NOP
    // 0x2d2094: 0x0  nop
    ctx->pc = 0x2d2094u;
    // NOP
    // 0x2d2098: 0x0  nop
    ctx->pc = 0x2d2098u;
    // NOP
    // 0x2d209c: 0x0  nop
    ctx->pc = 0x2d209cu;
    // NOP
    // 0x2d20a0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D20A0u;
    {
        const bool branch_taken_0x2d20a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D20A0u;
        // 0x2d20a4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d20a0) {
            ctx->pc = 0x2D2090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2090;
        }
    }
    ctx->pc = 0x2D20A8u;
label_2d20a8:
    // 0x2d20a8: 0xad440004  sw          $a0, 0x4($t2)
    ctx->pc = 0x2d20a8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 4));
    // 0x2d20ac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d20acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d20b0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x2d20b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2d20b4: 0x8e6400b4  lw          $a0, 0xB4($s3)
    ctx->pc = 0x2d20b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x2d20b8: 0x8e6500b8  lw          $a1, 0xB8($s3)
    ctx->pc = 0x2d20b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
    // 0x2d20bc: 0xae6200b4  sw          $v0, 0xB4($s3)
    ctx->pc = 0x2d20bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 2));
    // 0x2d20c0: 0xae6300b8  sw          $v1, 0xB8($s3)
    ctx->pc = 0x2d20c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 184), GPR_U32(ctx, 3));
    // 0x2d20c4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2d20c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2d20c8: 0x8da20004  lw          $v0, 0x4($t5)
    ctx->pc = 0x2d20c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x2d20cc: 0xafa50044  sw          $a1, 0x44($sp)
    ctx->pc = 0x2d20ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
    // 0x2d20d0: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x2d20d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x2d20d4: 0x6ba2004f  ldl         $v0, 0x4F($sp)
    ctx->pc = 0x2d20d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d20d8: 0x6fa20048  ldr         $v0, 0x48($sp)
    ctx->pc = 0x2d20d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d20dc: 0xb26200c3  sdl         $v0, 0xC3($s3)
    ctx->pc = 0x2d20dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 195); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d20e0: 0xb66200bc  sdr         $v0, 0xBC($s3)
    ctx->pc = 0x2d20e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 188); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d20e4: 0x6ba20067  ldl         $v0, 0x67($sp)
    ctx->pc = 0x2d20e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d20e8: 0x6fa20060  ldr         $v0, 0x60($sp)
    ctx->pc = 0x2d20e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d20ec: 0xb3a2004f  sdl         $v0, 0x4F($sp)
    ctx->pc = 0x2d20ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d20f0: 0xb7a20048  sdr         $v0, 0x48($sp)
    ctx->pc = 0x2d20f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d20f4: 0x8e6200c8  lw          $v0, 0xC8($s3)
    ctx->pc = 0x2d20f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
    // 0x2d20f8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2d20f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d20fc: 0xadc20004  sw          $v0, 0x4($t6)
    ctx->pc = 0x2d20fcu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 2));
    // 0x2d2100: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x2d2100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2d2104: 0x8e6400c8  lw          $a0, 0xC8($s3)
    ctx->pc = 0x2d2104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
    // 0x2d2108: 0x8e6600cc  lw          $a2, 0xCC($s3)
    ctx->pc = 0x2d2108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x2d210c: 0xae6500c8  sw          $a1, 0xC8($s3)
    ctx->pc = 0x2d210cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 200), GPR_U32(ctx, 5));
    // 0x2d2110: 0xae6300cc  sw          $v1, 0xCC($s3)
    ctx->pc = 0x2d2110u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 3));
    // 0x2d2114: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2d2114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2d2118: 0x8de20004  lw          $v0, 0x4($t7)
    ctx->pc = 0x2d2118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x2d211c: 0xafa60054  sw          $a2, 0x54($sp)
    ctx->pc = 0x2d211cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
    // 0x2d2120: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x2d2120u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x2d2124: 0x6ba2005f  ldl         $v0, 0x5F($sp)
    ctx->pc = 0x2d2124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d2128: 0x6fa20058  ldr         $v0, 0x58($sp)
    ctx->pc = 0x2d2128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d212c: 0xb26200d7  sdl         $v0, 0xD7($s3)
    ctx->pc = 0x2d212cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d2130: 0xb66200d0  sdr         $v0, 0xD0($s3)
    ctx->pc = 0x2d2130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d2134: 0x6ba20067  ldl         $v0, 0x67($sp)
    ctx->pc = 0x2d2134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d2138: 0x6fa20060  ldr         $v0, 0x60($sp)
    ctx->pc = 0x2d2138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d213c: 0xb3a2005f  sdl         $v0, 0x5F($sp)
    ctx->pc = 0x2d213cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d2140: 0xb7a20058  sdr         $v0, 0x58($sp)
    ctx->pc = 0x2d2140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d2144: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2d2144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x2d2148: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2d2148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x2d214c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x2d214cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x2d2150: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x2d2150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x2d2154: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x2d2154u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2d2158: 0xfa610020  sqc2        $vf1, 0x20($s3)
    ctx->pc = 0x2d2158u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d215c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2d215cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d2160: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d2160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d2164: 0xae6200d8  sw          $v0, 0xD8($s3)
    ctx->pc = 0x2d2164u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 216), GPR_U32(ctx, 2));
    // 0x2d2168: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x2d2168u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d216c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D216Cu;
    {
        const bool branch_taken_0x2d216c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D216Cu;
        // 0x2d2170: 0xa2600014  sb          $zero, 0x14($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d216c) {
            ctx->pc = 0x2D217Cu;
            goto label_2d217c;
        }
    }
    ctx->pc = 0x2D2174u;
    // 0x2d2174: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D2174u;
    SET_GPR_U32(ctx, 31, 0x2D217Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D2174u, 0x2D217Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D217Cu;
label_2d217c:
    // 0x2d217c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2d217cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2180: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x2d2180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2d2184: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D2184u;
    {
        const bool branch_taken_0x2d2184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D2188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2184u;
        // 0x2d2188: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2184) {
            ctx->pc = 0x2D21A8u;
            goto label_2d21a8;
        }
    }
    ctx->pc = 0x2D218Cu;
    // 0x2d218c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2d218cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2d2190:
    // 0x2d2190: 0x0  nop
    ctx->pc = 0x2d2190u;
    // NOP
    // 0x2d2194: 0x0  nop
    ctx->pc = 0x2d2194u;
    // NOP
    // 0x2d2198: 0x0  nop
    ctx->pc = 0x2d2198u;
    // NOP
    // 0x2d219c: 0x0  nop
    ctx->pc = 0x2d219cu;
    // NOP
    // 0x2d21a0: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D21A0u;
    {
        const bool branch_taken_0x2d21a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d21a0) {
            ctx->pc = 0x2D21A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D21A0u;
            // 0x2d21a4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2190;
        }
    }
    ctx->pc = 0x2D21A8u;
label_2d21a8:
    // 0x2d21a8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D21A8u;
    {
        const bool branch_taken_0x2d21a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d21a8) {
            ctx->pc = 0x2D21ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D21A8u;
            // 0x2d21ac: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D21BCu;
            goto label_2d21bc;
        }
    }
    ctx->pc = 0x2D21B0u;
    // 0x2d21b0: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D21B0u;
    SET_GPR_U32(ctx, 31, 0x2D21B8u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D21B0u, 0x2D21B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D21B8u;
label_2d21b8:
    // 0x2d21b8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2d21b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2d21bc:
    // 0x2d21bc: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x2d21bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2d21c0: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D21C0u;
    {
        const bool branch_taken_0x2d21c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D21C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D21C0u;
        // 0x2d21c4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d21c0) {
            ctx->pc = 0x2D21E8u;
            goto label_2d21e8;
        }
    }
    ctx->pc = 0x2D21C8u;
    // 0x2d21c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2d21c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2d21cc: 0x0  nop
    ctx->pc = 0x2d21ccu;
    // NOP
label_2d21d0:
    // 0x2d21d0: 0x0  nop
    ctx->pc = 0x2d21d0u;
    // NOP
    // 0x2d21d4: 0x0  nop
    ctx->pc = 0x2d21d4u;
    // NOP
    // 0x2d21d8: 0x0  nop
    ctx->pc = 0x2d21d8u;
    // NOP
    // 0x2d21dc: 0x0  nop
    ctx->pc = 0x2d21dcu;
    // NOP
    // 0x2d21e0: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D21E0u;
    {
        const bool branch_taken_0x2d21e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d21e0) {
            ctx->pc = 0x2D21E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D21E0u;
            // 0x2d21e4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D21D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d21d0;
        }
    }
    ctx->pc = 0x2D21E8u;
label_2d21e8:
    // 0x2d21e8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D21E8u;
    {
        const bool branch_taken_0x2d21e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d21e8) {
            ctx->pc = 0x2D21ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D21E8u;
            // 0x2d21ec: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D21FCu;
            goto label_2d21fc;
        }
    }
    ctx->pc = 0x2D21F0u;
    // 0x2d21f0: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D21F0u;
    SET_GPR_U32(ctx, 31, 0x2D21F8u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D21F0u, 0x2D21F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D21F8u;
label_2d21f8:
    // 0x2d21f8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d21f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2d21fc:
    // 0x2d21fc: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2d21fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2d2200: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D2200u;
    {
        const bool branch_taken_0x2d2200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D2204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2200u;
        // 0x2d2204: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2200) {
            ctx->pc = 0x2D2228u;
            goto label_2d2228;
        }
    }
    ctx->pc = 0x2D2208u;
    // 0x2d2208: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2d2208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2d220c: 0x0  nop
    ctx->pc = 0x2d220cu;
    // NOP
label_2d2210:
    // 0x2d2210: 0x0  nop
    ctx->pc = 0x2d2210u;
    // NOP
    // 0x2d2214: 0x0  nop
    ctx->pc = 0x2d2214u;
    // NOP
    // 0x2d2218: 0x0  nop
    ctx->pc = 0x2d2218u;
    // NOP
    // 0x2d221c: 0x0  nop
    ctx->pc = 0x2d221cu;
    // NOP
    // 0x2d2220: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D2220u;
    {
        const bool branch_taken_0x2d2220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D2224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2220u;
        // 0x2d2224: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2220) {
            ctx->pc = 0x2D2210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2210;
        }
    }
    ctx->pc = 0x2D2228u;
label_2d2228:
    // 0x2d2228: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2228u;
    {
        const bool branch_taken_0x2d2228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2228u;
        // 0x2d222c: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2228) {
            ctx->pc = 0x2D223Cu;
            goto label_2d223c;
        }
    }
    ctx->pc = 0x2D2230u;
    // 0x2d2230: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D2230u;
    SET_GPR_U32(ctx, 31, 0x2D2238u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D2230u, 0x2D2238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2238u;
label_2d2238:
    // 0x2d2238: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2d2238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2d223c:
    // 0x2d223c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d223cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2240: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D2240u;
    {
        const bool branch_taken_0x2d2240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D2244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2240u;
        // 0x2d2244: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2240) {
            ctx->pc = 0x2D2268u;
            goto label_2d2268;
        }
    }
    ctx->pc = 0x2D2248u;
    // 0x2d2248: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2d2248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2d224c: 0x0  nop
    ctx->pc = 0x2d224cu;
    // NOP
label_2d2250:
    // 0x2d2250: 0x0  nop
    ctx->pc = 0x2d2250u;
    // NOP
    // 0x2d2254: 0x0  nop
    ctx->pc = 0x2d2254u;
    // NOP
    // 0x2d2258: 0x0  nop
    ctx->pc = 0x2d2258u;
    // NOP
    // 0x2d225c: 0x0  nop
    ctx->pc = 0x2d225cu;
    // NOP
    // 0x2d2260: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D2260u;
    {
        const bool branch_taken_0x2d2260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d2260) {
            ctx->pc = 0x2D2264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2260u;
            // 0x2d2264: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2250;
        }
    }
    ctx->pc = 0x2D2268u;
label_2d2268:
    // 0x2d2268: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2d2268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d226c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D226Cu;
    {
        const bool branch_taken_0x2d226c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D226Cu;
        // 0x2d2270: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d226c) {
            ctx->pc = 0x2D2280u;
            goto label_2d2280;
        }
    }
    ctx->pc = 0x2D2274u;
    // 0x2d2274: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D2274u;
    SET_GPR_U32(ctx, 31, 0x2D227Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D2274u, 0x2D227Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D227Cu;
label_2d227c:
    // 0x2d227c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2d227cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2d2280:
    // 0x2d2280: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2d2280u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2d2284: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2d2284u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d2288: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x2d2288u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2d228c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2d228cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d2290: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2d2290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d2294: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2294u;
        // 0x2d2298: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D229Cu;
    // 0x2d229c: 0x0  nop
    ctx->pc = 0x2d229cu;
    // NOP
    ctx->pc = 0x2d22a0u;
}
