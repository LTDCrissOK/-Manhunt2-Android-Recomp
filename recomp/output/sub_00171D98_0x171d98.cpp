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

// Function: sub_00171D98
// Address: 0x171d98 - 0x171f98
void sub_00171D98_0x171d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171D98_0x171d98");
#endif

    switch (ctx->pc) {
        case 0x171dd8u: goto label_171dd8;
        case 0x171de8u: goto label_171de8;
        case 0x171e04u: goto label_171e04;
        case 0x171e14u: goto label_171e14;
        case 0x171e2cu: goto label_171e2c;
        case 0x171e44u: goto label_171e44;
        case 0x171e54u: goto label_171e54;
        case 0x171e60u: goto label_171e60;
        case 0x171e70u: goto label_171e70;
        case 0x171f00u: goto label_171f00;
        case 0x171f48u: goto label_171f48;
        case 0x171f6cu: goto label_171f6c;
        case 0x171f7cu: goto label_171f7c;
        default: break;
    }

    ctx->pc = 0x171d98u;

    // 0x171d98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x171d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x171d9c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x171d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x171da0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x171da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x171da4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x171da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171da8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x171da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x171dac: 0x8e030228  lw          $v1, 0x228($s0)
    ctx->pc = 0x171dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x171db0: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x171DB0u;
    {
        const bool branch_taken_0x171db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x171DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171DB0u;
        // 0x171db4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171db0) {
            ctx->pc = 0x171E54u;
            goto label_171e54;
        }
    }
    ctx->pc = 0x171DB8u;
    // 0x171db8: 0x8e02022c  lw          $v0, 0x22C($s0)
    ctx->pc = 0x171db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x171dbc: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x171DBCu;
    {
        const bool branch_taken_0x171dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171dbc) {
            ctx->pc = 0x171DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171DBCu;
            // 0x171dc0: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171E58u;
            goto label_171e58;
        }
    }
    ctx->pc = 0x171DC4u;
    // 0x171dc4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x171dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x171dc8: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x171DC8u;
    {
        const bool branch_taken_0x171dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x171dc8) {
            ctx->pc = 0x171DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171DC8u;
            // 0x171dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171DE0u;
            goto label_171de0;
        }
    }
    ctx->pc = 0x171DD0u;
    // 0x171dd0: 0xc05c184  jal         func_170610
    ctx->pc = 0x171DD0u;
    SET_GPR_U32(ctx, 31, 0x171DD8u);
    ctx->pc = 0x170610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170610u, 0x171DD0u, 0x171DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171DD8u;
label_171dd8:
    // 0x171dd8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x171DD8u;
    {
        const bool branch_taken_0x171dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171DD8u;
        // 0x171ddc: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171dd8) {
            ctx->pc = 0x171E58u;
            goto label_171e58;
        }
    }
    ctx->pc = 0x171DE0u;
label_171de0:
    // 0x171de0: 0xc05c8d8  jal         func_172360
    ctx->pc = 0x171DE0u;
    SET_GPR_U32(ctx, 31, 0x171DE8u);
    ctx->pc = 0x171DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171DE0u;
    // 0x171de4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172360u, 0x171DE0u, 0x171DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171DE8u;
label_171de8:
    // 0x171de8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x171DE8u;
    {
        const bool branch_taken_0x171de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171de8) {
            ctx->pc = 0x171E4Cu;
            goto label_171e4c;
        }
    }
    ctx->pc = 0x171DF0u;
    // 0x171df0: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x171df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x171df4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x171DF4u;
    {
        const bool branch_taken_0x171df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171DF4u;
        // 0x171df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171df4) {
            ctx->pc = 0x171E3Cu;
            goto label_171e3c;
        }
    }
    ctx->pc = 0x171DFCu;
    // 0x171dfc: 0xc05c8f2  jal         func_1723C8
    ctx->pc = 0x171DFCu;
    SET_GPR_U32(ctx, 31, 0x171E04u);
    ctx->pc = 0x171E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171DFCu;
    // 0x171e00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1723C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1723C8u, 0x171DFCu, 0x171E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171E04u;
label_171e04:
    // 0x171e04: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x171E04u;
    {
        const bool branch_taken_0x171e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x171e04) {
            ctx->pc = 0x171E24u;
            goto label_171e24;
        }
    }
    ctx->pc = 0x171E0Cu;
    // 0x171e0c: 0xc05c8bc  jal         func_1722F0
    ctx->pc = 0x171E0Cu;
    SET_GPR_U32(ctx, 31, 0x171E14u);
    ctx->pc = 0x171E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171E0Cu;
    // 0x171e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1722F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1722F0u, 0x171E0Cu, 0x171E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171E14u;
