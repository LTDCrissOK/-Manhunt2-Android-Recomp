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

// Function: sub_003DC020
// Address: 0x3dc020 - 0x3dc038
void sub_003DC020_0x3dc020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC020_0x3dc020");
#endif

    ctx->pc = 0x3dc020u;

    // 0x3dc020: 0xa4800010  sh          $zero, 0x10($a0)
    ctx->pc = 0x3dc020u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dc024: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x3dc024u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dc028: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x3dc028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x3dc02c: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x3dc02cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dc030: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC030u;
        // 0x3dc034: 0xa480000e  sh          $zero, 0xE($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC038u;
}
