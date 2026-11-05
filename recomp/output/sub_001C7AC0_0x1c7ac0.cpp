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

// Function: sub_001C7AC0
// Address: 0x1c7ac0 - 0x1c7b78
void sub_001C7AC0_0x1c7ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7AC0_0x1c7ac0");
#endif

    switch (ctx->pc) {
        case 0x1c7ae8u: goto label_1c7ae8;
        case 0x1c7b18u: goto label_1c7b18;
        case 0x1c7b48u: goto label_1c7b48;
        default: break;
    }

    ctx->pc = 0x1c7ac0u;

    // 0x1c7ac0: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x1c7ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1c7ac4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7ac4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7ac8: 0x24860024  addiu       $a2, $a0, 0x24
    ctx->pc = 0x1c7ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x1c7acc: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1c7accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1c7ad0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1c7ad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ad4: 0x24870004  addiu       $a3, $a0, 0x4
    ctx->pc = 0x1c7ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1c7ad8: 0x24880014  addiu       $t0, $a0, 0x14
    ctx->pc = 0x1c7ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1c7adc: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C7ADCu;
    {
        const bool branch_taken_0x1c7adc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C7AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7ADCu;
        // 0x1c7ae0: 0x24890034  addiu       $t1, $a0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7adc) {
            ctx->pc = 0x1C7B00u;
            goto label_1c7b00;
        }
    }
    ctx->pc = 0x1C7AE4u;
    // 0x1c7ae4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1c7ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1c7ae8:
    // 0x1c7ae8: 0x0  nop
    ctx->pc = 0x1c7ae8u;
    // NOP
    // 0x1c7aec: 0x0  nop
    ctx->pc = 0x1c7aecu;
    // NOP
    // 0x1c7af0: 0x0  nop
    ctx->pc = 0x1c7af0u;
    // NOP
    // 0x1c7af4: 0x0  nop
    ctx->pc = 0x1c7af4u;
    // NOP
    // 0x1c7af8: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C7AF8u;
    {
        const bool branch_taken_0x1c7af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c7af8) {
            ctx->pc = 0x1C7AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7AF8u;
            // 0x1c7afc: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7ae8;
        }
    }
    ctx->pc = 0x1C7B00u;
label_1c7b00:
    // 0x1c7b00: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x1c7b00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x1c7b04: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1c7b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c7b08: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1c7b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1c7b0c: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C7B0Cu;
    {
        const bool branch_taken_0x1c7b0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C7B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B0Cu;
        // 0x1c7b10: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7b0c) {
            ctx->pc = 0x1C7B30u;
            goto label_1c7b30;
        }
    }
    ctx->pc = 0x1C7B14u;
    // 0x1c7b14: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1c7b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1c7b18:
    // 0x1c7b18: 0x0  nop
    ctx->pc = 0x1c7b18u;
    // NOP
    // 0x1c7b1c: 0x0  nop
    ctx->pc = 0x1c7b1cu;
    // NOP
    // 0x1c7b20: 0x0  nop
    ctx->pc = 0x1c7b20u;
    // NOP
    // 0x1c7b24: 0x0  nop
    ctx->pc = 0x1c7b24u;
    // NOP
    // 0x1c7b28: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C7B28u;
    {
        const bool branch_taken_0x1c7b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C7B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B28u;
        // 0x1c7b2c: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7b28) {
            ctx->pc = 0x1C7B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7b18;
        }
    }
    ctx->pc = 0x1C7B30u;
label_1c7b30:
    // 0x1c7b30: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x1c7b30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x1c7b34: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1c7b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1c7b38: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1c7b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1c7b3c: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C7B3Cu;
    {
        const bool branch_taken_0x1c7b3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C7B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B3Cu;
        // 0x1c7b40: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7b3c) {
            ctx->pc = 0x1C7B60u;
            goto label_1c7b60;
        }
    }
    ctx->pc = 0x1C7B44u;
    // 0x1c7b44: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1c7b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_1c7b48:
    // 0x1c7b48: 0x0  nop
    ctx->pc = 0x1c7b48u;
    // NOP
    // 0x1c7b4c: 0x0  nop
    ctx->pc = 0x1c7b4cu;
    // NOP
    // 0x1c7b50: 0x0  nop
    ctx->pc = 0x1c7b50u;
    // NOP
    // 0x1c7b54: 0x0  nop
    ctx->pc = 0x1c7b54u;
    // NOP
    // 0x1c7b58: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C7B58u;
    {
        const bool branch_taken_0x1c7b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C7B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B58u;
        // 0x1c7b5c: 0x24420050  addiu       $v0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7b58) {
            ctx->pc = 0x1C7B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7b48;
        }
    }
    ctx->pc = 0x1C7B60u;
label_1c7b60:
    // 0x1c7b60: 0xad050004  sw          $a1, 0x4($t0)
    ctx->pc = 0x1c7b60u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 5));
    // 0x1c7b64: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1c7b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1c7b68: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x1c7b68u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x1c7b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B6Cu;
        // 0x1c7b70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7B74u;
    // 0x1c7b74: 0x0  nop
    ctx->pc = 0x1c7b74u;
    // NOP
    ctx->pc = 0x1c7b78u;
}