label_171e14:
    // 0x171e14: 0x5440005b  bnel        $v0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x171E14u;
    {
        const bool branch_taken_0x171e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x171e14) {
            ctx->pc = 0x171E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171E14u;
            // 0x171e18: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171F84u;
            goto label_171f84;
        }
    }
    ctx->pc = 0x171E1Cu;
    // 0x171e1c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x171E1Cu;
    {
        const bool branch_taken_0x171e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171e1c) {
            ctx->pc = 0x171E3Cu;
            goto label_171e3c;
        }
    }
    ctx->pc = 0x171E24u;
label_171e24:
    // 0x171e24: 0xc05c8bc  jal         func_1722F0
    ctx->pc = 0x171E24u;
    SET_GPR_U32(ctx, 31, 0x171E2Cu);
    ctx->pc = 0x171E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171E24u;
    // 0x171e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1722F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1722F0u, 0x171E24u, 0x171E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171E2Cu;
label_171e2c:
    // 0x171e2c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x171E2Cu;
    {
        const bool branch_taken_0x171e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E2Cu;
        // 0x171e30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171e2c) {
            ctx->pc = 0x171E54u;
            goto label_171e54;
        }
    }
    ctx->pc = 0x171E34u;
    // 0x171e34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x171E34u;
    {
        const bool branch_taken_0x171e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E34u;
        // 0x171e38: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171e34) {
            ctx->pc = 0x171E54u;
            goto label_171e54;
        }
    }
    ctx->pc = 0x171E3Cu;
label_171e3c:
    // 0x171e3c: 0xc05c184  jal         func_170610
    ctx->pc = 0x171E3Cu;
    SET_GPR_U32(ctx, 31, 0x171E44u);
    ctx->pc = 0x171E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171E3Cu;
    // 0x171e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170610u, 0x171E3Cu, 0x171E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171E44u;
label_171e44:
    // 0x171e44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x171E44u;
    {
        const bool branch_taken_0x171e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E44u;
        // 0x171e48: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171e44) {
            ctx->pc = 0x171E58u;
            goto label_171e58;
        }
    }
    ctx->pc = 0x171E4Cu;
label_171e4c:
    // 0x171e4c: 0xc05c184  jal         func_170610
    ctx->pc = 0x171E4Cu;
    SET_GPR_U32(ctx, 31, 0x171E54u);
    ctx->pc = 0x171E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171E4Cu;
    // 0x171e50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170610u, 0x171E4Cu, 0x171E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171E54u;
label_171e54:
    // 0x171e54: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x171e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_171e58:
    // 0x171e58: 0xc0498c4  jal         func_126310
    ctx->pc = 0x171E58u;
    SET_GPR_U32(ctx, 31, 0x171E60u);
    ctx->pc = 0x171E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171E58u;
    // 0x171e5c: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126310u, 0x171E58u, 0x171E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171E60u;
label_171e60:
    // 0x171e60: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x171E60u;
    {
        const bool branch_taken_0x171e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E60u;
        // 0x171e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171e60) {
            ctx->pc = 0x171F50u;
            goto label_171f50;
        }
    }
    ctx->pc = 0x171E68u;
    // 0x171e68: 0xc05c8d8  jal         func_172360
    ctx->pc = 0x171E68u;
    SET_GPR_U32(ctx, 31, 0x171E70u);
    ctx->pc = 0x171E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171E68u;
    // 0x171e6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172360u, 0x171E68u, 0x171E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171E70u;
label_171e70:
    // 0x171e70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x171E70u;
    {
        const bool branch_taken_0x171e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171e70) {
            ctx->pc = 0x171E84u;
            goto label_171e84;
        }
    }
    ctx->pc = 0x171E78u;
    // 0x171e78: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x171e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x171e7c: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x171E7Cu;
    {
        const bool branch_taken_0x171e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171e7c) {
            ctx->pc = 0x171E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171E7Cu;
            // 0x171e80: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171F54u;
            goto label_171f54;
        }
    }
    ctx->pc = 0x171E84u;
