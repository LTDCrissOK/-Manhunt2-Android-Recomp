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

// Function: sub_002779A0
// Address: 0x2779a0 - 0x277af8
void sub_002779A0_0x2779a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002779A0_0x2779a0");
#endif

    switch (ctx->pc) {
        case 0x2779d4u: goto label_2779d4;
        case 0x277a0cu: goto label_277a0c;
        case 0x277a10u: goto label_277a10;
        case 0x277a48u: goto label_277a48;
        case 0x277a54u: goto label_277a54;
        case 0x277a8cu: goto label_277a8c;
        case 0x277a94u: goto label_277a94;
        case 0x277ac0u: goto label_277ac0;
        default: break;
    }

    ctx->pc = 0x2779a0u;

    // 0x2779a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2779a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2779a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2779a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2779a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2779a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2779ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2779acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2779b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2779b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2779b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2779b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2779b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2779b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2779bc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2779bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2779c0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2779c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2779c4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2779c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2779c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2779c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2779cc: 0xc09ddfc  jal         func_2777F0
    ctx->pc = 0x2779CCu;
    SET_GPR_U32(ctx, 31, 0x2779D4u);
    ctx->pc = 0x2779D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2779CCu;
    // 0x2779d0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777F0u, 0x2779CCu, 0x2779D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2779D4u;
label_2779d4:
    // 0x2779d4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2779D4u;
    {
        const bool branch_taken_0x2779d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2779d4) {
            ctx->pc = 0x2779D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2779D4u;
            // 0x2779d8: 0x82030004  lb          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2779E4u;
            goto label_2779e4;
        }
    }
    ctx->pc = 0x2779DCu;
    // 0x2779dc: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2779DCu;
    {
        const bool branch_taken_0x2779dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2779E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2779DCu;
        // 0x2779e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2779dc) {
            ctx->pc = 0x277AC8u;
            goto label_277ac8;
        }
    }
    ctx->pc = 0x2779E4u;
label_2779e4:
    // 0x2779e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2779e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2779e8: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x2779e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
    // 0x2779ec: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2779ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2779f0: 0x26120004  addiu       $s2, $s0, 0x4
    ctx->pc = 0x2779f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2779f4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2779F4u;
    {
        const bool branch_taken_0x2779f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2779F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2779F4u;
        // 0x2779f8: 0x3c170047  lui         $s7, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2779f4) {
            ctx->pc = 0x277A08u;
            goto label_277a08;
        }
    }
    ctx->pc = 0x2779FCu;
    // 0x2779fc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2779fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x277a00: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x277A00u;
    {
        const bool branch_taken_0x277a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x277a00) {
            ctx->pc = 0x277A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277A00u;
            // 0x277a04: 0x8e030114  lw          $v1, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277A38u;
            goto label_277a38;
        }
    }
    ctx->pc = 0x277A08u;
label_277a08:
    // 0x277a08: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x277a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_277a0c:
    // 0x277a0c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x277a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_277a10:
    // 0x277a10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x277a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x277a14: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x277a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x277a18: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x277a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x277a1c: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x277a1cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x277a20: 0x5083fffb  beql        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x277A20u;
    {
        const bool branch_taken_0x277a20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x277a20) {
            ctx->pc = 0x277A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277A20u;
            // 0x277a24: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277a10;
        }
    }
    ctx->pc = 0x277A28u;
    // 0x277a28: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x277a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x277a2c: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x277A2Cu;
    {
        const bool branch_taken_0x277a2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x277a2c) {
            ctx->pc = 0x277A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277A2Cu;
            // 0x277a30: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277A0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277a0c;
        }
    }
    ctx->pc = 0x277A34u;
    // 0x277a34: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x277a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_277a38:
    // 0x277a38: 0x24160020  addiu       $s6, $zero, 0x20
    ctx->pc = 0x277a38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x277a3c: 0x24150009  addiu       $s5, $zero, 0x9
    ctx->pc = 0x277a3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x277a40: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x277A40u;
    {
        const bool branch_taken_0x277a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277A40u;
        // 0x277a44: 0x2414000d  addiu       $s4, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277a40) {
            ctx->pc = 0x277A5Cu;
            goto label_277a5c;
        }
    }
    ctx->pc = 0x277A48u;
