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

// Function: sub_001FD568
// Address: 0x1fd568 - 0x1fd588
void sub_001FD568_0x1fd568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD568_0x1fd568");
#endif

    switch (ctx->pc) {
        case 0x1fd57cu: goto label_1fd57c;
        default: break;
    }

    ctx->pc = 0x1fd568u;

    // 0x1fd568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd56c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1fd56cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1fd570: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd574: 0xc07c3f0  jal         func_1F0FC0
    ctx->pc = 0x1FD574u;
    SET_GPR_U32(ctx, 31, 0x1FD57Cu);
    ctx->pc = 0x1FD578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD574u;
    // 0x1fd578: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0FC0u, 0x1FD574u, 0x1FD57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD57Cu;
label_1fd57c:
    // 0x1fd57c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd580: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD580u;
        // 0x1fd584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD588u;
}
