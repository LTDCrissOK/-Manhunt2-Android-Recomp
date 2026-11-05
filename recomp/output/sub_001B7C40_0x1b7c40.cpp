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

// Function: sub_001B7C40
// Address: 0x1b7c40 - 0x1b8398
void sub_001B7C40_0x1b7c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7C40_0x1b7c40");
#endif

    switch (ctx->pc) {
        case 0x1b7d74u: goto label_1b7d74;
        case 0x1b7e1cu: goto label_1b7e1c;
        case 0x1b7e34u: goto label_1b7e34;
        case 0x1b7e54u: goto label_1b7e54;
        case 0x1b7e5cu: goto label_1b7e5c;
        case 0x1b7e64u: goto label_1b7e64;
        case 0x1b7f5cu: goto label_1b7f5c;
        case 0x1b7fe4u: goto label_1b7fe4;
        case 0x1b7fecu: goto label_1b7fec;
        case 0x1b8100u: goto label_1b8100;
        case 0x1b8124u: goto label_1b8124;
        case 0x1b8148u: goto label_1b8148;
        case 0x1b8188u: goto label_1b8188;
        case 0x1b81ccu: goto label_1b81cc;
        case 0x1b835cu: goto label_1b835c;
        default: break;
    }

    ctx->pc = 0x1b7c40u;

    // 0x1b7c40: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1b7c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1b7c44: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x1b7c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x1b7c48: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x1b7c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x1b7c4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b7c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7c50: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x1b7c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x1b7c54: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x1b7c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
    // 0x1b7c58: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x1b7c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x1b7c5c: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x1b7c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
    // 0x1b7c60: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x1b7c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x1b7c64: 0xffb70118  sd          $s7, 0x118($sp)
    ctx->pc = 0x1b7c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 23));
    // 0x1b7c68: 0xffbe0120  sd          $fp, 0x120($sp)
    ctx->pc = 0x1b7c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 30));
    // 0x1b7c6c: 0xffbf0128  sd          $ra, 0x128($sp)
    ctx->pc = 0x1b7c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 31));
    // 0x1b7c70: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x1b7c70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1b7c74: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x1b7c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x1b7c78: 0x544001b9  bnel        $v0, $zero, . + 4 + (0x1B9 << 2)
    ctx->pc = 0x1B7C78u;
    {
        const bool branch_taken_0x1b7c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7c78) {
            ctx->pc = 0x1B7C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7C78u;
            // 0x1b7c7c: 0x8e0200b4  lw          $v0, 0xB4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8360u;
            goto label_1b8360;
        }
    }
    ctx->pc = 0x1B7C80u;
    // 0x1b7c80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b7c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7c84: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1b7c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1b7c88: 0xae0200b8  sw          $v0, 0xB8($s0)
    ctx->pc = 0x1b7c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
    // 0x1b7c8c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1b7c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b7c90: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1b7c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1b7c94: 0x5443003e  bnel        $v0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1B7C94u;
    {
        const bool branch_taken_0x1b7c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b7c94) {
            ctx->pc = 0x1B7C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7C94u;
            // 0x1b7c98: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7D90u;
            goto label_1b7d90;
        }
    }
    ctx->pc = 0x1B7C9Cu;
    // 0x1b7c9c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1b7c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1b7ca0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b7ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7ca4: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1b7ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1b7ca8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7CA8u;
    {
        const bool branch_taken_0x1b7ca8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B7CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7CA8u;
        // 0x1b7cac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7ca8) {
            ctx->pc = 0x1B7CC4u;
            goto label_1b7cc4;
        }
    }
    ctx->pc = 0x1B7CB0u;
    // 0x1b7cb0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b7cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b7cb4: 0x0  nop
    ctx->pc = 0x1b7cb4u;
    // NOP
    // 0x1b7cb8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b7cb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b7cbc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7CBCu;
    {
        const bool branch_taken_0x1b7cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7cbc) {
            ctx->pc = 0x1B7CDCu;
            goto label_1b7cdc;
        }
    }
    ctx->pc = 0x1B7CC4u;
