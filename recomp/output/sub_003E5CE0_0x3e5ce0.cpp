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

// Function: sub_003E5CE0
// Address: 0x3e5ce0 - 0x3e5ea0
void sub_003E5CE0_0x3e5ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5CE0_0x3e5ce0");
#endif

    switch (ctx->pc) {
        case 0x3e5d2cu: goto label_3e5d2c;
        case 0x3e5d40u: goto label_3e5d40;
        case 0x3e5d58u: goto label_3e5d58;
        case 0x3e5d64u: goto label_3e5d64;
        case 0x3e5da8u: goto label_3e5da8;
        case 0x3e5e20u: goto label_3e5e20;
        case 0x3e5e30u: goto label_3e5e30;
        case 0x3e5e40u: goto label_3e5e40;
        case 0x3e5e4cu: goto label_3e5e4c;
        default: break;
    }

    ctx->pc = 0x3e5ce0u;

    // 0x3e5ce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e5ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e5ce4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e5ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e5ce8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3e5ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3e5cec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e5cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5cf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e5cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e5cf4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e5cf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5cf8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e5cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e5cfc: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x3e5cfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3e5d00: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3e5d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3e5d04: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3e5d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3e5d08: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3e5d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3e5d0c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3e5d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3e5d10: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x3e5d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3e5d14: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e5d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e5d18: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E5D18u;
    {
        const bool branch_taken_0x3e5d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E5D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5D18u;
        // 0x3e5d1c: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5d18) {
            ctx->pc = 0x3E5D90u;
            goto label_3e5d90;
        }
    }
    ctx->pc = 0x3E5D20u;
    // 0x3e5d20: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e5d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e5d24: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E5D24u;
    SET_GPR_U32(ctx, 31, 0x3E5D2Cu);
    ctx->pc = 0x3E5D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5D24u;
    // 0x3e5d28: 0x2632ffff  addiu       $s2, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E5D24u, 0x3E5D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5D2Cu;
label_3e5d2c:
    // 0x3e5d2c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e5d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e5d30: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e5d30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5d34: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x3e5d34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3e5d38: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E5D38u;
    SET_GPR_U32(ctx, 31, 0x3E5D40u);
    ctx->pc = 0x3E5D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5D38u;
    // 0x3e5d3c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E5D38u, 0x3E5D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5D40u;
label_3e5d40:
    // 0x3e5d40: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x3e5d40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e5d44: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3e5d44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x3e5d48: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E5D48u;
    {
        const bool branch_taken_0x3e5d48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5D48u;
        // 0x3e5d4c: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5d48) {
            ctx->pc = 0x3E5D70u;
            goto label_3e5d70;
        }
    }
    ctx->pc = 0x3E5D50u;
    // 0x3e5d50: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e5d50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e5d54: 0x0  nop
    ctx->pc = 0x3e5d54u;
    // NOP
label_3e5d58:
    // 0x3e5d58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e5d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5d5c: 0xc0afc20  jal         func_2BF080
    ctx->pc = 0x3E5D5Cu;
    SET_GPR_U32(ctx, 31, 0x3E5D64u);
    ctx->pc = 0x3E5D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5D5Cu;
    // 0x3e5d60: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF080u, 0x3E5D5Cu, 0x3E5D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5D64u;
label_3e5d64:
    // 0x3e5d64: 0x0  nop
    ctx->pc = 0x3e5d64u;
    // NOP
    // 0x3e5d68: 0x1656fffb  bne         $s2, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E5D68u;
    {
        const bool branch_taken_0x3e5d68 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E5D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5D68u;
        // 0x3e5d6c: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5d68) {
            ctx->pc = 0x3E5D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5d58;
        }
    }
    ctx->pc = 0x3E5D70u;
label_3e5d70:
    // 0x3e5d70: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e5d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e5d74: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3e5d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5d78: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x3e5d78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x3e5d7c: 0xa6910004  sh          $s1, 0x4($s4)
    ctx->pc = 0x3e5d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e5d80: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3e5d80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x3e5d84: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x3e5d84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x3e5d88: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3E5D88u;
    {
        const bool branch_taken_0x3e5d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5D88u;
        // 0x3e5d8c: 0xa6910006  sh          $s1, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5d88) {
            ctx->pc = 0x3E5E78u;
            goto label_3e5e78;
        }
    }
    ctx->pc = 0x3E5D90u;
label_3e5d90:
    // 0x3e5d90: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x3e5d90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e5d94: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E5D94u;
    {
        const bool branch_taken_0x3e5d94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5D94u;
        // 0x3e5d98: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5d94) {
            ctx->pc = 0x3E5E14u;
            goto label_3e5e14;
        }
    }
    ctx->pc = 0x3E5D9Cu;
    // 0x3e5d9c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e5d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e5da0: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x3e5da0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3e5da4: 0x0  nop
    ctx->pc = 0x3e5da4u;
    // NOP
