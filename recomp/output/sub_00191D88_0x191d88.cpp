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

// Function: sub_00191D88
// Address: 0x191d88 - 0x191f48
void sub_00191D88_0x191d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191D88_0x191d88");
#endif

    switch (ctx->pc) {
        case 0x191d88u: goto label_191d88;
        case 0x191d8cu: goto label_191d8c;
        case 0x191d90u: goto label_191d90;
        case 0x191d94u: goto label_191d94;
        case 0x191d98u: goto label_191d98;
        case 0x191d9cu: goto label_191d9c;
        case 0x191da0u: goto label_191da0;
        case 0x191da4u: goto label_191da4;
        case 0x191da8u: goto label_191da8;
        case 0x191dacu: goto label_191dac;
        case 0x191db0u: goto label_191db0;
        case 0x191db4u: goto label_191db4;
        case 0x191db8u: goto label_191db8;
        case 0x191dbcu: goto label_191dbc;
        case 0x191dc0u: goto label_191dc0;
        case 0x191dc4u: goto label_191dc4;
        case 0x191dc8u: goto label_191dc8;
        case 0x191dccu: goto label_191dcc;
        case 0x191dd0u: goto label_191dd0;
        case 0x191dd4u: goto label_191dd4;
        case 0x191dd8u: goto label_191dd8;
        case 0x191ddcu: goto label_191ddc;
        case 0x191de0u: goto label_191de0;
        case 0x191de4u: goto label_191de4;
        case 0x191de8u: goto label_191de8;
        case 0x191decu: goto label_191dec;
        case 0x191df0u: goto label_191df0;
        case 0x191df4u: goto label_191df4;
        case 0x191df8u: goto label_191df8;
        case 0x191dfcu: goto label_191dfc;
        case 0x191e00u: goto label_191e00;
        case 0x191e04u: goto label_191e04;
        case 0x191e08u: goto label_191e08;
        case 0x191e0cu: goto label_191e0c;
        case 0x191e10u: goto label_191e10;
        case 0x191e14u: goto label_191e14;
        case 0x191e18u: goto label_191e18;
        case 0x191e1cu: goto label_191e1c;
        case 0x191e20u: goto label_191e20;
        case 0x191e24u: goto label_191e24;
        case 0x191e28u: goto label_191e28;
        case 0x191e2cu: goto label_191e2c;
        case 0x191e30u: goto label_191e30;
        case 0x191e34u: goto label_191e34;
        case 0x191e38u: goto label_191e38;
        case 0x191e3cu: goto label_191e3c;
        case 0x191e40u: goto label_191e40;
        case 0x191e44u: goto label_191e44;
        case 0x191e48u: goto label_191e48;
        case 0x191e4cu: goto label_191e4c;
        case 0x191e50u: goto label_191e50;
        case 0x191e54u: goto label_191e54;
        case 0x191e58u: goto label_191e58;
        case 0x191e5cu: goto label_191e5c;
        case 0x191e60u: goto label_191e60;
        case 0x191e64u: goto label_191e64;
        case 0x191e68u: goto label_191e68;
        case 0x191e6cu: goto label_191e6c;
        case 0x191e70u: goto label_191e70;
        case 0x191e74u: goto label_191e74;
        case 0x191e78u: goto label_191e78;
        case 0x191e7cu: goto label_191e7c;
        case 0x191e80u: goto label_191e80;
        case 0x191e84u: goto label_191e84;
        case 0x191e88u: goto label_191e88;
        case 0x191e8cu: goto label_191e8c;
        case 0x191e90u: goto label_191e90;
        case 0x191e94u: goto label_191e94;
        case 0x191e98u: goto label_191e98;
        case 0x191e9cu: goto label_191e9c;
        case 0x191ea0u: goto label_191ea0;
        case 0x191ea4u: goto label_191ea4;
        case 0x191ea8u: goto label_191ea8;
        case 0x191eacu: goto label_191eac;
        case 0x191eb0u: goto label_191eb0;
        case 0x191eb4u: goto label_191eb4;
        case 0x191eb8u: goto label_191eb8;
        case 0x191ebcu: goto label_191ebc;
        case 0x191ec0u: goto label_191ec0;
        case 0x191ec4u: goto label_191ec4;
        case 0x191ec8u: goto label_191ec8;
        case 0x191eccu: goto label_191ecc;
        case 0x191ed0u: goto label_191ed0;
        case 0x191ed4u: goto label_191ed4;
        case 0x191ed8u: goto label_191ed8;
        case 0x191edcu: goto label_191edc;
        case 0x191ee0u: goto label_191ee0;
        case 0x191ee4u: goto label_191ee4;
        case 0x191ee8u: goto label_191ee8;
        case 0x191eecu: goto label_191eec;
        case 0x191ef0u: goto label_191ef0;
        case 0x191ef4u: goto label_191ef4;
        case 0x191ef8u: goto label_191ef8;
        case 0x191efcu: goto label_191efc;
        case 0x191f00u: goto label_191f00;
        case 0x191f04u: goto label_191f04;
        case 0x191f08u: goto label_191f08;
        case 0x191f0cu: goto label_191f0c;
        case 0x191f10u: goto label_191f10;
        case 0x191f14u: goto label_191f14;
        case 0x191f18u: goto label_191f18;
        case 0x191f1cu: goto label_191f1c;
        case 0x191f20u: goto label_191f20;
        case 0x191f24u: goto label_191f24;
        case 0x191f28u: goto label_191f28;
        case 0x191f2cu: goto label_191f2c;
        case 0x191f30u: goto label_191f30;
        case 0x191f34u: goto label_191f34;
        case 0x191f38u: goto label_191f38;
        case 0x191f3cu: goto label_191f3c;
        case 0x191f40u: goto label_191f40;
        case 0x191f44u: goto label_191f44;
        default: break;
    }

    ctx->pc = 0x191d88u;

