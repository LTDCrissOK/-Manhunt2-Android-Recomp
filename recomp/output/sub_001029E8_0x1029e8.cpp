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

// Function: sub_001029E8
// Address: 0x1029e8 - 0x102b20
void sub_001029E8_0x1029e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001029E8_0x1029e8");
#endif

    switch (ctx->pc) {
        case 0x102a10u: goto label_102a10;
        case 0x102a48u: goto label_102a48;
        case 0x102a58u: goto label_102a58;
        case 0x102a60u: goto label_102a60;
        case 0x102a70u: goto label_102a70;
        case 0x102a80u: goto label_102a80;
        case 0x102a94u: goto label_102a94;
        case 0x102aacu: goto label_102aac;
        case 0x102ac8u: goto label_102ac8;
        case 0x102ae0u: goto label_102ae0;
        case 0x102af4u: goto label_102af4;
        default: break;
    }

    ctx->pc = 0x1029e8u;

    // 0x1029e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1029e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1029ec: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1029ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1029f0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1029f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1029f4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1029f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1029f8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1029f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1029fc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1029fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x102a00: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x102a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x102a04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x102a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x102a08: 0xc040a60  jal         func_102980
    ctx->pc = 0x102A08u;
    SET_GPR_U32(ctx, 31, 0x102A10u);
    ctx->pc = 0x102A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102A08u;
    // 0x102a0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102980u, 0x102A08u, 0x102A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102A10u;
label_102a10:
    // 0x102a10: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x102a10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102a14: 0x2e82001b  sltiu       $v0, $s4, 0x1B
    ctx->pc = 0x102a14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
    // 0x102a18: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x102A18u;
    {
        const bool branch_taken_0x102a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A18u;
        // 0x102a1c: 0x3c020067  lui         $v0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a18) {
            ctx->pc = 0x102AF4u;
            goto label_102af4;
        }
    }
    ctx->pc = 0x102A20u;
    // 0x102a20: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x102a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x102a24: 0x24428e98  addiu       $v0, $v0, -0x7168
    ctx->pc = 0x102a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938264));
    // 0x102a28: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x102a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x102a2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x102a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102a30: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x102a30u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102a34: 0x10a4002f  beq         $a1, $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x102A34u;
    {
        const bool branch_taken_0x102a34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x102A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A34u;
        // 0x102a38: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a34) {
            ctx->pc = 0x102AF4u;
            goto label_102af4;
        }
    }
    ctx->pc = 0x102A3Cu;
    // 0x102a3c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x102a3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102a40: 0xc0f6732  jal         func_3D9CC8
    ctx->pc = 0x102A40u;
    SET_GPR_U32(ctx, 31, 0x102A48u);
    ctx->pc = 0x102A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102A40u;
    // 0x102a44: 0x24842d90  addiu       $a0, $a0, 0x2D90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9CC8u, 0x102A40u, 0x102A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102A48u;
label_102a48:
    // 0x102a48: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x102A48u;
    {
        const bool branch_taken_0x102a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A48u;
        // 0x102a4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a48) {
            ctx->pc = 0x102A68u;
            goto label_102a68;
        }
    }
    ctx->pc = 0x102A50u;
    // 0x102a50: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x102A50u;
    {
        const bool branch_taken_0x102a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A50u;
        // 0x102a54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a50) {
            ctx->pc = 0x102AF8u;
            goto label_102af8;
        }
    }
    ctx->pc = 0x102A58u;
label_102a58:
    // 0x102a58: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x102A58u;
    SET_GPR_U32(ctx, 31, 0x102A60u);
    ctx->pc = 0x102A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102A58u;
    // 0x102a5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x102A58u, 0x102A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102A60u;
label_102a60:
    // 0x102a60: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x102A60u;
    {
        const bool branch_taken_0x102a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A60u;
        // 0x102a64: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a60) {
            ctx->pc = 0x102AF8u;
            goto label_102af8;
        }
    }
    ctx->pc = 0x102A68u;
label_102a68:
    // 0x102a68: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x102A68u;
    SET_GPR_U32(ctx, 31, 0x102A70u);
    ctx->pc = 0x102A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102A68u;
    // 0x102a6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x102A68u, 0x102A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102A70u;
label_102a70:
    // 0x102a70: 0xa3a00010  sb          $zero, 0x10($sp)
    ctx->pc = 0x102a70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x102a74: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x102A74u;
    {
        const bool branch_taken_0x102a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A74u;
        // 0x102a78: 0x27b30010  addiu       $s3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a74) {
            ctx->pc = 0x102AD0u;
            goto label_102ad0;
        }
    }
    ctx->pc = 0x102A7Cu;
    // 0x102a7c: 0x0  nop
    ctx->pc = 0x102a7cu;
    // NOP
