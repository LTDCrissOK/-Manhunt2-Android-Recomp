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

// Function: sub_003D5DB8
// Address: 0x3d5db8 - 0x3d5f64
void sub_003D5DB8_0x3d5db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5DB8_0x3d5db8");
#endif

    switch (ctx->pc) {
        case 0x3d5db8u: goto label_3d5db8;
        case 0x3d5dbcu: goto label_3d5dbc;
        case 0x3d5dc0u: goto label_3d5dc0;
        case 0x3d5dc4u: goto label_3d5dc4;
        case 0x3d5dc8u: goto label_3d5dc8;
        case 0x3d5dccu: goto label_3d5dcc;
        case 0x3d5dd0u: goto label_3d5dd0;
        case 0x3d5dd4u: goto label_3d5dd4;
        case 0x3d5dd8u: goto label_3d5dd8;
        case 0x3d5ddcu: goto label_3d5ddc;
        case 0x3d5de0u: goto label_3d5de0;
        case 0x3d5de4u: goto label_3d5de4;
        case 0x3d5de8u: goto label_3d5de8;
        case 0x3d5decu: goto label_3d5dec;
        case 0x3d5df0u: goto label_3d5df0;
        case 0x3d5df4u: goto label_3d5df4;
        case 0x3d5df8u: goto label_3d5df8;
        case 0x3d5dfcu: goto label_3d5dfc;
        case 0x3d5e00u: goto label_3d5e00;
        case 0x3d5e04u: goto label_3d5e04;
        case 0x3d5e08u: goto label_3d5e08;
        case 0x3d5e0cu: goto label_3d5e0c;
        case 0x3d5e10u: goto label_3d5e10;
        case 0x3d5e14u: goto label_3d5e14;
        case 0x3d5e18u: goto label_3d5e18;
        case 0x3d5e1cu: goto label_3d5e1c;
        case 0x3d5e20u: goto label_3d5e20;
        case 0x3d5e24u: goto label_3d5e24;
        case 0x3d5e28u: goto label_3d5e28;
        case 0x3d5e2cu: goto label_3d5e2c;
        case 0x3d5e30u: goto label_3d5e30;
        case 0x3d5e34u: goto label_3d5e34;
        case 0x3d5e38u: goto label_3d5e38;
        case 0x3d5e3cu: goto label_3d5e3c;
        case 0x3d5e40u: goto label_3d5e40;
        case 0x3d5e44u: goto label_3d5e44;
        case 0x3d5e48u: goto label_3d5e48;
        case 0x3d5e4cu: goto label_3d5e4c;
        case 0x3d5e50u: goto label_3d5e50;
        case 0x3d5e54u: goto label_3d5e54;
        case 0x3d5e58u: goto label_3d5e58;
        case 0x3d5e5cu: goto label_3d5e5c;
        case 0x3d5e60u: goto label_3d5e60;
        case 0x3d5e64u: goto label_3d5e64;
        case 0x3d5e68u: goto label_3d5e68;
        case 0x3d5e6cu: goto label_3d5e6c;
        case 0x3d5e70u: goto label_3d5e70;
        case 0x3d5e74u: goto label_3d5e74;
        case 0x3d5e78u: goto label_3d5e78;
        case 0x3d5e7cu: goto label_3d5e7c;
        case 0x3d5e80u: goto label_3d5e80;
        case 0x3d5e84u: goto label_3d5e84;
        case 0x3d5e88u: goto label_3d5e88;
        case 0x3d5e8cu: goto label_3d5e8c;
        case 0x3d5e90u: goto label_3d5e90;
        case 0x3d5e94u: goto label_3d5e94;
        case 0x3d5e98u: goto label_3d5e98;
        case 0x3d5e9cu: goto label_3d5e9c;
        case 0x3d5ea0u: goto label_3d5ea0;
        case 0x3d5ea4u: goto label_3d5ea4;
        case 0x3d5ea8u: goto label_3d5ea8;
        case 0x3d5eacu: goto label_3d5eac;
        case 0x3d5eb0u: goto label_3d5eb0;
        case 0x3d5eb4u: goto label_3d5eb4;
        case 0x3d5eb8u: goto label_3d5eb8;
        case 0x3d5ebcu: goto label_3d5ebc;
        case 0x3d5ec0u: goto label_3d5ec0;
        case 0x3d5ec4u: goto label_3d5ec4;
        case 0x3d5ec8u: goto label_3d5ec8;
        case 0x3d5eccu: goto label_3d5ecc;
        case 0x3d5ed0u: goto label_3d5ed0;
        case 0x3d5ed4u: goto label_3d5ed4;
        case 0x3d5ed8u: goto label_3d5ed8;
        case 0x3d5edcu: goto label_3d5edc;
        case 0x3d5ee0u: goto label_3d5ee0;
        case 0x3d5ee4u: goto label_3d5ee4;
        case 0x3d5ee8u: goto label_3d5ee8;
        case 0x3d5eecu: goto label_3d5eec;
        case 0x3d5ef0u: goto label_3d5ef0;
        case 0x3d5ef4u: goto label_3d5ef4;
        case 0x3d5ef8u: goto label_3d5ef8;
        case 0x3d5efcu: goto label_3d5efc;
        case 0x3d5f00u: goto label_3d5f00;
        case 0x3d5f04u: goto label_3d5f04;
        case 0x3d5f08u: goto label_3d5f08;
        case 0x3d5f0cu: goto label_3d5f0c;
        case 0x3d5f10u: goto label_3d5f10;
        case 0x3d5f14u: goto label_3d5f14;
        case 0x3d5f18u: goto label_3d5f18;
        case 0x3d5f1cu: goto label_3d5f1c;
        case 0x3d5f20u: goto label_3d5f20;
        case 0x3d5f24u: goto label_3d5f24;
        case 0x3d5f28u: goto label_3d5f28;
        case 0x3d5f2cu: goto label_3d5f2c;
        case 0x3d5f30u: goto label_3d5f30;
        case 0x3d5f34u: goto label_3d5f34;
        case 0x3d5f38u: goto label_3d5f38;
        case 0x3d5f3cu: goto label_3d5f3c;
        case 0x3d5f40u: goto label_3d5f40;
        case 0x3d5f44u: goto label_3d5f44;
        case 0x3d5f48u: goto label_3d5f48;
        case 0x3d5f4cu: goto label_3d5f4c;
        case 0x3d5f50u: goto label_3d5f50;
        case 0x3d5f54u: goto label_3d5f54;
        case 0x3d5f58u: goto label_3d5f58;
        case 0x3d5f5cu: goto label_3d5f5c;
        case 0x3d5f60u: goto label_3d5f60;
        default: break;
    }

    ctx->pc = 0x3d5db8u;

