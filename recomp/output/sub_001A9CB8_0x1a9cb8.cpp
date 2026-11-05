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

// Function: sub_001A9CB8
// Address: 0x1a9cb8 - 0x1aa078
void sub_001A9CB8_0x1a9cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9CB8_0x1a9cb8");
#endif

    switch (ctx->pc) {
        case 0x1a9d98u: goto label_1a9d98;
        case 0x1a9dc4u: goto label_1a9dc4;
        case 0x1a9df8u: goto label_1a9df8;
        case 0x1a9e14u: goto label_1a9e14;
        case 0x1a9e60u: goto label_1a9e60;
        case 0x1a9e7cu: goto label_1a9e7c;
        case 0x1a9ea4u: goto label_1a9ea4;
        case 0x1a9eccu: goto label_1a9ecc;
        case 0x1a9ee0u: goto label_1a9ee0;
        case 0x1a9f00u: goto label_1a9f00;
        case 0x1a9f30u: goto label_1a9f30;
        case 0x1a9f68u: goto label_1a9f68;
        case 0x1a9fd8u: goto label_1a9fd8;
        case 0x1aa030u: goto label_1aa030;
        default: break;
    }

    ctx->pc = 0x1a9cb8u;

    // 0x1a9cb8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a9cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1a9cbc: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1a9cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1a9cc0: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1a9cc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1a9cc4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a9cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a9cc8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a9cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a9ccc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1a9cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1a9cd0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a9cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9cd4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1a9cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1a9cd8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a9cd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9cdc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a9cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1a9ce0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a9ce0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ce4: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1a9ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1a9ce8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1a9ce8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9cec: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1a9cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1a9cf0: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1a9cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1a9cf4: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1a9cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1a9cf8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a9cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1a9cfc: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x1a9cfcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1a9d00: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1a9d00u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1a9d04: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1a9d04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1a9d08: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x1a9d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a9d0c: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x1a9d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a9d10: 0x46002045  abs.s       $f1, $f4
    ctx->pc = 0x1a9d10u;
    ctx->f[1] = FPU_ABS_S(ctx->f[4]);
    // 0x1a9d14: 0x46001805  abs.s       $f0, $f3
    ctx->pc = 0x1a9d14u;
    ctx->f[0] = FPU_ABS_S(ctx->f[3]);
    // 0x1a9d18: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a9d18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a9d1c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1a9d1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9d20: 0x0  nop
    ctx->pc = 0x1a9d20u;
    // NOP
    // 0x1a9d24: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1A9D24u;
    {
        const bool branch_taken_0x1a9d24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A9D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D24u;
        // 0x1a9d28: 0x120b82d  daddu       $s7, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d24) {
            ctx->pc = 0x1A9D4Cu;
            goto label_1a9d4c;
        }
    }
    ctx->pc = 0x1A9D2Cu;
    // 0x1a9d2c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a9d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1a9d30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a9d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9d34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a9d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a9d38: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1a9d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9d3c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1a9d3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1a9d40: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1a9d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1a9d44: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A9D44u;
    {
        const bool branch_taken_0x1a9d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D44u;
        // 0x1a9d48: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d44) {
            ctx->pc = 0x1A9D84u;
            goto label_1a9d84;
        }
    }
    ctx->pc = 0x1A9D4Cu;
