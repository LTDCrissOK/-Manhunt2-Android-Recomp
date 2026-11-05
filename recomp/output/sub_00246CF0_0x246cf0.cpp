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

// Function: sub_00246CF0
// Address: 0x246cf0 - 0x246dd8
void sub_00246CF0_0x246cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246CF0_0x246cf0");
#endif

    switch (ctx->pc) {
        case 0x246cf0u: goto label_246cf0;
        case 0x246cf4u: goto label_246cf4;
        case 0x246cf8u: goto label_246cf8;
        case 0x246cfcu: goto label_246cfc;
        case 0x246d00u: goto label_246d00;
        case 0x246d04u: goto label_246d04;
        case 0x246d08u: goto label_246d08;
        case 0x246d0cu: goto label_246d0c;
        case 0x246d10u: goto label_246d10;
        case 0x246d14u: goto label_246d14;
        case 0x246d18u: goto label_246d18;
        case 0x246d1cu: goto label_246d1c;
        case 0x246d20u: goto label_246d20;
        case 0x246d24u: goto label_246d24;
        case 0x246d28u: goto label_246d28;
        case 0x246d2cu: goto label_246d2c;
        case 0x246d30u: goto label_246d30;
        case 0x246d34u: goto label_246d34;
        case 0x246d38u: goto label_246d38;
        case 0x246d3cu: goto label_246d3c;
        case 0x246d40u: goto label_246d40;
        case 0x246d44u: goto label_246d44;
        case 0x246d48u: goto label_246d48;
        case 0x246d4cu: goto label_246d4c;
        case 0x246d50u: goto label_246d50;
        case 0x246d54u: goto label_246d54;
        case 0x246d58u: goto label_246d58;
        case 0x246d5cu: goto label_246d5c;
        case 0x246d60u: goto label_246d60;
        case 0x246d64u: goto label_246d64;
        case 0x246d68u: goto label_246d68;
        case 0x246d6cu: goto label_246d6c;
        case 0x246d70u: goto label_246d70;
        case 0x246d74u: goto label_246d74;
        case 0x246d78u: goto label_246d78;
        case 0x246d7cu: goto label_246d7c;
        case 0x246d80u: goto label_246d80;
        case 0x246d84u: goto label_246d84;
        case 0x246d88u: goto label_246d88;
        case 0x246d8cu: goto label_246d8c;
        case 0x246d90u: goto label_246d90;
        case 0x246d94u: goto label_246d94;
        case 0x246d98u: goto label_246d98;
        case 0x246d9cu: goto label_246d9c;
        case 0x246da0u: goto label_246da0;
        case 0x246da4u: goto label_246da4;
        case 0x246da8u: goto label_246da8;
        case 0x246dacu: goto label_246dac;
        case 0x246db0u: goto label_246db0;
        case 0x246db4u: goto label_246db4;
        case 0x246db8u: goto label_246db8;
        case 0x246dbcu: goto label_246dbc;
        case 0x246dc0u: goto label_246dc0;
        case 0x246dc4u: goto label_246dc4;
        case 0x246dc8u: goto label_246dc8;
        case 0x246dccu: goto label_246dcc;
        case 0x246dd0u: goto label_246dd0;
        case 0x246dd4u: goto label_246dd4;
        default: break;
    }

    ctx->pc = 0x246cf0u;

label_246cf0:
    // 0x246cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x246cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_246cf4:
    // 0x246cf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x246cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_246cf8:
    // 0x246cf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x246cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_246cfc:
    // 0x246cfc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x246cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_246d00:
    // 0x246d00: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_246d04:
    if (ctx->pc == 0x246D04u) {
        ctx->pc = 0x246D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D00u;
        // 0x246d04: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D08u;
        goto label_246d08;
    }
    ctx->pc = 0x246D00u;
    {
        const bool branch_taken_0x246d00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D00u;
        // 0x246d04: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d00) {
            ctx->pc = 0x246D20u;
            goto label_246d20;
        }
    }
    ctx->pc = 0x246D08u;
label_246d08:
    // 0x246d08: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x246d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_246d0c:
    // 0x246d0c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x246d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_246d10:
    // 0x246d10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_246d14:
    if (ctx->pc == 0x246D14u) {
        ctx->pc = 0x246D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D10u;
        // 0x246d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D18u;
        goto label_246d18;
    }
    ctx->pc = 0x246D10u;
    {
        const bool branch_taken_0x246d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D10u;
        // 0x246d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d10) {
            ctx->pc = 0x246D20u;
            goto label_246d20;
        }
    }
    ctx->pc = 0x246D18u;
