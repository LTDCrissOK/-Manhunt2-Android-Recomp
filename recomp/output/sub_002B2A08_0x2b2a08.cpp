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

// Function: sub_002B2A08
// Address: 0x2b2a08 - 0x2b2d98
void sub_002B2A08_0x2b2a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2A08_0x2b2a08");
#endif

    switch (ctx->pc) {
        case 0x2b2a88u: goto label_2b2a88;
        case 0x2b2b04u: goto label_2b2b04;
        case 0x2b2b8cu: goto label_2b2b8c;
        case 0x2b2b9cu: goto label_2b2b9c;
        case 0x2b2c04u: goto label_2b2c04;
        case 0x2b2c14u: goto label_2b2c14;
        case 0x2b2cacu: goto label_2b2cac;
        case 0x2b2d2cu: goto label_2b2d2c;
        default: break;
    }

    ctx->pc = 0x2b2a08u;

    // 0x2b2a08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b2a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b2a0c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2b2a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2b2a10: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2b2a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2b2a14: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2b2a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b2a18: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2b2a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2b2a1c: 0x2454add8  addiu       $s4, $v0, -0x5228
    ctx->pc = 0x2b2a1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946264));
    // 0x2b2a20: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2b2a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2b2a24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b2a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b2a28: 0xac40add8  sw          $zero, -0x5228($v0)
    ctx->pc = 0x2b2a28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BADD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BADD8u, _value); } while (0);
    // 0x2b2a2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b2a2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2a30: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b2a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b2a34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b2a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b2a38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b2a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b2a3c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2b2a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2b2a40: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x2b2a40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BADDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BADDCu, _value); } while (0);
    // 0x2b2a44: 0xae850008  sw          $a1, 0x8($s4)
    ctx->pc = 0x2b2a44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6BADE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BADE0u, _value); } while (0);
    // 0x2b2a48: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x2b2a48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BADE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BADE4u, _value); } while (0);
    // 0x2b2a4c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2b2a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2b2a50: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2b2a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2b2a54: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2b2a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2b2a58: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x2b2a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x2b2a5c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2b2a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2b2a60: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2b2a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b2a64: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2B2A64u;
    {
        const bool branch_taken_0x2b2a64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A64u;
        // 0x2b2a68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2a64) {
            ctx->pc = 0x2B2ADCu;
            goto label_2b2adc;
        }
    }
    ctx->pc = 0x2B2A6Cu;
    // 0x2b2a6c: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x2b2a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x2b2a70: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x2b2a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x2b2a74: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2B2A74u;
    {
        const bool branch_taken_0x2b2a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2a74) {
            ctx->pc = 0x2B2A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2A74u;
            // 0x2b2a78: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2ADCu;
            goto label_2b2adc;
        }
    }
    ctx->pc = 0x2B2A7Cu;
    // 0x2b2a7c: 0x8c900274  lw          $s0, 0x274($a0)
    ctx->pc = 0x2b2a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x2b2a80: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2B2A80u;
    SET_GPR_U32(ctx, 31, 0x2B2A88u);
    ctx->pc = 0x2B2A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2A80u;
    // 0x2b2a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2B2A80u, 0x2B2A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2A88u;