label_171e84:
    // 0x171e84: 0x52200033  beql        $s1, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x171E84u;
    {
        const bool branch_taken_0x171e84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x171e84) {
            ctx->pc = 0x171E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171E84u;
            // 0x171e88: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171F54u;
            goto label_171f54;
        }
    }
    ctx->pc = 0x171E8Cu;
    // 0x171e8c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x171e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x171e90: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x171E90u;
    {
        const bool branch_taken_0x171e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171e90) {
            ctx->pc = 0x171E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171E90u;
            // 0x171e94: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171F54u;
            goto label_171f54;
        }
    }
    ctx->pc = 0x171E98u;
    // 0x171e98: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x171e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x171e9c: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x171e9cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x171ea0: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x171EA0u;
    {
        const bool branch_taken_0x171ea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x171EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EA0u;
        // 0x171ea4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171ea0) {
            ctx->pc = 0x171F50u;
            goto label_171f50;
        }
    }
    ctx->pc = 0x171EA8u;
    // 0x171ea8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x171ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x171eac: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x171eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x171eb0: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x171eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x171eb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x171eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x171eb8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x171eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x171ebc: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x171ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x171ec0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x171EC0u;
    {
        const bool branch_taken_0x171ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171ec0) {
            ctx->pc = 0x171F38u;
            goto label_171f38;
        }
    }
    ctx->pc = 0x171EC8u;
    // 0x171ec8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x171ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x171ecc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x171eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x171ed0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x171ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x171ed4: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x171ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x171ed8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x171ED8u;
    {
        const bool branch_taken_0x171ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x171ed8) {
            ctx->pc = 0x171EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171ED8u;
            // 0x171edc: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171EE8u;
            goto label_171ee8;
        }
    }
    ctx->pc = 0x171EE0u;
    // 0x171ee0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x171EE0u;
    {
        const bool branch_taken_0x171ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EE0u;
        // 0x171ee4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171ee0) {
            ctx->pc = 0x171EF0u;
            goto label_171ef0;
        }
    }
    ctx->pc = 0x171EE8u;
label_171ee8:
    // 0x171ee8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x171ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171eec: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x171eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_171ef0:
    // 0x171ef0: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x171EF0u;
    {
        const bool branch_taken_0x171ef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x171ef0) {
            ctx->pc = 0x171F38u;
            goto label_171f38;
        }
    }
    ctx->pc = 0x171EF8u;
    // 0x171ef8: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x171EF8u;
    SET_GPR_U32(ctx, 31, 0x171F00u);
    ctx->pc = 0x171EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171EF8u;
    // 0x171efc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x171EF8u, 0x171F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171F00u;
label_171f00:
    // 0x171f00: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x171f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x171f04: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x171f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x171f08: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x171f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x171f0c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x171f0cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x171f10: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x171f10u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x171f14: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x171f14u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x171f18: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x171f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x171f1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x171f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171f20: 0x0  nop
    ctx->pc = 0x171f20u;
    // NOP
    // 0x171f24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x171f24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171f28: 0x0  nop
    ctx->pc = 0x171f28u;
    // NOP
    // 0x171f2c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x171F2Cu;
    {
        const bool branch_taken_0x171f2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x171F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F2Cu;
        // 0x171f30: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171f2c) {
            ctx->pc = 0x171F38u;
            goto label_171f38;
        }
    }
    ctx->pc = 0x171F34u;
    // 0x171f34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x171f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171f38:
    // 0x171f38: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x171F38u;
    {
        const bool branch_taken_0x171f38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x171F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F38u;
        // 0x171f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171f38) {
            ctx->pc = 0x171F50u;
            goto label_171f50;
        }
    }
    ctx->pc = 0x171F40u;
    // 0x171f40: 0xc05c844  jal         func_172110
    ctx->pc = 0x171F40u;
    SET_GPR_U32(ctx, 31, 0x171F48u);
    ctx->pc = 0x171F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171F40u;
    // 0x171f44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172110u, 0x171F40u, 0x171F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171F48u;
label_171f48:
    // 0x171f48: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x171F48u;
    {
        const bool branch_taken_0x171f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F48u;
        // 0x171f4c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171f48) {
            ctx->pc = 0x171F84u;
            goto label_171f84;
        }
    }
    ctx->pc = 0x171F50u;
label_171f50:
    // 0x171f50: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x171f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_171f54:
    // 0x171f54: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x171f54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x171f58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x171f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x171f5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x171F5Cu;
    {
        const bool branch_taken_0x171f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F5Cu;
        // 0x171f60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171f5c) {
            ctx->pc = 0x171F70u;
            goto label_171f70;
        }
    }
    ctx->pc = 0x171F64u;
    // 0x171f64: 0xc0f70d8  jal         func_3DC360
    ctx->pc = 0x171F64u;
    SET_GPR_U32(ctx, 31, 0x171F6Cu);
    ctx->pc = 0x171F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171F64u;
    // 0x171f68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC360u, 0x171F64u, 0x171F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171F6Cu;
label_171f6c:
    // 0x171f6c: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x171f6cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_171f70:
    // 0x171f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171f74: 0xc05ce00  jal         func_173800
    ctx->pc = 0x171F74u;
    SET_GPR_U32(ctx, 31, 0x171F7Cu);
    ctx->pc = 0x171F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171F74u;
    // 0x171f78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173800u, 0x171F74u, 0x171F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171F7Cu;
label_171f7c:
    // 0x171f7c: 0xae00025c  sw          $zero, 0x25C($s0)
    ctx->pc = 0x171f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 0));
    // 0x171f80: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x171f80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_171f84:
    // 0x171f84: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x171f84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x171f88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x171f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x171F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F8Cu;
        // 0x171f90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171F94u;
    // 0x171f94: 0x0  nop
    ctx->pc = 0x171f94u;
    // NOP
    ctx->pc = 0x171f98u;
}
