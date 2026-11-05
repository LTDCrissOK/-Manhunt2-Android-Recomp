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

// Function: sub_003A5D40
// Address: 0x3a5d40 - 0x3a5eb0
void sub_003A5D40_0x3a5d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5D40_0x3a5d40");
#endif

    switch (ctx->pc) {
        case 0x3a5d90u: goto label_3a5d90;
        case 0x3a5db0u: goto label_3a5db0;
        case 0x3a5dc0u: goto label_3a5dc0;
        case 0x3a5de0u: goto label_3a5de0;
        case 0x3a5df0u: goto label_3a5df0;
        case 0x3a5df8u: goto label_3a5df8;
        case 0x3a5e04u: goto label_3a5e04;
        case 0x3a5e14u: goto label_3a5e14;
        case 0x3a5e20u: goto label_3a5e20;
        case 0x3a5e3cu: goto label_3a5e3c;
        case 0x3a5e44u: goto label_3a5e44;
        default: break;
    }

    ctx->pc = 0x3a5d40u;

    // 0x3a5d40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a5d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a5d44: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3a5d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3a5d48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3a5d48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5d4c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3a5d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3a5d50: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3a5d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3a5d54: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3a5d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3a5d58: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A5D58u;
    {
        const bool branch_taken_0x3a5d58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5D58u;
        // 0x3a5d5c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5d58) {
            ctx->pc = 0x3A5D70u;
            goto label_3a5d70;
        }
    }
    ctx->pc = 0x3A5D60u;
    // 0x3a5d60: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a5d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a5d64: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3A5D64u;
    {
        const bool branch_taken_0x3a5d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5D64u;
        // 0x3a5d68: 0x24a5dce8  addiu       $a1, $a1, -0x2318 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5d64) {
            ctx->pc = 0x3A5DA8u;
            goto label_3a5da8;
        }
    }
    ctx->pc = 0x3A5D6Cu;
    // 0x3a5d6c: 0x0  nop
    ctx->pc = 0x3a5d6cu;
    // NOP
label_3a5d70:
    // 0x3a5d70: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A5D70u;
    {
        const bool branch_taken_0x3a5d70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5D70u;
        // 0x3a5d74: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5d70) {
            ctx->pc = 0x3A5D88u;
            goto label_3a5d88;
        }
    }
    ctx->pc = 0x3A5D78u;
    // 0x3a5d78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a5d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5d7c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3A5D7Cu;
    {
        const bool branch_taken_0x3a5d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5D7Cu;
        // 0x3a5d80: 0x24a5dd10  addiu       $a1, $a1, -0x22F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5d7c) {
            ctx->pc = 0x3A5DA8u;
            goto label_3a5da8;
        }
    }
    ctx->pc = 0x3A5D84u;
    // 0x3a5d84: 0x0  nop
    ctx->pc = 0x3a5d84u;
    // NOP
label_3a5d88:
    // 0x3a5d88: 0xc0e973a  jal         func_3A5CE8
    ctx->pc = 0x3A5D88u;
    SET_GPR_U32(ctx, 31, 0x3A5D90u);
    ctx->pc = 0x3A5CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5CE8u, 0x3A5D88u, 0x3A5D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5D90u;
label_3a5d90:
    // 0x3a5d90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a5d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5d94: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A5D94u;
    {
        const bool branch_taken_0x3a5d94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5D94u;
        // 0x3a5d98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5d94) {
            ctx->pc = 0x3A5DB8u;
            goto label_3a5db8;
        }
    }
    ctx->pc = 0x3A5D9Cu;
    // 0x3a5d9c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a5d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a5da0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a5da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5da4: 0x24a5dd38  addiu       $a1, $a1, -0x22C8
    ctx->pc = 0x3a5da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958392));
label_3a5da8:
    // 0x3a5da8: 0xc0e960a  jal         func_3A5828
    ctx->pc = 0x3A5DA8u;
    SET_GPR_U32(ctx, 31, 0x3A5DB0u);
    ctx->pc = 0x3A5828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5828u, 0x3A5DA8u, 0x3A5DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5DB0u;
label_3a5db0:
    // 0x3a5db0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x3A5DB0u;
    {
        const bool branch_taken_0x3a5db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5DB0u;
        // 0x3a5db4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5db0) {
            ctx->pc = 0x3A5E98u;
            goto label_3a5e98;
        }
    }
    ctx->pc = 0x3A5DB8u;
label_3a5db8:
    // 0x3a5db8: 0xc0e9a94  jal         func_3A6A50
    ctx->pc = 0x3A5DB8u;
    SET_GPR_U32(ctx, 31, 0x3A5DC0u);
    ctx->pc = 0x3A5DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5DB8u;
    // 0x3a5dbc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A50u, 0x3A5DB8u, 0x3A5DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5DC0u;
label_3a5dc0:
    // 0x3a5dc0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3a5dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3a5dc4: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x3A5DC4u;
    {
        const bool branch_taken_0x3a5dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5dc4) {
            ctx->pc = 0x3A5DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5DC4u;
            // 0x3a5dc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5E50u;
            goto label_3a5e50;
        }
    }
    ctx->pc = 0x3A5DCCu;
    // 0x3a5dcc: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x3a5dccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x3a5dd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a5dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5dd4: 0x26103c10  addiu       $s0, $s0, 0x3C10
    ctx->pc = 0x3a5dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15376));
    // 0x3a5dd8: 0xc0e997e  jal         func_3A65F8
    ctx->pc = 0x3A5DD8u;
    SET_GPR_U32(ctx, 31, 0x3A5DE0u);
    ctx->pc = 0x3A5DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5DD8u;
    // 0x3a5ddc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65F8u, 0x3A5DD8u, 0x3A5DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5DE0u;
