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

// Function: sub_00209FD0
// Address: 0x209fd0 - 0x209fe8
void sub_00209FD0_0x209fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209FD0_0x209fd0");
#endif

    ctx->pc = 0x209fd0u;

    // 0x209fd0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x209fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x209fd4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x209fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x209fd8: 0x8c622b78  lw          $v0, 0x2B78($v1)
    ctx->pc = 0x209fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11128)));
    // 0x209fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x209FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FDCu;
        // 0x209fe0: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209FE4u;
    // 0x209fe4: 0x0  nop
    ctx->pc = 0x209fe4u;
    // NOP
    ctx->pc = 0x209fe8u;
}
