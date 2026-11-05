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

// Function: sub_00124688
// Address: 0x124688 - 0x1246a8
void sub_00124688_0x124688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124688_0x124688");
#endif

    switch (ctx->pc) {
        case 0x124698u: goto label_124698;
        default: break;
    }

    ctx->pc = 0x124688u;

    // 0x124688: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x124688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12468c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12468cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x124690: 0xc04308e  jal         func_10C238
    ctx->pc = 0x124690u;
    SET_GPR_U32(ctx, 31, 0x124698u);
    ctx->pc = 0x124694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124690u;
    // 0x124694: 0x8c840078  lw          $a0, 0x78($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C238u, 0x124690u, 0x124698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124698u;
label_124698:
    // 0x124698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x124698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12469c: 0x3e00008  jr          $ra
    ctx->pc = 0x12469Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1246A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12469Cu;
        // 0x1246a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12469Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1246A4u;
    // 0x1246a4: 0x0  nop
    ctx->pc = 0x1246a4u;
    // NOP
    ctx->pc = 0x1246a8u;
}
