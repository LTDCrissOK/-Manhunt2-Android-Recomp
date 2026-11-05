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

// Function: sub_00355D20
// Address: 0x355d20 - 0x355f90
void sub_00355D20_0x355d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355D20_0x355d20");
#endif

    switch (ctx->pc) {
        case 0x355d90u: goto label_355d90;
        default: break;
    }

    ctx->pc = 0x355d20u;

    // 0x355d20: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x355d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x355d24: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x355d24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355d28: 0x8c45bd50  lw          $a1, -0x42B0($v0)
    ctx->pc = 0x355d28u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x355d2c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x355d2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x355d30: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x355d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x355d34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x355d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x355d38: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x355d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x355d3c: 0x8ca40104  lw          $a0, 0x104($a1)
    ctx->pc = 0x355d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x355d40: 0x2466c990  addiu       $a2, $v1, -0x3670
    ctx->pc = 0x355d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
    // 0x355d44: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x355d44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x355d48: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x355d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x355d4c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x355d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x355d50: 0x3c0c0040  lui         $t4, 0x40
    ctx->pc = 0x355d50u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)64 << 16));
    // 0x355d54: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x355d54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x355d58: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x355d58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355d5c: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x355d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355d60: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x355d60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x355d64: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x355d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x355d68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x355d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355d6c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x355d6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x355d70: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x355d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355d74: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x355d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x355d78: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x355d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355d7c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x355d7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x355d80: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x355d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355d84: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x355d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x355d88: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x355d88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FC990u));
    // 0x355d8c: 0x0  nop
    ctx->pc = 0x355d8cu;
    // NOP
label_355d90:
    // 0x355d90: 0x8d829160  lw          $v0, -0x6EA0($t4)
    ctx->pc = 0x355d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294938976)));
    // 0x355d94: 0x54620079  bnel        $v1, $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x355D94u;
    {
        const bool branch_taken_0x355d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x355d94) {
            ctx->pc = 0x355D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355D94u;
            // 0x355d98: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355F7Cu;
            goto label_355f7c;
        }
    }
    ctx->pc = 0x355D9Cu;
    // 0x355d9c: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x355d9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x355da0: 0x106b002b  beq         $v1, $t3, . + 4 + (0x2B << 2)
    ctx->pc = 0x355DA0u;
    {
        const bool branch_taken_0x355da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        ctx->pc = 0x355DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355DA0u;
        // 0x355da4: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x355da0) {
            ctx->pc = 0x355E50u;
            goto label_355e50;
        }
    }
    ctx->pc = 0x355DA8u;
    // 0x355da8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x355DA8u;
    {
        const bool branch_taken_0x355da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355da8) {
            ctx->pc = 0x355DC0u;
            goto label_355dc0;
        }
    }
    ctx->pc = 0x355DB0u;
    // 0x355db0: 0x106a0007  beq         $v1, $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x355DB0u;
    {
        const bool branch_taken_0x355db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        ctx->pc = 0x355DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355DB0u;
        // 0x355db4: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x355db0) {
            ctx->pc = 0x355DD0u;
            goto label_355dd0;
        }
    }
    ctx->pc = 0x355DB8u;
    // 0x355db8: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x355DB8u;
    {
        const bool branch_taken_0x355db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355DB8u;
        // 0x355dbc: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355db8) {
            ctx->pc = 0x355F7Cu;
            goto label_355f7c;
        }
    }
    ctx->pc = 0x355DC0u;
label_355dc0:
    // 0x355dc0: 0x50690044  beql        $v1, $t1, . + 4 + (0x44 << 2)
    ctx->pc = 0x355DC0u;
    {
        const bool branch_taken_0x355dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        if (branch_taken_0x355dc0) {
            ctx->pc = 0x355DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355DC0u;
            // 0x355dc4: 0xc4c00004  lwc1        $f0, 0x4($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x355ED4u;
            goto label_355ed4;
        }
    }
    ctx->pc = 0x355DC8u;
    // 0x355dc8: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x355DC8u;
    {
        const bool branch_taken_0x355dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355DC8u;
        // 0x355dcc: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355dc8) {
            ctx->pc = 0x355F7Cu;
            goto label_355f7c;
        }
    }
    ctx->pc = 0x355DD0u;
