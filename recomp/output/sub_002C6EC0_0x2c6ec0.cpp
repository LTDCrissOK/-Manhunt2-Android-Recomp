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

// Function: sub_002C6EC0
// Address: 0x2c6ec0 - 0x2c6f08
void sub_002C6EC0_0x2c6ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6EC0_0x2c6ec0");
#endif

    switch (ctx->pc) {
        case 0x2c6ed0u: goto label_2c6ed0;
        default: break;
    }

    ctx->pc = 0x2c6ec0u;

    // 0x2c6ec0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2c6ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c6ec4: 0x248401b8  addiu       $a0, $a0, 0x1B8
    ctx->pc = 0x2c6ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 440));
    // 0x2c6ec8: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2c6ec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c6ecc: 0x0  nop
    ctx->pc = 0x2c6eccu;
    // NOP
label_2c6ed0:
    // 0x2c6ed0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C6ED0u;
    {
        const bool branch_taken_0x2c6ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6ed0) {
            ctx->pc = 0x2C6ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6ED0u;
            // 0x2c6ed4: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6EF4u;
            goto label_2c6ef4;
        }
    }
    ctx->pc = 0x2C6ED8u;
    // 0x2c6ed8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2c6ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2c6edc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c6edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c6ee0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2c6ee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c6ee4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6EE4u;
    {
        const bool branch_taken_0x2c6ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6ee4) {
            ctx->pc = 0x2C6EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6EE4u;
            // 0x2c6ee8: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6EF4u;
            goto label_2c6ef4;
        }
    }
    ctx->pc = 0x2C6EECu;
    // 0x2c6eec: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6EECu;
        // 0x2c6ef0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6EF4u;
label_2c6ef4:
    // 0x2c6ef4: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2C6EF4u;
    {
        const bool branch_taken_0x2c6ef4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6EF4u;
        // 0x2c6ef8: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6ef4) {
            ctx->pc = 0x2C6ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6ed0;
        }
    }
    ctx->pc = 0x2C6EFCu;
    // 0x2c6efc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6EFCu;
        // 0x2c6f00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6F04u;
    // 0x2c6f04: 0x0  nop
    ctx->pc = 0x2c6f04u;
    // NOP
    ctx->pc = 0x2c6f08u;
}
