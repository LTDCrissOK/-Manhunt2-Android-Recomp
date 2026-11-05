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

// Function: sub_001FD5C8
// Address: 0x1fd5c8 - 0x1fd5e8
void sub_001FD5C8_0x1fd5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD5C8_0x1fd5c8");
#endif

    switch (ctx->pc) {
        case 0x1fd5dcu: goto label_1fd5dc;
        default: break;
    }

    ctx->pc = 0x1fd5c8u;

    // 0x1fd5c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd5cc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1fd5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1fd5d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd5d4: 0xc07f11e  jal         func_1FC478
    ctx->pc = 0x1FD5D4u;
    SET_GPR_U32(ctx, 31, 0x1FD5DCu);
    ctx->pc = 0x1FD5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD5D4u;
    // 0x1fd5d8: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC478u, 0x1FD5D4u, 0x1FD5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD5DCu;
label_1fd5dc:
    // 0x1fd5dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5E0u;
        // 0x1fd5e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD5E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD5E8u;
}
