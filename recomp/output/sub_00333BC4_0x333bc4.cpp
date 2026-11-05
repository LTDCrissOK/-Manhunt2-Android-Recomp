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

// Function: sub_00333BC4
// Address: 0x333bc4 - 0x333bd8
void sub_00333BC4_0x333bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333BC4_0x333bc4");
#endif

    switch (ctx->pc) {
        case 0x333bc8u: goto label_333bc8;
        default: break;
    }

    ctx->pc = 0x333bc4u;

    // 0x333bc4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x333bc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_333bc8:
    // 0x333bc8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x333bc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x333bcc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x333bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x333bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x333BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333BD0u;
        // 0x333bd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333BD8u;
}
