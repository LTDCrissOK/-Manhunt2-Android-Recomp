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

// Function: sub_002B0028
// Address: 0x2b0028 - 0x2b0050
void sub_002B0028_0x2b0028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0028_0x2b0028");
#endif

    ctx->pc = 0x2b0028u;

    // 0x2b0028: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2b0028u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b002c: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2b002cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b0030: 0xac470594  sw          $a3, 0x594($v0)
    ctx->pc = 0x2b0030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1428), GPR_U32(ctx, 7));
    // 0x2b0034: 0x24840668  addiu       $a0, $a0, 0x668
    ctx->pc = 0x2b0034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1640));
    // 0x2b0038: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2b0038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b003c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b003cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b0040: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2b0040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2b0044: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0044u;
        // 0x2b0048: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B004Cu;
    // 0x2b004c: 0x0  nop
    ctx->pc = 0x2b004cu;
    // NOP
    ctx->pc = 0x2b0050u;
}
