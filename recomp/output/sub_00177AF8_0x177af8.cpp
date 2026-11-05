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

// Function: sub_00177AF8
// Address: 0x177af8 - 0x177b88
void sub_00177AF8_0x177af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177AF8_0x177af8");
#endif

    switch (ctx->pc) {
        case 0x177b38u: goto label_177b38;
        case 0x177b54u: goto label_177b54;
        default: break;
    }

    ctx->pc = 0x177af8u;

    // 0x177af8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x177af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x177afc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x177afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x177b00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177b04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x177b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x177b08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x177b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x177b0c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x177b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x177b10: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x177b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x177b14: 0x90820158  lbu         $v0, 0x158($a0)
    ctx->pc = 0x177b14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x177b18: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x177B18u;
    {
        const bool branch_taken_0x177b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B18u;
        // 0x177b1c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177b18) {
            ctx->pc = 0x177B68u;
            goto label_177b68;
        }
    }
    ctx->pc = 0x177B20u;
    // 0x177b20: 0x249200dc  addiu       $s2, $a0, 0xDC
    ctx->pc = 0x177b20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 220));
    // 0x177b24: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x177b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177b28: 0x249100d8  addiu       $s1, $a0, 0xD8
    ctx->pc = 0x177b28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
    // 0x177b2c: 0x24140021  addiu       $s4, $zero, 0x21
    ctx->pc = 0x177b2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x177b30: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x177b30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x177b34: 0x0  nop
    ctx->pc = 0x177b34u;
    // NOP
label_177b38:
    // 0x177b38: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x177b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x177b3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177b40: 0x10740004  beq         $v1, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x177B40u;
    {
        const bool branch_taken_0x177b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x177B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B40u;
        // 0x177b44: 0x2441021  addu        $v0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177b40) {
            ctx->pc = 0x177B54u;
            goto label_177b54;
        }
    }
    ctx->pc = 0x177B48u;
    // 0x177b48: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x177b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177b4c: 0xc05e584  jal         func_179610
    ctx->pc = 0x177B4Cu;
    SET_GPR_U32(ctx, 31, 0x177B54u);
    ctx->pc = 0x177B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177B4Cu;
    // 0x177b50: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179610u, 0x177B4Cu, 0x177B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177B54u;
label_177b54:
    // 0x177b54: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x177b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x177b58: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x177b58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x177b5c: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x177b5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x177b60: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x177B60u;
    {
        const bool branch_taken_0x177b60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x177b60) {
            ctx->pc = 0x177B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177B60u;
            // 0x177b64: 0x1020c0  sll         $a0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177b38;
        }
    }
    ctx->pc = 0x177B68u;
label_177b68:
    // 0x177b68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177b68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177b6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x177b6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177b70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x177b70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177b74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x177b74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177b78: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x177b78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177b7c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x177b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177b80: 0x3e00008  jr          $ra
    ctx->pc = 0x177B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B80u;
        // 0x177b84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177B88u;
}