label_3d5db8:
    // 0x3d5db8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3d5db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3d5dbc:
    // 0x3d5dbc: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x3d5dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_3d5dc0:
    // 0x3d5dc0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x3d5dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_3d5dc4:
    // 0x3d5dc4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3d5dc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d5dc8:
    // 0x3d5dc8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3d5dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_3d5dcc:
    // 0x3d5dcc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3d5dccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d5dd0:
    // 0x3d5dd0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3d5dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3d5dd4:
    // 0x3d5dd4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x3d5dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_3d5dd8:
    // 0x3d5dd8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3d5dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_3d5ddc:
    // 0x3d5ddc: 0xc0f5306  jal         func_3D4C18
label_3d5de0:
    if (ctx->pc == 0x3D5DE0u) {
        ctx->pc = 0x3D5DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5DDCu;
        // 0x3d5de0: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5DE4u;
        goto label_3d5de4;
    }
    ctx->pc = 0x3D5DDCu;
    SET_GPR_U32(ctx, 31, 0x3D5DE4u);
    ctx->pc = 0x3D5DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5DDCu;
    // 0x3d5de0: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4C18u, 0x3D5DDCu, 0x3D5DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5DE4u;
label_3d5de4:
    // 0x3d5de4: 0x1a600010  blez        $s3, . + 4 + (0x10 << 2)
