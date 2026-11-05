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

// Function: sub_002EFCA8
// Address: 0x2efca8 - 0x2f00c0
void sub_002EFCA8_0x2efca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFCA8_0x2efca8");
#endif

    switch (ctx->pc) {
        case 0x2efcd4u: goto label_2efcd4;
        case 0x2efd20u: goto label_2efd20;
        case 0x2efd30u: goto label_2efd30;
        case 0x2efd98u: goto label_2efd98;
        case 0x2efdd0u: goto label_2efdd0;
        case 0x2efdecu: goto label_2efdec;
        case 0x2efe40u: goto label_2efe40;
        case 0x2efe54u: goto label_2efe54;
        case 0x2efe60u: goto label_2efe60;
        case 0x2efe78u: goto label_2efe78;
        case 0x2efe84u: goto label_2efe84;
        case 0x2efea0u: goto label_2efea0;
        case 0x2eff44u: goto label_2eff44;
        case 0x2eff58u: goto label_2eff58;
        case 0x2eff64u: goto label_2eff64;
        case 0x2eff74u: goto label_2eff74;
        case 0x2effa4u: goto label_2effa4;
        case 0x2effb0u: goto label_2effb0;
        case 0x2effc0u: goto label_2effc0;
        case 0x2effecu: goto label_2effec;
        case 0x2efff4u: goto label_2efff4;
        case 0x2f0084u: goto label_2f0084;
        default: break;
    }

    ctx->pc = 0x2efca8u;

    // 0x2efca8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2efca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2efcac: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x2efcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x2efcb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2efcb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efcb4: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x2efcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x2efcb8: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x2efcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x2efcbc: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x2efcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
    // 0x2efcc0: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x2efcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x2efcc4: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x2efcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
    // 0x2efcc8: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x2efcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x2efccc: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x2EFCCCu;
    SET_GPR_U32(ctx, 31, 0x2EFCD4u);
    ctx->pc = 0x2EFCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFCCCu;
    // 0x2efcd0: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2EFCCCu, 0x2EFCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFCD4u;
label_2efcd4:
    // 0x2efcd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2efcd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efcd8: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x2efcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2efcdc: 0x8e220338  lw          $v0, 0x338($s1)
    ctx->pc = 0x2efcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x2efce0: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x2efce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2efce4: 0x10a300ec  beq         $a1, $v1, . + 4 + (0xEC << 2)
    ctx->pc = 0x2EFCE4u;
    {
        const bool branch_taken_0x2efce4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EFCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFCE4u;
        // 0x2efce8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efce4) {
            ctx->pc = 0x2F0098u;
            goto label_2f0098;
        }
    }
    ctx->pc = 0x2EFCECu;
    // 0x2efcec: 0x10a200eb  beq         $a1, $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x2EFCECu;
    {
        const bool branch_taken_0x2efcec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EFCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFCECu;
        // 0x2efcf0: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efcec) {
            ctx->pc = 0x2F009Cu;
            goto label_2f009c;
        }
    }
    ctx->pc = 0x2EFCF4u;
    // 0x2efcf4: 0x508000ea  beql        $a0, $zero, . + 4 + (0xEA << 2)
    ctx->pc = 0x2EFCF4u;
    {
        const bool branch_taken_0x2efcf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efcf4) {
            ctx->pc = 0x2EFCF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFCF4u;
            // 0x2efcf8: 0xdfb100e8  ld          $s1, 0xE8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F00A0u;
            goto label_2f00a0;
        }
    }
    ctx->pc = 0x2EFCFCu;
    // 0x2efcfc: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x2efcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x2efd00: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x2efd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x2efd04: 0x544000e6  bnel        $v0, $zero, . + 4 + (0xE6 << 2)
    ctx->pc = 0x2EFD04u;
    {
        const bool branch_taken_0x2efd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efd04) {
            ctx->pc = 0x2EFD08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFD04u;
            // 0x2efd08: 0xdfb100e8  ld          $s1, 0xE8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F00A0u;
            goto label_2f00a0;
        }
    }
    ctx->pc = 0x2EFD0Cu;
    // 0x2efd0c: 0x8c900274  lw          $s0, 0x274($a0)
    ctx->pc = 0x2efd0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x2efd10: 0x120000e1  beqz        $s0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x2EFD10u;
    {
        const bool branch_taken_0x2efd10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFD10u;
        // 0x2efd14: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efd10) {
            ctx->pc = 0x2F0098u;
            goto label_2f0098;
        }
    }
    ctx->pc = 0x2EFD18u;
    // 0x2efd18: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2EFD18u;
    SET_GPR_U32(ctx, 31, 0x2EFD20u);
    ctx->pc = 0x2EFD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFD18u;
    // 0x2efd1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2EFD18u, 0x2EFD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFD20u;
