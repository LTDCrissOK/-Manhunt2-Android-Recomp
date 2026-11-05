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

// Function: sub_0027DD38
// Address: 0x27dd38 - 0x27e068
void sub_0027DD38_0x27dd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027DD38_0x27dd38");
#endif

    switch (ctx->pc) {
        case 0x27df38u: goto label_27df38;
        case 0x27df64u: goto label_27df64;
        case 0x27df74u: goto label_27df74;
        case 0x27df84u: goto label_27df84;
        case 0x27df94u: goto label_27df94;
        case 0x27dfa0u: goto label_27dfa0;
        case 0x27dfacu: goto label_27dfac;
        case 0x27dfb8u: goto label_27dfb8;
        case 0x27dfc4u: goto label_27dfc4;
        case 0x27e000u: goto label_27e000;
        default: break;
    }

    ctx->pc = 0x27dd38u;

    // 0x27dd38: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x27dd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x27dd3c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x27dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x27dd40: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x27dd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x27dd44: 0x2448b2e0  addiu       $t0, $v0, -0x4D20
    ctx->pc = 0x27dd44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947552));
    // 0x27dd48: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x27dd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x27dd4c: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x27dd4cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dd50: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x27dd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x27dd54: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x27dd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x27dd58: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x27dd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x27dd5c: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x27dd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x27dd60: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x27dd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x27dd64: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x27dd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x27dd68: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x27dd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x27dd6c: 0xe7be0100  swc1        $f30, 0x100($sp)
    ctx->pc = 0x27dd6cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x27dd70: 0xe7bd00f8  swc1        $f29, 0xF8($sp)
    ctx->pc = 0x27dd70u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x27dd74: 0xe7bc00f0  swc1        $f28, 0xF0($sp)
    ctx->pc = 0x27dd74u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x27dd78: 0xe7bb00e8  swc1        $f27, 0xE8($sp)
    ctx->pc = 0x27dd78u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x27dd7c: 0xe7ba00e0  swc1        $f26, 0xE0($sp)
    ctx->pc = 0x27dd7cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x27dd80: 0xe7b900d8  swc1        $f25, 0xD8($sp)
    ctx->pc = 0x27dd80u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x27dd84: 0xe7b800d0  swc1        $f24, 0xD0($sp)
    ctx->pc = 0x27dd84u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x27dd88: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x27dd88u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x27dd8c: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x27dd8cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x27dd90: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x27dd90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x27dd94: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x27dd94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x27dd98: 0x8d0a0004  lw          $t2, 0x4($t0)
    ctx->pc = 0x27dd98u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x6BB2E4u));
    // 0x27dd9c: 0x94870000  lhu         $a3, 0x0($a0)
    ctx->pc = 0x27dd9cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27dda0: 0xa3080  sll         $a2, $t2, 2
    ctx->pc = 0x27dda0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x27dda4: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x27dda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x27dda8: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x27dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x27ddac: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x27ddacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27ddb0: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x27DDB0u;
    {
        const bool branch_taken_0x27ddb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDB0u;
        // 0x27ddb4: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ddb0) {
            ctx->pc = 0x27E010u;
            goto label_27e010;
        }
    }
    ctx->pc = 0x27DDB8u;
    // 0x27ddb8: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x27ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x27ddbc: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x27ddbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x27ddc0: 0x14400094  bnez        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x27DDC0u;
    {
        const bool branch_taken_0x27ddc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDC0u;
        // 0x27ddc4: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ddc0) {
            ctx->pc = 0x27E014u;
            goto label_27e014;
        }
    }
    ctx->pc = 0x27DDC8u;
    // 0x27ddc8: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x27ddc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x27ddcc: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x27ddccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x27ddd0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27ddd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27ddd4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27ddd8: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x27ddd8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27dddc: 0x1125008d  beq         $t1, $a1, . + 4 + (0x8D << 2)
    ctx->pc = 0x27DDDCu;
    {
        const bool branch_taken_0x27dddc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        ctx->pc = 0x27DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDDCu;
        // 0x27dde0: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dddc) {
            ctx->pc = 0x27E014u;
            goto label_27e014;
        }
    }
    ctx->pc = 0x27DDE4u;
    // 0x27dde4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x27dde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27dde8: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x27dde8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27ddec: 0x28e500f8  slti        $a1, $a3, 0xF8
    ctx->pc = 0x27ddecu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)248) ? 1 : 0);
    // 0x27ddf0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27ddf4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x27DDF4u;
    {
        const bool branch_taken_0x27ddf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDF4u;
        // 0x27ddf8: 0xc4420004  lwc1        $f2, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ddf4) {
            ctx->pc = 0x27DE18u;
            goto label_27de18;
        }
    }
    ctx->pc = 0x27DDFCu;
    // 0x27ddfc: 0x28e200f4  slti        $v0, $a3, 0xF4
    ctx->pc = 0x27ddfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)244) ? 1 : 0);
    // 0x27de00: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27DE00u;
    {
        const bool branch_taken_0x27de00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE00u;
        // 0x27de04: 0x3c04006c  lui         $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de00) {
            ctx->pc = 0x27DE1Cu;
            goto label_27de1c;
        }
    }
    ctx->pc = 0x27DE08u;
    // 0x27de08: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x27de08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x27de0c: 0x2483aff0  addiu       $v1, $a0, -0x5010
    ctx->pc = 0x27de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946800));
    // 0x27de10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27DE10u;
    {
        const bool branch_taken_0x27de10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE10u;
        // 0x27de14: 0xc441ac6c  lwc1        $f1, -0x5394($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294945900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de10) {
            ctx->pc = 0x27DE28u;
            goto label_27de28;
        }
    }
    ctx->pc = 0x27DE18u;
