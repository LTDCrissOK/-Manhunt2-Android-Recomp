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

// Function: sub_001EB510
// Address: 0x1eb510 - 0x1eb538
void sub_001EB510_0x1eb510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB510_0x1eb510");
#endif

    ctx->pc = 0x1eb510u;

    // 0x1eb510: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1eb510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1eb514: 0x2c42007f  sltiu       $v0, $v0, 0x7F
    ctx->pc = 0x1eb514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x1eb518: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB518u;
    {
        const bool branch_taken_0x1eb518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB518u;
        // 0x1eb51c: 0x28a40001  slti        $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb518) {
            ctx->pc = 0x1EB530u;
            goto label_1eb530;
        }
    }
    ctx->pc = 0x1EB520u;
    // 0x1eb520: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eb520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb524: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x1eb524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1eb528: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB528u;
        // 0x1eb52c: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB530u;
label_1eb530:
    // 0x1eb530: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB530u;
        // 0x1eb534: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB538u;
}
