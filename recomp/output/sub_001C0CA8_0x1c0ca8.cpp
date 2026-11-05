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

// Function: sub_001C0CA8
// Address: 0x1c0ca8 - 0x1c17b8
void sub_001C0CA8_0x1c0ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0CA8_0x1c0ca8");
#endif

    switch (ctx->pc) {
        case 0x1c112cu: goto label_1c112c;
        case 0x1c1390u: goto label_1c1390;
        case 0x1c14e4u: goto label_1c14e4;
        case 0x1c14f0u: goto label_1c14f0;
        case 0x1c1500u: goto label_1c1500;
        case 0x1c15dcu: goto label_1c15dc;
        case 0x1c15ecu: goto label_1c15ec;
        case 0x1c15f8u: goto label_1c15f8;
        case 0x1c16b0u: goto label_1c16b0;
        case 0x1c174cu: goto label_1c174c;
        case 0x1c1764u: goto label_1c1764;
        default: break;
    }

    ctx->pc = 0x1c0ca8u;

    // 0x1c0ca8: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1c0ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1c0cac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c0cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0cb0: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x1c0cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
    // 0x1c0cb4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1c0cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1c0cb8: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x1c0cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x1c0cbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c0cbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0cc0: 0xffb500f8  sd          $s5, 0xF8($sp)
    ctx->pc = 0x1c0cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 21));
    // 0x1c0cc4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1c0cc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0cc8: 0xffb60100  sd          $s6, 0x100($sp)
    ctx->pc = 0x1c0cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
    // 0x1c0ccc: 0x24631408  addiu       $v1, $v1, 0x1408
    ctx->pc = 0x1c0cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5128));
    // 0x1c0cd0: 0xffbe0110  sd          $fp, 0x110($sp)
    ctx->pc = 0x1c0cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 30));
    // 0x1c0cd4: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x1c0cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1c0cd8: 0xe7b70138  swc1        $f23, 0x138($sp)
    ctx->pc = 0x1c0cd8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x1c0cdc: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x1c0cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x1c0ce0: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x1c0ce0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1c0ce4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1c0ce4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ce8: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x1c0ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x1c0cec: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1c0cecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0cf0: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x1c0cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
    // 0x1c0cf4: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x1c0cf4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x1c0cf8: 0xffb300e8  sd          $s3, 0xE8($sp)
    ctx->pc = 0x1c0cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 19));
    // 0x1c0cfc: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x1c0cfcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x1c0d00: 0xffb70108  sd          $s7, 0x108($sp)
    ctx->pc = 0x1c0d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 23));
    // 0x1c0d04: 0xffbf0118  sd          $ra, 0x118($sp)
    ctx->pc = 0x1c0d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 31));
    // 0x1c0d08: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x1c0d08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x1c0d0c: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x1c0d0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x1c0d10: 0xae2204b0  sw          $v0, 0x4B0($s1)
    ctx->pc = 0x1c0d10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1200), GPR_U32(ctx, 2));
    // 0x1c0d14: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1c0d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c0d18: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x1c0d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0d1c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1c0d1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0d20: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x1c0d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0d24: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x1c0d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c0d28: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x1c0d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c0d2c: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x1c0d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c0d30: 0x8e880010  lw          $t0, 0x10($s4)
    ctx->pc = 0x1c0d30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1c0d34: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x1c0d34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1c0d38: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1c0d38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c0d3c: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x1c0d3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c0d40: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x1c0d40u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c0d44: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1c0d44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1c0d48: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x1c0d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x1c0d4c: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x1c0d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x1c0d50: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1c0d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1c0d54: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1c0d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1c0d58: 0x8ce52b00  lw          $a1, 0x2B00($a3)
    ctx->pc = 0x1c0d58u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x482B00u));
    // 0x1c0d5c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1c0d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0d60: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1c0d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1c0d64: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1c0d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0d68: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1c0d68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1c0d6c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1c0d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0d70: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0D70u;
    {
        const bool branch_taken_0x1c0d70 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1C0D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D70u;
        // 0x1c0d74: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d70) {
            ctx->pc = 0x1C0D8Cu;
            goto label_1c0d8c;
        }
    }
    ctx->pc = 0x1C0D78u;
    // 0x1c0d78: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1c0d78u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0d7c: 0x0  nop
    ctx->pc = 0x1c0d7cu;
    // NOP
    // 0x1c0d80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c0d80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c0d84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0D84u;
    {
        const bool branch_taken_0x1c0d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0d84) {
            ctx->pc = 0x1C0DA8u;
            goto label_1c0da8;
        }
    }
    ctx->pc = 0x1C0D8Cu;
label_1c0d8c:
    // 0x1c0d8c: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x1c0d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x1c0d90: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1c0d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1c0d94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c0d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c0d98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c0d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0d9c: 0x0  nop
    ctx->pc = 0x1c0d9cu;
    // NOP
    // 0x1c0da0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c0da0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c0da4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c0da4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1c0da8:
    // 0x1c0da8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1c0da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1c0dac: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1c0dacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1c0db0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0db4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1c0db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1c0db8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c0db8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c0dbc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c0dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c0dc0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c0dc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c0dc4: 0xc62104cc  lwc1        $f1, 0x4CC($s1)
    ctx->pc = 0x1c0dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0dc8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c0dc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c0dcc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c0dccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0dd0: 0x0  nop
    ctx->pc = 0x1c0dd0u;
    // NOP
    // 0x1c0dd4: 0x4500007b  bc1f        . + 4 + (0x7B << 2)
    ctx->pc = 0x1C0DD4u;
    {
        const bool branch_taken_0x1c0dd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0DD4u;
        // 0x1c0dd8: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0dd4) {
            ctx->pc = 0x1C0FC4u;
            goto label_1c0fc4;
        }
    }
    ctx->pc = 0x1C0DDCu;
    // 0x1c0ddc: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1c0ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1c0de0: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1c0de0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1c0de4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c0de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0de8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1c0de8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x1c0dec: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1c0decu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1c0df0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c0df0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0df4: 0x0  nop
    ctx->pc = 0x1c0df4u;
    // NOP
    // 0x1c0df8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1C0DF8u;
    {
        const bool branch_taken_0x1c0df8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0DF8u;
        // 0x1c0dfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0df8) {
            ctx->pc = 0x1C0E30u;
            goto label_1c0e30;
        }
    }
    ctx->pc = 0x1C0E00u;
    // 0x1c0e00: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x1c0e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0e04: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1c0e04u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1c0e08: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c0e08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0e0c: 0x0  nop
    ctx->pc = 0x1c0e0cu;
    // NOP
    // 0x1c0e10: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0E10u;
    {
        const bool branch_taken_0x1c0e10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c0e10) {
            ctx->pc = 0x1C0E30u;
            goto label_1c0e30;
        }
    }
    ctx->pc = 0x1C0E18u;
    // 0x1c0e18: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x1c0e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0e1c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1c0e1cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1c0e20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c0e20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0e24: 0x0  nop
    ctx->pc = 0x1c0e24u;
    // NOP
    // 0x1c0e28: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C0E28u;
    {
        const bool branch_taken_0x1c0e28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c0e28) {
            ctx->pc = 0x1C0E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0E28u;
            // 0x1c0e2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0E30u;
            goto label_1c0e30;
        }
    }
    ctx->pc = 0x1C0E30u;
