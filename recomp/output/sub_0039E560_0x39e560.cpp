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

// Function: sub_0039E560
// Address: 0x39e560 - 0x39e5a0
void sub_0039E560_0x39e560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E560_0x39e560");
#endif

    ctx->pc = 0x39e560u;

    // 0x39e560: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x39e560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x39e564: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x39e564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39e568: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x39e568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x39e56c: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x39e56cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
    // 0x39e570: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x39e570u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x39e574: 0xa080000b  sb          $zero, 0xB($a0)
    ctx->pc = 0x39e574u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x39e578: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x39e578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x39e57c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x39e57cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x39e580: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x39e580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x39e584: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x39e584u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x39e588: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x39e588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x39e58c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x39e58cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x39e590: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x39e590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x39e594: 0x3e00008  jr          $ra
    ctx->pc = 0x39E594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E594u;
        // 0x39e598: 0xac80003c  sw          $zero, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E59Cu;
    // 0x39e59c: 0x0  nop
    ctx->pc = 0x39e59cu;
    // NOP
    ctx->pc = 0x39e5a0u;
}
