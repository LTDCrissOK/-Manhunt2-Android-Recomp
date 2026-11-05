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

// Function: sub_003E5B20
// Address: 0x3e5b20 - 0x3e5ce0
void sub_003E5B20_0x3e5b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5B20_0x3e5b20");
#endif

    switch (ctx->pc) {
        case 0x3e5b6cu: goto label_3e5b6c;
        case 0x3e5b80u: goto label_3e5b80;
        case 0x3e5b98u: goto label_3e5b98;
        case 0x3e5ba4u: goto label_3e5ba4;
        case 0x3e5be8u: goto label_3e5be8;
        case 0x3e5c60u: goto label_3e5c60;
        case 0x3e5c70u: goto label_3e5c70;
        case 0x3e5c80u: goto label_3e5c80;
        case 0x3e5c8cu: goto label_3e5c8c;
        default: break;
    }

    ctx->pc = 0x3e5b20u;

    // 0x3e5b20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e5b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e5b24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e5b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e5b28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3e5b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3e5b2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e5b2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5b30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e5b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e5b34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e5b34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5b38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e5b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e5b3c: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x3e5b3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3e5b40: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3e5b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3e5b44: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3e5b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3e5b48: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3e5b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3e5b4c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3e5b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3e5b50: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x3e5b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3e5b54: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e5b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e5b58: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E5B58u;
    {
        const bool branch_taken_0x3e5b58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E5B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5B58u;
        // 0x3e5b5c: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5b58) {
            ctx->pc = 0x3E5BD0u;
            goto label_3e5bd0;
        }
    }
    ctx->pc = 0x3E5B60u;
    // 0x3e5b60: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e5b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e5b64: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E5B64u;
    SET_GPR_U32(ctx, 31, 0x3E5B6Cu);
    ctx->pc = 0x3E5B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5B64u;
    // 0x3e5b68: 0x2632ffff  addiu       $s2, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E5B64u, 0x3E5B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5B6Cu;
label_3e5b6c:
    // 0x3e5b6c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e5b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e5b70: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e5b70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5b74: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x3e5b74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3e5b78: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E5B78u;
    SET_GPR_U32(ctx, 31, 0x3E5B80u);
    ctx->pc = 0x3E5B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5B78u;
    // 0x3e5b7c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E5B78u, 0x3E5B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5B80u;
label_3e5b80:
    // 0x3e5b80: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x3e5b80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e5b84: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3e5b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x3e5b88: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E5B88u;
    {
        const bool branch_taken_0x3e5b88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5B88u;
        // 0x3e5b8c: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5b88) {
            ctx->pc = 0x3E5BB0u;
            goto label_3e5bb0;
        }
    }
    ctx->pc = 0x3E5B90u;
    // 0x3e5b90: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e5b90u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e5b94: 0x0  nop
    ctx->pc = 0x3e5b94u;
    // NOP
label_3e5b98:
    // 0x3e5b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e5b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5b9c: 0xc0afb76  jal         func_2BEDD8
    ctx->pc = 0x3E5B9Cu;
    SET_GPR_U32(ctx, 31, 0x3E5BA4u);
    ctx->pc = 0x3E5BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5B9Cu;
    // 0x3e5ba0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEDD8u, 0x3E5B9Cu, 0x3E5BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5BA4u;
label_3e5ba4:
    // 0x3e5ba4: 0x0  nop
    ctx->pc = 0x3e5ba4u;
    // NOP
    // 0x3e5ba8: 0x1656fffb  bne         $s2, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E5BA8u;
    {
        const bool branch_taken_0x3e5ba8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E5BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5BA8u;
        // 0x3e5bac: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5ba8) {
            ctx->pc = 0x3E5B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5b98;
        }
    }
    ctx->pc = 0x3E5BB0u;
label_3e5bb0:
    // 0x3e5bb0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e5bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e5bb4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3e5bb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5bb8: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x3e5bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x3e5bbc: 0xa6910004  sh          $s1, 0x4($s4)
    ctx->pc = 0x3e5bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e5bc0: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3e5bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x3e5bc4: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x3e5bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x3e5bc8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3E5BC8u;
    {
        const bool branch_taken_0x3e5bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5BC8u;
        // 0x3e5bcc: 0xa6910006  sh          $s1, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5bc8) {
            ctx->pc = 0x3E5CB8u;
            goto label_3e5cb8;
        }
    }
    ctx->pc = 0x3E5BD0u;
label_3e5bd0:
    // 0x3e5bd0: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x3e5bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e5bd4: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E5BD4u;
    {
        const bool branch_taken_0x3e5bd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5BD4u;
        // 0x3e5bd8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5bd4) {
            ctx->pc = 0x3E5C54u;
            goto label_3e5c54;
        }
    }
    ctx->pc = 0x3E5BDCu;
    // 0x3e5bdc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e5bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e5be0: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x3e5be0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3e5be4: 0x0  nop
    ctx->pc = 0x3e5be4u;
    // NOP
