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

// Function: sub_002F2C00
// Address: 0x2f2c00 - 0x2f2e80
void sub_002F2C00_0x2f2c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2C00_0x2f2c00");
#endif

    switch (ctx->pc) {
        case 0x2f2ca4u: goto label_2f2ca4;
        case 0x2f2cecu: goto label_2f2cec;
        case 0x2f2d50u: goto label_2f2d50;
        case 0x2f2d60u: goto label_2f2d60;
        case 0x2f2d70u: goto label_2f2d70;
        case 0x2f2e60u: goto label_2f2e60;
        default: break;
    }

    ctx->pc = 0x2f2c00u;

    // 0x2f2c00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f2c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f2c04: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2f2c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2f2c08: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f2c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f2c0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f2c0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2c10: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2f2c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f2c14: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f2c14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2c18: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f2c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2f2c1c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2f2c1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2c20: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2f2c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2f2c24: 0x1240008a  beqz        $s2, . + 4 + (0x8A << 2)
    ctx->pc = 0x2F2C24u;
    {
        const bool branch_taken_0x2f2c24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C24u;
        // 0x2f2c28: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c24) {
            ctx->pc = 0x2F2E50u;
            goto label_2f2e50;
        }
    }
    ctx->pc = 0x2F2C2Cu;
    // 0x2f2c2c: 0x8e4300bc  lw          $v1, 0xBC($s2)
    ctx->pc = 0x2f2c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x2f2c30: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x2f2c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2f2c34: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2f2c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x2f2c38: 0x14400076  bnez        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x2F2C38u;
    {
        const bool branch_taken_0x2f2c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C38u;
        // 0x2f2c3c: 0x3c020006  lui         $v0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c38) {
            ctx->pc = 0x2F2E14u;
            goto label_2f2e14;
        }
    }
    ctx->pc = 0x2F2C40u;
    // 0x2f2c40: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x2f2c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x2f2c44: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2f2c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2f2c48: 0x38420027  xori        $v0, $v0, 0x27
    ctx->pc = 0x2f2c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)39);
    // 0x2f2c4c: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F2C4Cu;
    {
        const bool branch_taken_0x2f2c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2c4c) {
            ctx->pc = 0x2F2C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2C4Cu;
            // 0x2f2c50: 0x8e820038  lw          $v0, 0x38($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2CA8u;
            goto label_2f2ca8;
        }
    }
    ctx->pc = 0x2F2C54u;
    // 0x2f2c54: 0x9222070c  lbu         $v0, 0x70C($s1)
    ctx->pc = 0x2f2c54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1804)));
    // 0x2f2c58: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F2C58u;
    {
        const bool branch_taken_0x2f2c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2c58) {
            ctx->pc = 0x2F2C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2C58u;
            // 0x2f2c5c: 0x8e820038  lw          $v0, 0x38($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2CA8u;
            goto label_2f2ca8;
        }
    }
    ctx->pc = 0x2F2C60u;
    // 0x2f2c60: 0xc62100d0  lwc1        $f1, 0xD0($s1)
    ctx->pc = 0x2f2c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2c64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f2c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2c68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f2c68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2c6c: 0x8e420370  lw          $v0, 0x370($s2)
    ctx->pc = 0x2f2c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 880)));
    // 0x2f2c70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f2c70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f2c74: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2f2c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2f2c78: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2F2C78u;
    {
        const bool branch_taken_0x2f2c78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F2C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C78u;
        // 0x2f2c7c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c78) {
            ctx->pc = 0x2F2C84u;
            goto label_2f2c84;
        }
    }
    ctx->pc = 0x2F2C80u;
    // 0x2f2c80: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f2c80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2c84:
    // 0x2f2c84: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F2C84u;
    {
        const bool branch_taken_0x2f2c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2c84) {
            ctx->pc = 0x2F2C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2C84u;
            // 0x2f2c88: 0x8e820038  lw          $v0, 0x38($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2CA8u;
            goto label_2f2ca8;
        }
    }
    ctx->pc = 0x2F2C8Cu;
    // 0x2f2c8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2C8Cu;
    {
        const bool branch_taken_0x2f2c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C8Cu;
        // 0x2f2c90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c8c) {
            ctx->pc = 0x2F2CA4u;
            goto label_2f2ca4;
        }
    }
    ctx->pc = 0x2F2C94u;
    // 0x2f2c94: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x2f2c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2f2c98: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2f2c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f2c9c: 0xc08fd02  jal         func_23F408
    ctx->pc = 0x2F2C9Cu;
    SET_GPR_U32(ctx, 31, 0x2F2CA4u);
    ctx->pc = 0x2F2CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2C9Cu;
    // 0x2f2ca0: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F408u, 0x2F2C9Cu, 0x2F2CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2CA4u;
