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

// Function: sub_001D4CA0
// Address: 0x1d4ca0 - 0x1d4fd8
void sub_001D4CA0_0x1d4ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4CA0_0x1d4ca0");
#endif

    switch (ctx->pc) {
        case 0x1d4cecu: goto label_1d4cec;
        case 0x1d4d0cu: goto label_1d4d0c;
        case 0x1d4d14u: goto label_1d4d14;
        case 0x1d4d28u: goto label_1d4d28;
        case 0x1d4d40u: goto label_1d4d40;
        case 0x1d4d48u: goto label_1d4d48;
        case 0x1d4d5cu: goto label_1d4d5c;
        case 0x1d4d84u: goto label_1d4d84;
        case 0x1d4e24u: goto label_1d4e24;
        case 0x1d4e48u: goto label_1d4e48;
        case 0x1d4ea8u: goto label_1d4ea8;
        case 0x1d4ee8u: goto label_1d4ee8;
        case 0x1d4f10u: goto label_1d4f10;
        case 0x1d4f50u: goto label_1d4f50;
        case 0x1d4f58u: goto label_1d4f58;
        case 0x1d4f6cu: goto label_1d4f6c;
        default: break;
    }

    ctx->pc = 0x1d4ca0u;

    // 0x1d4ca0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d4ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1d4ca4: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1d4ca4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1d4ca8: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x1d4ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD70u));
    // 0x1d4cac: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1d4cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1d4cb0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1d4cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1d4cb4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1d4cb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4cb8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1d4cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1d4cbc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d4cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d4cc0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1d4cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1d4cc4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1d4cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1d4cc8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1d4cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1d4ccc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1d4cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1d4cd0: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x1d4cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x1d4cd4: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x1d4cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x1d4cd8: 0x144000b2  bnez        $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x1D4CD8u;
    {
        const bool branch_taken_0x1d4cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CD8u;
        // 0x1d4cdc: 0xffbf0078  sd          $ra, 0x78($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4cd8) {
            ctx->pc = 0x1D4FA4u;
            goto label_1d4fa4;
        }
    }
    ctx->pc = 0x1D4CE0u;
    // 0x1d4ce0: 0x24042034  addiu       $a0, $zero, 0x2034
    ctx->pc = 0x1d4ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8244));
    // 0x1d4ce4: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x1D4CE4u;
    SET_GPR_U32(ctx, 31, 0x1D4CECu);
    ctx->pc = 0x1D4CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4CE4u;
    // 0x1d4ce8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x1D4CE4u, 0x1D4CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4CECu;
label_1d4cec:
    // 0x1d4cec: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1d4cecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4cf0: 0x26a30418  addiu       $v1, $s5, 0x418
    ctx->pc = 0x1d4cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1048));
    // 0x1d4cf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d4cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4cf8: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x1d4cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x1d4cfc: 0x24062034  addiu       $a2, $zero, 0x2034
    ctx->pc = 0x1d4cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8244));
    // 0x1d4d00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4d04: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x1D4D04u;
    SET_GPR_U32(ctx, 31, 0x1D4D0Cu);
    ctx->pc = 0x1D4D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4D04u;
    // 0x1d4d08: 0xaea20010  sw          $v0, 0x10($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x1D4D04u, 0x1D4D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4D0Cu;
label_1d4d0c:
    // 0x1d4d0c: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x1D4D0Cu;
    SET_GPR_U32(ctx, 31, 0x1D4D14u);
    ctx->pc = 0x1D4D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4D0Cu;
    // 0x1d4d10: 0x240406e8  addiu       $a0, $zero, 0x6E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x1D4D0Cu, 0x1D4D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4D14u;
label_1d4d14:
    // 0x1d4d14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4d18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d4d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4d1c: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x1d4d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x1d4d20: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x1D4D20u;
    SET_GPR_U32(ctx, 31, 0x1D4D28u);
    ctx->pc = 0x1D4D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4D20u;
    // 0x1d4d24: 0x240606e8  addiu       $a2, $zero, 0x6E8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x1D4D20u, 0x1D4D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4D28u;