label_1c0e30:
    // 0x1c0e30: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x1C0E30u;
    {
        const bool branch_taken_0x1c0e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e30) {
            ctx->pc = 0x1C0E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0E30u;
            // 0x1c0e34: 0x46001005  abs.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_ABS_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0F10u;
            goto label_1c0f10;
        }
    }
    ctx->pc = 0x1C0E38u;
    // 0x1c0e38: 0xc6200470  lwc1        $f0, 0x470($s1)
    ctx->pc = 0x1c0e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0e3c: 0x26220470  addiu       $v0, $s1, 0x470
    ctx->pc = 0x1c0e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1136));
    // 0x1c0e40: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1c0e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1c0e44: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1c0e44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1c0e48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c0e48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0e4c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1c0e4cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1c0e50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c0e50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0e54: 0x0  nop
    ctx->pc = 0x1c0e54u;
    // NOP
    // 0x1c0e58: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1C0E58u;
    {
        const bool branch_taken_0x1c0e58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E58u;
        // 0x1c0e5c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e58) {
            ctx->pc = 0x1C0E90u;
            goto label_1c0e90;
        }
    }
    ctx->pc = 0x1C0E60u;
    // 0x1c0e60: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1c0e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0e64: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1c0e64u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1c0e68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c0e68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0e6c: 0x0  nop
    ctx->pc = 0x1c0e6cu;
    // NOP
    // 0x1c0e70: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0E70u;
    {
        const bool branch_taken_0x1c0e70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c0e70) {
            ctx->pc = 0x1C0E90u;
            goto label_1c0e90;
        }
    }
    ctx->pc = 0x1C0E78u;
    // 0x1c0e78: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c0e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0e7c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1c0e7cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1c0e80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c0e80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0e84: 0x0  nop
    ctx->pc = 0x1c0e84u;
    // NOP
    // 0x1c0e88: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C0E88u;
    {
        const bool branch_taken_0x1c0e88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c0e88) {
            ctx->pc = 0x1C0E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0E88u;
            // 0x1c0e8c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0E90u;
            goto label_1c0e90;
        }
    }
    ctx->pc = 0x1C0E90u;
label_1c0e90:
    // 0x1c0e90: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C0E90u;
    {
        const bool branch_taken_0x1c0e90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E90u;
        // 0x1c0e94: 0x8ec22b00  lw          $v0, 0x2B00($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e90) {
            ctx->pc = 0x1C0F0Cu;
            goto label_1c0f0c;
        }
    }
    ctx->pc = 0x1C0E98u;
    // 0x1c0e98: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0E98u;
    {
        const bool branch_taken_0x1c0e98 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C0E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E98u;
        // 0x1c0e9c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e98) {
            ctx->pc = 0x1C0EB4u;
            goto label_1c0eb4;
        }
    }
    ctx->pc = 0x1C0EA0u;
    // 0x1c0ea0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0ea4: 0x0  nop
    ctx->pc = 0x1c0ea4u;
    // NOP
    // 0x1c0ea8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c0ea8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c0eac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0EACu;
    {
        const bool branch_taken_0x1c0eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EACu;
        // 0x1c0eb0: 0x8e2204bc  lw          $v0, 0x4BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0eac) {
            ctx->pc = 0x1C0ED0u;
            goto label_1c0ed0;
        }
    }
    ctx->pc = 0x1C0EB4u;
label_1c0eb4:
    // 0x1c0eb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c0eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c0eb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c0eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c0ebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0ec0: 0x0  nop
    ctx->pc = 0x1c0ec0u;
    // NOP
    // 0x1c0ec4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c0ec4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c0ec8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c0ec8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1c0ecc: 0x8e2204bc  lw          $v0, 0x4BC($s1)
    ctx->pc = 0x1c0eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1212)));
label_1c0ed0:
    // 0x1c0ed0: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x1c0ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1c0ed4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1c0ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1c0ed8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1c0ed8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1c0edc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c0edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0ee0: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1c0ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1c0ee4: 0x8c440ff4  lw          $a0, 0xFF4($v0)
    ctx->pc = 0x1c0ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4084)));
    // 0x1c0ee8: 0x2463bdc0  addiu       $v1, $v1, -0x4240
    ctx->pc = 0x1c0ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950336));
    // 0x1c0eec: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c0eecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c0ef0: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x1c0ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1c0ef4: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1c0ef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c0ef8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c0ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0efc: 0xc4400170  lwc1        $f0, 0x170($v0)
    ctx->pc = 0x1c0efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0f00: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c0f00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c0f04: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1C0F04u;
    {
        const bool branch_taken_0x1c0f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F04u;
        // 0x1c0f08: 0xe62104c4  swc1        $f1, 0x4C4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f04) {
            ctx->pc = 0x1C0FC4u;
            goto label_1c0fc4;
        }
    }
    ctx->pc = 0x1C0F0Cu;
label_1c0f0c:
    // 0x1c0f0c: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x1c0f0cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
