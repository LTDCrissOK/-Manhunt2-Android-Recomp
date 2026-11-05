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

// Function: sub_001FD2C8
// Address: 0x1fd2c8 - 0x1fd2e8
void sub_001FD2C8_0x1fd2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD2C8_0x1fd2c8");
#endif

    switch (ctx->pc) {
        case 0x1fd2dcu: goto label_1fd2dc;
        default: break;
    }

    ctx->pc = 0x1fd2c8u;

    // 0x1fd2c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd2cc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1fd2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1fd2d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd2d4: 0xc07dadc  jal         func_1F6B70
    ctx->pc = 0x1FD2D4u;
    SET_GPR_U32(ctx, 31, 0x1FD2DCu);
    ctx->pc = 0x1FD2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD2D4u;
    // 0x1fd2d8: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6B70u, 0x1FD2D4u, 0x1FD2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD2DCu;
label_1fd2dc:
    // 0x1fd2dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd2dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2E0u;
        // 0x1fd2e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD2E8u;
}
