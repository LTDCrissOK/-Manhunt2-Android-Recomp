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

// Function: sub_00111DA8
// Address: 0x111da8 - 0x111f10
void sub_00111DA8_0x111da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111DA8_0x111da8");
#endif

    switch (ctx->pc) {
        case 0x111e20u: goto label_111e20;
        case 0x111e88u: goto label_111e88;
        case 0x111ea8u: goto label_111ea8;
        case 0x111ec8u: goto label_111ec8;
        case 0x111ef0u: goto label_111ef0;
        default: break;
    }

    ctx->pc = 0x111da8u;

    // 0x111da8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x111da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x111dac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x111dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x111db0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x111db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x111db4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x111db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111db8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x111db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x111dbc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x111dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x111dc0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x111dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x111dc4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x111dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x111dc8: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x111DC8u;
    {
        const bool branch_taken_0x111dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111DC8u;
        // 0x111dcc: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111dc8) {
            ctx->pc = 0x111EF4u;
            goto label_111ef4;
        }
    }
    ctx->pc = 0x111DD0u;
    // 0x111dd0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x111dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x111dd4: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x111dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x111dd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x111dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x111ddc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x111de0: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x111de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x111de4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x111DE4u;
    {
        const bool branch_taken_0x111de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111DE4u;
        // 0x111de8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111de4) {
            ctx->pc = 0x111E6Cu;
            goto label_111e6c;
        }
    }
    ctx->pc = 0x111DECu;
    // 0x111dec: 0x8c510334  lw          $s1, 0x334($v0)
    ctx->pc = 0x111decu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x111df0: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x111DF0u;
    {
        const bool branch_taken_0x111df0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x111DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111DF0u;
        // 0x111df4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111df0) {
            ctx->pc = 0x111E6Cu;
            goto label_111e6c;
        }
    }
    ctx->pc = 0x111DF8u;
    // 0x111df8: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x111df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x111dfc: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x111dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x111e00: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x111e00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x111e04: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x111E04u;
    {
        const bool branch_taken_0x111e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E04u;
        // 0x111e08: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e04) {
            ctx->pc = 0x111E40u;
            goto label_111e40;
        }
    }
    ctx->pc = 0x111E0Cu;
    // 0x111e0c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x111e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x111e10: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x111E10u;
    {
        const bool branch_taken_0x111e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x111e10) {
            ctx->pc = 0x111E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111E10u;
            // 0x111e14: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111E44u;
            goto label_111e44;
        }
    }
    ctx->pc = 0x111E18u;
    // 0x111e18: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x111E18u;
    SET_GPR_U32(ctx, 31, 0x111E20u);
    ctx->pc = 0x111E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E18u;
    // 0x111e1c: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x111E18u, 0x111E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E20u;
label_111e20:
    // 0x111e20: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x111E20u;
    {
        const bool branch_taken_0x111e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111e20) {
            ctx->pc = 0x111E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111E20u;
            // 0x111e24: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111E44u;
            goto label_111e44;
        }
    }
    ctx->pc = 0x111E28u;
    // 0x111e28: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x111e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x111e2c: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x111e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x111e30: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111E30u;
    {
        const bool branch_taken_0x111e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x111E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E30u;
        // 0x111e34: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e30) {
            ctx->pc = 0x111E40u;
            goto label_111e40;
        }
    }
    ctx->pc = 0x111E38u;
    // 0x111e38: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x111E38u;
    {
        const bool branch_taken_0x111e38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x111e38) {
            ctx->pc = 0x111E44u;
            goto label_111e44;
        }
    }
    ctx->pc = 0x111E40u;
label_111e40:
    // 0x111e40: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x111e40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_111e44:
    // 0x111e44: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x111E44u;
    {
        const bool branch_taken_0x111e44 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E44u;
        // 0x111e48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e44) {
            ctx->pc = 0x111E6Cu;
            goto label_111e6c;
        }
    }
    ctx->pc = 0x111E4Cu;
    // 0x111e4c: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x111e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x111e50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x111e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x111e54: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x111e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x111e58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x111e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111e5c: 0x2843001d  slti        $v1, $v0, 0x1D
    ctx->pc = 0x111e5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x111e60: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x111E60u;
    {
        const bool branch_taken_0x111e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x111e60) {
            ctx->pc = 0x111E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111E60u;
            // 0x111e64: 0x2853003d  slti        $s3, $v0, 0x3D (Delay Slot)
            SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x111E68u;
            goto label_111e68;
        }
    }
    ctx->pc = 0x111E68u;