label_1c0f10:
    // 0x1c0f10: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1c0f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1c0f14: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1c0f14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1c0f18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c0f18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0f1c: 0x0  nop
    ctx->pc = 0x1c0f1cu;
    // NOP
    // 0x1c0f20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c0f20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0f24: 0x0  nop
    ctx->pc = 0x1c0f24u;
    // NOP
    // 0x1c0f28: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1C0F28u;
    {
        const bool branch_taken_0x1c0f28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F28u;
        // 0x1c0f2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f28) {
            ctx->pc = 0x1C0F60u;
            goto label_1c0f60;
        }
    }
    ctx->pc = 0x1C0F30u;
    // 0x1c0f30: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x1c0f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0f34: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1c0f34u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1c0f38: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c0f38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0f3c: 0x0  nop
    ctx->pc = 0x1c0f3cu;
    // NOP
    // 0x1c0f40: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0F40u;
    {
        const bool branch_taken_0x1c0f40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c0f40) {
            ctx->pc = 0x1C0F60u;
            goto label_1c0f60;
        }
    }
    ctx->pc = 0x1C0F48u;
    // 0x1c0f48: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x1c0f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0f4c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1c0f4cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1c0f50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c0f50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0f54: 0x0  nop
    ctx->pc = 0x1c0f54u;
    // NOP
    // 0x1c0f58: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C0F58u;
    {
        const bool branch_taken_0x1c0f58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c0f58) {
            ctx->pc = 0x1C0F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0F58u;
            // 0x1c0f5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0F60u;
            goto label_1c0f60;
        }
    }
    ctx->pc = 0x1C0F60u;
label_1c0f60:
    // 0x1c0f60: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C0F60u;
    {
        const bool branch_taken_0x1c0f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F60u;
        // 0x1c0f64: 0x26220470  addiu       $v0, $s1, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f60) {
            ctx->pc = 0x1C0FC4u;
            goto label_1c0fc4;
        }
    }
    ctx->pc = 0x1C0F68u;
    // 0x1c0f68: 0xc6200470  lwc1        $f0, 0x470($s1)
    ctx->pc = 0x1c0f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0f6c: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1c0f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1c0f70: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1c0f70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1c0f74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c0f74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0f78: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1c0f78u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1c0f7c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c0f7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0f80: 0x0  nop
    ctx->pc = 0x1c0f80u;
    // NOP
    // 0x1c0f84: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1C0F84u;
    {
        const bool branch_taken_0x1c0f84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F84u;
        // 0x1c0f88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f84) {
            ctx->pc = 0x1C0FBCu;
            goto label_1c0fbc;
        }
    }
    ctx->pc = 0x1C0F8Cu;
    // 0x1c0f8c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1c0f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0f90: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1c0f90u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1c0f94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c0f94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0f98: 0x0  nop
    ctx->pc = 0x1c0f98u;
    // NOP
    // 0x1c0f9c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0F9Cu;
    {
        const bool branch_taken_0x1c0f9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c0f9c) {
            ctx->pc = 0x1C0FBCu;
            goto label_1c0fbc;
        }
    }
    ctx->pc = 0x1C0FA4u;
    // 0x1c0fa4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c0fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0fa8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1c0fa8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1c0fac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c0facu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0fb0: 0x0  nop
    ctx->pc = 0x1c0fb0u;
    // NOP
    // 0x1c0fb4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C0FB4u;
    {
        const bool branch_taken_0x1c0fb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c0fb4) {
            ctx->pc = 0x1C0FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0FB4u;
            // 0x1c0fb8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0FBCu;
            goto label_1c0fbc;
        }
    }
    ctx->pc = 0x1C0FBCu;
label_1c0fbc:
    // 0x1c0fbc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C0FBCu;
    {
        const bool branch_taken_0x1c0fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0fbc) {
            ctx->pc = 0x1C0FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0FBCu;
            // 0x1c0fc0: 0xae2004c4  sw          $zero, 0x4C4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1220), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0FC4u;
            goto label_1c0fc4;
        }
    }
    ctx->pc = 0x1C0FC4u;
label_1c0fc4:
    // 0x1c0fc4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1c0fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0fc8: 0x26240450  addiu       $a0, $s1, 0x450
    ctx->pc = 0x1c0fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1104));
    // 0x1c0fcc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1c0fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0fd0: 0xe6200450  swc1        $f0, 0x450($s1)
    ctx->pc = 0x1c0fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1104), bits); }
    // 0x1c0fd4: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1c0fd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1c0fd8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1c0fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0fdc: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1c0fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1c0fe0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c0fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0fe4: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1c0fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1c0fe8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1c0fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c0fec: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1c0fecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1c0ff0: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1c0ff0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c0ff4: 0xfa210470  sqc2        $vf1, 0x470($s1)
    ctx->pc = 0x1c0ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1136), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c0ff8: 0x8ec22b00  lw          $v0, 0x2B00($s6)
    ctx->pc = 0x1c0ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11008)));
    // 0x1c0ffc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0FFCu;
    {
        const bool branch_taken_0x1c0ffc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FFCu;
        // 0x1c1000: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ffc) {
            ctx->pc = 0x1C1018u;
            goto label_1c1018;
        }
    }
    ctx->pc = 0x1C1004u;
    // 0x1c1004: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c1004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c1008: 0x0  nop
    ctx->pc = 0x1c1008u;
    // NOP
    // 0x1c100c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c100cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c1010: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1010u;
    {
        const bool branch_taken_0x1c1010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1010) {
            ctx->pc = 0x1C1034u;
            goto label_1c1034;
        }
    }
    ctx->pc = 0x1C1018u;
