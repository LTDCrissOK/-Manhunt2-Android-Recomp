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

// Function: sub_00143D28
// Address: 0x143d28 - 0x143e00
void sub_00143D28_0x143d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143D28_0x143d28");
#endif

    switch (ctx->pc) {
        case 0x143d40u: goto label_143d40;
        case 0x143d54u: goto label_143d54;
        case 0x143d60u: goto label_143d60;
        case 0x143d8cu: goto label_143d8c;
        case 0x143da0u: goto label_143da0;
        case 0x143db4u: goto label_143db4;
        case 0x143dc4u: goto label_143dc4;
        case 0x143dd4u: goto label_143dd4;
        case 0x143ddcu: goto label_143ddc;
        case 0x143de4u: goto label_143de4;
        case 0x143decu: goto label_143dec;
        default: break;
    }

    ctx->pc = 0x143d28u;

    // 0x143d28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x143d2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x143d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x143d30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x143d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x143d34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x143d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x143d38: 0xc050f80  jal         func_143E00
    ctx->pc = 0x143D38u;
    SET_GPR_U32(ctx, 31, 0x143D40u);
    ctx->pc = 0x143D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143D38u;
    // 0x143d3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143E00u, 0x143D38u, 0x143D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143D40u;
label_143d40:
    // 0x143d40: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x143D40u;
    {
        const bool branch_taken_0x143d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143d40) {
            ctx->pc = 0x143D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143D40u;
            // 0x143d44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143DF0u;
            goto label_143df0;
        }
    }
    ctx->pc = 0x143D48u;
    // 0x143d48: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x143d48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x143d4c: 0xc04eb18  jal         func_13AC60
    ctx->pc = 0x143D4Cu;
    SET_GPR_U32(ctx, 31, 0x143D54u);
    ctx->pc = 0x143D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143D4Cu;
    // 0x143d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC60u, 0x143D4Cu, 0x143D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143D54u;
label_143d54:
    // 0x143d54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x143d54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143d58: 0xc050f88  jal         func_143E20
    ctx->pc = 0x143D58u;
    SET_GPR_U32(ctx, 31, 0x143D60u);
    ctx->pc = 0x143D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143D58u;
    // 0x143d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143E20u, 0x143D58u, 0x143D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143D60u;
label_143d60:
    // 0x143d60: 0x2e220007  sltiu       $v0, $s1, 0x7
    ctx->pc = 0x143d60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x143d64: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x143D64u;
    {
        const bool branch_taken_0x143d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143D64u;
        // 0x143d68: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143d64) {
            ctx->pc = 0x143DD4u;
            goto label_143dd4;
        }
    }
    ctx->pc = 0x143D6Cu;
    // 0x143d6c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x143d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x143d70: 0x2442e9b0  addiu       $v0, $v0, -0x1650
    ctx->pc = 0x143d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961584));
    // 0x143d74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x143d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x143d78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x143d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143d7c: 0x800008  jr          $a0
    ctx->pc = 0x143D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143D84u: goto label_143d84;
            case 0x143D94u: goto label_143d94;
            case 0x143DA8u: goto label_143da8;
            case 0x143DBCu: goto label_143dbc;
            case 0x143DCCu: goto label_143dcc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143D7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x143D84u;
label_143d84:
    // 0x143d84: 0xc051230  jal         func_1448C0
    ctx->pc = 0x143D84u;
    SET_GPR_U32(ctx, 31, 0x143D8Cu);
    ctx->pc = 0x143D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143D84u;
    // 0x143d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1448C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1448C0u, 0x143D84u, 0x143D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143D8Cu;
label_143d8c:
    // 0x143d8c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x143D8Cu;
    {
        const bool branch_taken_0x143d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143d8c) {
            ctx->pc = 0x143DD4u;
            goto label_143dd4;
        }
    }
    ctx->pc = 0x143D94u;
label_143d94:
    // 0x143d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x143d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143d98: 0xc050faa  jal         func_143EA8
    ctx->pc = 0x143D98u;
    SET_GPR_U32(ctx, 31, 0x143DA0u);
    ctx->pc = 0x143D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143D98u;
    // 0x143d9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143EA8u, 0x143D98u, 0x143DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143DA0u;
label_143da0:
    // 0x143da0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x143DA0u;
    {
        const bool branch_taken_0x143da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143da0) {
            ctx->pc = 0x143DD4u;
            goto label_143dd4;
        }
    }
    ctx->pc = 0x143DA8u;
label_143da8:
    // 0x143da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x143da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143dac: 0xc050faa  jal         func_143EA8
    ctx->pc = 0x143DACu;
    SET_GPR_U32(ctx, 31, 0x143DB4u);
    ctx->pc = 0x143DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143DACu;
    // 0x143db0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143EA8u, 0x143DACu, 0x143DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143DB4u;
label_143db4:
    // 0x143db4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x143DB4u;
    {
        const bool branch_taken_0x143db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143db4) {
            ctx->pc = 0x143DD4u;
            goto label_143dd4;
        }
    }
    ctx->pc = 0x143DBCu;
label_143dbc:
    // 0x143dbc: 0xc050fd6  jal         func_143F58
    ctx->pc = 0x143DBCu;
    SET_GPR_U32(ctx, 31, 0x143DC4u);
    ctx->pc = 0x143DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143DBCu;
    // 0x143dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F58u, 0x143DBCu, 0x143DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143DC4u;
label_143dc4:
    // 0x143dc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x143DC4u;
    {
        const bool branch_taken_0x143dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143dc4) {
            ctx->pc = 0x143DD4u;
            goto label_143dd4;
        }
    }
    ctx->pc = 0x143DCCu;
label_143dcc:
    // 0x143dcc: 0xc050ff0  jal         func_143FC0
    ctx->pc = 0x143DCCu;
    SET_GPR_U32(ctx, 31, 0x143DD4u);
    ctx->pc = 0x143DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143DCCu;
    // 0x143dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143FC0u, 0x143DCCu, 0x143DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143DD4u;
label_143dd4:
    // 0x143dd4: 0xc04e71a  jal         func_139C68
    ctx->pc = 0x143DD4u;
    SET_GPR_U32(ctx, 31, 0x143DDCu);
    ctx->pc = 0x143DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143DD4u;
    // 0x143dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C68u, 0x143DD4u, 0x143DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143DDCu;
label_143ddc:
    // 0x143ddc: 0xc051008  jal         func_144020
    ctx->pc = 0x143DDCu;
    SET_GPR_U32(ctx, 31, 0x143DE4u);
    ctx->pc = 0x143DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143DDCu;
    // 0x143de0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144020u, 0x143DDCu, 0x143DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143DE4u;
label_143de4:
    // 0x143de4: 0xc04e6f0  jal         func_139BC0
    ctx->pc = 0x143DE4u;
    SET_GPR_U32(ctx, 31, 0x143DECu);
    ctx->pc = 0x143DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143DE4u;
    // 0x143de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139BC0u, 0x143DE4u, 0x143DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143DECu;
label_143dec:
    // 0x143dec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x143decu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_143df0:
    // 0x143df0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x143df0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x143df4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x143df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143df8: 0x3e00008  jr          $ra
    ctx->pc = 0x143DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143DF8u;
        // 0x143dfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143E00u;
}
