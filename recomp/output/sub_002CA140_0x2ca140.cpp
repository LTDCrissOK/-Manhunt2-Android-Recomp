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

// Function: sub_002CA140
// Address: 0x2ca140 - 0x2ca160
void sub_002CA140_0x2ca140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA140_0x2ca140");
#endif

    switch (ctx->pc) {
        case 0x2ca150u: goto label_2ca150;
        default: break;
    }

    ctx->pc = 0x2ca140u;

    // 0x2ca140: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ca140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ca144: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ca144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ca148: 0xc0b276c  jal         func_2C9DB0
    ctx->pc = 0x2CA148u;
    SET_GPR_U32(ctx, 31, 0x2CA150u);
    ctx->pc = 0x2CA14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA148u;
    // 0x2ca14c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9DB0u, 0x2CA148u, 0x2CA150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA150u;
label_2ca150:
    // 0x2ca150: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x2ca150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2ca154: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ca154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ca158: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA158u;
        // 0x2ca15c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA160u;
}
