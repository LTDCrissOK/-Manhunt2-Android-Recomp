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

// Function: sub_003E1B00
// Address: 0x3e1b00 - 0x3e1c28
void sub_003E1B00_0x3e1b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1B00_0x3e1b00");
#endif

    switch (ctx->pc) {
        case 0x3e1b40u: goto label_3e1b40;
        case 0x3e1b4cu: goto label_3e1b4c;
        case 0x3e1b80u: goto label_3e1b80;
        case 0x3e1b8cu: goto label_3e1b8c;
        case 0x3e1bb0u: goto label_3e1bb0;
        case 0x3e1bbcu: goto label_3e1bbc;
        case 0x3e1bd8u: goto label_3e1bd8;
        case 0x3e1be4u: goto label_3e1be4;
        case 0x3e1c00u: goto label_3e1c00;
        default: break;
    }

    ctx->pc = 0x3e1b00u;

    // 0x3e1b00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e1b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e1b04: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3e1b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3e1b08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e1b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e1b0c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e1b0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1b10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e1b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e1b14: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e1b14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1b18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e1b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e1b1c: 0x26620114  addiu       $v0, $s3, 0x114
    ctx->pc = 0x3e1b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 276));
    // 0x3e1b20: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3e1b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3e1b24: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3e1b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3e1b28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3E1B28u;
    {
        const bool branch_taken_0x3e1b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1B28u;
        // 0x3e1b2c: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1b28) {
            ctx->pc = 0x3E1B58u;
            goto label_3e1b58;
        }
    }
    ctx->pc = 0x3E1B30u;
    // 0x3e1b30: 0x26700144  addiu       $s0, $s3, 0x144
    ctx->pc = 0x3e1b30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 324));
    // 0x3e1b34: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E1B34u;
    {
        const bool branch_taken_0x3e1b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3E1B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1B34u;
        // 0x3e1b38: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1b34) {
            ctx->pc = 0x3E1B58u;
            goto label_3e1b58;
        }
    }
    ctx->pc = 0x3E1B3Cu;
    // 0x3e1b3c: 0x2610ffe8  addiu       $s0, $s0, -0x18
    ctx->pc = 0x3e1b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
label_3e1b40:
    // 0x3e1b40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e1b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1b44: 0xc0f8744  jal         func_3E1D10
    ctx->pc = 0x3E1B44u;
    SET_GPR_U32(ctx, 31, 0x3E1B4Cu);
    ctx->pc = 0x3E1B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1B44u;
    // 0x3e1b48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1D10u, 0x3E1B44u, 0x3E1B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1B4Cu;
label_3e1b4c:
    // 0x3e1b4c: 0x0  nop
    ctx->pc = 0x3e1b4cu;
    // NOP
    // 0x3e1b50: 0x5630fffb  bnel        $s1, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E1B50u;
    {
        const bool branch_taken_0x3e1b50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x3e1b50) {
            ctx->pc = 0x3E1B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1B50u;
            // 0x3e1b54: 0x2610ffe8  addiu       $s0, $s0, -0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1b40;
        }
    }
    ctx->pc = 0x3E1B58u;
label_3e1b58:
    // 0x3e1b58: 0x32550001  andi        $s5, $s2, 0x1
    ctx->pc = 0x3e1b58u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x3e1b5c: 0x267100e4  addiu       $s1, $s3, 0xE4
    ctx->pc = 0x3e1b5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 228));
    // 0x3e1b60: 0x267200b4  addiu       $s2, $s3, 0xB4
    ctx->pc = 0x3e1b60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 180));
    // 0x3e1b64: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x3E1B64u;
    {
        const bool branch_taken_0x3e1b64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1B64u;
        // 0x3e1b68: 0x26740084  addiu       $s4, $s3, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1b64) {
            ctx->pc = 0x3E1B98u;
            goto label_3e1b98;
        }
    }
    ctx->pc = 0x3E1B6Cu;
    // 0x3e1b6c: 0x26700114  addiu       $s0, $s3, 0x114
    ctx->pc = 0x3e1b6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 276));
    // 0x3e1b70: 0x12300009  beq         $s1, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E1B70u;
    {
        const bool branch_taken_0x3e1b70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x3e1b70) {
            ctx->pc = 0x3E1B98u;
            goto label_3e1b98;
        }
    }
    ctx->pc = 0x3E1B78u;
    // 0x3e1b78: 0x2610ffe8  addiu       $s0, $s0, -0x18
    ctx->pc = 0x3e1b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
    // 0x3e1b7c: 0x0  nop
    ctx->pc = 0x3e1b7cu;
    // NOP
label_3e1b80:
    // 0x3e1b80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e1b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1b84: 0xc0f8744  jal         func_3E1D10
    ctx->pc = 0x3E1B84u;
    SET_GPR_U32(ctx, 31, 0x3E1B8Cu);
    ctx->pc = 0x3E1B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1B84u;
    // 0x3e1b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1D10u, 0x3E1B84u, 0x3E1B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1B8Cu;
