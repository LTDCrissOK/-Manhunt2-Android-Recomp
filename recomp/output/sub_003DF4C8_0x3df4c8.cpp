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

// Function: sub_003DF4C8
// Address: 0x3df4c8 - 0x3df4f0
void sub_003DF4C8_0x3df4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF4C8_0x3df4c8");
#endif

    ctx->pc = 0x3df4c8u;

    // 0x3df4c8: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x3df4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x3df4cc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3df4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3df4d0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DF4D0u;
    {
        const bool branch_taken_0x3df4d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DF4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF4D0u;
        // 0x3df4d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df4d0) {
            ctx->pc = 0x3DF4E4u;
            goto label_3df4e4;
        }
    }
    ctx->pc = 0x3DF4D8u;
    // 0x3df4d8: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x3df4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x3df4dc: 0x3842041c  xori        $v0, $v0, 0x41C
    ctx->pc = 0x3df4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1052);
    // 0x3df4e0: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x3df4e0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3df4e4:
    // 0x3df4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF4E4u;
        // 0x3df4e8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF4ECu;
    // 0x3df4ec: 0x0  nop
    ctx->pc = 0x3df4ecu;
    // NOP
    ctx->pc = 0x3df4f0u;
}
