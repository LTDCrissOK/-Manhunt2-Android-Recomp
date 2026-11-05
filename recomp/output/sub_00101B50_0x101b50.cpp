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

// Function: sub_00101B50
// Address: 0x101b50 - 0x101b70
void sub_00101B50_0x101b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101B50_0x101b50");
#endif

    ctx->pc = 0x101b50u;

    // 0x101b50: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x101b50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x101b54: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x101b54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b58: 0xa0860004  sb          $a2, 0x4($a0)
    ctx->pc = 0x101b58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x101b5c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x101b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x101b60: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x101b60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x101b64: 0x3e00008  jr          $ra
    ctx->pc = 0x101B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B64u;
        // 0x101b68: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101B6Cu;
    // 0x101b6c: 0x0  nop
    ctx->pc = 0x101b6cu;
    // NOP
    ctx->pc = 0x101b70u;
}