label_3d5de8:
    if (ctx->pc == 0x3D5DE8u) {
        ctx->pc = 0x3D5DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5DE4u;
        // 0x3d5de8: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5DECu;
        goto label_3d5dec;
    }
    ctx->pc = 0x3D5DE4u;
    {
        const bool branch_taken_0x3d5de4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3D5DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5DE4u;
        // 0x3d5de8: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5de4) {
            ctx->pc = 0x3D5E28u;
            goto label_3d5e28;
        }
    }
    ctx->pc = 0x3D5DECu;
label_3d5dec:
    // 0x3d5dec: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x3d5decu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d5df0:
    // 0x3d5df0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3d5df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d5df4:
    // 0x3d5df4: 0x0  nop
    ctx->pc = 0x3d5df4u;
    // NOP
label_3d5df8:
    // 0x3d5df8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3d5df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d5dfc:
    // 0x3d5dfc: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x3d5dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_3d5e00:
    // 0x3d5e00: 0xc0f5e48  jal         func_3D7920
label_3d5e04:
    if (ctx->pc == 0x3D5E04u) {
        ctx->pc = 0x3D5E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5E00u;
        // 0x3d5e04: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5E08u;
        goto label_3d5e08;
    }
    ctx->pc = 0x3D5E00u;
    SET_GPR_U32(ctx, 31, 0x3D5E08u);
    ctx->pc = 0x3D5E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5E00u;
    // 0x3d5e04: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7920u, 0x3D5E00u, 0x3D5E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5E08u;
label_3d5e08:
    // 0x3d5e08: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3d5e0c:
    if (ctx->pc == 0x3D5E0Cu) {
        ctx->pc = 0x3D5E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5E08u;
        // 0x3d5e0c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5E10u;
        goto label_3d5e10;
    }
    ctx->pc = 0x3D5E08u;
    {
        const bool branch_taken_0x3d5e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5e08) {
            ctx->pc = 0x3D5E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D5E08u;
            // 0x3d5e0c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D5E20u;
            goto label_3d5e20;
        }
    }
    ctx->pc = 0x3D5E10u;
label_3d5e10:
    // 0x3d5e10: 0xc0f5762  jal         func_3D5D88
label_3d5e14:
    if (ctx->pc == 0x3D5E14u) {
        ctx->pc = 0x3D5E18u;
        goto label_3d5e18;
    }
    ctx->pc = 0x3D5E10u;
    SET_GPR_U32(ctx, 31, 0x3D5E18u);
    ctx->pc = 0x3D5D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5D88u, 0x3D5E10u, 0x3D5E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5E18u;
label_3d5e18:
    // 0x3d5e18: 0xc0f55b4  jal         func_3D56D0
label_3d5e1c:
    if (ctx->pc == 0x3D5E1Cu) {
        ctx->pc = 0x3D5E20u;
        goto label_3d5e20;
    }
    ctx->pc = 0x3D5E18u;
    SET_GPR_U32(ctx, 31, 0x3D5E20u);
    ctx->pc = 0x3D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D56D0u, 0x3D5E18u, 0x3D5E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5E20u;
label_3d5e20:
    // 0x3d5e20: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
label_3d5e24:
    if (ctx->pc == 0x3D5E24u) {
        ctx->pc = 0x3D5E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5E20u;
        // 0x3d5e24: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5E28u;
        goto label_3d5e28;
    }
    ctx->pc = 0x3D5E20u;
    {
        const bool branch_taken_0x3d5e20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5E20u;
        // 0x3d5e24: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5e20) {
            ctx->pc = 0x3D5DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5df8;
        }
    }
    ctx->pc = 0x3D5E28u;
label_3d5e28:
    // 0x3d5e28: 0xc0f56b8  jal         func_3D5AE0
label_3d5e2c:
    if (ctx->pc == 0x3D5E2Cu) {
        ctx->pc = 0x3D5E30u;
        goto label_3d5e30;
    }
    ctx->pc = 0x3D5E28u;
    SET_GPR_U32(ctx, 31, 0x3D5E30u);
    ctx->pc = 0x3D5AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5AE0u, 0x3D5E28u, 0x3D5E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5E30u;
label_3d5e30:
    // 0x3d5e30: 0xc0f55b4  jal         func_3D56D0