label_2efd20:
    // 0x2efd20: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EFD20u;
    {
        const bool branch_taken_0x2efd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efd20) {
            ctx->pc = 0x2EFD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFD20u;
            // 0x2efd24: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFD3Cu;
            goto label_2efd3c;
        }
    }
    ctx->pc = 0x2EFD28u;
    // 0x2efd28: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2EFD28u;
    SET_GPR_U32(ctx, 31, 0x2EFD30u);
    ctx->pc = 0x2EFD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFD28u;
    // 0x2efd2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2EFD28u, 0x2EFD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFD30u;
label_2efd30:
    // 0x2efd30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2efd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2efd34: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EFD34u;
    {
        const bool branch_taken_0x2efd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2efd34) {
            ctx->pc = 0x2EFD38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFD34u;
            // 0x2efd38: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFD3Cu;
            goto label_2efd3c;
        }
    }
    ctx->pc = 0x2EFD3Cu;
label_2efd3c:
    // 0x2efd3c: 0x524000d7  beql        $s2, $zero, . + 4 + (0xD7 << 2)
    ctx->pc = 0x2EFD3Cu;
    {
        const bool branch_taken_0x2efd3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efd3c) {
            ctx->pc = 0x2EFD40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFD3Cu;
            // 0x2efd40: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F009Cu;
            goto label_2f009c;
        }
    }
    ctx->pc = 0x2EFD44u;
    // 0x2efd44: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2efd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
    // 0x2efd48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2efd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2efd4c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EFD4Cu;
    {
        const bool branch_taken_0x2efd4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efd4c) {
            ctx->pc = 0x2EFD50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFD4Cu;
            // 0x2efd50: 0x8e300334  lw          $s0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFD70u;
            goto label_2efd70;
        }
    }
    ctx->pc = 0x2EFD54u;
    // 0x2efd54: 0x8e22121c  lw          $v0, 0x121C($s1)
    ctx->pc = 0x2efd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
    // 0x2efd58: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EFD58u;
    {
        const bool branch_taken_0x2efd58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efd58) {
            ctx->pc = 0x2EFD5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFD58u;
            // 0x2efd5c: 0x8e300334  lw          $s0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFD70u;
            goto label_2efd70;
        }
    }
    ctx->pc = 0x2EFD60u;
    // 0x2efd60: 0x8c421004  lw          $v0, 0x1004($v0)
    ctx->pc = 0x2efd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x2efd64: 0x50510045  beql        $v0, $s1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2EFD64u;
    {
        const bool branch_taken_0x2efd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2efd64) {
            ctx->pc = 0x2EFD68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFD64u;
            // 0x2efd68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFE7Cu;
            goto label_2efe7c;
        }
    }
    ctx->pc = 0x2EFD6Cu;
    // 0x2efd6c: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x2efd6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2efd70:
    // 0x2efd70: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2efd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2efd74: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2efd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x2efd78: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2efd78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2efd7c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2EFD7Cu;
    {
        const bool branch_taken_0x2efd7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EFD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFD7Cu;
        // 0x2efd80: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efd7c) {
            ctx->pc = 0x2EFDB8u;
            goto label_2efdb8;
        }
    }
    ctx->pc = 0x2EFD84u;
    // 0x2efd84: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2efd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2efd88: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EFD88u;
    {
        const bool branch_taken_0x2efd88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2efd88) {
            ctx->pc = 0x2EFD8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFD88u;
            // 0x2efd8c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFDBCu;
            goto label_2efdbc;
        }
    }
    ctx->pc = 0x2EFD90u;
    // 0x2efd90: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2EFD90u;
    SET_GPR_U32(ctx, 31, 0x2EFD98u);
    ctx->pc = 0x2EFD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFD90u;
    // 0x2efd94: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2EFD90u, 0x2EFD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFD98u;
