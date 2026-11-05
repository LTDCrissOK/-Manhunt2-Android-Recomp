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

// Function: sub_001C4C98
// Address: 0x1c4c98 - 0x1c4e28
void sub_001C4C98_0x1c4c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4C98_0x1c4c98");
#endif

    switch (ctx->pc) {
        case 0x1c4cdcu: goto label_1c4cdc;
        case 0x1c4cf0u: goto label_1c4cf0;
        case 0x1c4d04u: goto label_1c4d04;
        case 0x1c4d18u: goto label_1c4d18;
        case 0x1c4d2cu: goto label_1c4d2c;
        case 0x1c4d50u: goto label_1c4d50;
        case 0x1c4d7cu: goto label_1c4d7c;
        case 0x1c4d90u: goto label_1c4d90;
        case 0x1c4dbcu: goto label_1c4dbc;
        case 0x1c4dd0u: goto label_1c4dd0;
        case 0x1c4dfcu: goto label_1c4dfc;
        case 0x1c4e0cu: goto label_1c4e0c;
        default: break;
    }

    ctx->pc = 0x1c4c98u;

    // 0x1c4c98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c4c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c4c9c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1c4c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1c4ca0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c4ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c4ca4: 0x24421478  addiu       $v0, $v0, 0x1478
    ctx->pc = 0x1c4ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5240));
    // 0x1c4ca8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c4ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c4cac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4cb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c4cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c4cb4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c4cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c4cb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c4cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c4cbc: 0xae020350  sw          $v0, 0x350($s0)
    ctx->pc = 0x1c4cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 2));
    // 0x1c4cc0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c4cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c4cc4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4CC4u;
    {
        const bool branch_taken_0x1c4cc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4CC4u;
        // 0x1c4cc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4cc4) {
            ctx->pc = 0x1C4CDCu;
            goto label_1c4cdc;
        }
    }
    ctx->pc = 0x1C4CCCu;
    // 0x1c4ccc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1c4cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1c4cd0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1c4cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4cd4: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x1C4CD4u;
    SET_GPR_U32(ctx, 31, 0x1C4CDCu);
    ctx->pc = 0x1C4CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4CD4u;
    // 0x1c4cd8: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x1C4CD4u, 0x1C4CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4CDCu;
label_1c4cdc:
    // 0x1c4cdc: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x1c4cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c4ce0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4CE0u;
    {
        const bool branch_taken_0x1c4ce0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4ce0) {
            ctx->pc = 0x1C4CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4CE0u;
            // 0x1c4ce4: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4CF4u;
            goto label_1c4cf4;
        }
    }
    ctx->pc = 0x1C4CE8u;
    // 0x1c4ce8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1C4CE8u;
    SET_GPR_U32(ctx, 31, 0x1C4CF0u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1C4CE8u, 0x1C4CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4CF0u;
label_1c4cf0:
    // 0x1c4cf0: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x1c4cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1c4cf4:
    // 0x1c4cf4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4CF4u;
    {
        const bool branch_taken_0x1c4cf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4cf4) {
            ctx->pc = 0x1C4CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4CF4u;
            // 0x1c4cf8: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4D08u;
            goto label_1c4d08;
        }
    }
    ctx->pc = 0x1C4CFCu;
    // 0x1c4cfc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1C4CFCu;
    SET_GPR_U32(ctx, 31, 0x1C4D04u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1C4CFCu, 0x1C4D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D04u;
label_1c4d04:
    // 0x1c4d04: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c4d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c4d08:
    // 0x1c4d08: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4D08u;
    {
        const bool branch_taken_0x1c4d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4d08) {
            ctx->pc = 0x1C4D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4D08u;
            // 0x1c4d0c: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4D1Cu;
            goto label_1c4d1c;
        }
    }
    ctx->pc = 0x1C4D10u;
    // 0x1c4d10: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1C4D10u;
    SET_GPR_U32(ctx, 31, 0x1C4D18u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1C4D10u, 0x1C4D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D18u;
label_1c4d18:
    // 0x1c4d18: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x1c4d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1c4d1c:
    // 0x1c4d1c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4D1Cu;
    {
        const bool branch_taken_0x1c4d1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4d1c) {
            ctx->pc = 0x1C4D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4D1Cu;
            // 0x1c4d20: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4D30u;
            goto label_1c4d30;
        }
    }
    ctx->pc = 0x1C4D24u;
    // 0x1c4d24: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1C4D24u;
    SET_GPR_U32(ctx, 31, 0x1C4D2Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1C4D24u, 0x1C4D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D2Cu;
label_1c4d2c:
    // 0x1c4d2c: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x1c4d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_1c4d30:
    // 0x1c4d30: 0x32330001  andi        $s3, $s1, 0x1
    ctx->pc = 0x1c4d30u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1c4d34: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1c4d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c4d38: 0x26110014  addiu       $s1, $s0, 0x14
    ctx->pc = 0x1c4d38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1c4d3c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1c4d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c4d40: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C4D40u;
    {
        const bool branch_taken_0x1c4d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C4D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D40u;
        // 0x1c4d44: 0x26120004  addiu       $s2, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d40) {
            ctx->pc = 0x1C4D68u;
            goto label_1c4d68;
        }
    }
    ctx->pc = 0x1C4D48u;
    // 0x1c4d48: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1c4d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1c4d4c: 0x0  nop
    ctx->pc = 0x1c4d4cu;
    // NOP
