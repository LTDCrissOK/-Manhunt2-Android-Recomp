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

// Function: sub_00268AE0
// Address: 0x268ae0 - 0x268b00
void sub_00268AE0_0x268ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268AE0_0x268ae0");
#endif

    switch (ctx->pc) {
        case 0x268af0u: goto label_268af0;
        default: break;
    }

    ctx->pc = 0x268ae0u;

    // 0x268ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x268ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x268ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x268ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x268ae8: 0xc09a278  jal         func_2689E0
    ctx->pc = 0x268AE8u;
    SET_GPR_U32(ctx, 31, 0x268AF0u);
    ctx->pc = 0x2689E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2689E0u, 0x268AE8u, 0x268AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268AF0u;
label_268af0:
    // 0x268af0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x268af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268af4: 0x3e00008  jr          $ra
    ctx->pc = 0x268AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AF4u;
        // 0x268af8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268AFCu;
    // 0x268afc: 0x0  nop
    ctx->pc = 0x268afcu;
    // NOP
    ctx->pc = 0x268b00u;
}
