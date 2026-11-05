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

// Function: sub_0012CFE0
// Address: 0x12cfe0 - 0x12d000
void sub_0012CFE0_0x12cfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012CFE0_0x12cfe0");
#endif

    switch (ctx->pc) {
        case 0x12cff4u: goto label_12cff4;
        default: break;
    }

    ctx->pc = 0x12cfe0u;

    // 0x12cfe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12cfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12cfe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12cfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12cfe8: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x12cfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x12cfec: 0xc04c710  jal         func_131C40
    ctx->pc = 0x12CFECu;
    SET_GPR_U32(ctx, 31, 0x12CFF4u);
    ctx->pc = 0x12CFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CFECu;
    // 0x12cff0: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131C40u, 0x12CFECu, 0x12CFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CFF4u;
label_12cff4:
    // 0x12cff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12cff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cff8: 0x3e00008  jr          $ra
    ctx->pc = 0x12CFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CFF8u;
        // 0x12cffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D000u;
}
