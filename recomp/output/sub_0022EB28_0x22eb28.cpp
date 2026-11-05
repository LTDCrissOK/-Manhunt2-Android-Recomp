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

// Function: sub_0022EB28
// Address: 0x22eb28 - 0x22ed48
void sub_0022EB28_0x22eb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EB28_0x22eb28");
#endif

    switch (ctx->pc) {
        case 0x22eb7cu: goto label_22eb7c;
        case 0x22ec08u: goto label_22ec08;
        case 0x22ec6cu: goto label_22ec6c;
        case 0x22ecd8u: goto label_22ecd8;
        default: break;
    }

    ctx->pc = 0x22eb28u;

    // 0x22eb28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22eb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22eb2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22eb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22eb30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22eb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22eb34: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x22eb34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22eb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22eb3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22eb3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb40: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22eb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x22eb44: 0x12000078  beqz        $s0, . + 4 + (0x78 << 2)
    ctx->pc = 0x22EB44u;
    {
        const bool branch_taken_0x22eb44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB44u;
        // 0x22eb48: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb44) {
            ctx->pc = 0x22ED28u;
            goto label_22ed28;
        }
    }
    ctx->pc = 0x22EB4Cu;
    // 0x22eb4c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x22eb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x22eb50: 0x30421001  andi        $v0, $v0, 0x1001
    ctx->pc = 0x22eb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4097);
    // 0x22eb54: 0x38421001  xori        $v0, $v0, 0x1001
    ctx->pc = 0x22eb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4097);
    // 0x22eb58: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x22EB58u;
    {
        const bool branch_taken_0x22eb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB58u;
        // 0x22eb5c: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb58) {
            ctx->pc = 0x22ED20u;
            goto label_22ed20;
        }
    }
    ctx->pc = 0x22EB60u;
    // 0x22eb60: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x22eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x22eb64: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x22eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x22eb68: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x22eb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x22eb6c: 0x54640013  bnel        $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x22EB6Cu;
    {
        const bool branch_taken_0x22eb6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22eb6c) {
            ctx->pc = 0x22EB70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EB6Cu;
            // 0x22eb70: 0x8e0300bc  lw          $v1, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EBBCu;
            goto label_22ebbc;
        }
    }
    ctx->pc = 0x22EB74u;
    // 0x22eb74: 0xc06b600  jal         func_1AD800
    ctx->pc = 0x22EB74u;
    SET_GPR_U32(ctx, 31, 0x22EB7Cu);
    ctx->pc = 0x22EB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EB74u;
    // 0x22eb78: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x22EB74u, 0x22EB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EB7Cu;
label_22eb7c:
    // 0x22eb7c: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x22EB7Cu;
    {
        const bool branch_taken_0x22eb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB7Cu;
        // 0x22eb80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb7c) {
            ctx->pc = 0x22ED2Cu;
            goto label_22ed2c;
        }
    }
    ctx->pc = 0x22EB84u;
    // 0x22eb84: 0xc62100d0  lwc1        $f1, 0xD0($s1)
    ctx->pc = 0x22eb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22eb88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22eb88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22eb8c: 0x0  nop
    ctx->pc = 0x22eb8cu;
    // NOP
    // 0x22eb90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22eb90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22eb94: 0x0  nop
    ctx->pc = 0x22eb94u;
    // NOP
    // 0x22eb98: 0x45030065  bc1tl       . + 4 + (0x65 << 2)
    ctx->pc = 0x22EB98u;
    {
        const bool branch_taken_0x22eb98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22eb98) {
            ctx->pc = 0x22EB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EB98u;
            // 0x22eb9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22ED30u;
            goto label_22ed30;
        }
    }
    ctx->pc = 0x22EBA0u;
    // 0x22eba0: 0x92220114  lbu         $v0, 0x114($s1)
    ctx->pc = 0x22eba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x22eba4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22EBA4u;
    {
        const bool branch_taken_0x22eba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EBA4u;
        // 0x22eba8: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eba4) {
            ctx->pc = 0x22EBB8u;
            goto label_22ebb8;
        }
    }
    ctx->pc = 0x22EBACu;
    // 0x22ebac: 0x90435aed  lbu         $v1, 0x5AED($v0)
    ctx->pc = 0x22ebacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23277)));
    // 0x22ebb0: 0x1460005e  bnez        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x22EBB0u;
    {
        const bool branch_taken_0x22ebb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EBB0u;
        // 0x22ebb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ebb0) {
            ctx->pc = 0x22ED2Cu;
            goto label_22ed2c;
        }
    }
    ctx->pc = 0x22EBB8u;
