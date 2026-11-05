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

// Function: sub_00118CF8
// Address: 0x118cf8 - 0x118d38
void sub_00118CF8_0x118cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118CF8_0x118cf8");
#endif

    ctx->pc = 0x118cf8u;

    // 0x118cf8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x118cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x118cfc: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x118cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x118d00: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x118D00u;
    {
        const bool branch_taken_0x118d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x118D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D00u;
        // 0x118d04: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d00) {
            ctx->pc = 0x118D18u;
            goto label_118d18;
        }
    }
    ctx->pc = 0x118D08u;
    // 0x118d08: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x118D08u;
    {
        const bool branch_taken_0x118d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x118D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D08u;
        // 0x118d0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d08) {
            ctx->pc = 0x118D24u;
            goto label_118d24;
        }
    }
    ctx->pc = 0x118D10u;
    // 0x118d10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x118D10u;
    {
        const bool branch_taken_0x118d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x118d10) {
            ctx->pc = 0x118D30u;
            goto label_118d30;
        }
    }
    ctx->pc = 0x118D18u;
label_118d18:
    // 0x118d18: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x118d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x118d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x118D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D1Cu;
        // 0x118d20: 0x8c62001c  lw          $v0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118D24u;
label_118d24:
    // 0x118d24: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x118d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x118d28: 0x3e00008  jr          $ra
    ctx->pc = 0x118D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D28u;
        // 0x118d2c: 0x8c620024  lw          $v0, 0x24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118D30u;
label_118d30:
    // 0x118d30: 0x3e00008  jr          $ra
    ctx->pc = 0x118D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118D38u;
}
