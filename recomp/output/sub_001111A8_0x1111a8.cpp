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

// Function: sub_001111A8
// Address: 0x1111a8 - 0x1111d0
void sub_001111A8_0x1111a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001111A8_0x1111a8");
#endif

    switch (ctx->pc) {
        case 0x1111b8u: goto label_1111b8;
        default: break;
    }

    ctx->pc = 0x1111a8u;

    // 0x1111a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1111a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1111ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1111acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1111b0: 0xc0450e6  jal         func_114398
    ctx->pc = 0x1111B0u;
    SET_GPR_U32(ctx, 31, 0x1111B8u);
    ctx->pc = 0x114398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114398u, 0x1111B0u, 0x1111B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1111B8u;
label_1111b8:
    // 0x1111b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1111b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1111bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1111BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1111C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111BCu;
        // 0x1111c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1111BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1111C4u;
    // 0x1111c4: 0x0  nop
    ctx->pc = 0x1111c4u;
    // NOP
    // 0x1111c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1111c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1111cc: 0x0  nop
    ctx->pc = 0x1111ccu;
    // NOP
    ctx->pc = 0x1111d0u;
}
