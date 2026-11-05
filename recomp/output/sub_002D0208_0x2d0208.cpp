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

// Function: sub_002D0208
// Address: 0x2d0208 - 0x2d0238
void sub_002D0208_0x2d0208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0208_0x2d0208");
#endif

    switch (ctx->pc) {
        case 0x2d0228u: goto label_2d0228;
        default: break;
    }

    ctx->pc = 0x2d0208u;

    // 0x2d0208: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2d0208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2d020c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2d020cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2d0210: 0x8c43b4a8  lw          $v1, -0x4B58($v0)
    ctx->pc = 0x2d0210u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FB4A8u));
    // 0x2d0214: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d0214u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d0218: 0x34842fc8  ori         $a0, $a0, 0x2FC8
    ctx->pc = 0x2d0218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12232);
    // 0x2d021c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d021cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0220: 0xc0b3c6e  jal         func_2CF1B8
    ctx->pc = 0x2D0220u;
    SET_GPR_U32(ctx, 31, 0x2D0228u);
    ctx->pc = 0x2D0224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0220u;
    // 0x2d0224: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF1B8u, 0x2D0220u, 0x2D0228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0228u;
label_2d0228:
    // 0x2d0228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d022c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d022cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0230: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0230u;
        // 0x2d0234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0238u;
}
