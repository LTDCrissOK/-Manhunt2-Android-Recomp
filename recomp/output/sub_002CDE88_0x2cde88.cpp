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

// Function: sub_002CDE88
// Address: 0x2cde88 - 0x2cdeb8
void sub_002CDE88_0x2cde88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDE88_0x2cde88");
#endif

    ctx->pc = 0x2cde88u;

    // 0x2cde88: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2cde88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2cde8c: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x2cde8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cde90: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2cde90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2cde94: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2cde94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2cde98: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2cde98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cde9c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CDE9Cu;
    {
        const bool branch_taken_0x2cde9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cde9c) {
            ctx->pc = 0x2CDEB0u;
            goto label_2cdeb0;
        }
    }
    ctx->pc = 0x2CDEA4u;
    // 0x2cdea4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2cdea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cdea8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2cdea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cdeac: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2cdeacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2cdeb0:
    // 0x2cdeb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDEB0u;
        // 0x2cdeb4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDEB8u;
}
