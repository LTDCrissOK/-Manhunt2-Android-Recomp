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

// Function: sub_00155DA0
// Address: 0x155da0 - 0x155e50
void sub_00155DA0_0x155da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155DA0_0x155da0");
#endif

    switch (ctx->pc) {
        case 0x155da0u: goto label_155da0;
        case 0x155da4u: goto label_155da4;
        case 0x155da8u: goto label_155da8;
        case 0x155dacu: goto label_155dac;
        case 0x155db0u: goto label_155db0;
        case 0x155db4u: goto label_155db4;
        case 0x155db8u: goto label_155db8;
        case 0x155dbcu: goto label_155dbc;
        case 0x155dc0u: goto label_155dc0;
        case 0x155dc4u: goto label_155dc4;
        case 0x155dc8u: goto label_155dc8;
        case 0x155dccu: goto label_155dcc;
        case 0x155dd0u: goto label_155dd0;
        case 0x155dd4u: goto label_155dd4;
        case 0x155dd8u: goto label_155dd8;
        case 0x155ddcu: goto label_155ddc;
        case 0x155de0u: goto label_155de0;
        case 0x155de4u: goto label_155de4;
        case 0x155de8u: goto label_155de8;
        case 0x155decu: goto label_155dec;
        case 0x155df0u: goto label_155df0;
        case 0x155df4u: goto label_155df4;
        case 0x155df8u: goto label_155df8;
        case 0x155dfcu: goto label_155dfc;
        case 0x155e00u: goto label_155e00;
        case 0x155e04u: goto label_155e04;
        case 0x155e08u: goto label_155e08;
        case 0x155e0cu: goto label_155e0c;
        case 0x155e10u: goto label_155e10;
        case 0x155e14u: goto label_155e14;
        case 0x155e18u: goto label_155e18;
        case 0x155e1cu: goto label_155e1c;
        case 0x155e20u: goto label_155e20;
        case 0x155e24u: goto label_155e24;
        case 0x155e28u: goto label_155e28;
        case 0x155e2cu: goto label_155e2c;
        case 0x155e30u: goto label_155e30;
        case 0x155e34u: goto label_155e34;
        case 0x155e38u: goto label_155e38;
        case 0x155e3cu: goto label_155e3c;
        case 0x155e40u: goto label_155e40;
        case 0x155e44u: goto label_155e44;
        case 0x155e48u: goto label_155e48;
        case 0x155e4cu: goto label_155e4c;
        default: break;
    }

    ctx->pc = 0x155da0u;

label_155da0:
    // 0x155da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x155da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_155da4:
    // 0x155da4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x155da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_155da8:
    // 0x155da8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x155da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_155dac:
    // 0x155dac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x155dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_155db0:
    // 0x155db0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x155db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_155db4:
    // 0x155db4: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x155db4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_155db8:
    // 0x155db8: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_155dbc:
    if (ctx->pc == 0x155DBCu) {
        ctx->pc = 0x155DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155DB8u;
        // 0x155dbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155DC0u;
        goto label_155dc0;
    }
    ctx->pc = 0x155DB8u;
    {
        const bool branch_taken_0x155db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155db8) {
            ctx->pc = 0x155DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155DB8u;
            // 0x155dbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155E40u;
            goto label_155e40;
        }
    }
    ctx->pc = 0x155DC0u;
label_155dc0:
    // 0x155dc0: 0xc04db02  jal         func_136C08
label_155dc4:
    if (ctx->pc == 0x155DC4u) {
        ctx->pc = 0x155DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155DC0u;
        // 0x155dc4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155DC8u;
        goto label_155dc8;
    }
    ctx->pc = 0x155DC0u;
    SET_GPR_U32(ctx, 31, 0x155DC8u);
    ctx->pc = 0x155DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155DC0u;
    // 0x155dc4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136C08u, 0x155DC0u, 0x155DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155DC8u;
label_155dc8:
    // 0x155dc8: 0x10000003  b           . + 4 + (0x3 << 2)
label_155dcc:
    if (ctx->pc == 0x155DCCu) {
        ctx->pc = 0x155DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155DC8u;
        // 0x155dcc: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155DD0u;
        goto label_155dd0;
    }
    ctx->pc = 0x155DC8u;
    {
        const bool branch_taken_0x155dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155DC8u;
        // 0x155dcc: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155dc8) {
            ctx->pc = 0x155DD8u;
            goto label_155dd8;
        }
    }
    ctx->pc = 0x155DD0u;