label_1c1018:
    // 0x1c1018: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1c1018u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1c101c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c101cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c1020: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c1020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c1024: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c1024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c1028: 0x0  nop
    ctx->pc = 0x1c1028u;
    // NOP
    // 0x1c102c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c102cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c1030: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1c1030u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1c1034:
    // 0x1c1034: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1c1034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1c1038: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1c1038u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1c103c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c103cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1040: 0xc62104c4  lwc1        $f1, 0x4C4($s1)
    ctx->pc = 0x1c1040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1044: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1c1044u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1c1048: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c1048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c104c: 0x0  nop
    ctx->pc = 0x1c104cu;
    // NOP
    // 0x1c1050: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1050u;
    {
        const bool branch_taken_0x1c1050 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1050u;
        // 0x1c1054: 0x26220440  addiu       $v0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1050) {
            ctx->pc = 0x1C106Cu;
            goto label_1c106c;
        }
    }
    ctx->pc = 0x1C1058u;
    // 0x1c1058: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c1058u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c105c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1c105cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c1060: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c1060u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1064: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1C1064u;
    {
        const bool branch_taken_0x1c1064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1064u;
        // 0x1c1068: 0x26320420  addiu       $s2, $s1, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1064) {
            ctx->pc = 0x1C1120u;
            goto label_1c1120;
        }
    }
    ctx->pc = 0x1C106Cu;
label_1c106c:
    // 0x1c106c: 0x8ec22b00  lw          $v0, 0x2B00($s6)
    ctx->pc = 0x1c106cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11008)));
    // 0x1c1070: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1070u;
    {
        const bool branch_taken_0x1c1070 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C1074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1070u;
        // 0x1c1074: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1070) {
            ctx->pc = 0x1C108Cu;
            goto label_1c108c;
        }
    }
    ctx->pc = 0x1C1078u;
    // 0x1c1078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c107c: 0x0  nop
    ctx->pc = 0x1c107cu;
    // NOP
    // 0x1c1080: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c1080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c1084: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1084u;
    {
        const bool branch_taken_0x1c1084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1084u;
        // 0x1c1088: 0x8e2204bc  lw          $v0, 0x4BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1084) {
            ctx->pc = 0x1C10A8u;
            goto label_1c10a8;
        }
    }
    ctx->pc = 0x1C108Cu;
label_1c108c:
    // 0x1c108c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c108cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c1090: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c1090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c1094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1098: 0x0  nop
    ctx->pc = 0x1c1098u;
    // NOP
    // 0x1c109c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c109cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c10a0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c10a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1c10a4: 0x8e2204bc  lw          $v0, 0x4BC($s1)
    ctx->pc = 0x1c10a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1212)));
label_1c10a8:
    // 0x1c10a8: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x1c10a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1c10ac: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1c10acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1c10b0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1c10b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1c10b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c10b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c10b8: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1c10b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1c10bc: 0x8c450ff4  lw          $a1, 0xFF4($v0)
    ctx->pc = 0x1c10bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4084)));
    // 0x1c10c0: 0x2463bdc0  addiu       $v1, $v1, -0x4240
    ctx->pc = 0x1c10c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950336));
    // 0x1c10c4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c10c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c10c8: 0xc6220450  lwc1        $f2, 0x450($s1)
    ctx->pc = 0x1c10c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c10cc: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x1c10ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x1c10d0: 0x26240420  addiu       $a0, $s1, 0x420
    ctx->pc = 0x1c10d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1056));
    // 0x1c10d4: 0x26250470  addiu       $a1, $s1, 0x470
    ctx->pc = 0x1c10d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1136));
    // 0x1c10d8: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1c10d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c10dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c10dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c10e0: 0xc440016c  lwc1        $f0, 0x16C($v0)
    ctx->pc = 0x1c10e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c10e4: 0xe6220420  swc1        $f2, 0x420($s1)
    ctx->pc = 0x1c10e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1056), bits); }
    // 0x1c10e8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c10e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c10ec: 0xe62104c4  swc1        $f1, 0x4C4($s1)
    ctx->pc = 0x1c10ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1220), bits); }
    // 0x1c10f0: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x1c10f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c10f4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1c10f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1c10f8: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x1c10f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c10fc: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1c10fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1c1100: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x1c1100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1c1104: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1c1104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1c1108: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x1c1108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1c110c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1c110cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1c1110: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1c1110u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c1114: 0xfa210440  sqc2        $vf1, 0x440($s1)
    ctx->pc = 0x1c1114u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1088), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c1118: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c1118u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c111c: 0x26330440  addiu       $s3, $s1, 0x440
    ctx->pc = 0x1c111cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
label_1c1120:
    // 0x1c1120: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1c1120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c1124: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C1124u;
    SET_GPR_U32(ctx, 31, 0x1C112Cu);
    ctx->pc = 0x1C1128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1124u;
    // 0x1c1128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C1124u, 0x1C112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C112Cu;
label_1c112c:
    // 0x1c112c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1c112cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1c1130: 0x26240480  addiu       $a0, $s1, 0x480
    ctx->pc = 0x1c1130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1152));
    // 0x1c1134: 0x24620f90  addiu       $v0, $v1, 0xF90
    ctx->pc = 0x1c1134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x1c1138: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1c1138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1c113c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1c113cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c1140: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1c1140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1c1144: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1c1144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1c1148: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1c1148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c114c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1c114cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1150: 0xe6200480  swc1        $f0, 0x480($s1)
    ctx->pc = 0x1c1150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1152), bits); }
    // 0x1c1154: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1c1154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1c1158: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1c1158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1c115c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1c115cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1c1160: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1c1160u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1c1164: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1c1164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1168: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1c1168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1c116c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c116cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1170: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1c1170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1c1174: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1c1174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c1178: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1c1178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1c117c: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1c117cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c1180: 0xfa2104a0  sqc2        $vf1, 0x4A0($s1)
    ctx->pc = 0x1c1180u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1184), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c1184: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x1c1184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c1188: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x1c1188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c118c: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x1c118cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c1190: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c1190u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c1194: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c1194u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c1198: 0x4604255c  madd.s      $f21, $f4, $f4
    ctx->pc = 0x1c1198u;
    ctx->f[21] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c119c: 0x46150544  c1          0x150544
    ctx->pc = 0x1c119cu;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c11a0: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x1c11a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c11a4: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x1c11a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c11a8: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x1c11a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c11ac: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c11acu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c11b0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c11b0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c11b4: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x1c11b4u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c11b8: 0x46050144  c1          0x50144
    ctx->pc = 0x1c11b8u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c11bc: 0x8ec22b00  lw          $v0, 0x2B00($s6)
    ctx->pc = 0x1c11bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11008)));
    // 0x1c11c0: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x1c11c0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11c4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C11C4u;
    {
        const bool branch_taken_0x1c11c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C11C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11C4u;
        // 0x1c11c8: 0xafa400c0  sw          $a0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11c4) {
            ctx->pc = 0x1C11E0u;
            goto label_1c11e0;
        }
    }
    ctx->pc = 0x1C11CCu;
    // 0x1c11cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c11ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c11d0: 0x0  nop
    ctx->pc = 0x1c11d0u;
    // NOP
    // 0x1c11d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c11d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c11d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C11D8u;
    {
        const bool branch_taken_0x1c11d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c11d8) {
            ctx->pc = 0x1C11FCu;
            goto label_1c11fc;
        }
    }
    ctx->pc = 0x1C11E0u;
