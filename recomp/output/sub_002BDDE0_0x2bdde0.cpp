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

// Function: sub_002BDDE0
// Address: 0x2bdde0 - 0x2bddf8
void sub_002BDDE0_0x2bdde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDDE0_0x2bdde0");
#endif

    ctx->pc = 0x2bdde0u;

    // 0x2bdde0: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2bdde0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2bdde4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2bdde4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdde8: 0x24633ca8  addiu       $v1, $v1, 0x3CA8
    ctx->pc = 0x2bdde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15528));
    // 0x2bddec: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDDECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDDECu;
        // 0x2bddf0: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDDECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDDF4u;
    // 0x2bddf4: 0x0  nop
    ctx->pc = 0x2bddf4u;
    // NOP
    ctx->pc = 0x2bddf8u;
}
