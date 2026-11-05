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

// Function: sub_001A0CD0
// Address: 0x1a0cd0 - 0x1a0e80
void sub_001A0CD0_0x1a0cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0CD0_0x1a0cd0");
#endif

    switch (ctx->pc) {
        case 0x1a0cfcu: goto label_1a0cfc;
        case 0x1a0e54u: goto label_1a0e54;
        default: break;
    }

    ctx->pc = 0x1a0cd0u;

    // 0x1a0cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0cd4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1a0cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1a0cd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0cdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a0cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a0ce0: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1a0ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ce4: 0x8c620924  lw          $v0, 0x924($v1)
    ctx->pc = 0x1a0ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F0924u));
    // 0x1a0ce8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a0ce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0cec: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1A0CECu;
    {
        const bool branch_taken_0x1a0cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CECu;
        // 0x1a0cf0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0cec) {
            ctx->pc = 0x1A0E6Cu;
            goto label_1a0e6c;
        }
    }
    ctx->pc = 0x1A0CF4u;
    // 0x1a0cf4: 0xc061a26  jal         func_186898
    ctx->pc = 0x1A0CF4u;
    SET_GPR_U32(ctx, 31, 0x1A0CFCu);
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A0CF4u, 0x1A0CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0CFCu;
label_1a0cfc:
    // 0x1a0cfc: 0xc4410138  lwc1        $f1, 0x138($v0)
    ctx->pc = 0x1a0cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0d00: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1a0d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1a0d04: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1a0d04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1a0d08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a0d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0d0c: 0x0  nop
    ctx->pc = 0x1a0d0cu;
    // NOP
    // 0x1a0d10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a0d10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0d14: 0x0  nop
    ctx->pc = 0x1a0d14u;
    // NOP
    // 0x1a0d18: 0x45000048  bc1f        . + 4 + (0x48 << 2)
    ctx->pc = 0x1A0D18u;
    {
        const bool branch_taken_0x1a0d18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D18u;
        // 0x1a0d1c: 0x8e020924  lw          $v0, 0x924($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d18) {
            ctx->pc = 0x1A0E3Cu;
            goto label_1a0e3c;
        }
    }
    ctx->pc = 0x1A0D20u;
    // 0x1a0d20: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a0d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a0d24: 0x8c821004  lw          $v0, 0x1004($a0)
    ctx->pc = 0x1a0d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
    // 0x1a0d28: 0x8c430ff8  lw          $v1, 0xFF8($v0)
    ctx->pc = 0x1a0d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x1a0d2c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a0d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0d30: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x1a0d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1a0d34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0D34u;
    {
        const bool branch_taken_0x1a0d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D34u;
        // 0x1a0d38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d34) {
            ctx->pc = 0x1A0D48u;
            goto label_1a0d48;
        }
    }
    ctx->pc = 0x1A0D3Cu;
    // 0x1a0d3c: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1a0d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1a0d40: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1A0D40u;
    {
        const bool branch_taken_0x1a0d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D40u;
        // 0x1a0d44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d40) {
            ctx->pc = 0x1A0E34u;
            goto label_1a0e34;
        }
    }
    ctx->pc = 0x1A0D48u;
label_1a0d48:
    // 0x1a0d48: 0x8ca31004  lw          $v1, 0x1004($a1)
    ctx->pc = 0x1a0d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4100)));
    // 0x1a0d4c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a0d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1a0d50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a0d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d54: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1a0d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1a0d58: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a0d58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a0d5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a0d5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a0d60: 0xc4601074  lwc1        $f0, 0x1074($v1)
    ctx->pc = 0x1a0d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0d64: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a0d64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1a0d68: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0D68u;
    {
        const bool branch_taken_0x1a0d68 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A0D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D68u;
        // 0x1a0d6c: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d68) {
            ctx->pc = 0x1A0D84u;
            goto label_1a0d84;
        }
    }
    ctx->pc = 0x1A0D70u;
    // 0x1a0d70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a0d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a0d74: 0x0  nop
    ctx->pc = 0x1a0d74u;
    // NOP
    // 0x1a0d78: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a0d78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a0d7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A0D7Cu;
    {
        const bool branch_taken_0x1a0d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0d7c) {
            ctx->pc = 0x1A0DA0u;
            goto label_1a0da0;
        }
    }
    ctx->pc = 0x1A0D84u;