label_1c11e0:
    // 0x1c11e0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1c11e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1c11e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c11e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c11e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c11e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c11ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c11ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c11f0: 0x0  nop
    ctx->pc = 0x1c11f0u;
    // NOP
    // 0x1c11f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c11f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c11f8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c11f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1c11fc:
    // 0x1c11fc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1c11fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1c1200: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1c1200u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1c1204: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c1204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1208: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c1208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c120c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c120cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c1210: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c1210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c1214: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c1214u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c1218: 0xc62104cc  lwc1        $f1, 0x4CC($s1)
    ctx->pc = 0x1c1218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c121c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c121cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c1220: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c1220u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1224: 0x0  nop
    ctx->pc = 0x1c1224u;
    // NOP
    // 0x1c1228: 0x450000c6  bc1f        . + 4 + (0xC6 << 2)
    ctx->pc = 0x1C1228u;
    {
        const bool branch_taken_0x1c1228 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1228u;
        // 0x1c122c: 0x8ec22b00  lw          $v0, 0x2B00($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1228) {
            ctx->pc = 0x1C1544u;
            goto label_1c1544;
        }
    }
    ctx->pc = 0x1C1230u;
    // 0x1c1230: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1c1230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1c1234: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c1234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1238: 0x0  nop
    ctx->pc = 0x1c1238u;
    // NOP
    // 0x1c123c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1c123cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1240: 0x0  nop
    ctx->pc = 0x1c1240u;
    // NOP
    // 0x1c1244: 0x450000bf  bc1f        . + 4 + (0xBF << 2)
    ctx->pc = 0x1C1244u;
    {
        const bool branch_taken_0x1c1244 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c1244) {
            ctx->pc = 0x1C1544u;
            goto label_1c1544;
        }
    }
    ctx->pc = 0x1C124Cu;
    // 0x1c124c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x1c124cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1250: 0x0  nop
    ctx->pc = 0x1c1250u;
    // NOP
    // 0x1c1254: 0x450000bb  bc1f        . + 4 + (0xBB << 2)
    ctx->pc = 0x1C1254u;
    {
        const bool branch_taken_0x1c1254 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1254u;
        // 0x1c1258: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1254) {
            ctx->pc = 0x1C1544u;
            goto label_1c1544;
        }
    }
    ctx->pc = 0x1C125Cu;
    // 0x1c125c: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x1c125cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1260: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x1c1260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1264: 0xc6a2000c  lwc1        $f2, 0xC($s5)
    ctx->pc = 0x1c1264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c1268: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x1c1268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c126c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1c126cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1c1270: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x1c1270u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1c1274: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x1c1274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1c1278: 0xe7a2005c  swc1        $f2, 0x5C($sp)
    ctx->pc = 0x1c1278u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1c127c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1c127cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c1280: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1c1280u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c1284: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1c1284u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c1288: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1c1288u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c128c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c128cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c1290: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c1290u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c1294: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1c1294u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c1298: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1c1298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c129c: 0xc6210440  lwc1        $f1, 0x440($s1)
    ctx->pc = 0x1c129cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c12a0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c12a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c12a4: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x1c12a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1c12a8: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1c12a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c12ac: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1c12acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1c12b0: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x1c12b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c12b4: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x1c12b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1c12b8: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1c12b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c12bc: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1c12bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1c12c0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1c12c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c12c4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1c12c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c12c8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1c12c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c12cc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1c12ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c12d0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c12d0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c12d4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c12d4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c12d8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1c12d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c12dc: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1c12dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c12e0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1c12e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c12e4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1c12e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c12e8: 0xe6200420  swc1        $f0, 0x420($s1)
    ctx->pc = 0x1c12e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1056), bits); }
    // 0x1c12ec: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x1c12ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1c12f0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1c12f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c12f4: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1c12f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1c12f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c12f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c12fc: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1c12fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1c1300: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1c1300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c1304: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x1c1304u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x1c1308: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1c1308u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c130c: 0xfa210440  sqc2        $vf1, 0x440($s1)
    ctx->pc = 0x1c130cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1088), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c1310: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1c1310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c1314: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x1c1314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c1318: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1c1318u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c131c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1c131cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c1320: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x1c1320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c1324: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1c1324u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1c1328: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x1c1328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c132c: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x1c132cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c1330: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x1c1330u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c1334: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1c1334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1c1338: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c1338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c133c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c133cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1340: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c1340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c1344: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c1344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c1348: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x1c1348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c134c: 0x0  nop
    ctx->pc = 0x1c134cu;
    // NOP
    // 0x1c1350: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1350u;
    {
        const bool branch_taken_0x1c1350 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1350u;
        // 0x1c1354: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1350) {
            ctx->pc = 0x1C1360u;
            goto label_1c1360;
        }
    }
    ctx->pc = 0x1C1358u;
    // 0x1c1358: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1358u;
    {
        const bool branch_taken_0x1c1358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1358u;
        // 0x1c135c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1358) {
            ctx->pc = 0x1C1370u;
            goto label_1c1370;
        }
    }
    ctx->pc = 0x1C1360u;
label_1c1360:
    // 0x1c1360: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x1c1360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1364: 0x0  nop
    ctx->pc = 0x1c1364u;
    // NOP
    // 0x1c1368: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C1368u;
    {
        const bool branch_taken_0x1c1368 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c1368) {
            ctx->pc = 0x1C136Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1368u;
            // 0x1c136c: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1370u;
            goto label_1c1370;
        }
    }
    ctx->pc = 0x1C1370u;