label_2f2ca4:
    // 0x2f2ca4: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x2f2ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_2f2ca8:
    // 0x2f2ca8: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x2f2ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x2f2cac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F2CACu;
    {
        const bool branch_taken_0x2f2cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CACu;
        // 0x2f2cb0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2cac) {
            ctx->pc = 0x2F2CB8u;
            goto label_2f2cb8;
        }
    }
    ctx->pc = 0x2F2CB4u;
    // 0x2f2cb4: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x2f2cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_2f2cb8:
    // 0x2f2cb8: 0x5471001e  bnel        $v1, $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F2CB8u;
    {
        const bool branch_taken_0x2f2cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x2f2cb8) {
            ctx->pc = 0x2F2CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2CB8u;
            // 0x2f2cbc: 0x8e22121c  lw          $v0, 0x121C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2D34u;
            goto label_2f2d34;
        }
    }
    ctx->pc = 0x2F2CC0u;
    // 0x2f2cc0: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x2f2cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x2f2cc4: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2f2cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2f2cc8: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2f2cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x2f2ccc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f2cccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f2cd0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F2CD0u;
    {
        const bool branch_taken_0x2f2cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CD0u;
        // 0x2f2cd4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2cd0) {
            ctx->pc = 0x2F2D0Cu;
            goto label_2f2d0c;
        }
    }
    ctx->pc = 0x2F2CD8u;
    // 0x2f2cd8: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2f2cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2f2cdc: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F2CDCu;
    {
        const bool branch_taken_0x2f2cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f2cdc) {
            ctx->pc = 0x2F2CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2CDCu;
            // 0x2f2ce0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2D10u;
            goto label_2f2d10;
        }
    }
    ctx->pc = 0x2F2CE4u;
    // 0x2f2ce4: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2F2CE4u;
    SET_GPR_U32(ctx, 31, 0x2F2CECu);
    ctx->pc = 0x2F2CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2CE4u;
    // 0x2f2ce8: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2F2CE4u, 0x2F2CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2CECu;
label_2f2cec:
    // 0x2f2cec: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F2CECu;
    {
        const bool branch_taken_0x2f2cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2cec) {
            ctx->pc = 0x2F2CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2CECu;
            // 0x2f2cf0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2D10u;
            goto label_2f2d10;
        }
    }
    ctx->pc = 0x2F2CF4u;
    // 0x2f2cf4: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2f2cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2f2cf8: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2f2cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2f2cfc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2CFCu;
    {
        const bool branch_taken_0x2f2cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CFCu;
        // 0x2f2d00: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2cfc) {
            ctx->pc = 0x2F2D0Cu;
            goto label_2f2d0c;
        }
    }
    ctx->pc = 0x2F2D04u;
    // 0x2f2d04: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F2D04u;
    {
        const bool branch_taken_0x2f2d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f2d04) {
            ctx->pc = 0x2F2D10u;
            goto label_2f2d10;
        }
    }
    ctx->pc = 0x2F2D0Cu;
