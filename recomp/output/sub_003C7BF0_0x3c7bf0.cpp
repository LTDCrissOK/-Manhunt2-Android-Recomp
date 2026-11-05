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

// Function: sub_003C7BF0
// Address: 0x3c7bf0 - 0x3c7d48
void sub_003C7BF0_0x3c7bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7BF0_0x3c7bf0");
#endif

    switch (ctx->pc) {
        case 0x3c7c40u: goto label_3c7c40;
        case 0x3c7c60u: goto label_3c7c60;
        case 0x3c7c78u: goto label_3c7c78;
        case 0x3c7cb8u: goto label_3c7cb8;
        case 0x3c7cf0u: goto label_3c7cf0;
        case 0x3c7d1cu: goto label_3c7d1c;
        default: break;
    }

    ctx->pc = 0x3c7bf0u;

    // 0x3c7bf0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3c7bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3c7bf4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3c7bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3c7bf8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3c7bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3c7bfc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3c7bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3c7c00: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3c7c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3c7c04: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3c7c04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7c08: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3c7c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x3c7c0c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3c7c0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7c10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c7c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3c7c14: 0x148943  sra         $s1, $s4, 5
    ctx->pc = 0x3c7c14u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 20), 5));
    // 0x3c7c18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c7c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c7c1c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3c7c1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7c20: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3c7c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3c7c24: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x3c7c24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3c7c28: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3c7c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3c7c2c: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x3c7c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c7c30: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x3c7c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3c7c34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C7C34u;
    {
        const bool branch_taken_0x3c7c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7C34u;
        // 0x3c7c38: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7c34) {
            ctx->pc = 0x3C7C58u;
            goto label_3c7c58;
        }
    }
    ctx->pc = 0x3C7C3Cu;
    // 0x3c7c3c: 0x0  nop
    ctx->pc = 0x3c7c3cu;
    // NOP
label_3c7c40:
    // 0x3c7c40: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x3c7c40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3c7c44: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x3c7c44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3c7c48: 0x0  nop
    ctx->pc = 0x3c7c48u;
    // NOP
    // 0x3c7c4c: 0x0  nop
    ctx->pc = 0x3c7c4cu;
    // NOP
    // 0x3c7c50: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C7C50u;
    {
        const bool branch_taken_0x3c7c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7C50u;
        // 0x3c7c54: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7c50) {
            ctx->pc = 0x3C7C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c7c40;
        }
    }
    ctx->pc = 0x3C7C58u;
label_3c7c58:
    // 0x3c7c58: 0xc0f1d12  jal         func_3C7448
    ctx->pc = 0x3C7C58u;
    SET_GPR_U32(ctx, 31, 0x3C7C60u);
    ctx->pc = 0x3C7C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7C58u;
    // 0x3c7c5c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7448u, 0x3C7C58u, 0x3C7C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7C60u;
label_3c7c60:
    // 0x3c7c60: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c7c60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7c64: 0x3286001f  andi        $a2, $s4, 0x1F
    ctx->pc = 0x3c7c64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)31);
    // 0x3c7c68: 0x26430014  addiu       $v1, $s2, 0x14
    ctx->pc = 0x3c7c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x3c7c6c: 0x1a200008  blez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C7C6Cu;
    {
        const bool branch_taken_0x3c7c6c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3C7C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7C6Cu;
        // 0x3c7c70: 0x26680014  addiu       $t0, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7c6c) {
            ctx->pc = 0x3C7C90u;
            goto label_3c7c90;
        }
    }
    ctx->pc = 0x3C7C74u;
    // 0x3c7c74: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3c7c74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c7c78:
    // 0x3c7c78: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x3c7c78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x3c7c7c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3c7c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3c7c80: 0x0  nop
    ctx->pc = 0x3c7c80u;
    // NOP
    // 0x3c7c84: 0x0  nop
    ctx->pc = 0x3c7c84u;
    // NOP
    // 0x3c7c88: 0x14e0fffb  bnez        $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C7C88u;
    {
        const bool branch_taken_0x3c7c88 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7C88u;
        // 0x3c7c8c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7c88) {
            ctx->pc = 0x3C7C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c7c78;
        }
    }
    ctx->pc = 0x3C7C90u;
