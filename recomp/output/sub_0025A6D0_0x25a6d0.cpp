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

// Function: sub_0025A6D0
// Address: 0x25a6d0 - 0x25a6f8
void sub_0025A6D0_0x25a6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A6D0_0x25a6d0");
#endif

    ctx->pc = 0x25a6d0u;

    // 0x25a6d0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x25a6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25a6d4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x25a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x25a6d8: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x25a6d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x25a6dc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x25a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x25a6e0: 0x24429a60  addiu       $v0, $v0, -0x65A0
    ctx->pc = 0x25a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941280));
    // 0x25a6e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a6e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25a6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x25A6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6ECu;
        // 0x25a6f0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A6F4u;
    // 0x25a6f4: 0x0  nop
    ctx->pc = 0x25a6f4u;
    // NOP
    ctx->pc = 0x25a6f8u;
}