label_1a0d84:
    // 0x1a0d84: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1a0d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1a0d88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a0d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a0d8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a0d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a0d90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a0d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a0d94: 0x0  nop
    ctx->pc = 0x1a0d94u;
    // NOP
    // 0x1a0d98: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a0d98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a0d9c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a0d9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a0da0:
    // 0x1a0da0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a0da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a0da4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a0da4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a0da8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a0da8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0dac: 0x0  nop
    ctx->pc = 0x1a0dacu;
    // NOP
    // 0x1a0db0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a0db0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a0db4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1a0db4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0db8: 0x0  nop
    ctx->pc = 0x1a0db8u;
    // NOP
    // 0x1a0dbc: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x1A0DBCu;
    {
        const bool branch_taken_0x1a0dbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DBCu;
        // 0x1a0dc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0dbc) {
            ctx->pc = 0x1A0E34u;
            goto label_1a0e34;
        }
    }
    ctx->pc = 0x1A0DC4u;
    // 0x1a0dc4: 0xc4a11074  lwc1        $f1, 0x1074($a1)
    ctx->pc = 0x1a0dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0dc8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1a0dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1a0dcc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a0dccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a0dd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a0dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0dd4: 0x8c822b00  lw          $v0, 0x2B00($a0)
    ctx->pc = 0x1a0dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11008)));
    // 0x1a0dd8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0DD8u;
    {
        const bool branch_taken_0x1a0dd8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A0DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DD8u;
        // 0x1a0ddc: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0dd8) {
            ctx->pc = 0x1A0DF4u;
            goto label_1a0df4;
        }
    }
    ctx->pc = 0x1A0DE0u;
    // 0x1a0de0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a0de0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a0de4: 0x0  nop
    ctx->pc = 0x1a0de4u;
    // NOP
    // 0x1a0de8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a0de8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a0dec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A0DECu;
    {
        const bool branch_taken_0x1a0dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0dec) {
            ctx->pc = 0x1A0E10u;
            goto label_1a0e10;
        }
    }
    ctx->pc = 0x1A0DF4u;
label_1a0df4:
    // 0x1a0df4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1a0df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1a0df8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a0df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a0dfc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a0dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a0e00: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a0e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a0e04: 0x0  nop
    ctx->pc = 0x1a0e04u;
    // NOP
    // 0x1a0e08: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a0e08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a0e0c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a0e0cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a0e10:
    // 0x1a0e10: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a0e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a0e14: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a0e14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a0e18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a0e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0e1c: 0x0  nop
    ctx->pc = 0x1a0e1cu;
    // NOP
    // 0x1a0e20: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a0e20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a0e24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a0e24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0e28: 0x0  nop
    ctx->pc = 0x1a0e28u;
    // NOP
    // 0x1a0e2c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0E2Cu;
    {
        const bool branch_taken_0x1a0e2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E2Cu;
        // 0x1a0e30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e2c) {
            ctx->pc = 0x1A0E38u;
            goto label_1a0e38;
        }
    }
    ctx->pc = 0x1A0E34u;
label_1a0e34:
    // 0x1a0e34: 0xae020924  sw          $v0, 0x924($s0)
    ctx->pc = 0x1a0e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2340), GPR_U32(ctx, 2));
label_1a0e38:
    // 0x1a0e38: 0x8e020924  lw          $v0, 0x924($s0)
    ctx->pc = 0x1a0e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2340)));
label_1a0e3c:
    // 0x1a0e3c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A0E3Cu;
    {
        const bool branch_taken_0x1a0e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E3Cu;
        // 0x1a0e40: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e3c) {
            ctx->pc = 0x1A0E6Cu;
            goto label_1a0e6c;
        }
    }
    ctx->pc = 0x1A0E44u;
    // 0x1a0e44: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a0e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a0e48: 0x8c621004  lw          $v0, 0x1004($v1)
    ctx->pc = 0x1a0e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    // 0x1a0e4c: 0xc0619f6  jal         func_1867D8
    ctx->pc = 0x1A0E4Cu;
    SET_GPR_U32(ctx, 31, 0x1A0E54u);
    ctx->pc = 0x1A0E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0E4Cu;
    // 0x1a0e50: 0x8c440ff4  lw          $a0, 0xFF4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1867D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1867D8u, 0x1A0E4Cu, 0x1A0E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0E54u;
label_1a0e54:
    // 0x1a0e54: 0xae020920  sw          $v0, 0x920($s0)
    ctx->pc = 0x1a0e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2336), GPR_U32(ctx, 2));
    // 0x1a0e58: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1a0e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1a0e5c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1a0e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1a0e60: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a0e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a0e64: 0xac400930  sw          $zero, 0x930($v0)
    ctx->pc = 0x1a0e64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F0930u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F0930u, _value); } while (0);
    // 0x1a0e68: 0xac83092c  sw          $v1, 0x92C($a0)
    ctx->pc = 0x1a0e68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F092Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F092Cu, _value); } while (0);
label_1a0e6c:
    // 0x1a0e6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0e70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a0e70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a0e74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0e78: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E78u;
        // 0x1a0e7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0E80u;
}
