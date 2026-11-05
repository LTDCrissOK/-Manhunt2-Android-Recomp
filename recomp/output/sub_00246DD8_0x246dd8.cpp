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

// Function: sub_00246DD8
// Address: 0x246dd8 - 0x247000
void sub_00246DD8_0x246dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246DD8_0x246dd8");
#endif

    switch (ctx->pc) {
        case 0x246e0cu: goto label_246e0c;
        case 0x246e38u: goto label_246e38;
        case 0x246eb8u: goto label_246eb8;
        case 0x246f34u: goto label_246f34;
        case 0x246fb0u: goto label_246fb0;
        default: break;
    }

    ctx->pc = 0x246dd8u;

    // 0x246dd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x246dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x246ddc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x246ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x246de0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x246de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246de4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x246de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x246de8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x246de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x246dec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x246decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246df0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x246df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x246df4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x246df4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246df8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x246df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x246dfc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x246dfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246e00: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x246e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x246e04: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x246E04u;
    SET_GPR_U32(ctx, 31, 0x246E0Cu);
    ctx->pc = 0x246E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246E04u;
    // 0x246e08: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x246E04u, 0x246E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E0Cu;
label_246e0c:
    // 0x246e0c: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x246e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x246e10: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x246e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x246e14: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x246e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x246e18: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x246e18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x246e1c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x246E1Cu;
    {
        const bool branch_taken_0x246e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246e1c) {
            ctx->pc = 0x246E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246E1Cu;
            // 0x246e20: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246E5Cu;
            goto label_246e5c;
        }
    }
    ctx->pc = 0x246E24u;
    // 0x246e24: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x246e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x246e28: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x246E28u;
    {
        const bool branch_taken_0x246e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x246e28) {
            ctx->pc = 0x246E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246E28u;
            // 0x246e2c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246E5Cu;
            goto label_246e5c;
        }
    }
    ctx->pc = 0x246E30u;
    // 0x246e30: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x246E30u;
    SET_GPR_U32(ctx, 31, 0x246E38u);
    ctx->pc = 0x246E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246E30u;
    // 0x246e34: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x246E30u, 0x246E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E38u;
label_246e38:
    // 0x246e38: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x246E38u;
    {
        const bool branch_taken_0x246e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246e38) {
            ctx->pc = 0x246E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246E38u;
            // 0x246e3c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246E5Cu;
            goto label_246e5c;
        }
    }
    ctx->pc = 0x246E40u;
    // 0x246e40: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x246e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x246e44: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x246e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x246e48: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x246E48u;
    {
        const bool branch_taken_0x246e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x246E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E48u;
        // 0x246e4c: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e48) {
            ctx->pc = 0x246E58u;
            goto label_246e58;
        }
    }
    ctx->pc = 0x246E50u;
    // 0x246e50: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x246E50u;
    {
        const bool branch_taken_0x246e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x246e50) {
            ctx->pc = 0x246E5Cu;
            goto label_246e5c;
        }
    }
    ctx->pc = 0x246E58u;
label_246e58:
    // 0x246e58: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x246e58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246e5c:
    // 0x246e5c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x246E5Cu;
    {
        const bool branch_taken_0x246e5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x246e5c) {
            ctx->pc = 0x246E80u;
            goto label_246e80;
        }
    }
    ctx->pc = 0x246E64u;
    // 0x246e64: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x246e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x246e68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x246e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x246e6c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x246e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x246e70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x246e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246e74: 0x2843001d  slti        $v1, $v0, 0x1D
    ctx->pc = 0x246e74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x246e78: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x246E78u;
    {
        const bool branch_taken_0x246e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246e78) {
            ctx->pc = 0x246E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246E78u;
            // 0x246e7c: 0x2853003d  slti        $s3, $v0, 0x3D (Delay Slot)
            SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x246E80u;
            goto label_246e80;
        }
    }
    ctx->pc = 0x246E80u;