label_1b7cc4:
    // 0x1b7cc4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b7cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b7cc8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b7cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b7ccc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b7cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b7cd0: 0x0  nop
    ctx->pc = 0x1b7cd0u;
    // NOP
    // 0x1b7cd4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b7cd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b7cd8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b7cd8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b7cdc:
    // 0x1b7cdc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b7cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b7ce0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b7ce0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b7ce4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b7ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7ce8: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x1b7ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7cec: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b7cecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b7cf0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b7cf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7cf4: 0x0  nop
    ctx->pc = 0x1b7cf4u;
    // NOP
    // 0x1b7cf8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7CF8u;
    {
        const bool branch_taken_0x1b7cf8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B7CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7CF8u;
        // 0x1b7cfc: 0x8e0200b4  lw          $v0, 0xB4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7cf8) {
            ctx->pc = 0x1B7D08u;
            goto label_1b7d08;
        }
    }
    ctx->pc = 0x1B7D00u;
    // 0x1b7d00: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x1B7D00u;
    {
        const bool branch_taken_0x1b7d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D00u;
        // 0x1b7d04: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d00) {
            ctx->pc = 0x1B8364u;
            goto label_1b8364;
        }
    }
    ctx->pc = 0x1B7D08u;
label_1b7d08:
    // 0x1b7d08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7D08u;
    {
        const bool branch_taken_0x1b7d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D08u;
        // 0x1b7d0c: 0x8c822b00  lw          $v0, 0x2B00($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d08) {
            ctx->pc = 0x1B7D20u;
            goto label_1b7d20;
        }
    }
    ctx->pc = 0x1B7D10u;
    // 0x1b7d10: 0x441002c  bgez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1B7D10u;
    {
        const bool branch_taken_0x1b7d10 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B7D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D10u;
        // 0x1b7d14: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d10) {
            ctx->pc = 0x1B7DC4u;
            goto label_1b7dc4;
        }
    }
    ctx->pc = 0x1B7D18u;
    // 0x1b7d18: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1B7D18u;
    {
        const bool branch_taken_0x1b7d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D18u;
        // 0x1b7d1c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d18) {
            ctx->pc = 0x1B7DDCu;
            goto label_1b7ddc;
        }
    }
    ctx->pc = 0x1B7D20u;
label_1b7d20:
    // 0x1b7d20: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7D20u;
    {
        const bool branch_taken_0x1b7d20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B7D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D20u;
        // 0x1b7d24: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d20) {
            ctx->pc = 0x1B7D3Cu;
            goto label_1b7d3c;
        }
    }
    ctx->pc = 0x1B7D28u;
    // 0x1b7d28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7d2c: 0x0  nop
    ctx->pc = 0x1b7d2cu;
    // NOP
    // 0x1b7d30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7d30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b7d34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7D34u;
    {
        const bool branch_taken_0x1b7d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7d34) {
            ctx->pc = 0x1B7D54u;
            goto label_1b7d54;
        }
    }
    ctx->pc = 0x1B7D3Cu;
label_1b7d3c:
    // 0x1b7d3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b7d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b7d40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b7d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b7d44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7d44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7d48: 0x0  nop
    ctx->pc = 0x1b7d48u;
    // NOP
    // 0x1b7d4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7d4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b7d50: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b7d50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b7d54:
    // 0x1b7d54: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b7d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b7d58: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b7d58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b7d5c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b7d5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b7d60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b7d60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b7d64: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1b7d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1b7d68: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b7d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b7d6c: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x1B7D6Cu;
    SET_GPR_U32(ctx, 31, 0x1B7D74u);
    ctx->pc = 0x1B7D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7D6Cu;
    // 0x1b7d70: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1B7D6Cu, 0x1B7D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7D74u;
label_1b7d74:
    // 0x1b7d74: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1b7d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1b7d78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7d7c: 0x0  nop
    ctx->pc = 0x1b7d7cu;
    // NOP
    // 0x1b7d80: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x1b7d80u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x1b7d84: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1b7d84u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1b7d88: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1B7D88u;
    {
        const bool branch_taken_0x1b7d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D88u;
        // 0x1b7d8c: 0xe6140040  swc1        $f20, 0x40($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d88) {
            ctx->pc = 0x1B7E10u;
            goto label_1b7e10;
        }
    }
    ctx->pc = 0x1B7D90u;
label_1b7d90:
    // 0x1b7d90: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1b7d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1b7d94: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b7d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7d98: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1b7d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1b7d9c: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1b7d9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1b7da0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1b7da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7da4: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1b7da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1b7da8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b7da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b7dac: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x1b7dacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x1b7db0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1b7db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b7db4: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x1b7db4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x1b7db8: 0x8c822b00  lw          $v0, 0x2B00($a0)
    ctx->pc = 0x1b7db8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1b7dbc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7DBCu;
    {
        const bool branch_taken_0x1b7dbc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B7DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7DBCu;
        // 0x1b7dc0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7dbc) {
            ctx->pc = 0x1B7DD8u;
            goto label_1b7dd8;
        }
    }
    ctx->pc = 0x1B7DC4u;
