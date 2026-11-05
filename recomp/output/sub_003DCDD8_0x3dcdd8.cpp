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

// Function: sub_003DCDD8
// Address: 0x3dcdd8 - 0x3dcdf0
void sub_003DCDD8_0x3dcdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCDD8_0x3dcdd8");
#endif

    ctx->pc = 0x3dcdd8u;

    // 0x3dcdd8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3dcdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3dcddc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3dcddcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3dcde0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x3dcde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x3dcde4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCDE4u;
        // 0x3dcde8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCDECu;
    // 0x3dcdec: 0x0  nop
    ctx->pc = 0x3dcdecu;
    // NOP
    ctx->pc = 0x3dcdf0u;
}
