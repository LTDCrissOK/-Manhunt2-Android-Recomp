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

// Function: sub_00312240
// Address: 0x312240 - 0x312260
void sub_00312240_0x312240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312240_0x312240");
#endif

    ctx->pc = 0x312240u;

    // 0x312240: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x312240u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x312244: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x312244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x312248: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x312248u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x31224c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x31224cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x312250: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x312250u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x312254: 0x3e00008  jr          $ra
    ctx->pc = 0x312254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312254u;
        // 0x312258: 0xac850010  sw          $a1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31225Cu;
    // 0x31225c: 0x0  nop
    ctx->pc = 0x31225cu;
    // NOP
    ctx->pc = 0x312260u;
}
