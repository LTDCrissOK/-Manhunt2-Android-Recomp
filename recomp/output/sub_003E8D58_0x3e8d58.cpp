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

// Function: sub_003E8D58
// Address: 0x3e8d58 - 0x3e8e88
void sub_003E8D58_0x3e8d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8D58_0x3e8d58");
#endif

    switch (ctx->pc) {
        case 0x3e8d90u: goto label_3e8d90;
        case 0x3e8d9cu: goto label_3e8d9c;
        case 0x3e8dd0u: goto label_3e8dd0;
        case 0x3e8e44u: goto label_3e8e44;
        case 0x3e8e50u: goto label_3e8e50;
        default: break;
    }

    ctx->pc = 0x3e8d58u;

    // 0x3e8d58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e8d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e8d5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e8d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e8d60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e8d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e8d64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e8d64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8d68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e8d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e8d6c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e8d6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8d70: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3e8d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3e8d74: 0x2a430200  slti        $v1, $s2, 0x200
    ctx->pc = 0x3e8d74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x3e8d78: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x3e8d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x3e8d7c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e8d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3e8d80: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3E8D80u;
    {
        const bool branch_taken_0x3e8d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E8D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8D80u;
        // 0x3e8d84: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8d80) {
            ctx->pc = 0x3E8DBCu;
            goto label_3e8dbc;
        }
    }
    ctx->pc = 0x3E8D88u;
    // 0x3e8d88: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E8D88u;
    SET_GPR_U32(ctx, 31, 0x3E8D90u);
    ctx->pc = 0x3E8D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8D88u;
    // 0x3e8d8c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E8D88u, 0x3E8D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8D90u;
label_3e8d90:
    // 0x3e8d90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e8d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8d94: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E8D94u;
    SET_GPR_U32(ctx, 31, 0x3E8D9Cu);
    ctx->pc = 0x3E8D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8D94u;
    // 0x3e8d98: 0x122040  sll         $a0, $s2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E8D94u, 0x3E8D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8D9Cu;
label_3e8d9c:
    // 0x3e8d9c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3e8d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e8da0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3e8da0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8da4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x3e8da4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x3e8da8: 0xa6120004  sh          $s2, 0x4($s0)
    ctx->pc = 0x3e8da8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 18));
    // 0x3e8dac: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x3e8dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x3e8db0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3e8db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3e8db4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3E8DB4u;
    {
        const bool branch_taken_0x3e8db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8DB4u;
        // 0x3e8db8: 0xa6120006  sh          $s2, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8db4) {
            ctx->pc = 0x3E8E70u;
            goto label_3e8e70;
        }
    }
    ctx->pc = 0x3E8DBCu;
label_3e8dbc:
    // 0x3e8dbc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3e8dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e8dc0: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3E8DC0u;
    {
        const bool branch_taken_0x3e8dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8DC0u;
        // 0x3e8dc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8dc0) {
            ctx->pc = 0x3E8E3Cu;
            goto label_3e8e3c;
        }
    }
    ctx->pc = 0x3E8DC8u;
    // 0x3e8dc8: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x3e8dc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x3e8dcc: 0x0  nop
    ctx->pc = 0x3e8dccu;
    // NOP
label_3e8dd0:
    // 0x3e8dd0: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x3e8dd0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e8dd4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3e8dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3e8dd8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x3e8dd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e8ddc: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E8DDCu;
    {
        const bool branch_taken_0x3e8ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e8ddc) {
            ctx->pc = 0x3E8DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E8DDCu;
            // 0x3e8de0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E8E30u;
            goto label_3e8e30;
        }
    }
    ctx->pc = 0x3E8DE4u;
    // 0x3e8de4: 0x5465000a  bnel        $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3E8DE4u;
    {
        const bool branch_taken_0x3e8de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x3e8de4) {
            ctx->pc = 0x3E8DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E8DE4u;
            // 0x3e8de8: 0x94820006  lhu         $v0, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E8E10u;
            goto label_3e8e10;
        }
    }
    ctx->pc = 0x3E8DECu;
    // 0x3e8dec: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E8DECu;
    {
        const bool branch_taken_0x3e8dec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8DECu;
        // 0x3e8df0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8dec) {
            ctx->pc = 0x3E8DFCu;
            goto label_3e8dfc;
        }
    }
    ctx->pc = 0x3E8DF4u;
    // 0x3e8df4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E8DF4u;
    {
        const bool branch_taken_0x3e8df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8DF4u;
        // 0x3e8df8: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8df4) {
            ctx->pc = 0x3E8E00u;
            goto label_3e8e00;
        }
    }
    ctx->pc = 0x3E8DFCu;
label_3e8dfc:
    // 0x3e8dfc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3e8dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3e8e00:
    // 0x3e8e00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e8e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e8e04: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3e8e04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3e8e08: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x3e8e08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x3e8e0c: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x3e8e0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_3e8e10:
    // 0x3e8e10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3e8e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e8e14: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e8e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3e8e18: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x3e8e18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e8e1c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e8e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e8e20: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x3e8e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3e8e24: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3e8e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3e8e28: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3E8E28u;
    {
        const bool branch_taken_0x3e8e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8E28u;
        // 0x3e8e2c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8e28) {
            ctx->pc = 0x3E8E70u;
            goto label_3e8e70;
        }
    }
    ctx->pc = 0x3E8E30u;
label_3e8e30:
    // 0x3e8e30: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x3e8e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3e8e34: 0x5480ffe6  bnel        $a0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E8E34u;
    {
        const bool branch_taken_0x3e8e34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e8e34) {
            ctx->pc = 0x3E8E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E8E34u;
            // 0x3e8e38: 0x94830006  lhu         $v1, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E8DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e8dd0;
        }
    }
    ctx->pc = 0x3E8E3Cu;
label_3e8e3c:
    // 0x3e8e3c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E8E3Cu;
    SET_GPR_U32(ctx, 31, 0x3E8E44u);
    ctx->pc = 0x3E8E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8E3Cu;
    // 0x3e8e40: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E8E3Cu, 0x3E8E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8E44u;
label_3e8e44:
    // 0x3e8e44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e8e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8e48: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E8E48u;
    SET_GPR_U32(ctx, 31, 0x3E8E50u);
    ctx->pc = 0x3E8E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8E48u;
    // 0x3e8e4c: 0x24040400  addiu       $a0, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E8E48u, 0x3E8E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8E50u;
label_3e8e50:
    // 0x3e8e50: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3e8e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e8e54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e8e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8e58: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x3e8e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x3e8e5c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x3e8e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3e8e60: 0xa6120006  sh          $s2, 0x6($s0)
    ctx->pc = 0x3e8e60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 18));
    // 0x3e8e64: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x3e8e64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e8e68: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x3e8e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x3e8e6c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3e8e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_3e8e70:
    // 0x3e8e70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e8e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e8e74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e8e74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e8e78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e8e78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e8e7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3e8e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e8e80: 0x3e00008  jr          $ra
    ctx->pc = 0x3E8E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8E80u;
        // 0x3e8e84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8E88u;
}
