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

// Function: sub_002E9A80
// Address: 0x2e9a80 - 0x2e9bf8
void sub_002E9A80_0x2e9a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9A80_0x2e9a80");
#endif

    switch (ctx->pc) {
        case 0x2e9b54u: goto label_2e9b54;
        case 0x2e9b5cu: goto label_2e9b5c;
        case 0x2e9bacu: goto label_2e9bac;
        case 0x2e9bb4u: goto label_2e9bb4;
        default: break;
    }

    ctx->pc = 0x2e9a80u;

    // 0x2e9a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e9a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e9a84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e9a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e9a88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e9a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e9a8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e9a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e9a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e9a94: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e9a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2e9a98: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2e9a98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e9a9c: 0x8e021060  lw          $v0, 0x1060($s0)
    ctx->pc = 0x2e9a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4192)));
    // 0x2e9aa0: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x2e9aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
    // 0x2e9aa4: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2E9AA4u;
    {
        const bool branch_taken_0x2e9aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9AA4u;
        // 0x2e9aa8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9aa4) {
            ctx->pc = 0x2E9BD8u;
            goto label_2e9bd8;
        }
    }
    ctx->pc = 0x2E9AACu;
    // 0x2e9aac: 0xc60011c8  lwc1        $f0, 0x11C8($s0)
    ctx->pc = 0x2e9aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9ab0: 0xc441ba14  lwc1        $f1, -0x45EC($v0)
    ctx->pc = 0x2e9ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e9ab4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e9ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9ab8: 0x0  nop
    ctx->pc = 0x2e9ab8u;
    // NOP
    // 0x2e9abc: 0x45010046  bc1t        . + 4 + (0x46 << 2)
    ctx->pc = 0x2E9ABCu;
    {
        const bool branch_taken_0x2e9abc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E9AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9ABCu;
        // 0x2e9ac0: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9abc) {
            ctx->pc = 0x2E9BD8u;
            goto label_2e9bd8;
        }
    }
    ctx->pc = 0x2E9AC4u;
    // 0x2e9ac4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e9ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e9ac8: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x2e9ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x2e9acc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9ACCu;
    {
        const bool branch_taken_0x2e9acc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E9AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9ACCu;
        // 0x2e9ad0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9acc) {
            ctx->pc = 0x2E9AE8u;
            goto label_2e9ae8;
        }
    }
    ctx->pc = 0x2E9AD4u;
    // 0x2e9ad4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9ad8: 0x0  nop
    ctx->pc = 0x2e9ad8u;
    // NOP
    // 0x2e9adc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e9adcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e9ae0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E9AE0u;
    {
        const bool branch_taken_0x2e9ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9ae0) {
            ctx->pc = 0x2E9B00u;
            goto label_2e9b00;
        }
    }
    ctx->pc = 0x2E9AE8u;
label_2e9ae8:
    // 0x2e9ae8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e9ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e9aec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e9aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e9af0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9af4: 0x0  nop
    ctx->pc = 0x2e9af4u;
    // NOP
    // 0x2e9af8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e9af8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e9afc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2e9afcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2e9b00:
    // 0x2e9b00: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2e9b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2e9b04: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2e9b04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2e9b08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e9b08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9b0c: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x2e9b0cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x2e9b10: 0x8e22b9e4  lw          $v0, -0x461C($s1)
    ctx->pc = 0x2e9b10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FB9E4u));
    // 0x2e9b14: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E9B14u;
    {
        const bool branch_taken_0x2e9b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9B14u;
        // 0x2e9b18: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9b14) {
            ctx->pc = 0x2E9B74u;
            goto label_2e9b74;
        }
    }
    ctx->pc = 0x2E9B1Cu;
    // 0x2e9b1c: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x2e9b1cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x2e9b20: 0xc640b9e8  lwc1        $f0, -0x4618($s2)
    ctx->pc = 0x2e9b20u;
    { uint32_t bits = FAST_READ32(0x3FB9E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9b24: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2e9b24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9b28: 0x0  nop
    ctx->pc = 0x2e9b28u;
    // NOP
    // 0x2e9b2c: 0x4502002b  bc1fl       . + 4 + (0x2B << 2)
    ctx->pc = 0x2E9B2Cu;
    {
        const bool branch_taken_0x2e9b2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e9b2c) {
            ctx->pc = 0x2E9B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9B2Cu;
            // 0x2e9b30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9BDCu;
            goto label_2e9bdc;
        }
    }
    ctx->pc = 0x2E9B34u;
    // 0x2e9b34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e9b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e9b38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e9b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e9b3c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2e9b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x2e9b40: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x2e9b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2e9b44: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x2e9b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x2e9b48: 0x46026301  sub.s       $f12, $f12, $f2
    ctx->pc = 0x2e9b48u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x2e9b4c: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x2E9B4Cu;
    SET_GPR_U32(ctx, 31, 0x2E9B54u);
    ctx->pc = 0x2E9B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9B4Cu;
    // 0x2e9b50: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x2E9B4Cu, 0x2E9B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9B54u;
label_2e9b54:
    // 0x2e9b54: 0xc0ba690  jal         func_2E9A40
    ctx->pc = 0x2E9B54u;
    SET_GPR_U32(ctx, 31, 0x2E9B5Cu);
    ctx->pc = 0x2E9B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9B54u;
    // 0x2e9b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9A40u, 0x2E9B54u, 0x2E9B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9B5Cu;
label_2e9b5c:
    // 0x2e9b5c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2e9b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2e9b60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e9b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9b64: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2e9b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2e9b68: 0x2463ba18  addiu       $v1, $v1, -0x45E8
    ctx->pc = 0x2e9b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949400));
    // 0x2e9b6c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2E9B6Cu;
    {
        const bool branch_taken_0x2e9b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9B6Cu;
        // 0x2e9b70: 0xae24b9e4  sw          $a0, -0x461C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294949348), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9b6c) {
            ctx->pc = 0x2E9BC8u;
            goto label_2e9bc8;
        }
    }
    ctx->pc = 0x2E9B74u;