label_3d5e34:
    if (ctx->pc == 0x3D5E34u) {
        ctx->pc = 0x3D5E38u;
        goto label_3d5e38;
    }
    ctx->pc = 0x3D5E30u;
    SET_GPR_U32(ctx, 31, 0x3D5E38u);
    ctx->pc = 0x3D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D56D0u, 0x3D5E30u, 0x3D5E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5E38u;
label_3d5e38:
    // 0x3d5e38: 0xc0f56d0  jal         func_3D5B40
label_3d5e3c:
    if (ctx->pc == 0x3D5E3Cu) {
        ctx->pc = 0x3D5E40u;
        goto label_3d5e40;
    }
    ctx->pc = 0x3D5E38u;
    SET_GPR_U32(ctx, 31, 0x3D5E40u);
    ctx->pc = 0x3D5B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5B40u, 0x3D5E38u, 0x3D5E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5E40u;
label_3d5e40:
    // 0x3d5e40: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3d5e40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5e44:
    // 0x3d5e44: 0x12540012  beq         $s2, $s4, . + 4 + (0x12 << 2)
label_3d5e48:
    if (ctx->pc == 0x3D5E48u) {
        ctx->pc = 0x3D5E4Cu;
        goto label_3d5e4c;
    }
    ctx->pc = 0x3D5E44u;
    {
        const bool branch_taken_0x3d5e44 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        if (branch_taken_0x3d5e44) {
            ctx->pc = 0x3D5E90u;
            goto label_3d5e90;
        }
    }
    ctx->pc = 0x3D5E4Cu;
label_3d5e4c:
    // 0x3d5e4c: 0x1a600010  blez        $s3, . + 4 + (0x10 << 2)
label_3d5e50:
    if (ctx->pc == 0x3D5E50u) {
        ctx->pc = 0x3D5E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5E4Cu;
        // 0x3d5e50: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5E54u;
        goto label_3d5e54;
    }
    ctx->pc = 0x3D5E4Cu;
    {
        const bool branch_taken_0x3d5e4c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3D5E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5E4Cu;
        // 0x3d5e50: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5e4c) {
            ctx->pc = 0x3D5E90u;
            goto label_3d5e90;
        }
    }
    ctx->pc = 0x3D5E54u;
label_3d5e54:
    // 0x3d5e54: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x3d5e54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d5e58:
    // 0x3d5e58: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3d5e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d5e5c:
    // 0x3d5e5c: 0x0  nop
    ctx->pc = 0x3d5e5cu;
    // NOP
label_3d5e60:
    // 0x3d5e60: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3d5e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d5e64:
    // 0x3d5e64: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x3d5e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3d5e68:
    // 0x3d5e68: 0xc0f5e48  jal         func_3D7920
label_3d5e6c:
    if (ctx->pc == 0x3D5E6Cu) {
        ctx->pc = 0x3D5E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5E68u;
        // 0x3d5e6c: 0x8e860008  lw          $a2, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5E70u;
        goto label_3d5e70;
    }
    ctx->pc = 0x3D5E68u;
    SET_GPR_U32(ctx, 31, 0x3D5E70u);
    ctx->pc = 0x3D5E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5E68u;
    // 0x3d5e6c: 0x8e860008  lw          $a2, 0x8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7920u, 0x3D5E68u, 0x3D5E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5E70u;
label_3d5e70:
    // 0x3d5e70: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3d5e74:
    if (ctx->pc == 0x3D5E74u) {
        ctx->pc = 0x3D5E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5E70u;
        // 0x3d5e74: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5E78u;
        goto label_3d5e78;
    }
    ctx->pc = 0x3D5E70u;
    {
        const bool branch_taken_0x3d5e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5e70) {
            ctx->pc = 0x3D5E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D5E70u;
            // 0x3d5e74: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D5E88u;
            goto label_3d5e88;
        }
    }
    ctx->pc = 0x3D5E78u;
label_3d5e78:
    // 0x3d5e78: 0xc0f5762  jal         func_3D5D88
label_3d5e7c:
    if (ctx->pc == 0x3D5E7Cu) {
        ctx->pc = 0x3D5E80u;
        goto label_3d5e80;
    }
    ctx->pc = 0x3D5E78u;
    SET_GPR_U32(ctx, 31, 0x3D5E80u);
    ctx->pc = 0x3D5D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5D88u, 0x3D5E78u, 0x3D5E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5E80u;
