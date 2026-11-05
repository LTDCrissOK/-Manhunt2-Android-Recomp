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

// Function: sub_001FBD38
// Address: 0x1fbd38 - 0x1fbeb8
void sub_001FBD38_0x1fbd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBD38_0x1fbd38");
#endif

    switch (ctx->pc) {
        case 0x1fbd90u: goto label_1fbd90;
        case 0x1fbdc4u: goto label_1fbdc4;
        case 0x1fbdd0u: goto label_1fbdd0;
        case 0x1fbe40u: goto label_1fbe40;
        default: break;
    }

    ctx->pc = 0x1fbd38u;

    // 0x1fbd38: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1fbd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1fbd3c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1fbd3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fbd40: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1fbd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1fbd44: 0x340280f0  ori         $v0, $zero, 0x80F0
    ctx->pc = 0x1fbd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x1fbd48: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1fbd48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1fbd4c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1fbd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1fbd50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fbd50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbd54: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1fbd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1fbd58: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1fbd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1fbd5c: 0x2259021  addu        $s2, $s1, $a1
    ctx->pc = 0x1fbd5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1fbd60: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1fbd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1fbd64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fbd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbd68: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1fbd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1fbd6c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1fbd6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbd70: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1fbd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1fbd74: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x1fbd74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1fbd78: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1fbd78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1fbd7c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1fbd7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1fbd80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fbd80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbd84: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1fbd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1fbd88: 0xc07bc7e  jal         func_1EF1F8
    ctx->pc = 0x1FBD88u;
    SET_GPR_U32(ctx, 31, 0x1FBD90u);
    ctx->pc = 0x1FBD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBD88u;
    // 0x1fbd8c: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x1FBD88u, 0x1FBD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBD90u;
label_1fbd90:
    // 0x1fbd90: 0x0  nop
    ctx->pc = 0x1fbd90u;
    // NOP
    // 0x1fbd94: 0x0  nop
    ctx->pc = 0x1fbd94u;
    // NOP
    // 0x1fbd98: 0x46000544  c1          0x544
    ctx->pc = 0x1fbd98u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x1fbd9c: 0x8642003a  lh          $v0, 0x3A($s2)
    ctx->pc = 0x1fbd9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 58)));
    // 0x1fbda0: 0x92550038  lbu         $s5, 0x38($s2)
    ctx->pc = 0x1fbda0u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1fbda4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbda8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1fbda8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1fbdac: 0x0  nop
    ctx->pc = 0x1fbdacu;
    // NOP
    // 0x1fbdb0: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1fbdb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1fbdb4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1fbdb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbdb8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1fbdb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1fbdbc: 0xc07dc70  jal         func_1F71C0
    ctx->pc = 0x1FBDBCu;
    SET_GPR_U32(ctx, 31, 0x1FBDC4u);
    ctx->pc = 0x1FBDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBDBCu;
    // 0x1fbdc0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F71C0u, 0x1FBDBCu, 0x1FBDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBDC4u;
label_1fbdc4:
    // 0x1fbdc4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1fbdc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbdc8: 0xc077f36  jal         func_1DFCD8
    ctx->pc = 0x1FBDC8u;
    SET_GPR_U32(ctx, 31, 0x1FBDD0u);
    ctx->pc = 0x1FBDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBDC8u;
    // 0x1fbdcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCD8u, 0x1FBDC8u, 0x1FBDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBDD0u;
