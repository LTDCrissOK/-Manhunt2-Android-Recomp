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

// Function: sub_00205CF0
// Address: 0x205cf0 - 0x205e90
void sub_00205CF0_0x205cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205CF0_0x205cf0");
#endif

    switch (ctx->pc) {
        case 0x205d38u: goto label_205d38;
        case 0x205d58u: goto label_205d58;
        case 0x205d6cu: goto label_205d6c;
        case 0x205d90u: goto label_205d90;
        case 0x205d9cu: goto label_205d9c;
        case 0x205db0u: goto label_205db0;
        case 0x205db8u: goto label_205db8;
        case 0x205dfcu: goto label_205dfc;
        case 0x205e18u: goto label_205e18;
        case 0x205e24u: goto label_205e24;
        case 0x205e2cu: goto label_205e2c;
        case 0x205e38u: goto label_205e38;
        case 0x205e40u: goto label_205e40;
        case 0x205e48u: goto label_205e48;
        case 0x205e54u: goto label_205e54;
        case 0x205e5cu: goto label_205e5c;
        case 0x205e64u: goto label_205e64;
        default: break;
    }

    ctx->pc = 0x205cf0u;

    // 0x205cf0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x205cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x205cf4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x205cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x205cf8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x205cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x205cfc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x205cfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205d00: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x205d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x205d04: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x205d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x205d08: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x205d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x205d0c: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x205d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x205d10: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x205d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x205d14: 0x92420018  lbu         $v0, 0x18($s2)
    ctx->pc = 0x205d14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x205d18: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x205D18u;
    {
        const bool branch_taken_0x205d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D18u;
        // 0x205d1c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d18) {
            ctx->pc = 0x205E70u;
            goto label_205e70;
        }
    }
    ctx->pc = 0x205D20u;
    // 0x205d20: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x205d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
    // 0x205d24: 0x3c040009  lui         $a0, 0x9
    ctx->pc = 0x205d24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9 << 16));
    // 0x205d28: 0x344273bc  ori         $v0, $v0, 0x73BC
    ctx->pc = 0x205d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29628);
    // 0x205d2c: 0x348473bc  ori         $a0, $a0, 0x73BC
    ctx->pc = 0x205d2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)29628);
    // 0x205d30: 0xc0b241a  jal         func_2C9068
    ctx->pc = 0x205D30u;
    SET_GPR_U32(ctx, 31, 0x205D38u);
    ctx->pc = 0x205D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205D30u;
    // 0x205d34: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x205D30u, 0x205D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205D38u;
label_205d38:
    // 0x205d38: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x205d38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x205d3c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x205d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x205d40: 0x8c439e40  lw          $v1, -0x61C0($v0)
    ctx->pc = 0x205d40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F9E40u));
    // 0x205d44: 0x54600031  bnel        $v1, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x205D44u;
    {
        const bool branch_taken_0x205d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x205d44) {
            ctx->pc = 0x205D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205D44u;
            // 0x205d48: 0xae400010  sw          $zero, 0x10($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205E0Cu;
            goto label_205e0c;
        }
    }
    ctx->pc = 0x205D4Cu;
    // 0x205d4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x205d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205d50: 0xc0e6a84  jal         func_39AA10
    ctx->pc = 0x205D50u;
    SET_GPR_U32(ctx, 31, 0x205D58u);
    ctx->pc = 0x205D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205D50u;
    // 0x205d54: 0x26500008  addiu       $s0, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AA10u, 0x205D50u, 0x205D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205D58u;
label_205d58:
    // 0x205d58: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x205d58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205d5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x205d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205d60: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x205d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x205d64: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x205D64u;
    SET_GPR_U32(ctx, 31, 0x205D6Cu);
    ctx->pc = 0x205D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205D64u;
    // 0x205d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x205D64u, 0x205D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205D6Cu;
