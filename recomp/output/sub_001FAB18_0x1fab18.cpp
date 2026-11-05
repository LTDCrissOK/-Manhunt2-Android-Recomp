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

// Function: sub_001FAB18
// Address: 0x1fab18 - 0x1fac78
void sub_001FAB18_0x1fab18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAB18_0x1fab18");
#endif

    switch (ctx->pc) {
        case 0x1fab70u: goto label_1fab70;
        case 0x1faba4u: goto label_1faba4;
        case 0x1fabb0u: goto label_1fabb0;
        case 0x1fac20u: goto label_1fac20;
        default: break;
    }

    ctx->pc = 0x1fab18u;

    // 0x1fab18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1fab18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1fab1c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1fab1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fab20: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1fab20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1fab24: 0x34028de0  ori         $v0, $zero, 0x8DE0
    ctx->pc = 0x1fab24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36320);
    // 0x1fab28: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1fab28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1fab2c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1fab2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1fab30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fab30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fab34: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1fab34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1fab38: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1fab38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1fab3c: 0x2259021  addu        $s2, $s1, $a1
    ctx->pc = 0x1fab3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1fab40: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1fab40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1fab44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fab44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fab48: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1fab48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1fab4c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1fab4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fab50: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1fab50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1fab54: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x1fab54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1fab58: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1fab58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1fab5c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1fab5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1fab60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fab60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fab64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1fab64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1fab68: 0xc07bc7e  jal         func_1EF1F8
    ctx->pc = 0x1FAB68u;
    SET_GPR_U32(ctx, 31, 0x1FAB70u);
    ctx->pc = 0x1FAB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAB68u;
    // 0x1fab6c: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x1FAB68u, 0x1FAB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAB70u;
label_1fab70:
    // 0x1fab70: 0x0  nop
    ctx->pc = 0x1fab70u;
    // NOP
    // 0x1fab74: 0x0  nop
    ctx->pc = 0x1fab74u;
    // NOP
    // 0x1fab78: 0x46000544  c1          0x544
    ctx->pc = 0x1fab78u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x1fab7c: 0x82420039  lb          $v0, 0x39($s2)
    ctx->pc = 0x1fab7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 57)));
    // 0x1fab80: 0x92550038  lbu         $s5, 0x38($s2)
    ctx->pc = 0x1fab80u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1fab84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fab84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fab88: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1fab88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1fab8c: 0x0  nop
    ctx->pc = 0x1fab8cu;
    // NOP
    // 0x1fab90: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1fab90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1fab94: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1fab94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fab98: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1fab98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1fab9c: 0xc07dc70  jal         func_1F71C0
    ctx->pc = 0x1FAB9Cu;
    SET_GPR_U32(ctx, 31, 0x1FABA4u);
    ctx->pc = 0x1FABA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAB9Cu;
    // 0x1faba0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F71C0u, 0x1FAB9Cu, 0x1FABA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FABA4u;
label_1faba4:
    // 0x1faba4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1faba4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faba8: 0xc077f36  jal         func_1DFCD8
    ctx->pc = 0x1FABA8u;
    SET_GPR_U32(ctx, 31, 0x1FABB0u);
    ctx->pc = 0x1FABACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FABA8u;
    // 0x1fabac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCD8u, 0x1FABA8u, 0x1FABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FABB0u;
label_1fabb0:
    // 0x1fabb0: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1fabb0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fabb4: 0x0  nop
    ctx->pc = 0x1fabb4u;
    // NOP
    // 0x1fabb8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fabb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fabbc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1fabbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fabc0: 0xe620016c  swc1        $f0, 0x16C($s1)
    ctx->pc = 0x1fabc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 364), bits); }
    // 0x1fabc4: 0xa2220170  sb          $v0, 0x170($s1)
    ctx->pc = 0x1fabc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 368), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fabc8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fabc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fabcc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fabccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1fabd0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1fabd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fabd4: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x1fabd4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fabd8: 0x5e600007  bgtzl       $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FABD8u;
    {
        const bool branch_taken_0x1fabd8 = (GPR_S32(ctx, 19) > 0);
        if (branch_taken_0x1fabd8) {
            ctx->pc = 0x1FABDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FABD8u;
            // 0x1fabdc: 0x9242003a  lbu         $v0, 0x3A($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 58)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FABF8u;
            goto label_1fabf8;
        }
    }
    ctx->pc = 0x1FABE0u;
    // 0x1fabe0: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x1fabe0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fabe4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1fabe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1fabe8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FABE8u;
    {
        const bool branch_taken_0x1fabe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FABE8u;
        // 0x1fabec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fabe8) {
            ctx->pc = 0x1FAC4Cu;
            goto label_1fac4c;
        }
    }
    ctx->pc = 0x1FABF0u;
    // 0x1fabf0: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1fabf0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x1fabf4: 0x9242003a  lbu         $v0, 0x3A($s2)
    ctx->pc = 0x1fabf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 58)));
label_1fabf8:
    // 0x1fabf8: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1fabf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1fabfc: 0x24849c38  addiu       $a0, $a0, -0x63C8
    ctx->pc = 0x1fabfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    // 0x1fac00: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1fac00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fac04: 0xa62200f4  sh          $v0, 0xF4($s1)
    ctx->pc = 0x1fac04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 244), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fac08: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1fac08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fac0c: 0x9242000c  lbu         $v0, 0xC($s2)
    ctx->pc = 0x1fac0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1fac10: 0xa22200fc  sb          $v0, 0xFC($s1)
    ctx->pc = 0x1fac10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 252), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fac14: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x1fac14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fac18: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x1FAC18u;
    SET_GPR_U32(ctx, 31, 0x1FAC20u);
    ctx->pc = 0x1FAC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAC18u;
    // 0x1fac1c: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1FAC18u, 0x1FAC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAC20u;
label_1fac20:
    // 0x1fac20: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1fac20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fac24: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x1fac24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1fac28: 0xa233010c  sb          $s3, 0x10C($s1)
    ctx->pc = 0x1fac28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 268), (uint8_t)GPR_U32(ctx, 19));
    // 0x1fac2c: 0xae2300f8  sw          $v1, 0xF8($s1)
    ctx->pc = 0x1fac2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 3));
    // 0x1fac30: 0xe6350110  swc1        $f21, 0x110($s1)
    ctx->pc = 0x1fac30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
    // 0x1fac34: 0xa235011c  sb          $s5, 0x11C($s1)
    ctx->pc = 0x1fac34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 284), (uint8_t)GPR_U32(ctx, 21));
    // 0x1fac38: 0xe6340120  swc1        $f20, 0x120($s1)
    ctx->pc = 0x1fac38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x1fac3c: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x1fac3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x1fac40: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1fac40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fac44: 0xfa210130  sqc2        $vf1, 0x130($s1)
    ctx->pc = 0x1fac44u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fac48: 0xae20014c  sw          $zero, 0x14C($s1)
    ctx->pc = 0x1fac48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 0));
label_1fac4c:
    // 0x1fac4c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1fac4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fac50: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1fac50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fac54: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1fac54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fac58: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1fac58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fac5c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1fac5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fac60: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1fac60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fac64: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1fac64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fac68: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1fac68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1fac6c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1fac6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1fac70: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC70u;
        // 0x1fac74: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAC78u;
}
