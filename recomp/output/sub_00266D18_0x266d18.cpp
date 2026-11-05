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

// Function: sub_00266D18
// Address: 0x266d18 - 0x266e68
void sub_00266D18_0x266d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266D18_0x266d18");
#endif

    switch (ctx->pc) {
        case 0x266d50u: goto label_266d50;
        case 0x266d58u: goto label_266d58;
        case 0x266d60u: goto label_266d60;
        case 0x266d80u: goto label_266d80;
        case 0x266dd4u: goto label_266dd4;
        case 0x266df0u: goto label_266df0;
        case 0x266e04u: goto label_266e04;
        case 0x266e18u: goto label_266e18;
        case 0x266e20u: goto label_266e20;
        case 0x266e4cu: goto label_266e4c;
        default: break;
    }

    ctx->pc = 0x266d18u;

    // 0x266d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x266d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x266d1c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x266d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x266d20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x266d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x266d24: 0x244225c8  addiu       $v0, $v0, 0x25C8
    ctx->pc = 0x266d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9672));
    // 0x266d28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x266d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x266d2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x266d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266d30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x266d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x266d34: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x266d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x266d38: 0xae220218  sw          $v0, 0x218($s1)
    ctx->pc = 0x266d38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 2));
    // 0x266d3c: 0x8e230220  lw          $v1, 0x220($s1)
    ctx->pc = 0x266d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x266d40: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x266D40u;
    {
        const bool branch_taken_0x266d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x266D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D40u;
        // 0x266d44: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266d40) {
            ctx->pc = 0x266DF0u;
            goto label_266df0;
        }
    }
    ctx->pc = 0x266D48u;
    // 0x266d48: 0xc09a26a  jal         func_2689A8
    ctx->pc = 0x266D48u;
    SET_GPR_U32(ctx, 31, 0x266D50u);
    ctx->pc = 0x266D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266D48u;
    // 0x266d4c: 0xac600028  sw          $zero, 0x28($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2689A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2689A8u, 0x266D48u, 0x266D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266D50u;
label_266d50:
    // 0x266d50: 0xc09a2c0  jal         func_268B00
    ctx->pc = 0x266D50u;
    SET_GPR_U32(ctx, 31, 0x266D58u);
    ctx->pc = 0x266D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266D50u;
    // 0x266d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268B00u, 0x266D50u, 0x266D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266D58u;
label_266d58:
    // 0x266d58: 0xc09a200  jal         func_268800
    ctx->pc = 0x266D58u;
    SET_GPR_U32(ctx, 31, 0x266D60u);
    ctx->pc = 0x268800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268800u, 0x266D58u, 0x266D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266D60u;
label_266d60:
    // 0x266d60: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x266d60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x266d64: 0x8ce29dbc  lw          $v0, -0x6244($a3)
    ctx->pc = 0x266d64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9DBCu));
    // 0x266d68: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x266D68u;
    {
        const bool branch_taken_0x266d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D68u;
        // 0x266d6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266d68) {
            ctx->pc = 0x266DBCu;
            goto label_266dbc;
        }
    }
    ctx->pc = 0x266D70u;
    // 0x266d70: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x266d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x266d74: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x266d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266d78: 0x2446ae30  addiu       $a2, $v0, -0x51D0
    ctx->pc = 0x266d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946352));
    // 0x266d7c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x266d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_266d80:
    // 0x266d80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x266d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x266d84: 0x14510009  bne         $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x266D84u;
    {
        const bool branch_taken_0x266d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x266D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D84u;
        // 0x266d88: 0x8ce29dbc  lw          $v0, -0x6244($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294942140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266d84) {
            ctx->pc = 0x266DACu;
            goto label_266dac;
        }
    }
    ctx->pc = 0x266D8Cu;
    // 0x266d8c: 0x8ca29dbc  lw          $v0, -0x6244($a1)
    ctx->pc = 0x266d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294942140)));
    // 0x266d90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x266d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x266d94: 0xaca29dbc  sw          $v0, -0x6244($a1)
    ctx->pc = 0x266d94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294942140), GPR_U32(ctx, 2));
    // 0x266d98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x266d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x266d9c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x266d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x266da0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x266da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266da4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x266DA4u;
    {
        const bool branch_taken_0x266da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266DA4u;
        // 0x266da8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266da4) {
            ctx->pc = 0x266DBCu;
            goto label_266dbc;
        }
    }
    ctx->pc = 0x266DACu;
