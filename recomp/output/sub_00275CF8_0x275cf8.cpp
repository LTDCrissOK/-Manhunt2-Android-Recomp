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

// Function: sub_00275CF8
// Address: 0x275cf8 - 0x275ed8
void sub_00275CF8_0x275cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275CF8_0x275cf8");
#endif

    switch (ctx->pc) {
        case 0x275d34u: goto label_275d34;
        case 0x275d58u: goto label_275d58;
        case 0x275d60u: goto label_275d60;
        case 0x275d70u: goto label_275d70;
        case 0x275d88u: goto label_275d88;
        case 0x275dc0u: goto label_275dc0;
        case 0x275dd8u: goto label_275dd8;
        case 0x275de4u: goto label_275de4;
        case 0x275e08u: goto label_275e08;
        case 0x275e18u: goto label_275e18;
        case 0x275e38u: goto label_275e38;
        case 0x275e40u: goto label_275e40;
        case 0x275e64u: goto label_275e64;
        case 0x275e88u: goto label_275e88;
        case 0x275ea8u: goto label_275ea8;
        default: break;
    }

    ctx->pc = 0x275cf8u;

    // 0x275cf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x275cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x275cfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x275cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x275d00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x275d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x275d04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x275d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x275d08: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x275d08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275d0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x275d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x275d10: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x275d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x275d14: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x275d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x275d18: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x275d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x275d1c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x275d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x275d20: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x275d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x275d24: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x275D24u;
    {
        const bool branch_taken_0x275d24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x275D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D24u;
        // 0x275d28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d24) {
            ctx->pc = 0x275D3Cu;
            goto label_275d3c;
        }
    }
    ctx->pc = 0x275D2Cu;
    // 0x275d2c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x275D2Cu;
    SET_GPR_U32(ctx, 31, 0x275D34u);
    ctx->pc = 0x275D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275D2Cu;
    // 0x275d30: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x275D2Cu, 0x275D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275D34u;
label_275d34:
    // 0x275d34: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x275d34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x275d38: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x275d38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_275d3c:
    // 0x275d3c: 0x1200005b  beqz        $s0, . + 4 + (0x5B << 2)
    ctx->pc = 0x275D3Cu;
    {
        const bool branch_taken_0x275d3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x275D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D3Cu;
        // 0x275d40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d3c) {
            ctx->pc = 0x275EACu;
            goto label_275eac;
        }
    }
    ctx->pc = 0x275D44u;
    // 0x275d44: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x275d44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x275d48: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x275D48u;
    {
        const bool branch_taken_0x275d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D48u;
        // 0x275d4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d48) {
            ctx->pc = 0x275EACu;
            goto label_275eac;
        }
    }
    ctx->pc = 0x275D50u;
    // 0x275d50: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x275D50u;
    SET_GPR_U32(ctx, 31, 0x275D58u);
    ctx->pc = 0x275D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275D50u;
    // 0x275d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x275D50u, 0x275D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275D58u;
label_275d58:
    // 0x275d58: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x275D58u;
    SET_GPR_U32(ctx, 31, 0x275D60u);
    ctx->pc = 0x275D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275D58u;
    // 0x275d5c: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x275D58u, 0x275D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275D60u;
label_275d60:
    // 0x275d60: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x275d60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275d64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x275d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275d68: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x275D68u;
    SET_GPR_U32(ctx, 31, 0x275D70u);
    ctx->pc = 0x275D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275D68u;
    // 0x275d6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x275D68u, 0x275D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275D70u;
label_275d70:
    // 0x275d70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x275d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275d74: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x275d74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x275d78: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x275d78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x275d7c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x275D7Cu;
    {
        const bool branch_taken_0x275d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D7Cu;
        // 0x275d80: 0x280182d  daddu       $v1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d7c) {
            ctx->pc = 0x275DACu;
            goto label_275dac;
        }
    }
    ctx->pc = 0x275D84u;
    // 0x275d84: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x275d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_275d88:
    // 0x275d88: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x275d88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275d8c: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275D8Cu;
    {
        const bool branch_taken_0x275d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x275D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D8Cu;
        // 0x275d90: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d8c) {
            ctx->pc = 0x275DA0u;
            goto label_275da0;
        }
    }
    ctx->pc = 0x275D94u;
    // 0x275d94: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x275d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x275d98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x275d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x275d9c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x275d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_275da0:
    // 0x275da0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x275da0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275da4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x275DA4u;
    {
        const bool branch_taken_0x275da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275da4) {
            ctx->pc = 0x275D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275d88;
        }
    }
    ctx->pc = 0x275DACu;
label_275dac:
    // 0x275dac: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x275dacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x275db0: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x275db0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x275db4: 0x2612ffff  addiu       $s2, $s0, -0x1
    ctx->pc = 0x275db4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x275db8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x275DB8u;
    SET_GPR_U32(ctx, 31, 0x275DC0u);
    ctx->pc = 0x275DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275DB8u;
    // 0x275dbc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x275DB8u, 0x275DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275DC0u;
label_275dc0:
    // 0x275dc0: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x275dc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x275dc4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x275dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x275dc8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x275DC8u;
    {
        const bool branch_taken_0x275dc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x275DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275DC8u;
        // 0x275dcc: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275dc8) {
            ctx->pc = 0x275DF0u;
            goto label_275df0;
        }
    }
    ctx->pc = 0x275DD0u;
    // 0x275dd0: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x275dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x275dd4: 0x0  nop
    ctx->pc = 0x275dd4u;
    // NOP
