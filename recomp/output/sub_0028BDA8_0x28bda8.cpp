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

// Function: sub_0028BDA8
// Address: 0x28bda8 - 0x28bfd0
void sub_0028BDA8_0x28bda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BDA8_0x28bda8");
#endif

    switch (ctx->pc) {
        case 0x28be00u: goto label_28be00;
        case 0x28be3cu: goto label_28be3c;
        case 0x28be90u: goto label_28be90;
        case 0x28beecu: goto label_28beec;
        case 0x28bf20u: goto label_28bf20;
        case 0x28bf3cu: goto label_28bf3c;
        case 0x28bf50u: goto label_28bf50;
        case 0x28bfa0u: goto label_28bfa0;
        default: break;
    }

    ctx->pc = 0x28bda8u;

    // 0x28bda8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28bda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28bdac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x28bdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x28bdb0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x28bdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x28bdb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28bdb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bdb8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28bdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28bdbc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28bdbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bdc0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x28bdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x28bdc4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x28bdc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bdc8: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x28bdc8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x28bdcc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x28bdccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bdd0: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x28bdd0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x28bdd4: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x28bdd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x28bdd8: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x28bdd8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x28bddc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28bddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28bde0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x28bde0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x28bde4: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x28bde4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x28bde8: 0xc4ee0008  lwc1        $f14, 0x8($a3)
    ctx->pc = 0x28bde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x28bdec: 0xc4ec0000  lwc1        $f12, 0x0($a3)
    ctx->pc = 0x28bdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28bdf0: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x28bdf0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x28bdf4: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x28bdf4u;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x28bdf8: 0xc0a2f26  jal         func_28BC98
    ctx->pc = 0x28BDF8u;
    SET_GPR_U32(ctx, 31, 0x28BE00u);
    ctx->pc = 0x28BDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BDF8u;
    // 0x28bdfc: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BC98u, 0x28BDF8u, 0x28BE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BE00u;
label_28be00:
    // 0x28be00: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28BE00u;
    {
        const bool branch_taken_0x28be00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE00u;
        // 0x28be04: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be00) {
            ctx->pc = 0x28BE1Cu;
            goto label_28be1c;
        }
    }
    ctx->pc = 0x28BE08u;
    // 0x28be08: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x28be08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x28be0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28be0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28be10: 0x0  nop
    ctx->pc = 0x28be10u;
    // NOP
    // 0x28be14: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x28be14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x28be18: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x28be18u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_28be1c:
    // 0x28be1c: 0x1240001e  beqz        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x28BE1Cu;
    {
        const bool branch_taken_0x28be1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE1Cu;
        // 0x28be20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be1c) {
            ctx->pc = 0x28BE98u;
            goto label_28be98;
        }
    }
    ctx->pc = 0x28BE24u;
    // 0x28be24: 0x16200060  bnez        $s1, . + 4 + (0x60 << 2)
    ctx->pc = 0x28BE24u;
    {
        const bool branch_taken_0x28be24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE24u;
        // 0x28be28: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be24) {
            ctx->pc = 0x28BFA8u;
            goto label_28bfa8;
        }
    }
    ctx->pc = 0x28BE2Cu;
    // 0x28be2c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28be30: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x28be30u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x28be34: 0xc0a2efc  jal         func_28BBF0
    ctx->pc = 0x28BE34u;
    SET_GPR_U32(ctx, 31, 0x28BE3Cu);
    ctx->pc = 0x28BE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BE34u;
    // 0x28be38: 0xc44ca7a0  lwc1        $f12, -0x5860($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294944672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BBF0u, 0x28BE34u, 0x28BE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BE3Cu;