label_1c4d50:
    // 0x1c4d50: 0x0  nop
    ctx->pc = 0x1c4d50u;
    // NOP
    // 0x1c4d54: 0x0  nop
    ctx->pc = 0x1c4d54u;
    // NOP
    // 0x1c4d58: 0x0  nop
    ctx->pc = 0x1c4d58u;
    // NOP
    // 0x1c4d5c: 0x0  nop
    ctx->pc = 0x1c4d5cu;
    // NOP
    // 0x1c4d60: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C4D60u;
    {
        const bool branch_taken_0x1c4d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C4D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D60u;
        // 0x1c4d64: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d60) {
            ctx->pc = 0x1C4D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4d50;
        }
    }
    ctx->pc = 0x1C4D68u;
label_1c4d68:
    // 0x1c4d68: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1c4d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c4d6c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4D6Cu;
    {
        const bool branch_taken_0x1c4d6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4d6c) {
            ctx->pc = 0x1C4D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4D6Cu;
            // 0x1c4d70: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4D80u;
            goto label_1c4d80;
        }
    }
    ctx->pc = 0x1C4D74u;
    // 0x1c4d74: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1C4D74u;
    SET_GPR_U32(ctx, 31, 0x1C4D7Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1C4D74u, 0x1C4D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D7Cu;
label_1c4d7c:
    // 0x1c4d7c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1c4d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1c4d80:
    // 0x1c4d80: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1c4d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c4d84: 0x50430009  beql        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C4D84u;
    {
        const bool branch_taken_0x1c4d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c4d84) {
            ctx->pc = 0x1C4D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4D84u;
            // 0x1c4d88: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4DACu;
            goto label_1c4dac;
        }
    }
    ctx->pc = 0x1C4D8Cu;
    // 0x1c4d8c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1c4d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_1c4d90:
    // 0x1c4d90: 0x0  nop
    ctx->pc = 0x1c4d90u;
    // NOP
    // 0x1c4d94: 0x0  nop
    ctx->pc = 0x1c4d94u;
    // NOP
    // 0x1c4d98: 0x0  nop
    ctx->pc = 0x1c4d98u;
    // NOP
    // 0x1c4d9c: 0x0  nop
    ctx->pc = 0x1c4d9cu;
    // NOP
    // 0x1c4da0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C4DA0u;
    {
        const bool branch_taken_0x1c4da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C4DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DA0u;
        // 0x1c4da4: 0x24420050  addiu       $v0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4da0) {
            ctx->pc = 0x1C4D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4d90;
        }
    }
    ctx->pc = 0x1C4DA8u;
    // 0x1c4da8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1c4da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c4dac:
    // 0x1c4dac: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4DACu;
    {
        const bool branch_taken_0x1c4dac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4dac) {
            ctx->pc = 0x1C4DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4DACu;
            // 0x1c4db0: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4DC0u;
            goto label_1c4dc0;
        }
    }
    ctx->pc = 0x1C4DB4u;
    // 0x1c4db4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1C4DB4u;
    SET_GPR_U32(ctx, 31, 0x1C4DBCu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1C4DB4u, 0x1C4DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4DBCu;
label_1c4dbc:
    // 0x1c4dbc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1c4dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1c4dc0:
    // 0x1c4dc0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c4dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c4dc4: 0x50430009  beql        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C4DC4u;
    {
        const bool branch_taken_0x1c4dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c4dc4) {
            ctx->pc = 0x1C4DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4DC4u;
            // 0x1c4dc8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4DECu;
            goto label_1c4dec;
        }
    }
    ctx->pc = 0x1C4DCCu;
    // 0x1c4dcc: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1c4dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1c4dd0:
    // 0x1c4dd0: 0x0  nop
    ctx->pc = 0x1c4dd0u;
    // NOP
    // 0x1c4dd4: 0x0  nop
    ctx->pc = 0x1c4dd4u;
    // NOP
    // 0x1c4dd8: 0x0  nop
    ctx->pc = 0x1c4dd8u;
    // NOP
    // 0x1c4ddc: 0x0  nop
    ctx->pc = 0x1c4ddcu;
    // NOP
    // 0x1c4de0: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C4DE0u;
    {
        const bool branch_taken_0x1c4de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c4de0) {
            ctx->pc = 0x1C4DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4DE0u;
            // 0x1c4de4: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4dd0;
        }
    }
    ctx->pc = 0x1C4DE8u;
    // 0x1c4de8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c4de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c4dec:
    // 0x1c4dec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4DECu;
    {
        const bool branch_taken_0x1c4dec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4dec) {
            ctx->pc = 0x1C4DFCu;
            goto label_1c4dfc;
        }
    }
    ctx->pc = 0x1C4DF4u;
    // 0x1c4df4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1C4DF4u;
    SET_GPR_U32(ctx, 31, 0x1C4DFCu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1C4DF4u, 0x1C4DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4DFCu;
label_1c4dfc:
    // 0x1c4dfc: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4DFCu;
    {
        const bool branch_taken_0x1c4dfc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4dfc) {
            ctx->pc = 0x1C4E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4DFCu;
            // 0x1c4e00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4E10u;
            goto label_1c4e10;
        }
    }
    ctx->pc = 0x1C4E04u;
    // 0x1c4e04: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1C4E04u;
    SET_GPR_U32(ctx, 31, 0x1C4E0Cu);
    ctx->pc = 0x1C4E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E04u;
    // 0x1c4e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1C4E04u, 0x1C4E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E0Cu;
label_1c4e0c:
    // 0x1c4e0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4e0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c4e10:
    // 0x1c4e10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c4e10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c4e14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c4e14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4e18: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c4e18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c4e1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c4e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4e20: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4E20u;
        // 0x1c4e24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4E28u;
}
