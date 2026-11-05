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

// Function: sub_00108DD8
// Address: 0x108dd8 - 0x108df0
void sub_00108DD8_0x108dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108DD8_0x108dd8");
#endif

    ctx->pc = 0x108dd8u;

    // 0x108dd8: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x108dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x108ddc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x108ddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108de0: 0x24630348  addiu       $v1, $v1, 0x348
    ctx->pc = 0x108de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 840));
    // 0x108de4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x108de4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x108de8: 0x3e00008  jr          $ra
    ctx->pc = 0x108DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DE8u;
        // 0x108dec: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108DF0u;
}