label_355dd0:
    // 0x355dd0: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x355dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355dd4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x355dd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355dd8: 0x0  nop
    ctx->pc = 0x355dd8u;
    // NOP
    // 0x355ddc: 0x45020067  bc1fl       . + 4 + (0x67 << 2)
    ctx->pc = 0x355DDCu;
    {
        const bool branch_taken_0x355ddc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x355ddc) {
            ctx->pc = 0x355DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355DDCu;
            // 0x355de0: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355F7Cu;
            goto label_355f7c;
        }
    }
    ctx->pc = 0x355DE4u;
    // 0x355de4: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x355de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355de8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x355de8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355dec: 0x0  nop
    ctx->pc = 0x355decu;
    // NOP
    // 0x355df0: 0x45000061  bc1f        . + 4 + (0x61 << 2)
    ctx->pc = 0x355DF0u;
    {
        const bool branch_taken_0x355df0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x355DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355DF0u;
        // 0x355df4: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x355df0) {
            ctx->pc = 0x355F78u;
            goto label_355f78;
        }
    }
    ctx->pc = 0x355DF8u;
    // 0x355df8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x355df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355dfc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x355dfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355e00: 0x0  nop
    ctx->pc = 0x355e00u;
    // NOP
    // 0x355e04: 0x4502005d  bc1fl       . + 4 + (0x5D << 2)
    ctx->pc = 0x355E04u;
    {
        const bool branch_taken_0x355e04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x355e04) {
            ctx->pc = 0x355E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355E04u;
            // 0x355e08: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355F7Cu;
            goto label_355f7c;
        }
    }
    ctx->pc = 0x355E0Cu;
    // 0x355e0c: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x355e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355e10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x355e10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355e14: 0x0  nop
    ctx->pc = 0x355e14u;
    // NOP
    // 0x355e18: 0x45000057  bc1f        . + 4 + (0x57 << 2)
    ctx->pc = 0x355E18u;
    {
        const bool branch_taken_0x355e18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x355E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355E18u;
        // 0x355e1c: 0xc7a10008  lwc1        $f1, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x355e18) {
            ctx->pc = 0x355F78u;
            goto label_355f78;
        }
    }
    ctx->pc = 0x355E20u;
    // 0x355e20: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x355e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355e24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x355e24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355e28: 0x0  nop
    ctx->pc = 0x355e28u;
    // NOP
    // 0x355e2c: 0x45020053  bc1fl       . + 4 + (0x53 << 2)
    ctx->pc = 0x355E2Cu;
    {
        const bool branch_taken_0x355e2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x355e2c) {
            ctx->pc = 0x355E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355E2Cu;
            // 0x355e30: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355F7Cu;
            goto label_355f7c;
        }
    }
    ctx->pc = 0x355E34u;
    // 0x355e34: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x355e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355e38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x355e38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355e3c: 0x0  nop
    ctx->pc = 0x355e3cu;
    // NOP
    // 0x355e40: 0x4503004d  bc1tl       . + 4 + (0x4D << 2)
    ctx->pc = 0x355E40u;
    {
        const bool branch_taken_0x355e40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x355e40) {
            ctx->pc = 0x355E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355E40u;
            // 0x355e44: 0xe4e60000  swc1        $f6, 0x0($a3) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x355F78u;
            goto label_355f78;
        }
    }
    ctx->pc = 0x355E48u;
    // 0x355e48: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x355E48u;
    {
        const bool branch_taken_0x355e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355E48u;
        // 0x355e4c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355e48) {
            ctx->pc = 0x355F7Cu;
            goto label_355f7c;
        }
    }
    ctx->pc = 0x355E50u;
