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

// Function: sub_0028AC68
// Address: 0x28ac68 - 0x28ac98
void sub_0028AC68_0x28ac68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AC68_0x28ac68");
#endif

    switch (ctx->pc) {
        case 0x28ac78u: goto label_28ac78;
        default: break;
    }

    ctx->pc = 0x28ac68u;

    // 0x28ac68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28ac68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28ac6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ac6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ac70: 0xc0a2bd6  jal         func_28AF58
    ctx->pc = 0x28AC70u;
    SET_GPR_U32(ctx, 31, 0x28AC78u);
    ctx->pc = 0x28AF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AF58u, 0x28AC70u, 0x28AC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AC78u;
label_28ac78:
    // 0x28ac78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ac78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ac7c: 0x3e00008  jr          $ra
    ctx->pc = 0x28AC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC7Cu;
        // 0x28ac80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AC84u;
    // 0x28ac84: 0x0  nop
    ctx->pc = 0x28ac84u;
    // NOP
    // 0x28ac88: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x28ac88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28ac8c: 0x0  nop
    ctx->pc = 0x28ac8cu;
    // NOP
    // 0x28ac90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28ac90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28ac94: 0x0  nop
    ctx->pc = 0x28ac94u;
    // NOP
    ctx->pc = 0x28ac98u;
}
