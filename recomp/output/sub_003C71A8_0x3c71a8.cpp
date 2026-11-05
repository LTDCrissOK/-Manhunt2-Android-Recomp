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

// Function: sub_003C71A8
// Address: 0x3c71a8 - 0x3c71c8
void sub_003C71A8_0x3c71a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C71A8_0x3c71a8");
#endif

    switch (ctx->pc) {
        case 0x3c71bcu: goto label_3c71bc;
        default: break;
    }

    ctx->pc = 0x3c71a8u;

    // 0x3c71a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c71a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3c71ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c71acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c71b0: 0x8485000e  lh          $a1, 0xE($a0)
    ctx->pc = 0x3c71b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x3c71b4: 0xc0f24aa  jal         func_3C92A8
    ctx->pc = 0x3C71B4u;
    SET_GPR_U32(ctx, 31, 0x3C71BCu);
    ctx->pc = 0x3C71B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C71B4u;
    // 0x3c71b8: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C92A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C92A8u, 0x3C71B4u, 0x3C71BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C71BCu;
label_3c71bc:
    // 0x3c71bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c71bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c71c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C71C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C71C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C71C0u;
        // 0x3c71c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C71C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C71C8u;
}
