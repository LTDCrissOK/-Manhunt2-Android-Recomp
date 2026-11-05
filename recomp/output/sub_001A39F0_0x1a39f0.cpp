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

// Function: sub_001A39F0
// Address: 0x1a39f0 - 0x1a3ae0
void sub_001A39F0_0x1a39f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A39F0_0x1a39f0");
#endif

    switch (ctx->pc) {
        case 0x1a39f0u: goto label_1a39f0;
        case 0x1a39f4u: goto label_1a39f4;
        case 0x1a39f8u: goto label_1a39f8;
        case 0x1a39fcu: goto label_1a39fc;
        case 0x1a3a00u: goto label_1a3a00;
        case 0x1a3a04u: goto label_1a3a04;
        case 0x1a3a08u: goto label_1a3a08;
        case 0x1a3a0cu: goto label_1a3a0c;
        case 0x1a3a10u: goto label_1a3a10;
        case 0x1a3a14u: goto label_1a3a14;
        case 0x1a3a18u: goto label_1a3a18;
        case 0x1a3a1cu: goto label_1a3a1c;
        case 0x1a3a20u: goto label_1a3a20;
        case 0x1a3a24u: goto label_1a3a24;
        case 0x1a3a28u: goto label_1a3a28;
        case 0x1a3a2cu: goto label_1a3a2c;
        case 0x1a3a30u: goto label_1a3a30;
        case 0x1a3a34u: goto label_1a3a34;
        case 0x1a3a38u: goto label_1a3a38;
        case 0x1a3a3cu: goto label_1a3a3c;
        case 0x1a3a40u: goto label_1a3a40;
        case 0x1a3a44u: goto label_1a3a44;
        case 0x1a3a48u: goto label_1a3a48;
        case 0x1a3a4cu: goto label_1a3a4c;
        case 0x1a3a50u: goto label_1a3a50;
        case 0x1a3a54u: goto label_1a3a54;
        case 0x1a3a58u: goto label_1a3a58;
        case 0x1a3a5cu: goto label_1a3a5c;
        case 0x1a3a60u: goto label_1a3a60;
        case 0x1a3a64u: goto label_1a3a64;
        case 0x1a3a68u: goto label_1a3a68;
        case 0x1a3a6cu: goto label_1a3a6c;
        case 0x1a3a70u: goto label_1a3a70;
        case 0x1a3a74u: goto label_1a3a74;
        case 0x1a3a78u: goto label_1a3a78;
        case 0x1a3a7cu: goto label_1a3a7c;
        case 0x1a3a80u: goto label_1a3a80;
        case 0x1a3a84u: goto label_1a3a84;
        case 0x1a3a88u: goto label_1a3a88;
        case 0x1a3a8cu: goto label_1a3a8c;
        case 0x1a3a90u: goto label_1a3a90;
        case 0x1a3a94u: goto label_1a3a94;
        case 0x1a3a98u: goto label_1a3a98;
        case 0x1a3a9cu: goto label_1a3a9c;
        case 0x1a3aa0u: goto label_1a3aa0;
        case 0x1a3aa4u: goto label_1a3aa4;
        case 0x1a3aa8u: goto label_1a3aa8;
        case 0x1a3aacu: goto label_1a3aac;
        case 0x1a3ab0u: goto label_1a3ab0;
        case 0x1a3ab4u: goto label_1a3ab4;
        case 0x1a3ab8u: goto label_1a3ab8;
        case 0x1a3abcu: goto label_1a3abc;
        case 0x1a3ac0u: goto label_1a3ac0;
        case 0x1a3ac4u: goto label_1a3ac4;
        case 0x1a3ac8u: goto label_1a3ac8;
        case 0x1a3accu: goto label_1a3acc;
        case 0x1a3ad0u: goto label_1a3ad0;
        case 0x1a3ad4u: goto label_1a3ad4;
        case 0x1a3ad8u: goto label_1a3ad8;
        case 0x1a3adcu: goto label_1a3adc;
        default: break;
    }

    ctx->pc = 0x1a39f0u;

