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

// Function: sub_00126510
// Address: 0x126510 - 0x126530
void sub_00126510_0x126510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126510_0x126510");
#endif

    ctx->pc = 0x126510u;

    // 0x126510: 0x9082023c  lbu         $v0, 0x23C($a0)
    ctx->pc = 0x126510u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 572)));
    // 0x126514: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x126514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x126518: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x126518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12651c: 0xac45007c  sw          $a1, 0x7C($v0)
    ctx->pc = 0x12651cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 5));
    // 0x126520: 0x9083023c  lbu         $v1, 0x23C($a0)
    ctx->pc = 0x126520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 572)));
    // 0x126524: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x126524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x126528: 0x3e00008  jr          $ra
    ctx->pc = 0x126528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126528u;
        // 0x12652c: 0xa083023c  sb          $v1, 0x23C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126530u;
}
