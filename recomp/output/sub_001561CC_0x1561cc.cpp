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

// Function: sub_001561CC
// Address: 0x1561cc - 0x1561e0
void sub_001561CC_0x1561cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001561CC_0x1561cc");
#endif

    switch (ctx->pc) {
        case 0x1561d0u: goto label_1561d0;
        default: break;
    }

    ctx->pc = 0x1561ccu;

    // 0x1561cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1561ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1561d0:
    // 0x1561d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1561d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1561d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1561d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1561d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1561D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1561DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1561D8u;
        // 0x1561dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1561D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1561E0u;
}