label_3d5e80:
    // 0x3d5e80: 0xc0f55b4  jal         func_3D56D0
label_3d5e84:
    if (ctx->pc == 0x3D5E84u) {
        ctx->pc = 0x3D5E88u;
        goto label_3d5e88;
    }
    ctx->pc = 0x3D5E80u;
    SET_GPR_U32(ctx, 31, 0x3D5E88u);
    ctx->pc = 0x3D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D56D0u, 0x3D5E80u, 0x3D5E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5E88u;
label_3d5e88:
    // 0x3d5e88: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
label_3d5e8c:
    if (ctx->pc == 0x3D5E8Cu) {
        ctx->pc = 0x3D5E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5E88u;
        // 0x3d5e8c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5E90u;
        goto label_3d5e90;
    }
    ctx->pc = 0x3D5E88u;
    {
        const bool branch_taken_0x3d5e88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5E88u;
        // 0x3d5e8c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5e88) {
            ctx->pc = 0x3D5E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5e60;
        }
    }
    ctx->pc = 0x3D5E90u;
label_3d5e90:
    // 0x3d5e90: 0xc0f5846  jal         func_3D6118
label_3d5e94:
    if (ctx->pc == 0x3D5E94u) {
        ctx->pc = 0x3D5E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5E90u;
        // 0x3d5e94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5E98u;
        goto label_3d5e98;
    }
    ctx->pc = 0x3D5E90u;
    SET_GPR_U32(ctx, 31, 0x3D5E98u);
    ctx->pc = 0x3D5E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5E90u;
    // 0x3d5e94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6118u, 0x3D5E90u, 0x3D5E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5E98u;
label_3d5e98:
    // 0x3d5e98: 0x1a600025  blez        $s3, . + 4 + (0x25 << 2)
label_3d5e9c:
    if (ctx->pc == 0x3D5E9Cu) {
        ctx->pc = 0x3D5E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5E98u;
        // 0x3d5e9c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5EA0u;
        goto label_3d5ea0;
    }
    ctx->pc = 0x3D5E98u;
    {
        const bool branch_taken_0x3d5e98 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3D5E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5E98u;
        // 0x3d5e9c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5e98) {
            ctx->pc = 0x3D5F30u;
            goto label_3d5f30;
        }
    }
    ctx->pc = 0x3D5EA0u;
label_3d5ea0:
    // 0x3d5ea0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3d5ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3d5ea4:
    // 0x3d5ea4: 0x0  nop
    ctx->pc = 0x3d5ea4u;
    // NOP
label_3d5ea8:
    // 0x3d5ea8: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x3d5ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3d5eac:
    // 0x3d5eac: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x3d5eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_3d5eb0:
    // 0x3d5eb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d5eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d5eb4:
    // 0x3d5eb4: 0xc0f5e48  jal         func_3D7920
label_3d5eb8:
    if (ctx->pc == 0x3D5EB8u) {
        ctx->pc = 0x3D5EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5EB4u;
        // 0x3d5eb8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5EBCu;
        goto label_3d5ebc;
    }
    ctx->pc = 0x3D5EB4u;
    SET_GPR_U32(ctx, 31, 0x3D5EBCu);
    ctx->pc = 0x3D5EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5EB4u;
    // 0x3d5eb8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7920u, 0x3D5EB4u, 0x3D5EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5EBCu;
label_3d5ebc:
    // 0x3d5ebc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_3d5ec0:
    if (ctx->pc == 0x3D5EC0u) {
        ctx->pc = 0x3D5EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5EBCu;
        // 0x3d5ec0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5EC4u;
        goto label_3d5ec4;
    }
    ctx->pc = 0x3D5EBCu;
    {
        const bool branch_taken_0x3d5ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5EBCu;
        // 0x3d5ec0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5ebc) {
            ctx->pc = 0x3D5F20u;
            goto label_3d5f20;
        }
    }
    ctx->pc = 0x3D5EC4u;