label_2f2d0c:
    // 0x2f2d0c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2f2d0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2d10:
    // 0x2f2d10: 0x56600008  bnel        $s3, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F2D10u;
    {
        const bool branch_taken_0x2f2d10 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2d10) {
            ctx->pc = 0x2F2D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2D10u;
            // 0x2f2d14: 0x8e22121c  lw          $v0, 0x121C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2D34u;
            goto label_2f2d34;
        }
    }
    ctx->pc = 0x2F2D18u;
    // 0x2f2d18: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x2f2d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x2f2d1c: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2f2d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2f2d20: 0x2442ffd9  addiu       $v0, $v0, -0x27
    ctx->pc = 0x2f2d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967257));
    // 0x2f2d24: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x2f2d24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2f2d28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2D28u;
    {
        const bool branch_taken_0x2f2d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D28u;
        // 0x2f2d2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2d28) {
            ctx->pc = 0x2F2D40u;
            goto label_2f2d40;
        }
    }
    ctx->pc = 0x2F2D30u;
    // 0x2f2d30: 0x8e22121c  lw          $v0, 0x121C($s1)
    ctx->pc = 0x2f2d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
label_2f2d34:
    // 0x2f2d34: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2D34u;
    {
        const bool branch_taken_0x2f2d34 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F2D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D34u;
        // 0x2f2d38: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2d34) {
            ctx->pc = 0x2F2D48u;
            goto label_2f2d48;
        }
    }
    ctx->pc = 0x2F2D3Cu;
    // 0x2f2d3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2d40:
    // 0x2f2d40: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x2f2d40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
    // 0x2f2d44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f2d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2d48:
    // 0x2f2d48: 0xc0f7da4  jal         func_3DF690
    ctx->pc = 0x2F2D48u;
    SET_GPR_U32(ctx, 31, 0x2F2D50u);
    ctx->pc = 0x2F2D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2D48u;
    // 0x2f2d4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF690u, 0x2F2D48u, 0x2F2D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2D50u;
label_2f2d50:
    // 0x2f2d50: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F2D50u;
    {
        const bool branch_taken_0x2f2d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2d50) {
            ctx->pc = 0x2F2D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2D50u;
            // 0x2f2d54: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2D78u;
            goto label_2f2d78;
        }
    }
    ctx->pc = 0x2F2D58u;
    // 0x2f2d58: 0xc0f7da0  jal         func_3DF680
    ctx->pc = 0x2F2D58u;
    SET_GPR_U32(ctx, 31, 0x2F2D60u);
    ctx->pc = 0x2F2D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2D58u;
    // 0x2f2d5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF680u, 0x2F2D58u, 0x2F2D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2D60u;
label_2f2d60:
    // 0x2f2d60: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2D60u;
    {
        const bool branch_taken_0x2f2d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2d60) {
            ctx->pc = 0x2F2D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2D60u;
            // 0x2f2d64: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2D78u;
            goto label_2f2d78;
        }
    }
    ctx->pc = 0x2F2D68u;
    // 0x2f2d68: 0xc0f7da8  jal         func_3DF6A0
    ctx->pc = 0x2F2D68u;
    SET_GPR_U32(ctx, 31, 0x2F2D70u);
    ctx->pc = 0x2F2D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2D68u;
    // 0x2f2d6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF6A0u, 0x2F2D68u, 0x2F2D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2D70u;
label_2f2d70:
    // 0x2f2d70: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F2D70u;
    {
        const bool branch_taken_0x2f2d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2d70) {
            ctx->pc = 0x2F2D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2D70u;
            // 0x2f2d74: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2D78u;
            goto label_2f2d78;
        }
    }
    ctx->pc = 0x2F2D78u;
