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

// Function: sub_002D0598
// Address: 0x2d0598 - 0x2d05d8
void sub_002D0598_0x2d0598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0598_0x2d0598");
#endif

    ctx->pc = 0x2d0598u;

    // 0x2d0598: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2d0598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d059c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D059Cu;
    {
        const bool branch_taken_0x2d059c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d059c) {
            ctx->pc = 0x2D05B0u;
            goto label_2d05b0;
        }
    }
    ctx->pc = 0x2D05A4u;
    // 0x2d05a4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2d05a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d05a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d05a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d05ac: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2d05acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_2d05b0:
    // 0x2d05b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D05B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D05B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D05B8u;
    // 0x2d05b8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d05b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d05bc: 0x0  nop
    ctx->pc = 0x2d05bcu;
    // NOP
    // 0x2d05c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d05c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d05c4: 0x0  nop
    ctx->pc = 0x2d05c4u;
    // NOP
    // 0x2d05c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d05c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d05cc: 0x0  nop
    ctx->pc = 0x2d05ccu;
    // NOP
    // 0x2d05d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d05d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d05d4: 0x0  nop
    ctx->pc = 0x2d05d4u;
    // NOP
    ctx->pc = 0x2d05d8u;
}
