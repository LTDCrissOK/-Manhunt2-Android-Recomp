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

// Function: sub_003DB5A8
// Address: 0x3db5a8 - 0x3db5c0
void sub_003DB5A8_0x3db5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB5A8_0x3db5a8");
#endif

    ctx->pc = 0x3db5a8u;

    // 0x3db5a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3db5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3db5ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3db5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3db5b0: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x3db5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x3db5b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3db5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3db5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB5B8u;
        // 0x3db5bc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB5C0u;
}