label_246d18:
    // 0x246d18: 0xc0b93c2  jal         func_2E4F08
label_246d1c:
    if (ctx->pc == 0x246D1Cu) {
        ctx->pc = 0x246D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D18u;
        // 0x246d1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D20u;
        goto label_246d20;
    }
    ctx->pc = 0x246D18u;
    SET_GPR_U32(ctx, 31, 0x246D20u);
    ctx->pc = 0x246D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246D18u;
    // 0x246d1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F08u, 0x246D18u, 0x246D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D20u;
label_246d20:
    // 0x246d20: 0xc0899bc  jal         func_2266F0
label_246d24:
    if (ctx->pc == 0x246D24u) {
        ctx->pc = 0x246D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D20u;
        // 0x246d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D28u;
        goto label_246d28;
    }
    ctx->pc = 0x246D20u;
    SET_GPR_U32(ctx, 31, 0x246D28u);
    ctx->pc = 0x246D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246D20u;
    // 0x246d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x246D20u, 0x246D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D28u;
label_246d28:
    // 0x246d28: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_246d2c:
    if (ctx->pc == 0x246D2Cu) {
        ctx->pc = 0x246D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D28u;
        // 0x246d2c: 0x8e02036c  lw          $v0, 0x36C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D30u;
        goto label_246d30;
    }
    ctx->pc = 0x246D28u;
    {
        const bool branch_taken_0x246d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246d28) {
            ctx->pc = 0x246D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246D28u;
            // 0x246d2c: 0x8e02036c  lw          $v0, 0x36C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246D44u;
            goto label_246d44;
        }
    }
    ctx->pc = 0x246D30u;
label_246d30:
    // 0x246d30: 0xc0899bc  jal         func_2266F0
label_246d34:
    if (ctx->pc == 0x246D34u) {
        ctx->pc = 0x246D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D30u;
        // 0x246d34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D38u;
        goto label_246d38;
    }
    ctx->pc = 0x246D30u;
    SET_GPR_U32(ctx, 31, 0x246D38u);
    ctx->pc = 0x246D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246D30u;
    // 0x246d34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x246D30u, 0x246D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D38u;
label_246d38:
    // 0x246d38: 0xc098514  jal         func_261450
label_246d3c:
    if (ctx->pc == 0x246D3Cu) {
        ctx->pc = 0x246D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D38u;
        // 0x246d3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D40u;
        goto label_246d40;
    }
    ctx->pc = 0x246D38u;
    SET_GPR_U32(ctx, 31, 0x246D40u);
    ctx->pc = 0x246D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246D38u;
    // 0x246d3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261450u, 0x246D38u, 0x246D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D40u;
label_246d40:
    // 0x246d40: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x246d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_246d44:
    // 0x246d44: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x246d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_246d48:
    // 0x246d48: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_246d4c:
    if (ctx->pc == 0x246D4Cu) {
        ctx->pc = 0x246D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D48u;
        // 0x246d4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D50u;
        goto label_246d50;
    }
    ctx->pc = 0x246D48u;
    {
        const bool branch_taken_0x246d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246d48) {
            ctx->pc = 0x246D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246D48u;
            // 0x246d4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246DC4u;
            goto label_246dc4;
        }
    }
    ctx->pc = 0x246D50u;
label_246d50:
    // 0x246d50: 0x8e020224  lw          $v0, 0x224($s0)
    ctx->pc = 0x246d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_246d54:
    // 0x246d54: 0x8e030424  lw          $v1, 0x424($s0)
    ctx->pc = 0x246d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1060)));
label_246d58:
    // 0x246d58: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x246d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_246d5c:
    // 0x246d5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x246d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_246d60:
    // 0x246d60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x246d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_246d64:
    // 0x246d64: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x246d64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_246d68:
    // 0x246d68: 0xc097f2a  jal         func_25FCA8
label_246d6c:
    if (ctx->pc == 0x246D6Cu) {
        ctx->pc = 0x246D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D68u;
        // 0x246d6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D70u;
        goto label_246d70;
    }
    ctx->pc = 0x246D68u;
    SET_GPR_U32(ctx, 31, 0x246D70u);
    ctx->pc = 0x246D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246D68u;
    // 0x246d6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x246D68u, 0x246D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D70u;