label_3c7c90:
    // 0x3c7c90: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3c7c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3c7c94: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3c7c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7c98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3c7c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3c7c9c: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x3C7C9Cu;
    {
        const bool branch_taken_0x3c7c9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7C9Cu;
        // 0x3c7ca0: 0x823821  addu        $a3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7c9c) {
            ctx->pc = 0x3C7CF0u;
            goto label_3c7cf0;
        }
    }
    ctx->pc = 0x3C7CA4u;
    // 0x3c7ca4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3c7ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3c7ca8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3c7ca8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7cac: 0x462823  subu        $a1, $v0, $a2
    ctx->pc = 0x3c7cacu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3c7cb0: 0x26090001  addiu       $t1, $s0, 0x1
    ctx->pc = 0x3c7cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3c7cb4: 0x0  nop
    ctx->pc = 0x3c7cb4u;
    // NOP
label_3c7cb8:
    // 0x3c7cb8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3c7cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c7cbc: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x3c7cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x3c7cc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3c7cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3c7cc4: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x3c7cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x3c7cc8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3c7cc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3c7ccc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3c7cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c7cd0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3c7cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3c7cd4: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x3c7cd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3c7cd8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3C7CD8u;
    {
        const bool branch_taken_0x3c7cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7CD8u;
        // 0x3c7cdc: 0xa31806  srlv        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7cd8) {
            ctx->pc = 0x3C7CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c7cb8;
        }
    }
    ctx->pc = 0x3C7CE0u;
    // 0x3c7ce0: 0x123800b  movn        $s0, $t1, $v1
    ctx->pc = 0x3c7ce0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 9));
    // 0x3c7ce4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C7CE4u;
    {
        const bool branch_taken_0x3c7ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7CE4u;
        // 0x3c7ce8: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7ce4) {
            ctx->pc = 0x3C7D08u;
            goto label_3c7d08;
        }
    }
    ctx->pc = 0x3C7CECu;
    // 0x3c7cec: 0x0  nop
    ctx->pc = 0x3c7cecu;
    // NOP
label_3c7cf0:
    // 0x3c7cf0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3c7cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c7cf4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3c7cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3c7cf8: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x3c7cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x3c7cfc: 0x87182b  sltu        $v1, $a0, $a3
    ctx->pc = 0x3c7cfcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3c7d00: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C7D00u;
    {
        const bool branch_taken_0x3c7d00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7D00u;
        // 0x3c7d04: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7d00) {
            ctx->pc = 0x3C7CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c7cf0;
        }
    }
    ctx->pc = 0x3C7D08u;
label_3c7d08:
    // 0x3c7d08: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x3c7d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3c7d0c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3c7d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7d10: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x3c7d10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x3c7d14: 0xc0f1d3c  jal         func_3C74F0
    ctx->pc = 0x3C7D14u;
    SET_GPR_U32(ctx, 31, 0x3C7D1Cu);
    ctx->pc = 0x3C7D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7D14u;
    // 0x3c7d18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C74F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C74F0u, 0x3C7D14u, 0x3C7D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7D1Cu;
label_3c7d1c:
    // 0x3c7d1c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3c7d1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7d20: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3c7d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c7d24: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3c7d24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c7d28: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3c7d28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c7d2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c7d2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c7d30: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3c7d30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c7d34: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3c7d34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c7d38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c7d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c7d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C7D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7D3Cu;
        // 0x3c7d40: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7D44u;
    // 0x3c7d44: 0x0  nop
    ctx->pc = 0x3c7d44u;
    // NOP
    ctx->pc = 0x3c7d48u;
}