label_3a5de0:
    // 0x3a5de0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a5de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a5de4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3a5de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5de8: 0xc0e5ea0  jal         func_397A80
    ctx->pc = 0x3A5DE8u;
    SET_GPR_U32(ctx, 31, 0x3A5DF0u);
    ctx->pc = 0x3A5DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5DE8u;
    // 0x3a5dec: 0x2484dd68  addiu       $a0, $a0, -0x2298 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397A80u, 0x3A5DE8u, 0x3A5DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5DF0u;
label_3a5df0:
    // 0x3a5df0: 0xc0e96cc  jal         func_3A5B30
    ctx->pc = 0x3A5DF0u;
    SET_GPR_U32(ctx, 31, 0x3A5DF8u);
    ctx->pc = 0x3A5DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5DF0u;
    // 0x3a5df4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5B30u, 0x3A5DF0u, 0x3A5DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5DF8u;
label_3a5df8:
    // 0x3a5df8: 0x24044900  addiu       $a0, $zero, 0x4900
    ctx->pc = 0x3a5df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18688));
    // 0x3a5dfc: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A5DFCu;
    SET_GPR_U32(ctx, 31, 0x3A5E04u);
    ctx->pc = 0x3A5E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5DFCu;
    // 0x3a5e00: 0xfe220008  sd          $v0, 0x8($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A5DFCu, 0x3A5E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5E04u;
label_3a5e04:
    // 0x3a5e04: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a5e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a5e08: 0x8c453d50  lw          $a1, 0x3D50($v0)
    ctx->pc = 0x3a5e08u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x413D50u));
    // 0x3a5e0c: 0xc0e8da8  jal         func_3A36A0
    ctx->pc = 0x3A5E0Cu;
    SET_GPR_U32(ctx, 31, 0x3A5E14u);
    ctx->pc = 0x3A5E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5E0Cu;
    // 0x3a5e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A36A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A36A0u, 0x3A5E0Cu, 0x3A5E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5E14u;
label_3a5e14:
    // 0x3a5e14: 0x24044901  addiu       $a0, $zero, 0x4901
    ctx->pc = 0x3a5e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18689));
    // 0x3a5e18: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A5E18u;
    SET_GPR_U32(ctx, 31, 0x3A5E20u);
    ctx->pc = 0x3A5E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5E18u;
    // 0x3a5e1c: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A5E18u, 0x3A5E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5E20u;
label_3a5e20:
    // 0x3a5e20: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x3a5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x3a5e24: 0x443000f  bgezl       $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3A5E24u;
    {
        const bool branch_taken_0x3a5e24 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3a5e24) {
            ctx->pc = 0x3A5E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5E24u;
            // 0x3a5e28: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5E64u;
            goto label_3a5e64;
        }
    }
    ctx->pc = 0x3A5E2Cu;
    // 0x3a5e2c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a5e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a5e30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a5e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5e34: 0xc0e960a  jal         func_3A5828
    ctx->pc = 0x3A5E34u;
    SET_GPR_U32(ctx, 31, 0x3A5E3Cu);
    ctx->pc = 0x3A5E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5E34u;
    // 0x3a5e38: 0x24a5dd90  addiu       $a1, $a1, -0x2270 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5828u, 0x3A5E34u, 0x3A5E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5E3Cu;
label_3a5e3c:
    // 0x3a5e3c: 0xc0e9748  jal         func_3A5D20
    ctx->pc = 0x3A5E3Cu;
    SET_GPR_U32(ctx, 31, 0x3A5E44u);
    ctx->pc = 0x3A5E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5E3Cu;
    // 0x3a5e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5D20u, 0x3A5E3Cu, 0x3A5E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5E44u;
label_3a5e44:
    // 0x3a5e44: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3A5E44u;
    {
        const bool branch_taken_0x3a5e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5E44u;
        // 0x3a5e48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5e44) {
            ctx->pc = 0x3A5E98u;
            goto label_3a5e98;
        }
    }
    ctx->pc = 0x3A5E4Cu;
    // 0x3a5e4c: 0x0  nop
    ctx->pc = 0x3a5e4cu;
    // NOP
label_3a5e50:
    // 0x3a5e50: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x3a5e50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a5e54: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3a5e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a5e58: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x3a5e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x3a5e5c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3a5e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3a5e60: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x3a5e60u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
label_3a5e64:
    // 0x3a5e64: 0xde230008  ld          $v1, 0x8($s1)
    ctx->pc = 0x3a5e64u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3a5e68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a5e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a5e6c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x3a5e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x3a5e70: 0x646307ff  daddiu      $v1, $v1, 0x7FF
    ctx->pc = 0x3a5e70u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)2047);
    // 0x3a5e74: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x3a5e74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x3a5e78: 0x31d78  dsll        $v1, $v1, 21
    ctx->pc = 0x3a5e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 21);
    // 0x3a5e7c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3a5e7cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3a5e80: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x3a5e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x3a5e84: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x3a5e84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x3a5e88: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x3a5e88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x3a5e8c: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x3a5e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5e90: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x3a5e90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a5e94: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3a5e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a5e98:
    // 0x3a5e98: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3a5e98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a5e9c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3a5e9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a5ea0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3a5ea0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a5ea4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3a5ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3a5ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5EA8u;
        // 0x3a5eac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5EB0u;
}
