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

// Function: sub_002C6E80
// Address: 0x2c6e80 - 0x2c6ec0
void sub_002C6E80_0x2c6e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6E80_0x2c6e80");
#endif

    switch (ctx->pc) {
        case 0x2c6e88u: goto label_2c6e88;
        default: break;
    }

    ctx->pc = 0x2c6e80u;

    // 0x2c6e80: 0x248401b8  addiu       $a0, $a0, 0x1B8
    ctx->pc = 0x2c6e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 440));
    // 0x2c6e84: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c6e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c6e88:
    // 0x2c6e88: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x2c6e88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c6e8c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C6E8Cu;
    {
        const bool branch_taken_0x2c6e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6e8c) {
            ctx->pc = 0x2C6E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6E8Cu;
            // 0x2c6e90: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6EB0u;
            goto label_2c6eb0;
        }
    }
    ctx->pc = 0x2C6E94u;
    // 0x2c6e94: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c6e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c6e98: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c6e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c6e9c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2c6e9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c6ea0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6EA0u;
    {
        const bool branch_taken_0x2c6ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6ea0) {
            ctx->pc = 0x2C6EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6EA0u;
            // 0x2c6ea4: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6EB0u;
            goto label_2c6eb0;
        }
    }
    ctx->pc = 0x2C6EA8u;
    // 0x2c6ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6EA8u;
        // 0x2c6eac: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6EB0u;
label_2c6eb0:
    // 0x2c6eb0: 0x5480fff5  bnel        $a0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2C6EB0u;
    {
        const bool branch_taken_0x2c6eb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6eb0) {
            ctx->pc = 0x2C6EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6EB0u;
            // 0x2c6eb4: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6e88;
        }
    }
    ctx->pc = 0x2C6EB8u;
    // 0x2c6eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6EB8u;
        // 0x2c6ebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6EC0u;
}