label_2efd98:
    // 0x2efd98: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EFD98u;
    {
        const bool branch_taken_0x2efd98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efd98) {
            ctx->pc = 0x2EFD9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFD98u;
            // 0x2efd9c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFDBCu;
            goto label_2efdbc;
        }
    }
    ctx->pc = 0x2EFDA0u;
    // 0x2efda0: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2efda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2efda4: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2efda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2efda8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EFDA8u;
    {
        const bool branch_taken_0x2efda8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EFDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFDA8u;
        // 0x2efdac: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efda8) {
            ctx->pc = 0x2EFDB8u;
            goto label_2efdb8;
        }
    }
    ctx->pc = 0x2EFDB0u;
    // 0x2efdb0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EFDB0u;
    {
        const bool branch_taken_0x2efdb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2efdb0) {
            ctx->pc = 0x2EFDBCu;
            goto label_2efdbc;
        }
    }
    ctx->pc = 0x2EFDB8u;
label_2efdb8:
    // 0x2efdb8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2efdb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2efdbc:
    // 0x2efdbc: 0x52400006  beql        $s2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EFDBCu;
    {
        const bool branch_taken_0x2efdbc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efdbc) {
            ctx->pc = 0x2EFDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFDBCu;
            // 0x2efdc0: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFDD8u;
            goto label_2efdd8;
        }
    }
    ctx->pc = 0x2EFDC4u;
    // 0x2efdc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2efdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efdc8: 0xc08a15a  jal         func_228568
    ctx->pc = 0x2EFDC8u;
    SET_GPR_U32(ctx, 31, 0x2EFDD0u);
    ctx->pc = 0x2EFDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFDC8u;
    // 0x2efdcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x2EFDC8u, 0x2EFDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFDD0u;
label_2efdd0:
    // 0x2efdd0: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x2EFDD0u;
    {
        const bool branch_taken_0x2efdd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFDD0u;
        // 0x2efdd4: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efdd0) {
            ctx->pc = 0x2F009Cu;
            goto label_2f009c;
        }
    }
    ctx->pc = 0x2EFDD8u;
