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

// Function: sub_0015ABB0
// Address: 0x15abb0 - 0x15abc8
void sub_0015ABB0_0x15abb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015ABB0_0x15abb0");
#endif

    ctx->pc = 0x15abb0u;

    // 0x15abb0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15abb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15abb4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x15abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15abb8: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x15abb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15abbc: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x15abbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15abc0: 0x3e00008  jr          $ra
    ctx->pc = 0x15ABC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ABC0u;
        // 0x15abc4: 0xaca60a24  sw          $a2, 0xA24($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 2596), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ABC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15ABC8u;
}
