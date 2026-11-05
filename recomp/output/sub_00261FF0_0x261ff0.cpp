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

// Function: sub_00261FF0
// Address: 0x261ff0 - 0x262000
void sub_00261FF0_0x261ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261FF0_0x261ff0");
#endif

    switch (ctx->pc) {
        case 0x261ff4u: goto label_261ff4;
        default: break;
    }

    ctx->pc = 0x261ff0u;

    // 0x261ff0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x261ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_261ff4:
    // 0x261ff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x261ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x261FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FF8u;
        // 0x261ffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262000u;
}
