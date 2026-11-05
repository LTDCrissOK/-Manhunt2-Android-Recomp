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

// Function: sub_003E6CA0
// Address: 0x3e6ca0 - 0x3e6e60
void sub_003E6CA0_0x3e6ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6CA0_0x3e6ca0");
#endif

    switch (ctx->pc) {
        case 0x3e6cecu: goto label_3e6cec;
        case 0x3e6d00u: goto label_3e6d00;
        case 0x3e6d18u: goto label_3e6d18;
        case 0x3e6d24u: goto label_3e6d24;
        case 0x3e6d68u: goto label_3e6d68;
        case 0x3e6de0u: goto label_3e6de0;
        case 0x3e6df0u: goto label_3e6df0;
        case 0x3e6e00u: goto label_3e6e00;
        case 0x3e6e0cu: goto label_3e6e0c;
        default: break;
    }

    ctx->pc = 0x3e6ca0u;

    // 0x3e6ca0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e6ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e6ca4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e6ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e6ca8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3e6ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3e6cac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e6cacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6cb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e6cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e6cb4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e6cb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6cb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e6cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e6cbc: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x3e6cbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3e6cc0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3e6cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3e6cc4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3e6cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3e6cc8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3e6cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3e6ccc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3e6cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3e6cd0: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x3e6cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3e6cd4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e6cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e6cd8: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E6CD8u;
    {
        const bool branch_taken_0x3e6cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E6CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6CD8u;
        // 0x3e6cdc: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6cd8) {
            ctx->pc = 0x3E6D50u;
            goto label_3e6d50;
        }
    }
    ctx->pc = 0x3E6CE0u;
    // 0x3e6ce0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e6ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e6ce4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E6CE4u;
    SET_GPR_U32(ctx, 31, 0x3E6CECu);
    ctx->pc = 0x3E6CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6CE4u;
    // 0x3e6ce8: 0x2632ffff  addiu       $s2, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E6CE4u, 0x3E6CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6CECu;
label_3e6cec:
    // 0x3e6cec: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e6cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e6cf0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e6cf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6cf4: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x3e6cf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3e6cf8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E6CF8u;
    SET_GPR_U32(ctx, 31, 0x3E6D00u);
    ctx->pc = 0x3E6CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6CF8u;
    // 0x3e6cfc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E6CF8u, 0x3E6D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6D00u;
label_3e6d00:
    // 0x3e6d00: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x3e6d00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e6d04: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3e6d04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x3e6d08: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E6D08u;
    {
        const bool branch_taken_0x3e6d08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6D08u;
        // 0x3e6d0c: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6d08) {
            ctx->pc = 0x3E6D30u;
            goto label_3e6d30;
        }
    }
    ctx->pc = 0x3E6D10u;
    // 0x3e6d10: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e6d10u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e6d14: 0x0  nop
    ctx->pc = 0x3e6d14u;
    // NOP
label_3e6d18:
    // 0x3e6d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e6d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6d1c: 0xc0afe94  jal         func_2BFA50
    ctx->pc = 0x3E6D1Cu;
    SET_GPR_U32(ctx, 31, 0x3E6D24u);
    ctx->pc = 0x3E6D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6D1Cu;
    // 0x3e6d20: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFA50u, 0x3E6D1Cu, 0x3E6D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6D24u;
label_3e6d24:
    // 0x3e6d24: 0x0  nop
    ctx->pc = 0x3e6d24u;
    // NOP
    // 0x3e6d28: 0x1656fffb  bne         $s2, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E6D28u;
    {
        const bool branch_taken_0x3e6d28 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E6D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6D28u;
        // 0x3e6d2c: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6d28) {
            ctx->pc = 0x3E6D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e6d18;
        }
    }
    ctx->pc = 0x3E6D30u;
label_3e6d30:
    // 0x3e6d30: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e6d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e6d34: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3e6d34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6d38: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x3e6d38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x3e6d3c: 0xa6910004  sh          $s1, 0x4($s4)
    ctx->pc = 0x3e6d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e6d40: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3e6d40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x3e6d44: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x3e6d44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x3e6d48: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3E6D48u;
    {
        const bool branch_taken_0x3e6d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6D48u;
        // 0x3e6d4c: 0xa6910006  sh          $s1, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6d48) {
            ctx->pc = 0x3E6E38u;
            goto label_3e6e38;
        }
    }
    ctx->pc = 0x3E6D50u;
label_3e6d50:
    // 0x3e6d50: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x3e6d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e6d54: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E6D54u;
    {
        const bool branch_taken_0x3e6d54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6D54u;
        // 0x3e6d58: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6d54) {
            ctx->pc = 0x3E6DD4u;
            goto label_3e6dd4;
        }
    }
    ctx->pc = 0x3E6D5Cu;
    // 0x3e6d5c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e6d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e6d60: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x3e6d60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3e6d64: 0x0  nop
    ctx->pc = 0x3e6d64u;
    // NOP
