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

// Function: sub_002C3AA8
// Address: 0x2c3aa8 - 0x2c3b48
void sub_002C3AA8_0x2c3aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3AA8_0x2c3aa8");
#endif

    switch (ctx->pc) {
        case 0x2c3aa8u: goto label_2c3aa8;
        case 0x2c3aacu: goto label_2c3aac;
        case 0x2c3ab0u: goto label_2c3ab0;
        case 0x2c3ab4u: goto label_2c3ab4;
        case 0x2c3ab8u: goto label_2c3ab8;
        case 0x2c3abcu: goto label_2c3abc;
        case 0x2c3ac0u: goto label_2c3ac0;
        case 0x2c3ac4u: goto label_2c3ac4;
        case 0x2c3ac8u: goto label_2c3ac8;
        case 0x2c3accu: goto label_2c3acc;
        case 0x2c3ad0u: goto label_2c3ad0;
        case 0x2c3ad4u: goto label_2c3ad4;
        case 0x2c3ad8u: goto label_2c3ad8;
        case 0x2c3adcu: goto label_2c3adc;
        case 0x2c3ae0u: goto label_2c3ae0;
        case 0x2c3ae4u: goto label_2c3ae4;
        case 0x2c3ae8u: goto label_2c3ae8;
        case 0x2c3aecu: goto label_2c3aec;
        case 0x2c3af0u: goto label_2c3af0;
        case 0x2c3af4u: goto label_2c3af4;
        case 0x2c3af8u: goto label_2c3af8;
        case 0x2c3afcu: goto label_2c3afc;
        case 0x2c3b00u: goto label_2c3b00;
        case 0x2c3b04u: goto label_2c3b04;
        case 0x2c3b08u: goto label_2c3b08;
        case 0x2c3b0cu: goto label_2c3b0c;
        case 0x2c3b10u: goto label_2c3b10;
        case 0x2c3b14u: goto label_2c3b14;
        case 0x2c3b18u: goto label_2c3b18;
        case 0x2c3b1cu: goto label_2c3b1c;
        case 0x2c3b20u: goto label_2c3b20;
        case 0x2c3b24u: goto label_2c3b24;
        case 0x2c3b28u: goto label_2c3b28;
        case 0x2c3b2cu: goto label_2c3b2c;
        case 0x2c3b30u: goto label_2c3b30;
        case 0x2c3b34u: goto label_2c3b34;
        case 0x2c3b38u: goto label_2c3b38;
        case 0x2c3b3cu: goto label_2c3b3c;
        case 0x2c3b40u: goto label_2c3b40;
        case 0x2c3b44u: goto label_2c3b44;
        default: break;
    }

    ctx->pc = 0x2c3aa8u;

label_2c3aa8:
    // 0x2c3aa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c3aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c3aac:
    // 0x2c3aac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c3aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c3ab0:
    // 0x2c3ab0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c3ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c3ab4:
    // 0x2c3ab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c3ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c3ab8:
    // 0x2c3ab8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c3ab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c3abc:
    // 0x2c3abc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c3abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c3ac0:
    // 0x2c3ac0: 0x82220050  lb          $v0, 0x50($s1)
    ctx->pc = 0x2c3ac0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
label_2c3ac4:
    // 0x2c3ac4: 0x50430015  beql        $v0, $v1, . + 4 + (0x15 << 2)
label_2c3ac8:
    if (ctx->pc == 0x2C3AC8u) {
        ctx->pc = 0x2C3AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AC4u;
        // 0x2c3ac8: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3ACCu;
        goto label_2c3acc;
    }
    ctx->pc = 0x2C3AC4u;
    {
        const bool branch_taken_0x2c3ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c3ac4) {
            ctx->pc = 0x2C3AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3AC4u;
            // 0x2c3ac8: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3B1Cu;
            goto label_2c3b1c;
        }
    }
    ctx->pc = 0x2C3ACCu;
label_2c3acc:
    // 0x2c3acc: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x2c3accu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_2c3ad0:
    // 0x2c3ad0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2c3ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c3ad4:
    // 0x2c3ad4: 0x80430018  lb          $v1, 0x18($v0)
    ctx->pc = 0x2c3ad4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
label_2c3ad8:
    // 0x2c3ad8: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
