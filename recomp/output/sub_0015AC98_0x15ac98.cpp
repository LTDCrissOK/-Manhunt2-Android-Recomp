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

// Function: sub_0015AC98
// Address: 0x15ac98 - 0x15acb0
void sub_0015AC98_0x15ac98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AC98_0x15ac98");
#endif

    ctx->pc = 0x15ac98u;

    // 0x15ac98: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15ac98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15ac9c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x15ac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15aca0: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x15aca0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15aca4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x15aca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15aca8: 0x3e00008  jr          $ra
    ctx->pc = 0x15ACA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACA8u;
        // 0x15acac: 0xaca60a2c  sw          $a2, 0xA2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 2604), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ACA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15ACB0u;
}