label_1a9d4c:
    // 0x1a9d4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a9d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9d50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a9d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a9d54: 0x0  nop
    ctx->pc = 0x1a9d54u;
    // NOP
    // 0x1a9d58: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1a9d58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9d5c: 0x0  nop
    ctx->pc = 0x1a9d5cu;
    // NOP
    // 0x1a9d60: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1A9D60u;
    {
        const bool branch_taken_0x1a9d60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A9D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D60u;
        // 0x1a9d64: 0x27b50010  addiu       $s5, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d60) {
            ctx->pc = 0x1A9D88u;
            goto label_1a9d88;
        }
    }
    ctx->pc = 0x1A9D68u;
    // 0x1a9d68: 0x0  nop
    ctx->pc = 0x1a9d68u;
    // NOP
    // 0x1a9d6c: 0x0  nop
    ctx->pc = 0x1a9d6cu;
    // NOP
    // 0x1a9d70: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1a9d70u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a9d74: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x1a9d74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1a9d78: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1a9d78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1a9d7c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1a9d7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1a9d80: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1a9d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1a9d84:
    // 0x1a9d84: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x1a9d84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a9d88:
    // 0x1a9d88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a9d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9d8c: 0x27a90014  addiu       $t1, $sp, 0x14
    ctx->pc = 0x1a9d8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1a9d90: 0x267601ec  addiu       $s6, $s3, 0x1EC
    ctx->pc = 0x1a9d90u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 492));
    // 0x1a9d94: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x1a9d94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a9d98:
    // 0x1a9d98: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1a9d98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1a9d9c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a9d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a9da0: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x1a9da0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a9da4: 0x0  nop
    ctx->pc = 0x1a9da4u;
    // NOP
    // 0x1a9da8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A9DA8u;
    {
        const bool branch_taken_0x1a9da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DA8u;
        // 0x1a9dac: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9da8) {
            ctx->pc = 0x1A9D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9d98;
        }
    }
    ctx->pc = 0x1A9DB0u;
    // 0x1a9db0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a9db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9db4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a9db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9db8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a9db8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9dbc: 0xc06a5ac  jal         func_1A96B0
    ctx->pc = 0x1A9DBCu;
    SET_GPR_U32(ctx, 31, 0x1A9DC4u);
    ctx->pc = 0x1A9DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9DBCu;
    // 0x1a9dc0: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A96B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A96B0u, 0x1A9DBCu, 0x1A9DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9DC4u;
label_1a9dc4:
    // 0x1a9dc4: 0xc661018c  lwc1        $f1, 0x18C($s3)
    ctx->pc = 0x1a9dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9dc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a9dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9dcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a9dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9dd0: 0x0  nop
    ctx->pc = 0x1a9dd0u;
    // NOP
    // 0x1a9dd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a9dd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9dd8: 0x0  nop
    ctx->pc = 0x1a9dd8u;
    // NOP
    // 0x1a9ddc: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x1A9DDCu;
    {
        const bool branch_taken_0x1a9ddc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A9DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DDCu;
        // 0x1a9de0: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ddc) {
            ctx->pc = 0x1A9ECCu;
            goto label_1a9ecc;
        }
    }
    ctx->pc = 0x1A9DE4u;
    // 0x1a9de4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9DE4u;
    {
        const bool branch_taken_0x1a9de4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9de4) {
            ctx->pc = 0x1A9DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9DE4u;
            // 0x1a9de8: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9DFCu;
            goto label_1a9dfc;
        }
    }
    ctx->pc = 0x1A9DECu;
    // 0x1a9dec: 0xc48c0014  lwc1        $f12, 0x14($a0)
    ctx->pc = 0x1a9decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a9df0: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x1A9DF0u;
    SET_GPR_U32(ctx, 31, 0x1A9DF8u);
    ctx->pc = 0x1A9DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9DF0u;
    // 0x1a9df4: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x1A9DF0u, 0x1A9DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9DF8u;
label_1a9df8:
    // 0x1a9df8: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1a9df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1a9dfc:
    // 0x1a9dfc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9DFCu;
    {
        const bool branch_taken_0x1a9dfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9dfc) {
            ctx->pc = 0x1A9E14u;
            goto label_1a9e14;
        }
    }
    ctx->pc = 0x1A9E04u;
    // 0x1a9e04: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x1a9e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9e08: 0xc66c018c  lwc1        $f12, 0x18C($s3)
    ctx->pc = 0x1a9e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a9e0c: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x1A9E0Cu;
    SET_GPR_U32(ctx, 31, 0x1A9E14u);
    ctx->pc = 0x1A9E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9E0Cu;
    // 0x1a9e10: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x1A9E0Cu, 0x1A9E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9E14u;
label_1a9e14:
    // 0x1a9e14: 0x1280002d  beqz        $s4, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A9E14u;
    {
        const bool branch_taken_0x1a9e14 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E14u;
        // 0x1a9e18: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e14) {
            ctx->pc = 0x1A9ECCu;
            goto label_1a9ecc;
        }
    }
    ctx->pc = 0x1A9E1Cu;
    // 0x1a9e1c: 0x8e630158  lw          $v1, 0x158($s3)
    ctx->pc = 0x1a9e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 344)));
    // 0x1a9e20: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9E20u;
    {
        const bool branch_taken_0x1a9e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E20u;
        // 0x1a9e24: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e20) {
            ctx->pc = 0x1A9E3Cu;
            goto label_1a9e3c;
        }
    }
    ctx->pc = 0x1A9E28u;
    // 0x1a9e28: 0x926201dc  lbu         $v0, 0x1DC($s3)
    ctx->pc = 0x1a9e28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 476)));
    // 0x1a9e2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9E2Cu;
    {
        const bool branch_taken_0x1a9e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E2Cu;
        // 0x1a9e30: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e2c) {
            ctx->pc = 0x1A9E3Cu;
            goto label_1a9e3c;
        }
    }
    ctx->pc = 0x1A9E34u;
    // 0x1a9e34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9E34u;
    {
        const bool branch_taken_0x1a9e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E34u;
        // 0x1a9e38: 0x8e6701e0  lw          $a3, 0x1E0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e34) {
            ctx->pc = 0x1A9E44u;
            goto label_1a9e44;
        }
    }
    ctx->pc = 0x1A9E3Cu;