label_1a39f0:
    // 0x1a39f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a39f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a39f4:
    // 0x1a39f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a39f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a39f8:
    // 0x1a39f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a39f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a39fc:
    // 0x1a39fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a39fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3a00:
    // 0x1a3a00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a3a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a3a04:
    // 0x1a3a04: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x1a3a04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1a3a08:
    // 0x1a3a08: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1a3a08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a3a0c:
    // 0x1a3a0c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a3a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a3a10:
    // 0x1a3a10: 0x5051002e  beql        $v0, $s1, . + 4 + (0x2E << 2)
label_1a3a14:
    if (ctx->pc == 0x1A3A14u) {
        ctx->pc = 0x1A3A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A10u;
        // 0x1a3a14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3A18u;
        goto label_1a3a18;
    }
    ctx->pc = 0x1A3A10u;
    {
        const bool branch_taken_0x1a3a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1a3a10) {
            ctx->pc = 0x1A3A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3A10u;
            // 0x1a3a14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3ACCu;
            goto label_1a3acc;
        }
    }
    ctx->pc = 0x1A3A18u;
label_1a3a18:
    // 0x1a3a18: 0xc0691d6  jal         func_1A4758
label_1a3a1c:
    if (ctx->pc == 0x1A3A1Cu) {
        ctx->pc = 0x1A3A20u;
        goto label_1a3a20;
    }
    ctx->pc = 0x1A3A18u;
    SET_GPR_U32(ctx, 31, 0x1A3A20u);
    ctx->pc = 0x1A4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4758u, 0x1A3A18u, 0x1A3A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3A20u;
label_1a3a20:
    // 0x1a3a20: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a3a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a3a24:
    // 0x1a3a24: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a3a28:
    if (ctx->pc == 0x1A3A28u) {
        ctx->pc = 0x1A3A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A24u;
        // 0x1a3a28: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3A2Cu;
        goto label_1a3a2c;
    }
    ctx->pc = 0x1A3A24u;
    {
        const bool branch_taken_0x1a3a24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A24u;
        // 0x1a3a28: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3a24) {
            ctx->pc = 0x1A3A3Cu;
            goto label_1a3a3c;
        }
    }
    ctx->pc = 0x1A3A2Cu;
label_1a3a2c:
    // 0x1a3a2c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a3a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a3a30:
    // 0x1a3a30: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a3a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a3a34:
    // 0x1a3a34: 0x40f809  jalr        $v0
label_1a3a38:
    if (ctx->pc == 0x1A3A38u) {
        ctx->pc = 0x1A3A3Cu;
        goto label_1a3a3c;
    }
    ctx->pc = 0x1A3A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3A3Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3A34u, 0x1A3A3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3A3Cu;
label_1a3a3c:
    // 0x1a3a3c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a3a3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a3a40:
    // 0x1a3a40: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1a3a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1a3a44:
    // 0x1a3a44: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x1a3a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
label_1a3a48:
    // 0x1a3a48: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a3a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a3a4c:
    // 0x1a3a4c: 0xc0b12b0  jal         func_2C4AC0
label_1a3a50:
    if (ctx->pc == 0x1A3A50u) {
        ctx->pc = 0x1A3A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A4Cu;
        // 0x1a3a50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3A54u;
        goto label_1a3a54;
    }
    ctx->pc = 0x1A3A4Cu;
    SET_GPR_U32(ctx, 31, 0x1A3A54u);
    ctx->pc = 0x1A3A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3A4Cu;
    // 0x1a3a50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1A3A4Cu, 0x1A3A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3A54u;
label_1a3a54:
    // 0x1a3a54: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1a3a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_1a3a58:
    // 0x1a3a58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a3a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a3a5c:
    // 0x1a3a5c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1a3a5cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_1a3a60:
    // 0x1a3a60: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1a3a60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a3a64:
    // 0x1a3a64: 0x0  nop
    ctx->pc = 0x1a3a64u;
    // NOP
