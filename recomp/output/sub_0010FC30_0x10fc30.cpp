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

// Function: sub_0010FC30
// Address: 0x10fc30 - 0x10fc50
void sub_0010FC30_0x10fc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FC30_0x10fc30");
#endif

    ctx->pc = 0x10fc30u;

    // 0x10fc30: 0x8c820264  lw          $v0, 0x264($a0)
    ctx->pc = 0x10fc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 612)));
    // 0x10fc34: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x10fc34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x10fc38: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x10fc38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x10fc3c: 0x8c820260  lw          $v0, 0x260($a0)
    ctx->pc = 0x10fc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 608)));
    // 0x10fc40: 0x8cc3a9d4  lw          $v1, -0x562C($a2)
    ctx->pc = 0x10fc40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x10fc44: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x10fc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x10fc48: 0x3e00008  jr          $ra
    ctx->pc = 0x10FC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC48u;
        // 0x10fc4c: 0x62102b  sltu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FC50u;
}