label_27de18:
    // 0x27de18: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x27de18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_27de1c:
    // 0x27de1c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x27de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x27de20: 0x2483aff0  addiu       $v1, $a0, -0x5010
    ctx->pc = 0x27de20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946800));
    // 0x27de24: 0xc441c95c  lwc1        $f1, -0x36A4($v0)
    ctx->pc = 0x27de24u;
    { uint32_t bits = FAST_READ32(0x46C95Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27de28:
    // 0x27de28: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x27de28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27de2c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x27de2cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27de30: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x27de30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27de34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27de34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27de38: 0x15620006  bne         $t3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27DE38u;
    {
        const bool branch_taken_0x27de38 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x27DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE38u;
        // 0x27de3c: 0x46010742  mul.s       $f29, $f0, $f1 (Delay Slot)
        ctx->f[29] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de38) {
            ctx->pc = 0x27DE54u;
            goto label_27de54;
        }
    }
    ctx->pc = 0x27DE40u;
    // 0x27de40: 0x26e2aff0  addiu       $v0, $s7, -0x5010
    ctx->pc = 0x27de40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946800));
    // 0x27de44: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x27de44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27de48: 0x461d0000  add.s       $f0, $f0, $f29
    ctx->pc = 0x27de48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[29]);
    // 0x27de4c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x27DE4Cu;
    {
        const bool branch_taken_0x27de4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE4Cu;
        // 0x27de50: 0xe4400018  swc1        $f0, 0x18($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de4c) {
            ctx->pc = 0x27E010u;
            goto label_27e010;
        }
    }
    ctx->pc = 0x27DE54u;
