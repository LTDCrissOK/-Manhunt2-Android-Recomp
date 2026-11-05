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

// Function: sub_0019D888
// Address: 0x19d888 - 0x19d8b0
void sub_0019D888_0x19d888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D888_0x19d888");
#endif

    switch (ctx->pc) {
        case 0x19d8a0u: goto label_19d8a0;
        default: break;
    }

    ctx->pc = 0x19d888u;

    // 0x19d888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d88c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19d88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d894: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x19d894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x19d898: 0xc0952e8  jal         func_254BA0
    ctx->pc = 0x19D898u;
    SET_GPR_U32(ctx, 31, 0x19D8A0u);
    ctx->pc = 0x19D89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D898u;
    // 0x19d89c: 0x8c850fe4  lw          $a1, 0xFE4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254BA0u, 0x19D898u, 0x19D8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D8A0u;
label_19d8a0:
    // 0x19d8a0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x19d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x19d8a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x19D8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D8A8u;
        // 0x19d8ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D8B0u;
}
