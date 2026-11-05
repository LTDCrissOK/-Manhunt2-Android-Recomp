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

// Function: sub_001CFF78
// Address: 0x1cff78 - 0x1cff90
void sub_001CFF78_0x1cff78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFF78_0x1cff78");
#endif

    ctx->pc = 0x1cff78u;

    // 0x1cff78: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x1cff78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1cff7c: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x1cff7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x1cff80: 0x3042f7ff  andi        $v0, $v0, 0xF7FF
    ctx->pc = 0x1cff80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63487);
    // 0x1cff84: 0xac860034  sw          $a2, 0x34($a0)
    ctx->pc = 0x1cff84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 6));
    // 0x1cff88: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF88u;
        // 0x1cff8c: 0xa482002a  sh          $v0, 0x2A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFF90u;
}
