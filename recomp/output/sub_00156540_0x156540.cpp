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

// Function: sub_00156540
// Address: 0x156540 - 0x156560
void sub_00156540_0x156540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156540_0x156540");
#endif

    ctx->pc = 0x156540u;

    // 0x156540: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x156540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x156544: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x156544u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x156548: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x156548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15654c: 0x3e00008  jr          $ra
    ctx->pc = 0x15654Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15654Cu;
        // 0x156550: 0xac8604e0  sw          $a2, 0x4E0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1248), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15654Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156554u;
    // 0x156554: 0x0  nop
    ctx->pc = 0x156554u;
    // NOP
    // 0x156558: 0x8c8204e0  lw          $v0, 0x4E0($a0)
    ctx->pc = 0x156558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1248)));
    // 0x15655c: 0x0  nop
    ctx->pc = 0x15655cu;
    // NOP
    ctx->pc = 0x156560u;
}
