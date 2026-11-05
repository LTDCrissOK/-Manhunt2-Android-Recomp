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

// Function: sub_001B2AE8
// Address: 0x1b2ae8 - 0x1b2b08
void sub_001B2AE8_0x1b2ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2AE8_0x1b2ae8");
#endif

    switch (ctx->pc) {
        case 0x1b2afcu: goto label_1b2afc;
        default: break;
    }

    ctx->pc = 0x1b2ae8u;

    // 0x1b2ae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2aec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b2aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2af0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2af4: 0xc06c6c8  jal         func_1B1B20
    ctx->pc = 0x1B2AF4u;
    SET_GPR_U32(ctx, 31, 0x1B2AFCu);
    ctx->pc = 0x1B2AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2AF4u;
    // 0x1b2af8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1B20u, 0x1B2AF4u, 0x1B2AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2AFCu;
label_1b2afc:
    // 0x1b2afc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2b00: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2B00u;
        // 0x1b2b04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2B08u;
}
