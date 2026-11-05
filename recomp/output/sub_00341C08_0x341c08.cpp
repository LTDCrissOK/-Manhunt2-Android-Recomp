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

// Function: sub_00341C08
// Address: 0x341c08 - 0x341d60
void sub_00341C08_0x341c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341C08_0x341c08");
#endif

    switch (ctx->pc) {
        case 0x341c38u: goto label_341c38;
        case 0x341c78u: goto label_341c78;
        case 0x341cecu: goto label_341cec;
        case 0x341cf4u: goto label_341cf4;
        case 0x341cfcu: goto label_341cfc;
        case 0x341d0cu: goto label_341d0c;
        default: break;
    }

    ctx->pc = 0x341c08u;

    // 0x341c08: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x341c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x341c0c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x341c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x341c10: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x341c10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x341c14: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x341c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x341c18: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x341c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x341c1c: 0x24508bf0  addiu       $s0, $v0, -0x7410
    ctx->pc = 0x341c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937584));
    // 0x341c20: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x341c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x341c24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x341c24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341c28: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x341c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x341c2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x341c2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341c30: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x341c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x341c34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x341c34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_341c38:
    // 0x341c38: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x341c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x341c3c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x341c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x341c40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x341C40u;
    {
        const bool branch_taken_0x341c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x341C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C40u;
        // 0x341c44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341c40) {
            ctx->pc = 0x341C54u;
            goto label_341c54;
        }
    }
    ctx->pc = 0x341C48u;
    // 0x341c48: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x341c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x341c4c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x341C4Cu;
    {
        const bool branch_taken_0x341c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x341c4c) {
            ctx->pc = 0x341C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341C4Cu;
            // 0x341c50: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341C5Cu;
            goto label_341c5c;
        }
    }
    ctx->pc = 0x341C54u;
label_341c54:
    // 0x341c54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x341c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341c58: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x341c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_341c5c:
    // 0x341c5c: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x341C5Cu;
    {
        const bool branch_taken_0x341c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x341c5c) {
            ctx->pc = 0x341C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341C5Cu;
            // 0x341c60: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341D10u;
            goto label_341d10;
        }
    }
    ctx->pc = 0x341C64u;
    // 0x341c64: 0x5080002a  beql        $a0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x341C64u;
    {
        const bool branch_taken_0x341c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x341c64) {
            ctx->pc = 0x341C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341C64u;
            // 0x341c68: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341D10u;
            goto label_341d10;
        }
    }
    ctx->pc = 0x341C6Cu;
    // 0x341c6c: 0x96050028  lhu         $a1, 0x28($s0)
    ctx->pc = 0x341c6cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x341c70: 0xc0d0cb2  jal         func_3432C8
    ctx->pc = 0x341C70u;
    SET_GPR_U32(ctx, 31, 0x341C78u);
    ctx->pc = 0x341C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341C70u;
    // 0x341c74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3432C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3432C8u, 0x341C70u, 0x341C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341C78u;
label_341c78:
    // 0x341c78: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x341C78u;
    {
        const bool branch_taken_0x341c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x341c78) {
            ctx->pc = 0x341C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341C78u;
            // 0x341c7c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341D10u;
            goto label_341d10;
        }
    }
    ctx->pc = 0x341C80u;
    // 0x341c80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x341c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x341c84: 0x50600022  beql        $v1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x341C84u;
    {
        const bool branch_taken_0x341c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x341c84) {
            ctx->pc = 0x341C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341C84u;
            // 0x341c88: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341D10u;
            goto label_341d10;
        }
    }
    ctx->pc = 0x341C8Cu;
    // 0x341c8c: 0x90620292  lbu         $v0, 0x292($v1)
    ctx->pc = 0x341c8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 658)));
    // 0x341c90: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x341C90u;
    {
        const bool branch_taken_0x341c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x341c90) {
            ctx->pc = 0x341C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341C90u;
            // 0x341c94: 0x906202d4  lbu         $v0, 0x2D4($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 724)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341C9Cu;
            goto label_341c9c;
        }
    }
    ctx->pc = 0x341C98u;
    // 0x341c98: 0x90620293  lbu         $v0, 0x293($v1)
    ctx->pc = 0x341c98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 659)));