label_355e50:
    // 0x355e50: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x355e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355e54: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x355e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355e58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x355e58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355e5c: 0x0  nop
    ctx->pc = 0x355e5cu;
    // NOP
    // 0x355e60: 0x45020046  bc1fl       . + 4 + (0x46 << 2)
    ctx->pc = 0x355E60u;
    {
        const bool branch_taken_0x355e60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x355e60) {
            ctx->pc = 0x355E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355E60u;
            // 0x355e64: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355F7Cu;
            goto label_355f7c;
        }
    }
    ctx->pc = 0x355E68u;
    // 0x355e68: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x355e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355e6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x355e6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355e70: 0x0  nop
    ctx->pc = 0x355e70u;
    // NOP
    // 0x355e74: 0x45000040  bc1f        . + 4 + (0x40 << 2)
    ctx->pc = 0x355E74u;
    {
        const bool branch_taken_0x355e74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x355E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355E74u;
        // 0x355e78: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x355e74) {
            ctx->pc = 0x355F78u;
            goto label_355f78;
        }
    }
    ctx->pc = 0x355E7Cu;
    // 0x355e7c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x355e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355e80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x355e80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355e84: 0x0  nop
    ctx->pc = 0x355e84u;
    // NOP
    // 0x355e88: 0x4502003c  bc1fl       . + 4 + (0x3C << 2)
    ctx->pc = 0x355E88u;
    {
        const bool branch_taken_0x355e88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x355e88) {
            ctx->pc = 0x355E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355E88u;
            // 0x355e8c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355F7Cu;
            goto label_355f7c;
        }
    }
    ctx->pc = 0x355E90u;
    // 0x355e90: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x355e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355e94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x355e94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355e98: 0x0  nop
    ctx->pc = 0x355e98u;
    // NOP
    // 0x355e9c: 0x45000036  bc1f        . + 4 + (0x36 << 2)
    ctx->pc = 0x355E9Cu;
    {
        const bool branch_taken_0x355e9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x355EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355E9Cu;
        // 0x355ea0: 0xc7a10008  lwc1        $f1, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x355e9c) {
            ctx->pc = 0x355F78u;
            goto label_355f78;
        }
    }
    ctx->pc = 0x355EA4u;
    // 0x355ea4: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x355ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355ea8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x355ea8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355eac: 0x0  nop
    ctx->pc = 0x355eacu;
    // NOP
    // 0x355eb0: 0x45020032  bc1fl       . + 4 + (0x32 << 2)
    ctx->pc = 0x355EB0u;
    {
        const bool branch_taken_0x355eb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x355eb0) {
            ctx->pc = 0x355EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355EB0u;
            // 0x355eb4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355F7Cu;
            goto label_355f7c;
        }
    }
    ctx->pc = 0x355EB8u;
    // 0x355eb8: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x355eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355ebc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x355ebcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355ec0: 0x0  nop
    ctx->pc = 0x355ec0u;
    // NOP
    // 0x355ec4: 0x4503002c  bc1tl       . + 4 + (0x2C << 2)
    ctx->pc = 0x355EC4u;
    {
        const bool branch_taken_0x355ec4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x355ec4) {
            ctx->pc = 0x355EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355EC4u;
            // 0x355ec8: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355F78u;
            goto label_355f78;
        }
    }
    ctx->pc = 0x355ECCu;
    // 0x355ecc: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x355ECCu;
    {
        const bool branch_taken_0x355ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355ECCu;
        // 0x355ed0: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355ecc) {
            ctx->pc = 0x355F7Cu;
            goto label_355f7c;
        }
    }
    ctx->pc = 0x355ED4u;
label_355ed4:
    // 0x355ed4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x355ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355ed8: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x355ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x355edc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x355edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x355ee0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x355ee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x355ee4: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x355ee4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x355ee8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x355ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x355eec: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x355eecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355ef0: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x355ef0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x355ef4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x355ef4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x355ef8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x355ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x355efc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x355efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355f00: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x355f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355f04: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x355f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x355f08: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x355f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x355f0c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x355f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x355f10: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x355f10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x355f14: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x355f14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x355f18: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x355f18u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x355f1c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x355f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x355f20: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x355f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x355f24: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x355f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x355f28: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x355f28u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x355f2c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x355f2cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x355f30: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x355f30u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x355f34: 0x46000004  c1          0x4
    ctx->pc = 0x355f34u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x355f38: 0xc4c1001c  lwc1        $f1, 0x1C($a2)
    ctx->pc = 0x355f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355f3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x355f3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355f40: 0x0  nop
    ctx->pc = 0x355f40u;
    // NOP
    // 0x355f44: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x355F44u;
    {
        const bool branch_taken_0x355f44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x355f44) {
            ctx->pc = 0x355F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355F44u;
            // 0x355f48: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355F7Cu;
            goto label_355f7c;
        }
    }
    ctx->pc = 0x355F4Cu;
    // 0x355f4c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x355f4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x355f50: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x355f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x355f54: 0x0  nop
    ctx->pc = 0x355f54u;
    // NOP
    // 0x355f58: 0x0  nop
    ctx->pc = 0x355f58u;
    // NOP
    // 0x355f5c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x355f5cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x355f60: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x355f60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x355f64: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x355f64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355f68: 0x0  nop
    ctx->pc = 0x355f68u;
    // NOP
    // 0x355f6c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x355F6Cu;
    {
        const bool branch_taken_0x355f6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x355f6c) {
            ctx->pc = 0x355F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355F6Cu;
            // 0x355f70: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x355F74u;
            goto label_355f74;
        }
    }
    ctx->pc = 0x355F74u;
label_355f74:
    // 0x355f74: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x355f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_355f78:
    // 0x355f78: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x355f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_355f7c:
    // 0x355f7c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x355f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x355f80: 0x483ff83  bgezl       $a0, . + 4 + (-0x7D << 2)
    ctx->pc = 0x355F80u;
    {
        const bool branch_taken_0x355f80 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x355f80) {
            ctx->pc = 0x355F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355F80u;
            // 0x355f84: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355d90;
        }
    }
    ctx->pc = 0x355F88u;
    // 0x355f88: 0x3e00008  jr          $ra
    ctx->pc = 0x355F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355F88u;
        // 0x355f8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355F90u;
}
