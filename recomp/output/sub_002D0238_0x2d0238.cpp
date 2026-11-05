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

// Function: sub_002D0238
// Address: 0x2d0238 - 0x2d0268
void sub_002D0238_0x2d0238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0238_0x2d0238");
#endif

    switch (ctx->pc) {
        case 0x2d0258u: goto label_2d0258;
        default: break;
    }

    ctx->pc = 0x2d0238u;

    // 0x2d0238: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2d0238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2d023c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2d023cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2d0240: 0x8c43b4a8  lw          $v1, -0x4B58($v0)
    ctx->pc = 0x2d0240u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FB4A8u));
    // 0x2d0244: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d0244u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d0248: 0x34842fc8  ori         $a0, $a0, 0x2FC8
    ctx->pc = 0x2d0248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12232);
    // 0x2d024c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d024cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0250: 0xc0b3cb2  jal         func_2CF2C8
    ctx->pc = 0x2D0250u;
    SET_GPR_U32(ctx, 31, 0x2D0258u);
    ctx->pc = 0x2D0254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0250u;
    // 0x2d0254: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF2C8u, 0x2D0250u, 0x2D0258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0258u;
label_2d0258:
    // 0x2d0258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d025c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d025cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0260: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0260u;
        // 0x2d0264: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0268u;
}
