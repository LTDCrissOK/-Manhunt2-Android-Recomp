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

// Function: sub_0010FB10
// Address: 0x10fb10 - 0x10fb40
void sub_0010FB10_0x10fb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FB10_0x10fb10");
#endif

    ctx->pc = 0x10fb10u;

    // 0x10fb10: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x10fb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x10fb14: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x10fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x10fb18: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FB18u;
    {
        const bool branch_taken_0x10fb18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB18u;
        // 0x10fb1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb18) {
            ctx->pc = 0x10FB2Cu;
            goto label_10fb2c;
        }
    }
    ctx->pc = 0x10FB20u;
    // 0x10fb20: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x10fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x10fb24: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10FB24u;
    {
        const bool branch_taken_0x10fb24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10fb24) {
            ctx->pc = 0x10FB30u;
            goto label_10fb30;
        }
    }
    ctx->pc = 0x10FB2Cu;
label_10fb2c:
    // 0x10fb2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10fb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10fb30:
    // 0x10fb30: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10FB30u;
    {
        const bool branch_taken_0x10fb30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fb30) {
            ctx->pc = 0x10FB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10FB30u;
            // 0x10fb34: 0x8c8500e0  lw          $a1, 0xE0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10FB38u;
            goto label_10fb38;
        }
    }
    ctx->pc = 0x10FB38u;
label_10fb38:
    // 0x10fb38: 0x3e00008  jr          $ra
    ctx->pc = 0x10FB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB38u;
        // 0x10fb3c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FB40u;
}
