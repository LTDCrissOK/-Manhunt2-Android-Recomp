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

// Function: sub_002D8C68
// Address: 0x2d8c68 - 0x2d8eb0
void sub_002D8C68_0x2d8c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8C68_0x2d8c68");
#endif

    switch (ctx->pc) {
        case 0x2d8cd0u: goto label_2d8cd0;
        case 0x2d8cd8u: goto label_2d8cd8;
        case 0x2d8d00u: goto label_2d8d00;
        case 0x2d8d70u: goto label_2d8d70;
        case 0x2d8dc0u: goto label_2d8dc0;
        case 0x2d8de8u: goto label_2d8de8;
        case 0x2d8e08u: goto label_2d8e08;
        case 0x2d8e38u: goto label_2d8e38;
        case 0x2d8e58u: goto label_2d8e58;
        default: break;
    }

    ctx->pc = 0x2d8c68u;

    // 0x2d8c68: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d8c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d8c6c: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x2d8c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x2d8c70: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d8c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d8c74: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2d8c74u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c78: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2d8c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2d8c7c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2d8c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2d8c80: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2d8c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2d8c84: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2d8c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2d8c88: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2d8c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2d8c8c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x2d8c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x2d8c90: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x2d8c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x2d8c94: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2d8c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2d8c98: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x2d8c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x2d8c9c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x2d8c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2d8ca0: 0x13c00076  beqz        $fp, . + 4 + (0x76 << 2)
    ctx->pc = 0x2D8CA0u;
    {
        const bool branch_taken_0x2d8ca0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8CA0u;
        // 0x2d8ca4: 0xac820034  sw          $v0, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8ca0) {
            ctx->pc = 0x2D8E7Cu;
            goto label_2d8e7c;
        }
    }
    ctx->pc = 0x2D8CA8u;
    // 0x2d8ca8: 0x93c20022  lbu         $v0, 0x22($fp)
    ctx->pc = 0x2d8ca8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 34)));
    // 0x2d8cac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2d8cacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8cb0: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x2D8CB0u;
    {
        const bool branch_taken_0x2d8cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8CB0u;
        // 0x2d8cb4: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8cb0) {
            ctx->pc = 0x2D8E7Cu;
            goto label_2d8e7c;
        }
    }
    ctx->pc = 0x2D8CB8u;
    // 0x2d8cb8: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x2d8cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2d8cbc: 0x27a40008  addiu       $a0, $sp, 0x8
    ctx->pc = 0x2d8cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2d8cc0: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x2d8cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x2d8cc4: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d8cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2d8cc8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2d8cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8ccc: 0x0  nop
    ctx->pc = 0x2d8cccu;
    // NOP
label_2d8cd0:
    // 0x2d8cd0: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x2D8CD0u;
    SET_GPR_U32(ctx, 31, 0x2D8CD8u);
    ctx->pc = 0x2D8CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8CD0u;
    // 0x2d8cd4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x2D8CD0u, 0x2D8CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8CD8u;
label_2d8cd8:
    // 0x2d8cd8: 0x90430014  lbu         $v1, 0x14($v0)
    ctx->pc = 0x2d8cd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2d8cdc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d8cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d8ce0: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x2D8CE0u;
    {
        const bool branch_taken_0x2d8ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8CE0u;
        // 0x2d8ce4: 0x26970001  addiu       $s7, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8ce0) {
            ctx->pc = 0x2D8E68u;
            goto label_2d8e68;
        }
    }
    ctx->pc = 0x2D8CE8u;
    // 0x2d8ce8: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2d8ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2d8cec: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2d8cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8cf0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d8cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8cf4: 0x24510030  addiu       $s1, $v0, 0x30
    ctx->pc = 0x2d8cf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2d8cf8: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x2D8CF8u;
    SET_GPR_U32(ctx, 31, 0x2D8D00u);
    ctx->pc = 0x2D8CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8CF8u;
    // 0x2d8cfc: 0x8e320004  lw          $s2, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x2D8CF8u, 0x2D8D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8D00u;
label_2d8d00:
    // 0x2d8d00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d8d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d8d04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2d8d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2d8d08: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2d8d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d8d0c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2d8d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d8d10: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D8D10u;
    {
        const bool branch_taken_0x2d8d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D8D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8D10u;
        // 0x2d8d14: 0x3a0b02d  daddu       $s6, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8d10) {
            ctx->pc = 0x2D8D78u;
            goto label_2d8d78;
        }
    }
    ctx->pc = 0x2D8D18u;
    // 0x2d8d18: 0x16430007  bne         $s2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8D18u;
    {
        const bool branch_taken_0x2d8d18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8d18) {
            ctx->pc = 0x2D8D38u;
            goto label_2d8d38;
        }
    }
    ctx->pc = 0x2D8D20u;
    // 0x2d8d20: 0x56400001  bnel        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D8D20u;
    {
        const bool branch_taken_0x2d8d20 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8d20) {
            ctx->pc = 0x2D8D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8D20u;
            // 0x2d8d24: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8D28u;
            goto label_2d8d28;
        }
    }
    ctx->pc = 0x2D8D28u;