label_1a9e3c:
    // 0x1a9e3c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1a9e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1a9e40: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1a9e40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a9e44:
    // 0x1a9e44: 0x12e00008  beqz        $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9E44u;
    {
        const bool branch_taken_0x1a9e44 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E44u;
        // 0x1a9e48: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e44) {
            ctx->pc = 0x1A9E68u;
            goto label_1a9e68;
        }
    }
    ctx->pc = 0x1A9E4Cu;
    // 0x1a9e4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a9e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9e50: 0x26650184  addiu       $a1, $s3, 0x184
    ctx->pc = 0x1a9e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 388));
    // 0x1a9e54: 0x27a80018  addiu       $t0, $sp, 0x18
    ctx->pc = 0x1a9e54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1a9e58: 0xc06a5ac  jal         func_1A96B0
    ctx->pc = 0x1A9E58u;
    SET_GPR_U32(ctx, 31, 0x1A9E60u);
    ctx->pc = 0x1A9E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9E58u;
    // 0x1a9e5c: 0x27a9001c  addiu       $t1, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A96B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A96B0u, 0x1A9E58u, 0x1A9E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9E60u;
label_1a9e60:
    // 0x1a9e60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A9E60u;
    {
        const bool branch_taken_0x1a9e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E60u;
        // 0x1a9e64: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e60) {
            ctx->pc = 0x1A9E80u;
            goto label_1a9e80;
        }
    }
    ctx->pc = 0x1A9E68u;
label_1a9e68:
    // 0x1a9e68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a9e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9e6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a9e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9e70: 0x27a80018  addiu       $t0, $sp, 0x18
    ctx->pc = 0x1a9e70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1a9e74: 0xc06a5ac  jal         func_1A96B0
    ctx->pc = 0x1A9E74u;
    SET_GPR_U32(ctx, 31, 0x1A9E7Cu);
    ctx->pc = 0x1A9E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9E74u;
    // 0x1a9e78: 0x27a9001c  addiu       $t1, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A96B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A96B0u, 0x1A9E74u, 0x1A9E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9E7Cu;
label_1a9e7c:
    // 0x1a9e7c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a9e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1a9e80:
    // 0x1a9e80: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9E80u;
    {
        const bool branch_taken_0x1a9e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E80u;
        // 0x1a9e84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e80) {
            ctx->pc = 0x1A9EA4u;
            goto label_1a9ea4;
        }
    }
    ctx->pc = 0x1A9E88u;
    // 0x1a9e88: 0xc660018c  lwc1        $f0, 0x18C($s3)
    ctx->pc = 0x1a9e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9e8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a9e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9e90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a9e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a9e94: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1a9e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9e98: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1a9e98u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1a9e9c: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x1A9E9Cu;
    SET_GPR_U32(ctx, 31, 0x1A9EA4u);
    ctx->pc = 0x1A9EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9E9Cu;
    // 0x1a9ea0: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x1A9E9Cu, 0x1A9EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9EA4u;
label_1a9ea4:
    // 0x1a9ea4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1a9ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1a9ea8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9EA8u;
    {
        const bool branch_taken_0x1a9ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9EA8u;
        // 0x1a9eac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ea8) {
            ctx->pc = 0x1A9ECCu;
            goto label_1a9ecc;
        }
    }
    ctx->pc = 0x1A9EB0u;
    // 0x1a9eb0: 0xc660018c  lwc1        $f0, 0x18C($s3)
    ctx->pc = 0x1a9eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9eb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a9eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9eb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a9eb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a9ebc: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1a9ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9ec0: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1a9ec0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1a9ec4: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x1A9EC4u;
    SET_GPR_U32(ctx, 31, 0x1A9ECCu);
    ctx->pc = 0x1A9EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9EC4u;
    // 0x1a9ec8: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x1A9EC4u, 0x1A9ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9ECCu;