label_1c1370:
    // 0x1c1370: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x1c1370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1c1374: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c1374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c1378: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c1378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c137c: 0x0  nop
    ctx->pc = 0x1c137cu;
    // NOP
    // 0x1c1380: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1c1380u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1c1384: 0x460c0304  c1          0xC0304
    ctx->pc = 0x1c1384u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c1388: 0xc0e404c  jal         func_390130
    ctx->pc = 0x1C1388u;
    SET_GPR_U32(ctx, 31, 0x1C1390u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x1C1388u, 0x1C1390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1390u;
label_1c1390:
    // 0x1c1390: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1c1390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x1c1394: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1c1394u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x1c1398: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c1398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c139c: 0x8ec22b00  lw          $v0, 0x2B00($s6)
    ctx->pc = 0x1c139cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11008)));
    // 0x1c13a0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C13A0u;
    {
        const bool branch_taken_0x1c13a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C13A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C13A0u;
        // 0x1c13a4: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c13a0) {
            ctx->pc = 0x1C13BCu;
            goto label_1c13bc;
        }
    }
    ctx->pc = 0x1C13A8u;
    // 0x1c13a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c13a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c13ac: 0x0  nop
    ctx->pc = 0x1c13acu;
    // NOP
    // 0x1c13b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c13b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c13b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C13B4u;
    {
        const bool branch_taken_0x1c13b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c13b4) {
            ctx->pc = 0x1C13D8u;
            goto label_1c13d8;
        }
    }
    ctx->pc = 0x1C13BCu;
label_1c13bc:
    // 0x1c13bc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1c13bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1c13c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c13c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c13c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c13c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c13c8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c13c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c13cc: 0x0  nop
    ctx->pc = 0x1c13ccu;
    // NOP
    // 0x1c13d0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c13d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c13d4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1c13d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1c13d8:
    // 0x1c13d8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1c13d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1c13dc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1c13dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1c13e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c13e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c13e4: 0xc62104cc  lwc1        $f1, 0x4CC($s1)
    ctx->pc = 0x1c13e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c13e8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1c13e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1c13ec: 0x8ec22b00  lw          $v0, 0x2B00($s6)
    ctx->pc = 0x1c13ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11008)));
    // 0x1c13f0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C13F0u;
    {
        const bool branch_taken_0x1c13f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C13F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C13F0u;
        // 0x1c13f4: 0x46010081  sub.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c13f0) {
            ctx->pc = 0x1C140Cu;
            goto label_1c140c;
        }
    }
    ctx->pc = 0x1C13F8u;
    // 0x1c13f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c13f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c13fc: 0x0  nop
    ctx->pc = 0x1c13fcu;
    // NOP
    // 0x1c1400: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c1400u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c1404: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1404u;
    {
        const bool branch_taken_0x1c1404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1404) {
            ctx->pc = 0x1C1428u;
            goto label_1c1428;
        }
    }
    ctx->pc = 0x1C140Cu;
label_1c140c:
    // 0x1c140c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1c140cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1c1410: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c1410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c1414: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c1414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c1418: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c1418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c141c: 0x0  nop
    ctx->pc = 0x1c141cu;
    // NOP
    // 0x1c1420: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c1420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c1424: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c1424u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1c1428:
    // 0x1c1428: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1c1428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1c142c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1c142cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1c1430: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c1430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1434: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x1c1434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1c1438: 0x8e2504bc  lw          $a1, 0x4BC($s1)
    ctx->pc = 0x1c1438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1212)));
    // 0x1c143c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1c143cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1c1440: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c1440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c1444: 0x2484bdc0  addiu       $a0, $a0, -0x4240
    ctx->pc = 0x1c1444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950336));
    // 0x1c1448: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c1448u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c144c: 0xe62004cc  swc1        $f0, 0x4CC($s1)
    ctx->pc = 0x1c144cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1228), bits); }
    // 0x1c1450: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x1c1450u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1454: 0x8ca30ff4  lw          $v1, 0xFF4($a1)
    ctx->pc = 0x1c1454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4084)));
    // 0x1c1458: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1c1458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1c145c: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1c145cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c1460: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c1460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c1464: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1464u;
    {
        const bool branch_taken_0x1c1464 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1464u;
        // 0x1c1468: 0xc4400168  lwc1        $f0, 0x168($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1464) {
            ctx->pc = 0x1C1478u;
            goto label_1c1478;
        }
    }
    ctx->pc = 0x1C146Cu;
    // 0x1c146c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1c146cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x1c1470: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1c1470u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1c1474: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c1474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c1478:
    // 0x1c1478: 0x0  nop
    ctx->pc = 0x1c1478u;
    // NOP
    // 0x1c147c: 0x0  nop
    ctx->pc = 0x1c147cu;
    // NOP
    // 0x1c1480: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1c1480u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1c1484: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1c1484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1c1488: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1c1488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c148c: 0x24525b40  addiu       $s2, $v0, 0x5B40
    ctx->pc = 0x1c148cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x1c1490: 0x460c0502  mul.s       $f20, $f0, $f12
    ctx->pc = 0x1c1490u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1c1494: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1c1494u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c1498: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1c1498u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(FAST_READ128(0x575B40u));
    // 0x1c149c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1c149cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1c14a0: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1c14a0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c14a4: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1c14a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c14a8: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x1c14a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c14ac: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1c14acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c14b0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1c14b0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c14b4: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x1c14b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c14b8: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1c14b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c14bc: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1c14bcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1c14c0: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x1c14c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c14c4: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x1c14c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c14c8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1c14c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c14cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c14ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c14d0: 0x0  nop
    ctx->pc = 0x1c14d0u;
    // NOP
    // 0x1c14d4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C14D4u;
    {
        const bool branch_taken_0x1c14d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c14d4) {
            ctx->pc = 0x1C14D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C14D4u;
            // 0x1c14d8: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
            ctx->f[20] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C14DCu;
            goto label_1c14dc;
        }
    }
    ctx->pc = 0x1C14DCu;
