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

// Function: sub_0012BF20
// Address: 0x12bf20 - 0x12bf38
void sub_0012BF20_0x12bf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BF20_0x12bf20");
#endif

    ctx->pc = 0x12bf20u;

    // 0x12bf20: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x12bf20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x12bf24: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x12bf24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x12bf28: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x12bf28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x12bf2c: 0x3e00008  jr          $ra
    ctx->pc = 0x12BF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF2Cu;
        // 0x12bf30: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BF34u;
    // 0x12bf34: 0x0  nop
    ctx->pc = 0x12bf34u;
    // NOP
    ctx->pc = 0x12bf38u;
}