label_205d6c:
    // 0x205d6c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x205d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x205d70: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x205d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x205d74: 0x24630b38  addiu       $v1, $v1, 0xB38
    ctx->pc = 0x205d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2872));
    // 0x205d78: 0x24021dc0  addiu       $v0, $zero, 0x1DC0
    ctx->pc = 0x205d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7616));
    // 0x205d7c: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x205d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x205d80: 0x24041dc0  addiu       $a0, $zero, 0x1DC0
    ctx->pc = 0x205d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7616));
    // 0x205d84: 0xae45000c  sw          $a1, 0xC($s2)
    ctx->pc = 0x205d84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 5));
    // 0x205d88: 0xc0b241a  jal         func_2C9068
    ctx->pc = 0x205D88u;
    SET_GPR_U32(ctx, 31, 0x205D90u);
    ctx->pc = 0x205D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205D88u;
    // 0x205d8c: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x205D88u, 0x205D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205D90u;
label_205d90:
    // 0x205d90: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x205d90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x205d94: 0xc0e6ac4  jal         func_39AB10
    ctx->pc = 0x205D94u;
    SET_GPR_U32(ctx, 31, 0x205D9Cu);
    ctx->pc = 0x205D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205D94u;
    // 0x205d98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AB10u, 0x205D94u, 0x205D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205D9Cu;
label_205d9c:
    // 0x205d9c: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x205d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x205da0: 0x3c140020  lui         $s4, 0x20
    ctx->pc = 0x205da0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32 << 16));
    // 0x205da4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x205DA4u;
    {
        const bool branch_taken_0x205da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DA4u;
        // 0x205da8: 0x3c150020  lui         $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205da4) {
            ctx->pc = 0x205DDCu;
            goto label_205ddc;
        }
    }
    ctx->pc = 0x205DACu;
    // 0x205dac: 0x0  nop
    ctx->pc = 0x205dacu;
    // NOP
label_205db0:
    // 0x205db0: 0xc0ee0d2  jal         func_3B8348
    ctx->pc = 0x205DB0u;
    SET_GPR_U32(ctx, 31, 0x205DB8u);
    ctx->pc = 0x205DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205DB0u;
    // 0x205db4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8348u, 0x205DB0u, 0x205DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205DB8u;
label_205db8:
    // 0x205db8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x205DB8u;
    {
        const bool branch_taken_0x205db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DB8u;
        // 0x205dbc: 0x1318c0  sll         $v1, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205db8) {
            ctx->pc = 0x205DD8u;
            goto label_205dd8;
        }
    }
    ctx->pc = 0x205DC0u;
    // 0x205dc0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x205dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205dc4: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x205dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x205dc8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x205dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x205dcc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x205dccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205dd0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x205dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x205dd4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x205dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_205dd8:
    // 0x205dd8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x205dd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_205ddc:
    // 0x205ddc: 0x2a620088  slti        $v0, $s3, 0x88
    ctx->pc = 0x205ddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)136) ? 1 : 0);
    // 0x205de0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x205DE0u;
    {
        const bool branch_taken_0x205de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DE0u;
        // 0x205de4: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205de0) {
            ctx->pc = 0x205E1Cu;
            goto label_205e1c;
        }
    }
    ctx->pc = 0x205DE8u;
    // 0x205de8: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x205de8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x205dec: 0x24420440  addiu       $v0, $v0, 0x440
    ctx->pc = 0x205decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
    // 0x205df0: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x205df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x205df4: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x205DF4u;
    SET_GPR_U32(ctx, 31, 0x205DFCu);
    ctx->pc = 0x205DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205DF4u;
    // 0x205df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x205DF4u, 0x205DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205DFCu;
label_205dfc:
    // 0x205dfc: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x205DFCu;
    {
        const bool branch_taken_0x205dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205dfc) {
            ctx->pc = 0x205E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205DFCu;
            // 0x205e00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205db0;
        }
    }
    ctx->pc = 0x205E04u;
    // 0x205e04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x205E04u;
    {
        const bool branch_taken_0x205e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205e04) {
            ctx->pc = 0x205E1Cu;
            goto label_205e1c;
        }
    }
    ctx->pc = 0x205E0Cu;