label_2c3adc:
    if (ctx->pc == 0x2C3ADCu) {
        ctx->pc = 0x2C3ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AD8u;
        // 0x2c3adc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3AE0u;
        goto label_2c3ae0;
    }
    ctx->pc = 0x2C3AD8u;
    {
        const bool branch_taken_0x2c3ad8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C3ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AD8u;
        // 0x2c3adc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ad8) {
            ctx->pc = 0x2C3B1Cu;
            goto label_2c3b1c;
        }
    }
    ctx->pc = 0x2C3AE0u;
label_2c3ae0:
    // 0x2c3ae0: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x2c3ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_2c3ae4:
    // 0x2c3ae4: 0x0  nop
    ctx->pc = 0x2c3ae4u;
    // NOP
label_2c3ae8:
    // 0x2c3ae8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c3ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2c3aec:
    // 0x2c3aec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c3af0:
    // 0x2c3af0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c3af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c3af4:
    // 0x2c3af4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2c3af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2c3af8:
    // 0x2c3af8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2c3af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2c3afc:
    // 0x2c3afc: 0x40f809  jalr        $v0
label_2c3b00:
    if (ctx->pc == 0x2C3B00u) {
        ctx->pc = 0x2C3B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AFCu;
        // 0x2c3b00: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3B04u;
        goto label_2c3b04;
    }
    ctx->pc = 0x2C3AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C3B04u);
        ctx->pc = 0x2C3B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AFCu;
        // 0x2c3b00: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3AFCu, 0x2C3B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C3B04u;
label_2c3b04:
    // 0x2c3b04: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2c3b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c3b08:
    // 0x2c3b08: 0x80620018  lb          $v0, 0x18($v1)
    ctx->pc = 0x2c3b08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_2c3b0c:
    // 0x2c3b0c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2c3b0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2c3b10:
    // 0x2c3b10: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_2c3b14:
    if (ctx->pc == 0x2C3B14u) {
        ctx->pc = 0x2C3B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B10u;
        // 0x2c3b14: 0x8e230084  lw          $v1, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3B18u;
        goto label_2c3b18;
    }
    ctx->pc = 0x2C3B10u;
    {
        const bool branch_taken_0x2c3b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3b10) {
            ctx->pc = 0x2C3B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3B10u;
            // 0x2c3b14: 0x8e230084  lw          $v1, 0x84($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3ae8;
        }
    }
    ctx->pc = 0x2C3B18u;
label_2c3b18:
    // 0x2c3b18: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2c3b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c3b1c:
    // 0x2c3b1c: 0x80430012  lb          $v1, 0x12($v0)
    ctx->pc = 0x2c3b1cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_2c3b20:
    // 0x2c3b20: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_2c3b24:
    if (ctx->pc == 0x2C3B24u) {
        ctx->pc = 0x2C3B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B20u;
        // 0x2c3b24: 0xa2200051  sb          $zero, 0x51($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3B28u;
        goto label_2c3b28;
    }
    ctx->pc = 0x2C3B20u;
    {
        const bool branch_taken_0x2c3b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3b20) {
            ctx->pc = 0x2C3B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3B20u;
            // 0x2c3b24: 0xa2200051  sb          $zero, 0x51($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3B30u;
            goto label_2c3b30;
        }
    }
    ctx->pc = 0x2C3B28u;
label_2c3b28:
    // 0x2c3b28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3b2c:
    // 0x2c3b2c: 0xa2220051  sb          $v0, 0x51($s1)
    ctx->pc = 0x2c3b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 2));
label_2c3b30:
    // 0x2c3b30: 0xa2200050  sb          $zero, 0x50($s1)
    ctx->pc = 0x2c3b30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 0));
label_2c3b34:
    // 0x2c3b34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c3b34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c3b38:
    // 0x2c3b38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c3b38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c3b3c:
    // 0x2c3b3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c3b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c3b40:
    // 0x2c3b40: 0x3e00008  jr          $ra
label_2c3b44:
    if (ctx->pc == 0x2C3B44u) {
        ctx->pc = 0x2C3B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B40u;
        // 0x2c3b44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3B48u;
        goto label_fallthrough_0x2c3b40;
    }
    ctx->pc = 0x2C3B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B40u;
        // 0x2c3b44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c3b40:
    ctx->pc = 0x2C3B48u;
}
