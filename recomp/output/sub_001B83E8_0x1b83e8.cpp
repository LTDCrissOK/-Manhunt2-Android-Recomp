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

// Function: sub_001B83E8
// Address: 0x1b83e8 - 0x1b8410
void sub_001B83E8_0x1b83e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B83E8_0x1b83e8");
#endif

    switch (ctx->pc) {
        case 0x1b8404u: goto label_1b8404;
        default: break;
    }

    ctx->pc = 0x1b83e8u;

    // 0x1b83e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b83e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b83ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b83ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b83f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b83f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b83f4: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x1b83f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x1b83f8: 0x8c440ff8  lw          $a0, 0xFF8($v0)
    ctx->pc = 0x1b83f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x1b83fc: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x1B83FCu;
    SET_GPR_U32(ctx, 31, 0x1B8404u);
    ctx->pc = 0x1B8400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B83FCu;
    // 0x1b8400: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x1B83FCu, 0x1B8404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8404u;
label_1b8404:
    // 0x1b8404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8408: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8408u;
        // 0x1b840c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8410u;
}