label_111e68:
    // 0x111e68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x111e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_111e6c:
    // 0x111e6c: 0x8e02027c  lw          $v0, 0x27C($s0)
    ctx->pc = 0x111e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
    // 0x111e70: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x111E70u;
    {
        const bool branch_taken_0x111e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111e70) {
            ctx->pc = 0x111E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111E70u;
            // 0x111e74: 0x8e020280  lw          $v0, 0x280($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111EB0u;
            goto label_111eb0;
        }
    }
    ctx->pc = 0x111E78u;
    // 0x111e78: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x111E78u;
    {
        const bool branch_taken_0x111e78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x111e78) {
            ctx->pc = 0x111E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111E78u;
            // 0x111e7c: 0xae00027c  sw          $zero, 0x27C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111EA0u;
            goto label_111ea0;
        }
    }
    ctx->pc = 0x111E80u;
    // 0x111e80: 0xc0443e2  jal         func_110F88
    ctx->pc = 0x111E80u;
    SET_GPR_U32(ctx, 31, 0x111E88u);
    ctx->pc = 0x111E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E80u;
    // 0x111e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F88u, 0x111E80u, 0x111E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E88u;
label_111e88:
    // 0x111e88: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x111E88u;
    {
        const bool branch_taken_0x111e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111e88) {
            ctx->pc = 0x111E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111E88u;
            // 0x111e8c: 0xae00027c  sw          $zero, 0x27C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111EA0u;
            goto label_111ea0;
        }
    }
    ctx->pc = 0x111E90u;
    // 0x111e90: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x111e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x111e94: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x111E94u;
    {
        const bool branch_taken_0x111e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111e94) {
            ctx->pc = 0x111E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111E94u;
            // 0x111e98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111EF8u;
            goto label_111ef8;
        }
    }
    ctx->pc = 0x111E9Cu;
    // 0x111e9c: 0xae00027c  sw          $zero, 0x27C($s0)
    ctx->pc = 0x111e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 0));
label_111ea0:
    // 0x111ea0: 0xc044f24  jal         func_113C90
    ctx->pc = 0x111EA0u;
    SET_GPR_U32(ctx, 31, 0x111EA8u);
    ctx->pc = 0x111EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111EA0u;
    // 0x111ea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113C90u, 0x111EA0u, 0x111EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111EA8u;
label_111ea8:
    // 0x111ea8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x111EA8u;
    {
        const bool branch_taken_0x111ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111EA8u;
        // 0x111eac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ea8) {
            ctx->pc = 0x111EF8u;
            goto label_111ef8;
        }
    }
    ctx->pc = 0x111EB0u;
label_111eb0:
    // 0x111eb0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x111EB0u;
    {
        const bool branch_taken_0x111eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111eb0) {
            ctx->pc = 0x111EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111EB0u;
            // 0x111eb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111EF8u;
            goto label_111ef8;
        }
    }
    ctx->pc = 0x111EB8u;
    // 0x111eb8: 0x5080000f  beql        $a0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x111EB8u;
    {
        const bool branch_taken_0x111eb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x111eb8) {
            ctx->pc = 0x111EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111EB8u;
            // 0x111ebc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111EF8u;
            goto label_111ef8;
        }
    }
    ctx->pc = 0x111EC0u;
    // 0x111ec0: 0xc0443e2  jal         func_110F88
    ctx->pc = 0x111EC0u;
    SET_GPR_U32(ctx, 31, 0x111EC8u);
    ctx->pc = 0x111EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111EC0u;
    // 0x111ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F88u, 0x111EC0u, 0x111EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111EC8u;
label_111ec8:
    // 0x111ec8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x111EC8u;
    {
        const bool branch_taken_0x111ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111ec8) {
            ctx->pc = 0x111ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111EC8u;
            // 0x111ecc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111EF8u;
            goto label_111ef8;
        }
    }
    ctx->pc = 0x111ED0u;
    // 0x111ed0: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x111ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x111ed4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x111ED4u;
    {
        const bool branch_taken_0x111ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111ed4) {
            ctx->pc = 0x111ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111ED4u;
            // 0x111ed8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111EF8u;
            goto label_111ef8;
        }
    }
    ctx->pc = 0x111EDCu;
    // 0x111edc: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x111edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x111ee0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x111EE0u;
    {
        const bool branch_taken_0x111ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111ee0) {
            ctx->pc = 0x111EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111EE0u;
            // 0x111ee4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111EF8u;
            goto label_111ef8;
        }
    }
    ctx->pc = 0x111EE8u;
    // 0x111ee8: 0xc044ef0  jal         func_113BC0
    ctx->pc = 0x111EE8u;
    SET_GPR_U32(ctx, 31, 0x111EF0u);
    ctx->pc = 0x111EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111EE8u;
    // 0x111eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113BC0u, 0x111EE8u, 0x111EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111EF0u;
label_111ef0:
    // 0x111ef0: 0xae02027c  sw          $v0, 0x27C($s0)
    ctx->pc = 0x111ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 2));
label_111ef4:
    // 0x111ef4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x111ef4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_111ef8:
    // 0x111ef8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x111ef8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x111efc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x111efcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111f00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x111f00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x111f04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x111f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111f08: 0x3e00008  jr          $ra
    ctx->pc = 0x111F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F08u;
        // 0x111f0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111F10u;
}
