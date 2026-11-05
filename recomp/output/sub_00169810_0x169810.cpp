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

// Function: sub_00169810
// Address: 0x169810 - 0x169830
void sub_00169810_0x169810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169810_0x169810");
#endif

    switch (ctx->pc) {
        case 0x169820u: goto label_169820;
        default: break;
    }

    ctx->pc = 0x169810u;

    // 0x169810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169818: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x169818u;
    SET_GPR_U32(ctx, 31, 0x169820u);
    ctx->pc = 0x16981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169818u;
    // 0x16981c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x169818u, 0x169820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169820u;
label_169820:
    // 0x169820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169824: 0x3e00008  jr          $ra
    ctx->pc = 0x169824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169824u;
        // 0x169828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16982Cu;
    // 0x16982c: 0x0  nop
    ctx->pc = 0x16982cu;
    // NOP
    ctx->pc = 0x169830u;
}
