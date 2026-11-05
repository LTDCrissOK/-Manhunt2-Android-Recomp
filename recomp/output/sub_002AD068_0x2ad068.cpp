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

// Function: sub_002AD068
// Address: 0x2ad068 - 0x2ad080
void sub_002AD068_0x2ad068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD068_0x2ad068");
#endif

    ctx->pc = 0x2ad068u;

    // 0x2ad068: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2ad068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2ad06c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ad06cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad070: 0x246338a8  addiu       $v1, $v1, 0x38A8
    ctx->pc = 0x2ad070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14504));
    // 0x2ad074: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD074u;
        // 0x2ad078: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD07Cu;
    // 0x2ad07c: 0x0  nop
    ctx->pc = 0x2ad07cu;
    // NOP
    ctx->pc = 0x2ad080u;
}
