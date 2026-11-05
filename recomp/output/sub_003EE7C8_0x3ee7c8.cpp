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

// Function: sub_003EE7C8
// Address: 0x3ee7c8 - 0x3ee7e8
void sub_003EE7C8_0x3ee7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE7C8_0x3ee7c8");
#endif

    switch (ctx->pc) {
        case 0x3ee7dcu: goto label_3ee7dc;
        default: break;
    }

    ctx->pc = 0x3ee7c8u;

    // 0x3ee7c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ee7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ee7cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EE7CCu;
    {
        const bool branch_taken_0x3ee7cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE7CCu;
        // 0x3ee7d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee7cc) {
            ctx->pc = 0x3EE7DCu;
            goto label_3ee7dc;
        }
    }
    ctx->pc = 0x3EE7D4u;
    // 0x3ee7d4: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3EE7D4u;
    SET_GPR_U32(ctx, 31, 0x3EE7DCu);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EE7D4u, 0x3EE7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE7DCu;
label_3ee7dc:
    // 0x3ee7dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ee7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ee7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE7E0u;
        // 0x3ee7e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE7E8u;
}
