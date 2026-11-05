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

// Function: sub_0013DD10
// Address: 0x13dd10 - 0x13dd28
void sub_0013DD10_0x13dd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DD10_0x13dd10");
#endif

    ctx->pc = 0x13dd10u;

    // 0x13dd10: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x13dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13dd14: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x13dd14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13dd18: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13dd18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13dd1c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x13dd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13dd20: 0x3e00008  jr          $ra
    ctx->pc = 0x13DD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD20u;
        // 0x13dd24: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DD20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DD28u;
}
