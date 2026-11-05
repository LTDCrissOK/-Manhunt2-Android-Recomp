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

// Function: sub_003E6AE0
// Address: 0x3e6ae0 - 0x3e6ca0
void sub_003E6AE0_0x3e6ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6AE0_0x3e6ae0");
#endif

    switch (ctx->pc) {
        case 0x3e6b2cu: goto label_3e6b2c;
        case 0x3e6b40u: goto label_3e6b40;
        case 0x3e6b58u: goto label_3e6b58;
        case 0x3e6b64u: goto label_3e6b64;
        case 0x3e6ba8u: goto label_3e6ba8;
        case 0x3e6c20u: goto label_3e6c20;
        case 0x3e6c30u: goto label_3e6c30;
        case 0x3e6c40u: goto label_3e6c40;
        case 0x3e6c4cu: goto label_3e6c4c;
        default: break;
    }

    ctx->pc = 0x3e6ae0u;

    // 0x3e6ae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e6ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e6ae4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e6ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e6ae8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3e6ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3e6aec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e6aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6af0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e6af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e6af4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e6af4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6af8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e6af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e6afc: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x3e6afcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3e6b00: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3e6b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3e6b04: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3e6b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3e6b08: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3e6b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3e6b0c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3e6b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3e6b10: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x3e6b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3e6b14: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e6b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e6b18: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E6B18u;
    {
        const bool branch_taken_0x3e6b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E6B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6B18u;
        // 0x3e6b1c: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6b18) {
            ctx->pc = 0x3E6B90u;
            goto label_3e6b90;
        }
    }
    ctx->pc = 0x3E6B20u;
    // 0x3e6b20: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e6b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e6b24: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E6B24u;
    SET_GPR_U32(ctx, 31, 0x3E6B2Cu);
    ctx->pc = 0x3E6B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6B24u;
    // 0x3e6b28: 0x2632ffff  addiu       $s2, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E6B24u, 0x3E6B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6B2Cu;
label_3e6b2c:
    // 0x3e6b2c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e6b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e6b30: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e6b30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6b34: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x3e6b34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3e6b38: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E6B38u;
    SET_GPR_U32(ctx, 31, 0x3E6B40u);
    ctx->pc = 0x3E6B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6B38u;
    // 0x3e6b3c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E6B38u, 0x3E6B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6B40u;
label_3e6b40:
    // 0x3e6b40: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x3e6b40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e6b44: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3e6b44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x3e6b48: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E6B48u;
    {
        const bool branch_taken_0x3e6b48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6B48u;
        // 0x3e6b4c: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6b48) {
            ctx->pc = 0x3E6B70u;
            goto label_3e6b70;
        }
    }
    ctx->pc = 0x3E6B50u;
    // 0x3e6b50: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e6b50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e6b54: 0x0  nop
    ctx->pc = 0x3e6b54u;
    // NOP
label_3e6b58:
    // 0x3e6b58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e6b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6b5c: 0xc0afe74  jal         func_2BF9D0
    ctx->pc = 0x3E6B5Cu;
    SET_GPR_U32(ctx, 31, 0x3E6B64u);
    ctx->pc = 0x3E6B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6B5Cu;
    // 0x3e6b60: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF9D0u, 0x3E6B5Cu, 0x3E6B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6B64u;
label_3e6b64:
    // 0x3e6b64: 0x0  nop
    ctx->pc = 0x3e6b64u;
    // NOP
    // 0x3e6b68: 0x1656fffb  bne         $s2, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E6B68u;
    {
        const bool branch_taken_0x3e6b68 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6B68u;
        // 0x3e6b6c: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6b68) {
            ctx->pc = 0x3E6B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e6b58;
        }
    }
    ctx->pc = 0x3E6B70u;
label_3e6b70:
    // 0x3e6b70: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e6b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e6b74: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3e6b74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6b78: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x3e6b78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x3e6b7c: 0xa6910004  sh          $s1, 0x4($s4)
    ctx->pc = 0x3e6b7cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e6b80: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3e6b80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x3e6b84: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x3e6b84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x3e6b88: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3E6B88u;
    {
        const bool branch_taken_0x3e6b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6B88u;
        // 0x3e6b8c: 0xa6910006  sh          $s1, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6b88) {
            ctx->pc = 0x3E6C78u;
            goto label_3e6c78;
        }
    }
    ctx->pc = 0x3E6B90u;
label_3e6b90:
    // 0x3e6b90: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x3e6b90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e6b94: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E6B94u;
    {
        const bool branch_taken_0x3e6b94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6B94u;
        // 0x3e6b98: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6b94) {
            ctx->pc = 0x3E6C14u;
            goto label_3e6c14;
        }
    }
    ctx->pc = 0x3E6B9Cu;
    // 0x3e6b9c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e6b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e6ba0: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x3e6ba0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3e6ba4: 0x0  nop
    ctx->pc = 0x3e6ba4u;
    // NOP
