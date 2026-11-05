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

// Function: sub_00210DC8
// Address: 0x210dc8 - 0x210ea8
void sub_00210DC8_0x210dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210DC8_0x210dc8");
#endif

    switch (ctx->pc) {
        case 0x210dc8u: goto label_210dc8;
        case 0x210dccu: goto label_210dcc;
        case 0x210dd0u: goto label_210dd0;
        case 0x210dd4u: goto label_210dd4;
        case 0x210dd8u: goto label_210dd8;
        case 0x210ddcu: goto label_210ddc;
        case 0x210de0u: goto label_210de0;
        case 0x210de4u: goto label_210de4;
        case 0x210de8u: goto label_210de8;
        case 0x210decu: goto label_210dec;
        case 0x210df0u: goto label_210df0;
        case 0x210df4u: goto label_210df4;
        case 0x210df8u: goto label_210df8;
        case 0x210dfcu: goto label_210dfc;
        case 0x210e00u: goto label_210e00;
        case 0x210e04u: goto label_210e04;
        case 0x210e08u: goto label_210e08;
        case 0x210e0cu: goto label_210e0c;
        case 0x210e10u: goto label_210e10;
        case 0x210e14u: goto label_210e14;
        case 0x210e18u: goto label_210e18;
        case 0x210e1cu: goto label_210e1c;
        case 0x210e20u: goto label_210e20;
        case 0x210e24u: goto label_210e24;
        case 0x210e28u: goto label_210e28;
        case 0x210e2cu: goto label_210e2c;
        case 0x210e30u: goto label_210e30;
        case 0x210e34u: goto label_210e34;
        case 0x210e38u: goto label_210e38;
        case 0x210e3cu: goto label_210e3c;
        case 0x210e40u: goto label_210e40;
        case 0x210e44u: goto label_210e44;
        case 0x210e48u: goto label_210e48;
        case 0x210e4cu: goto label_210e4c;
        case 0x210e50u: goto label_210e50;
        case 0x210e54u: goto label_210e54;
        case 0x210e58u: goto label_210e58;
        case 0x210e5cu: goto label_210e5c;
        case 0x210e60u: goto label_210e60;
        case 0x210e64u: goto label_210e64;
        case 0x210e68u: goto label_210e68;
        case 0x210e6cu: goto label_210e6c;
        case 0x210e70u: goto label_210e70;
        case 0x210e74u: goto label_210e74;
        case 0x210e78u: goto label_210e78;
        case 0x210e7cu: goto label_210e7c;
        case 0x210e80u: goto label_210e80;
        case 0x210e84u: goto label_210e84;
        case 0x210e88u: goto label_210e88;
        case 0x210e8cu: goto label_210e8c;
        case 0x210e90u: goto label_210e90;
        case 0x210e94u: goto label_210e94;
        case 0x210e98u: goto label_210e98;
        case 0x210e9cu: goto label_210e9c;
        case 0x210ea0u: goto label_210ea0;
        case 0x210ea4u: goto label_210ea4;
        default: break;
    }

    ctx->pc = 0x210dc8u;

label_210dc8:
    // 0x210dc8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x210dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_210dcc:
    // 0x210dcc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x210dccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_210dd0:
    // 0x210dd0: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x210dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950256)));
label_210dd4:
    // 0x210dd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x210dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_210dd8:
    // 0x210dd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x210dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_210ddc:
    // 0x210ddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x210ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_210de0:
    // 0x210de0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x210de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_210de4:
    // 0x210de4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x210de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_210de8:
    // 0x210de8: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_210dec:
    if (ctx->pc == 0x210DECu) {
        ctx->pc = 0x210DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DE8u;
        // 0x210dec: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210DF0u;
        goto label_210df0;
    }
    ctx->pc = 0x210DE8u;
    {
        const bool branch_taken_0x210de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DE8u;
        // 0x210dec: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210de8) {
            ctx->pc = 0x210E90u;
            goto label_210e90;
        }
    }
    ctx->pc = 0x210DF0u;
label_210df0:
    // 0x210df0: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x210df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_210df4:
    // 0x210df4: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
label_210df8:
    if (ctx->pc == 0x210DF8u) {
        ctx->pc = 0x210DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DF4u;
        // 0x210df8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210DFCu;
        goto label_210dfc;
    }
    ctx->pc = 0x210DF4u;
    {
        const bool branch_taken_0x210df4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x210DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DF4u;
        // 0x210df8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210df4) {
            ctx->pc = 0x210E94u;
            goto label_210e94;
        }
    }
    ctx->pc = 0x210DFCu;
label_210dfc:
    // 0x210dfc: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x210dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_210e00:
    // 0x210e00: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_210e04:
    if (ctx->pc == 0x210E04u) {
        ctx->pc = 0x210E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E00u;
        // 0x210e04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210E08u;
        goto label_210e08;
    }
    ctx->pc = 0x210E00u;
    {
        const bool branch_taken_0x210e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E00u;
        // 0x210e04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e00) {
            ctx->pc = 0x210E94u;
            goto label_210e94;
        }
    }
    ctx->pc = 0x210E08u;
label_210e08:
    // 0x210e08: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x210e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_210e0c:
    // 0x210e0c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x210e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_210e10:
    // 0x210e10: 0x40f809  jalr        $v0