label_2b2a88:
    // 0x2b2a88: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2b2a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2b2a8c: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B2A8Cu;
    {
        const bool branch_taken_0x2b2a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2a8c) {
            ctx->pc = 0x2B2A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2A8Cu;
            // 0x2b2a90: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2ADCu;
            goto label_2b2adc;
        }
    }
    ctx->pc = 0x2B2A94u;
    // 0x2b2a94: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x2b2a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2b2a98: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2A98u;
    {
        const bool branch_taken_0x2b2a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A98u;
        // 0x2b2a9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2a98) {
            ctx->pc = 0x2B2AB0u;
            goto label_2b2ab0;
        }
    }
    ctx->pc = 0x2B2AA0u;
    // 0x2b2aa0: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2b2aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2b2aa4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2AA4u;
    {
        const bool branch_taken_0x2b2aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AA4u;
        // 0x2b2aa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2aa4) {
            ctx->pc = 0x2B2AB0u;
            goto label_2b2ab0;
        }
    }
    ctx->pc = 0x2B2AACu;
    // 0x2b2aac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b2aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2ab0:
    // 0x2b2ab0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2B2AB0u;
    {
        const bool branch_taken_0x2b2ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2ab0) {
            ctx->pc = 0x2B2AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2AB0u;
            // 0x2b2ab4: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2ADCu;
            goto label_2b2adc;
        }
    }
    ctx->pc = 0x2B2AB8u;
    // 0x2b2ab8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2b2ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2b2abc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b2abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b2ac0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2b2ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2b2ac4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b2ac4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b2ac8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b2ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b2acc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b2accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b2ad0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2b2ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2b2ad4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2b2ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2b2ad8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2b2ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2b2adc:
    // 0x2b2adc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2b2adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b2ae0: 0x5080001f  beql        $a0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2B2AE0u;
    {
        const bool branch_taken_0x2b2ae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2ae0) {
            ctx->pc = 0x2B2AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2AE0u;
            // 0x2b2ae4: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2B60u;
            goto label_2b2b60;
        }
    }
    ctx->pc = 0x2B2AE8u;
    // 0x2b2ae8: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x2b2ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x2b2aec: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x2b2aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x2b2af0: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B2AF0u;
    {
        const bool branch_taken_0x2b2af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2af0) {
            ctx->pc = 0x2B2AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2AF0u;
            // 0x2b2af4: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2B60u;
            goto label_2b2b60;
        }
    }
    ctx->pc = 0x2B2AF8u;
    // 0x2b2af8: 0x8c900274  lw          $s0, 0x274($a0)
    ctx->pc = 0x2b2af8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x2b2afc: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2B2AFCu;
    SET_GPR_U32(ctx, 31, 0x2B2B04u);
    ctx->pc = 0x2B2B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2AFCu;
    // 0x2b2b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2B2AFCu, 0x2B2B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2B04u;
label_2b2b04:
    // 0x2b2b04: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2b2b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2b2b08: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B2B08u;
    {
        const bool branch_taken_0x2b2b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2b08) {
            ctx->pc = 0x2B2B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2B08u;
            // 0x2b2b0c: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2B60u;
            goto label_2b2b60;
        }
    }
    ctx->pc = 0x2B2B10u;
    // 0x2b2b10: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x2b2b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2b2b14: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2B14u;
    {
        const bool branch_taken_0x2b2b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B14u;
        // 0x2b2b18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2b14) {
            ctx->pc = 0x2B2B2Cu;
            goto label_2b2b2c;
        }
    }
    ctx->pc = 0x2B2B1Cu;
    // 0x2b2b1c: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2b2b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2b2b20: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2B20u;
    {
        const bool branch_taken_0x2b2b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B20u;
        // 0x2b2b24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2b20) {
            ctx->pc = 0x2B2B2Cu;
            goto label_2b2b2c;
        }
    }
    ctx->pc = 0x2B2B28u;
    // 0x2b2b28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b2b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2b2c:
    // 0x2b2b2c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2B2B2Cu;
    {
        const bool branch_taken_0x2b2b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2b2c) {
            ctx->pc = 0x2B2B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2B2Cu;
            // 0x2b2b30: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2B60u;
            goto label_2b2b60;
        }
    }
    ctx->pc = 0x2B2B34u;
    // 0x2b2b34: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2b2b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2b2b38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b2b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b2b3c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2b2b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2b2b40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b2b40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b2b44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b2b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b2b48: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b2b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b2b4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b2b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b2b50: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2b2b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2b2b54: 0x12240087  beq         $s1, $a0, . + 4 + (0x87 << 2)
    ctx->pc = 0x2B2B54u;
    {
        const bool branch_taken_0x2b2b54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B2B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B54u;
        // 0x2b2b58: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2b54) {
            ctx->pc = 0x2B2D74u;
            goto label_2b2d74;
        }
    }
    ctx->pc = 0x2B2B5Cu;
    // 0x2b2b5c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2b2b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2b2b60:
    // 0x2b2b60: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2b2b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b2b64: 0x5080001c  beql        $a0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2B2B64u;
    {
        const bool branch_taken_0x2b2b64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2b64) {
            ctx->pc = 0x2B2B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2B64u;
            // 0x2b2b68: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2BD8u;
            goto label_2b2bd8;
        }
    }
    ctx->pc = 0x2B2B6Cu;
    // 0x2b2b6c: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x2b2b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x2b2b70: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x2b2b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x2b2b74: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B2B74u;
    {
        const bool branch_taken_0x2b2b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2b74) {
            ctx->pc = 0x2B2B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2B74u;
            // 0x2b2b78: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2BD8u;
            goto label_2b2bd8;
        }
    }
    ctx->pc = 0x2B2B7Cu;
    // 0x2b2b7c: 0x8c900274  lw          $s0, 0x274($a0)
    ctx->pc = 0x2b2b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x2b2b80: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b2b80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2b84: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2B2B84u;
    SET_GPR_U32(ctx, 31, 0x2B2B8Cu);
    ctx->pc = 0x2B2B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2B84u;
    // 0x2b2b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2B2B84u, 0x2B2B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2B8Cu;