label_1c14dc:
    // 0x1c14dc: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1C14DCu;
    SET_GPR_U32(ctx, 31, 0x1C14E4u);
    ctx->pc = 0x1C14E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C14DCu;
    // 0x1c14e0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1C14DCu, 0x1C14E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C14E4u;
label_1c14e4:
    // 0x1c14e4: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x1c14e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c14e8: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1C14E8u;
    SET_GPR_U32(ctx, 31, 0x1C14F0u);
    ctx->pc = 0x1C14ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C14E8u;
    // 0x1c14ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1C14E8u, 0x1C14F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C14F0u;
label_1c14f0:
    // 0x1c14f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c14f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c14f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c14f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c14f8: 0xc0b1548  jal         func_2C5520
    ctx->pc = 0x1C14F8u;
    SET_GPR_U32(ctx, 31, 0x1C1500u);
    ctx->pc = 0x1C14FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C14F8u;
    // 0x1c14fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5520u, 0x1C14F8u, 0x1C1500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1500u;
label_1c1500:
    // 0x1c1500: 0x262204a0  addiu       $v0, $s1, 0x4A0
    ctx->pc = 0x1c1500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1184));
    // 0x1c1504: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1c1504u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c1508: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1c1508u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c150c: 0xda030010  lqc2        $vf3, 0x10($s0)
    ctx->pc = 0x1c150cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c1510: 0xda040020  lqc2        $vf4, 0x20($s0)
    ctx->pc = 0x1c1510u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c1514: 0xda050030  lqc2        $vf5, 0x30($s0)
    ctx->pc = 0x1c1514u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1c1518: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1c1518u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1c151c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1c151cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1c1520: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1c1520u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1c1524: 0xfa2504a0  sqc2        $vf5, 0x4A0($s1)
    ctx->pc = 0x1c1524u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1184), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1c1528: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x1c1528u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c152c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c152cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c1530: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1c1530u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c1534: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1c1534u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c1538: 0xfa2104a0  sqc2        $vf1, 0x4A0($s1)
    ctx->pc = 0x1c1538u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1184), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c153c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1C153Cu;
    {
        const bool branch_taken_0x1c153c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C153Cu;
        // 0x1c1540: 0x8fa500c0  lw          $a1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c153c) {
            ctx->pc = 0x1C15C8u;
            goto label_1c15c8;
        }
    }
    ctx->pc = 0x1C1544u;
label_1c1544:
    // 0x1c1544: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1544u;
    {
        const bool branch_taken_0x1c1544 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C1548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1544u;
        // 0x1c1548: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1544) {
            ctx->pc = 0x1C1560u;
            goto label_1c1560;
        }
    }
    ctx->pc = 0x1C154Cu;
    // 0x1c154c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c154cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c1550: 0x0  nop
    ctx->pc = 0x1c1550u;
    // NOP
    // 0x1c1554: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c1554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c1558: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1558u;
    {
        const bool branch_taken_0x1c1558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1558) {
            ctx->pc = 0x1C1578u;
            goto label_1c1578;
        }
    }
    ctx->pc = 0x1C1560u;
label_1c1560:
    // 0x1c1560: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c1560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c1564: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c1564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c1568: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c1568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c156c: 0x0  nop
    ctx->pc = 0x1c156cu;
    // NOP
    // 0x1c1570: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c1570u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c1574: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1c1574u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1c1578:
    // 0x1c1578: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1c1578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1c157c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1c157cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1c1580: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c1580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1584: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1c1584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1588: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1c1588u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1c158c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1c158cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c1590: 0xe6210420  swc1        $f1, 0x420($s1)
    ctx->pc = 0x1c1590u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1056), bits); }
    // 0x1c1594: 0xe62004cc  swc1        $f0, 0x4CC($s1)
    ctx->pc = 0x1c1594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1228), bits); }
    // 0x1c1598: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x1c1598u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1c159c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1c159cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c15a0: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1c15a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1c15a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c15a8: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1c15a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1c15ac: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1c15acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c15b0: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x1c15b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x1c15b4: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1c15b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c15b8: 0xfa210440  sqc2        $vf1, 0x440($s1)
    ctx->pc = 0x1c15b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1088), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c15bc: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x1c15bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c15c0: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x1c15c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c15c4: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1c15c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1c15c8:
    // 0x1c15c8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1c15c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1c15cc: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x1c15ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x1c15d0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1c15d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c15d4: 0xc070622  jal         func_1C1888
    ctx->pc = 0x1C15D4u;
    SET_GPR_U32(ctx, 31, 0x1C15DCu);
    ctx->pc = 0x1C15D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C15D4u;
    // 0x1c15d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1888u, 0x1C15D4u, 0x1C15DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C15DCu;
label_1c15dc:
    // 0x1c15dc: 0xe62004c8  swc1        $f0, 0x4C8($s1)
    ctx->pc = 0x1c15dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1224), bits); }
    // 0x1c15e0: 0x262403a0  addiu       $a0, $s1, 0x3A0
    ctx->pc = 0x1c15e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 928));
    // 0x1c15e4: 0xc06fb58  jal         func_1BED60
    ctx->pc = 0x1C15E4u;
    SET_GPR_U32(ctx, 31, 0x1C15ECu);
    ctx->pc = 0x1C15E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C15E4u;
    // 0x1c15e8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED60u, 0x1C15E4u, 0x1C15ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C15ECu;
label_1c15ec:
    // 0x1c15ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c15ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c15f0: 0xc0705ee  jal         func_1C17B8
    ctx->pc = 0x1C15F0u;
    SET_GPR_U32(ctx, 31, 0x1C15F8u);
    ctx->pc = 0x1C15F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C15F0u;
    // 0x1c15f4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17B8u, 0x1C15F0u, 0x1C15F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C15F8u;