label_191d88:
    // 0x191d88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x191d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_191d8c:
    // 0x191d8c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x191d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_191d90:
    // 0x191d90: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x191d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_191d94:
    // 0x191d94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x191d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_191d98:
    // 0x191d98: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x191d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_191d9c:
    // 0x191d9c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x191d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_191da0:
    // 0x191da0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x191da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_191da4:
    // 0x191da4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x191da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_191da8:
    // 0x191da8: 0x40f809  jalr        $v0
label_191dac:
    if (ctx->pc == 0x191DACu) {
        ctx->pc = 0x191DB0u;
        goto label_191db0;
    }
    ctx->pc = 0x191DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191DB0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191DA8u, 0x191DB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x191DB0u;
label_191db0:
    // 0x191db0: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
label_191db4:
    if (ctx->pc == 0x191DB4u) {
        ctx->pc = 0x191DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191DB0u;
        // 0x191db4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191DB8u;
        goto label_191db8;
    }
    ctx->pc = 0x191DB0u;
    {
        const bool branch_taken_0x191db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191DB0u;
        // 0x191db4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191db0) {
            ctx->pc = 0x191F2Cu;
            goto label_191f2c;
        }
    }
    ctx->pc = 0x191DB8u;
label_191db8:
    // 0x191db8: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x191db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_191dbc:
    // 0x191dbc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x191dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_191dc0:
    // 0x191dc0: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
label_191dc4:
    if (ctx->pc == 0x191DC4u) {
        ctx->pc = 0x191DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191DC0u;
        // 0x191dc4: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191DC8u;
        goto label_191dc8;
    }
    ctx->pc = 0x191DC0u;
    {
        const bool branch_taken_0x191dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191DC0u;
        // 0x191dc4: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191dc0) {
            ctx->pc = 0x191F28u;
            goto label_191f28;
        }
    }
    ctx->pc = 0x191DC8u;
label_191dc8:
    // 0x191dc8: 0xc095368  jal         func_254DA0
