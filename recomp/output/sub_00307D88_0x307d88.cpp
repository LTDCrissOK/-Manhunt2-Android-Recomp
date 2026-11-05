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

// Function: sub_00307D88
// Address: 0x307d88 - 0x307e98
void sub_00307D88_0x307d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307D88_0x307d88");
#endif

    switch (ctx->pc) {
        case 0x307de8u: goto label_307de8;
        case 0x307df0u: goto label_307df0;
        case 0x307e00u: goto label_307e00;
        case 0x307e10u: goto label_307e10;
        case 0x307e20u: goto label_307e20;
        case 0x307e38u: goto label_307e38;
        case 0x307e40u: goto label_307e40;
        case 0x307e48u: goto label_307e48;
        case 0x307e5cu: goto label_307e5c;
        case 0x307e6cu: goto label_307e6c;
        case 0x307e7cu: goto label_307e7c;
        case 0x307e84u: goto label_307e84;
        default: break;
    }

    ctx->pc = 0x307d88u;

    // 0x307d88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x307d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x307d8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x307d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x307d90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x307d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x307d94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x307d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307d98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x307d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x307d9c: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x307d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x307da0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x307da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x307da4: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x307DA4u;
    {
        const bool branch_taken_0x307da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307da4) {
            ctx->pc = 0x307E74u;
            goto label_307e74;
        }
    }
    ctx->pc = 0x307DACu;
    // 0x307dac: 0x8e050338  lw          $a1, 0x338($s0)
    ctx->pc = 0x307dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x307db0: 0x8ca40088  lw          $a0, 0x88($a1)
    ctx->pc = 0x307db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x307db4: 0x2482ffee  addiu       $v0, $a0, -0x12
    ctx->pc = 0x307db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967278));
    // 0x307db8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x307db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x307dbc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x307DBCu;
    {
        const bool branch_taken_0x307dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307DBCu;
        // 0x307dc0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307dbc) {
            ctx->pc = 0x307DD8u;
            goto label_307dd8;
        }
    }
    ctx->pc = 0x307DC4u;
    // 0x307dc4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x307dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x307dc8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x307dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x307dcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x307dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x307dd0: 0x2863015a  slti        $v1, $v1, 0x15A
    ctx->pc = 0x307dd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)346) ? 1 : 0);
    // 0x307dd4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x307dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_307dd8:
    // 0x307dd8: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x307DD8u;
    {
        const bool branch_taken_0x307dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x307dd8) {
            ctx->pc = 0x307E74u;
            goto label_307e74;
        }
    }
    ctx->pc = 0x307DE0u;
    // 0x307de0: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x307DE0u;
    SET_GPR_U32(ctx, 31, 0x307DE8u);
    ctx->pc = 0x307DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307DE0u;
    // 0x307de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x307DE0u, 0x307DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307DE8u;
label_307de8:
    // 0x307de8: 0xc097f76  jal         func_25FDD8
    ctx->pc = 0x307DE8u;
    SET_GPR_U32(ctx, 31, 0x307DF0u);
    ctx->pc = 0x307DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307DE8u;
    // 0x307dec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDD8u, 0x307DE8u, 0x307DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307DF0u;
label_307df0:
    // 0x307df0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x307DF0u;
    {
        const bool branch_taken_0x307df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307DF0u;
        // 0x307df4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307df0) {
            ctx->pc = 0x307E64u;
            goto label_307e64;
        }
    }
    ctx->pc = 0x307DF8u;
    // 0x307df8: 0xc0f7da4  jal         func_3DF690
    ctx->pc = 0x307DF8u;
    SET_GPR_U32(ctx, 31, 0x307E00u);
    ctx->pc = 0x307DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307DF8u;
    // 0x307dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF690u, 0x307DF8u, 0x307E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E00u;
label_307e00:
    // 0x307e00: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307E00u;
    {
        const bool branch_taken_0x307e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307e00) {
            ctx->pc = 0x307E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307E00u;
            // 0x307e04: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307E28u;
            goto label_307e28;
        }
    }
    ctx->pc = 0x307E08u;
    // 0x307e08: 0xc0f7da0  jal         func_3DF680
    ctx->pc = 0x307E08u;
    SET_GPR_U32(ctx, 31, 0x307E10u);
    ctx->pc = 0x307E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307E08u;
    // 0x307e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF680u, 0x307E08u, 0x307E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E10u;
