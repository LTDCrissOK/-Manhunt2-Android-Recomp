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

// Function: sub_001FD5A8
// Address: 0x1fd5a8 - 0x1fd5c8
void sub_001FD5A8_0x1fd5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD5A8_0x1fd5a8");
#endif

    switch (ctx->pc) {
        case 0x1fd5bcu: goto label_1fd5bc;
        default: break;
    }

    ctx->pc = 0x1fd5a8u;

    // 0x1fd5a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd5ac: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1fd5acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1fd5b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd5b4: 0xc07f0e8  jal         func_1FC3A0
    ctx->pc = 0x1FD5B4u;
    SET_GPR_U32(ctx, 31, 0x1FD5BCu);
    ctx->pc = 0x1FD5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD5B4u;
    // 0x1fd5b8: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC3A0u, 0x1FD5B4u, 0x1FD5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD5BCu;
label_1fd5bc:
    // 0x1fd5bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5C0u;
        // 0x1fd5c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD5C8u;
}