label_155dd0:
    // 0x155dd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x155dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_155dd4:
    // 0x155dd4: 0xa202046c  sb          $v0, 0x46C($s0)
    ctx->pc = 0x155dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 2));
label_155dd8:
    // 0x155dd8: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x155dd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_155ddc:
    // 0x155ddc: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x155ddcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_155de0:
    // 0x155de0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_155de4:
    if (ctx->pc == 0x155DE4u) {
        ctx->pc = 0x155DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155DE0u;
        // 0x155de4: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155DE8u;
        goto label_155de8;
    }
    ctx->pc = 0x155DE0u;
    {
        const bool branch_taken_0x155de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155de0) {
            ctx->pc = 0x155DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155DE0u;
            // 0x155de4: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155E30u;
            goto label_155e30;
        }
    }
    ctx->pc = 0x155DE8u;
label_155de8:
    // 0x155de8: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x155de8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_155dec:
    // 0x155dec: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x155decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_155df0:
    // 0x155df0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x155df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_155df4:
    // 0x155df4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x155df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_155df8:
    // 0x155df8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x155df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_155dfc:
    // 0x155dfc: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
label_155e00:
    if (ctx->pc == 0x155E00u) {
        ctx->pc = 0x155E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155DFCu;
        // 0x155e00: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155E04u;
        goto label_155e04;
    }
    ctx->pc = 0x155DFCu;
    {
        const bool branch_taken_0x155dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155dfc) {
            ctx->pc = 0x155E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155DFCu;
            // 0x155e00: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155dd0;
        }
    }
    ctx->pc = 0x155E04u;
label_155e04:
    // 0x155e04: 0xc0557dc  jal         func_155F70
label_155e08:
    if (ctx->pc == 0x155E08u) {
        ctx->pc = 0x155E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E04u;
        // 0x155e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155E0Cu;
        goto label_155e0c;
    }
    ctx->pc = 0x155E04u;
    SET_GPR_U32(ctx, 31, 0x155E0Cu);
    ctx->pc = 0x155E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155E04u;
    // 0x155e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F70u, 0x155E04u, 0x155E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155E0Cu;
label_155e0c:
    // 0x155e0c: 0x8e050540  lw          $a1, 0x540($s0)
    ctx->pc = 0x155e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1344)));
label_155e10:
    // 0x155e10: 0xc04d80c  jal         func_136030
label_155e14:
    if (ctx->pc == 0x155E14u) {
        ctx->pc = 0x155E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E10u;
        // 0x155e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155E18u;
        goto label_155e18;
    }
    ctx->pc = 0x155E10u;
    SET_GPR_U32(ctx, 31, 0x155E18u);
    ctx->pc = 0x155E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155E10u;
    // 0x155e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136030u, 0x155E10u, 0x155E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155E18u;
label_155e18:
    // 0x155e18: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x155e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_155e1c:
    // 0x155e1c: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x155e1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_155e20:
    // 0x155e20: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x155e20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_155e24:
    // 0x155e24: 0x5623ffea  bnel        $s1, $v1, . + 4 + (-0x16 << 2)
label_155e28:
    if (ctx->pc == 0x155E28u) {
        ctx->pc = 0x155E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E24u;
        // 0x155e28: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155E2Cu;
        goto label_155e2c;
    }
    ctx->pc = 0x155E24u;
    {
        const bool branch_taken_0x155e24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x155e24) {
            ctx->pc = 0x155E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155E24u;
            // 0x155e28: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155dd0;
        }
    }
    ctx->pc = 0x155E2Cu;
label_155e2c:
    // 0x155e2c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x155e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_155e30:
    // 0x155e30: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x155e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_155e34:
    // 0x155e34: 0x40f809  jalr        $v0
label_155e38:
    if (ctx->pc == 0x155E38u) {
        ctx->pc = 0x155E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E34u;
        // 0x155e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155E3Cu;
        goto label_155e3c;
    }
    ctx->pc = 0x155E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x155E3Cu);
        ctx->pc = 0x155E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E34u;
        // 0x155e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155E34u, 0x155E3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155E3Cu;
label_155e3c:
    // 0x155e3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x155e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_155e40:
    // 0x155e40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_155e44:
    // 0x155e44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x155e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_155e48:
    // 0x155e48: 0x3e00008  jr          $ra
label_155e4c:
    if (ctx->pc == 0x155E4Cu) {
        ctx->pc = 0x155E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E48u;
        // 0x155e4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155E50u;
        goto label_fallthrough_0x155e48;
    }
    ctx->pc = 0x155E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E48u;
        // 0x155e4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x155e48:
    ctx->pc = 0x155E50u;
}