label_1b7dc4:
    // 0x1b7dc4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b7dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b7dc8: 0x0  nop
    ctx->pc = 0x1b7dc8u;
    // NOP
    // 0x1b7dcc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b7dccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b7dd0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7DD0u;
    {
        const bool branch_taken_0x1b7dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7dd0) {
            ctx->pc = 0x1B7DF0u;
            goto label_1b7df0;
        }
    }
    ctx->pc = 0x1B7DD8u;
label_1b7dd8:
    // 0x1b7dd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b7dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1b7ddc:
    // 0x1b7ddc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b7ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b7de0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b7de0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b7de4: 0x0  nop
    ctx->pc = 0x1b7de4u;
    // NOP
    // 0x1b7de8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b7de8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b7dec: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b7decu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b7df0:
    // 0x1b7df0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b7df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b7df4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b7df4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b7df8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b7df8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7dfc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1b7dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1b7e00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7e00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7e04: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b7e04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b7e08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b7e08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b7e0c: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x1b7e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_1b7e10:
    // 0x1b7e10: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x1b7e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1b7e14: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x1B7E14u;
    SET_GPR_U32(ctx, 31, 0x1B7E1Cu);
    ctx->pc = 0x1B7E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E14u;
    // 0x1b7e18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x1B7E14u, 0x1B7E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E1Cu;
label_1b7e1c:
    // 0x1b7e1c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b7e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b7e20: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7E20u;
    {
        const bool branch_taken_0x1b7e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7e20) {
            ctx->pc = 0x1B7E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7E20u;
            // 0x1b7e24: 0x8e030084  lw          $v1, 0x84($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7E38u;
            goto label_1b7e38;
        }
    }
    ctx->pc = 0x1B7E28u;
    // 0x1b7e28: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1b7e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b7e2c: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x1B7E2Cu;
    SET_GPR_U32(ctx, 31, 0x1B7E34u);
    ctx->pc = 0x1B7E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E2Cu;
    // 0x1b7e30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x1B7E2Cu, 0x1B7E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E34u;
label_1b7e34:
    // 0x1b7e34: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x1b7e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1b7e38:
    // 0x1b7e38: 0x8c62036c  lw          $v0, 0x36C($v1)
    ctx->pc = 0x1b7e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 876)));
    // 0x1b7e3c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1b7e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1b7e40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7E40u;
    {
        const bool branch_taken_0x1b7e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E40u;
        // 0x1b7e44: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e40) {
            ctx->pc = 0x1B7E54u;
            goto label_1b7e54;
        }
    }
    ctx->pc = 0x1B7E48u;
    // 0x1b7e48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b7e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e4c: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x1B7E4Cu;
    SET_GPR_U32(ctx, 31, 0x1B7E54u);
    ctx->pc = 0x1B7E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E4Cu;
    // 0x1b7e50: 0x8c45bd50  lw          $a1, -0x42B0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x1B7E4Cu, 0x1B7E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E54u;
label_1b7e54:
    // 0x1b7e54: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B7E54u;
    SET_GPR_U32(ctx, 31, 0x1B7E5Cu);
    ctx->pc = 0x1B7E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E54u;
    // 0x1b7e58: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B7E54u, 0x1B7E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E5Cu;
label_1b7e5c:
    // 0x1b7e5c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B7E5Cu;
    SET_GPR_U32(ctx, 31, 0x1B7E64u);
    ctx->pc = 0x1B7E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E5Cu;
    // 0x1b7e60: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B7E5Cu, 0x1B7E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E64u;