label_1d4d28:
    // 0x1d4d28: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x1d4d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1d4d2c: 0x27a20018  addiu       $v0, $sp, 0x18
    ctx->pc = 0x1d4d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1d4d30: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1d4d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1d4d34: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1d4d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1d4d38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d4d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4d3c: 0x0  nop
    ctx->pc = 0x1d4d3cu;
    // NOP
label_1d4d40:
    // 0x1d4d40: 0xc069e04  jal         func_1A7810
    ctx->pc = 0x1D4D40u;
    SET_GPR_U32(ctx, 31, 0x1D4D48u);
    ctx->pc = 0x1A7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7810u, 0x1D4D40u, 0x1D4D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4D48u;
label_1d4d48:
    // 0x1d4d48: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x1D4D48u;
    {
        const bool branch_taken_0x1d4d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D48u;
        // 0x1d4d4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d48) {
            ctx->pc = 0x1D4F24u;
            goto label_1d4f24;
        }
    }
    ctx->pc = 0x1D4D50u;
    // 0x1d4d50: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x1d4d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d4d54: 0xc075272  jal         func_1D49C8
    ctx->pc = 0x1D4D54u;
    SET_GPR_U32(ctx, 31, 0x1D4D5Cu);
    ctx->pc = 0x1D4D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4D54u;
    // 0x1d4d58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49C8u, 0x1D4D54u, 0x1D4D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4D5Cu;
label_1d4d5c:
    // 0x1d4d5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4d60: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x1d4d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1d4d64: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x1d4d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1d4d68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d4d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4d6c: 0x10800071  beqz        $a0, . + 4 + (0x71 << 2)
    ctx->pc = 0x1D4D6Cu;
    {
        const bool branch_taken_0x1d4d6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D6Cu;
        // 0x1d4d70: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d6c) {
            ctx->pc = 0x1D4F34u;
            goto label_1d4f34;
        }
    }
    ctx->pc = 0x1D4D74u;
    // 0x1d4d74: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d4d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d4d78: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1d4d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d4d7c: 0xc0d5f28  jal         func_357CA0
    ctx->pc = 0x1D4D7Cu;
    SET_GPR_U32(ctx, 31, 0x1D4D84u);
    ctx->pc = 0x1D4D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4D7Cu;
    // 0x1d4d80: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357CA0u, 0x1D4D7Cu, 0x1D4D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4D84u;
label_1d4d84:
    // 0x1d4d84: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D4D84u;
    {
        const bool branch_taken_0x1d4d84 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d4d84) {
            ctx->pc = 0x1D4D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4D84u;
            // 0x1d4d88: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4D8Cu;
            goto label_1d4d8c;
        }
    }
    ctx->pc = 0x1D4D8Cu;
label_1d4d8c:
    // 0x1d4d8c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d4d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4d90: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1d4d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1d4d94: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1d4d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1d4d98: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4d9c: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x1d4d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x1d4da0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1d4da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1d4da4: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x1d4da4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d4da8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1d4da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d4dac: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1d4dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d4db0: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D4DB0u;
    {
        const bool branch_taken_0x1d4db0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D4DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DB0u;
        // 0x1d4db4: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4db0) {
            ctx->pc = 0x1D4DDCu;
            goto label_1d4ddc;
        }
    }
    ctx->pc = 0x1D4DB8u;
    // 0x1d4db8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4DB8u;
    {
        const bool branch_taken_0x1d4db8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4db8) {
            ctx->pc = 0x1D4DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4DB8u;
            // 0x1d4dbc: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4DD0u;
            goto label_1d4dd0;
        }
    }
    ctx->pc = 0x1D4DC0u;
    // 0x1d4dc0: 0xac960000  sw          $s6, 0x0($a0)
    ctx->pc = 0x1d4dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 22));
    // 0x1d4dc4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1d4dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1d4dc8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1d4dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1d4dcc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1d4dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1d4dd0:
    // 0x1d4dd0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1d4dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1d4dd4: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1D4DD4u;
    {
        const bool branch_taken_0x1d4dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DD4u;
        // 0x1d4dd8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4dd4) {
            ctx->pc = 0x1D4F34u;
            goto label_1d4f34;
        }
    }
    ctx->pc = 0x1D4DDCu;