label_27de54:
    // 0x27de54: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x27de54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x27de58: 0xa2880  sll         $a1, $t2, 2
    ctx->pc = 0x27de58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x27de5c: 0x2582b2e0  addiu       $v0, $t4, -0x4D20
    ctx->pc = 0x27de5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294947552));
    // 0x27de60: 0x1231818  mult        $v1, $t1, $v1
    ctx->pc = 0x27de60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27de64: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x27de64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x27de68: 0x26eaaff0  addiu       $t2, $s7, -0x5010
    ctx->pc = 0x27de68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946800));
    // 0x27de6c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x27de6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27de70: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x27de70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x27de74: 0xc4410078  lwc1        $f1, 0x78($v0)
    ctx->pc = 0x27de74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27de78: 0xc5400014  lwc1        $f0, 0x14($t2)
    ctx->pc = 0x27de78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27de7c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x27de7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x27de80: 0x8ee2aff0  lw          $v0, -0x5010($s7)
    ctx->pc = 0x27de80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294946800)));
    // 0x27de84: 0xc5570008  lwc1        $f23, 0x8($t2)
    ctx->pc = 0x27de84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x27de88: 0x46000f82  mul.s       $f30, $f1, $f0
    ctx->pc = 0x27de88u;
    ctx->f[30] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27de8c: 0xc558000c  lwc1        $f24, 0xC($t2)
    ctx->pc = 0x27de8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x27de90: 0xc47b0014  lwc1        $f27, 0x14($v1)
    ctx->pc = 0x27de90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x27de94: 0xc4790008  lwc1        $f25, 0x8($v1)
    ctx->pc = 0x27de94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x27de98: 0xc47c000c  lwc1        $f28, 0xC($v1)
    ctx->pc = 0x27de98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x27de9c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x27DE9Cu;
    {
        const bool branch_taken_0x27de9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE9Cu;
        // 0x27dea0: 0xc47a0010  lwc1        $f26, 0x10($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de9c) {
            ctx->pc = 0x27DF48u;
            goto label_27df48;
        }
    }
    ctx->pc = 0x27DEA4u;
    // 0x27dea4: 0x8d510040  lw          $s1, 0x40($t2)
    ctx->pc = 0x27dea4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 64)));
    // 0x27dea8: 0x4600e446  mov.s       $f17, $f28
    ctx->pc = 0x27dea8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[28]);
    // 0x27deac: 0x8d500044  lw          $s0, 0x44($t2)
    ctx->pc = 0x27deacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 68)));
    // 0x27deb0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x27deb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x27deb4: 0x8d4f0048  lw          $t7, 0x48($t2)
    ctx->pc = 0x27deb4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 72)));
    // 0x27deb8: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x27deb8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x27debc: 0x8d4e004c  lw          $t6, 0x4C($t2)
    ctx->pc = 0x27debcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 76)));
    // 0x27dec0: 0x4600f3c6  mov.s       $f15, $f30
    ctx->pc = 0x27dec0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[30]);
    // 0x27dec4: 0x8d4d0050  lw          $t5, 0x50($t2)
    ctx->pc = 0x27dec4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 80)));
    // 0x27dec8: 0x4600cc06  mov.s       $f16, $f25
    ctx->pc = 0x27dec8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[25]);
    // 0x27decc: 0x8d4c0054  lw          $t4, 0x54($t2)
    ctx->pc = 0x27deccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 84)));
    // 0x27ded0: 0x4600d486  mov.s       $f18, $f26
    ctx->pc = 0x27ded0u;
    ctx->f[18] = FPU_MOV_S(ctx->f[26]);
    // 0x27ded4: 0x8d430058  lw          $v1, 0x58($t2)
    ctx->pc = 0x27ded4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x27ded8: 0x4600eb86  mov.s       $f14, $f29
    ctx->pc = 0x27ded8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[29]);
    // 0x27dedc: 0x8d42005c  lw          $v0, 0x5C($t2)
    ctx->pc = 0x27dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 92)));
    // 0x27dee0: 0x46008cc6  mov.s       $f19, $f17
    ctx->pc = 0x27dee0u;
    ctx->f[19] = FPU_MOV_S(ctx->f[17]);
    // 0x27dee4: 0x8d4b003c  lw          $t3, 0x3C($t2)
    ctx->pc = 0x27dee4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 60)));
    // 0x27dee8: 0x8d440020  lw          $a0, 0x20($t2)
    ctx->pc = 0x27dee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x27deec: 0x8d450024  lw          $a1, 0x24($t2)
    ctx->pc = 0x27deecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 36)));
    // 0x27def0: 0x8d460028  lw          $a2, 0x28($t2)
    ctx->pc = 0x27def0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x27def4: 0x8d47002c  lw          $a3, 0x2C($t2)
    ctx->pc = 0x27def4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 44)));
    // 0x27def8: 0x8d480030  lw          $t0, 0x30($t2)
    ctx->pc = 0x27def8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x27defc: 0x8d490034  lw          $t1, 0x34($t2)
    ctx->pc = 0x27defcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 52)));
    // 0x27df00: 0x8d4a0038  lw          $t2, 0x38($t2)
    ctx->pc = 0x27df00u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 56)));
    // 0x27df04: 0xe7bb0018  swc1        $f27, 0x18($sp)
    ctx->pc = 0x27df04u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x27df08: 0xafb10020  sw          $s1, 0x20($sp)
    ctx->pc = 0x27df08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
    // 0x27df0c: 0xafb00028  sw          $s0, 0x28($sp)
    ctx->pc = 0x27df0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 16));
    // 0x27df10: 0xafaf0030  sw          $t7, 0x30($sp)
    ctx->pc = 0x27df10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 15));
    // 0x27df14: 0xafae0038  sw          $t6, 0x38($sp)
    ctx->pc = 0x27df14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 14));
    // 0x27df18: 0xafad0040  sw          $t5, 0x40($sp)
    ctx->pc = 0x27df18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 13));
    // 0x27df1c: 0xafac0048  sw          $t4, 0x48($sp)
    ctx->pc = 0x27df1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 12));
    // 0x27df20: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x27df20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x27df24: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x27df24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x27df28: 0xe7ba0000  swc1        $f26, 0x0($sp)
    ctx->pc = 0x27df28u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27df2c: 0xe7bb0008  swc1        $f27, 0x8($sp)
    ctx->pc = 0x27df2cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x27df30: 0xc0da852  jal         func_36A148
    ctx->pc = 0x27DF30u;
    SET_GPR_U32(ctx, 31, 0x27DF38u);
    ctx->pc = 0x27DF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF30u;
    // 0x27df34: 0xe7b90010  swc1        $f25, 0x10($sp) (Delay Slot)
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A148u, 0x27DF30u, 0x27DF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF38u;
label_27df38:
    // 0x27df38: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x27DF38u;
    {
        const bool branch_taken_0x27df38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF38u;
        // 0x27df3c: 0x26e2aff0  addiu       $v0, $s7, -0x5010 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df38) {
            ctx->pc = 0x27E010u;
            goto label_27e010;
        }
    }
    ctx->pc = 0x27DF40u;
    // 0x27df40: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x27DF40u;
    {
        const bool branch_taken_0x27df40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF40u;
        // 0x27df44: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df40) {
            ctx->pc = 0x27E008u;
            goto label_27e008;
        }
    }
    ctx->pc = 0x27DF48u;