label_3d5ec4:
    // 0x3d5ec4: 0x3c120048  lui         $s2, 0x48
    ctx->pc = 0x3d5ec4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
label_3d5ec8:
    // 0x3d5ec8: 0x24512458  addiu       $s1, $v0, 0x2458
    ctx->pc = 0x3d5ec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 9304));
label_3d5ecc:
    // 0x3d5ecc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3d5eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d5ed0:
    // 0x3d5ed0: 0xc0f56de  jal         func_3D5B78
label_3d5ed4:
    if (ctx->pc == 0x3D5ED4u) {
        ctx->pc = 0x3D5ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5ED0u;
        // 0x3d5ed4: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5ED8u;
        goto label_3d5ed8;
    }
    ctx->pc = 0x3D5ED0u;
    SET_GPR_U32(ctx, 31, 0x3D5ED8u);
    ctx->pc = 0x3D5ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5ED0u;
    // 0x3d5ed4: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5B78u, 0x3D5ED0u, 0x3D5ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5ED8u;
label_3d5ed8:
    // 0x3d5ed8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d5ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5edc:
    // 0x3d5edc: 0x10000003  b           . + 4 + (0x3 << 2)
label_3d5ee0:
    if (ctx->pc == 0x3D5EE0u) {
        ctx->pc = 0x3D5EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5EDCu;
        // 0x3d5ee0: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5EE4u;
        goto label_3d5ee4;
    }
    ctx->pc = 0x3D5EDCu;
    {
        const bool branch_taken_0x3d5edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5EDCu;
        // 0x3d5ee0: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5edc) {
            ctx->pc = 0x3D5EECu;
            goto label_3d5eec;
        }
    }
    ctx->pc = 0x3D5EE4u;
label_3d5ee4:
    // 0x3d5ee4: 0xc0f55b4  jal         func_3D56D0
label_3d5ee8:
    if (ctx->pc == 0x3D5EE8u) {
        ctx->pc = 0x3D5EECu;
        goto label_3d5eec;
    }
    ctx->pc = 0x3D5EE4u;
    SET_GPR_U32(ctx, 31, 0x3D5EECu);
    ctx->pc = 0x3D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D56D0u, 0x3D5EE4u, 0x3D5EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5EECu;
label_3d5eec:
    // 0x3d5eec: 0x26422470  addiu       $v0, $s2, 0x2470
    ctx->pc = 0x3d5eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 9328));
label_3d5ef0:
    // 0x3d5ef0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3d5ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3d5ef4:
    // 0x3d5ef4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d5ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d5ef8:
    // 0x3d5ef8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3d5ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3d5efc:
    // 0x3d5efc: 0x40f809  jalr        $v0
label_3d5f00:
    if (ctx->pc == 0x3D5F00u) {
        ctx->pc = 0x3D5F04u;
        goto label_3d5f04;
    }
    ctx->pc = 0x3D5EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D5F04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5EFCu, 0x3D5F04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D5F04u;
label_3d5f04:
    // 0x3d5f04: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x3d5f04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
label_3d5f08:
    // 0x3d5f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d5f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d5f0c:
    // 0x3d5f0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3d5f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5f10:
    // 0x3d5f10: 0xc0f570c  jal         func_3D5C30
label_3d5f14:
    if (ctx->pc == 0x3D5F14u) {
        ctx->pc = 0x3D5F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5F10u;
        // 0x3d5f14: 0x24c660d0  addiu       $a2, $a2, 0x60D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5F18u;
        goto label_3d5f18;
    }
    ctx->pc = 0x3D5F10u;
    SET_GPR_U32(ctx, 31, 0x3D5F18u);
    ctx->pc = 0x3D5F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5F10u;
    // 0x3d5f14: 0x24c660d0  addiu       $a2, $a2, 0x60D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5C30u, 0x3D5F10u, 0x3D5F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5F18u;
label_3d5f18:
    // 0x3d5f18: 0xc0f55b4  jal         func_3D56D0
label_3d5f1c:
    if (ctx->pc == 0x3D5F1Cu) {
        ctx->pc = 0x3D5F20u;
        goto label_3d5f20;
    }
    ctx->pc = 0x3D5F18u;
    SET_GPR_U32(ctx, 31, 0x3D5F20u);
    ctx->pc = 0x3D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D56D0u, 0x3D5F18u, 0x3D5F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5F20u;
