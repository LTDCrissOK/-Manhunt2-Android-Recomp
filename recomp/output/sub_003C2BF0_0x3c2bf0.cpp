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

// Function: sub_003C2BF0
// Address: 0x3c2bf0 - 0x3c2c60
void sub_003C2BF0_0x3c2bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2BF0_0x3c2bf0");
#endif

    switch (ctx->pc) {
        case 0x3c2c18u: goto label_3c2c18;
        default: break;
    }

    ctx->pc = 0x3c2bf0u;

    // 0x3c2bf0: 0x18a00018  blez        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C2BF0u;
    {
        const bool branch_taken_0x3c2bf0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3C2BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2BF0u;
        // 0x3c2bf4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2bf0) {
            ctx->pc = 0x3C2C54u;
            goto label_3c2c54;
        }
    }
    ctx->pc = 0x3C2BF8u;
    // 0x3c2bf8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x3c2bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3c2bfc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3c2bfcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c2c00: 0x28420035  slti        $v0, $v0, 0x35
    ctx->pc = 0x3c2c00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)53) ? 1 : 0);
    // 0x3c2c04: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3C2C04u;
    {
        const bool branch_taken_0x3c2c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C04u;
        // 0x3c2c08: 0x24070030  addiu       $a3, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2c04) {
            ctx->pc = 0x3C2C54u;
            goto label_3c2c54;
        }
    }
    ctx->pc = 0x3C2C0Cu;
    // 0x3c2c0c: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x3c2c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x3c2c10: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x3c2c10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x3c2c14: 0x0  nop
    ctx->pc = 0x3c2c14u;
    // NOP
label_3c2c18:
    // 0x3c2c18: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3c2c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3c2c1c: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C2C1Cu;
    {
        const bool branch_taken_0x3c2c1c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3C2C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C1Cu;
        // 0x3c2c20: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2c1c) {
            ctx->pc = 0x3C2C30u;
            goto label_3c2c30;
        }
    }
    ctx->pc = 0x3C2C24u;
    // 0x3c2c24: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3c2c24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c2c28: 0x5046fffb  beql        $v0, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C2C28u;
    {
        const bool branch_taken_0x3c2c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x3c2c28) {
            ctx->pc = 0x3C2C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2C28u;
            // 0x3c2c2c: 0xa0670000  sb          $a3, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2c18;
        }
    }
    ctx->pc = 0x3C2C30u;
label_3c2c30:
    // 0x3c2c30: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3c2c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3c2c34: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x3c2c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x3c2c38: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3c2c38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c2c3c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C2C3Cu;
    {
        const bool branch_taken_0x3c2c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3C2C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C3Cu;
        // 0x3c2c40: 0x90850000  lbu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2c3c) {
            ctx->pc = 0x3C2C4Cu;
            goto label_3c2c4c;
        }
    }
    ctx->pc = 0x3C2C44u;
    // 0x3c2c44: 0x3e00008  jr          $ra
    ctx->pc = 0x3C2C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C44u;
        // 0x3c2c48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2C4Cu;
label_3c2c4c:
    // 0x3c2c4c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3c2c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3c2c50: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3c2c50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_3c2c54:
    // 0x3c2c54: 0x3e00008  jr          $ra
    ctx->pc = 0x3C2C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C54u;
        // 0x3c2c58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2C5Cu;
    // 0x3c2c5c: 0x0  nop
    ctx->pc = 0x3c2c5cu;
    // NOP
    ctx->pc = 0x3c2c60u;
}