label_1b7e64:
    // 0x1b7e64: 0x7a020090  lq          $v0, 0x90($s0)
    ctx->pc = 0x1b7e64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1b7e68: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1b7e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b7e6c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x1b7e6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b7e70: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1b7e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b7e74: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1b7e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1b7e78: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1b7e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b7e7c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x1b7e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x1b7e80: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1b7e80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b7e84: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1b7e84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b7e88: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b7e88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b7e8c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1b7e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b7e90: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1b7e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7e94: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x1b7e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b7e98: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x1b7e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b7e9c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1b7e9cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1b7ea0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1b7ea0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1b7ea4: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1b7ea4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1b7ea8: 0x0  nop
    ctx->pc = 0x1b7ea8u;
    // NOP
    // 0x1b7eac: 0x0  nop
    ctx->pc = 0x1b7eacu;
    // NOP
    // 0x1b7eb0: 0x46000044  c1          0x44
    ctx->pc = 0x1b7eb0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1b7eb4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1b7eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1b7eb8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b7eb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b7ebc: 0x0  nop
    ctx->pc = 0x1b7ebcu;
    // NOP
    // 0x1b7ec0: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1b7ec0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7ec4: 0x0  nop
    ctx->pc = 0x1b7ec4u;
    // NOP
    // 0x1b7ec8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1B7EC8u;
    {
        const bool branch_taken_0x1b7ec8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B7ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7EC8u;
        // 0x1b7ecc: 0xe7a10060  swc1        $f1, 0x60($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7ec8) {
            ctx->pc = 0x1B7EF4u;
            goto label_1b7ef4;
        }
    }
    ctx->pc = 0x1B7ED0u;
    // 0x1b7ed0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b7ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b7ed4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b7ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7ed8: 0x0  nop
    ctx->pc = 0x1b7ed8u;
    // NOP
    // 0x1b7edc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1b7edcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1b7ee0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b7ee0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b7ee4: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1b7ee4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b7ee8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1b7ee8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1b7eec: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1b7eecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b7ef0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1b7ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_1b7ef4:
    // 0x1b7ef4: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1b7ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7ef8: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1b7ef8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7efc: 0x0  nop
    ctx->pc = 0x1b7efcu;
    // NOP
    // 0x1b7f00: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x1B7F00u;
    {
        const bool branch_taken_0x1b7f00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B7F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F00u;
        // 0x1b7f04: 0x26020190  addiu       $v0, $s0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7f00) {
            ctx->pc = 0x1B7F64u;
            goto label_1b7f64;
        }
    }
    ctx->pc = 0x1B7F08u;
    // 0x1b7f08: 0x7e000190  sq          $zero, 0x190($s0)
    ctx->pc = 0x1b7f08u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 400), GPR_VEC(ctx, 0));
    // 0x1b7f0c: 0x7e0001a0  sq          $zero, 0x1A0($s0)
    ctx->pc = 0x1b7f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 416), GPR_VEC(ctx, 0));
    // 0x1b7f10: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1b7f10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1b7f14: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1b7f14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x1b7f18: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1b7f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1b7f1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b7f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b7f20: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x1b7f20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x1b7f24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b7f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f28: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1b7f28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1b7f2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b7f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b7f30: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1b7f30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x1b7f34: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x1b7f34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x1b7f38: 0xc4c0c648  lwc1        $f0, -0x39B8($a2)
    ctx->pc = 0x1b7f38u;
    { uint32_t bits = FAST_READ32(0x45C648u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7f3c: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x1b7f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x1b7f40: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1b7f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1b7f44: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x1b7f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x1b7f48: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x1b7f48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x1b7f4c: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1b7f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x1b7f50: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x1b7f50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x1b7f54: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x1B7F54u;
    SET_GPR_U32(ctx, 31, 0x1B7F5Cu);
    ctx->pc = 0x1B7F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7F54u;
    // 0x1b7f58: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x1B7F54u, 0x1B7F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7F5Cu;
label_1b7f5c:
    // 0x1b7f5c: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x1B7F5Cu;
    {
        const bool branch_taken_0x1b7f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F5Cu;
        // 0x1b7f60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7f5c) {
            ctx->pc = 0x1B8360u;
            goto label_1b8360;
        }
    }
    ctx->pc = 0x1B7F64u;
label_1b7f64:
    // 0x1b7f64: 0x7e000190  sq          $zero, 0x190($s0)
    ctx->pc = 0x1b7f64u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 400), GPR_VEC(ctx, 0));
    // 0x1b7f68: 0x7e0001a0  sq          $zero, 0x1A0($s0)
    ctx->pc = 0x1b7f68u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 416), GPR_VEC(ctx, 0));
    // 0x1b7f6c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1b7f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1b7f70: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b7f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b7f74: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1b7f74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1b7f78: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1b7f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b7f7c: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x1b7f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x1b7f80: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1b7f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1b7f84: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1b7f84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1b7f88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b7f88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f8c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1b7f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x1b7f90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b7f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7f94: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x1b7f94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x1b7f98: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1b7f98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f9c: 0xc4a0c648  lwc1        $f0, -0x39B8($a1)
    ctx->pc = 0x1b7f9cu;
    { uint32_t bits = FAST_READ32(0x45C648u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7fa0: 0xac440044  sw          $a0, 0x44($v0)
    ctx->pc = 0x1b7fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 4));
    // 0x1b7fa4: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1b7fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1b7fa8: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x1b7fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x1b7fac: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1b7facu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x1b7fb0: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x1b7fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x1b7fb4: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x1b7fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x1b7fb8: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x1b7fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x1b7fbc: 0x8c6291c0  lw          $v0, -0x6E40($v1)
    ctx->pc = 0x1b7fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91C0u));
    // 0x1b7fc0: 0xac6691c0  sw          $a2, -0x6E40($v1)
    ctx->pc = 0x1b7fc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3F91C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91C0u, _value); } while (0);
    // 0x1b7fc4: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x1b7fc4u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b7fc8: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x1b7fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1b7fcc: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1b7fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1b7fd0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1b7fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1b7fd4: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1B7FD4u;
    {
        const bool branch_taken_0x1b7fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7fd4) {
            ctx->pc = 0x1B80F8u;
            goto label_1b80f8;
        }
    }
    ctx->pc = 0x1B7FDCu;
    // 0x1b7fdc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B7FDCu;
    SET_GPR_U32(ctx, 31, 0x1B7FE4u);
    ctx->pc = 0x1B7FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7FDCu;
    // 0x1b7fe0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B7FDCu, 0x1B7FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7FE4u;