label_277a48:
    // 0x277a48: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x277a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x277a4c: 0xc0d75c6  jal         func_35D718
    ctx->pc = 0x277A4Cu;
    SET_GPR_U32(ctx, 31, 0x277A54u);
    ctx->pc = 0x277A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277A4Cu;
    // 0x277a50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D718u, 0x277A4Cu, 0x277A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277A54u;
label_277a54:
    // 0x277a54: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x277a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x277a58: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x277a58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_277a5c:
    // 0x277a5c: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x277a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x277a60: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x277a60u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x277a64: 0x10d60006  beq         $a2, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x277A64u;
    {
        const bool branch_taken_0x277a64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 22));
        ctx->pc = 0x277A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277A64u;
        // 0x277a68: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277a64) {
            ctx->pc = 0x277A80u;
            goto label_277a80;
        }
    }
    ctx->pc = 0x277A6Cu;
    // 0x277a6c: 0x50d50005  beql        $a2, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x277A6Cu;
    {
        const bool branch_taken_0x277a6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 21));
        if (branch_taken_0x277a6c) {
            ctx->pc = 0x277A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277A6Cu;
            // 0x277a70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277A84u;
            goto label_277a84;
        }
    }
    ctx->pc = 0x277A74u;
    // 0x277a74: 0x14d4fff4  bne         $a2, $s4, . + 4 + (-0xC << 2)
    ctx->pc = 0x277A74u;
    {
        const bool branch_taken_0x277a74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 20));
        ctx->pc = 0x277A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277A74u;
        // 0x277a78: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277a74) {
            ctx->pc = 0x277A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277a48;
        }
    }
    ctx->pc = 0x277A7Cu;
    // 0x277a7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x277a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_277a80:
    // 0x277a80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x277a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_277a84:
    // 0x277a84: 0xc0d75c6  jal         func_35D718
    ctx->pc = 0x277A84u;
    SET_GPR_U32(ctx, 31, 0x277A8Cu);
    ctx->pc = 0x277A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277A84u;
    // 0x277a88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D718u, 0x277A84u, 0x277A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277A8Cu;
label_277a8c:
    // 0x277a8c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x277A8Cu;
    SET_GPR_U32(ctx, 31, 0x277A94u);
    ctx->pc = 0x277A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277A8Cu;
    // 0x277a90: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x277A8Cu, 0x277A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277A94u;
label_277a94:
    // 0x277a94: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x277a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x277a98: 0x86240006  lh          $a0, 0x6($s1)
    ctx->pc = 0x277a98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x277a9c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x277a9cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x277aa0: 0x96250006  lhu         $a1, 0x6($s1)
    ctx->pc = 0x277aa0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x277aa4: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x277aa4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x277aa8: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x277AA8u;
    {
        const bool branch_taken_0x277aa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x277AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277AA8u;
        // 0x277aac: 0xa6220004  sh          $v0, 0x4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277aa8) {
            ctx->pc = 0x277AB4u;
            goto label_277ab4;
        }
    }
    ctx->pc = 0x277AB0u;
    // 0x277ab0: 0xa6250004  sh          $a1, 0x4($s1)
    ctx->pc = 0x277ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 5));
label_277ab4:
    // 0x277ab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x277ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ab8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x277AB8u;
    SET_GPR_U32(ctx, 31, 0x277AC0u);
    ctx->pc = 0x277ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277AB8u;
    // 0x277abc: 0x26e582b8  addiu       $a1, $s7, -0x7D48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294935224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x277AB8u, 0x277AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277AC0u;
label_277ac0:
    // 0x277ac0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x277ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x277ac4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x277ac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_277ac8:
    // 0x277ac8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x277ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277acc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x277accu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x277ad0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x277ad0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277ad4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x277ad4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x277ad8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x277ad8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277adc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x277adcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x277ae0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x277ae0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x277ae4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x277ae4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x277ae8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x277ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x277aec: 0x3e00008  jr          $ra
    ctx->pc = 0x277AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277AECu;
        // 0x277af0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277AF4u;
    // 0x277af4: 0x0  nop
    ctx->pc = 0x277af4u;
    // NOP
    ctx->pc = 0x277af8u;
}