label_205e0c:
    // 0x205e0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x205e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205e10: 0xc0e6b02  jal         func_39AC08
    ctx->pc = 0x205E10u;
    SET_GPR_U32(ctx, 31, 0x205E18u);
    ctx->pc = 0x205E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205E10u;
    // 0x205e14: 0x3c140020  lui         $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AC08u, 0x205E10u, 0x205E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205E18u;
label_205e18:
    // 0x205e18: 0x3c150020  lui         $s5, 0x20
    ctx->pc = 0x205e18u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32 << 16));
label_205e1c:
    // 0x205e1c: 0xc0e5e94  jal         func_397A50
    ctx->pc = 0x205E1Cu;
    SET_GPR_U32(ctx, 31, 0x205E24u);
    ctx->pc = 0x205E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205E1Cu;
    // 0x205e20: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397A50u, 0x205E1Cu, 0x205E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205E24u;
label_205e24:
    // 0x205e24: 0xc0eeb40  jal         func_3BAD00
    ctx->pc = 0x205E24u;
    SET_GPR_U32(ctx, 31, 0x205E2Cu);
    ctx->pc = 0x205E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205E24u;
    // 0x205e28: 0x26845f20  addiu       $a0, $s4, 0x5F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 24352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BAD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BAD00u, 0x205E24u, 0x205E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205E2Cu;
label_205e2c:
    // 0x205e2c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x205e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x205e30: 0xc0e5ede  jal         func_397B78
    ctx->pc = 0x205E30u;
    SET_GPR_U32(ctx, 31, 0x205E38u);
    ctx->pc = 0x205E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205E30u;
    // 0x205e34: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397B78u, 0x205E30u, 0x205E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205E38u;
label_205e38:
    // 0x205e38: 0xc0e5c5c  jal         func_397170
    ctx->pc = 0x205E38u;
    SET_GPR_U32(ctx, 31, 0x205E40u);
    ctx->pc = 0x205E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205E38u;
    // 0x205e3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397170u, 0x205E38u, 0x205E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205E40u;
label_205e40:
    // 0x205e40: 0xc0e5816  jal         func_396058
    ctx->pc = 0x205E40u;
    SET_GPR_U32(ctx, 31, 0x205E48u);
    ctx->pc = 0x396058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396058u, 0x205E40u, 0x205E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205E48u;
label_205e48:
    // 0x205e48: 0x26a45f48  addiu       $a0, $s5, 0x5F48
    ctx->pc = 0x205e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 24392));
    // 0x205e4c: 0xc0e5c56  jal         func_397158
    ctx->pc = 0x205E4Cu;
    SET_GPR_U32(ctx, 31, 0x205E54u);
    ctx->pc = 0x205E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205E4Cu;
    // 0x205e50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397158u, 0x205E4Cu, 0x205E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205E54u;
label_205e54:
    // 0x205e54: 0xc0e7b10  jal         func_39EC40
    ctx->pc = 0x205E54u;
    SET_GPR_U32(ctx, 31, 0x205E5Cu);
    ctx->pc = 0x39EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EC40u, 0x205E54u, 0x205E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205E5Cu;
label_205e5c:
    // 0x205e5c: 0xc0e4f50  jal         func_393D40
    ctx->pc = 0x205E5Cu;
    SET_GPR_U32(ctx, 31, 0x205E64u);
    ctx->pc = 0x393D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393D40u, 0x205E5Cu, 0x205E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205E64u;
label_205e64:
    // 0x205e64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205e68: 0xa2420018  sb          $v0, 0x18($s2)
    ctx->pc = 0x205e68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x205e6c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x205e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_205e70:
    // 0x205e70: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x205e70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x205e74: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x205e74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x205e78: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x205e78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x205e7c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x205e7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x205e80: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x205e80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x205e84: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x205e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x205e88: 0x3e00008  jr          $ra
    ctx->pc = 0x205E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E88u;
        // 0x205e8c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205E90u;
}