label_191dcc:
    if (ctx->pc == 0x191DCCu) {
        ctx->pc = 0x191DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191DC8u;
        // 0x191dcc: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191DD0u;
        goto label_191dd0;
    }
    ctx->pc = 0x191DC8u;
    SET_GPR_U32(ctx, 31, 0x191DD0u);
    ctx->pc = 0x191DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191DC8u;
    // 0x191dcc: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x191DC8u, 0x191DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191DD0u;
label_191dd0:
    // 0x191dd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x191dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_191dd4:
    // 0x191dd4: 0xc061a12  jal         func_186848
label_191dd8:
    if (ctx->pc == 0x191DD8u) {
        ctx->pc = 0x191DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191DD4u;
        // 0x191dd8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191DDCu;
        goto label_191ddc;
    }
    ctx->pc = 0x191DD4u;
    SET_GPR_U32(ctx, 31, 0x191DDCu);
    ctx->pc = 0x191DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191DD4u;
    // 0x191dd8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x191DD4u, 0x191DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191DDCu;
label_191ddc:
    // 0x191ddc: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x191ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_191de0:
    // 0x191de0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x191de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191de4:
    // 0x191de4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x191de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_191de8:
    // 0x191de8: 0x40f809  jalr        $v0
label_191dec:
    if (ctx->pc == 0x191DECu) {
        ctx->pc = 0x191DF0u;
        goto label_191df0;
    }
    ctx->pc = 0x191DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191DF0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191DE8u, 0x191DF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x191DF0u;
label_191df0:
    // 0x191df0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_191df4:
    if (ctx->pc == 0x191DF4u) {
        ctx->pc = 0x191DF8u;
        goto label_191df8;
    }
    ctx->pc = 0x191DF0u;
    {
        const bool branch_taken_0x191df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191df0) {
            ctx->pc = 0x191E2Cu;
            goto label_191e2c;
        }
    }
    ctx->pc = 0x191DF8u;
label_191df8:
    // 0x191df8: 0xc061a12  jal         func_186848
label_191dfc:
    if (ctx->pc == 0x191DFCu) {
        ctx->pc = 0x191DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191DF8u;
        // 0x191dfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E00u;
        goto label_191e00;
    }
    ctx->pc = 0x191DF8u;
    SET_GPR_U32(ctx, 31, 0x191E00u);
    ctx->pc = 0x191DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191DF8u;
    // 0x191dfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x191DF8u, 0x191E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191E00u;
label_191e00:
    // 0x191e00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x191e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191e04:
    // 0x191e04: 0xc06f376  jal         func_1BCDD8
label_191e08:
    if (ctx->pc == 0x191E08u) {
        ctx->pc = 0x191E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E04u;
        // 0x191e08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E0Cu;
        goto label_191e0c;
    }
    ctx->pc = 0x191E04u;
    SET_GPR_U32(ctx, 31, 0x191E0Cu);
    ctx->pc = 0x191E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191E04u;
    // 0x191e08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCDD8u, 0x191E04u, 0x191E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191E0Cu;
label_191e0c:
    // 0x191e0c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_191e10:
    if (ctx->pc == 0x191E10u) {
        ctx->pc = 0x191E14u;
        goto label_191e14;
    }
    ctx->pc = 0x191E0Cu;
    {
        const bool branch_taken_0x191e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191e0c) {
            ctx->pc = 0x191E2Cu;
            goto label_191e2c;
        }
    }
    ctx->pc = 0x191E14u;
label_191e14:
    // 0x191e14: 0xc061a12  jal         func_186848
label_191e18:
    if (ctx->pc == 0x191E18u) {
        ctx->pc = 0x191E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E14u;
        // 0x191e18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E1Cu;
        goto label_191e1c;
    }
    ctx->pc = 0x191E14u;
    SET_GPR_U32(ctx, 31, 0x191E1Cu);
    ctx->pc = 0x191E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191E14u;
    // 0x191e18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x191E14u, 0x191E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191E1Cu;
label_191e1c:
    // 0x191e1c: 0xc06fab4  jal         func_1BEAD0