label_2efdd8:
    // 0x2efdd8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2efdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2efddc: 0xc454b7b0  lwc1        $f20, -0x4850($v0)
    ctx->pc = 0x2efddcu;
    { uint32_t bits = FAST_READ32(0x3FB7B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2efde0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2efde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2efde4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2EFDE4u;
    SET_GPR_U32(ctx, 31, 0x2EFDECu);
    ctx->pc = 0x2EFDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFDE4u;
    // 0x2efde8: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2EFDE4u, 0x2EFDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFDECu;
label_2efdec:
    // 0x2efdec: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2efdecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2efdf0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2efdf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2efdf4: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2efdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2efdf8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2efdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2efdfc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2efdfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2efe00: 0x7a020070  lq          $v0, 0x70($s0)
    ctx->pc = 0x2efe00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2efe04: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2efe04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2efe08: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2efe08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2efe0c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2efe0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2efe10: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2efe10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2efe14: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2efe14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2efe18: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2efe18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2efe1c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2efe1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2efe20: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2efe20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2efe24: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x2efe24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2efe28: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2efe28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2efe2c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2efe2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2efe30: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x2efe30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2efe34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2efe34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efe38: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x2EFE38u;
    SET_GPR_U32(ctx, 31, 0x2EFE40u);
    ctx->pc = 0x2EFE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFE38u;
    // 0x2efe3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2EFE38u, 0x2EFE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFE40u;
label_2efe40:
    // 0x2efe40: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2efe40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2efe44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2efe44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efe48: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2efe48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2efe4c: 0xc07a592  jal         func_1E9648
    ctx->pc = 0x2EFE4Cu;
    SET_GPR_U32(ctx, 31, 0x2EFE54u);
    ctx->pc = 0x2EFE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFE4Cu;
    // 0x2efe50: 0x34a5ffef  ori         $a1, $a1, 0xFFEF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65519);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9648u, 0x2EFE4Cu, 0x2EFE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFE54u;
label_2efe54:
    // 0x2efe54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2efe54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efe58: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x2EFE58u;
    SET_GPR_U32(ctx, 31, 0x2EFE60u);
    ctx->pc = 0x2EFE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFE58u;
    // 0x2efe5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x2EFE58u, 0x2EFE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFE60u;
label_2efe60:
    // 0x2efe60: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2efe60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2efe64: 0x8c532b1c  lw          $s3, 0x2B1C($v0)
    ctx->pc = 0x2efe64u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x482B1Cu));
    // 0x2efe68: 0x16600008  bnez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EFE68u;
    {
        const bool branch_taken_0x2efe68 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EFE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFE68u;
        // 0x2efe6c: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efe68) {
            ctx->pc = 0x2EFE8Cu;
            goto label_2efe8c;
        }
    }
    ctx->pc = 0x2EFE70u;
    // 0x2efe70: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2EFE70u;
    {
        const bool branch_taken_0x2efe70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFE70u;
        // 0x2efe74: 0xdfb100e8  ld          $s1, 0xE8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efe70) {
            ctx->pc = 0x2F00A0u;
            goto label_2f00a0;
        }
    }
    ctx->pc = 0x2EFE78u;
label_2efe78:
    // 0x2efe78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2efe78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2efe7c:
    // 0x2efe7c: 0xc08a15a  jal         func_228568
    ctx->pc = 0x2EFE7Cu;
    SET_GPR_U32(ctx, 31, 0x2EFE84u);
    ctx->pc = 0x2EFE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFE7Cu;
    // 0x2efe80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x2EFE7Cu, 0x2EFE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFE84u;
label_2efe84:
    // 0x2efe84: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x2EFE84u;
    {
        const bool branch_taken_0x2efe84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFE84u;
        // 0x2efe88: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efe84) {
            ctx->pc = 0x2F009Cu;
            goto label_2f009c;
        }
    }
    ctx->pc = 0x2EFE8Cu;
label_2efe8c:
    // 0x2efe8c: 0x1a600082  blez        $s3, . + 4 + (0x82 << 2)
    ctx->pc = 0x2EFE8Cu;
    {
        const bool branch_taken_0x2efe8c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2EFE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFE8Cu;
        // 0x2efe90: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efe8c) {
            ctx->pc = 0x2F0098u;
            goto label_2f0098;
        }
    }
    ctx->pc = 0x2EFE94u;
    // 0x2efe94: 0x27b500a0  addiu       $s5, $sp, 0xA0
    ctx->pc = 0x2efe94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2efe98: 0x27b40090  addiu       $s4, $sp, 0x90
    ctx->pc = 0x2efe98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2efe9c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2efe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_2efea0:
    // 0x2efea0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2efea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2efea4: 0x8c442b20  lw          $a0, 0x2B20($v0)
    ctx->pc = 0x2efea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11040)));
    // 0x2efea8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2efea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2efeac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2efeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2efeb0: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2efeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2efeb4: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x2efeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x2efeb8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EFEB8u;
    {
        const bool branch_taken_0x2efeb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EFEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFEB8u;
        // 0x2efebc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efeb8) {
            ctx->pc = 0x2EFEC4u;
            goto label_2efec4;
        }
    }
    ctx->pc = 0x2EFEC0u;
    // 0x2efec0: 0x8c700034  lw          $s0, 0x34($v1)
    ctx->pc = 0x2efec0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2efec4:
    // 0x2efec4: 0x52000071  beql        $s0, $zero, . + 4 + (0x71 << 2)
    ctx->pc = 0x2EFEC4u;
    {
        const bool branch_taken_0x2efec4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efec4) {
            ctx->pc = 0x2EFEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFEC4u;
            // 0x2efec8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F008Cu;
            goto label_2f008c;
        }
    }
    ctx->pc = 0x2EFECCu;
    // 0x2efecc: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x2efeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2efed0: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2efed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2efed4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFED4u;
    {
        const bool branch_taken_0x2efed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EFED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFED4u;
        // 0x2efed8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efed4) {
            ctx->pc = 0x2EFEE8u;
            goto label_2efee8;
        }
    }
    ctx->pc = 0x2EFEDCu;
    // 0x2efedc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2efedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2efee0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EFEE0u;
    {
        const bool branch_taken_0x2efee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efee0) {
            ctx->pc = 0x2EFEECu;
            goto label_2efeec;
        }
    }
    ctx->pc = 0x2EFEE8u;