label_3e1b8c:
    // 0x3e1b8c: 0x0  nop
    ctx->pc = 0x3e1b8cu;
    // NOP
    // 0x3e1b90: 0x5630fffb  bnel        $s1, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E1B90u;
    {
        const bool branch_taken_0x3e1b90 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x3e1b90) {
            ctx->pc = 0x3E1B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1B90u;
            // 0x3e1b94: 0x2610ffe8  addiu       $s0, $s0, -0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1b80;
        }
    }
    ctx->pc = 0x3E1B98u;
label_3e1b98:
    // 0x3e1b98: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x3E1B98u;
    {
        const bool branch_taken_0x3e1b98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1b98) {
            ctx->pc = 0x3E1BC8u;
            goto label_3e1bc8;
        }
    }
    ctx->pc = 0x3E1BA0u;
    // 0x3e1ba0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3e1ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1ba4: 0x12500008  beq         $s2, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E1BA4u;
    {
        const bool branch_taken_0x3e1ba4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        if (branch_taken_0x3e1ba4) {
            ctx->pc = 0x3E1BC8u;
            goto label_3e1bc8;
        }
    }
    ctx->pc = 0x3E1BACu;
    // 0x3e1bac: 0x2610ffe8  addiu       $s0, $s0, -0x18
    ctx->pc = 0x3e1bacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
label_3e1bb0:
    // 0x3e1bb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e1bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1bb4: 0xc0f8744  jal         func_3E1D10
    ctx->pc = 0x3E1BB4u;
    SET_GPR_U32(ctx, 31, 0x3E1BBCu);
    ctx->pc = 0x3E1BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1BB4u;
    // 0x3e1bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1D10u, 0x3E1BB4u, 0x3E1BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1BBCu;
label_3e1bbc:
    // 0x3e1bbc: 0x0  nop
    ctx->pc = 0x3e1bbcu;
    // NOP
    // 0x3e1bc0: 0x5650fffb  bnel        $s2, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E1BC0u;
    {
        const bool branch_taken_0x3e1bc0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x3e1bc0) {
            ctx->pc = 0x3E1BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1BC0u;
            // 0x3e1bc4: 0x2610ffe8  addiu       $s0, $s0, -0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1bb0;
        }
    }
    ctx->pc = 0x3E1BC8u;
label_3e1bc8:
    // 0x3e1bc8: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E1BC8u;
    {
        const bool branch_taken_0x3e1bc8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1BC8u;
        // 0x3e1bcc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1bc8) {
            ctx->pc = 0x3E1BF0u;
            goto label_3e1bf0;
        }
    }
    ctx->pc = 0x3E1BD0u;
    // 0x3e1bd0: 0x12900007  beq         $s4, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E1BD0u;
    {
        const bool branch_taken_0x3e1bd0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 16));
        ctx->pc = 0x3E1BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1BD0u;
        // 0x3e1bd4: 0x2610ffe8  addiu       $s0, $s0, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1bd0) {
            ctx->pc = 0x3E1BF0u;
            goto label_3e1bf0;
        }
    }
    ctx->pc = 0x3E1BD8u;
label_3e1bd8:
    // 0x3e1bd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e1bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1bdc: 0xc0f8744  jal         func_3E1D10
    ctx->pc = 0x3E1BDCu;
    SET_GPR_U32(ctx, 31, 0x3E1BE4u);
    ctx->pc = 0x3E1BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1BDCu;
    // 0x3e1be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1D10u, 0x3E1BDCu, 0x3E1BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1BE4u;
label_3e1be4:
    // 0x3e1be4: 0x0  nop
    ctx->pc = 0x3e1be4u;
    // NOP
    // 0x3e1be8: 0x1690fffb  bne         $s4, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E1BE8u;
    {
        const bool branch_taken_0x3e1be8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 16));
        ctx->pc = 0x3E1BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1BE8u;
        // 0x3e1bec: 0x2610ffe8  addiu       $s0, $s0, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1be8) {
            ctx->pc = 0x3E1BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1bd8;
        }
    }
    ctx->pc = 0x3E1BF0u;
label_3e1bf0:
    // 0x3e1bf0: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1BF0u;
    {
        const bool branch_taken_0x3e1bf0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1BF0u;
        // 0x3e1bf4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1bf0) {
            ctx->pc = 0x3E1C04u;
            goto label_3e1c04;
        }
    }
    ctx->pc = 0x3E1BF8u;
    // 0x3e1bf8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E1BF8u;
    SET_GPR_U32(ctx, 31, 0x3E1C00u);
    ctx->pc = 0x3E1BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1BF8u;
    // 0x3e1bfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E1BF8u, 0x3E1C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1C00u;
label_3e1c00:
    // 0x3e1c00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e1c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e1c04:
    // 0x3e1c04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e1c04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e1c08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e1c08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e1c0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3e1c0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e1c10: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3e1c10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e1c14: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3e1c14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e1c18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3e1c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e1c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1C1Cu;
        // 0x3e1c20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1C24u;
    // 0x3e1c24: 0x0  nop
    ctx->pc = 0x3e1c24u;
    // NOP
    ctx->pc = 0x3e1c28u;
}