label_246e80:
    // 0x246e80: 0x56600060  bnel        $s3, $zero, . + 4 + (0x60 << 2)
    ctx->pc = 0x246E80u;
    {
        const bool branch_taken_0x246e80 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x246e80) {
            ctx->pc = 0x246E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246E80u;
            // 0x246e84: 0x8e220710  lw          $v0, 0x710($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247004u;
            return;
        }
    }
    ctx->pc = 0x246E88u;
    // 0x246e88: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x246e88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x246e8c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x246e8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246e90: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x246e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x246e94: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x246e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x246e98: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x246e98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x246e9c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x246E9Cu;
    {
        const bool branch_taken_0x246e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E9Cu;
        // 0x246ea0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e9c) {
            ctx->pc = 0x246ED8u;
            goto label_246ed8;
        }
    }
    ctx->pc = 0x246EA4u;
    // 0x246ea4: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x246ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x246ea8: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x246EA8u;
    {
        const bool branch_taken_0x246ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x246ea8) {
            ctx->pc = 0x246EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246EA8u;
            // 0x246eac: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246EDCu;
            goto label_246edc;
        }
    }
    ctx->pc = 0x246EB0u;
    // 0x246eb0: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x246EB0u;
    SET_GPR_U32(ctx, 31, 0x246EB8u);
    ctx->pc = 0x246EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246EB0u;
    // 0x246eb4: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x246EB0u, 0x246EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246EB8u;
label_246eb8:
    // 0x246eb8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x246EB8u;
    {
        const bool branch_taken_0x246eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246eb8) {
            ctx->pc = 0x246EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246EB8u;
            // 0x246ebc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246EDCu;
            goto label_246edc;
        }
    }
    ctx->pc = 0x246EC0u;
    // 0x246ec0: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x246ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x246ec4: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x246ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x246ec8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x246EC8u;
    {
        const bool branch_taken_0x246ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x246ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EC8u;
        // 0x246ecc: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ec8) {
            ctx->pc = 0x246ED8u;
            goto label_246ed8;
        }
    }
    ctx->pc = 0x246ED0u;
    // 0x246ed0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x246ED0u;
    {
        const bool branch_taken_0x246ed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x246ed0) {
            ctx->pc = 0x246EDCu;
            goto label_246edc;
        }
    }
    ctx->pc = 0x246ED8u;
label_246ed8:
    // 0x246ed8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x246ed8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246edc:
    // 0x246edc: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x246EDCu;
    {
        const bool branch_taken_0x246edc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x246edc) {
            ctx->pc = 0x246EFCu;
            goto label_246efc;
        }
    }
    ctx->pc = 0x246EE4u;
    // 0x246ee4: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x246ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x246ee8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x246ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x246eec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x246eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x246ef0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x246ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246ef4: 0x3863003d  xori        $v1, $v1, 0x3D
    ctx->pc = 0x246ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)61);
    // 0x246ef8: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x246ef8u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_246efc:
    // 0x246efc: 0x56600041  bnel        $s3, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x246EFCu;
    {
        const bool branch_taken_0x246efc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x246efc) {
            ctx->pc = 0x246F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246EFCu;
            // 0x246f00: 0x8e220710  lw          $v0, 0x710($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247004u;
            return;
        }
    }
    ctx->pc = 0x246F04u;
    // 0x246f04: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x246f04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x246f08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x246f08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246f0c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x246f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x246f10: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x246f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x246f14: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x246f14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x246f18: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x246F18u;
    {
        const bool branch_taken_0x246f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F18u;
        // 0x246f1c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f18) {
            ctx->pc = 0x246F54u;
            goto label_246f54;
        }
    }
    ctx->pc = 0x246F20u;
    // 0x246f20: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x246f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x246f24: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x246F24u;
    {
        const bool branch_taken_0x246f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x246f24) {
            ctx->pc = 0x246F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246F24u;
            // 0x246f28: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246F58u;
            goto label_246f58;
        }
    }
    ctx->pc = 0x246F2Cu;
    // 0x246f2c: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x246F2Cu;
    SET_GPR_U32(ctx, 31, 0x246F34u);
    ctx->pc = 0x246F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246F2Cu;
    // 0x246f30: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x246F2Cu, 0x246F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F34u;
label_246f34:
    // 0x246f34: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x246F34u;
    {
        const bool branch_taken_0x246f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246f34) {
            ctx->pc = 0x246F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246F34u;
            // 0x246f38: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246F58u;
            goto label_246f58;
        }
    }
    ctx->pc = 0x246F3Cu;
    // 0x246f3c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x246f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x246f40: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x246f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x246f44: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x246F44u;
    {
        const bool branch_taken_0x246f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x246F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F44u;
        // 0x246f48: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f44) {
            ctx->pc = 0x246F54u;
            goto label_246f54;
        }
    }
    ctx->pc = 0x246F4Cu;
    // 0x246f4c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x246F4Cu;
    {
        const bool branch_taken_0x246f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x246f4c) {
            ctx->pc = 0x246F58u;
            goto label_246f58;
        }
    }
    ctx->pc = 0x246F54u;