label_2efee8:
    // 0x2efee8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2efee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2efeec:
    // 0x2efeec: 0x50800067  beql        $a0, $zero, . + 4 + (0x67 << 2)
    ctx->pc = 0x2EFEECu;
    {
        const bool branch_taken_0x2efeec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efeec) {
            ctx->pc = 0x2EFEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFEECu;
            // 0x2efef0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F008Cu;
            goto label_2f008c;
        }
    }
    ctx->pc = 0x2EFEF4u;
    // 0x2efef4: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2efef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x2efef8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2efef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2efefc: 0x54400063  bnel        $v0, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x2EFEFCu;
    {
        const bool branch_taken_0x2efefc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efefc) {
            ctx->pc = 0x2EFF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFEFCu;
            // 0x2eff00: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F008Cu;
            goto label_2f008c;
        }
    }
    ctx->pc = 0x2EFF04u;
    // 0x2eff04: 0x8e020370  lw          $v0, 0x370($s0)
    ctx->pc = 0x2eff04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x2eff08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2eff08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2eff0c: 0x5440005f  bnel        $v0, $zero, . + 4 + (0x5F << 2)
    ctx->pc = 0x2EFF0Cu;
    {
        const bool branch_taken_0x2eff0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eff0c) {
            ctx->pc = 0x2EFF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFF0Cu;
            // 0x2eff10: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F008Cu;
            goto label_2f008c;
        }
    }
    ctx->pc = 0x2EFF14u;
    // 0x2eff14: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x2eff14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eff18: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2eff18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2eff1c: 0x0  nop
    ctx->pc = 0x2eff1cu;
    // NOP
    // 0x2eff20: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2eff20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eff24: 0x0  nop
    ctx->pc = 0x2eff24u;
    // NOP
    // 0x2eff28: 0x45020058  bc1fl       . + 4 + (0x58 << 2)
    ctx->pc = 0x2EFF28u;
    {
        const bool branch_taken_0x2eff28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eff28) {
            ctx->pc = 0x2EFF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFF28u;
            // 0x2eff2c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F008Cu;
            goto label_2f008c;
        }
    }
    ctx->pc = 0x2EFF30u;
    // 0x2eff30: 0x8e021004  lw          $v0, 0x1004($s0)
    ctx->pc = 0x2eff30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
    // 0x2eff34: 0x54510055  bnel        $v0, $s1, . + 4 + (0x55 << 2)
    ctx->pc = 0x2EFF34u;
    {
        const bool branch_taken_0x2eff34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2eff34) {
            ctx->pc = 0x2EFF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFF34u;
            // 0x2eff38: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F008Cu;
            goto label_2f008c;
        }
    }
    ctx->pc = 0x2EFF3Cu;
    // 0x2eff3c: 0xc06b600  jal         func_1AD800
    ctx->pc = 0x2EFF3Cu;
    SET_GPR_U32(ctx, 31, 0x2EFF44u);
    ctx->pc = 0x2EFF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFF3Cu;
    // 0x2eff40: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x2EFF3Cu, 0x2EFF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFF44u;