label_22ebb8:
    // 0x22ebb8: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x22ebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_22ebbc:
    // 0x22ebbc: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x22ebbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x22ebc0: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x22ebc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x22ebc4: 0x54400046  bnel        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x22EBC4u;
    {
        const bool branch_taken_0x22ebc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ebc4) {
            ctx->pc = 0x22EBC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EBC4u;
            // 0x22ebc8: 0x8e220488  lw          $v0, 0x488($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22ECE0u;
            goto label_22ece0;
        }
    }
    ctx->pc = 0x22EBCCu;
    // 0x22ebcc: 0x8e020370  lw          $v0, 0x370($s0)
    ctx->pc = 0x22ebccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x22ebd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22ebd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22ebd4: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x22EBD4u;
    {
        const bool branch_taken_0x22ebd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EBD4u;
        // 0x22ebd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ebd4) {
            ctx->pc = 0x22ED2Cu;
            goto label_22ed2c;
        }
    }
    ctx->pc = 0x22EBDCu;
    // 0x22ebdc: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x22ebdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ebe0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ebe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ebe4: 0x0  nop
    ctx->pc = 0x22ebe4u;
    // NOP
    // 0x22ebe8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22ebe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ebec: 0x0  nop
    ctx->pc = 0x22ebecu;
    // NOP
    // 0x22ebf0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x22EBF0u;
    {
        const bool branch_taken_0x22ebf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EBF0u;
        // 0x22ebf4: 0x3862020f  xori        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ebf0) {
            ctx->pc = 0x22EC00u;
            goto label_22ec00;
        }
    }
    ctx->pc = 0x22EBF8u;
    // 0x22ebf8: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x22EBF8u;
    {
        const bool branch_taken_0x22ebf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EBF8u;
        // 0x22ebfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ebf8) {
            ctx->pc = 0x22ED2Cu;
            goto label_22ed2c;
        }
    }
    ctx->pc = 0x22EC00u;
label_22ec00:
    // 0x22ec00: 0xc06b600  jal         func_1AD800
    ctx->pc = 0x22EC00u;
    SET_GPR_U32(ctx, 31, 0x22EC08u);
    ctx->pc = 0x22EC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EC00u;
    // 0x22ec04: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x22EC00u, 0x22EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EC08u;
label_22ec08:
    // 0x22ec08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22EC08u;
    {
        const bool branch_taken_0x22ec08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC08u;
        // 0x22ec0c: 0x2404002f  addiu       $a0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec08) {
            ctx->pc = 0x22EC20u;
            goto label_22ec20;
        }
    }
    ctx->pc = 0x22EC10u;
    // 0x22ec10: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x22ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x22ec14: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x22ec14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x22ec18: 0x14640044  bne         $v1, $a0, . + 4 + (0x44 << 2)
    ctx->pc = 0x22EC18u;
    {
        const bool branch_taken_0x22ec18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x22EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC18u;
        // 0x22ec1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec18) {
            ctx->pc = 0x22ED2Cu;
            goto label_22ed2c;
        }
    }
    ctx->pc = 0x22EC20u;
label_22ec20:
    // 0x22ec20: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x22ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x22ec24: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x22ec24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x22ec28: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22EC28u;
    {
        const bool branch_taken_0x22ec28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC28u;
        // 0x22ec2c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec28) {
            ctx->pc = 0x22EC34u;
            goto label_22ec34;
        }
    }
    ctx->pc = 0x22EC30u;
    // 0x22ec30: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x22ec30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_22ec34:
    // 0x22ec34: 0x54700017  bnel        $v1, $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x22EC34u;
    {
        const bool branch_taken_0x22ec34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x22ec34) {
            ctx->pc = 0x22EC38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EC34u;
            // 0x22ec38: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EC94u;
            goto label_22ec94;
        }
    }
    ctx->pc = 0x22EC3Cu;
    // 0x22ec3c: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x22ec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x22ec40: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x22ec40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x22ec44: 0x2462ffcf  addiu       $v0, $v1, -0x31
    ctx->pc = 0x22ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
    // 0x22ec48: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x22ec48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x22ec4c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22EC4Cu;
    {
        const bool branch_taken_0x22ec4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC4Cu;
        // 0x22ec50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec4c) {
            ctx->pc = 0x22EC8Cu;
            goto label_22ec8c;
        }
    }
    ctx->pc = 0x22EC54u;
    // 0x22ec54: 0x2462ffdd  addiu       $v0, $v1, -0x23
    ctx->pc = 0x22ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967261));
    // 0x22ec58: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x22ec58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x22ec5c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22EC5Cu;
    {
        const bool branch_taken_0x22ec5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC5Cu;
        // 0x22ec60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec5c) {
            ctx->pc = 0x22EC8Cu;
            goto label_22ec8c;
        }
    }
    ctx->pc = 0x22EC64u;
    // 0x22ec64: 0xc0894f6  jal         func_2253D8
    ctx->pc = 0x22EC64u;
    SET_GPR_U32(ctx, 31, 0x22EC6Cu);
    ctx->pc = 0x22EC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EC64u;
    // 0x22ec68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2253D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2253D8u, 0x22EC64u, 0x22EC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EC6Cu;
