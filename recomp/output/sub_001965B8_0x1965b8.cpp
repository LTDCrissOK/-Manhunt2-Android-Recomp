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

// Function: sub_001965B8
// Address: 0x1965b8 - 0x1965d8
void sub_001965B8_0x1965b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001965B8_0x1965b8");
#endif

    switch (ctx->pc) {
        case 0x1965c8u: goto label_1965c8;
        default: break;
    }

    ctx->pc = 0x1965b8u;

    // 0x1965b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1965b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1965bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1965bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1965c0: 0xc065aa8  jal         func_196AA0
    ctx->pc = 0x1965C0u;
    SET_GPR_U32(ctx, 31, 0x1965C8u);
    ctx->pc = 0x1965C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1965C0u;
    // 0x1965c4: 0x8c850018  lw          $a1, 0x18($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196AA0u, 0x1965C0u, 0x1965C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1965C8u;
label_1965c8:
    // 0x1965c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1965c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1965cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1965CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1965D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1965CCu;
        // 0x1965d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1965CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1965D4u;
    // 0x1965d4: 0x0  nop
    ctx->pc = 0x1965d4u;
    // NOP
    ctx->pc = 0x1965d8u;
}