label_28be3c:
    // 0x28be3c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28be3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28be40: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28be40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28be44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28be44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28be48: 0xc44eac6c  lwc1        $f14, -0x5394($v0)
    ctx->pc = 0x28be48u;
    { uint32_t bits = FAST_READ32(0x6BAC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x28be4c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x28be4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28be50: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x28be50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28be54: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x28be54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28be58: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x28be58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x28be5c: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x28be5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28be60: 0x460e0382  mul.s       $f14, $f0, $f14
    ctx->pc = 0x28be60u;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x28be64: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x28be64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x28be68: 0x46026301  sub.s       $f12, $f12, $f2
    ctx->pc = 0x28be68u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x28be6c: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x28be6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x28be70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28be70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28be74: 0x93a60002  lbu         $a2, 0x2($sp)
    ctx->pc = 0x28be74u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x28be78: 0x93a70003  lbu         $a3, 0x3($sp)
    ctx->pc = 0x28be78u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x28be7c: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x28be7cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x28be80: 0x8c48f3dc  lw          $t0, -0xC24($v0)
    ctx->pc = 0x28be80u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x4BF3DCu));
    // 0x28be84: 0x46006b41  sub.s       $f13, $f13, $f0
    ctx->pc = 0x28be84u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x28be88: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x28BE88u;
    SET_GPR_U32(ctx, 31, 0x28BE90u);
    ctx->pc = 0x28BE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BE88u;
    // 0x28be8c: 0x93a40000  lbu         $a0, 0x0($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x28BE88u, 0x28BE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BE90u;
label_28be90:
    // 0x28be90: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x28BE90u;
    {
        const bool branch_taken_0x28be90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE90u;
        // 0x28be94: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be90) {
            ctx->pc = 0x28BFA8u;
            goto label_28bfa8;
        }
    }
    ctx->pc = 0x28BE98u;
label_28be98:
    // 0x28be98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28be98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28be9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28be9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28bea0: 0x12220016  beq         $s1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x28BEA0u;
    {
        const bool branch_taken_0x28bea0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEA0u;
        // 0x28bea4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bea0) {
            ctx->pc = 0x28BEFCu;
            goto label_28befc;
        }
    }
    ctx->pc = 0x28BEA8u;
    // 0x28bea8: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x28bea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28beac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28BEACu;
    {
        const bool branch_taken_0x28beac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEACu;
        // 0x28beb0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28beac) {
            ctx->pc = 0x28BEC4u;
            goto label_28bec4;
        }
    }
    ctx->pc = 0x28BEB4u;
    // 0x28beb4: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x28BEB4u;
    {
        const bool branch_taken_0x28beb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEB4u;
        // 0x28beb8: 0x3c10006c  lui         $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28beb4) {
            ctx->pc = 0x28BF30u;
            goto label_28bf30;
        }
    }
    ctx->pc = 0x28BEBCu;
    // 0x28bebc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x28BEBCu;
    {
        const bool branch_taken_0x28bebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEBCu;
        // 0x28bec0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bebc) {
            ctx->pc = 0x28BF58u;
            goto label_28bf58;
        }
    }
    ctx->pc = 0x28BEC4u;
label_28bec4:
    // 0x28bec4: 0x16220023  bne         $s1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x28BEC4u;
    {
        const bool branch_taken_0x28bec4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x28BEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEC4u;
        // 0x28bec8: 0x3c10006c  lui         $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bec4) {
            ctx->pc = 0x28BF54u;
            goto label_28bf54;
        }
    }
    ctx->pc = 0x28BECCu;
    // 0x28becc: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x28beccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x28bed0: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x28bed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x28bed4: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x28bed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x28bed8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28bed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28bedc: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x28bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x28bee0: 0x8c72f3ec  lw          $s2, -0xC14($v1)
    ctx->pc = 0x28bee0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964204)));
    // 0x28bee4: 0xc0da658  jal         func_369960
    ctx->pc = 0x28BEE4u;
    SET_GPR_U32(ctx, 31, 0x28BEECu);
    ctx->pc = 0x28BEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BEE4u;
    // 0x28bee8: 0xa3a20003  sb          $v0, 0x3($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369960u, 0x28BEE4u, 0x28BEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BEECu;
label_28beec:
    // 0x28beec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28beecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28bef0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x28bef0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x28bef4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x28BEF4u;
    {
        const bool branch_taken_0x28bef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEF4u;
        // 0x28bef8: 0xc44ca7a4  lwc1        $f12, -0x585C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294944676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bef4) {
            ctx->pc = 0x28BF48u;
            goto label_28bf48;
        }
    }
    ctx->pc = 0x28BEFCu;
label_28befc:
    // 0x28befc: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x28befcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x28bf00: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x28bf00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x28bf04: 0x2c4200a1  sltiu       $v0, $v0, 0xA1
    ctx->pc = 0x28bf04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)161) ? 1 : 0);
    // 0x28bf08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28BF08u;
    {
        const bool branch_taken_0x28bf08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF08u;
        // 0x28bf0c: 0x8c72f3ec  lw          $s2, -0xC14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf08) {
            ctx->pc = 0x28BF18u;
            goto label_28bf18;
        }
    }
    ctx->pc = 0x28BF10u;
    // 0x28bf10: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x28bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x28bf14: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x28bf14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