label_1fbdd0:
    // 0x1fbdd0: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1fbdd0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fbdd4: 0x0  nop
    ctx->pc = 0x1fbdd4u;
    // NOP
    // 0x1fbdd8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fbdd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fbddc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1fbddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fbde0: 0xe620016c  swc1        $f0, 0x16C($s1)
    ctx->pc = 0x1fbde0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 364), bits); }
    // 0x1fbde4: 0xa2220170  sb          $v0, 0x170($s1)
    ctx->pc = 0x1fbde4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 368), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fbde8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fbde8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fbdec: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fbdecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1fbdf0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1fbdf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fbdf4: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x1fbdf4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fbdf8: 0x5e600007  bgtzl       $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FBDF8u;
    {
        const bool branch_taken_0x1fbdf8 = (GPR_S32(ctx, 19) > 0);
        if (branch_taken_0x1fbdf8) {
            ctx->pc = 0x1FBDFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBDF8u;
            // 0x1fbdfc: 0x9242003c  lbu         $v0, 0x3C($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBE18u;
            goto label_1fbe18;
        }
    }
    ctx->pc = 0x1FBE00u;
    // 0x1fbe00: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x1fbe00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fbe04: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1fbe04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1fbe08: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1FBE08u;
    {
        const bool branch_taken_0x1fbe08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE08u;
        // 0x1fbe0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbe08) {
            ctx->pc = 0x1FBE8Cu;
            goto label_1fbe8c;
        }
    }
    ctx->pc = 0x1FBE10u;
    // 0x1fbe10: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1fbe10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x1fbe14: 0x9242003c  lbu         $v0, 0x3C($s2)
    ctx->pc = 0x1fbe14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 60)));
label_1fbe18:
    // 0x1fbe18: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1fbe18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1fbe1c: 0x24849c38  addiu       $a0, $a0, -0x63C8
    ctx->pc = 0x1fbe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    // 0x1fbe20: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1fbe20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbe24: 0xa62200f4  sh          $v0, 0xF4($s1)
    ctx->pc = 0x1fbe24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 244), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fbe28: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1fbe28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbe2c: 0x92420010  lbu         $v0, 0x10($s2)
    ctx->pc = 0x1fbe2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1fbe30: 0xa22200fc  sb          $v0, 0xFC($s1)
    ctx->pc = 0x1fbe30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 252), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fbe34: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x1fbe34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fbe38: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x1FBE38u;
    SET_GPR_U32(ctx, 31, 0x1FBE40u);
    ctx->pc = 0x1FBE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBE38u;
    // 0x1fbe3c: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1FBE38u, 0x1FBE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBE40u;
label_1fbe40:
    // 0x1fbe40: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1fbe40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbe44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fbe44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbe48: 0xa233010c  sb          $s3, 0x10C($s1)
    ctx->pc = 0x1fbe48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 268), (uint8_t)GPR_U32(ctx, 19));
    // 0x1fbe4c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1fbe4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fbe50: 0xae2300f8  sw          $v1, 0xF8($s1)
    ctx->pc = 0x1fbe50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 3));
    // 0x1fbe54: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1fbe54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1fbe58: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x1fbe58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x1fbe5c: 0x8c4315e8  lw          $v1, 0x15E8($v0)
    ctx->pc = 0x1fbe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5608)));
    // 0x1fbe60: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBE60u;
    {
        const bool branch_taken_0x1fbe60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbe60) {
            ctx->pc = 0x1FBE64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBE60u;
            // 0x1fbe64: 0xa235011c  sb          $s5, 0x11C($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 284), (uint8_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBE70u;
            goto label_1fbe70;
        }
    }
    ctx->pc = 0x1FBE68u;
    // 0x1fbe68: 0xa220010c  sb          $zero, 0x10C($s1)
    ctx->pc = 0x1fbe68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 268), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fbe6c: 0xa220011c  sb          $zero, 0x11C($s1)
    ctx->pc = 0x1fbe6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 284), (uint8_t)GPR_U32(ctx, 0));
label_1fbe70:
    // 0x1fbe70: 0xe6350110  swc1        $f21, 0x110($s1)
    ctx->pc = 0x1fbe70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
    // 0x1fbe74: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x1fbe74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1fbe78: 0xe6340120  swc1        $f20, 0x120($s1)
    ctx->pc = 0x1fbe78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x1fbe7c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1fbe7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fbe80: 0xfa210130  sqc2        $vf1, 0x130($s1)
    ctx->pc = 0x1fbe80u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fbe84: 0xae20014c  sw          $zero, 0x14C($s1)
    ctx->pc = 0x1fbe84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 0));
    // 0x1fbe88: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fbe88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fbe8c:
    // 0x1fbe8c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1fbe8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fbe90: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1fbe90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fbe94: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1fbe94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fbe98: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1fbe98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fbe9c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1fbe9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fbea0: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1fbea0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fbea4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1fbea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fbea8: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1fbea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1fbeac: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1fbeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1fbeb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBEB0u;
        // 0x1fbeb4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBEB8u;
}
