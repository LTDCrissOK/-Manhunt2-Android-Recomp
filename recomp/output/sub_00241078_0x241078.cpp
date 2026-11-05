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

// Function: sub_00241078
// Address: 0x241078 - 0x241098
void sub_00241078_0x241078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241078_0x241078");
#endif

    switch (ctx->pc) {
        case 0x241088u: goto label_241088;
        default: break;
    }

    ctx->pc = 0x241078u;

    // 0x241078: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x241078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24107c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24107cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x241080: 0xc0920dc  jal         func_248370
    ctx->pc = 0x241080u;
    SET_GPR_U32(ctx, 31, 0x241088u);
    ctx->pc = 0x248370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248370u, 0x241080u, 0x241088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241088u;
label_241088:
    // 0x241088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x241088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24108c: 0x3e00008  jr          $ra
    ctx->pc = 0x24108Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24108Cu;
        // 0x241090: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24108Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241094u;
    // 0x241094: 0x0  nop
    ctx->pc = 0x241094u;
    // NOP
    ctx->pc = 0x241098u;
}