label_2b2b8c:
    // 0x2b2b8c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B2B8Cu;
    {
        const bool branch_taken_0x2b2b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2b8c) {
            ctx->pc = 0x2B2B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2B8Cu;
            // 0x2b2b90: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2BA8u;
            goto label_2b2ba8;
        }
    }
    ctx->pc = 0x2B2B94u;
    // 0x2b2b94: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2B2B94u;
    SET_GPR_U32(ctx, 31, 0x2B2B9Cu);
    ctx->pc = 0x2B2B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2B94u;
    // 0x2b2b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2B2B94u, 0x2B2B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2B9Cu;
label_2b2b9c:
    // 0x2b2b9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b2b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b2ba0: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B2BA0u;
    {
        const bool branch_taken_0x2b2ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b2ba0) {
            ctx->pc = 0x2B2BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2BA0u;
            // 0x2b2ba4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2BA8u;
            goto label_2b2ba8;
        }
    }
    ctx->pc = 0x2B2BA8u;
label_2b2ba8:
    // 0x2b2ba8: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x2B2BA8u;
    {
        const bool branch_taken_0x2b2ba8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2BA8u;
        // 0x2b2bac: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ba8) {
            ctx->pc = 0x2B2BD4u;
            goto label_2b2bd4;
        }
    }
    ctx->pc = 0x2B2BB0u;
    // 0x2b2bb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b2bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b2bb4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2b2bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2b2bb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b2bb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b2bbc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b2bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b2bc0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b2bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b2bc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b2bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b2bc8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2b2bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2b2bcc: 0x12240069  beq         $s1, $a0, . + 4 + (0x69 << 2)
    ctx->pc = 0x2B2BCCu;
    {
        const bool branch_taken_0x2b2bcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B2BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2BCCu;
        // 0x2b2bd0: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2bcc) {
            ctx->pc = 0x2B2D74u;
            goto label_2b2d74;
        }
    }
    ctx->pc = 0x2B2BD4u;
label_2b2bd4:
    // 0x2b2bd4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2b2bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2b2bd8:
    // 0x2b2bd8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2b2bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b2bdc: 0x5080001c  beql        $a0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2B2BDCu;
    {
        const bool branch_taken_0x2b2bdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2bdc) {
            ctx->pc = 0x2B2BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2BDCu;
            // 0x2b2be0: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2C50u;
            goto label_2b2c50;
        }
    }
    ctx->pc = 0x2B2BE4u;
    // 0x2b2be4: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x2b2be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x2b2be8: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x2b2be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x2b2bec: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B2BECu;
    {
        const bool branch_taken_0x2b2bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2bec) {
            ctx->pc = 0x2B2BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2BECu;
            // 0x2b2bf0: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2C50u;
            goto label_2b2c50;
        }
    }
    ctx->pc = 0x2B2BF4u;
    // 0x2b2bf4: 0x8c900274  lw          $s0, 0x274($a0)
    ctx->pc = 0x2b2bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x2b2bf8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b2bf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2bfc: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2B2BFCu;
    SET_GPR_U32(ctx, 31, 0x2B2C04u);
    ctx->pc = 0x2B2C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2BFCu;
    // 0x2b2c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2B2BFCu, 0x2B2C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2C04u;
label_2b2c04:
    // 0x2b2c04: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B2C04u;
    {
        const bool branch_taken_0x2b2c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2c04) {
            ctx->pc = 0x2B2C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2C04u;
            // 0x2b2c08: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2C20u;
            goto label_2b2c20;
        }
    }
    ctx->pc = 0x2B2C0Cu;
    // 0x2b2c0c: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2B2C0Cu;
    SET_GPR_U32(ctx, 31, 0x2B2C14u);
    ctx->pc = 0x2B2C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2C0Cu;
    // 0x2b2c10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2B2C0Cu, 0x2B2C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2C14u;
