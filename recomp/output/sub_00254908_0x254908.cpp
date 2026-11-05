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

// Function: sub_00254908
// Address: 0x254908 - 0x254928
void sub_00254908_0x254908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254908_0x254908");
#endif

    ctx->pc = 0x254908u;

    // 0x254908: 0x8c830ff4  lw          $v1, 0xFF4($a0)
    ctx->pc = 0x254908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4084)));
    // 0x25490c: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x25490cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x254910: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254910u;
    {
        const bool branch_taken_0x254910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254910u;
        // 0x254914: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254910) {
            ctx->pc = 0x254920u;
            goto label_254920;
        }
    }
    ctx->pc = 0x254918u;
    // 0x254918: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x254918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x25491c: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x25491cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_254920:
    // 0x254920: 0x3e00008  jr          $ra
    ctx->pc = 0x254920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254920u;
        // 0x254924: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254928u;
}