label_266dac:
    // 0x266dac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x266dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x266db0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x266db0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x266db4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x266DB4u;
    {
        const bool branch_taken_0x266db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266DB4u;
        // 0x266db8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266db4) {
            ctx->pc = 0x266D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266d80;
        }
    }
    ctx->pc = 0x266DBCu;
label_266dbc:
    // 0x266dbc: 0x8e250220  lw          $a1, 0x220($s1)
    ctx->pc = 0x266dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x266dc0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x266dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x266dc4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x266DC4u;
    {
        const bool branch_taken_0x266dc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x266dc4) {
            ctx->pc = 0x266DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266DC4u;
            // 0x266dc8: 0x8e240220  lw          $a0, 0x220($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266DD8u;
            goto label_266dd8;
        }
    }
    ctx->pc = 0x266DCCu;
    // 0x266dcc: 0xc0c8716  jal         func_321C58
    ctx->pc = 0x266DCCu;
    SET_GPR_U32(ctx, 31, 0x266DD4u);
    ctx->pc = 0x321C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321C58u, 0x266DCCu, 0x266DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266DD4u;
label_266dd4:
    // 0x266dd4: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x266dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_266dd8:
    // 0x266dd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x266dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266ddc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x266ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x266de0: 0xac43bce4  sw          $v1, -0x431C($v0)
    ctx->pc = 0x266de0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FBCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBCE4u, _value); } while (0);
    // 0x266de4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x266de4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x266de8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x266DE8u;
    SET_GPR_U32(ctx, 31, 0x266DF0u);
    ctx->pc = 0x266DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266DE8u;
    // 0x266dec: 0x8e240220  lw          $a0, 0x220($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x266DE8u, 0x266DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266DF0u;
label_266df0:
    // 0x266df0: 0x8e2402d8  lw          $a0, 0x2D8($s1)
    ctx->pc = 0x266df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x266df4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x266DF4u;
    {
        const bool branch_taken_0x266df4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x266DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266DF4u;
        // 0x266df8: 0x263002c4  addiu       $s0, $s1, 0x2C4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 708));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266df4) {
            ctx->pc = 0x266E08u;
            goto label_266e08;
        }
    }
    ctx->pc = 0x266DFCu;
    // 0x266dfc: 0xc0d6538  jal         func_3594E0
    ctx->pc = 0x266DFCu;
    SET_GPR_U32(ctx, 31, 0x266E04u);
    ctx->pc = 0x266E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266DFCu;
    // 0x266e00: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3594E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3594E0u, 0x266DFCu, 0x266E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266E04u;
label_266e04:
    // 0x266e04: 0x263002c4  addiu       $s0, $s1, 0x2C4
    ctx->pc = 0x266e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 708));
label_266e08:
    // 0x266e08: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x266e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x266e0c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x266E0Cu;
    {
        const bool branch_taken_0x266e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E0Cu;
        // 0x266e10: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e0c) {
            ctx->pc = 0x266E30u;
            goto label_266e30;
        }
    }
    ctx->pc = 0x266E14u;
    // 0x266e14: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x266e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_266e18:
    // 0x266e18: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x266E18u;
    SET_GPR_U32(ctx, 31, 0x266E20u);
    ctx->pc = 0x266E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266E18u;
    // 0x266e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x266E18u, 0x266E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266E20u;
label_266e20:
    // 0x266e20: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x266e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x266e24: 0x0  nop
    ctx->pc = 0x266e24u;
    // NOP
    // 0x266e28: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x266E28u;
    {
        const bool branch_taken_0x266e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266e28) {
            ctx->pc = 0x266E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266E28u;
            // 0x266e2c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266e18;
        }
    }
    ctx->pc = 0x266E30u;
label_266e30:
    // 0x266e30: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x266e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x266e34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266e38: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x266e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x266e3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x266e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266e40: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x266e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x266e44: 0xc0836c2  jal         func_20DB08
    ctx->pc = 0x266E44u;
    SET_GPR_U32(ctx, 31, 0x266E4Cu);
    ctx->pc = 0x266E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266E44u;
    // 0x266e48: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB08u, 0x266E44u, 0x266E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266E4Cu;
label_266e4c:
    // 0x266e4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x266e4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266e50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x266e50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x266e54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x266e54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266e58: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x266e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x266e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x266E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E5Cu;
        // 0x266e60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266E64u;
    // 0x266e64: 0x0  nop
    ctx->pc = 0x266e64u;
    // NOP
    ctx->pc = 0x266e68u;
}
