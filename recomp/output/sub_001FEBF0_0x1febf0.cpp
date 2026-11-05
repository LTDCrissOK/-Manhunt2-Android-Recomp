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

// Function: sub_001FEBF0
// Address: 0x1febf0 - 0x1fec10
void sub_001FEBF0_0x1febf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEBF0_0x1febf0");
#endif

    switch (ctx->pc) {
        case 0x1fec00u: goto label_1fec00;
        default: break;
    }

    ctx->pc = 0x1febf0u;

    // 0x1febf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1febf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1febf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1febf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1febf8: 0xc07fae6  jal         func_1FEB98
    ctx->pc = 0x1FEBF8u;
    SET_GPR_U32(ctx, 31, 0x1FEC00u);
    ctx->pc = 0x1FEB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEB98u, 0x1FEBF8u, 0x1FEC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC00u;
label_1fec00:
    // 0x1fec00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fec00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fec04: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC04u;
        // 0x1fec08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEC0Cu;
    // 0x1fec0c: 0x0  nop
    ctx->pc = 0x1fec0cu;
    // NOP
    ctx->pc = 0x1fec10u;
}
