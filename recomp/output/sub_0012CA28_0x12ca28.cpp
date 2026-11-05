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

// Function: sub_0012CA28
// Address: 0x12ca28 - 0x12ca38
void sub_0012CA28_0x12ca28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012CA28_0x12ca28");
#endif

    ctx->pc = 0x12ca28u;

    // 0x12ca28: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12ca28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca2c: 0x3e00008  jr          $ra
    ctx->pc = 0x12CA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA2Cu;
        // 0x12ca30: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CA2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CA34u;
    // 0x12ca34: 0x0  nop
    ctx->pc = 0x12ca34u;
    // NOP
    ctx->pc = 0x12ca38u;
}