label_1b7fe4:
    // 0x1b7fe4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B7FE4u;
    SET_GPR_U32(ctx, 31, 0x1B7FECu);
    ctx->pc = 0x1B7FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7FE4u;
    // 0x1b7fe8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B7FE4u, 0x1B7FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7FECu;
label_1b7fec:
    // 0x1b7fec: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1b7fecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1b7ff0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b7ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1b7ff4: 0xe7b400d4  swc1        $f20, 0xD4($sp)
    ctx->pc = 0x1b7ff4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1b7ff8: 0xe7b400d8  swc1        $f20, 0xD8($sp)
    ctx->pc = 0x1b7ff8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1b7ffc: 0xe7b400dc  swc1        $f20, 0xDC($sp)
    ctx->pc = 0x1b7ffcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1b8000: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x1b8000u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b8004: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x1b8004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x1b8008: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1b8008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x1b800c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1b800cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b8010: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1b8010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b8014: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1b8014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b8018: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1b8018u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1b801c: 0xe7b400d4  swc1        $f20, 0xD4($sp)
    ctx->pc = 0x1b801cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1b8020: 0xe7b400d8  swc1        $f20, 0xD8($sp)
    ctx->pc = 0x1b8020u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1b8024: 0xe7b400dc  swc1        $f20, 0xDC($sp)
    ctx->pc = 0x1b8024u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1b8028: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1b8028u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b802c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1b802cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b8030: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x1b8030u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8034: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1b8034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b8038: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1b8038u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b803c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1b803cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1b8040: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x1b8040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x1b8044: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x1b8044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x1b8048: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1b8048u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1b804c: 0xe7b400c4  swc1        $f20, 0xC4($sp)
    ctx->pc = 0x1b804cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1b8050: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1b8050u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b8054: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1b8054u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b8058: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b8058u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b805c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1b805cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b8060: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1b8060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b8064: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x1b8064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b8068: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x1b8068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b806c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1b806cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1b8070: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1b8070u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1b8074: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1b8074u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1b8078: 0x0  nop
    ctx->pc = 0x1b8078u;
    // NOP
    // 0x1b807c: 0x0  nop
    ctx->pc = 0x1b807cu;
    // NOP
    // 0x1b8080: 0x46000044  c1          0x44
    ctx->pc = 0x1b8080u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1b8084: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1b8084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1b8088: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1b8088u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b808c: 0x0  nop
    ctx->pc = 0x1b808cu;
    // NOP
    // 0x1b8090: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1B8090u;
    {
        const bool branch_taken_0x1b8090 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8090u;
        // 0x1b8094: 0xe7a100c0  swc1        $f1, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8090) {
            ctx->pc = 0x1B80BCu;
            goto label_1b80bc;
        }
    }
    ctx->pc = 0x1B8098u;
    // 0x1b8098: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b8098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b809c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b809cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b80a0: 0x0  nop
    ctx->pc = 0x1b80a0u;
    // NOP
    // 0x1b80a4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1b80a4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1b80a8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b80a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b80ac: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1b80acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b80b0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1b80b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1b80b4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1b80b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b80b8: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1b80b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_1b80bc:
    // 0x1b80bc: 0x93a40010  lbu         $a0, 0x10($sp)
    ctx->pc = 0x1b80bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b80c0: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x1b80c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b80c4: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x1b80c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b80c8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1b80c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1b80cc: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x1b80ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x1b80d0: 0xa3a400d0  sb          $a0, 0xD0($sp)
    ctx->pc = 0x1b80d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b80d4: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1b80d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b80d8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1b80d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b80dc: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1b80dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b80e0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b80e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b80e4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1b80e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b80e8: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1b80e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b80ec: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1b80ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b80f0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1b80f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1b80f4: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1b80f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1b80f8:
    // 0x1b80f8: 0xc06e0f0  jal         func_1B83C0
    ctx->pc = 0x1B80F8u;
    SET_GPR_U32(ctx, 31, 0x1B8100u);
    ctx->pc = 0x1B80FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B80F8u;
    // 0x1b80fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83C0u, 0x1B80F8u, 0x1B8100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8100u;
