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

// Function: sub_001965D8
// Address: 0x1965d8 - 0x196608
void sub_001965D8_0x1965d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001965D8_0x1965d8");
#endif

    ctx->pc = 0x1965d8u;

    // 0x1965d8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1965d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1965dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1965dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1965e0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1965E0u;
    {
        const bool branch_taken_0x1965e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1965E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1965E0u;
        // 0x1965e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1965e0) {
            ctx->pc = 0x1965F4u;
            goto label_1965f4;
        }
    }
    ctx->pc = 0x1965E8u;
    // 0x1965e8: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x1965e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x1965ec: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1965ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1965f0: 0x2c650001  sltiu       $a1, $v1, 0x1
    ctx->pc = 0x1965f0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1965f4:
    // 0x1965f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1965F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1965F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1965F4u;
        // 0x1965f8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1965F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1965FCu;
    // 0x1965fc: 0x0  nop
    ctx->pc = 0x1965fcu;
    // NOP
    // 0x196600: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x196600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196604: 0x0  nop
    ctx->pc = 0x196604u;
    // NOP
    ctx->pc = 0x196608u;
}
