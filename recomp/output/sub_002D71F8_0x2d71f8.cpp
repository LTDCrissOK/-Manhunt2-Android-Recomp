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

// Function: sub_002D71F8
// Address: 0x2d71f8 - 0x2d7230
void sub_002D71F8_0x2d71f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D71F8_0x2d71f8");
#endif

    switch (ctx->pc) {
        case 0x2d7218u: goto label_2d7218;
        default: break;
    }

    ctx->pc = 0x2d71f8u;

    // 0x2d71f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d71f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d71fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d71fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d7200: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2d7200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d7204: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d7204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d7208: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7208u;
    {
        const bool branch_taken_0x2d7208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7208u;
        // 0x2d720c: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7208) {
            ctx->pc = 0x2D7218u;
            goto label_2d7218;
        }
    }
    ctx->pc = 0x2D7210u;
    // 0x2d7210: 0xc0b5c40  jal         func_2D7100
    ctx->pc = 0x2D7210u;
    SET_GPR_U32(ctx, 31, 0x2D7218u);
    ctx->pc = 0x2D7100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7100u, 0x2D7210u, 0x2D7218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7218u;
label_2d7218:
    // 0x2d7218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d7218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d721c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D721Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D721Cu;
        // 0x2d7220: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D721Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7224u;
    // 0x2d7224: 0x0  nop
    ctx->pc = 0x2d7224u;
    // NOP
    // 0x2d7228: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d7228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d722c: 0x0  nop
    ctx->pc = 0x2d722cu;
    // NOP
    ctx->pc = 0x2d7230u;
}
