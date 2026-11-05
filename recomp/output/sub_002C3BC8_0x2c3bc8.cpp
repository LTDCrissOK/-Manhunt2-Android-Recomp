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

// Function: sub_002C3BC8
// Address: 0x2c3bc8 - 0x2c3c68
void sub_002C3BC8_0x2c3bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3BC8_0x2c3bc8");
#endif

    switch (ctx->pc) {
        case 0x2c3bc8u: goto label_2c3bc8;
        case 0x2c3bccu: goto label_2c3bcc;
        case 0x2c3bd0u: goto label_2c3bd0;
        case 0x2c3bd4u: goto label_2c3bd4;
        case 0x2c3bd8u: goto label_2c3bd8;
        case 0x2c3bdcu: goto label_2c3bdc;
        case 0x2c3be0u: goto label_2c3be0;
        case 0x2c3be4u: goto label_2c3be4;
        case 0x2c3be8u: goto label_2c3be8;
        case 0x2c3becu: goto label_2c3bec;
        case 0x2c3bf0u: goto label_2c3bf0;
        case 0x2c3bf4u: goto label_2c3bf4;
        case 0x2c3bf8u: goto label_2c3bf8;
        case 0x2c3bfcu: goto label_2c3bfc;
        case 0x2c3c00u: goto label_2c3c00;
        case 0x2c3c04u: goto label_2c3c04;
        case 0x2c3c08u: goto label_2c3c08;
        case 0x2c3c0cu: goto label_2c3c0c;
        case 0x2c3c10u: goto label_2c3c10;
        case 0x2c3c14u: goto label_2c3c14;
        case 0x2c3c18u: goto label_2c3c18;
        case 0x2c3c1cu: goto label_2c3c1c;
        case 0x2c3c20u: goto label_2c3c20;
        case 0x2c3c24u: goto label_2c3c24;
        case 0x2c3c28u: goto label_2c3c28;
        case 0x2c3c2cu: goto label_2c3c2c;
        case 0x2c3c30u: goto label_2c3c30;
        case 0x2c3c34u: goto label_2c3c34;
        case 0x2c3c38u: goto label_2c3c38;
        case 0x2c3c3cu: goto label_2c3c3c;
        case 0x2c3c40u: goto label_2c3c40;
        case 0x2c3c44u: goto label_2c3c44;
        case 0x2c3c48u: goto label_2c3c48;
        case 0x2c3c4cu: goto label_2c3c4c;
        case 0x2c3c50u: goto label_2c3c50;
        case 0x2c3c54u: goto label_2c3c54;
        case 0x2c3c58u: goto label_2c3c58;
        case 0x2c3c5cu: goto label_2c3c5c;
        case 0x2c3c60u: goto label_2c3c60;
        case 0x2c3c64u: goto label_2c3c64;
        default: break;
    }

    ctx->pc = 0x2c3bc8u;

label_2c3bc8:
    // 0x2c3bc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c3bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c3bcc:
    // 0x2c3bcc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c3bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c3bd0:
    // 0x2c3bd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c3bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c3bd4:
    // 0x2c3bd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c3bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c3bd8:
    // 0x2c3bd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c3bd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c3bdc:
    // 0x2c3bdc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c3bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c3be0:
    // 0x2c3be0: 0x82220050  lb          $v0, 0x50($s1)
    ctx->pc = 0x2c3be0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
label_2c3be4:
    // 0x2c3be4: 0x50430015  beql        $v0, $v1, . + 4 + (0x15 << 2)
label_2c3be8:
    if (ctx->pc == 0x2C3BE8u) {
        ctx->pc = 0x2C3BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BE4u;
        // 0x2c3be8: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3BECu;
        goto label_2c3bec;
    }
    ctx->pc = 0x2C3BE4u;
    {
        const bool branch_taken_0x2c3be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c3be4) {
            ctx->pc = 0x2C3BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3BE4u;
            // 0x2c3be8: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3C3Cu;
            goto label_2c3c3c;
        }
    }
    ctx->pc = 0x2C3BECu;
label_2c3bec:
    // 0x2c3bec: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x2c3becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_2c3bf0:
    // 0x2c3bf0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2c3bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c3bf4:
    // 0x2c3bf4: 0x80430018  lb          $v1, 0x18($v0)
    ctx->pc = 0x2c3bf4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
label_2c3bf8:
    // 0x2c3bf8: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
