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

// Function: sub_001164B0
// Address: 0x1164b0 - 0x1164d8
void sub_001164B0_0x1164b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001164B0_0x1164b0");
#endif

    switch (ctx->pc) {
        case 0x1164c8u: goto label_1164c8;
        default: break;
    }

    ctx->pc = 0x1164b0u;

    // 0x1164b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1164b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1164b4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1164b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1164b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1164b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1164bc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1164bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1164c0: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x1164C0u;
    SET_GPR_U32(ctx, 31, 0x1164C8u);
    ctx->pc = 0x1164C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1164C0u;
    // 0x1164c4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x1164C0u, 0x1164C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1164C8u;
label_1164c8:
    // 0x1164c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1164c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1164cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1164CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1164D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1164CCu;
        // 0x1164d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1164CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1164D4u;
    // 0x1164d4: 0x0  nop
    ctx->pc = 0x1164d4u;
    // NOP
    ctx->pc = 0x1164d8u;
}
