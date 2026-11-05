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

// Function: sub_0021C9D8
// Address: 0x21c9d8 - 0x21c9f8
void sub_0021C9D8_0x21c9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C9D8_0x21c9d8");
#endif

    switch (ctx->pc) {
        case 0x21c9ecu: goto label_21c9ec;
        default: break;
    }

    ctx->pc = 0x21c9d8u;

    // 0x21c9d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c9dc: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x21c9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x21c9e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21c9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21c9e4: 0xc0c34b6  jal         func_30D2D8
    ctx->pc = 0x21C9E4u;
    SET_GPR_U32(ctx, 31, 0x21C9ECu);
    ctx->pc = 0x21C9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C9E4u;
    // 0x21c9e8: 0x24843578  addiu       $a0, $a0, 0x3578 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D2D8u, 0x21C9E4u, 0x21C9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C9ECu;
label_21c9ec:
    // 0x21c9ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x21C9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9F0u;
        // 0x21c9f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C9F8u;
}