label_1b8100:
    // 0x1b8100: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B8100u;
    {
        const bool branch_taken_0x1b8100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8100u;
        // 0x1b8104: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8100) {
            ctx->pc = 0x1B812Cu;
            goto label_1b812c;
        }
    }
    ctx->pc = 0x1B8108u;
    // 0x1b8108: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b8108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b810c: 0x34a57000  ori         $a1, $a1, 0x7000
    ctx->pc = 0x1b810cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)28672);
    // 0x1b8110: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b8110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8114: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b8114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8118: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b8118u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b811c: 0xc07797e  jal         func_1DE5F8
    ctx->pc = 0x1B811Cu;
    SET_GPR_U32(ctx, 31, 0x1B8124u);
    ctx->pc = 0x1B8120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B811Cu;
    // 0x1b8120: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE5F8u, 0x1B811Cu, 0x1B8124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8124u;
label_1b8124:
    // 0x1b8124: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B8124u;
    {
        const bool branch_taken_0x1b8124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8124u;
        // 0x1b8128: 0xae7291c0  sw          $s2, -0x6E40($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294939072), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8124) {
            ctx->pc = 0x1B814Cu;
            goto label_1b814c;
        }
    }
    ctx->pc = 0x1B812Cu;
label_1b812c:
    // 0x1b812c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b812cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b8130: 0x34a57000  ori         $a1, $a1, 0x7000
    ctx->pc = 0x1b8130u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)28672);
    // 0x1b8134: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b8134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8138: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b8138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b813c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b813cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8140: 0xc07797e  jal         func_1DE5F8
    ctx->pc = 0x1B8140u;
    SET_GPR_U32(ctx, 31, 0x1B8148u);
    ctx->pc = 0x1B8144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8140u;
    // 0x1b8144: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE5F8u, 0x1B8140u, 0x1B8148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8148u;
label_1b8148:
    // 0x1b8148: 0xae7291c0  sw          $s2, -0x6E40($s3)
    ctx->pc = 0x1b8148u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294939072), GPR_U32(ctx, 18));
label_1b814c:
    // 0x1b814c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1b814cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1b8150: 0xae00022c  sw          $zero, 0x22C($s0)
    ctx->pc = 0x1b8150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
    // 0x1b8154: 0x8c622b1c  lw          $v0, 0x2B1C($v1)
    ctx->pc = 0x1b8154u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B1Cu));
    // 0x1b8158: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x1B8158u;
    {
        const bool branch_taken_0x1b8158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8158u;
        // 0x1b815c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8158) {
            ctx->pc = 0x1B834Cu;
            goto label_1b834c;
        }
    }
    ctx->pc = 0x1B8160u;
    // 0x1b8160: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x1b8160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x1b8164: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x1b8164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x1b8168: 0x245e7ee0  addiu       $fp, $v0, 0x7EE0
    ctx->pc = 0x1b8168u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 32480));
    // 0x1b816c: 0x24772828  addiu       $s7, $v1, 0x2828
    ctx->pc = 0x1b816cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 10280));
    // 0x1b8170: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1b8170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x1b8174: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x1b8174u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
    // 0x1b8178: 0x24562870  addiu       $s6, $v0, 0x2870
    ctx->pc = 0x1b8178u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 10352));
    // 0x1b817c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1b817cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8180: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b8180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8184: 0x0  nop
    ctx->pc = 0x1b8184u;
    // NOP
label_1b8188:
    // 0x1b8188: 0x8e632b20  lw          $v1, 0x2B20($s3)
    ctx->pc = 0x1b8188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
    // 0x1b818c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1b818cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1b8190: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1b8190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b8194: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x1b8194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x1b8198: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x1b8198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x1b819c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B819Cu;
    {
        const bool branch_taken_0x1b819c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B81A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B819Cu;
        // 0x1b81a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b819c) {
            ctx->pc = 0x1B81BCu;
            goto label_1b81bc;
        }
    }
    ctx->pc = 0x1B81A4u;
    // 0x1b81a4: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1b81a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x1b81a8: 0x8c4400b8  lw          $a0, 0xB8($v0)
    ctx->pc = 0x1b81a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1b81ac: 0x8c8300b0  lw          $v1, 0xB0($a0)
    ctx->pc = 0x1b81acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x1b81b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b81b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b81b4: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1b81b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1b81b8: 0x2a3200b  movn        $a0, $s5, $v1
    ctx->pc = 0x1b81b8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
