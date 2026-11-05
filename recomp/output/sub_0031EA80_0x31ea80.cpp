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

// Function: sub_0031EA80
// Address: 0x31ea80 - 0x31eab8
void sub_0031EA80_0x31ea80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EA80_0x31ea80");
#endif

    ctx->pc = 0x31ea80u;

    // 0x31ea80: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x31ea80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ea84: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x31ea84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x31ea88: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x31ea88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x31ea8c: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x31ea8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x31ea90: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x31ea90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x31ea94: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x31ea94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x31ea98: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x31ea98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x31ea9c: 0xa080005c  sb          $zero, 0x5C($a0)
    ctx->pc = 0x31ea9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x31eaa0: 0xa080005d  sb          $zero, 0x5D($a0)
    ctx->pc = 0x31eaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x31eaa4: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x31eaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x31eaa8: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x31eaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x31eaac: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x31eaacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x31eab0: 0x3e00008  jr          $ra
    ctx->pc = 0x31EAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EAB0u;
        // 0x31eab4: 0xa0800028  sb          $zero, 0x28($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EAB8u;
}