label_2c3bfc:
    if (ctx->pc == 0x2C3BFCu) {
        ctx->pc = 0x2C3BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BF8u;
        // 0x2c3bfc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3C00u;
        goto label_2c3c00;
    }
    ctx->pc = 0x2C3BF8u;
    {
        const bool branch_taken_0x2c3bf8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C3BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BF8u;
        // 0x2c3bfc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3bf8) {
            ctx->pc = 0x2C3C3Cu;
            goto label_2c3c3c;
        }
    }
    ctx->pc = 0x2C3C00u;
label_2c3c00:
    // 0x2c3c00: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x2c3c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_2c3c04:
    // 0x2c3c04: 0x0  nop
    ctx->pc = 0x2c3c04u;
    // NOP
label_2c3c08:
    // 0x2c3c08: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c3c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2c3c0c:
    // 0x2c3c0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c3c10:
    // 0x2c3c10: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c3c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c3c14:
    // 0x2c3c14: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2c3c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2c3c18:
    // 0x2c3c18: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2c3c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2c3c1c:
    // 0x2c3c1c: 0x40f809  jalr        $v0
label_2c3c20:
    if (ctx->pc == 0x2C3C20u) {
        ctx->pc = 0x2C3C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C1Cu;
        // 0x2c3c20: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3C24u;
        goto label_2c3c24;
    }
    ctx->pc = 0x2C3C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C3C24u);
        ctx->pc = 0x2C3C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C1Cu;
        // 0x2c3c20: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3C1Cu, 0x2C3C24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C3C24u;
label_2c3c24:
    // 0x2c3c24: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2c3c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c3c28:
    // 0x2c3c28: 0x80620018  lb          $v0, 0x18($v1)
    ctx->pc = 0x2c3c28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_2c3c2c:
    // 0x2c3c2c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2c3c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2c3c30:
    // 0x2c3c30: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_2c3c34:
    if (ctx->pc == 0x2C3C34u) {
        ctx->pc = 0x2C3C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C30u;
        // 0x2c3c34: 0x8e230084  lw          $v1, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3C38u;
        goto label_2c3c38;
    }
    ctx->pc = 0x2C3C30u;
    {
        const bool branch_taken_0x2c3c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3c30) {
            ctx->pc = 0x2C3C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3C30u;
            // 0x2c3c34: 0x8e230084  lw          $v1, 0x84($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3c08;
        }
    }
    ctx->pc = 0x2C3C38u;
label_2c3c38:
    // 0x2c3c38: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2c3c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c3c3c:
    // 0x2c3c3c: 0x80430012  lb          $v1, 0x12($v0)
    ctx->pc = 0x2c3c3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_2c3c40:
    // 0x2c3c40: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_2c3c44:
    if (ctx->pc == 0x2C3C44u) {
        ctx->pc = 0x2C3C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C40u;
        // 0x2c3c44: 0xa2200050  sb          $zero, 0x50($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3C48u;
        goto label_2c3c48;
    }
    ctx->pc = 0x2C3C40u;
    {
        const bool branch_taken_0x2c3c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3c40) {
            ctx->pc = 0x2C3C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3C40u;
            // 0x2c3c44: 0xa2200050  sb          $zero, 0x50($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3C54u;
            goto label_2c3c54;
        }
    }
    ctx->pc = 0x2C3C48u;
label_2c3c48:
    // 0x2c3c48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3c4c:
    // 0x2c3c4c: 0xa2220051  sb          $v0, 0x51($s1)
    ctx->pc = 0x2c3c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 2));
label_2c3c50:
    // 0x2c3c50: 0xa2200050  sb          $zero, 0x50($s1)
    ctx->pc = 0x2c3c50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 0));
label_2c3c54:
    // 0x2c3c54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c3c54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c3c58:
    // 0x2c3c58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c3c58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c3c5c:
    // 0x2c3c5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c3c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c3c60:
    // 0x2c3c60: 0x3e00008  jr          $ra
label_2c3c64:
    if (ctx->pc == 0x2C3C64u) {
        ctx->pc = 0x2C3C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C60u;
        // 0x2c3c64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3C68u;
        goto label_fallthrough_0x2c3c60;
    }
    ctx->pc = 0x2C3C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C60u;
        // 0x2c3c64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c3c60:
    ctx->pc = 0x2C3C68u;
}
