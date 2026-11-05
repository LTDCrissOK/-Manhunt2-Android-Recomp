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

// Function: sub_002752F8
// Address: 0x2752f8 - 0x275318
void sub_002752F8_0x2752f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002752F8_0x2752f8");
#endif

    switch (ctx->pc) {
        case 0x275308u: goto label_275308;
        default: break;
    }

    ctx->pc = 0x2752f8u;

    // 0x2752f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2752f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2752fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2752fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275300: 0xc084aba  jal         func_212AE8
    ctx->pc = 0x275300u;
    SET_GPR_U32(ctx, 31, 0x275308u);
    ctx->pc = 0x212AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212AE8u, 0x275300u, 0x275308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275308u;
label_275308:
    // 0x275308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27530c: 0x3e00008  jr          $ra
    ctx->pc = 0x27530Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27530Cu;
        // 0x275310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27530Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275314u;
    // 0x275314: 0x0  nop
    ctx->pc = 0x275314u;
    // NOP
    ctx->pc = 0x275318u;
}
