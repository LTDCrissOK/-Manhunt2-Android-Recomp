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

// Function: sub_00314D50
// Address: 0x314d50 - 0x314ff8
void sub_00314D50_0x314d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314D50_0x314d50");
#endif

    switch (ctx->pc) {
        case 0x314d8cu: goto label_314d8c;
        case 0x314dc8u: goto label_314dc8;
        case 0x314df8u: goto label_314df8;
        case 0x314e20u: goto label_314e20;
        case 0x314eb8u: goto label_314eb8;
        case 0x314ee0u: goto label_314ee0;
        case 0x314f40u: goto label_314f40;
        case 0x314f80u: goto label_314f80;
        case 0x314fa8u: goto label_314fa8;
        default: break;
    }

    ctx->pc = 0x314d50u;

    // 0x314d50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x314d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x314d54: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x314d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x314d58: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x314d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x314d5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x314d5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314d60: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x314d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x314d64: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x314d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x314d68: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x314d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x314d6c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x314d6cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314d70: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x314d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x314d74: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x314d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x314d78: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x314d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x314d7c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x314d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x314d80: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x314d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x314d84: 0xc0c514c  jal         func_314530
    ctx->pc = 0x314D84u;
    SET_GPR_U32(ctx, 31, 0x314D8Cu);
    ctx->pc = 0x314D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314D84u;
    // 0x314d88: 0xafb10020  sw          $s1, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314530u, 0x314D84u, 0x314D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314D8Cu;
label_314d8c:
    // 0x314d8c: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x314d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x314d90: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x314D90u;
    {
        const bool branch_taken_0x314d90 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x314d90) {
            ctx->pc = 0x314D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314D90u;
            // 0x314d94: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314D98u;
            goto label_314d98;
        }
    }
    ctx->pc = 0x314D98u;
label_314d98:
    // 0x314d98: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x314d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314d9c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x314d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x314da0: 0x24632190  addiu       $v1, $v1, 0x2190
    ctx->pc = 0x314da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8592));
    // 0x314da4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x314da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x314da8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x314da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x314dac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x314dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x314db0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x314db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x314db4: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x314DB4u;
    {
        const bool branch_taken_0x314db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x314DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314DB4u;
        // 0x314db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314db4) {
            ctx->pc = 0x314DE4u;
            goto label_314de4;
        }
    }
    ctx->pc = 0x314DBCu;
    // 0x314dbc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x314dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314dc0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x314dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x314dc4: 0x0  nop
    ctx->pc = 0x314dc4u;
    // NOP
label_314dc8:
    // 0x314dc8: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x314DC8u;
    {
        const bool branch_taken_0x314dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x314DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314DC8u;
        // 0x314dcc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314dc8) {
            ctx->pc = 0x314DE4u;
            goto label_314de4;
        }
    }
    ctx->pc = 0x314DD0u;
    // 0x314dd0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x314dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x314dd4: 0x0  nop
    ctx->pc = 0x314dd4u;
    // NOP
    // 0x314dd8: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x314DD8u;
    {
        const bool branch_taken_0x314dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x314dd8) {
            ctx->pc = 0x314DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314DD8u;
            // 0x314ddc: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314dc8;
        }
    }
    ctx->pc = 0x314DE0u;
    // 0x314de0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x314de0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_314de4:
    // 0x314de4: 0x54400075  bnel        $v0, $zero, . + 4 + (0x75 << 2)
    ctx->pc = 0x314DE4u;
    {
        const bool branch_taken_0x314de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x314de4) {
            ctx->pc = 0x314DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314DE4u;
            // 0x314de8: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314FBCu;
            goto label_314fbc;
        }
    }
    ctx->pc = 0x314DECu;
    // 0x314dec: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x314decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x314df0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x314DF0u;
    SET_GPR_U32(ctx, 31, 0x314DF8u);
    ctx->pc = 0x314DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314DF0u;
    // 0x314df4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x314DF0u, 0x314DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314DF8u;
label_314df8:
    // 0x314df8: 0x26102190  addiu       $s0, $s0, 0x2190
    ctx->pc = 0x314df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8592));
    // 0x314dfc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x314dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x314e00: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x314e00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314e04: 0x24634430  addiu       $v1, $v1, 0x4430
    ctx->pc = 0x314e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17456));
    // 0x314e08: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x314e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x314e0c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x314e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x314e10: 0xafb10024  sw          $s1, 0x24($sp)
    ctx->pc = 0x314e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
    // 0x314e14: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x314e14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x314e18: 0xc0c514c  jal         func_314530
    ctx->pc = 0x314E18u;
    SET_GPR_U32(ctx, 31, 0x314E20u);
    ctx->pc = 0x314E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314E18u;
    // 0x314e1c: 0xafb50000  sw          $s5, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314530u, 0x314E18u, 0x314E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314E20u;
