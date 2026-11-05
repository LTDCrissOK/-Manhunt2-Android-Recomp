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

// Function: sub_002CC9E0
// Address: 0x2cc9e0 - 0x2cca08
void sub_002CC9E0_0x2cc9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC9E0_0x2cc9e0");
#endif

    switch (ctx->pc) {
        case 0x2cc9fcu: goto label_2cc9fc;
        default: break;
    }

    ctx->pc = 0x2cc9e0u;

    // 0x2cc9e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cc9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cc9e4: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x2cc9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x2cc9e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cc9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cc9ec: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2cc9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cc9f0: 0x34a53531  ori         $a1, $a1, 0x3531
    ctx->pc = 0x2cc9f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13617);
    // 0x2cc9f4: 0xc0b31ca  jal         func_2CC728
    ctx->pc = 0x2CC9F4u;
    SET_GPR_U32(ctx, 31, 0x2CC9FCu);
    ctx->pc = 0x2CC9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC9F4u;
    // 0x2cc9f8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC728u, 0x2CC9F4u, 0x2CC9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC9FCu;
label_2cc9fc:
    // 0x2cc9fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cca00: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA00u;
        // 0x2cca04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CCA08u;
}