label_1d4ddc:
    // 0x1d4ddc: 0xafbe0018  sw          $fp, 0x18($sp)
    ctx->pc = 0x1d4ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 30));
    // 0x1d4de0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1d4de0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4de4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1d4de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4de8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d4de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4dec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1d4decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d4df0: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x1d4df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1d4df4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d4df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4df8: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1d4df8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1d4dfc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1d4dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1d4e00: 0x5e182b  sltu        $v1, $v0, $fp
    ctx->pc = 0x1d4e00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x1d4e04: 0x83280a  movz        $a1, $a0, $v1
    ctx->pc = 0x1d4e04u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x1d4e08: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d4e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d4e0c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d4e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d4e10: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D4E10u;
    {
        const bool branch_taken_0x1d4e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E10u;
        // 0x1d4e14: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e10) {
            ctx->pc = 0x1D4E2Cu;
            goto label_1d4e2c;
        }
    }
    ctx->pc = 0x1D4E18u;
    // 0x1d4e18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e1c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1D4E1Cu;
    SET_GPR_U32(ctx, 31, 0x1D4E24u);
    ctx->pc = 0x1D4E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4E1Cu;
    // 0x1d4e20: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1D4E1Cu, 0x1D4E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4E24u;
label_1d4e24:
    // 0x1d4e24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4E24u;
    {
        const bool branch_taken_0x1d4e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E24u;
        // 0x1d4e28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e24) {
            ctx->pc = 0x1D4E38u;
            goto label_1d4e38;
        }
    }
    ctx->pc = 0x1D4E2Cu;
label_1d4e2c:
    // 0x1d4e2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d4e2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e30: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d4e30u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d4e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4e38:
    // 0x1d4e38: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d4e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4e3c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1d4e3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e40: 0x1094000a  beq         $a0, $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x1D4E40u;
    {
        const bool branch_taken_0x1d4e40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x1D4E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E40u;
        // 0x1d4e44: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e40) {
            ctx->pc = 0x1D4E6Cu;
            goto label_1d4e6c;
        }
    }
    ctx->pc = 0x1D4E48u;
label_1d4e48:
    // 0x1d4e48: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D4E48u;
    {
        const bool branch_taken_0x1d4e48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4e48) {
            ctx->pc = 0x1D4E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4E48u;
            // 0x1d4e4c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4E64u;
            goto label_1d4e64;
        }
    }
    ctx->pc = 0x1D4E50u;
    // 0x1d4e50: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d4e54: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1d4e54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1d4e58: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1d4e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d4e5c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1d4e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x1d4e60: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1d4e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1d4e64:
    // 0x1d4e64: 0x1494fff8  bne         $a0, $s4, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D4E64u;
    {
        const bool branch_taken_0x1d4e64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        ctx->pc = 0x1D4E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E64u;
        // 0x1d4e68: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e64) {
            ctx->pc = 0x1D4E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4e48;
        }
    }
    ctx->pc = 0x1D4E6Cu;
label_1d4e6c:
    // 0x1d4e6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d4e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d4e70: 0x145e0009  bne         $v0, $fp, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D4E70u;
    {
        const bool branch_taken_0x1d4e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x1D4E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E70u;
        // 0x1d4e74: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e70) {
            ctx->pc = 0x1D4E98u;
            goto label_1d4e98;
        }
    }
    ctx->pc = 0x1D4E78u;
    // 0x1d4e78: 0x52000015  beql        $s0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D4E78u;
    {
        const bool branch_taken_0x1d4e78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4e78) {
            ctx->pc = 0x1D4E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4E78u;
            // 0x1d4e7c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4ED0u;
            goto label_1d4ed0;
        }
    }
    ctx->pc = 0x1D4E80u;
    // 0x1d4e80: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d4e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d4e84: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d4e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d4e88: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1d4e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d4e8c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1d4e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1d4e90: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D4E90u;
    {
        const bool branch_taken_0x1d4e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E90u;
        // 0x1d4e94: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e90) {
            ctx->pc = 0x1D4ED0u;
            goto label_1d4ed0;
        }
    }
    ctx->pc = 0x1D4E98u;