label_1c15f8:
    // 0x1c15f8: 0x262201e0  addiu       $v0, $s1, 0x1E0
    ctx->pc = 0x1c15f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    // 0x1c15fc: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1c15fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1c1600: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c1600u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c1604: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c1604u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c1608: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1c1608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c160c: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x1c160cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c1610: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x1c1610u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1614: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1c1614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1618: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1c1618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c161c: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x1c161cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c1620: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x1c1620u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1c1624: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1c1624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1c1628: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x1c1628u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1c162c: 0xe7a2005c  swc1        $f2, 0x5C($sp)
    ctx->pc = 0x1c162cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1c1630: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x1c1630u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1c1634: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c1634u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c1638: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c1638u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c163c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1c163cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c1640: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1c1640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1644: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1c1644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1648: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x1c1648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c164c: 0xc7a5007c  lwc1        $f5, 0x7C($sp)
    ctx->pc = 0x1c164cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1c1650: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1c1650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1c1654: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1c1654u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1c1658: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x1c1658u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1c165c: 0xe7a5006c  swc1        $f5, 0x6C($sp)
    ctx->pc = 0x1c165cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1c1660: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x1c1660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c1664: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x1c1664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c1668: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x1c1668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c166c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c166cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c1670: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c1670u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c1674: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1c1674u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c1678: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1c1678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c167c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1c167cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c1680: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x1c1680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c1684: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c1684u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c1688: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c1688u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c168c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1c168cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c1690: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c1690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1694: 0x0  nop
    ctx->pc = 0x1c1694u;
    // NOP
    // 0x1c1698: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1698u;
    {
        const bool branch_taken_0x1c1698 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1698u;
        // 0x1c169c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1698) {
            ctx->pc = 0x1C16B8u;
            goto label_1c16b8;
        }
    }
    ctx->pc = 0x1C16A0u;
    // 0x1c16a0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1c16a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c16a4: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1c16a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c16a8: 0xc06f6f2  jal         func_1BDBC8
    ctx->pc = 0x1C16A8u;
    SET_GPR_U32(ctx, 31, 0x1C16B0u);
    ctx->pc = 0x1C16ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C16A8u;
    // 0x1c16ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDBC8u, 0x1C16A8u, 0x1C16B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C16B0u;
label_1c16b0:
    // 0x1c16b0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1C16B0u;
    {
        const bool branch_taken_0x1c16b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C16B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16B0u;
        // 0x1c16b4: 0xc62004c8  lwc1        $f0, 0x4C8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c16b0) {
            ctx->pc = 0x1C1768u;
            goto label_1c1768;
        }
    }
    ctx->pc = 0x1C16B8u;
label_1c16b8:
    // 0x1c16b8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1c16b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c16bc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1c16bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c16c0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1c16c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c16c4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1c16c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c16c8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c16c8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c16cc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c16ccu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c16d0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1c16d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c16d4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1c16d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c16d8: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1c16d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c16dc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1c16dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c16e0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1c16e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c16e4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1c16e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c16e8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c16e8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c16ec: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c16ecu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c16f0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1c16f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c16f4: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1c16f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c16f8: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x1c16f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c16fc: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x1c16fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c1700: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1c1700u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c1704: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x1c1704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c1708: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x1c1708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c170c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1c170cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1c1710: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x1c1710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c1714: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x1c1714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c1718: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1c1718u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c171c: 0x3c013f5c  lui         $at, 0x3F5C
    ctx->pc = 0x1c171cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16220 << 16));
    // 0x1c1720: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x1c1720u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
    // 0x1c1724: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c1724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1728: 0x0  nop
    ctx->pc = 0x1c1728u;
    // NOP
    // 0x1c172c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c172cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1730: 0x0  nop
    ctx->pc = 0x1c1730u;
    // NOP
    // 0x1c1734: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1734u;
    {
        const bool branch_taken_0x1c1734 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1734u;
        // 0x1c1738: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1734) {
            ctx->pc = 0x1C1754u;
            goto label_1c1754;
        }
    }
    ctx->pc = 0x1C173Cu;
    // 0x1c173c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1c173cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1744: 0xc06f6f2  jal         func_1BDBC8
    ctx->pc = 0x1C1744u;
    SET_GPR_U32(ctx, 31, 0x1C174Cu);
    ctx->pc = 0x1C1748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1744u;
    // 0x1c1748: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDBC8u, 0x1C1744u, 0x1C174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C174Cu;
label_1c174c:
    // 0x1c174c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C174Cu;
    {
        const bool branch_taken_0x1c174c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C174Cu;
        // 0x1c1750: 0xc62004c8  lwc1        $f0, 0x4C8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c174c) {
            ctx->pc = 0x1C1768u;
            goto label_1c1768;
        }
    }
    ctx->pc = 0x1C1754u;
label_1c1754:
    // 0x1c1754: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1c1754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1758: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1c1758u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c175c: 0xc06f6f2  jal         func_1BDBC8
    ctx->pc = 0x1C175Cu;
    SET_GPR_U32(ctx, 31, 0x1C1764u);
    ctx->pc = 0x1C1760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C175Cu;
    // 0x1c1760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDBC8u, 0x1C175Cu, 0x1C1764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1764u;
label_1c1764:
    // 0x1c1764: 0xc62004c8  lwc1        $f0, 0x4C8($s1)
    ctx->pc = 0x1c1764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c1768:
    // 0x1c1768: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1c1768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1c176c: 0x24620f90  addiu       $v0, $v1, 0xF90
    ctx->pc = 0x1c176cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x1c1770: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x1c1770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c1774: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x1c1774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1c1778: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x1c1778u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c177c: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x1c177cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1c1780: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x1c1780u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c1784: 0xdfb500f8  ld          $s5, 0xF8($sp)
    ctx->pc = 0x1c1784u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1c1788: 0xdfb60100  ld          $s6, 0x100($sp)
    ctx->pc = 0x1c1788u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1c178c: 0xdfb70108  ld          $s7, 0x108($sp)
    ctx->pc = 0x1c178cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1c1790: 0xdfbe0110  ld          $fp, 0x110($sp)
    ctx->pc = 0x1c1790u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1c1794: 0xdfbf0118  ld          $ra, 0x118($sp)
    ctx->pc = 0x1c1794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1c1798: 0xc7b70138  lwc1        $f23, 0x138($sp)
    ctx->pc = 0x1c1798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1c179c: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x1c179cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1c17a0: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x1c17a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c17a4: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x1c17a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c17a8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1c17a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1c17ac: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1c17acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1c17b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C17B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C17B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17B0u;
        // 0x1c17b4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C17B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C17B8u;
}
