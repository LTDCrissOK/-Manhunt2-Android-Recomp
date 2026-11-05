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

// Function: sub_00138678
// Address: 0x138678 - 0x138690
void sub_00138678_0x138678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138678_0x138678");
#endif

    ctx->pc = 0x138678u;

    // 0x138678: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x138678u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13867c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x13867cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x138680: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x138680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x138684: 0x3e00008  jr          $ra
    ctx->pc = 0x138684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138684u;
        // 0x138688: 0xaca60044  sw          $a2, 0x44($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13868Cu;
    // 0x13868c: 0x0  nop
    ctx->pc = 0x13868cu;
    // NOP
    ctx->pc = 0x138690u;
}
