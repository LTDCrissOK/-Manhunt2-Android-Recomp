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

// Function: sub_003E81C0
// Address: 0x3e81c0 - 0x3e81e0
void sub_003E81C0_0x3e81c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E81C0_0x3e81c0");
#endif

    switch (ctx->pc) {
        case 0x3e81d0u: goto label_3e81d0;
        default: break;
    }

    ctx->pc = 0x3e81c0u;

    // 0x3e81c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e81c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e81c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e81c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e81c8: 0xc0b0258  jal         func_2C0960
    ctx->pc = 0x3E81C8u;
    SET_GPR_U32(ctx, 31, 0x3E81D0u);
    ctx->pc = 0x3E81CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E81C8u;
    // 0x3e81cc: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0960u, 0x3E81C8u, 0x3E81D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E81D0u;
label_3e81d0:
    // 0x3e81d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e81d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e81d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E81D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E81D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E81D4u;
        // 0x3e81d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E81D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E81DCu;
    // 0x3e81dc: 0x0  nop
    ctx->pc = 0x3e81dcu;
    // NOP
    ctx->pc = 0x3e81e0u;
}