label_3e6d68:
    // 0x3e6d68: 0x94c70004  lhu         $a3, 0x4($a2)
    ctx->pc = 0x3e6d68u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3e6d6c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3e6d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3e6d70: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x3e6d70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e6d74: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E6D74u;
    {
        const bool branch_taken_0x3e6d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e6d74) {
            ctx->pc = 0x3E6D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6D74u;
            // 0x3e6d78: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6DC8u;
            goto label_3e6dc8;
        }
    }
    ctx->pc = 0x3E6D7Cu;
    // 0x3e6d7c: 0x5467000a  bnel        $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3E6D7Cu;
    {
        const bool branch_taken_0x3e6d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x3e6d7c) {
            ctx->pc = 0x3E6D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6D7Cu;
            // 0x3e6d80: 0x94c20006  lhu         $v0, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6DA8u;
            goto label_3e6da8;
        }
    }
    ctx->pc = 0x3E6D84u;
    // 0x3e6d84: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E6D84u;
    {
        const bool branch_taken_0x3e6d84 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6D84u;
        // 0x3e6d88: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6d84) {
            ctx->pc = 0x3E6D94u;
            goto label_3e6d94;
        }
    }
    ctx->pc = 0x3E6D8Cu;
    // 0x3e6d8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E6D8Cu;
    {
        const bool branch_taken_0x3e6d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6D8Cu;
        // 0x3e6d90: 0xad020008  sw          $v0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6d8c) {
            ctx->pc = 0x3E6D98u;
            goto label_3e6d98;
        }
    }
    ctx->pc = 0x3E6D94u;
label_3e6d94:
    // 0x3e6d94: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3e6d94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3e6d98:
    // 0x3e6d98: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e6d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e6d9c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3e6d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3e6da0: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x3e6da0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x3e6da4: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x3e6da4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_3e6da8:
    // 0x3e6da8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3e6da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e6dac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e6dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e6db0: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x3e6db0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e6db4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e6db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e6db8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3e6db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e6dbc: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x3e6dbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e6dc0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3E6DC0u;
    {
        const bool branch_taken_0x3e6dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6DC0u;
        // 0x3e6dc4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6dc0) {
            ctx->pc = 0x3E6E38u;
            goto label_3e6e38;
        }
    }
    ctx->pc = 0x3E6DC8u;
label_3e6dc8:
    // 0x3e6dc8: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3e6dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3e6dcc: 0x54c0ffe6  bnel        $a2, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E6DCCu;
    {
        const bool branch_taken_0x3e6dcc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e6dcc) {
            ctx->pc = 0x3E6DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6DCCu;
            // 0x3e6dd0: 0x94c30006  lhu         $v1, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e6d68;
        }
    }
    ctx->pc = 0x3E6DD4u;
label_3e6dd4:
    // 0x3e6dd4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e6dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e6dd8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E6DD8u;
    SET_GPR_U32(ctx, 31, 0x3E6DE0u);
    ctx->pc = 0x3E6DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6DD8u;
    // 0x3e6ddc: 0x2415000f  addiu       $s5, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E6DD8u, 0x3E6DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6DE0u;
label_3e6de0:
    // 0x3e6de0: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e6de0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e6de4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e6de4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6de8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E6DE8u;
    SET_GPR_U32(ctx, 31, 0x3E6DF0u);
    ctx->pc = 0x3E6DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6DE8u;
    // 0x3e6dec: 0x240401d0  addiu       $a0, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E6DE8u, 0x3E6DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6DF0u;
label_3e6df0:
    // 0x3e6df0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e6df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e6df4: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x3e6df4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e6df8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3e6df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3e6dfc: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3e6dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e6e00:
    // 0x3e6e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e6e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6e04: 0xc0afe94  jal         func_2BFA50
    ctx->pc = 0x3E6E04u;
    SET_GPR_U32(ctx, 31, 0x3E6E0Cu);
    ctx->pc = 0x3E6E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6E04u;
    // 0x3e6e08: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFA50u, 0x3E6E04u, 0x3E6E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6E0Cu;
label_3e6e0c:
    // 0x3e6e0c: 0x0  nop
    ctx->pc = 0x3e6e0cu;
    // NOP
    // 0x3e6e10: 0x16b6fffb  bne         $s5, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E6E10u;
    {
        const bool branch_taken_0x3e6e10 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E6E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6E10u;
        // 0x3e6e14: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6e10) {
            ctx->pc = 0x3E6E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e6e00;
        }
    }
    ctx->pc = 0x3E6E18u;
    // 0x3e6e18: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3e6e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e6e1c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e6e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e6e20: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x3e6e20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x3e6e24: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3e6e24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6e28: 0xa6510006  sh          $s1, 0x6($s2)
    ctx->pc = 0x3e6e28u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e6e2c: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x3e6e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e6e30: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x3e6e30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x3e6e34: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x3e6e34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_3e6e38:
    // 0x3e6e38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e6e38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e6e3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e6e3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e6e40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e6e40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e6e44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3e6e44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e6e48: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3e6e48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e6e4c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3e6e4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e6e50: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3e6e50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e6e54: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3e6e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3e6e58: 0x3e00008  jr          $ra
    ctx->pc = 0x3E6E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6E58u;
        // 0x3e6e5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E6E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E6E60u;
}