label_28bf18:
    // 0x28bf18: 0xc0da658  jal         func_369960
    ctx->pc = 0x28BF18u;
    SET_GPR_U32(ctx, 31, 0x28BF20u);
    ctx->pc = 0x28BF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BF18u;
    // 0x28bf1c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x369960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369960u, 0x28BF18u, 0x28BF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BF20u;
label_28bf20:
    // 0x28bf20: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28bf24: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x28bf24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x28bf28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28BF28u;
    {
        const bool branch_taken_0x28bf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF28u;
        // 0x28bf2c: 0xc44ca7a4  lwc1        $f12, -0x585C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294944676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf28) {
            ctx->pc = 0x28BF48u;
            goto label_28bf48;
        }
    }
    ctx->pc = 0x28BF30u;
label_28bf30:
    // 0x28bf30: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x28bf30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x28bf34: 0xc0da658  jal         func_369960
    ctx->pc = 0x28BF34u;
    SET_GPR_U32(ctx, 31, 0x28BF3Cu);
    ctx->pc = 0x28BF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BF34u;
    // 0x28bf38: 0x8c52f3e4  lw          $s2, -0xC1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369960u, 0x28BF34u, 0x28BF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BF3Cu;
label_28bf3c:
    // 0x28bf3c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28bf40: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x28bf40u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x28bf44: 0xc44ca79c  lwc1        $f12, -0x5864($v0)
    ctx->pc = 0x28bf44u;
    { uint32_t bits = FAST_READ32(0x3FA79Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28bf48:
    // 0x28bf48: 0xc0a2efc  jal         func_28BBF0
    ctx->pc = 0x28BF48u;
    SET_GPR_U32(ctx, 31, 0x28BF50u);
    ctx->pc = 0x28BF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BF48u;
    // 0x28bf4c: 0x3c10006c  lui         $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BBF0u, 0x28BF48u, 0x28BF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BF50u;
label_28bf50:
    // 0x28bf50: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x28bf50u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_28bf54:
    // 0x28bf54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28bf58:
    // 0x28bf58: 0x2610ca60  addiu       $s0, $s0, -0x35A0
    ctx->pc = 0x28bf58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953568));
    // 0x28bf5c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28bf5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28bf60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28bf60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28bf64: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x28bf64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x28bf68: 0x46000b86  mov.s       $f14, $f1
    ctx->pc = 0x28bf68u;
    ctx->f[14] = FPU_MOV_S(ctx->f[1]);
    // 0x28bf6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28bf6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28bf70: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x28bf70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bf74: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x28bf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28bf78: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x28bf78u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x28bf7c: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x28bf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28bf80: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x28bf80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bf84: 0x46006b41  sub.s       $f13, $f13, $f0
    ctx->pc = 0x28bf84u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x28bf88: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x28bf88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x28bf8c: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x28bf8cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x28bf90: 0x93a60002  lbu         $a2, 0x2($sp)
    ctx->pc = 0x28bf90u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x28bf94: 0x93a70003  lbu         $a3, 0x3($sp)
    ctx->pc = 0x28bf94u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x28bf98: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x28BF98u;
    SET_GPR_U32(ctx, 31, 0x28BFA0u);
    ctx->pc = 0x28BF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BF98u;
    // 0x28bf9c: 0x93a40000  lbu         $a0, 0x0($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x28BF98u, 0x28BFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BFA0u;
label_28bfa0:
    // 0x28bfa0: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x28bfa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x28bfa4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x28bfa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28bfa8:
    // 0x28bfa8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x28bfa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28bfac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28bfacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28bfb0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x28bfb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28bfb4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28bfb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28bfb8: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x28bfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x28bfbc: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x28bfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28bfc0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x28bfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28bfc4: 0x3e00008  jr          $ra
    ctx->pc = 0x28BFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFC4u;
        // 0x28bfc8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BFCCu;
    // 0x28bfcc: 0x0  nop
    ctx->pc = 0x28bfccu;
    // NOP
    ctx->pc = 0x28bfd0u;
}
