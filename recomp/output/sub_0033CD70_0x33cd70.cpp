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

// Function: sub_0033CD70
// Address: 0x33cd70 - 0x33cd88
void sub_0033CD70_0x33cd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CD70_0x33cd70");
#endif

    switch (ctx->pc) {
        case 0x33cd78u: goto label_33cd78;
        case 0x33cd7cu: goto label_33cd7c;
        default: break;
    }

    ctx->pc = 0x33cd70u;

    // 0x33cd70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33cd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33cd74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33cd78:
    // 0x33cd78: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x33cd78u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_33cd7c:
    // 0x33cd7c: 0x3e00008  jr          $ra
    ctx->pc = 0x33CD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD7Cu;
        // 0x33cd80: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CD7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CD84u;
    // 0x33cd84: 0x0  nop
    ctx->pc = 0x33cd84u;
    // NOP
    ctx->pc = 0x33cd88u;
}
