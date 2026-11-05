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

// Function: sub_0028F9E0
// Address: 0x28f9e0 - 0x28fa08
void sub_0028F9E0_0x28f9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F9E0_0x28f9e0");
#endif

    switch (ctx->pc) {
        case 0x28f9fcu: goto label_28f9fc;
        default: break;
    }

    ctx->pc = 0x28f9e0u;

    // 0x28f9e0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28f9e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f9e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28f9e8: 0x8c45bd50  lw          $a1, -0x42B0($v0)
    ctx->pc = 0x28f9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x28f9ec: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x28f9ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f9f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28f9f4: 0xc0a3d4a  jal         func_28F528
    ctx->pc = 0x28F9F4u;
    SET_GPR_U32(ctx, 31, 0x28F9FCu);
    ctx->pc = 0x28F9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F9F4u;
    // 0x28f9f8: 0xac65002c  sw          $a1, 0x2C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F528u, 0x28F9F4u, 0x28F9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F9FCu;
label_28f9fc:
    // 0x28f9fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fa00: 0x3e00008  jr          $ra
    ctx->pc = 0x28FA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA00u;
        // 0x28fa04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FA08u;
}
