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

// Function: sub_002CCAE8
// Address: 0x2ccae8 - 0x2ccb90
void sub_002CCAE8_0x2ccae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CCAE8_0x2ccae8");
#endif

    switch (ctx->pc) {
        case 0x2ccb18u: goto label_2ccb18;
        default: break;
    }

    ctx->pc = 0x2ccae8u;

    // 0x2ccae8: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x2ccae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x2ccaec: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x2ccaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2ccaf0: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2CCAF0u;
    {
        const bool branch_taken_0x2ccaf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ccaf0) {
            ctx->pc = 0x2CCB84u;
            goto label_2ccb84;
        }
    }
    ctx->pc = 0x2CCAF8u;
    // 0x2ccaf8: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2CCAF8u;
    {
        const bool branch_taken_0x2ccaf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAF8u;
        // 0x2ccafc: 0x240a0030  addiu       $t2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccaf8) {
            ctx->pc = 0x2CCB84u;
            goto label_2ccb84;
        }
    }
    ctx->pc = 0x2CCB00u;
    // 0x2ccb00: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x2ccb00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ccb04: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x2ccb04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ccb08: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x2ccb08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ccb0c: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x2ccb0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2ccb10: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x2ccb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2ccb14: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x2ccb14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_2ccb18:
    // 0x2ccb18: 0x30430070  andi        $v1, $v0, 0x70
    ctx->pc = 0x2ccb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
    // 0x2ccb1c: 0x106a000f  beq         $v1, $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x2CCB1Cu;
    {
        const bool branch_taken_0x2ccb1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        ctx->pc = 0x2CCB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB1Cu;
        // 0x2ccb20: 0x28620031  slti        $v0, $v1, 0x31 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)49) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccb1c) {
            ctx->pc = 0x2CCB5Cu;
            goto label_2ccb5c;
        }
    }
    ctx->pc = 0x2CCB24u;
    // 0x2ccb24: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CCB24u;
    {
        const bool branch_taken_0x2ccb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccb24) {
            ctx->pc = 0x2CCB44u;
            goto label_2ccb44;
        }
    }
    ctx->pc = 0x2CCB2Cu;
    // 0x2ccb2c: 0x5069000d  beql        $v1, $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x2CCB2Cu;
    {
        const bool branch_taken_0x2ccb2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        if (branch_taken_0x2ccb2c) {
            ctx->pc = 0x2CCB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCB2Cu;
            // 0x2ccb30: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCB64u;
            goto label_2ccb64;
        }
    }
    ctx->pc = 0x2CCB34u;
    // 0x2ccb34: 0x5068000e  beql        $v1, $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x2CCB34u;
    {
        const bool branch_taken_0x2ccb34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x2ccb34) {
            ctx->pc = 0x2CCB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCB34u;
            // 0x2ccb38: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCB70u;
            goto label_2ccb70;
        }
    }
    ctx->pc = 0x2CCB3Cu;
    // 0x2ccb3c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CCB3Cu;
    {
        const bool branch_taken_0x2ccb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB3Cu;
        // 0x2ccb40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccb3c) {
            ctx->pc = 0x2CCB70u;
            goto label_2ccb70;
        }
    }
    ctx->pc = 0x2CCB44u;
label_2ccb44:
    // 0x2ccb44: 0x5067000a  beql        $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x2CCB44u;
    {
        const bool branch_taken_0x2ccb44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x2ccb44) {
            ctx->pc = 0x2CCB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCB44u;
            // 0x2ccb48: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCB70u;
            goto label_2ccb70;
        }
    }
    ctx->pc = 0x2CCB4Cu;
    // 0x2ccb4c: 0x50660008  beql        $v1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CCB4Cu;
    {
        const bool branch_taken_0x2ccb4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x2ccb4c) {
            ctx->pc = 0x2CCB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCB4Cu;
            // 0x2ccb50: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCB70u;
            goto label_2ccb70;
        }
    }
    ctx->pc = 0x2CCB54u;
    // 0x2ccb54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CCB54u;
    {
        const bool branch_taken_0x2ccb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB54u;
        // 0x2ccb58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccb54) {
            ctx->pc = 0x2CCB70u;
            goto label_2ccb70;
        }
    }
    ctx->pc = 0x2CCB5Cu;
label_2ccb5c:
    // 0x2ccb5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCB5Cu;
    {
        const bool branch_taken_0x2ccb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB5Cu;
        // 0x2ccb60: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccb5c) {
            ctx->pc = 0x2CCB70u;
            goto label_2ccb70;
        }
    }
    ctx->pc = 0x2CCB64u;
label_2ccb64:
    // 0x2ccb64: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2ccb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2ccb68: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2ccb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2ccb6c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ccb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2ccb70:
    // 0x2ccb70: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x2ccb70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x2ccb74: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CCB74u;
    {
        const bool branch_taken_0x2ccb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2ccb74) {
            ctx->pc = 0x2CCB84u;
            goto label_2ccb84;
        }
    }
    ctx->pc = 0x2CCB7Cu;
    // 0x2ccb7c: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2CCB7Cu;
    {
        const bool branch_taken_0x2ccb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ccb7c) {
            ctx->pc = 0x2CCB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCB7Cu;
            // 0x2ccb80: 0x90820003  lbu         $v0, 0x3($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCB18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ccb18;
        }
    }
    ctx->pc = 0x2CCB84u;
label_2ccb84:
    // 0x2ccb84: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB84u;
        // 0x2ccb88: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CCB8Cu;
    // 0x2ccb8c: 0x0  nop
    ctx->pc = 0x2ccb8cu;
    // NOP
    ctx->pc = 0x2ccb90u;
}
