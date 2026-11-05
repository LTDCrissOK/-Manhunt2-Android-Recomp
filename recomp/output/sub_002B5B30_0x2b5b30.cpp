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

// Function: sub_002B5B30
// Address: 0x2b5b30 - 0x2b5b50
void sub_002B5B30_0x2b5b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5B30_0x2b5b30");
#endif

    switch (ctx->pc) {
        case 0x2b5b40u: goto label_2b5b40;
        default: break;
    }

    ctx->pc = 0x2b5b30u;

    // 0x2b5b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b5b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b5b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b5b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b5b38: 0xc0a2306  jal         func_288C18
    ctx->pc = 0x2B5B38u;
    SET_GPR_U32(ctx, 31, 0x2B5B40u);
    ctx->pc = 0x2B5B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5B38u;
    // 0x2b5b3c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C18u, 0x2B5B38u, 0x2B5B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5B40u;
label_2b5b40:
    // 0x2b5b40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b5b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5b44: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B44u;
        // 0x2b5b48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5B4Cu;
    // 0x2b5b4c: 0x0  nop
    ctx->pc = 0x2b5b4cu;
    // NOP
    ctx->pc = 0x2b5b50u;
}