label_307e10:
    // 0x307e10: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x307E10u;
    {
        const bool branch_taken_0x307e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307e10) {
            ctx->pc = 0x307E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307E10u;
            // 0x307e14: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307E28u;
            goto label_307e28;
        }
    }
    ctx->pc = 0x307E18u;
    // 0x307e18: 0xc0f7da8  jal         func_3DF6A0
    ctx->pc = 0x307E18u;
    SET_GPR_U32(ctx, 31, 0x307E20u);
    ctx->pc = 0x307E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307E18u;
    // 0x307e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF6A0u, 0x307E18u, 0x307E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E20u;
label_307e20:
    // 0x307e20: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x307E20u;
    {
        const bool branch_taken_0x307e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307e20) {
            ctx->pc = 0x307E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307E20u;
            // 0x307e24: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307E28u;
            goto label_307e28;
        }
    }
    ctx->pc = 0x307E28u;
label_307e28:
    // 0x307e28: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x307E28u;
    {
        const bool branch_taken_0x307e28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x307e28) {
            ctx->pc = 0x307E64u;
            goto label_307e64;
        }
    }
    ctx->pc = 0x307E30u;
    // 0x307e30: 0xc0a03d0  jal         func_280F40
    ctx->pc = 0x307E30u;
    SET_GPR_U32(ctx, 31, 0x307E38u);
    ctx->pc = 0x280F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F40u, 0x307E30u, 0x307E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E38u;
label_307e38:
    // 0x307e38: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x307E38u;
    SET_GPR_U32(ctx, 31, 0x307E40u);
    ctx->pc = 0x307E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307E38u;
    // 0x307e3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x307E38u, 0x307E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E40u;
label_307e40:
    // 0x307e40: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x307E40u;
    SET_GPR_U32(ctx, 31, 0x307E48u);
    ctx->pc = 0x307E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307E40u;
    // 0x307e44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x307E40u, 0x307E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E48u;
label_307e48:
    // 0x307e48: 0x24030083  addiu       $v1, $zero, 0x83
    ctx->pc = 0x307e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x307e4c: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x307E4Cu;
    {
        const bool branch_taken_0x307e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x307e4c) {
            ctx->pc = 0x307E7Cu;
            goto label_307e7c;
        }
    }
    ctx->pc = 0x307E54u;
    // 0x307e54: 0xc0a03dc  jal         func_280F70
    ctx->pc = 0x307E54u;
    SET_GPR_U32(ctx, 31, 0x307E5Cu);
    ctx->pc = 0x307E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307E54u;
    // 0x307e58: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F70u, 0x307E54u, 0x307E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E5Cu;
label_307e5c:
    // 0x307e5c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x307E5Cu;
    {
        const bool branch_taken_0x307e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307e5c) {
            ctx->pc = 0x307E7Cu;
            goto label_307e7c;
        }
    }
    ctx->pc = 0x307E64u;
label_307e64:
    // 0x307e64: 0xc0a03bc  jal         func_280EF0
    ctx->pc = 0x307E64u;
    SET_GPR_U32(ctx, 31, 0x307E6Cu);
    ctx->pc = 0x307E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307E64u;
    // 0x307e68: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280EF0u, 0x307E64u, 0x307E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E6Cu;
label_307e6c:
    // 0x307e6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307E6Cu;
    {
        const bool branch_taken_0x307e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307e6c) {
            ctx->pc = 0x307E7Cu;
            goto label_307e7c;
        }
    }
    ctx->pc = 0x307E74u;
label_307e74:
    // 0x307e74: 0xc0a03bc  jal         func_280EF0
    ctx->pc = 0x307E74u;
    SET_GPR_U32(ctx, 31, 0x307E7Cu);
    ctx->pc = 0x307E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307E74u;
    // 0x307e78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280EF0u, 0x307E74u, 0x307E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E7Cu;
label_307e7c:
    // 0x307e7c: 0xc0913a4  jal         func_244E90
    ctx->pc = 0x307E7Cu;
    SET_GPR_U32(ctx, 31, 0x307E84u);
    ctx->pc = 0x307E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307E7Cu;
    // 0x307e80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E90u, 0x307E7Cu, 0x307E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E84u;
label_307e84:
    // 0x307e84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x307e84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307e88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x307e88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x307e8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x307e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x307e90: 0x3e00008  jr          $ra
    ctx->pc = 0x307E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307E90u;
        // 0x307e94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307E98u;
}