label_1d4e98:
    // 0x1d4e98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d4e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e9c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D4E9Cu;
    {
        const bool branch_taken_0x1d4e9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E9Cu;
        // 0x1d4ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e9c) {
            ctx->pc = 0x1D4EC8u;
            goto label_1d4ec8;
        }
    }
    ctx->pc = 0x1D4EA4u;
    // 0x1d4ea4: 0x0  nop
    ctx->pc = 0x1d4ea4u;
    // NOP
label_1d4ea8:
    // 0x1d4ea8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4EA8u;
    {
        const bool branch_taken_0x1d4ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EA8u;
        // 0x1d4eac: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ea8) {
            ctx->pc = 0x1D4EC0u;
            goto label_1d4ec0;
        }
    }
    ctx->pc = 0x1D4EB0u;
    // 0x1d4eb0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d4eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d4eb4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1d4eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1d4eb8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1d4eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d4ebc: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1d4ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1d4ec0:
    // 0x1d4ec0: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D4EC0u;
    {
        const bool branch_taken_0x1d4ec0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EC0u;
        // 0x1d4ec4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ec0) {
            ctx->pc = 0x1D4EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4ea8;
        }
    }
    ctx->pc = 0x1D4EC8u;
label_1d4ec8:
    // 0x1d4ec8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d4ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4ecc: 0x0  nop
    ctx->pc = 0x1d4eccu;
    // NOP
label_1d4ed0:
    // 0x1d4ed0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d4ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4ed4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1d4ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d4ed8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D4ED8u;
    {
        const bool branch_taken_0x1d4ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D4EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4ED8u;
        // 0x1d4edc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ed8) {
            ctx->pc = 0x1D4F00u;
            goto label_1d4f00;
        }
    }
    ctx->pc = 0x1D4EE0u;
    // 0x1d4ee0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1d4ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1d4ee4: 0x0  nop
    ctx->pc = 0x1d4ee4u;
    // NOP
label_1d4ee8:
    // 0x1d4ee8: 0x0  nop
    ctx->pc = 0x1d4ee8u;
    // NOP
    // 0x1d4eec: 0x0  nop
    ctx->pc = 0x1d4eecu;
    // NOP
    // 0x1d4ef0: 0x0  nop
    ctx->pc = 0x1d4ef0u;
    // NOP
    // 0x1d4ef4: 0x0  nop
    ctx->pc = 0x1d4ef4u;
    // NOP
    // 0x1d4ef8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D4EF8u;
    {
        const bool branch_taken_0x1d4ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D4EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EF8u;
        // 0x1d4efc: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ef8) {
            ctx->pc = 0x1D4EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4ee8;
        }
    }
    ctx->pc = 0x1D4F00u;
label_1d4f00:
    // 0x1d4f00: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4F00u;
    {
        const bool branch_taken_0x1d4f00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F00u;
        // 0x1d4f04: 0x2f31021  addu        $v0, $s7, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f00) {
            ctx->pc = 0x1D4F14u;
            goto label_1d4f14;
        }
    }
    ctx->pc = 0x1D4F08u;
    // 0x1d4f08: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1D4F08u;
    SET_GPR_U32(ctx, 31, 0x1D4F10u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1D4F08u, 0x1D4F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F10u;
label_1d4f10:
    // 0x1d4f10: 0x2f31021  addu        $v0, $s7, $s3
    ctx->pc = 0x1d4f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
label_1d4f14:
    // 0x1d4f14: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x1d4f14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x1d4f18: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1d4f18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1d4f1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4F1Cu;
    {
        const bool branch_taken_0x1d4f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F1Cu;
        // 0x1d4f20: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f1c) {
            ctx->pc = 0x1D4F34u;
            goto label_1d4f34;
        }
    }
    ctx->pc = 0x1D4F24u;
