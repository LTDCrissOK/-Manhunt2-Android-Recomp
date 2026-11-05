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

// Function: sub_001CFA18
// Address: 0x1cfa18 - 0x1cfba0
void sub_001CFA18_0x1cfa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFA18_0x1cfa18");
#endif

    switch (ctx->pc) {
        case 0x1cfa54u: goto label_1cfa54;
        case 0x1cfa68u: goto label_1cfa68;
        case 0x1cfaa8u: goto label_1cfaa8;
        case 0x1cfaf8u: goto label_1cfaf8;
        case 0x1cfb14u: goto label_1cfb14;
        case 0x1cfb48u: goto label_1cfb48;
        case 0x1cfb50u: goto label_1cfb50;
        case 0x1cfb68u: goto label_1cfb68;
        default: break;
    }

    ctx->pc = 0x1cfa18u;

    // 0x1cfa18: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1cfa18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1cfa1c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1cfa1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1cfa20: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1cfa20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cfa24: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x1cfa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x1cfa28: 0x46146034  c.lt.s      $f12, $f20
    ctx->pc = 0x1cfa28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfa2c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1cfa2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1cfa30: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x1cfa30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x1cfa34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cfa34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa38: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1CFA38u;
    {
        const bool branch_taken_0x1cfa38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CFA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA38u;
        // 0x1cfa3c: 0xffbf0088  sd          $ra, 0x88($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfa38) {
            ctx->pc = 0x1CFA6Cu;
            goto label_1cfa6c;
        }
    }
    ctx->pc = 0x1CFA40u;
    // 0x1cfa40: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1cfa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1cfa44: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x1cfa44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x1cfa48: 0x2610d240  addiu       $s0, $s0, -0x2DC0
    ctx->pc = 0x1cfa48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955584));
    // 0x1cfa4c: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x1CFA4Cu;
    SET_GPR_U32(ctx, 31, 0x1CFA54u);
    ctx->pc = 0x1CFA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFA4Cu;
    // 0x1cfa50: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x1CFA4Cu, 0x1CFA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFA54u;
label_1cfa54:
    // 0x1cfa54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cfa54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa58: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1cfa58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa5c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1cfa5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa60: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x1CFA60u;
    SET_GPR_U32(ctx, 31, 0x1CFA68u);
    ctx->pc = 0x1CFA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFA60u;
    // 0x1cfa64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x1CFA60u, 0x1CFA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFA68u;
label_1cfa68:
    // 0x1cfa68: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1cfa68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1cfa6c:
    // 0x1cfa6c: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x1cfa6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfa70: 0xe64c001c  swc1        $f12, 0x1C($s2)
    ctx->pc = 0x1cfa70u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x1cfa74: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1cfa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1cfa78: 0x46006081  sub.s       $f2, $f12, $f0
    ctx->pc = 0x1cfa78u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1cfa7c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1cfa7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfa80: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1cfa80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfa84: 0x0  nop
    ctx->pc = 0x1cfa84u;
    // NOP
    // 0x1cfa88: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
    ctx->pc = 0x1CFA88u;
    {
        const bool branch_taken_0x1cfa88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfa88) {
            ctx->pc = 0x1CFA8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFA88u;
            // 0x1cfa8c: 0x86420028  lh          $v0, 0x28($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFAE8u;
            goto label_1cfae8;
        }
    }
    ctx->pc = 0x1CFA90u;
    // 0x1cfa90: 0x9642002a  lhu         $v0, 0x2A($s2)
    ctx->pc = 0x1cfa90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
    // 0x1cfa94: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1cfa94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1cfa98: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CFA98u;
    {
        const bool branch_taken_0x1cfa98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cfa98) {
            ctx->pc = 0x1CFA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFA98u;
            // 0x1cfa9c: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFAA8u;
            goto label_1cfaa8;
        }
    }
    ctx->pc = 0x1CFAA0u;
    // 0x1cfaa0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1CFAA0u;
    {
        const bool branch_taken_0x1cfaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAA0u;
        // 0x1cfaa4: 0xe640001c  swc1        $f0, 0x1C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfaa0) {
            ctx->pc = 0x1CFAE4u;
            goto label_1cfae4;
        }
    }
    ctx->pc = 0x1CFAA8u;
label_1cfaa8:
    // 0x1cfaa8: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x1cfaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfaac: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1cfaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cfab0: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x1cfab0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
    // 0x1cfab4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1cfab4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1cfab8: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x1cfab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x1cfabc: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1cfabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cfac0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cfac0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfac4: 0x0  nop
    ctx->pc = 0x1cfac4u;
    // NOP
    // 0x1cfac8: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1CFAC8u;
    {
        const bool branch_taken_0x1cfac8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfac8) {
            ctx->pc = 0x1CFACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFAC8u;
            // 0x1cfacc: 0x86420028  lh          $v0, 0x28($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFAE8u;
            goto label_1cfae8;
        }
    }
    ctx->pc = 0x1CFAD0u;
    // 0x1cfad0: 0x9642002a  lhu         $v0, 0x2A($s2)
    ctx->pc = 0x1cfad0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
    // 0x1cfad4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1cfad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1cfad8: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1CFAD8u;
    {
        const bool branch_taken_0x1cfad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cfad8) {
            ctx->pc = 0x1CFADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFAD8u;
            // 0x1cfadc: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cfaa8;
        }
    }
    ctx->pc = 0x1CFAE0u;
    // 0x1cfae0: 0xe641001c  swc1        $f1, 0x1C($s2)
    ctx->pc = 0x1cfae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_1cfae4:
    // 0x1cfae4: 0x86420028  lh          $v0, 0x28($s2)
    ctx->pc = 0x1cfae4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
