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

// Function: sub_001EBC78
// Address: 0x1ebc78 - 0x1ebde0
void sub_001EBC78_0x1ebc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBC78_0x1ebc78");
#endif

    switch (ctx->pc) {
        case 0x1ebcccu: goto label_1ebccc;
        case 0x1ebd00u: goto label_1ebd00;
        case 0x1ebd2cu: goto label_1ebd2c;
        case 0x1ebd80u: goto label_1ebd80;
        default: break;
    }

    ctx->pc = 0x1ebc78u;

    // 0x1ebc78: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1ebc78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ebc7c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1ebc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1ebc80: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1ebc80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1ebc84: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ebc84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ebc88: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1ebc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1ebc8c: 0x34038420  ori         $v1, $zero, 0x8420
    ctx->pc = 0x1ebc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33824);
    // 0x1ebc90: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1ebc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1ebc94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ebc94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebc98: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1ebc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1ebc9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ebc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ebca0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ebca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ebca4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1ebca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1ebca8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1ebca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1ebcac: 0x2058821  addu        $s1, $s0, $a1
    ctx->pc = 0x1ebcacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1ebcb0: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x1ebcb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1ebcb4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1ebcb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebcb8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1ebcb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1ebcbc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1ebcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1ebcc0: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1ebcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1ebcc4: 0xc07bc7e  jal         func_1EF1F8
    ctx->pc = 0x1EBCC4u;
    SET_GPR_U32(ctx, 31, 0x1EBCCCu);
    ctx->pc = 0x1EBCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBCC4u;
    // 0x1ebcc8: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x1EBCC4u, 0x1EBCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBCCCu;
label_1ebccc:
    // 0x1ebccc: 0x0  nop
    ctx->pc = 0x1ebcccu;
    // NOP
    // 0x1ebcd0: 0x0  nop
    ctx->pc = 0x1ebcd0u;
    // NOP
    // 0x1ebcd4: 0x46000544  c1          0x544
    ctx->pc = 0x1ebcd4u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x1ebcd8: 0x82220039  lb          $v0, 0x39($s1)
    ctx->pc = 0x1ebcd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
    // 0x1ebcdc: 0x92340038  lbu         $s4, 0x38($s1)
    ctx->pc = 0x1ebcdcu;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1ebce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ebce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebce4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1ebce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ebce8: 0x0  nop
    ctx->pc = 0x1ebce8u;
    // NOP
    // 0x1ebcec: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1ebcecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1ebcf0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ebcf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebcf4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ebcf4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1ebcf8: 0xc07dc70  jal         func_1F71C0
    ctx->pc = 0x1EBCF8u;
    SET_GPR_U32(ctx, 31, 0x1EBD00u);
    ctx->pc = 0x1EBCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBCF8u;
    // 0x1ebcfc: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F71C0u, 0x1EBCF8u, 0x1EBD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBD00u;
label_1ebd00:
    // 0x1ebd00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ebd00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebd04: 0x5e400007  bgtzl       $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EBD04u;
    {
        const bool branch_taken_0x1ebd04 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x1ebd04) {
            ctx->pc = 0x1EBD08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBD04u;
            // 0x1ebd08: 0x26330020  addiu       $s3, $s1, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBD24u;
            goto label_1ebd24;
        }
    }
    ctx->pc = 0x1EBD0Cu;
    // 0x1ebd0c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1ebd0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ebd10: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1ebd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1ebd14: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1EBD14u;
    {
        const bool branch_taken_0x1ebd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD14u;
        // 0x1ebd18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebd14) {
            ctx->pc = 0x1EBDB8u;
            goto label_1ebdb8;
        }
    }
    ctx->pc = 0x1EBD1Cu;
    // 0x1ebd1c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1ebd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1ebd20: 0x26330020  addiu       $s3, $s1, 0x20
    ctx->pc = 0x1ebd20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1ebd24:
    // 0x1ebd24: 0xc077f36  jal         func_1DFCD8
    ctx->pc = 0x1EBD24u;
    SET_GPR_U32(ctx, 31, 0x1EBD2Cu);
    ctx->pc = 0x1EBD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBD24u;
    // 0x1ebd28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCD8u, 0x1EBD24u, 0x1EBD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBD2Cu;
label_1ebd2c:
    // 0x1ebd2c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1ebd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ebd30: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1ebd30u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ebd34: 0x0  nop
    ctx->pc = 0x1ebd34u;
    // NOP
    // 0x1ebd38: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ebd38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ebd3c: 0xe600016c  swc1        $f0, 0x16C($s0)
    ctx->pc = 0x1ebd3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1ebd40: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1ebd40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1ebd44: 0xa2020170  sb          $v0, 0x170($s0)
    ctx->pc = 0x1ebd44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ebd48: 0x24849c38  addiu       $a0, $a0, -0x63C8
    ctx->pc = 0x1ebd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    // 0x1ebd4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ebd4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ebd50: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1ebd50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebd54: 0x92220040  lbu         $v0, 0x40($s1)
    ctx->pc = 0x1ebd54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1ebd58: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ebd58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ebd5c: 0xa60200f4  sh          $v0, 0xF4($s0)
    ctx->pc = 0x1ebd5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ebd60: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ebd60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ebd64: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ebd64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ebd68: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x1ebd68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ebd6c: 0xa20200fc  sb          $v0, 0xFC($s0)
    ctx->pc = 0x1ebd6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 252), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ebd70: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x1ebd70u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ebd74: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x1ebd74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ebd78: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x1EBD78u;
    SET_GPR_U32(ctx, 31, 0x1EBD80u);
    ctx->pc = 0x1EBD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBD78u;
    // 0x1ebd7c: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1EBD78u, 0x1EBD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBD80u;
label_1ebd80:
    // 0x1ebd80: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EBD80u;
    {
        const bool branch_taken_0x1ebd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD80u;
        // 0x1ebd84: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebd80) {
            ctx->pc = 0x1EBDB4u;
            goto label_1ebdb4;
        }
    }
    ctx->pc = 0x1EBD88u;
    // 0x1ebd88: 0xa212010c  sb          $s2, 0x10C($s0)
    ctx->pc = 0x1ebd88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 18));
    // 0x1ebd8c: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x1ebd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
    // 0x1ebd90: 0xe6150110  swc1        $f21, 0x110($s0)
    ctx->pc = 0x1ebd90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x1ebd94: 0xa214011c  sb          $s4, 0x11C($s0)
    ctx->pc = 0x1ebd94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 20));
    // 0x1ebd98: 0xe6140120  swc1        $f20, 0x120($s0)
    ctx->pc = 0x1ebd98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x1ebd9c: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x1ebd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x1ebda0: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1ebda0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ebda4: 0xfa010130  sqc2        $vf1, 0x130($s0)
    ctx->pc = 0x1ebda4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ebda8: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x1ebda8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x1ebdac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EBDACu;
    {
        const bool branch_taken_0x1ebdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDACu;
        // 0x1ebdb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebdac) {
            ctx->pc = 0x1EBDB8u;
            goto label_1ebdb8;
        }
    }
    ctx->pc = 0x1EBDB4u;
label_1ebdb4:
    // 0x1ebdb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ebdb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ebdb8:
    // 0x1ebdb8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1ebdb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ebdbc: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1ebdbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ebdc0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1ebdc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ebdc4: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1ebdc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ebdc8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1ebdc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ebdcc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1ebdccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ebdd0: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x1ebdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ebdd4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1ebdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ebdd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDD8u;
        // 0x1ebddc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBDE0u;
}