label_3e5be8:
    // 0x3e5be8: 0x94c70004  lhu         $a3, 0x4($a2)
    ctx->pc = 0x3e5be8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3e5bec: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3e5becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3e5bf0: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x3e5bf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e5bf4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E5BF4u;
    {
        const bool branch_taken_0x3e5bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5bf4) {
            ctx->pc = 0x3E5BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5BF4u;
            // 0x3e5bf8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5C48u;
            goto label_3e5c48;
        }
    }
    ctx->pc = 0x3E5BFCu;
    // 0x3e5bfc: 0x5467000a  bnel        $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3E5BFCu;
    {
        const bool branch_taken_0x3e5bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x3e5bfc) {
            ctx->pc = 0x3E5C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5BFCu;
            // 0x3e5c00: 0x94c20006  lhu         $v0, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5C28u;
            goto label_3e5c28;
        }
    }
    ctx->pc = 0x3E5C04u;
    // 0x3e5c04: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E5C04u;
    {
        const bool branch_taken_0x3e5c04 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5C04u;
        // 0x3e5c08: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5c04) {
            ctx->pc = 0x3E5C14u;
            goto label_3e5c14;
        }
    }
    ctx->pc = 0x3E5C0Cu;
    // 0x3e5c0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E5C0Cu;
    {
        const bool branch_taken_0x3e5c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5C0Cu;
        // 0x3e5c10: 0xad020008  sw          $v0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5c0c) {
            ctx->pc = 0x3E5C18u;
            goto label_3e5c18;
        }
    }
    ctx->pc = 0x3E5C14u;
label_3e5c14:
    // 0x3e5c14: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3e5c14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3e5c18:
    // 0x3e5c18: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e5c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e5c1c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3e5c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3e5c20: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x3e5c20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x3e5c24: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x3e5c24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_3e5c28:
    // 0x3e5c28: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3e5c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e5c2c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e5c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e5c30: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x3e5c30u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e5c34: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e5c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e5c38: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3e5c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e5c3c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x3e5c3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e5c40: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3E5C40u;
    {
        const bool branch_taken_0x3e5c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5C40u;
        // 0x3e5c44: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5c40) {
            ctx->pc = 0x3E5CB8u;
            goto label_3e5cb8;
        }
    }
    ctx->pc = 0x3E5C48u;
label_3e5c48:
    // 0x3e5c48: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3e5c48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3e5c4c: 0x54c0ffe6  bnel        $a2, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E5C4Cu;
    {
        const bool branch_taken_0x3e5c4c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5c4c) {
            ctx->pc = 0x3E5C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5C4Cu;
            // 0x3e5c50: 0x94c30006  lhu         $v1, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5be8;
        }
    }
    ctx->pc = 0x3E5C54u;
label_3e5c54:
    // 0x3e5c54: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e5c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e5c58: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E5C58u;
    SET_GPR_U32(ctx, 31, 0x3E5C60u);
    ctx->pc = 0x3E5C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5C58u;
    // 0x3e5c5c: 0x2415000f  addiu       $s5, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E5C58u, 0x3E5C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5C60u;
label_3e5c60:
    // 0x3e5c60: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e5c60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e5c64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e5c64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5c68: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E5C68u;
    SET_GPR_U32(ctx, 31, 0x3E5C70u);
    ctx->pc = 0x3E5C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5C68u;
    // 0x3e5c6c: 0x240401d0  addiu       $a0, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E5C68u, 0x3E5C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5C70u;
label_3e5c70:
    // 0x3e5c70: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e5c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e5c74: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x3e5c74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e5c78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3e5c78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3e5c7c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3e5c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e5c80:
    // 0x3e5c80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e5c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5c84: 0xc0afb76  jal         func_2BEDD8
    ctx->pc = 0x3E5C84u;
    SET_GPR_U32(ctx, 31, 0x3E5C8Cu);
    ctx->pc = 0x3E5C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5C84u;
    // 0x3e5c88: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEDD8u, 0x3E5C84u, 0x3E5C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5C8Cu;
label_3e5c8c:
    // 0x3e5c8c: 0x0  nop
    ctx->pc = 0x3e5c8cu;
    // NOP
    // 0x3e5c90: 0x16b6fffb  bne         $s5, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E5C90u;
    {
        const bool branch_taken_0x3e5c90 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5C90u;
        // 0x3e5c94: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5c90) {
            ctx->pc = 0x3E5C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5c80;
        }
    }
    ctx->pc = 0x3E5C98u;
    // 0x3e5c98: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3e5c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e5c9c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e5c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e5ca0: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x3e5ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x3e5ca4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3e5ca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5ca8: 0xa6510006  sh          $s1, 0x6($s2)
    ctx->pc = 0x3e5ca8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e5cac: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x3e5cacu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e5cb0: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x3e5cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x3e5cb4: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x3e5cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_3e5cb8:
    // 0x3e5cb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e5cb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e5cbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e5cbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e5cc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e5cc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e5cc4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3e5cc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e5cc8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3e5cc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e5ccc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3e5cccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e5cd0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3e5cd0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e5cd4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3e5cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3e5cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E5CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E5CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5CD8u;
        // 0x3e5cdc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E5CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E5CE0u;
}
