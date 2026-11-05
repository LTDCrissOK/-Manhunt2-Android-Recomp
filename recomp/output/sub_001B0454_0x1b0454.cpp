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

// Function: sub_001B0454
// Address: 0x1b0454 - 0x1b0470
void sub_001B0454_0x1b0454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0454_0x1b0454");
#endif

    switch (ctx->pc) {
        case 0x1b0464u: goto label_1b0464;
        case 0x1b0468u: goto label_1b0468;
        default: break;
    }

    ctx->pc = 0x1b0454u;

    // 0x1b0454: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b0454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b0458: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b0458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b045c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B045Cu;
    SET_GPR_U32(ctx, 31, 0x1B0464u);
    ctx->pc = 0x1B0460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B045Cu;
    // 0x1b0460: 0x24a5b0f0  addiu       $a1, $a1, -0x4F10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B045Cu, 0x1B0464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0464u;
label_1b0464:
    // 0x1b0464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b0468:
    // 0x1b0468: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0468u;
        // 0x1b046c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0470u;
}