label_1a3a68:
    // 0x1a3a68: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1a3a6c:
    if (ctx->pc == 0x1A3A6Cu) {
        ctx->pc = 0x1A3A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A68u;
        // 0x1a3a6c: 0x4600a086  mov.s       $f2, $f20 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3A70u;
        goto label_1a3a70;
    }
    ctx->pc = 0x1A3A68u;
    {
        const bool branch_taken_0x1a3a68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3a68) {
            ctx->pc = 0x1A3A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3A68u;
            // 0x1a3a6c: 0x4600a086  mov.s       $f2, $f20 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3A70u;
            goto label_1a3a70;
        }
    }
    ctx->pc = 0x1A3A70u;
label_1a3a70:
    // 0x1a3a70: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a3a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1a3a74:
    // 0x1a3a74: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a3a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1a3a78:
    // 0x1a3a78: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a3a7c:
    if (ctx->pc == 0x1A3A7Cu) {
        ctx->pc = 0x1A3A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A78u;
        // 0x1a3a7c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3A80u;
        goto label_1a3a80;
    }
    ctx->pc = 0x1A3A78u;
    {
        const bool branch_taken_0x1a3a78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A3A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A78u;
        // 0x1a3a7c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3a78) {
            ctx->pc = 0x1A3A94u;
            goto label_1a3a94;
        }
    }
    ctx->pc = 0x1A3A80u;
label_1a3a80:
    // 0x1a3a80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a3a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a3a84:
    // 0x1a3a84: 0x0  nop
    ctx->pc = 0x1a3a84u;
    // NOP
label_1a3a88:
    // 0x1a3a88: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a3a88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a3a8c:
    // 0x1a3a8c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a3a90:
    if (ctx->pc == 0x1A3A90u) {
        ctx->pc = 0x1A3A94u;
        goto label_1a3a94;
    }
    ctx->pc = 0x1A3A8Cu;
    {
        const bool branch_taken_0x1a3a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3a8c) {
            ctx->pc = 0x1A3AACu;
            goto label_1a3aac;
        }
    }
    ctx->pc = 0x1A3A94u;
label_1a3a94:
    // 0x1a3a94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a3a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a3a98:
    // 0x1a3a98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a3a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a3a9c:
    // 0x1a3a9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a3a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a3aa0:
    // 0x1a3aa0: 0x0  nop
    ctx->pc = 0x1a3aa0u;
    // NOP
label_1a3aa4:
    // 0x1a3aa4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a3aa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a3aa8:
    // 0x1a3aa8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a3aa8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a3aac:
    // 0x1a3aac: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a3aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a3ab0:
    // 0x1a3ab0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a3ab0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a3ab4:
    // 0x1a3ab4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3ab8:
    // 0x1a3ab8: 0x0  nop
    ctx->pc = 0x1a3ab8u;
    // NOP
label_1a3abc:
    // 0x1a3abc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a3abcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a3ac0:
    // 0x1a3ac0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a3ac0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1a3ac4:
    // 0x1a3ac4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1a3ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1a3ac8:
    // 0x1a3ac8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3acc:
    // 0x1a3acc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a3accu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a3ad0:
    // 0x1a3ad0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a3ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3ad4:
    // 0x1a3ad4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1a3ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a3ad8:
    // 0x1a3ad8: 0x3e00008  jr          $ra
label_1a3adc:
    if (ctx->pc == 0x1A3ADCu) {
        ctx->pc = 0x1A3ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3AD8u;
        // 0x1a3adc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3AE0u;
        goto label_fallthrough_0x1a3ad8;
    }
    ctx->pc = 0x1A3AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3AD8u;
        // 0x1a3adc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a3ad8:
    ctx->pc = 0x1A3AE0u;
}