label_22ec6c:
    // 0x22ec6c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22EC6Cu;
    {
        const bool branch_taken_0x22ec6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC6Cu;
        // 0x22ec70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec6c) {
            ctx->pc = 0x22EC8Cu;
            goto label_22ec8c;
        }
    }
    ctx->pc = 0x22EC74u;
    // 0x22ec74: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x22ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x22ec78: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x22ec78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x22ec7c: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x22ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x22ec80: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22EC80u;
    {
        const bool branch_taken_0x22ec80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22ec80) {
            ctx->pc = 0x22EC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EC80u;
            // 0x22ec84: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EC94u;
            goto label_22ec94;
        }
    }
    ctx->pc = 0x22EC88u;
    // 0x22ec88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22ec8c:
    // 0x22ec8c: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x22ec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x22ec90: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x22ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_22ec94:
    // 0x22ec94: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22ec94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x22ec98: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x22EC98u;
    {
        const bool branch_taken_0x22ec98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC98u;
        // 0x22ec9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec98) {
            ctx->pc = 0x22ED2Cu;
            goto label_22ed2c;
        }
    }
    ctx->pc = 0x22ECA0u;
    // 0x22eca0: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22eca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x22eca4: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x22eca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x22eca8: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x22eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x22ecac: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x22ECACu;
    {
        const bool branch_taken_0x22ecac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECACu;
        // 0x22ecb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ecac) {
            ctx->pc = 0x22ED2Cu;
            goto label_22ed2c;
        }
    }
    ctx->pc = 0x22ECB4u;
    // 0x22ecb4: 0x8c8200dc  lw          $v0, 0xDC($a0)
    ctx->pc = 0x22ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x22ecb8: 0x2442f848  addiu       $v0, $v0, -0x7B8
    ctx->pc = 0x22ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965320));
    // 0x22ecbc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22ecbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22ecc0: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x22ECC0u;
    {
        const bool branch_taken_0x22ecc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22ECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECC0u;
        // 0x22ecc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ecc0) {
            ctx->pc = 0x22ED2Cu;
            goto label_22ed2c;
        }
    }
    ctx->pc = 0x22ECC8u;
    // 0x22ecc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ecc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eccc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22ecccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ecd0: 0xc08bf70  jal         func_22FDC0
    ctx->pc = 0x22ECD0u;
    SET_GPR_U32(ctx, 31, 0x22ECD8u);
    ctx->pc = 0x22ECD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ECD0u;
    // 0x22ecd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FDC0u, 0x22ECD0u, 0x22ECD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ECD8u;
label_22ecd8:
    // 0x22ecd8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x22ECD8u;
    {
        const bool branch_taken_0x22ecd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECD8u;
        // 0x22ecdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ecd8) {
            ctx->pc = 0x22ED2Cu;
            goto label_22ed2c;
        }
    }
    ctx->pc = 0x22ECE0u;
label_22ece0:
    // 0x22ece0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x22ECE0u;
    {
        const bool branch_taken_0x22ece0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22ECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECE0u;
        // 0x22ece4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ece0) {
            ctx->pc = 0x22ED2Cu;
            goto label_22ed2c;
        }
    }
    ctx->pc = 0x22ECE8u;
    // 0x22ece8: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x22ece8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x22ecec: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x22ececu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x22ecf0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22ECF0u;
    {
        const bool branch_taken_0x22ecf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECF0u;
        // 0x22ecf4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ecf0) {
            ctx->pc = 0x22ECFCu;
            goto label_22ecfc;
        }
    }
    ctx->pc = 0x22ECF8u;
    // 0x22ecf8: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x22ecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_22ecfc:
    // 0x22ecfc: 0x1470000b  bne         $v1, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x22ECFCu;
    {
        const bool branch_taken_0x22ecfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x22ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECFCu;
        // 0x22ed00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ecfc) {
            ctx->pc = 0x22ED2Cu;
            goto label_22ed2c;
        }
    }
    ctx->pc = 0x22ED04u;
    // 0x22ed04: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x22ed04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ed08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ed08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ed0c: 0x0  nop
    ctx->pc = 0x22ed0cu;
    // NOP
    // 0x22ed10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22ed10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ed14: 0x0  nop
    ctx->pc = 0x22ed14u;
    // NOP
    // 0x22ed18: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x22ED18u;
    {
        const bool branch_taken_0x22ed18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED18u;
        // 0x22ed1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed18) {
            ctx->pc = 0x22ED30u;
            goto label_22ed30;
        }
    }
    ctx->pc = 0x22ED20u;
label_22ed20:
    // 0x22ed20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22ED20u;
    {
        const bool branch_taken_0x22ed20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED20u;
        // 0x22ed24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed20) {
            ctx->pc = 0x22ED2Cu;
            goto label_22ed2c;
        }
    }
    ctx->pc = 0x22ED28u;
label_22ed28:
    // 0x22ed28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22ed28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ed2c:
    // 0x22ed2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22ed2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22ed30:
    // 0x22ed30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22ed30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22ed34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22ed34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ed38: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22ed38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22ed3c: 0x3e00008  jr          $ra
    ctx->pc = 0x22ED3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED3Cu;
        // 0x22ed40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ED3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22ED44u;
    // 0x22ed44: 0x0  nop
    ctx->pc = 0x22ed44u;
    // NOP
    ctx->pc = 0x22ed48u;
}