label_191e20:
    if (ctx->pc == 0x191E20u) {
        ctx->pc = 0x191E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E1Cu;
        // 0x191e20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E24u;
        goto label_191e24;
    }
    ctx->pc = 0x191E1Cu;
    SET_GPR_U32(ctx, 31, 0x191E24u);
    ctx->pc = 0x191E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191E1Cu;
    // 0x191e20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAD0u, 0x191E1Cu, 0x191E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191E24u;
label_191e24:
    // 0x191e24: 0x14500041  bne         $v0, $s0, . + 4 + (0x41 << 2)
label_191e28:
    if (ctx->pc == 0x191E28u) {
        ctx->pc = 0x191E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E24u;
        // 0x191e28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E2Cu;
        goto label_191e2c;
    }
    ctx->pc = 0x191E24u;
    {
        const bool branch_taken_0x191e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x191E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E24u;
        // 0x191e28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e24) {
            ctx->pc = 0x191F2Cu;
            goto label_191f2c;
        }
    }
    ctx->pc = 0x191E2Cu;
label_191e2c:
    // 0x191e2c: 0xc061a12  jal         func_186848
label_191e30:
    if (ctx->pc == 0x191E30u) {
        ctx->pc = 0x191E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E2Cu;
        // 0x191e30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E34u;
        goto label_191e34;
    }
    ctx->pc = 0x191E2Cu;
    SET_GPR_U32(ctx, 31, 0x191E34u);
    ctx->pc = 0x191E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191E2Cu;
    // 0x191e30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x191E2Cu, 0x191E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191E34u;
label_191e34:
    // 0x191e34: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x191e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
label_191e38:
    // 0x191e38: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x191e38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_191e3c:
    // 0x191e3c: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x191e3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_191e40:
    // 0x191e40: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x191e40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_191e44:
    // 0x191e44: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x191e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_191e48:
    // 0x191e48: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x191e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_191e4c:
    // 0x191e4c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x191e4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_191e50:
    // 0x191e50: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x191e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_191e54:
    // 0x191e54: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x191e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_191e58:
    // 0x191e58: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x191e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_191e5c:
    // 0x191e5c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x191e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_191e60:
    // 0x191e60: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x191e60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_191e64:
    // 0x191e64: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x191e64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_191e68:
    // 0x191e68: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x191e68u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_191e6c:
    // 0x191e6c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x191e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_191e70:
    // 0x191e70: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x191e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_191e74:
    // 0x191e74: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x191e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_191e78:
    // 0x191e78: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x191e78u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_191e7c:
    // 0x191e7c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x191e7cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_191e80:
    // 0x191e80: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x191e80u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_191e84:
    // 0x191e84: 0x46010044  c1          0x10044
    ctx->pc = 0x191e84u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_191e88:
    // 0x191e88: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x191e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_191e8c:
    // 0x191e8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x191e8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191e90:
    // 0x191e90: 0x0  nop
    ctx->pc = 0x191e90u;
    // NOP
label_191e94:
    // 0x191e94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x191e94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_191e98:
    // 0x191e98: 0x0  nop
    ctx->pc = 0x191e98u;
    // NOP
label_191e9c:
    // 0x191e9c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_191ea0:
    if (ctx->pc == 0x191EA0u) {
        ctx->pc = 0x191EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E9Cu;
        // 0x191ea0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191EA4u;
        goto label_191ea4;
    }
    ctx->pc = 0x191E9Cu;
    {
        const bool branch_taken_0x191e9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x191e9c) {
            ctx->pc = 0x191EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191E9Cu;
            // 0x191ea0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191EACu;
            goto label_191eac;
        }
    }
    ctx->pc = 0x191EA4u;
label_191ea4:
    // 0x191ea4: 0x10000021  b           . + 4 + (0x21 << 2)
label_191ea8:
    if (ctx->pc == 0x191EA8u) {
        ctx->pc = 0x191EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191EA4u;
        // 0x191ea8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191EACu;
        goto label_191eac;
    }
    ctx->pc = 0x191EA4u;
    {
        const bool branch_taken_0x191ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191EA4u;
        // 0x191ea8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ea4) {
            ctx->pc = 0x191F2Cu;
            goto label_191f2c;
        }
    }
    ctx->pc = 0x191EACu;
