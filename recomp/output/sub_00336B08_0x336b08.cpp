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

// Function: sub_00336B08
// Address: 0x336b08 - 0x336bb8
void sub_00336B08_0x336b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336B08_0x336b08");
#endif

    switch (ctx->pc) {
        case 0x336b08u: goto label_336b08;
        case 0x336b0cu: goto label_336b0c;
        case 0x336b10u: goto label_336b10;
        case 0x336b14u: goto label_336b14;
        case 0x336b18u: goto label_336b18;
        case 0x336b1cu: goto label_336b1c;
        case 0x336b20u: goto label_336b20;
        case 0x336b24u: goto label_336b24;
        case 0x336b28u: goto label_336b28;
        case 0x336b2cu: goto label_336b2c;
        case 0x336b30u: goto label_336b30;
        case 0x336b34u: goto label_336b34;
        case 0x336b38u: goto label_336b38;
        case 0x336b3cu: goto label_336b3c;
        case 0x336b40u: goto label_336b40;
        case 0x336b44u: goto label_336b44;
        case 0x336b48u: goto label_336b48;
        case 0x336b4cu: goto label_336b4c;
        case 0x336b50u: goto label_336b50;
        case 0x336b54u: goto label_336b54;
        case 0x336b58u: goto label_336b58;
        case 0x336b5cu: goto label_336b5c;
        case 0x336b60u: goto label_336b60;
        case 0x336b64u: goto label_336b64;
        case 0x336b68u: goto label_336b68;
        case 0x336b6cu: goto label_336b6c;
        case 0x336b70u: goto label_336b70;
        case 0x336b74u: goto label_336b74;
        case 0x336b78u: goto label_336b78;
        case 0x336b7cu: goto label_336b7c;
        case 0x336b80u: goto label_336b80;
        case 0x336b84u: goto label_336b84;
        case 0x336b88u: goto label_336b88;
        case 0x336b8cu: goto label_336b8c;
        case 0x336b90u: goto label_336b90;
        case 0x336b94u: goto label_336b94;
        case 0x336b98u: goto label_336b98;
        case 0x336b9cu: goto label_336b9c;
        case 0x336ba0u: goto label_336ba0;
        case 0x336ba4u: goto label_336ba4;
        case 0x336ba8u: goto label_336ba8;
        case 0x336bacu: goto label_336bac;
        case 0x336bb0u: goto label_336bb0;
        case 0x336bb4u: goto label_336bb4;
        default: break;
    }

    ctx->pc = 0x336b08u;

label_336b08:
    // 0x336b08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x336b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_336b0c:
    // 0x336b0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x336b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_336b10:
    // 0x336b10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x336b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_336b14:
    // 0x336b14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x336b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_336b18:
    // 0x336b18: 0xc0cd984  jal         func_336610
label_336b1c:
    if (ctx->pc == 0x336B1Cu) {
        ctx->pc = 0x336B20u;
        goto label_336b20;
    }
    ctx->pc = 0x336B18u;
    SET_GPR_U32(ctx, 31, 0x336B20u);
    ctx->pc = 0x336610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336610u, 0x336B18u, 0x336B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336B20u;
label_336b20:
    // 0x336b20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x336b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_336b24:
    // 0x336b24: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_336b28:
    if (ctx->pc == 0x336B28u) {
        ctx->pc = 0x336B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B24u;
        // 0x336b28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336B2Cu;
        goto label_336b2c;
    }
    ctx->pc = 0x336B24u;
    {
        const bool branch_taken_0x336b24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x336b24) {
            ctx->pc = 0x336B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336B24u;
            // 0x336b28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336BA8u;
            goto label_336ba8;
        }
    }
    ctx->pc = 0x336B2Cu;
label_336b2c:
    // 0x336b2c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x336b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_336b30:
    // 0x336b30: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_336b34:
    if (ctx->pc == 0x336B34u) {
        ctx->pc = 0x336B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B30u;
        // 0x336b34: 0x3c11005b  lui         $s1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336B38u;
        goto label_336b38;
    }
    ctx->pc = 0x336B30u;
    {
        const bool branch_taken_0x336b30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x336B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B30u;
        // 0x336b34: 0x3c11005b  lui         $s1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336b30) {
            ctx->pc = 0x336B80u;
            goto label_336b80;
        }
    }
    ctx->pc = 0x336B38u;
label_336b38:
    // 0x336b38: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x336b38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_336b3c:
    // 0x336b3c: 0xc0cdd6e  jal         func_3375B8
label_336b40:
    if (ctx->pc == 0x336B40u) {
        ctx->pc = 0x336B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B3Cu;
        // 0x336b40: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x336B44u;
        goto label_336b44;
    }
    ctx->pc = 0x336B3Cu;
    SET_GPR_U32(ctx, 31, 0x336B44u);
    ctx->pc = 0x336B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336B3Cu;
    // 0x336b40: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3375B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3375B8u, 0x336B3Cu, 0x336B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336B44u;