label_1b81bc:
    // 0x1b81bc: 0x1480005e  bnez        $a0, . + 4 + (0x5E << 2)
    ctx->pc = 0x1B81BCu;
    {
        const bool branch_taken_0x1b81bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B81C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B81BCu;
        // 0x1b81c0: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b81bc) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B81C4u;
    // 0x1b81c4: 0xc07a8e4  jal         func_1EA390
    ctx->pc = 0x1B81C4u;
    SET_GPR_U32(ctx, 31, 0x1B81CCu);
    ctx->pc = 0x1B81C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B81C4u;
    // 0x1b81c8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x1B81C4u, 0x1B81CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B81CCu;
label_1b81cc:
    // 0x1b81cc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1b81ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1b81d0: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1b81d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1b81d4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1B81D4u;
    {
        const bool branch_taken_0x1b81d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b81d4) {
            ctx->pc = 0x1B81D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B81D4u;
            // 0x1b81d8: 0x8e622b20  lw          $v0, 0x2B20($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8204u;
            goto label_1b8204;
        }
    }
    ctx->pc = 0x1B81DCu;
    // 0x1b81dc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1b81dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b81e0: 0x971021  addu        $v0, $a0, $s7
    ctx->pc = 0x1b81e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x1b81e4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b81e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b81e8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B81E8u;
    {
        const bool branch_taken_0x1b81e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B81ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B81E8u;
        // 0x1b81ec: 0x8e622b20  lw          $v0, 0x2B20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b81e8) {
            ctx->pc = 0x1B8204u;
            goto label_1b8204;
        }
    }
    ctx->pc = 0x1B81F0u;
    // 0x1b81f0: 0x961021  addu        $v0, $a0, $s6
    ctx->pc = 0x1b81f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x1b81f4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b81f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b81f8: 0x1460004f  bnez        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x1B81F8u;
    {
        const bool branch_taken_0x1b81f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B81FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B81F8u;
        // 0x1b81fc: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b81f8) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B8200u;
    // 0x1b8200: 0x8e622b20  lw          $v0, 0x2B20($s3)
    ctx->pc = 0x1b8200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
label_1b8204:
    // 0x1b8204: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b8204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b8208: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b8208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b820c: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x1b820cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1b8210: 0x38630008  xori        $v1, $v1, 0x8
    ctx->pc = 0x1b8210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
    // 0x1b8214: 0x54600011  bnel        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B8214u;
    {
        const bool branch_taken_0x1b8214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8214) {
            ctx->pc = 0x1B8218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8214u;
            // 0x1b8218: 0x8e622b20  lw          $v0, 0x2B20($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B825Cu;
            goto label_1b825c;
        }
    }
    ctx->pc = 0x1B821Cu;
    // 0x1b821c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1b821cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1b8220: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1b8220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1b8224: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1b8224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1b8228: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1b8228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x1b822c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B822Cu;
    {
        const bool branch_taken_0x1b822c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B822Cu;
        // 0x1b8230: 0x8e622b20  lw          $v0, 0x2B20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b822c) {
            ctx->pc = 0x1B825Cu;
            goto label_1b825c;
        }
    }
    ctx->pc = 0x1B8234u;
    // 0x1b8234: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1b8234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8238: 0x8c830ff8  lw          $v1, 0xFF8($a0)
    ctx->pc = 0x1b8238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    // 0x1b823c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b823cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b8240: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1b8240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1b8244: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1B8244u;
    {
        const bool branch_taken_0x1b8244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8244u;
        // 0x1b8248: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8244) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B824Cu;
    // 0x1b824c: 0x8c821060  lw          $v0, 0x1060($a0)
    ctx->pc = 0x1b824cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4192)));
    // 0x1b8250: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x1b8250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
    // 0x1b8254: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1B8254u;
    {
        const bool branch_taken_0x1b8254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8254u;
        // 0x1b8258: 0x8e622b20  lw          $v0, 0x2B20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8254) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B825Cu;
label_1b825c:
    // 0x1b825c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b825cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b8260: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b8260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8264: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x1b8264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1b8268: 0x38630008  xori        $v1, $v1, 0x8
    ctx->pc = 0x1b8268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
    // 0x1b826c: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1B826Cu;
    {
        const bool branch_taken_0x1b826c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b826c) {
            ctx->pc = 0x1B8270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B826Cu;
            // 0x1b8270: 0xae15022c  sw          $s5, 0x22C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B82A4u;
            goto label_1b82a4;
        }
    }
    ctx->pc = 0x1B8274u;
    // 0x1b8274: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1b8274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1b8278: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1b8278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1b827c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1b827cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1b8280: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1b8280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x1b8284: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B8284u;
    {
        const bool branch_taken_0x1b8284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8284) {
            ctx->pc = 0x1B8288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8284u;
            // 0x1b8288: 0xae15022c  sw          $s5, 0x22C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B82A4u;
            goto label_1b82a4;
        }
    }
    ctx->pc = 0x1B828Cu;
    // 0x1b828c: 0x8c630ff8  lw          $v1, 0xFF8($v1)
    ctx->pc = 0x1b828cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4088)));
    // 0x1b8290: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b8290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b8294: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b8294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b8298: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8298u;
    {
        const bool branch_taken_0x1b8298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8298) {
            ctx->pc = 0x1B829Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8298u;
            // 0x1b829c: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B82A8u;
            goto label_1b82a8;
        }
    }
    ctx->pc = 0x1B82A0u;
    // 0x1b82a0: 0xae15022c  sw          $s5, 0x22C($s0)
    ctx->pc = 0x1b82a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 21));