label_102a80:
    // 0x102a80: 0x14540019  bne         $v0, $s4, . + 4 + (0x19 << 2)
    ctx->pc = 0x102A80u;
    {
        const bool branch_taken_0x102a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x102A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A80u;
        // 0x102a84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a80) {
            ctx->pc = 0x102AE8u;
            goto label_102ae8;
        }
    }
    ctx->pc = 0x102A88u;
    // 0x102a88: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x102a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x102a8c: 0xc0f6744  jal         func_3D9D10
    ctx->pc = 0x102A8Cu;
    SET_GPR_U32(ctx, 31, 0x102A94u);
    ctx->pc = 0x102A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102A8Cu;
    // 0x102a90: 0x27a50014  addiu       $a1, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9D10u, 0x102A8Cu, 0x102A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102A94u;
label_102a94:
    // 0x102a94: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x102A94u;
    {
        const bool branch_taken_0x102a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A94u;
        // 0x102a98: 0x8fb00014  lw          $s0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a94) {
            ctx->pc = 0x102AE8u;
            goto label_102ae8;
        }
    }
    ctx->pc = 0x102A9Cu;
    // 0x102a9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x102a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102aa0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x102aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102aa4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x102AA4u;
    SET_GPR_U32(ctx, 31, 0x102AACu);
    ctx->pc = 0x102AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102AA4u;
    // 0x102aa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x102AA4u, 0x102AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102AACu;
label_102aac:
    // 0x102aac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x102aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x102ab0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x102AB0u;
    {
        const bool branch_taken_0x102ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102ab0) {
            ctx->pc = 0x102AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102AB0u;
            // 0x102ab4: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102AB8u;
            goto label_102ab8;
        }
    }
    ctx->pc = 0x102AB8u;
label_102ab8:
    // 0x102ab8: 0x1620ffe7  bnez        $s1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x102AB8u;
    {
        const bool branch_taken_0x102ab8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x102ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AB8u;
        // 0x102abc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ab8) {
            ctx->pc = 0x102A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102a58;
        }
    }
    ctx->pc = 0x102AC0u;
    // 0x102ac0: 0xc0f659e  jal         func_3D9678
    ctx->pc = 0x102AC0u;
    SET_GPR_U32(ctx, 31, 0x102AC8u);
    ctx->pc = 0x102AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102AC0u;
    // 0x102ac4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9678u, 0x102AC0u, 0x102AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102AC8u;
label_102ac8:
    // 0x102ac8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x102AC8u;
    {
        const bool branch_taken_0x102ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AC8u;
        // 0x102acc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ac8) {
            ctx->pc = 0x102AECu;
            goto label_102aec;
        }
    }
    ctx->pc = 0x102AD0u;
label_102ad0:
    // 0x102ad0: 0x26b22d90  addiu       $s2, $s5, 0x2D90
    ctx->pc = 0x102ad0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 11664));
    // 0x102ad4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x102ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ad8: 0xc0f658a  jal         func_3D9628
    ctx->pc = 0x102AD8u;
    SET_GPR_U32(ctx, 31, 0x102AE0u);
    ctx->pc = 0x102ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102AD8u;
    // 0x102adc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9628u, 0x102AD8u, 0x102AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102AE0u;
label_102ae0:
    // 0x102ae0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x102AE0u;
    {
        const bool branch_taken_0x102ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AE0u;
        // 0x102ae4: 0x93a20010  lbu         $v0, 0x10($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ae0) {
            ctx->pc = 0x102A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102a80;
        }
    }
    ctx->pc = 0x102AE8u;
label_102ae8:
    // 0x102ae8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x102ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_102aec:
    // 0x102aec: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x102AECu;
    SET_GPR_U32(ctx, 31, 0x102AF4u);
    ctx->pc = 0x102AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102AECu;
    // 0x102af0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x102AECu, 0x102AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102AF4u;
label_102af4:
    // 0x102af4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x102af4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102af8:
    // 0x102af8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x102af8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102afc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x102afcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x102b00: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x102b00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102b04: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x102b04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x102b08: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x102b08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x102b0c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x102b0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x102b10: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x102b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x102b14: 0x3e00008  jr          $ra
    ctx->pc = 0x102B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B14u;
        // 0x102b18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102B1Cu;
    // 0x102b1c: 0x0  nop
    ctx->pc = 0x102b1cu;
    // NOP
    ctx->pc = 0x102b20u;
}