label_1a9ecc:
    // 0x1a9ecc: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x1a9eccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a9ed0: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x1a9ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ed4: 0x267201ec  addiu       $s2, $s3, 0x1EC
    ctx->pc = 0x1a9ed4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 492));
    // 0x1a9ed8: 0x26d40010  addiu       $s4, $s6, 0x10
    ctx->pc = 0x1a9ed8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1a9edc: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x1a9edcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1a9ee0:
    // 0x1a9ee0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a9ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a9ee4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A9EE4u;
    {
        const bool branch_taken_0x1a9ee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9EE4u;
        // 0x1a9ee8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ee4) {
            ctx->pc = 0x1A9F34u;
            goto label_1a9f34;
        }
    }
    ctx->pc = 0x1A9EECu;
    // 0x1a9eec: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A9EECu;
    {
        const bool branch_taken_0x1a9eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9EECu;
        // 0x1a9ef0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9eec) {
            ctx->pc = 0x1A9F1Cu;
            goto label_1a9f1c;
        }
    }
    ctx->pc = 0x1A9EF4u;
    // 0x1a9ef4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a9ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ef8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9efc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a9efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1a9f00:
    // 0x1a9f00: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x1a9f00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a9f04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9F04u;
    {
        const bool branch_taken_0x1a9f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F04u;
        // 0x1a9f08: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f04) {
            ctx->pc = 0x1A9F1Cu;
            goto label_1a9f1c;
        }
    }
    ctx->pc = 0x1A9F0Cu;
    // 0x1a9f0c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1a9f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a9f10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a9f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a9f14: 0x5462fffa  bnel        $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A9F14u;
    {
        const bool branch_taken_0x1a9f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9f14) {
            ctx->pc = 0x1A9F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9F14u;
            // 0x1a9f18: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9f00;
        }
    }
    ctx->pc = 0x1A9F1Cu;
label_1a9f1c:
    // 0x1a9f1c: 0x54b70005  bnel        $a1, $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9F1Cu;
    {
        const bool branch_taken_0x1a9f1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 23));
        if (branch_taken_0x1a9f1c) {
            ctx->pc = 0x1A9F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9F1Cu;
            // 0x1a9f20: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9F34u;
            goto label_1a9f34;
        }
    }
    ctx->pc = 0x1A9F24u;
    // 0x1a9f24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a9f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f28: 0xc06a1b0  jal         func_1A86C0
    ctx->pc = 0x1A9F28u;
    SET_GPR_U32(ctx, 31, 0x1A9F30u);
    ctx->pc = 0x1A9F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9F28u;
    // 0x1a9f2c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A86C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A86C0u, 0x1A9F28u, 0x1A9F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9F30u;
label_1a9f30:
    // 0x1a9f30: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a9f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1a9f34:
    // 0x1a9f34: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1a9f34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1a9f38: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1a9f38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1a9f3c: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x1a9f3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1a9f40: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1A9F40u;
    {
        const bool branch_taken_0x1a9f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F40u;
        // 0x1a9f44: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f40) {
            ctx->pc = 0x1A9EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9ee0;
        }
    }
    ctx->pc = 0x1A9F48u;
    // 0x1a9f48: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a9f48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a9f4c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1a9f4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f50: 0xae6001fc  sw          $zero, 0x1FC($s3)
    ctx->pc = 0x1a9f50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 508), GPR_U32(ctx, 0));
    // 0x1a9f54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a9f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f58: 0x4600a0c6  mov.s       $f3, $f20
    ctx->pc = 0x1a9f58u;
    ctx->f[3] = FPU_MOV_S(ctx->f[20]);
    // 0x1a9f5c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1a9f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f60: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1a9f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a9f64: 0x0  nop
    ctx->pc = 0x1a9f64u;
    // NOP