label_336b44:
    // 0x336b44: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x336b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_336b48:
    // 0x336b48: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_336b4c:
    if (ctx->pc == 0x336B4Cu) {
        ctx->pc = 0x336B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B48u;
        // 0x336b4c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336B50u;
        goto label_336b50;
    }
    ctx->pc = 0x336B48u;
    {
        const bool branch_taken_0x336b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x336B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B48u;
        // 0x336b4c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336b48) {
            ctx->pc = 0x336B70u;
            goto label_336b70;
        }
    }
    ctx->pc = 0x336B50u;
label_336b50:
    // 0x336b50: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x336b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_336b54:
    // 0x336b54: 0x0  nop
    ctx->pc = 0x336b54u;
    // NOP
label_336b58:
    // 0x336b58: 0xc0fba90  jal         func_3EEA40
label_336b5c:
    if (ctx->pc == 0x336B5Cu) {
        ctx->pc = 0x336B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B58u;
        // 0x336b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336B60u;
        goto label_336b60;
    }
    ctx->pc = 0x336B58u;
    SET_GPR_U32(ctx, 31, 0x336B60u);
    ctx->pc = 0x336B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336B58u;
    // 0x336b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EEA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EEA40u, 0x336B58u, 0x336B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336B60u;
label_336b60:
    // 0x336b60: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x336b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_336b64:
    // 0x336b64: 0x0  nop
    ctx->pc = 0x336b64u;
    // NOP
label_336b68:
    // 0x336b68: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_336b6c:
    if (ctx->pc == 0x336B6Cu) {
        ctx->pc = 0x336B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B68u;
        // 0x336b6c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336B70u;
        goto label_336b70;
    }
    ctx->pc = 0x336B68u;
    {
        const bool branch_taken_0x336b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336b68) {
            ctx->pc = 0x336B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336B68u;
            // 0x336b6c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_336b58;
        }
    }
    ctx->pc = 0x336B70u;
label_336b70:
    // 0x336b70: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x336b70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_336b74:
    // 0x336b74: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x336b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_336b78:
    // 0x336b78: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x336b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_336b7c:
    // 0x336b7c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x336b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_336b80:
    // 0x336b80: 0x8e0501b8  lw          $a1, 0x1B8($s0)
    ctx->pc = 0x336b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_336b84:
    // 0x336b84: 0xc0fbab6  jal         func_3EEAD8
label_336b88:
    if (ctx->pc == 0x336B88u) {
        ctx->pc = 0x336B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B84u;
        // 0x336b88: 0x26246ea0  addiu       $a0, $s1, 0x6EA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336B8Cu;
        goto label_336b8c;
    }
    ctx->pc = 0x336B84u;
    SET_GPR_U32(ctx, 31, 0x336B8Cu);
    ctx->pc = 0x336B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336B84u;
    // 0x336b88: 0x26246ea0  addiu       $a0, $s1, 0x6EA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EEAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EEAD8u, 0x336B84u, 0x336B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336B8Cu;
label_336b8c:
    // 0x336b8c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_336b90:
    if (ctx->pc == 0x336B90u) {
        ctx->pc = 0x336B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B8Cu;
        // 0x336b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336B94u;
        goto label_336b94;
    }
    ctx->pc = 0x336B8Cu;
    {
        const bool branch_taken_0x336b8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x336B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B8Cu;
        // 0x336b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336b8c) {
            ctx->pc = 0x336BA4u;
            goto label_336ba4;
        }
    }
    ctx->pc = 0x336B94u;
label_336b94:
    // 0x336b94: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x336b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_336b98:
    // 0x336b98: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x336b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_336b9c:
    // 0x336b9c: 0x40f809  jalr        $v0
label_336ba0:
    if (ctx->pc == 0x336BA0u) {
        ctx->pc = 0x336BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B9Cu;
        // 0x336ba0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336BA4u;
        goto label_336ba4;
    }
    ctx->pc = 0x336B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x336BA4u);
        ctx->pc = 0x336BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B9Cu;
        // 0x336ba0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336B9Cu, 0x336BA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x336BA4u;
label_336ba4:
    // 0x336ba4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x336ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_336ba8:
    // 0x336ba8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x336ba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_336bac:
    // 0x336bac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x336bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_336bb0:
    // 0x336bb0: 0x3e00008  jr          $ra
label_336bb4:
    if (ctx->pc == 0x336BB4u) {
        ctx->pc = 0x336BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336BB0u;
        // 0x336bb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336BB8u;
        goto label_fallthrough_0x336bb0;
    }
    ctx->pc = 0x336BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336BB0u;
        // 0x336bb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x336bb0:
    ctx->pc = 0x336BB8u;
}