label_210e14:
    if (ctx->pc == 0x210E14u) {
        ctx->pc = 0x210E18u;
        goto label_210e18;
    }
    ctx->pc = 0x210E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x210E18u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210E10u, 0x210E18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210E18u;
label_210e18:
    // 0x210e18: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x210e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_210e1c:
    // 0x210e1c: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
label_210e20:
    if (ctx->pc == 0x210E20u) {
        ctx->pc = 0x210E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E1Cu;
        // 0x210e20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210E24u;
        goto label_210e24;
    }
    ctx->pc = 0x210E1Cu;
    {
        const bool branch_taken_0x210e1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x210E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E1Cu;
        // 0x210e20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e1c) {
            ctx->pc = 0x210E94u;
            goto label_210e94;
        }
    }
    ctx->pc = 0x210E24u;
label_210e24:
    // 0x210e24: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x210e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_210e28:
    // 0x210e28: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x210e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_210e2c:
    // 0x210e2c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_210e30:
    if (ctx->pc == 0x210E30u) {
        ctx->pc = 0x210E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E2Cu;
        // 0x210e30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210E34u;
        goto label_210e34;
    }
    ctx->pc = 0x210E2Cu;
    {
        const bool branch_taken_0x210e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x210E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E2Cu;
        // 0x210e30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e2c) {
            ctx->pc = 0x210E94u;
            goto label_210e94;
        }
    }
    ctx->pc = 0x210E34u;
label_210e34:
    // 0x210e34: 0xc0767f2  jal         func_1D9FC8
label_210e38:
    if (ctx->pc == 0x210E38u) {
        ctx->pc = 0x210E3Cu;
        goto label_210e3c;
    }
    ctx->pc = 0x210E34u;
    SET_GPR_U32(ctx, 31, 0x210E3Cu);
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x210E34u, 0x210E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210E3Cu;
label_210e3c:
    // 0x210e3c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x210e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_210e40:
    // 0x210e40: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x210e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_210e44:
    // 0x210e44: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x210e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_210e48:
    // 0x210e48: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_210e4c:
    if (ctx->pc == 0x210E4Cu) {
        ctx->pc = 0x210E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E48u;
        // 0x210e4c: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210E50u;
        goto label_210e50;
    }
    ctx->pc = 0x210E48u;
    {
        const bool branch_taken_0x210e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x210e48) {
            ctx->pc = 0x210E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210E48u;
            // 0x210e4c: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210E60u;
            goto label_210e60;
        }
    }
    ctx->pc = 0x210E50u;
label_210e50:
    // 0x210e50: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x210e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_210e54:
    // 0x210e54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x210e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210e58:
    // 0x210e58: 0xa0620030  sb          $v0, 0x30($v1)
    ctx->pc = 0x210e58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 48), (uint8_t)GPR_U32(ctx, 2));
label_210e5c:
    // 0x210e5c: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x210e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_210e60:
    // 0x210e60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x210e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_210e64:
    // 0x210e64: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x210e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_210e68:
    // 0x210e68: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x210e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_210e6c:
    // 0x210e6c: 0x40f809  jalr        $v0
label_210e70:
    if (ctx->pc == 0x210E70u) {
        ctx->pc = 0x210E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E6Cu;
        // 0x210e70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210E74u;
        goto label_210e74;
    }
    ctx->pc = 0x210E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x210E74u);
        ctx->pc = 0x210E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E6Cu;
        // 0x210e70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210E6Cu, 0x210E74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210E74u;
label_210e74:
    // 0x210e74: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x210e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_210e78:
    // 0x210e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x210e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_210e7c:
    // 0x210e7c: 0x8c620078  lw          $v0, 0x78($v1)
    ctx->pc = 0x210e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
label_210e80:
    // 0x210e80: 0x40f809  jalr        $v0
label_210e84:
    if (ctx->pc == 0x210E84u) {
        ctx->pc = 0x210E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E80u;
        // 0x210e84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210E88u;
        goto label_210e88;
    }
    ctx->pc = 0x210E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x210E88u);
        ctx->pc = 0x210E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E80u;
        // 0x210e84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210E80u, 0x210E88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210E88u;
label_210e88:
    // 0x210e88: 0x10000003  b           . + 4 + (0x3 << 2)
label_210e8c:
    if (ctx->pc == 0x210E8Cu) {
        ctx->pc = 0x210E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E88u;
        // 0x210e8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210E90u;
        goto label_210e90;
    }
    ctx->pc = 0x210E88u;
    {
        const bool branch_taken_0x210e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E88u;
        // 0x210e8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e88) {
            ctx->pc = 0x210E98u;
            goto label_210e98;
        }
    }
    ctx->pc = 0x210E90u;
label_210e90:
    // 0x210e90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x210e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210e94:
    // 0x210e94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x210e94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_210e98:
    // 0x210e98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x210e98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_210e9c:
    // 0x210e9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x210e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_210ea0:
    // 0x210ea0: 0x3e00008  jr          $ra
label_210ea4:
    if (ctx->pc == 0x210EA4u) {
        ctx->pc = 0x210EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EA0u;
        // 0x210ea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210EA8u;
        goto label_fallthrough_0x210ea0;
    }
    ctx->pc = 0x210EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EA0u;
        // 0x210ea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x210ea0:
    ctx->pc = 0x210EA8u;
}
