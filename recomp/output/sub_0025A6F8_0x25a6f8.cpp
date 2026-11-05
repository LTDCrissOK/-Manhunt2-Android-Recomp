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

// Function: sub_0025A6F8
// Address: 0x25a6f8 - 0x25a710
void sub_0025A6F8_0x25a6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A6F8_0x25a6f8");
#endif

    ctx->pc = 0x25a6f8u;

    // 0x25a6f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x25a6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x25a6fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x25a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25a700: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x25a700u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25a704: 0x3e00008  jr          $ra
    ctx->pc = 0x25A704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A704u;
        // 0x25a708: 0xa3100a  movz        $v0, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A70Cu;
    // 0x25a70c: 0x0  nop
    ctx->pc = 0x25a70cu;
    // NOP
    ctx->pc = 0x25a710u;
}
