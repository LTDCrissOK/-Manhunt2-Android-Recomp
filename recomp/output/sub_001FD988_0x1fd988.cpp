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

// Function: sub_001FD988
// Address: 0x1fd988 - 0x1fd9a8
void sub_001FD988_0x1fd988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD988_0x1fd988");
#endif

    switch (ctx->pc) {
        case 0x1fd99cu: goto label_1fd99c;
        default: break;
    }

    ctx->pc = 0x1fd988u;

    // 0x1fd988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd98c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1fd98cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1fd990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd994: 0xc07b108  jal         func_1EC420
    ctx->pc = 0x1FD994u;
    SET_GPR_U32(ctx, 31, 0x1FD99Cu);
    ctx->pc = 0x1FD998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD994u;
    // 0x1fd998: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC420u, 0x1FD994u, 0x1FD99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD99Cu;
label_1fd99c:
    // 0x1fd99c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD9A0u;
        // 0x1fd9a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD9A8u;
}