label_2d8d28:
    // 0x2d8d28: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2d8d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d8d2c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2d8d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d8d30: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2D8D30u;
    {
        const bool branch_taken_0x2d8d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8D30u;
        // 0x2d8d34: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8d30) {
            ctx->pc = 0x2D8E68u;
            goto label_2d8e68;
        }
    }
    ctx->pc = 0x2D8D38u;
label_2d8d38:
    // 0x2d8d38: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8D38u;
    {
        const bool branch_taken_0x2d8d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8d38) {
            ctx->pc = 0x2D8D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8D38u;
            // 0x2d8d3c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8D4Cu;
            goto label_2d8d4c;
        }
    }
    ctx->pc = 0x2D8D40u;
    // 0x2d8d40: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x2d8d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x2d8d44: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d8d44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2d8d48: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2d8d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2d8d4c:
    // 0x2d8d4c: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x2d8d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2d8d50: 0x2483fffc  addiu       $v1, $a0, -0x4
    ctx->pc = 0x2d8d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x2d8d54: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2d8d54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2d8d58: 0x723023  subu        $a2, $v1, $s2
    ctx->pc = 0x2d8d58u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2d8d5c: 0x18c00004  blez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8D5Cu;
    {
        const bool branch_taken_0x2d8d5c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2D8D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8D5Cu;
        // 0x2d8d60: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8d5c) {
            ctx->pc = 0x2D8D70u;
            goto label_2d8d70;
        }
    }
    ctx->pc = 0x2D8D64u;
    // 0x2d8d64: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x2d8d64u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2d8d68: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x2D8D68u;
    SET_GPR_U32(ctx, 31, 0x2D8D70u);
    ctx->pc = 0x2D8D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8D68u;
    // 0x2d8d6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x2D8D68u, 0x2D8D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8D70u;
label_2d8d70:
    // 0x2d8d70: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2D8D70u;
    {
        const bool branch_taken_0x2d8d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8D70u;
        // 0x2d8d74: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8d70) {
            ctx->pc = 0x2D8E68u;
            goto label_2d8e68;
        }
    }
    ctx->pc = 0x2D8D78u;
label_2d8d78:
    // 0x2d8d78: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2d8d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2d8d7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d8d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8d80: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x2d8d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2d8d84: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2d8d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2d8d88: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d8d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d8d8c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2d8d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d8d90: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d8d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d8d94: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2d8d94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2d8d98: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2d8d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2d8d9c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d8d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d8da0: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x2d8da0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x2d8da4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d8da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8da8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d8da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d8dac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D8DACu;
    {
        const bool branch_taken_0x2d8dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8DACu;
        // 0x2d8db0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8dac) {
            ctx->pc = 0x2D8DC8u;
            goto label_2d8dc8;
        }
    }
    ctx->pc = 0x2D8DB4u;
    // 0x2d8db4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d8db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8db8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2D8DB8u;
    SET_GPR_U32(ctx, 31, 0x2D8DC0u);
    ctx->pc = 0x2D8DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8DB8u;
    // 0x2d8dbc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2D8DB8u, 0x2D8DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8DC0u;
label_2d8dc0:
    // 0x2d8dc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8DC0u;
    {
        const bool branch_taken_0x2d8dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8DC0u;
        // 0x2d8dc4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8dc0) {
            ctx->pc = 0x2D8DD0u;
            goto label_2d8dd0;
        }
    }
    ctx->pc = 0x2D8DC8u;
label_2d8dc8:
    // 0x2d8dc8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d8dc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8dcc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2d8dccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8dd0:
    // 0x2d8dd0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d8dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d8dd4: 0x12450006  beq         $s2, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D8DD4u;
    {
        const bool branch_taken_0x2d8dd4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        ctx->pc = 0x2D8DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8DD4u;
        // 0x2d8dd8: 0x2458023  subu        $s0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8dd4) {
            ctx->pc = 0x2D8DF0u;
            goto label_2d8df0;
        }
    }
    ctx->pc = 0x2D8DDCu;
    // 0x2d8ddc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d8ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8de0: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x2D8DE0u;
    SET_GPR_U32(ctx, 31, 0x2D8DE8u);
    ctx->pc = 0x2D8DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8DE0u;
    // 0x2d8de4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x2D8DE0u, 0x2D8DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8DE8u;