label_1cfae8:
    // 0x1cfae8: 0x46001505  abs.s       $f20, $f2
    ctx->pc = 0x1cfae8u;
    ctx->f[20] = FPU_ABS_S(ctx->f[2]);
    // 0x1cfaec: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CFAECu;
    {
        const bool branch_taken_0x1cfaec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CFAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAECu;
        // 0x1cfaf0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfaec) {
            ctx->pc = 0x1CFB28u;
            goto label_1cfb28;
        }
    }
    ctx->pc = 0x1CFAF4u;
    // 0x1cfaf4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cfaf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfaf8:
    // 0x1cfaf8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1cfaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1cfafc: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1cfafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1cfb00: 0x8c830094  lw          $v1, 0x94($a0)
    ctx->pc = 0x1cfb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1cfb04: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFB04u;
    {
        const bool branch_taken_0x1cfb04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfb04) {
            ctx->pc = 0x1CFB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFB04u;
            // 0x1cfb08: 0x86420028  lh          $v0, 0x28($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFB18u;
            goto label_1cfb18;
        }
    }
    ctx->pc = 0x1CFB0Cu;
    // 0x1cfb0c: 0xc074a7c  jal         func_1D29F0
    ctx->pc = 0x1CFB0Cu;
    SET_GPR_U32(ctx, 31, 0x1CFB14u);
    ctx->pc = 0x1D29F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D29F0u, 0x1CFB0Cu, 0x1CFB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFB14u;
label_1cfb14:
    // 0x1cfb14: 0x86420028  lh          $v0, 0x28($s2)
    ctx->pc = 0x1cfb14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
label_1cfb18:
    // 0x1cfb18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cfb18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cfb1c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1cfb1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1cfb20: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1CFB20u;
    {
        const bool branch_taken_0x1cfb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB20u;
        // 0x1cfb24: 0x263100a0  addiu       $s1, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb20) {
            ctx->pc = 0x1CFAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cfaf8;
        }
    }
    ctx->pc = 0x1CFB28u;
label_1cfb28:
    // 0x1cfb28: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1cfb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1cfb2c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cfb2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1cfb30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cfb30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfb34: 0x0  nop
    ctx->pc = 0x1cfb34u;
    // NOP
    // 0x1cfb38: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1cfb38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfb3c: 0x0  nop
    ctx->pc = 0x1cfb3cu;
    // NOP
    // 0x1cfb40: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1CFB40u;
    {
        const bool branch_taken_0x1cfb40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CFB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB40u;
        // 0x1cfb44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb40) {
            ctx->pc = 0x1CFB84u;
            goto label_1cfb84;
        }
    }
    ctx->pc = 0x1CFB48u;
label_1cfb48:
    // 0x1cfb48: 0xc0749e6  jal         func_1D2798
    ctx->pc = 0x1CFB48u;
    SET_GPR_U32(ctx, 31, 0x1CFB50u);
    ctx->pc = 0x1CFB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFB48u;
    // 0x1cfb4c: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2798u, 0x1CFB48u, 0x1CFB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFB50u;
label_1cfb50:
    // 0x1cfb50: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1cfb50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1cfb54: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1CFB54u;
    {
        const bool branch_taken_0x1cfb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfb54) {
            ctx->pc = 0x1CFB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFB54u;
            // 0x1cfb58: 0xae500038  sw          $s0, 0x38($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFB84u;
            goto label_1cfb84;
        }
    }
    ctx->pc = 0x1CFB5Cu;
    // 0x1cfb5c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1cfb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1cfb60: 0xc0749ee  jal         func_1D27B8
    ctx->pc = 0x1CFB60u;
    SET_GPR_U32(ctx, 31, 0x1CFB68u);
    ctx->pc = 0x1CFB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFB60u;
    // 0x1cfb64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D27B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D27B8u, 0x1CFB60u, 0x1CFB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFB68u;
label_1cfb68:
    // 0x1cfb68: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1cfb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cfb6c: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x1cfb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfb70: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cfb70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfb74: 0x0  nop
    ctx->pc = 0x1cfb74u;
    // NOP
    // 0x1cfb78: 0x4502fff3  bc1fl       . + 4 + (-0xD << 2)
    ctx->pc = 0x1CFB78u;
    {
        const bool branch_taken_0x1cfb78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfb78) {
            ctx->pc = 0x1CFB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFB78u;
            // 0x1cfb7c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cfb48;
        }
    }
    ctx->pc = 0x1CFB80u;
    // 0x1cfb80: 0xae500038  sw          $s0, 0x38($s2)
    ctx->pc = 0x1cfb80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 16));
label_1cfb84:
    // 0x1cfb84: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1cfb84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cfb88: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1cfb88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1cfb8c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1cfb8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cfb90: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x1cfb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1cfb94: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1cfb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cfb98: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB98u;
        // 0x1cfb9c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFBA0u;
}