label_3e5da8:
    // 0x3e5da8: 0x94c70004  lhu         $a3, 0x4($a2)
    ctx->pc = 0x3e5da8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3e5dac: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3e5dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3e5db0: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x3e5db0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e5db4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E5DB4u;
    {
        const bool branch_taken_0x3e5db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5db4) {
            ctx->pc = 0x3E5DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5DB4u;
            // 0x3e5db8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5E08u;
            goto label_3e5e08;
        }
    }
    ctx->pc = 0x3E5DBCu;
    // 0x3e5dbc: 0x5467000a  bnel        $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3E5DBCu;
    {
        const bool branch_taken_0x3e5dbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x3e5dbc) {
            ctx->pc = 0x3E5DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5DBCu;
            // 0x3e5dc0: 0x94c20006  lhu         $v0, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5DE8u;
            goto label_3e5de8;
        }
    }
    ctx->pc = 0x3E5DC4u;
    // 0x3e5dc4: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E5DC4u;
    {
        const bool branch_taken_0x3e5dc4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5DC4u;
        // 0x3e5dc8: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5dc4) {
            ctx->pc = 0x3E5DD4u;
            goto label_3e5dd4;
        }
    }
    ctx->pc = 0x3E5DCCu;
    // 0x3e5dcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E5DCCu;
    {
        const bool branch_taken_0x3e5dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5DCCu;
        // 0x3e5dd0: 0xad020008  sw          $v0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5dcc) {
            ctx->pc = 0x3E5DD8u;
            goto label_3e5dd8;
        }
    }
    ctx->pc = 0x3E5DD4u;
label_3e5dd4:
    // 0x3e5dd4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3e5dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3e5dd8:
    // 0x3e5dd8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e5dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e5ddc: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3e5ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3e5de0: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x3e5de0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x3e5de4: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x3e5de4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_3e5de8:
    // 0x3e5de8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3e5de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e5dec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e5decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e5df0: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x3e5df0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e5df4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e5df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e5df8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3e5df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e5dfc: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x3e5dfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e5e00: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3E5E00u;
    {
        const bool branch_taken_0x3e5e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5E00u;
        // 0x3e5e04: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5e00) {
            ctx->pc = 0x3E5E78u;
            goto label_3e5e78;
        }
    }
    ctx->pc = 0x3E5E08u;
label_3e5e08:
    // 0x3e5e08: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3e5e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3e5e0c: 0x54c0ffe6  bnel        $a2, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E5E0Cu;
    {
        const bool branch_taken_0x3e5e0c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5e0c) {
            ctx->pc = 0x3E5E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5E0Cu;
            // 0x3e5e10: 0x94c30006  lhu         $v1, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5da8;
        }
    }
    ctx->pc = 0x3E5E14u;
label_3e5e14:
    // 0x3e5e14: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e5e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e5e18: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E5E18u;
    SET_GPR_U32(ctx, 31, 0x3E5E20u);
    ctx->pc = 0x3E5E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5E18u;
    // 0x3e5e1c: 0x2415000f  addiu       $s5, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E5E18u, 0x3E5E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5E20u;
label_3e5e20:
    // 0x3e5e20: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e5e20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e5e24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e5e24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5e28: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E5E28u;
    SET_GPR_U32(ctx, 31, 0x3E5E30u);
    ctx->pc = 0x3E5E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5E28u;
    // 0x3e5e2c: 0x240401d0  addiu       $a0, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E5E28u, 0x3E5E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5E30u;
label_3e5e30:
    // 0x3e5e30: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e5e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e5e34: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x3e5e34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e5e38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3e5e38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3e5e3c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3e5e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e5e40:
    // 0x3e5e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e5e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5e44: 0xc0afc20  jal         func_2BF080
    ctx->pc = 0x3E5E44u;
    SET_GPR_U32(ctx, 31, 0x3E5E4Cu);
    ctx->pc = 0x3E5E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5E44u;
    // 0x3e5e48: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF080u, 0x3E5E44u, 0x3E5E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5E4Cu;
label_3e5e4c:
    // 0x3e5e4c: 0x0  nop
    ctx->pc = 0x3e5e4cu;
    // NOP
    // 0x3e5e50: 0x16b6fffb  bne         $s5, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E5E50u;
    {
        const bool branch_taken_0x3e5e50 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E5E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5E50u;
        // 0x3e5e54: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5e50) {
            ctx->pc = 0x3E5E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5e40;
        }
    }
    ctx->pc = 0x3E5E58u;
    // 0x3e5e58: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3e5e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e5e5c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e5e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e5e60: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x3e5e60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x3e5e64: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3e5e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5e68: 0xa6510006  sh          $s1, 0x6($s2)
    ctx->pc = 0x3e5e68u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e5e6c: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x3e5e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e5e70: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x3e5e70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x3e5e74: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x3e5e74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_3e5e78:
    // 0x3e5e78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e5e78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e5e7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e5e7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e5e80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e5e80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e5e84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3e5e84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e5e88: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3e5e88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e5e8c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3e5e8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e5e90: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3e5e90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e5e94: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3e5e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3e5e98: 0x3e00008  jr          $ra
    ctx->pc = 0x3E5E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E5E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5E98u;
        // 0x3e5e9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E5E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E5EA0u;
}