label_2d8de8:
    // 0x2d8de8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D8DE8u;
    {
        const bool branch_taken_0x2d8de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8DE8u;
        // 0x2d8dec: 0x501821  addu        $v1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8de8) {
            ctx->pc = 0x2D8DF4u;
            goto label_2d8df4;
        }
    }
    ctx->pc = 0x2D8DF0u;
label_2d8df0:
    // 0x2d8df0: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x2d8df0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d8df4:
    // 0x2d8df4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2d8df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d8df8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2d8df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8dfc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d8dfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8e00: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8E00u;
    {
        const bool branch_taken_0x2d8e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E00u;
        // 0x2d8e04: 0x26970001  addiu       $s7, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8e00) {
            ctx->pc = 0x2D8E20u;
            goto label_2d8e20;
        }
    }
    ctx->pc = 0x2D8E08u;
label_2d8e08:
    // 0x2d8e08: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2d8e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2d8e0c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d8e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d8e10: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2d8e10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2d8e14: 0x0  nop
    ctx->pc = 0x2d8e14u;
    // NOP
    // 0x2d8e18: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D8E18u;
    {
        const bool branch_taken_0x2d8e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E18u;
        // 0x2d8e1c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8e18) {
            ctx->pc = 0x2D8E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8e08;
        }
    }
    ctx->pc = 0x2D8E20u;
label_2d8e20:
    // 0x2d8e20: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x2d8e20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d8e24: 0x12120006  beq         $s0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D8E24u;
    {
        const bool branch_taken_0x2d8e24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x2D8E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E24u;
        // 0x2d8e28: 0x2128023  subu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8e24) {
            ctx->pc = 0x2D8E40u;
            goto label_2d8e40;
        }
    }
    ctx->pc = 0x2D8E2Cu;
    // 0x2d8e2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d8e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8e30: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x2D8E30u;
    SET_GPR_U32(ctx, 31, 0x2D8E38u);
    ctx->pc = 0x2D8E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8E30u;
    // 0x2d8e34: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x2D8E30u, 0x2D8E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8E38u;
label_2d8e38:
    // 0x2d8e38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D8E38u;
    {
        const bool branch_taken_0x2d8e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E38u;
        // 0x2d8e3c: 0x508021  addu        $s0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8e38) {
            ctx->pc = 0x2D8E44u;
            goto label_2d8e44;
        }
    }
    ctx->pc = 0x2D8E40u;
label_2d8e40:
    // 0x2d8e40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d8e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d8e44:
    // 0x2d8e44: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d8e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d8e48: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8E48u;
    {
        const bool branch_taken_0x2d8e48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E48u;
        // 0x2d8e4c: 0x2b31021  addu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8e48) {
            ctx->pc = 0x2D8E5Cu;
            goto label_2d8e5c;
        }
    }
    ctx->pc = 0x2D8E50u;
    // 0x2d8e50: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D8E50u;
    SET_GPR_U32(ctx, 31, 0x2D8E58u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D8E50u, 0x2D8E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8E58u;
label_2d8e58:
    // 0x2d8e58: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x2d8e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_2d8e5c:
    // 0x2d8e5c: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x2d8e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x2d8e60: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2d8e60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2d8e64: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2d8e64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2d8e68:
    // 0x2d8e68: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d8e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8e6c: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x2d8e6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8e70: 0x284102a  slt         $v0, $s4, $a0
    ctx->pc = 0x2d8e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d8e74: 0x1440ff96  bnez        $v0, . + 4 + (-0x6A << 2)
    ctx->pc = 0x2D8E74u;
    {
        const bool branch_taken_0x2d8e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E74u;
        // 0x2d8e78: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8e74) {
            ctx->pc = 0x2D8CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8cd0;
        }
    }
    ctx->pc = 0x2D8E7Cu;
label_2d8e7c:
    // 0x2d8e7c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d8e7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8e80: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2d8e80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d8e84: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2d8e84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8e88: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2d8e88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d8e8c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2d8e8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d8e90: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2d8e90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d8e94: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x2d8e94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d8e98: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x2d8e98u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8e9c: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x2d8e9cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d8ea0: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2d8ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d8ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8EA4u;
        // 0x2d8ea8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8EACu;
    // 0x2d8eac: 0x0  nop
    ctx->pc = 0x2d8eacu;
    // NOP
    ctx->pc = 0x2d8eb0u;
}
