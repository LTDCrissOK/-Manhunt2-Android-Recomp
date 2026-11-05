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

// Function: sub_001D5D28
// Address: 0x1d5d28 - 0x1d5d48
void sub_001D5D28_0x1d5d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5D28_0x1d5d28");
#endif

    switch (ctx->pc) {
        case 0x1d5d38u: goto label_1d5d38;
        default: break;
    }

    ctx->pc = 0x1d5d28u;

    // 0x1d5d28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5d2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5d30: 0xc075784  jal         func_1D5E10
    ctx->pc = 0x1D5D30u;
    SET_GPR_U32(ctx, 31, 0x1D5D38u);
    ctx->pc = 0x1D5D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D30u;
    // 0x1d5d34: 0x94a6002a  lhu         $a2, 0x2A($a1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5E10u, 0x1D5D30u, 0x1D5D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D38u;
label_1d5d38:
    // 0x1d5d38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D3Cu;
        // 0x1d5d40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5D44u;
    // 0x1d5d44: 0x0  nop
    ctx->pc = 0x1d5d44u;
    // NOP
    ctx->pc = 0x1d5d48u;
}