label_3e6ba8:
    // 0x3e6ba8: 0x94c70004  lhu         $a3, 0x4($a2)
    ctx->pc = 0x3e6ba8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3e6bac: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3e6bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3e6bb0: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x3e6bb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e6bb4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E6BB4u;
    {
        const bool branch_taken_0x3e6bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e6bb4) {
            ctx->pc = 0x3E6BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6BB4u;
            // 0x3e6bb8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6C08u;
            goto label_3e6c08;
        }
    }
    ctx->pc = 0x3E6BBCu;
    // 0x3e6bbc: 0x5467000a  bnel        $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3E6BBCu;
    {
        const bool branch_taken_0x3e6bbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x3e6bbc) {
            ctx->pc = 0x3E6BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6BBCu;
            // 0x3e6bc0: 0x94c20006  lhu         $v0, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6BE8u;
            goto label_3e6be8;
        }
    }
    ctx->pc = 0x3E6BC4u;
    // 0x3e6bc4: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E6BC4u;
    {
        const bool branch_taken_0x3e6bc4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6BC4u;
        // 0x3e6bc8: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6bc4) {
            ctx->pc = 0x3E6BD4u;
            goto label_3e6bd4;
        }
    }
    ctx->pc = 0x3E6BCCu;
    // 0x3e6bcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E6BCCu;
    {
        const bool branch_taken_0x3e6bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6BCCu;
        // 0x3e6bd0: 0xad020008  sw          $v0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6bcc) {
            ctx->pc = 0x3E6BD8u;
            goto label_3e6bd8;
        }
    }
    ctx->pc = 0x3E6BD4u;
label_3e6bd4:
    // 0x3e6bd4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3e6bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3e6bd8:
    // 0x3e6bd8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e6bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e6bdc: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3e6bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3e6be0: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x3e6be0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x3e6be4: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x3e6be4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_3e6be8:
    // 0x3e6be8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3e6be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e6bec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e6becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e6bf0: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x3e6bf0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e6bf4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e6bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e6bf8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3e6bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e6bfc: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x3e6bfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e6c00: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3E6C00u;
    {
        const bool branch_taken_0x3e6c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6C00u;
        // 0x3e6c04: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6c00) {
            ctx->pc = 0x3E6C78u;
            goto label_3e6c78;
        }
    }
    ctx->pc = 0x3E6C08u;
label_3e6c08:
    // 0x3e6c08: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3e6c08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3e6c0c: 0x54c0ffe6  bnel        $a2, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E6C0Cu;
    {
        const bool branch_taken_0x3e6c0c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e6c0c) {
            ctx->pc = 0x3E6C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6C0Cu;
            // 0x3e6c10: 0x94c30006  lhu         $v1, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e6ba8;
        }
    }
    ctx->pc = 0x3E6C14u;
label_3e6c14:
    // 0x3e6c14: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e6c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e6c18: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E6C18u;
    SET_GPR_U32(ctx, 31, 0x3E6C20u);
    ctx->pc = 0x3E6C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6C18u;
    // 0x3e6c1c: 0x2415000f  addiu       $s5, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E6C18u, 0x3E6C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6C20u;
label_3e6c20:
    // 0x3e6c20: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e6c20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e6c24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e6c24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6c28: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E6C28u;
    SET_GPR_U32(ctx, 31, 0x3E6C30u);
    ctx->pc = 0x3E6C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6C28u;
    // 0x3e6c2c: 0x240401d0  addiu       $a0, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E6C28u, 0x3E6C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6C30u;
label_3e6c30:
    // 0x3e6c30: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e6c34: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x3e6c34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e6c38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3e6c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3e6c3c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3e6c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e6c40:
    // 0x3e6c40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e6c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6c44: 0xc0afe74  jal         func_2BF9D0
    ctx->pc = 0x3E6C44u;
    SET_GPR_U32(ctx, 31, 0x3E6C4Cu);
    ctx->pc = 0x3E6C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6C44u;
    // 0x3e6c48: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF9D0u, 0x3E6C44u, 0x3E6C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6C4Cu;
label_3e6c4c:
    // 0x3e6c4c: 0x0  nop
    ctx->pc = 0x3e6c4cu;
    // NOP
    // 0x3e6c50: 0x16b6fffb  bne         $s5, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E6C50u;
    {
        const bool branch_taken_0x3e6c50 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E6C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6C50u;
        // 0x3e6c54: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6c50) {
            ctx->pc = 0x3E6C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e6c40;
        }
    }
    ctx->pc = 0x3E6C58u;
    // 0x3e6c58: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3e6c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e6c5c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e6c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e6c60: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x3e6c60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x3e6c64: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3e6c64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6c68: 0xa6510006  sh          $s1, 0x6($s2)
    ctx->pc = 0x3e6c68u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e6c6c: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x3e6c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e6c70: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x3e6c70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x3e6c74: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x3e6c74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_3e6c78:
    // 0x3e6c78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e6c78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e6c7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e6c7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e6c80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e6c80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e6c84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3e6c84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e6c88: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3e6c88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e6c8c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3e6c8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e6c90: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3e6c90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e6c94: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3e6c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3e6c98: 0x3e00008  jr          $ra
    ctx->pc = 0x3E6C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6C98u;
        // 0x3e6c9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E6C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E6CA0u;
}
