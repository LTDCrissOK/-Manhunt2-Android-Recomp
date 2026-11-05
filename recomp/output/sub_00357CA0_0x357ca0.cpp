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

// Function: sub_00357CA0
// Address: 0x357ca0 - 0x357cc0
void sub_00357CA0_0x357ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357CA0_0x357ca0");
#endif

    switch (ctx->pc) {
        case 0x357cb0u: goto label_357cb0;
        default: break;
    }

    ctx->pc = 0x357ca0u;

    // 0x357ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x357ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x357ca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x357ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x357ca8: 0xc0dbf2a  jal         func_36FCA8
    ctx->pc = 0x357CA8u;
    SET_GPR_U32(ctx, 31, 0x357CB0u);
    ctx->pc = 0x357CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357CA8u;
    // 0x357cac: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FCA8u, 0x357CA8u, 0x357CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357CB0u;
label_357cb0:
    // 0x357cb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x357cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x357CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357CB4u;
        // 0x357cb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357CBCu;
    // 0x357cbc: 0x0  nop
    ctx->pc = 0x357cbcu;
    // NOP
    ctx->pc = 0x357cc0u;
}