label_2eff44:
    // 0x2eff44: 0x54400051  bnel        $v0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x2EFF44u;
    {
        const bool branch_taken_0x2eff44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eff44) {
            ctx->pc = 0x2EFF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFF44u;
            // 0x2eff48: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F008Cu;
            goto label_2f008c;
        }
    }
    ctx->pc = 0x2EFF4Cu;
    // 0x2eff4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eff4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eff50: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x2EFF50u;
    SET_GPR_U32(ctx, 31, 0x2EFF58u);
    ctx->pc = 0x2EFF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFF50u;
    // 0x2eff54: 0x24050448  addiu       $a1, $zero, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x2EFF50u, 0x2EFF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFF58u;
label_2eff58:
    // 0x2eff58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eff58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eff5c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x2EFF5Cu;
    SET_GPR_U32(ctx, 31, 0x2EFF64u);
    ctx->pc = 0x2EFF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFF5Cu;
    // 0x2eff60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2EFF5Cu, 0x2EFF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFF64u;
label_2eff64:
    // 0x2eff64: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFF64u;
    {
        const bool branch_taken_0x2eff64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eff64) {
            ctx->pc = 0x2EFF68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFF64u;
            // 0x2eff68: 0xc60100b0  lwc1        $f1, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFF78u;
            goto label_2eff78;
        }
    }
    ctx->pc = 0x2EFF6Cu;
    // 0x2eff6c: 0xc0c4900  jal         func_312400
    ctx->pc = 0x2EFF6Cu;
    SET_GPR_U32(ctx, 31, 0x2EFF74u);
    ctx->pc = 0x2EFF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFF6Cu;
    // 0x2eff70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2EFF6Cu, 0x2EFF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFF74u;
label_2eff74:
    // 0x2eff74: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x2eff74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2eff78:
    // 0x2eff78: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x2eff78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2eff7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eff7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eff80: 0x24050448  addiu       $a1, $zero, 0x448
    ctx->pc = 0x2eff80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1096));
    // 0x2eff84: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2eff84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2eff88: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2eff88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eff8c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2eff8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2eff90: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2eff90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eff94: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x2eff94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2eff98: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2eff98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eff9c: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x2EFF9Cu;
    SET_GPR_U32(ctx, 31, 0x2EFFA4u);
    ctx->pc = 0x2EFFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFF9Cu;
    // 0x2effa0: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x2EFF9Cu, 0x2EFFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFFA4u;
label_2effa4:
    // 0x2effa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2effa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2effa8: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x2EFFA8u;
    SET_GPR_U32(ctx, 31, 0x2EFFB0u);
    ctx->pc = 0x2EFFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFFA8u;
    // 0x2effac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2EFFA8u, 0x2EFFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFFB0u;
label_2effb0:
    // 0x2effb0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFFB0u;
    {
        const bool branch_taken_0x2effb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2effb0) {
            ctx->pc = 0x2EFFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFFB0u;
            // 0x2effb4: 0xc60100b0  lwc1        $f1, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFFC4u;
            goto label_2effc4;
        }
    }
    ctx->pc = 0x2EFFB8u;
    // 0x2effb8: 0xc0c4900  jal         func_312400
    ctx->pc = 0x2EFFB8u;
    SET_GPR_U32(ctx, 31, 0x2EFFC0u);
    ctx->pc = 0x2EFFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFFB8u;
    // 0x2effbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2EFFB8u, 0x2EFFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFFC0u;
label_2effc0:
    // 0x2effc0: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x2effc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2effc4:
    // 0x2effc4: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x2effc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2effc8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2effc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2effcc: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x2effccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2effd0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2effd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2effd4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2effd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2effd8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2effd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2effdc: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x2effdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2effe0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2effe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2effe4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2EFFE4u;
    SET_GPR_U32(ctx, 31, 0x2EFFECu);
    ctx->pc = 0x2EFFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFFE4u;
    // 0x2effe8: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2EFFE4u, 0x2EFFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFFECu;