label_27df48:
    // 0x27df48: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x27df48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x27df4c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x27df4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x27df50: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27df50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27df54: 0x2610ac50  addiu       $s0, $s0, -0x53B0
    ctx->pc = 0x27df54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945872));
    // 0x27df58: 0xc615000c  lwc1        $f21, 0xC($s0)
    ctx->pc = 0x27df58u;
    { uint32_t bits = FAST_READ32(0x6BAC5Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27df5c: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x27DF5Cu;
    SET_GPR_U32(ctx, 31, 0x27DF64u);
    ctx->pc = 0x27DF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF5Cu;
    // 0x27df60: 0x4615bb02  mul.s       $f12, $f23, $f21 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x27DF5Cu, 0x27DF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF64u;
label_27df64:
    // 0x27df64: 0xc6160010  lwc1        $f22, 0x10($s0)
    ctx->pc = 0x27df64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27df68: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x27df68u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27df6c: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x27DF6Cu;
    SET_GPR_U32(ctx, 31, 0x27DF74u);
    ctx->pc = 0x27DF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF6Cu;
    // 0x27df70: 0x4616c302  mul.s       $f12, $f24, $f22 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[24], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x27DF6Cu, 0x27DF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF74u;
label_27df74:
    // 0x27df74: 0x461dbb00  add.s       $f12, $f23, $f29
    ctx->pc = 0x27df74u;
    ctx->f[12] = FPU_ADD_S(ctx->f[23], ctx->f[29]);
    // 0x27df78: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x27df78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27df7c: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x27DF7Cu;
    SET_GPR_U32(ctx, 31, 0x27DF84u);
    ctx->pc = 0x27DF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF7Cu;
    // 0x27df80: 0x46156302  mul.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x27DF7Cu, 0x27DF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF84u;
label_27df84:
    // 0x27df84: 0x461ec300  add.s       $f12, $f24, $f30
    ctx->pc = 0x27df84u;
    ctx->f[12] = FPU_ADD_S(ctx->f[24], ctx->f[30]);
    // 0x27df88: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27df88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27df8c: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x27DF8Cu;
    SET_GPR_U32(ctx, 31, 0x27DF94u);
    ctx->pc = 0x27DF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF8Cu;
    // 0x27df90: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x27DF8Cu, 0x27DF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF94u;
label_27df94:
    // 0x27df94: 0x4614cb02  mul.s       $f12, $f25, $f20
    ctx->pc = 0x27df94u;
    ctx->f[12] = FPU_MUL_S(ctx->f[25], ctx->f[20]);
    // 0x27df98: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x27DF98u;
    SET_GPR_U32(ctx, 31, 0x27DFA0u);
    ctx->pc = 0x27DF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF98u;
    // 0x27df9c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x27DF98u, 0x27DFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DFA0u;
label_27dfa0:
    // 0x27dfa0: 0x4614e302  mul.s       $f12, $f28, $f20
    ctx->pc = 0x27dfa0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[28], ctx->f[20]);
    // 0x27dfa4: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x27DFA4u;
    SET_GPR_U32(ctx, 31, 0x27DFACu);
    ctx->pc = 0x27DFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DFA4u;
    // 0x27dfa8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x27DFA4u, 0x27DFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DFACu;
label_27dfac:
    // 0x27dfac: 0x4614d302  mul.s       $f12, $f26, $f20
    ctx->pc = 0x27dfacu;
    ctx->f[12] = FPU_MUL_S(ctx->f[26], ctx->f[20]);
    // 0x27dfb0: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x27DFB0u;
    SET_GPR_U32(ctx, 31, 0x27DFB8u);
    ctx->pc = 0x27DFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DFB0u;
    // 0x27dfb4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x27DFB0u, 0x27DFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DFB8u;
label_27dfb8:
    // 0x27dfb8: 0x4614db02  mul.s       $f12, $f27, $f20
    ctx->pc = 0x27dfb8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[27], ctx->f[20]);
    // 0x27dfbc: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x27DFBCu;
    SET_GPR_U32(ctx, 31, 0x27DFC4u);
    ctx->pc = 0x27DFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DFBCu;
    // 0x27dfc0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x27DFBCu, 0x27DFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DFC4u;
