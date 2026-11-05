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

// Function: sub_003EAFA8
// Address: 0x3eafa8 - 0x3eafc0
void sub_003EAFA8_0x3eafa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EAFA8_0x3eafa8");
#endif

    ctx->pc = 0x3eafa8u;

    // 0x3eafa8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3eafa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eafac: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3eafacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3eafb0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3eafb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3eafb4: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x3eafb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x3eafb8: 0x3e00008  jr          $ra
    ctx->pc = 0x3EAFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EAFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAFB8u;
        // 0x3eafbc: 0xa0800008  sb          $zero, 0x8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EAFC0u;
}