label_2b2c14:
    // 0x2b2c14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b2c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b2c18: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B2C18u;
    {
        const bool branch_taken_0x2b2c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b2c18) {
            ctx->pc = 0x2B2C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2C18u;
            // 0x2b2c1c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2C20u;
            goto label_2b2c20;
        }
    }
    ctx->pc = 0x2B2C20u;
label_2b2c20:
    // 0x2b2c20: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x2B2C20u;
    {
        const bool branch_taken_0x2b2c20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C20u;
        // 0x2b2c24: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2c20) {
            ctx->pc = 0x2B2C4Cu;
            goto label_2b2c4c;
        }
    }
    ctx->pc = 0x2B2C28u;
    // 0x2b2c28: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b2c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b2c2c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2b2c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2b2c30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b2c30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b2c34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b2c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b2c38: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b2c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b2c3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b2c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b2c40: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2b2c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2b2c44: 0x1224004b  beq         $s1, $a0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2B2C44u;
    {
        const bool branch_taken_0x2b2c44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B2C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C44u;
        // 0x2b2c48: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2c44) {
            ctx->pc = 0x2B2D74u;
            goto label_2b2d74;
        }
    }
    ctx->pc = 0x2B2C4Cu;
label_2b2c4c:
    // 0x2b2c4c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2b2c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2b2c50:
    // 0x2b2c50: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2b2c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2b2c54: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B2C54u;
    {
        const bool branch_taken_0x2b2c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C54u;
        // 0x2b2c58: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2c54) {
            ctx->pc = 0x2B2C80u;
            goto label_2b2c80;
        }
    }
    ctx->pc = 0x2B2C5Cu;
    // 0x2b2c5c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2b2c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b2c60: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2b2c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2b2c64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b2c64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b2c68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b2c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b2c6c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b2c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b2c70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b2c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b2c74: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2b2c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2b2c78: 0x1224003e  beq         $s1, $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2B2C78u;
    {
        const bool branch_taken_0x2b2c78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B2C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C78u;
        // 0x2b2c7c: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2c78) {
            ctx->pc = 0x2B2D74u;
            goto label_2b2d74;
        }
    }
    ctx->pc = 0x2B2C80u;
label_2b2c80:
    // 0x2b2c80: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2b2c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2b2c84: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2b2c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b2c88: 0x5080001f  beql        $a0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2B2C88u;
    {
        const bool branch_taken_0x2b2c88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2c88) {
            ctx->pc = 0x2B2C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2C88u;
            // 0x2b2c8c: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2D08u;
            goto label_2b2d08;
        }
    }
    ctx->pc = 0x2B2C90u;
    // 0x2b2c90: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x2b2c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x2b2c94: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x2b2c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x2b2c98: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B2C98u;
    {
        const bool branch_taken_0x2b2c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2c98) {
            ctx->pc = 0x2B2C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2C98u;
            // 0x2b2c9c: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2D04u;
            goto label_2b2d04;
        }
    }
    ctx->pc = 0x2B2CA0u;
    // 0x2b2ca0: 0x8c900274  lw          $s0, 0x274($a0)
    ctx->pc = 0x2b2ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x2b2ca4: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2B2CA4u;
    SET_GPR_U32(ctx, 31, 0x2B2CACu);
    ctx->pc = 0x2B2CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2CA4u;
    // 0x2b2ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2B2CA4u, 0x2B2CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2CACu;