label_314e20:
    // 0x314e20: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x314e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x314e24: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x314E24u;
    {
        const bool branch_taken_0x314e24 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x314e24) {
            ctx->pc = 0x314E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314E24u;
            // 0x314e28: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314E2Cu;
            goto label_314e2c;
        }
    }
    ctx->pc = 0x314E2Cu;
label_314e2c:
    // 0x314e2c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x314e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314e30: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x314e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x314e34: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x314e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x314e38: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x314e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x314e3c: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x314e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x314e40: 0x508821  addu        $s1, $v0, $s0
    ctx->pc = 0x314e40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x314e44: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x314e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x314e48: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x314e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x314e4c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x314E4Cu;
    {
        const bool branch_taken_0x314e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x314E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314E4Cu;
        // 0x314e50: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314e4c) {
            ctx->pc = 0x314E78u;
            goto label_314e78;
        }
    }
    ctx->pc = 0x314E54u;
    // 0x314e54: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x314E54u;
    {
        const bool branch_taken_0x314e54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x314e54) {
            ctx->pc = 0x314E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314E54u;
            // 0x314e58: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314E6Cu;
            goto label_314e6c;
        }
    }
    ctx->pc = 0x314E5Cu;
    // 0x314e5c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x314e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x314e60: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x314e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x314e64: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x314e64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x314e68: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x314e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_314e6c:
    // 0x314e6c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x314e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x314e70: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x314E70u;
    {
        const bool branch_taken_0x314e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314E70u;
        // 0x314e74: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314e70) {
            ctx->pc = 0x314FC8u;
            goto label_314fc8;
        }
    }
    ctx->pc = 0x314E78u;
label_314e78:
    // 0x314e78: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x314e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x314e7c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x314e7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314e80: 0xafb4002c  sw          $s4, 0x2C($sp)
    ctx->pc = 0x314e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 20));
    // 0x314e84: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x314e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x314e88: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x314e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x314e8c: 0x27a3002c  addiu       $v1, $sp, 0x2C
    ctx->pc = 0x314e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x314e90: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x314e90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x314e94: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x314e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x314e98: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x314e98u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x314e9c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x314e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x314ea0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x314ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x314ea4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x314EA4u;
    {
        const bool branch_taken_0x314ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314EA4u;
        // 0x314ea8: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314ea4) {
            ctx->pc = 0x314EC0u;
            goto label_314ec0;
        }
    }
    ctx->pc = 0x314EACu;
    // 0x314eac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x314eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314eb0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x314EB0u;
    SET_GPR_U32(ctx, 31, 0x314EB8u);
    ctx->pc = 0x314EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314EB0u;
    // 0x314eb4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x314EB0u, 0x314EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314EB8u;
label_314eb8:
    // 0x314eb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x314EB8u;
    {
        const bool branch_taken_0x314eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314EB8u;
        // 0x314ebc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314eb8) {
            ctx->pc = 0x314ECCu;
            goto label_314ecc;
        }
    }
    ctx->pc = 0x314EC0u;
label_314ec0:
    // 0x314ec0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x314ec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314ec4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x314ec4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314ec8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_314ecc:
    // 0x314ecc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x314eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x314ed0: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x314ed0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314ed4: 0x1093000b  beq         $a0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x314ED4u;
    {
        const bool branch_taken_0x314ed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        ctx->pc = 0x314ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314ED4u;
        // 0x314ed8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314ed4) {
            ctx->pc = 0x314F04u;
            goto label_314f04;
        }
    }
    ctx->pc = 0x314EDCu;
    // 0x314edc: 0x0  nop
    ctx->pc = 0x314edcu;
    // NOP
label_314ee0:
    // 0x314ee0: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x314EE0u;
    {
        const bool branch_taken_0x314ee0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x314ee0) {
            ctx->pc = 0x314EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314EE0u;
            // 0x314ee4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314EFCu;
            goto label_314efc;
        }
    }
    ctx->pc = 0x314EE8u;
    // 0x314ee8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x314ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x314eec: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x314eecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x314ef0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x314ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x314ef4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x314ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x314ef8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x314ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_314efc:
    // 0x314efc: 0x1493fff8  bne         $a0, $s3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x314EFCu;
    {
        const bool branch_taken_0x314efc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        ctx->pc = 0x314F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314EFCu;
        // 0x314f00: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314efc) {
            ctx->pc = 0x314EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314ee0;
        }
    }
    ctx->pc = 0x314F04u;