label_3d5f20:
    // 0x3d5f20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3d5f20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3d5f24:
    // 0x3d5f24: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x3d5f24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_3d5f28:
    // 0x3d5f28: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_3d5f2c:
    if (ctx->pc == 0x3D5F2Cu) {
        ctx->pc = 0x3D5F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5F28u;
        // 0x3d5f2c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5F30u;
        goto label_3d5f30;
    }
    ctx->pc = 0x3D5F28u;
    {
        const bool branch_taken_0x3d5f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5F28u;
        // 0x3d5f2c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5f28) {
            ctx->pc = 0x3D5EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5ea8;
        }
    }
    ctx->pc = 0x3D5F30u;
label_3d5f30:
    // 0x3d5f30: 0xc0f56a6  jal         func_3D5A98
label_3d5f34:
    if (ctx->pc == 0x3D5F34u) {
        ctx->pc = 0x3D5F38u;
        goto label_3d5f38;
    }
    ctx->pc = 0x3D5F30u;
    SET_GPR_U32(ctx, 31, 0x3D5F38u);
    ctx->pc = 0x3D5A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5A98u, 0x3D5F30u, 0x3D5F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5F38u;
label_3d5f38:
    // 0x3d5f38: 0xc0f55b4  jal         func_3D56D0
label_3d5f3c:
    if (ctx->pc == 0x3D5F3Cu) {
        ctx->pc = 0x3D5F40u;
        goto label_3d5f40;
    }
    ctx->pc = 0x3D5F38u;
    SET_GPR_U32(ctx, 31, 0x3D5F40u);
    ctx->pc = 0x3D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D56D0u, 0x3D5F38u, 0x3D5F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5F40u;
label_3d5f40:
    // 0x3d5f40: 0x26422470  addiu       $v0, $s2, 0x2470
    ctx->pc = 0x3d5f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 9328));
label_3d5f44:
    // 0x3d5f44: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
label_3d5f48:
    if (ctx->pc == 0x3D5F48u) {
        ctx->pc = 0x3D5F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5F44u;
        // 0x3d5f48: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5F4Cu;
        goto label_3d5f4c;
    }
    ctx->pc = 0x3D5F44u;
    {
        const bool branch_taken_0x3d5f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5F44u;
        // 0x3d5f48: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5f44) {
            ctx->pc = 0x3D5EE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5ee4;
        }
    }
    ctx->pc = 0x3D5F4Cu;
label_3d5f4c:
    // 0x3d5f4c: 0xc0f5730  jal         func_3D5CC0
label_3d5f50:
    if (ctx->pc == 0x3D5F50u) {
        ctx->pc = 0x3D5F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5F4Cu;
        // 0x3d5f50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5F54u;
        goto label_3d5f54;
    }
    ctx->pc = 0x3D5F4Cu;
    SET_GPR_U32(ctx, 31, 0x3D5F54u);
    ctx->pc = 0x3D5F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5F4Cu;
    // 0x3d5f50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5CC0u, 0x3D5F4Cu, 0x3D5F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5F54u;
label_3d5f54:
    // 0x3d5f54: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_3d5f58:
    if (ctx->pc == 0x3D5F58u) {
        ctx->pc = 0x3D5F5Cu;
        goto label_3d5f5c;
    }
    ctx->pc = 0x3D5F54u;
    {
        const bool branch_taken_0x3d5f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5f54) {
            ctx->pc = 0x3D5F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5f38;
        }
    }
    ctx->pc = 0x3D5F5Cu;
label_3d5f5c:
    // 0x3d5f5c: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
label_3d5f60:
    if (ctx->pc == 0x3D5F60u) {
        ctx->pc = 0x3D5F64u;
        goto label_fallthrough_0x3d5f5c;
    }
    ctx->pc = 0x3D5F5Cu;
    {
        const bool branch_taken_0x3d5f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5f5c) {
            ctx->pc = 0x3D5E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5e30;
        }
    }
label_fallthrough_0x3d5f5c:
    ctx->pc = 0x3D5F64u;
}
