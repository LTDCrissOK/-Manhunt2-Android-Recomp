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

// Function: sub_003C2AF8
// Address: 0x3c2af8 - 0x3c2b70
void sub_003C2AF8_0x3c2af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2AF8_0x3c2af8");
#endif

    switch (ctx->pc) {
        case 0x3c2b10u: goto label_3c2b10;
        case 0x3c2b18u: goto label_3c2b18;
        case 0x3c2b38u: goto label_3c2b38;
        default: break;
    }

    ctx->pc = 0x3c2af8u;

    // 0x3c2af8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3c2af8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c2afc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C2AFCu;
    {
        const bool branch_taken_0x3c2afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2AFCu;
        // 0x3c2b00: 0x80a30000  lb          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2afc) {
            ctx->pc = 0x3C2B18u;
            goto label_3c2b18;
        }
    }
    ctx->pc = 0x3C2B04u;
    // 0x3c2b04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c2b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2b08: 0x3e00008  jr          $ra
    ctx->pc = 0x3C2B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2B08u;
        // 0x3c2b0c: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2B10u;
label_3c2b10:
    // 0x3c2b10: 0x3e00008  jr          $ra
    ctx->pc = 0x3C2B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2B10u;
        // 0x3c2b14: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2B18u;
label_3c2b18:
    // 0x3c2b18: 0x0  nop
    ctx->pc = 0x3c2b18u;
    // NOP
    // 0x3c2b1c: 0x0  nop
    ctx->pc = 0x3c2b1cu;
    // NOP
    // 0x3c2b20: 0x1060fffb  beqz        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C2B20u;
    {
        const bool branch_taken_0x3c2b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2B20u;
        // 0x3c2b24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2b20) {
            ctx->pc = 0x3C2B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2b10;
        }
    }
    ctx->pc = 0x3C2B28u;
    // 0x3c2b28: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3c2b28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c2b2c: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3C2B2Cu;
    {
        const bool branch_taken_0x3c2b2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c2b2c) {
            ctx->pc = 0x3C2B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2B2Cu;
            // 0x3c2b30: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2B58u;
            goto label_3c2b58;
        }
    }
    ctx->pc = 0x3C2B34u;
    // 0x3c2b34: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3c2b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3c2b38:
    // 0x3c2b38: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x3c2b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3c2b3c: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x3c2b3cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c2b40: 0x10c0fff3  beqz        $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x3C2B40u;
    {
        const bool branch_taken_0x3c2b40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2B40u;
        // 0x3c2b44: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2b40) {
            ctx->pc = 0x3C2B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2b10;
        }
    }
    ctx->pc = 0x3C2B48u;
    // 0x3c2b48: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3c2b48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c2b4c: 0x50c3fffa  beql        $a2, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3C2B4Cu;
    {
        const bool branch_taken_0x3c2b4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c2b4c) {
            ctx->pc = 0x3C2B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2B4Cu;
            // 0x3c2b50: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2b38;
        }
    }
    ctx->pc = 0x3C2B54u;
    // 0x3c2b54: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c2b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3c2b58:
    // 0x3c2b58: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3c2b58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c2b5c: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3C2B5Cu;
    {
        const bool branch_taken_0x3c2b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c2b5c) {
            ctx->pc = 0x3C2B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2B5Cu;
            // 0x3c2b60: 0x80a30000  lb          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2b18;
        }
    }
    ctx->pc = 0x3C2B64u;
    // 0x3c2b64: 0x3e00008  jr          $ra
    ctx->pc = 0x3C2B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2B64u;
        // 0x3c2b68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2B6Cu;
    // 0x3c2b6c: 0x0  nop
    ctx->pc = 0x3c2b6cu;
    // NOP
    ctx->pc = 0x3c2b70u;
}