label_275dd8:
    // 0x275dd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275ddc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x275DDCu;
    SET_GPR_U32(ctx, 31, 0x275DE4u);
    ctx->pc = 0x275DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275DDCu;
    // 0x275de0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x275DDCu, 0x275DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275DE4u;
label_275de4:
    // 0x275de4: 0x0  nop
    ctx->pc = 0x275de4u;
    // NOP
    // 0x275de8: 0x1650fffb  bne         $s2, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x275DE8u;
    {
        const bool branch_taken_0x275de8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x275DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275DE8u;
        // 0x275dec: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275de8) {
            ctx->pc = 0x275DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275dd8;
        }
    }
    ctx->pc = 0x275DF0u;
label_275df0:
    // 0x275df0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x275df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x275df4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x275df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275df8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x275DF8u;
    {
        const bool branch_taken_0x275df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275DF8u;
        // 0x275dfc: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275df8) {
            ctx->pc = 0x275E28u;
            goto label_275e28;
        }
    }
    ctx->pc = 0x275E00u;
    // 0x275e00: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x275e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x275e04: 0x0  nop
    ctx->pc = 0x275e04u;
    // NOP
label_275e08:
    // 0x275e08: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x275e08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x275e0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x275e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x275e10: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x275E10u;
    SET_GPR_U32(ctx, 31, 0x275E18u);
    ctx->pc = 0x275E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275E10u;
    // 0x275e14: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x275E10u, 0x275E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275E18u;
label_275e18:
    // 0x275e18: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x275e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x275e1c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x275e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x275e20: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x275E20u;
    {
        const bool branch_taken_0x275e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275e20) {
            ctx->pc = 0x275E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275E20u;
            // 0x275e24: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275e08;
        }
    }
    ctx->pc = 0x275E28u;
label_275e28:
    // 0x275e28: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x275e28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275e2c: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x275e2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275e30: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x275e30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275e34: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x275e34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_275e38:
    // 0x275e38: 0x2416002c  addiu       $s6, $zero, 0x2C
    ctx->pc = 0x275e38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x275e3c: 0x0  nop
    ctx->pc = 0x275e3cu;
    // NOP
label_275e40:
    // 0x275e40: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x275e40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x275e44: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x275e44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275e48: 0x10560003  beq         $v0, $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x275E48u;
    {
        const bool branch_taken_0x275e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x275E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E48u;
        // 0x275e4c: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275e48) {
            ctx->pc = 0x275E58u;
            goto label_275e58;
        }
    }
    ctx->pc = 0x275E50u;
    // 0x275e50: 0x5220fff9  beql        $s1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x275E50u;
    {
        const bool branch_taken_0x275e50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x275e50) {
            ctx->pc = 0x275E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275E50u;
            // 0x275e54: 0x24700001  addiu       $s0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275e38;
        }
    }
    ctx->pc = 0x275E58u;
label_275e58:
    // 0x275e58: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x275e58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x275e5c: 0xc09d9b8  jal         func_2766E0
    ctx->pc = 0x275E5Cu;
    SET_GPR_U32(ctx, 31, 0x275E64u);
    ctx->pc = 0x275E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275E5Cu;
    // 0x275e60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2766E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2766E0u, 0x275E5Cu, 0x275E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275E64u;
label_275e64:
    // 0x275e64: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x275E64u;
    {
        const bool branch_taken_0x275e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275e64) {
            ctx->pc = 0x275E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275E64u;
            // 0x275e68: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275E74u;
            goto label_275e74;
        }
    }
    ctx->pc = 0x275E6Cu;
    // 0x275e6c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x275E6Cu;
    {
        const bool branch_taken_0x275e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E6Cu;
        // 0x275e70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275e6c) {
            ctx->pc = 0x275EACu;
            goto label_275eac;
        }
    }
    ctx->pc = 0x275E74u;
label_275e74:
    // 0x275e74: 0x1520c0  sll         $a0, $s5, 3
    ctx->pc = 0x275e74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x275e78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x275e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275e7c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x275e7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x275e80: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x275E80u;
    SET_GPR_U32(ctx, 31, 0x275E88u);
    ctx->pc = 0x275E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275E80u;
    // 0x275e84: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x275E80u, 0x275E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275E88u;
label_275e88:
    // 0x275e88: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x275e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x275e8c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x275e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275e90: 0x1220ffeb  beqz        $s1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x275E90u;
    {
        const bool branch_taken_0x275e90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x275E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E90u;
        // 0x275e94: 0x71900a  movz        $s2, $v1, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275e90) {
            ctx->pc = 0x275E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275e40;
        }
    }
    ctx->pc = 0x275E98u;
    // 0x275e98: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x275E98u;
    {
        const bool branch_taken_0x275e98 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x275E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E98u;
        // 0x275e9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275e98) {
            ctx->pc = 0x275EACu;
            goto label_275eac;
        }
    }
    ctx->pc = 0x275EA0u;
    // 0x275ea0: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x275EA0u;
    SET_GPR_U32(ctx, 31, 0x275EA8u);
    ctx->pc = 0x275EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275EA0u;
    // 0x275ea4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x275EA0u, 0x275EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275EA8u;
label_275ea8:
    // 0x275ea8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275eac:
    // 0x275eac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x275eacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275eb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x275eb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x275eb4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x275eb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275eb8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x275eb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x275ebc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x275ebcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275ec0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x275ec0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x275ec4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x275ec4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275ec8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x275ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x275ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x275ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275ECCu;
        // 0x275ed0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275ED4u;
    // 0x275ed4: 0x0  nop
    ctx->pc = 0x275ed4u;
    // NOP
    ctx->pc = 0x275ed8u;
}