label_1b82a4:
    // 0x1b82a4: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1b82a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1b82a8:
    // 0x1b82a8: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1B82A8u;
    {
        const bool branch_taken_0x1b82a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B82ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82A8u;
        // 0x1b82ac: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b82a8) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B82B0u;
    // 0x1b82b0: 0x8e622b20  lw          $v0, 0x2B20($s3)
    ctx->pc = 0x1b82b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
    // 0x1b82b4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b82b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b82b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b82b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b82bc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1b82bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b82c0: 0xfa010190  sqc2        $vf1, 0x190($s0)
    ctx->pc = 0x1b82c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 400), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b82c4: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1b82c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1b82c8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b82c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b82cc: 0xfa0101a0  sqc2        $vf1, 0x1A0($s0)
    ctx->pc = 0x1b82ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 416), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b82d0: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1b82d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1b82d4: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x1b82d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x1b82d8: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1b82d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1b82dc: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1b82dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x1b82e0: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1b82e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1b82e4: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x1b82e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x1b82e8: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1b82e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1b82ec: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x1b82ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x1b82f0: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1b82f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1b82f4: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x1b82f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x1b82f8: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x1b82f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1b82fc: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x1b82fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x1b8300: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x1b8300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8304: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x1b8304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x1b8308: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1b8308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1b830c: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x1b830cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x1b8310: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1b8310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1b8314: 0xae230040  sw          $v1, 0x40($s1)
    ctx->pc = 0x1b8314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
    // 0x1b8318: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x1b8318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1b831c: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x1b831cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x1b8320: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x1b8320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1b8324: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x1b8324u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
    // 0x1b8328: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x1b8328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1b832c: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x1b832cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x1b8330: 0xae1500b4  sw          $s5, 0xB4($s0)
    ctx->pc = 0x1b8330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 21));
    // 0x1b8334: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1b8334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_1b8338:
    // 0x1b8338: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b8338u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b833c: 0x8c622b1c  lw          $v0, 0x2B1C($v1)
    ctx->pc = 0x1b833cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11036)));
    // 0x1b8340: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1b8340u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b8344: 0x1440ff90  bnez        $v0, . + 4 + (-0x70 << 2)
    ctx->pc = 0x1B8344u;
    {
        const bool branch_taken_0x1b8344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8344u;
        // 0x1b8348: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8344) {
            ctx->pc = 0x1B8188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8188;
        }
    }
    ctx->pc = 0x1B834Cu;
label_1b834c:
    // 0x1b834c: 0x8e1000b4  lw          $s0, 0xB4($s0)
    ctx->pc = 0x1b834cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1b8350: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b8350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8354: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x1B8354u;
    SET_GPR_U32(ctx, 31, 0x1B835Cu);
    ctx->pc = 0x1B8358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8354u;
    // 0x1b8358: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x1B8354u, 0x1B835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B835Cu;
label_1b835c:
    // 0x1b835c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b835cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b8360:
    // 0x1b8360: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x1b8360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_1b8364:
    // 0x1b8364: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x1b8364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1b8368: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x1b8368u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b836c: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x1b836cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b8370: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x1b8370u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b8374: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x1b8374u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b8378: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x1b8378u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b837c: 0xdfb70118  ld          $s7, 0x118($sp)
    ctx->pc = 0x1b837cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b8380: 0xdfbe0120  ld          $fp, 0x120($sp)
    ctx->pc = 0x1b8380u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b8384: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x1b8384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1b8388: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x1b8388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b838c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B838Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B838Cu;
        // 0x1b8390: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B838Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8394u;
    // 0x1b8394: 0x0  nop
    ctx->pc = 0x1b8394u;
    // NOP
    ctx->pc = 0x1b8398u;
}
