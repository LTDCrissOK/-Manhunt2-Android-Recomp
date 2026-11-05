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

// Function: sub_0020EEE8
// Address: 0x20eee8 - 0x20ef00
void sub_0020EEE8_0x20eee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020EEE8_0x20eee8");
#endif

    ctx->pc = 0x20eee8u;

    // 0x20eee8: 0xac8500b8  sw          $a1, 0xB8($a0)
    ctx->pc = 0x20eee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 5));
    // 0x20eeec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20eef0: 0x3e00008  jr          $ra
    ctx->pc = 0x20EEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EEF0u;
        // 0x20eef4: 0xac8200bc  sw          $v0, 0xBC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EEF8u;
    // 0x20eef8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x20eef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eefc: 0x0  nop
    ctx->pc = 0x20eefcu;
    // NOP
    ctx->pc = 0x20ef00u;
}
