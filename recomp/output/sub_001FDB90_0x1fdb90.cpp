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

// Function: sub_001FDB90
// Address: 0x1fdb90 - 0x1fdba0
void sub_001FDB90_0x1fdb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDB90_0x1fdb90");
#endif

    ctx->pc = 0x1fdb90u;

    // 0x1fdb90: 0x9082000c  lbu         $v0, 0xC($a0)
    ctx->pc = 0x1fdb90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fdb94: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB94u;
        // 0x1fdb98: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDB9Cu;
    // 0x1fdb9c: 0x0  nop
    ctx->pc = 0x1fdb9cu;
    // NOP
    ctx->pc = 0x1fdba0u;
}