label_2effec:
    // 0x2effec: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2EFFECu;
    SET_GPR_U32(ctx, 31, 0x2EFFF4u);
    ctx->pc = 0x2EFFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFFECu;
    // 0x2efff0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2EFFECu, 0x2EFFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFFF4u;
label_2efff4:
    // 0x2efff4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x2efff4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2efff8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2efff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2efffc: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x2efffcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f0000: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x2f0000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x2f0004: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x2f0004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x2f0008: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x2f0008u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f000c: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x2f000cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2f0010: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f0010u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f0014: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x2f0014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f0018: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2f0018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f001c: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2f001cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f0020: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x2f0020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2f0024: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f0024u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2f0028: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f0028u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2f002c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2f002cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2f0030: 0x0  nop
    ctx->pc = 0x2f0030u;
    // NOP
    // 0x2f0034: 0x0  nop
    ctx->pc = 0x2f0034u;
    // NOP
    // 0x2f0038: 0x46000044  c1          0x44
    ctx->pc = 0x2f0038u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2f003c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2f003cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2f0040: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2f0040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f0044: 0x0  nop
    ctx->pc = 0x2f0044u;
    // NOP
    // 0x2f0048: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2F0048u;
    {
        const bool branch_taken_0x2f0048 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0048u;
        // 0x2f004c: 0xe7a100d0  swc1        $f1, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0048) {
            ctx->pc = 0x2F0074u;
            goto label_2f0074;
        }
    }
    ctx->pc = 0x2F0050u;
    // 0x2f0050: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f0050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f0054: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f0054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0058: 0x0  nop
    ctx->pc = 0x2f0058u;
    // NOP
    // 0x2f005c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2f005cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2f0060: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2f0060u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2f0064: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2f0064u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f0068: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f0068u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f006c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f006cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f0070: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x2f0070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f0074:
    // 0x2f0074: 0x3c05fffb  lui         $a1, 0xFFFB
    ctx->pc = 0x2f0074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65531 << 16));
    // 0x2f0078: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2f0078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f007c: 0xc07788a  jal         func_1DE228
    ctx->pc = 0x2F007Cu;
    SET_GPR_U32(ctx, 31, 0x2F0084u);
    ctx->pc = 0x2F0080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F007Cu;
    // 0x2f0080: 0x34a5fffe  ori         $a1, $a1, 0xFFFE (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE228u, 0x2F007Cu, 0x2F0084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0084u;
label_2f0084:
    // 0x2f0084: 0x1040ff7c  beqz        $v0, . + 4 + (-0x84 << 2)
    ctx->pc = 0x2F0084u;
    {
        const bool branch_taken_0x2f0084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0084u;
        // 0x2f0088: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0084) {
            ctx->pc = 0x2EFE78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2efe78;
        }
    }
    ctx->pc = 0x2F008Cu;
label_2f008c:
    // 0x2f008c: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x2f008cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2f0090: 0x1440ff83  bnez        $v0, . + 4 + (-0x7D << 2)
    ctx->pc = 0x2F0090u;
    {
        const bool branch_taken_0x2f0090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0090u;
        // 0x2f0094: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0090) {
            ctx->pc = 0x2EFEA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2efea0;
        }
    }
    ctx->pc = 0x2F0098u;
label_2f0098:
    // 0x2f0098: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x2f0098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_2f009c:
    // 0x2f009c: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x2f009cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
label_2f00a0:
    // 0x2f00a0: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x2f00a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2f00a4: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x2f00a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f00a8: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x2f00a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2f00ac: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x2f00acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2f00b0: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x2f00b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2f00b4: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x2f00b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f00b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F00B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F00BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F00B8u;
        // 0x2f00bc: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F00B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F00C0u;
}