label_246d70:
    // 0x246d70: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_246d74:
    if (ctx->pc == 0x246D74u) {
        ctx->pc = 0x246D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D70u;
        // 0x246d74: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D78u;
        goto label_246d78;
    }
    ctx->pc = 0x246D70u;
    {
        const bool branch_taken_0x246d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D70u;
        // 0x246d74: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d70) {
            ctx->pc = 0x246D94u;
            goto label_246d94;
        }
    }
    ctx->pc = 0x246D78u;
label_246d78:
    // 0x246d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_246d7c:
    // 0x246d7c: 0x8c850424  lw          $a1, 0x424($a0)
    ctx->pc = 0x246d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1060)));
label_246d80:
    // 0x246d80: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x246d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_246d84:
    // 0x246d84: 0x40f809  jalr        $v0
label_246d88:
    if (ctx->pc == 0x246D88u) {
        ctx->pc = 0x246D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D84u;
        // 0x246d88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D8Cu;
        goto label_246d8c;
    }
    ctx->pc = 0x246D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246D8Cu);
        ctx->pc = 0x246D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D84u;
        // 0x246d88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246D84u, 0x246D8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246D8Cu;
label_246d8c:
    // 0x246d8c: 0x1000000d  b           . + 4 + (0xD << 2)
label_246d90:
    if (ctx->pc == 0x246D90u) {
        ctx->pc = 0x246D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D8Cu;
        // 0x246d90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D94u;
        goto label_246d94;
    }
    ctx->pc = 0x246D8Cu;
    {
        const bool branch_taken_0x246d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D8Cu;
        // 0x246d90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d8c) {
            ctx->pc = 0x246DC4u;
            goto label_246dc4;
        }
    }
    ctx->pc = 0x246D94u;
label_246d94:
    // 0x246d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_246d98:
    // 0x246d98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x246d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246d9c:
    // 0x246d9c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x246d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_246da0:
    // 0x246da0: 0x40f809  jalr        $v0
label_246da4:
    if (ctx->pc == 0x246DA4u) {
        ctx->pc = 0x246DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DA0u;
        // 0x246da4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246DA8u;
        goto label_246da8;
    }
    ctx->pc = 0x246DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246DA8u);
        ctx->pc = 0x246DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DA0u;
        // 0x246da4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246DA0u, 0x246DA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246DA8u;
label_246da8:
    // 0x246da8: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x246da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_246dac:
    // 0x246dac: 0xc06be26  jal         func_1AF898
label_246db0:
    if (ctx->pc == 0x246DB0u) {
        ctx->pc = 0x246DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DACu;
        // 0x246db0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246DB4u;
        goto label_246db4;
    }
    ctx->pc = 0x246DACu;
    SET_GPR_U32(ctx, 31, 0x246DB4u);
    ctx->pc = 0x246DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246DACu;
    // 0x246db0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF898u, 0x246DACu, 0x246DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246DB4u;
label_246db4:
    // 0x246db4: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x246db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_246db8:
    // 0x246db8: 0xc06bfc8  jal         func_1AFF20
label_246dbc:
    if (ctx->pc == 0x246DBCu) {
        ctx->pc = 0x246DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DB8u;
        // 0x246dbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246DC0u;
        goto label_246dc0;
    }
    ctx->pc = 0x246DB8u;
    SET_GPR_U32(ctx, 31, 0x246DC0u);
    ctx->pc = 0x246DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246DB8u;
    // 0x246dbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFF20u, 0x246DB8u, 0x246DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246DC0u;
label_246dc0:
    // 0x246dc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246dc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_246dc4:
    // 0x246dc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x246dc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_246dc8:
    // 0x246dc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x246dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_246dcc:
    // 0x246dcc: 0x3e00008  jr          $ra
label_246dd0:
    if (ctx->pc == 0x246DD0u) {
        ctx->pc = 0x246DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DCCu;
        // 0x246dd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246DD4u;
        goto label_246dd4;
    }
    ctx->pc = 0x246DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DCCu;
        // 0x246dd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246DD4u;
label_246dd4:
    // 0x246dd4: 0x0  nop
    ctx->pc = 0x246dd4u;
    // NOP
    ctx->pc = 0x246dd8u;
}