label_2e9b74:
    // 0x2e9b74: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x2e9b74u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x2e9b78: 0xc640b9e8  lwc1        $f0, -0x4618($s2)
    ctx->pc = 0x2e9b78u;
    { uint32_t bits = FAST_READ32(0x3FB9E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9b7c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2e9b7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9b80: 0x0  nop
    ctx->pc = 0x2e9b80u;
    // NOP
    // 0x2e9b84: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
    ctx->pc = 0x2E9B84u;
    {
        const bool branch_taken_0x2e9b84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e9b84) {
            ctx->pc = 0x2E9B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9B84u;
            // 0x2e9b88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9BDCu;
            goto label_2e9bdc;
        }
    }
    ctx->pc = 0x2E9B8Cu;
    // 0x2e9b8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e9b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e9b90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e9b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e9b94: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2e9b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x2e9b98: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x2e9b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2e9b9c: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x2e9b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x2e9ba0: 0x46026301  sub.s       $f12, $f12, $f2
    ctx->pc = 0x2e9ba0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x2e9ba4: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x2E9BA4u;
    SET_GPR_U32(ctx, 31, 0x2E9BACu);
    ctx->pc = 0x2E9BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9BA4u;
    // 0x2e9ba8: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x2E9BA4u, 0x2E9BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9BACu;
label_2e9bac:
    // 0x2e9bac: 0xc0ba690  jal         func_2E9A40
    ctx->pc = 0x2E9BACu;
    SET_GPR_U32(ctx, 31, 0x2E9BB4u);
    ctx->pc = 0x2E9BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9BACu;
    // 0x2e9bb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9A40u, 0x2E9BACu, 0x2E9BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9BB4u;
label_2e9bb4:
    // 0x2e9bb4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2e9bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2e9bb8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2e9bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2e9bbc: 0x2463ba18  addiu       $v1, $v1, -0x45E8
    ctx->pc = 0x2e9bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949400));
    // 0x2e9bc0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2e9bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2e9bc4: 0xae20b9e4  sw          $zero, -0x461C($s1)
    ctx->pc = 0x2e9bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294949348), GPR_U32(ctx, 0));
label_2e9bc8:
    // 0x2e9bc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9bcc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2e9bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9bd0: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2e9bd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2e9bd4: 0xe640b9e8  swc1        $f0, -0x4618($s2)
    ctx->pc = 0x2e9bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294949352), bits); }
label_2e9bd8:
    // 0x2e9bd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e9bd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e9bdc:
    // 0x2e9bdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e9bdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e9be0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e9be0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9be4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e9be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e9be8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2e9be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e9bec: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9BECu;
        // 0x2e9bf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9BF4u;
    // 0x2e9bf4: 0x0  nop
    ctx->pc = 0x2e9bf4u;
    // NOP
    ctx->pc = 0x2e9bf8u;
}