label_314f04:
    // 0x314f04: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x314f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x314f08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x314f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314f0c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x314F0Cu;
    {
        const bool branch_taken_0x314f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x314F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F0Cu;
        // 0x314f10: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314f0c) {
            ctx->pc = 0x314F34u;
            goto label_314f34;
        }
    }
    ctx->pc = 0x314F14u;
    // 0x314f14: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x314F14u;
    {
        const bool branch_taken_0x314f14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x314f14) {
            ctx->pc = 0x314F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314F14u;
            // 0x314f18: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314F68u;
            goto label_314f68;
        }
    }
    ctx->pc = 0x314F1Cu;
    // 0x314f1c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x314f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x314f20: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x314f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x314f24: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x314f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x314f28: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x314f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x314f2c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x314F2Cu;
    {
        const bool branch_taken_0x314f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F2Cu;
        // 0x314f30: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314f2c) {
            ctx->pc = 0x314F68u;
            goto label_314f68;
        }
    }
    ctx->pc = 0x314F34u;
label_314f34:
    // 0x314f34: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x314f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314f38: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x314F38u;
    {
        const bool branch_taken_0x314f38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x314F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F38u;
        // 0x314f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314f38) {
            ctx->pc = 0x314F60u;
            goto label_314f60;
        }
    }
    ctx->pc = 0x314F40u;
label_314f40:
    // 0x314f40: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x314F40u;
    {
        const bool branch_taken_0x314f40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x314F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F40u;
        // 0x314f44: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314f40) {
            ctx->pc = 0x314F58u;
            goto label_314f58;
        }
    }
    ctx->pc = 0x314F48u;
    // 0x314f48: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x314f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x314f4c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x314f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x314f50: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x314f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x314f54: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x314f54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_314f58:
    // 0x314f58: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x314F58u;
    {
        const bool branch_taken_0x314f58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x314F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F58u;
        // 0x314f5c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314f58) {
            ctx->pc = 0x314F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314f40;
        }
    }
    ctx->pc = 0x314F60u;
label_314f60:
    // 0x314f60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x314f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314f64: 0x0  nop
    ctx->pc = 0x314f64u;
    // NOP
label_314f68:
    // 0x314f68: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x314f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x314f6c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x314f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x314f70: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x314F70u;
    {
        const bool branch_taken_0x314f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x314F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F70u;
        // 0x314f74: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314f70) {
            ctx->pc = 0x314F98u;
            goto label_314f98;
        }
    }
    ctx->pc = 0x314F78u;
    // 0x314f78: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x314f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x314f7c: 0x0  nop
    ctx->pc = 0x314f7cu;
    // NOP
label_314f80:
    // 0x314f80: 0x0  nop
    ctx->pc = 0x314f80u;
    // NOP
    // 0x314f84: 0x0  nop
    ctx->pc = 0x314f84u;
    // NOP
    // 0x314f88: 0x0  nop
    ctx->pc = 0x314f88u;
    // NOP
    // 0x314f8c: 0x0  nop
    ctx->pc = 0x314f8cu;
    // NOP
    // 0x314f90: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x314F90u;
    {
        const bool branch_taken_0x314f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x314F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F90u;
        // 0x314f94: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314f90) {
            ctx->pc = 0x314F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314f80;
        }
    }
    ctx->pc = 0x314F98u;
label_314f98:
    // 0x314f98: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x314F98u;
    {
        const bool branch_taken_0x314f98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x314F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F98u;
        // 0x314f9c: 0x2d41021  addu        $v0, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314f98) {
            ctx->pc = 0x314FACu;
            goto label_314fac;
        }
    }
    ctx->pc = 0x314FA0u;
    // 0x314fa0: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x314FA0u;
    SET_GPR_U32(ctx, 31, 0x314FA8u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x314FA0u, 0x314FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314FA8u;
label_314fa8:
    // 0x314fa8: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x314fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_314fac:
    // 0x314fac: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x314facu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x314fb0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x314fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x314fb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x314FB4u;
    {
        const bool branch_taken_0x314fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314FB4u;
        // 0x314fb8: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314fb4) {
            ctx->pc = 0x314FC8u;
            goto label_314fc8;
        }
    }
    ctx->pc = 0x314FBCu;
label_314fbc:
    // 0x314fbc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x314fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x314fc0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x314fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x314fc4: 0x62a80a  movz        $s5, $v1, $v0
    ctx->pc = 0x314fc4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
label_314fc8:
    // 0x314fc8: 0xaeb70008  sw          $s7, 0x8($s5)
    ctx->pc = 0x314fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 23));
    // 0x314fcc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x314fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x314fd0: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x314fd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x314fd4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x314fd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x314fd8: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x314fd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x314fdc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x314fdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x314fe0: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x314fe0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x314fe4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x314fe4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x314fe8: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x314fe8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x314fec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x314fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x314ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x314FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314FF0u;
        // 0x314ff4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314FF8u;
}