label_27dfc4:
    // 0x27dfc4: 0x240c0064  addiu       $t4, $zero, 0x64
    ctx->pc = 0x27dfc4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x27dfc8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x27dfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27dfcc: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x27dfccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
    // 0x27dfd0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27dfd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dfd4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x27dfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x27dfd8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x27dfd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dfdc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x27dfdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dfe0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x27dfe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dfe4: 0x124100  sll         $t0, $s2, 4
    ctx->pc = 0x27dfe4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x27dfe8: 0x114900  sll         $t1, $s1, 4
    ctx->pc = 0x27dfe8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x27dfec: 0x105100  sll         $t2, $s0, 4
    ctx->pc = 0x27dfecu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27dff0: 0x25900  sll         $t3, $v0, 4
    ctx->pc = 0x27dff0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27dff4: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x27dff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x27dff8: 0xc0b3282  jal         func_2CCA08
    ctx->pc = 0x27DFF8u;
    SET_GPR_U32(ctx, 31, 0x27E000u);
    ctx->pc = 0x27DFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DFF8u;
    // 0x27dffc: 0xafac0008  sw          $t4, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCA08u, 0x27DFF8u, 0x27E000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E000u;
label_27e000:
    // 0x27e000: 0x26e2aff0  addiu       $v0, $s7, -0x5010
    ctx->pc = 0x27e000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946800));
    // 0x27e004: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27e004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27e008:
    // 0x27e008: 0x461d0000  add.s       $f0, $f0, $f29
    ctx->pc = 0x27e008u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[29]);
    // 0x27e00c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x27e00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_27e010:
    // 0x27e010: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x27e010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_27e014:
    // 0x27e014: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x27e014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x27e018: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x27e018u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27e01c: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x27e01cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x27e020: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x27e020u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27e024: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x27e024u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x27e028: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x27e028u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27e02c: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x27e02cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x27e030: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x27e030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27e034: 0xc7be0100  lwc1        $f30, 0x100($sp)
    ctx->pc = 0x27e034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x27e038: 0xc7bd00f8  lwc1        $f29, 0xF8($sp)
    ctx->pc = 0x27e038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x27e03c: 0xc7bc00f0  lwc1        $f28, 0xF0($sp)
    ctx->pc = 0x27e03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x27e040: 0xc7bb00e8  lwc1        $f27, 0xE8($sp)
    ctx->pc = 0x27e040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x27e044: 0xc7ba00e0  lwc1        $f26, 0xE0($sp)
    ctx->pc = 0x27e044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x27e048: 0xc7b900d8  lwc1        $f25, 0xD8($sp)
    ctx->pc = 0x27e048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x27e04c: 0xc7b800d0  lwc1        $f24, 0xD0($sp)
    ctx->pc = 0x27e04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x27e050: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x27e050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x27e054: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x27e054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27e058: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x27e058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27e05c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x27e05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27e060: 0x3e00008  jr          $ra
    ctx->pc = 0x27E060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E060u;
        // 0x27e064: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E068u;
}