label_246f54:
    // 0x246f54: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x246f54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246f58:
    // 0x246f58: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x246F58u;
    {
        const bool branch_taken_0x246f58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x246f58) {
            ctx->pc = 0x246F78u;
            goto label_246f78;
        }
    }
    ctx->pc = 0x246F60u;
    // 0x246f60: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x246f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x246f64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x246f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x246f68: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x246f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x246f6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x246f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246f70: 0x38630041  xori        $v1, $v1, 0x41
    ctx->pc = 0x246f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65);
    // 0x246f74: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x246f74u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_246f78:
    // 0x246f78: 0x56600022  bnel        $s3, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x246F78u;
    {
        const bool branch_taken_0x246f78 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x246f78) {
            ctx->pc = 0x246F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246F78u;
            // 0x246f7c: 0x8e220710  lw          $v0, 0x710($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247004u;
            return;
        }
    }
    ctx->pc = 0x246F80u;
    // 0x246f80: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x246f80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x246f84: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x246f84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246f88: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x246f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x246f8c: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x246f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x246f90: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x246f90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x246f94: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x246F94u;
    {
        const bool branch_taken_0x246f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F94u;
        // 0x246f98: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f94) {
            ctx->pc = 0x246FD0u;
            goto label_246fd0;
        }
    }
    ctx->pc = 0x246F9Cu;
    // 0x246f9c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x246f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x246fa0: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x246FA0u;
    {
        const bool branch_taken_0x246fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x246fa0) {
            ctx->pc = 0x246FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246FA0u;
            // 0x246fa4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246FD4u;
            goto label_246fd4;
        }
    }
    ctx->pc = 0x246FA8u;
    // 0x246fa8: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x246FA8u;
    SET_GPR_U32(ctx, 31, 0x246FB0u);
    ctx->pc = 0x246FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246FA8u;
    // 0x246fac: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x246FA8u, 0x246FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246FB0u;
label_246fb0:
    // 0x246fb0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x246FB0u;
    {
        const bool branch_taken_0x246fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246fb0) {
            ctx->pc = 0x246FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246FB0u;
            // 0x246fb4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246FD4u;
            goto label_246fd4;
        }
    }
    ctx->pc = 0x246FB8u;
    // 0x246fb8: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x246fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x246fbc: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x246fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x246fc0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x246FC0u;
    {
        const bool branch_taken_0x246fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x246FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FC0u;
        // 0x246fc4: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246fc0) {
            ctx->pc = 0x246FD0u;
            goto label_246fd0;
        }
    }
    ctx->pc = 0x246FC8u;
    // 0x246fc8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x246FC8u;
    {
        const bool branch_taken_0x246fc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x246fc8) {
            ctx->pc = 0x246FD4u;
            goto label_246fd4;
        }
    }
    ctx->pc = 0x246FD0u;
label_246fd0:
    // 0x246fd0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x246fd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246fd4:
    // 0x246fd4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x246FD4u;
    {
        const bool branch_taken_0x246fd4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x246fd4) {
            ctx->pc = 0x246FF8u;
            goto label_246ff8;
        }
    }
    ctx->pc = 0x246FDCu;
    // 0x246fdc: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x246fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x246fe0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x246fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x246fe4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x246fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x246fe8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x246fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246fec: 0x28430059  slti        $v1, $v0, 0x59
    ctx->pc = 0x246fecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)89) ? 1 : 0);
    // 0x246ff0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x246FF0u;
    {
        const bool branch_taken_0x246ff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246ff0) {
            ctx->pc = 0x246FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246FF0u;
            // 0x246ff4: 0x2853005d  slti        $s3, $v0, 0x5D (Delay Slot)
            SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)93) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x246FF8u;
            goto label_246ff8;
        }
    }
    ctx->pc = 0x246FF8u;
label_246ff8:
    // 0x246ff8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x246FF8u;
    {
        const bool branch_taken_0x246ff8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x246ff8) {
            ctx->pc = 0x247020u;
            return;
        }
    }
    ctx->pc = 0x247000u;
}
