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

// Function: sub_00107AB0
// Address: 0x107ab0 - 0x107ad0
void sub_00107AB0_0x107ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107AB0_0x107ab0");
#endif

    switch (ctx->pc) {
        case 0x107ac0u: goto label_107ac0;
        default: break;
    }

    ctx->pc = 0x107ab0u;

    // 0x107ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107ab8: 0xc0f6d48  jal         func_3DB520
    ctx->pc = 0x107AB8u;
    SET_GPR_U32(ctx, 31, 0x107AC0u);
    ctx->pc = 0x3DB520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB520u, 0x107AB8u, 0x107AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107AC0u;
label_107ac0:
    // 0x107ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x107AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AC4u;
        // 0x107ac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107ACCu;
    // 0x107acc: 0x0  nop
    ctx->pc = 0x107accu;
    // NOP
    ctx->pc = 0x107ad0u;
}