label_1d4f24:
    // 0x1d4f24: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x1d4f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1d4f28: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x1d4f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1d4f2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d4f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4f30: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d4f30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1d4f34:
    // 0x1d4f34: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1d4f34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d4f38: 0x2ac2080d  slti        $v0, $s6, 0x80D
    ctx->pc = 0x1d4f38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2061) ? 1 : 0);
    // 0x1d4f3c: 0x1440ff80  bnez        $v0, . + 4 + (-0x80 << 2)
    ctx->pc = 0x1D4F3Cu;
    {
        const bool branch_taken_0x1d4f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F3Cu;
        // 0x1d4f40: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f3c) {
            ctx->pc = 0x1D4D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4d40;
        }
    }
    ctx->pc = 0x1D4F44u;
    // 0x1d4f44: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d4f44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4f48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d4f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4f4c: 0x0  nop
    ctx->pc = 0x1d4f4cu;
    // NOP
label_1d4f50:
    // 0x1d4f50: 0xc06c04c  jal         func_1B0130
    ctx->pc = 0x1D4F50u;
    SET_GPR_U32(ctx, 31, 0x1D4F58u);
    ctx->pc = 0x1B0130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0130u, 0x1D4F50u, 0x1D4F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F58u;
label_1d4f58:
    // 0x1d4f58: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D4F58u;
    {
        const bool branch_taken_0x1d4f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F58u;
        // 0x1d4f5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f58) {
            ctx->pc = 0x1D4F80u;
            goto label_1d4f80;
        }
    }
    ctx->pc = 0x1D4F60u;
    // 0x1d4f60: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x1d4f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d4f64: 0xc075272  jal         func_1D49C8
    ctx->pc = 0x1D4F64u;
    SET_GPR_U32(ctx, 31, 0x1D4F6Cu);
    ctx->pc = 0x1D4F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4F64u;
    // 0x1d4f68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49C8u, 0x1D4F64u, 0x1D4F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F6Cu;
label_1d4f6c:
    // 0x1d4f6c: 0x8ea40014  lw          $a0, 0x14($s5)
    ctx->pc = 0x1d4f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1d4f70: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1d4f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1d4f74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d4f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d4f78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4F78u;
    {
        const bool branch_taken_0x1d4f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F78u;
        // 0x1d4f7c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f78) {
            ctx->pc = 0x1D4F90u;
            goto label_1d4f90;
        }
    }
    ctx->pc = 0x1D4F80u;
label_1d4f80:
    // 0x1d4f80: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x1d4f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1d4f84: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x1d4f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1d4f88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d4f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4f8c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d4f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1d4f90:
    // 0x1d4f90: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1d4f90u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d4f94: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1d4f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4f98: 0x288201ba  slti        $v0, $a0, 0x1BA
    ctx->pc = 0x1d4f98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)442) ? 1 : 0);
    // 0x1d4f9c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1D4F9Cu;
    {
        const bool branch_taken_0x1d4f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4f9c) {
            ctx->pc = 0x1D4F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4f50;
        }
    }
    ctx->pc = 0x1D4FA4u;
label_1d4fa4:
    // 0x1d4fa4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1d4fa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d4fa8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1d4fa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d4fac: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1d4facu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d4fb0: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1d4fb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d4fb4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1d4fb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d4fb8: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1d4fb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d4fbc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1d4fbcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d4fc0: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x1d4fc0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1d4fc4: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x1d4fc4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d4fc8: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1d4fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1d4fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FCCu;
        // 0x1d4fd0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4FD4u;
    // 0x1d4fd4: 0x0  nop
    ctx->pc = 0x1d4fd4u;
    // NOP
    ctx->pc = 0x1d4fd8u;
}
