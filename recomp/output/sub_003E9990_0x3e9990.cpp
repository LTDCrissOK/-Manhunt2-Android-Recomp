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

// Function: sub_003E9990
// Address: 0x3e9990 - 0x3e9aa8
void sub_003E9990_0x3e9990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9990_0x3e9990");
#endif

    switch (ctx->pc) {
        case 0x3e99b0u: goto label_3e99b0;
        case 0x3e99d8u: goto label_3e99d8;
        case 0x3e9a00u: goto label_3e9a00;
        case 0x3e9a10u: goto label_3e9a10;
        case 0x3e9a28u: goto label_3e9a28;
        case 0x3e9a50u: goto label_3e9a50;
        case 0x3e9a78u: goto label_3e9a78;
        case 0x3e9a88u: goto label_3e9a88;
        default: break;
    }

    ctx->pc = 0x3e9990u;

    // 0x3e9990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e9990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e9994: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e9994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e9998: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e9998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e999c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e999cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e99a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e99a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e99a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e99a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e99a8: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x3E99A8u;
    {
        const bool branch_taken_0x3e99a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e99a8) {
            ctx->pc = 0x3E99ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E99A8u;
            // 0x3e99ac: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9A1Cu;
            goto label_3e9a1c;
        }
    }
    ctx->pc = 0x3E99B0u;
label_3e99b0:
    // 0x3e99b0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e99b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e99b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e99b8: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x3E99B8u;
    {
        const bool branch_taken_0x3e99b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e99b8) {
            ctx->pc = 0x3E99BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E99B8u;
            // 0x3e99bc: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9A08u;
            goto label_3e9a08;
        }
    }
    ctx->pc = 0x3E99C0u;
    // 0x3e99c0: 0x8c82fff0  lw          $v0, -0x10($a0)
    ctx->pc = 0x3e99c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x3e99c4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3e99c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3e99c8: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x3e99c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3e99cc: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E99CCu;
    {
        const bool branch_taken_0x3e99cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E99D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E99CCu;
        // 0x3e99d0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e99cc) {
            ctx->pc = 0x3E99F0u;
            goto label_3e99f0;
        }
    }
    ctx->pc = 0x3E99D4u;
    // 0x3e99d4: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x3e99d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_3e99d8:
    // 0x3e99d8: 0x0  nop
    ctx->pc = 0x3e99d8u;
    // NOP
    // 0x3e99dc: 0x0  nop
    ctx->pc = 0x3e99dcu;
    // NOP
    // 0x3e99e0: 0x0  nop
    ctx->pc = 0x3e99e0u;
    // NOP
    // 0x3e99e4: 0x0  nop
    ctx->pc = 0x3e99e4u;
    // NOP
    // 0x3e99e8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E99E8u;
    {
        const bool branch_taken_0x3e99e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E99ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E99E8u;
        // 0x3e99ec: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e99e8) {
            ctx->pc = 0x3E99D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e99d8;
        }
    }
    ctx->pc = 0x3E99F0u;
label_3e99f0:
    // 0x3e99f0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e99f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e99f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e99f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e99f8: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3E99F8u;
    SET_GPR_U32(ctx, 31, 0x3E9A00u);
    ctx->pc = 0x3E99FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E99F8u;
    // 0x3e99fc: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E99F8u, 0x3E9A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9A00u;
label_3e9a00:
    // 0x3e9a00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e9a04: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e9a04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e9a08:
    // 0x3e9a08: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E9A08u;
    SET_GPR_U32(ctx, 31, 0x3E9A10u);
    ctx->pc = 0x3E9A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9A08u;
    // 0x3e9a0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E9A08u, 0x3E9A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9A10u;
label_3e9a10:
    // 0x3e9a10: 0x1600ffe7  bnez        $s0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x3E9A10u;
    {
        const bool branch_taken_0x3e9a10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9A10u;
        // 0x3e9a14: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9a10) {
            ctx->pc = 0x3E99B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e99b0;
        }
    }
    ctx->pc = 0x3E9A18u;
    // 0x3e9a18: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e9a1c:
    // 0x3e9a1c: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E9A1Cu;
    {
        const bool branch_taken_0x3e9a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9a1c) {
            ctx->pc = 0x3E9A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9A1Cu;
            // 0x3e9a20: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9A94u;
            goto label_3e9a94;
        }
    }
    ctx->pc = 0x3E9A24u;
    // 0x3e9a24: 0x0  nop
    ctx->pc = 0x3e9a24u;
    // NOP
label_3e9a28:
    // 0x3e9a28: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e9a2c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e9a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e9a30: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x3E9A30u;
    {
        const bool branch_taken_0x3e9a30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9a30) {
            ctx->pc = 0x3E9A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9A30u;
            // 0x3e9a34: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9A80u;
            goto label_3e9a80;
        }
    }
    ctx->pc = 0x3E9A38u;
    // 0x3e9a38: 0x8c82fff0  lw          $v0, -0x10($a0)
    ctx->pc = 0x3e9a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x3e9a3c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3e9a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3e9a40: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x3e9a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3e9a44: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E9A44u;
    {
        const bool branch_taken_0x3e9a44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E9A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9A44u;
        // 0x3e9a48: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9a44) {
            ctx->pc = 0x3E9A68u;
            goto label_3e9a68;
        }
    }
    ctx->pc = 0x3E9A4Cu;
    // 0x3e9a4c: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x3e9a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_3e9a50:
    // 0x3e9a50: 0x0  nop
    ctx->pc = 0x3e9a50u;
    // NOP
    // 0x3e9a54: 0x0  nop
    ctx->pc = 0x3e9a54u;
    // NOP
    // 0x3e9a58: 0x0  nop
    ctx->pc = 0x3e9a58u;
    // NOP
    // 0x3e9a5c: 0x0  nop
    ctx->pc = 0x3e9a5cu;
    // NOP
    // 0x3e9a60: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E9A60u;
    {
        const bool branch_taken_0x3e9a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E9A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9A60u;
        // 0x3e9a64: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9a60) {
            ctx->pc = 0x3E9A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9a50;
        }
    }
    ctx->pc = 0x3E9A68u;
label_3e9a68:
    // 0x3e9a68: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e9a6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e9a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e9a70: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3E9A70u;
    SET_GPR_U32(ctx, 31, 0x3E9A78u);
    ctx->pc = 0x3E9A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9A70u;
    // 0x3e9a74: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E9A70u, 0x3E9A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9A78u;
label_3e9a78:
    // 0x3e9a78: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e9a7c: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e9a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e9a80:
    // 0x3e9a80: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E9A80u;
    SET_GPR_U32(ctx, 31, 0x3E9A88u);
    ctx->pc = 0x3E9A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9A80u;
    // 0x3e9a84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E9A80u, 0x3E9A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9A88u;
label_3e9a88:
    // 0x3e9a88: 0x1600ffe7  bnez        $s0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x3E9A88u;
    {
        const bool branch_taken_0x3e9a88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9A88u;
        // 0x3e9a8c: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9a88) {
            ctx->pc = 0x3E9A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9a28;
        }
    }
    ctx->pc = 0x3E9A90u;
    // 0x3e9a90: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3e9a90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3e9a94:
    // 0x3e9a94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e9a94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e9a98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e9a98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e9a9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e9a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e9aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E9AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E9AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9AA0u;
        // 0x3e9aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E9AA8u;
}
