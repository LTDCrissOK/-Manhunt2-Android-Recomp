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

// Function: sub_001FD7B0
// Address: 0x1fd7b0 - 0x1fd7d0
void sub_001FD7B0_0x1fd7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD7B0_0x1fd7b0");
#endif

    switch (ctx->pc) {
        case 0x1fd7c4u: goto label_1fd7c4;
        default: break;
    }

    ctx->pc = 0x1fd7b0u;

    // 0x1fd7b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd7b4: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1fd7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1fd7b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd7bc: 0xc080312  jal         func_200C48
    ctx->pc = 0x1FD7BCu;
    SET_GPR_U32(ctx, 31, 0x1FD7C4u);
    ctx->pc = 0x1FD7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD7BCu;
    // 0x1fd7c0: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200C48u, 0x1FD7BCu, 0x1FD7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD7C4u;
label_1fd7c4:
    // 0x1fd7c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7C8u;
        // 0x1fd7cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD7D0u;
}