label_2b2cac:
    // 0x2b2cac: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2b2cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2b2cb0: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B2CB0u;
    {
        const bool branch_taken_0x2b2cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2cb0) {
            ctx->pc = 0x2B2CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2CB0u;
            // 0x2b2cb4: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2D04u;
            goto label_2b2d04;
        }
    }
    ctx->pc = 0x2B2CB8u;
    // 0x2b2cb8: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x2b2cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2b2cbc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2CBCu;
    {
        const bool branch_taken_0x2b2cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2CBCu;
        // 0x2b2cc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2cbc) {
            ctx->pc = 0x2B2CD4u;
            goto label_2b2cd4;
        }
    }
    ctx->pc = 0x2B2CC4u;
    // 0x2b2cc4: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2b2cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2b2cc8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2CC8u;
    {
        const bool branch_taken_0x2b2cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2CC8u;
        // 0x2b2ccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2cc8) {
            ctx->pc = 0x2B2CD4u;
            goto label_2b2cd4;
        }
    }
    ctx->pc = 0x2B2CD0u;
    // 0x2b2cd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b2cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2cd4:
    // 0x2b2cd4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B2CD4u;
    {
        const bool branch_taken_0x2b2cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2CD4u;
        // 0x2b2cd8: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2cd4) {
            ctx->pc = 0x2B2D00u;
            goto label_2b2d00;
        }
    }
    ctx->pc = 0x2B2CDCu;
    // 0x2b2cdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b2cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b2ce0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2b2ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2b2ce4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b2ce4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b2ce8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b2ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b2cec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b2cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b2cf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b2cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b2cf4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2b2cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2b2cf8: 0x1224001e  beq         $s1, $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B2CF8u;
    {
        const bool branch_taken_0x2b2cf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2CF8u;
        // 0x2b2cfc: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2cf8) {
            ctx->pc = 0x2B2D74u;
            goto label_2b2d74;
        }
    }
    ctx->pc = 0x2B2D00u;
label_2b2d00:
    // 0x2b2d00: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2b2d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2b2d04:
    // 0x2b2d04: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2b2d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2b2d08:
    // 0x2b2d08: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B2D08u;
    {
        const bool branch_taken_0x2b2d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2D08u;
        // 0x2b2d0c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2d08) {
            ctx->pc = 0x2B2D78u;
            goto label_2b2d78;
        }
    }
    ctx->pc = 0x2B2D10u;
    // 0x2b2d10: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x2b2d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x2b2d14: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x2b2d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x2b2d18: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B2D18u;
    {
        const bool branch_taken_0x2b2d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2d18) {
            ctx->pc = 0x2B2D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2D18u;
            // 0x2b2d1c: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2D7Cu;
            goto label_2b2d7c;
        }
    }
    ctx->pc = 0x2B2D20u;
    // 0x2b2d20: 0x8c900274  lw          $s0, 0x274($a0)
    ctx->pc = 0x2b2d20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x2b2d24: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2B2D24u;
    SET_GPR_U32(ctx, 31, 0x2B2D2Cu);
    ctx->pc = 0x2B2D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2D24u;
    // 0x2b2d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2B2D24u, 0x2B2D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2D2Cu;
label_2b2d2c:
    // 0x2b2d2c: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2b2d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2b2d30: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B2D30u;
    {
        const bool branch_taken_0x2b2d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2d30) {
            ctx->pc = 0x2B2D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2D30u;
            // 0x2b2d34: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2D78u;
            goto label_2b2d78;
        }
    }
    ctx->pc = 0x2B2D38u;
    // 0x2b2d38: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x2b2d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2b2d3c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2D3Cu;
    {
        const bool branch_taken_0x2b2d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2D3Cu;
        // 0x2b2d40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2d3c) {
            ctx->pc = 0x2B2D54u;
            goto label_2b2d54;
        }
    }
    ctx->pc = 0x2B2D44u;
    // 0x2b2d44: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2b2d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2b2d48: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2D48u;
    {
        const bool branch_taken_0x2b2d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2D48u;
        // 0x2b2d4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2d48) {
            ctx->pc = 0x2B2D54u;
            goto label_2b2d54;
        }
    }
    ctx->pc = 0x2B2D50u;
    // 0x2b2d50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b2d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2d54:
    // 0x2b2d54: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B2D54u;
    {
        const bool branch_taken_0x2b2d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2D54u;
        // 0x2b2d58: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2d54) {
            ctx->pc = 0x2B2D74u;
            goto label_2b2d74;
        }
    }
    ctx->pc = 0x2B2D5Cu;
    // 0x2b2d5c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b2d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b2d60: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x2b2d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x2b2d64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b2d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b2d68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b2d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b2d6c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2b2d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2b2d70: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2b2d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_2b2d74:
    // 0x2b2d74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b2d74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b2d78:
    // 0x2b2d78: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2b2d78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2b2d7c:
    // 0x2b2d7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b2d7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2d80: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2b2d80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b2d84: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2b2d84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b2d88: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2b2d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2b2d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2D8Cu;
        // 0x2b2d90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2D94u;
    // 0x2b2d94: 0x0  nop
    ctx->pc = 0x2b2d94u;
    // NOP
    ctx->pc = 0x2b2d98u;
}