label_191eac:
    // 0x191eac: 0xc061a12  jal         func_186848
label_191eb0:
    if (ctx->pc == 0x191EB0u) {
        ctx->pc = 0x191EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191EACu;
        // 0x191eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191EB4u;
        goto label_191eb4;
    }
    ctx->pc = 0x191EACu;
    SET_GPR_U32(ctx, 31, 0x191EB4u);
    ctx->pc = 0x191EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191EACu;
    // 0x191eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x191EACu, 0x191EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191EB4u;
label_191eb4:
    // 0x191eb4: 0x24500110  addiu       $s0, $v0, 0x110
    ctx->pc = 0x191eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
label_191eb8:
    // 0x191eb8: 0xc061a12  jal         func_186848
label_191ebc:
    if (ctx->pc == 0x191EBCu) {
        ctx->pc = 0x191EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191EB8u;
        // 0x191ebc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191EC0u;
        goto label_191ec0;
    }
    ctx->pc = 0x191EB8u;
    SET_GPR_U32(ctx, 31, 0x191EC0u);
    ctx->pc = 0x191EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191EB8u;
    // 0x191ebc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x191EB8u, 0x191EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191EC0u;
label_191ec0:
    // 0x191ec0: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x191ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_191ec4:
    // 0x191ec4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x191ec4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_191ec8:
    // 0x191ec8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x191ec8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_191ecc:
    // 0x191ecc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x191eccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_191ed0:
    // 0x191ed0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x191ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_191ed4:
    // 0x191ed4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x191ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_191ed8:
    // 0x191ed8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x191ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_191edc:
    // 0x191edc: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x191edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_191ee0:
    // 0x191ee0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x191ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_191ee4:
    // 0x191ee4: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x191ee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_191ee8:
    // 0x191ee8: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x191ee8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_191eec:
    // 0x191eec: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x191eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_191ef0:
    // 0x191ef0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x191ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_191ef4:
    // 0x191ef4: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x191ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_191ef8:
    // 0x191ef8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x191ef8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_191efc:
    // 0x191efc: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x191efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_191f00:
    // 0x191f00: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x191f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_191f04:
    // 0x191f04: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x191f04u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_191f08:
    // 0x191f08: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x191f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_191f0c:
    // 0x191f0c: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x191f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_191f10:
    // 0x191f10: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x191f10u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_191f14:
    // 0x191f14: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x191f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_191f18:
    // 0x191f18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x191f18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_191f1c:
    // 0x191f1c: 0x0  nop
    ctx->pc = 0x191f1cu;
    // NOP
label_191f20:
    // 0x191f20: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_191f24:
    if (ctx->pc == 0x191F24u) {
        ctx->pc = 0x191F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F20u;
        // 0x191f24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191F28u;
        goto label_191f28;
    }
    ctx->pc = 0x191F20u;
    {
        const bool branch_taken_0x191f20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x191F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F20u;
        // 0x191f24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191f20) {
            ctx->pc = 0x191F2Cu;
            goto label_191f2c;
        }
    }
    ctx->pc = 0x191F28u;
label_191f28:
    // 0x191f28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x191f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191f2c:
    // 0x191f2c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x191f2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_191f30:
    // 0x191f30: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x191f30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_191f34:
    // 0x191f34: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x191f34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_191f38:
    // 0x191f38: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x191f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_191f3c:
    // 0x191f3c: 0x3e00008  jr          $ra
label_191f40:
    if (ctx->pc == 0x191F40u) {
        ctx->pc = 0x191F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F3Cu;
        // 0x191f40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191F44u;
        goto label_191f44;
    }
    ctx->pc = 0x191F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F3Cu;
        // 0x191f40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191F44u;
label_191f44:
    // 0x191f44: 0x0  nop
    ctx->pc = 0x191f44u;
    // NOP
    ctx->pc = 0x191f48u;
}