label_341c9c:
    // 0x341c9c: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x341C9Cu;
    {
        const bool branch_taken_0x341c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x341c9c) {
            ctx->pc = 0x341CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341C9Cu;
            // 0x341ca0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341D10u;
            goto label_341d10;
        }
    }
    ctx->pc = 0x341CA4u;
    // 0x341ca4: 0x8c620220  lw          $v0, 0x220($v1)
    ctx->pc = 0x341ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 544)));
    // 0x341ca8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x341CA8u;
    {
        const bool branch_taken_0x341ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x341CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341CA8u;
        // 0x341cac: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341ca8) {
            ctx->pc = 0x341CB4u;
            goto label_341cb4;
        }
    }
    ctx->pc = 0x341CB0u;
    // 0x341cb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x341cb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341cb4:
    // 0x341cb4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x341cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341cb8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x341cb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x341cbc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341cbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x341cc0: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x341cc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x341cc4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x341cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341cc8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x341cc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x341ccc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341cccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x341cd0: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x341cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x341cd4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x341cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341cd8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x341cd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x341cdc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341cdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x341ce0: 0xe6010040  swc1        $f1, 0x40($s0)
    ctx->pc = 0x341ce0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x341ce4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x341CE4u;
    SET_GPR_U32(ctx, 31, 0x341CECu);
    ctx->pc = 0x341CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341CE4u;
    // 0x341ce8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x341CE4u, 0x341CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341CECu;
label_341cec:
    // 0x341cec: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x341CECu;
    SET_GPR_U32(ctx, 31, 0x341CF4u);
    ctx->pc = 0x341CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341CECu;
    // 0x341cf0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x341CECu, 0x341CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341CF4u;
label_341cf4:
    // 0x341cf4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x341CF4u;
    SET_GPR_U32(ctx, 31, 0x341CFCu);
    ctx->pc = 0x341CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341CF4u;
    // 0x341cf8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x341CF4u, 0x341CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341CFCu;
label_341cfc:
    // 0x341cfc: 0xae1d0064  sw          $sp, 0x64($s0)
    ctx->pc = 0x341cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 29));
    // 0x341d00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x341d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341d04: 0xc0d0758  jal         func_341D60
    ctx->pc = 0x341D04u;
    SET_GPR_U32(ctx, 31, 0x341D0Cu);
    ctx->pc = 0x341D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341D04u;
    // 0x341d08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341D60u, 0x341D04u, 0x341D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341D0Cu;
label_341d0c:
    // 0x341d0c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x341d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_341d10:
    // 0x341d10: 0x2a220060  slti        $v0, $s1, 0x60
    ctx->pc = 0x341d10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)96) ? 1 : 0);
    // 0x341d14: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x341D14u;
    {
        const bool branch_taken_0x341d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x341D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D14u;
        // 0x341d18: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341d14) {
            ctx->pc = 0x341C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341c38;
        }
    }
    ctx->pc = 0x341D1Cu;
    // 0x341d1c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x341d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x341d20: 0x8c43bd5c  lw          $v1, -0x42A4($v0)
    ctx->pc = 0x341d20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD5Cu));
    // 0x341d24: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x341D24u;
    {
        const bool branch_taken_0x341d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x341D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D24u;
        // 0x341d28: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341d24) {
            ctx->pc = 0x341D44u;
            goto label_341d44;
        }
    }
    ctx->pc = 0x341D2Cu;
    // 0x341d2c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x341d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x341d30: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x341d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x341d34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x341d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x341d38: 0xc440c478  lwc1        $f0, -0x3B88($v0)
    ctx->pc = 0x341d38u;
    { uint32_t bits = FAST_READ32(0x3FC478u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341d3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x341d3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x341d40: 0xe440c478  swc1        $f0, -0x3B88($v0)
    ctx->pc = 0x341d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FC478u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FC478u, _value); } while (0); }
label_341d44:
    // 0x341d44: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x341d44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x341d48: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x341d48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x341d4c: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x341d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x341d50: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x341d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x341d54: 0x3e00008  jr          $ra
    ctx->pc = 0x341D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D54u;
        // 0x341d58: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341D5Cu;
    // 0x341d5c: 0x0  nop
    ctx->pc = 0x341d5cu;
    // NOP
    ctx->pc = 0x341d60u;
}
