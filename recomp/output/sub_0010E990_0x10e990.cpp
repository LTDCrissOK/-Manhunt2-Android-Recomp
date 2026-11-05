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

// Function: sub_0010E990
// Address: 0x10e990 - 0x10e9b0
void sub_0010E990_0x10e990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E990_0x10e990");
#endif

    ctx->pc = 0x10e990u;

    // 0x10e990: 0x8c8201b8  lw          $v0, 0x1B8($a0)
    ctx->pc = 0x10e990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x10e994: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x10e994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x10e998: 0x8c64a9d4  lw          $a0, -0x562C($v1)
    ctx->pc = 0x10e998u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x10e99c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x10e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x10e9a0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x10e9a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x10e9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x10E9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E9A4u;
        // 0x10e9a8: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E9ACu;
    // 0x10e9ac: 0x0  nop
    ctx->pc = 0x10e9acu;
    // NOP
    ctx->pc = 0x10e9b0u;
}