label_1a9f68:
    // 0x1a9f68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a9f68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a9f6c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1a9f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1a9f70: 0x2e250004  sltiu       $a1, $s1, 0x4
    ctx->pc = 0x1a9f70u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a9f74: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a9f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a9f78: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A9F78u;
    {
        const bool branch_taken_0x1a9f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F78u;
        // 0x1a9f7c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f78) {
            ctx->pc = 0x1A9FBCu;
            goto label_1a9fbc;
        }
    }
    ctx->pc = 0x1A9F80u;
    // 0x1a9f80: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1a9f80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1a9f84: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1a9f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1a9f88: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A9F88u;
    {
        const bool branch_taken_0x1a9f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9f88) {
            ctx->pc = 0x1A9FBCu;
            goto label_1a9fbc;
        }
    }
    ctx->pc = 0x1A9F90u;
    // 0x1a9f90: 0xc4620024  lwc1        $f2, 0x24($v1)
    ctx->pc = 0x1a9f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a9f94: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x1a9f94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9f98: 0x0  nop
    ctx->pc = 0x1a9f98u;
    // NOP
    // 0x1a9f9c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1A9F9Cu;
    {
        const bool branch_taken_0x1a9f9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a9f9c) {
            ctx->pc = 0x1A9FBCu;
            goto label_1a9fbc;
        }
    }
    ctx->pc = 0x1A9FA4u;
    // 0x1a9fa4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a9fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a9fa8: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1a9fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9fac: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1a9facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9fb0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a9fb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a9fb4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a9fb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a9fb8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1a9fb8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1a9fbc:
    // 0x1a9fbc: 0x54a0ffea  bnel        $a1, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1A9FBCu;
    {
        const bool branch_taken_0x1a9fbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9fbc) {
            ctx->pc = 0x1A9FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9FBCu;
            // 0x1a9fc0: 0x8d030000  lw          $v1, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9f68;
        }
    }
    ctx->pc = 0x1A9FC4u;
    // 0x1a9fc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a9fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9fc8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1a9fc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1a9fcc: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x1a9fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9fd0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1a9fd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1a9fd4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a9fd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9fd8:
    // 0x1a9fd8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a9fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a9fdc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A9FDCu;
    {
        const bool branch_taken_0x1a9fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FDCu;
        // 0x1a9fe0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9fdc) {
            ctx->pc = 0x1AA030u;
            goto label_1aa030;
        }
    }
    ctx->pc = 0x1A9FE4u;
    // 0x1a9fe4: 0xae6201fc  sw          $v0, 0x1FC($s3)
    ctx->pc = 0x1a9fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 508), GPR_U32(ctx, 2));
    // 0x1a9fe8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a9fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a9fec: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1a9fecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1a9ff0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1a9ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1a9ff4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A9FF4u;
    {
        const bool branch_taken_0x1a9ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FF4u;
        // 0x1a9ff8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ff4) {
            ctx->pc = 0x1AA030u;
            goto label_1aa030;
        }
    }
    ctx->pc = 0x1A9FFCu;
    // 0x1a9ffc: 0xc46c0024  lwc1        $f12, 0x24($v1)
    ctx->pc = 0x1a9ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1aa000: 0x460ca834  c.lt.s      $f21, $f12
    ctx->pc = 0x1aa000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa004: 0x0  nop
    ctx->pc = 0x1aa004u;
    // NOP
    // 0x1aa008: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1AA008u;
    {
        const bool branch_taken_0x1aa008 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AA00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA008u;
        // 0x1aa00c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa008) {
            ctx->pc = 0x1AA030u;
            goto label_1aa030;
        }
    }
    ctx->pc = 0x1AA010u;
    // 0x1aa010: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1aa010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1aa014: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x1aa014u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x1aa018: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1aa018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa01c: 0x0  nop
    ctx->pc = 0x1aa01cu;
    // NOP
    // 0x1aa020: 0x0  nop
    ctx->pc = 0x1aa020u;
    // NOP
    // 0x1aa024: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x1aa024u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x1aa028: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1AA028u;
    SET_GPR_U32(ctx, 31, 0x1AA030u);
    ctx->pc = 0x1AA02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA028u;
    // 0x1aa02c: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1AA028u, 0x1AA030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA030u;
label_1aa030:
    // 0x1aa030: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x1aa030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1aa034: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1AA034u;
    {
        const bool branch_taken_0x1aa034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA034u;
        // 0x1aa038: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa034) {
            ctx->pc = 0x1A9FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9fd8;
        }
    }
    ctx->pc = 0x1AA03Cu;
    // 0x1aa03c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1aa03cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa040: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1aa040u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa044: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1aa044u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aa048: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1aa048u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1aa04c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1aa04cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aa050: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1aa050u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1aa054: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1aa054u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1aa058: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1aa058u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aa05c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1aa05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1aa060: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x1aa060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1aa064: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1aa064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1aa068: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1aa068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1aa06c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA06Cu;
        // 0x1aa070: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA074u;
    // 0x1aa074: 0x0  nop
    ctx->pc = 0x1aa074u;
    // NOP
    ctx->pc = 0x1aa078u;
}