label_2f2d78:
    // 0x2f2d78: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2D78u;
    {
        const bool branch_taken_0x2f2d78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2d78) {
            ctx->pc = 0x2F2D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2D78u;
            // 0x2f2d7c: 0x8e240104  lw          $a0, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2D90u;
            goto label_2f2d90;
        }
    }
    ctx->pc = 0x2F2D80u;
    // 0x2f2d80: 0x8e221394  lw          $v0, 0x1394($s1)
    ctx->pc = 0x2f2d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5012)));
    // 0x2f2d84: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2F2D84u;
    {
        const bool branch_taken_0x2f2d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D84u;
        // 0x2f2d88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2d84) {
            ctx->pc = 0x2F2E54u;
            goto label_2f2e54;
        }
    }
    ctx->pc = 0x2F2D8Cu;
    // 0x2f2d8c: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x2f2d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2f2d90:
    // 0x2f2d90: 0x8e450104  lw          $a1, 0x104($s2)
    ctx->pc = 0x2f2d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x2f2d94: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f2d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f2d98: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f2d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f2d9c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2f2d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x2f2da0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f2da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2f2da4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f2da4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f2da8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f2da8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f2dac: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f2dacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f2db0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2f2db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f2db4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2f2db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2db8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2f2db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f2dbc: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2f2dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f2dc0: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x2f2dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f2dc4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2f2dc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2f2dc8: 0x3c013eb8  lui         $at, 0x3EB8
    ctx->pc = 0x2f2dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16056 << 16));
    // 0x2f2dcc: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x2f2dccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x2f2dd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f2dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f2dd4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2f2dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2f2dd8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2f2dd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2f2ddc: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x2f2ddcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2f2de0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2f2de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f2de4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2f2de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f2de8: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2f2de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2f2dec: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f2decu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2f2df0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f2df0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2f2df4: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2f2df4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2f2df8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f2df8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f2dfc: 0x0  nop
    ctx->pc = 0x2f2dfcu;
    // NOP
    // 0x2f2e00: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2F2E00u;
    {
        const bool branch_taken_0x2f2e00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F2E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E00u;
        // 0x2f2e04: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e00) {
            ctx->pc = 0x2F2E50u;
            goto label_2f2e50;
        }
    }
    ctx->pc = 0x2F2E08u;
    // 0x2f2e08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2e0c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2F2E0Cu;
    {
        const bool branch_taken_0x2f2e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E0Cu;
        // 0x2f2e10: 0xae231394  sw          $v1, 0x1394($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5012), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e0c) {
            ctx->pc = 0x2F2E60u;
            goto label_2f2e60;
        }
    }
    ctx->pc = 0x2F2E14u;
label_2f2e14:
    // 0x2f2e14: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2f2e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2f2e18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2f2e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f2e1c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2F2E1Cu;
    {
        const bool branch_taken_0x2f2e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E1Cu;
        // 0x2f2e20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e1c) {
            ctx->pc = 0x2F2E54u;
            goto label_2f2e54;
        }
    }
    ctx->pc = 0x2F2E24u;
    // 0x2f2e24: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x2f2e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x2f2e28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F2E28u;
    {
        const bool branch_taken_0x2f2e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E28u;
        // 0x2f2e2c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e28) {
            ctx->pc = 0x2F2E58u;
            goto label_2f2e58;
        }
    }
    ctx->pc = 0x2F2E30u;
    // 0x2f2e30: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x2f2e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2f2e34: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2f2e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f2e38: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2f2e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f2e3c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f2e3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f2e40: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2E40u;
    {
        const bool branch_taken_0x2f2e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E40u;
        // 0x2f2e44: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e40) {
            ctx->pc = 0x2F2E58u;
            goto label_2f2e58;
        }
    }
    ctx->pc = 0x2F2E48u;
    // 0x2f2e48: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2E48u;
    {
        const bool branch_taken_0x2f2e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f2e48) {
            ctx->pc = 0x2F2E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2E48u;
            // 0x2f2e4c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2E58u;
            goto label_2f2e58;
        }
    }
    ctx->pc = 0x2F2E50u;
label_2f2e50:
    // 0x2f2e50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f2e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f2e54:
    // 0x2f2e54: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f2e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f2e58:
    // 0x2f2e58: 0xc08baca  jal         func_22EB28
    ctx->pc = 0x2F2E58u;
    SET_GPR_U32(ctx, 31, 0x2F2E60u);
    ctx->pc = 0x2F2E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2E58u;
    // 0x2f2e5c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EB28u, 0x2F2E58u, 0x2F2E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2E60u;
label_2f2e60:
    // 0x2f2e60: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2f2e60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2e64: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2f2e64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f2e68: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f2e68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f2e6c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2f2e6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f2e70: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f2e70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f2e74: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2f2e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f2e78: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E78u;
        // 0x2f2e7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2E80u;
}
