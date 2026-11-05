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

// Function: sub_00136940
// Address: 0x136940 - 0x136958
void sub_00136940_0x136940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136940_0x136940");
#endif

    ctx->pc = 0x136940u;

    // 0x136940: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x136940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x136944: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x136944u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x136948: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x136948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13694c: 0x3e00008  jr          $ra
    ctx->pc = 0x13694Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13694Cu;
        // 0x136950: 0xac860040  sw          $a2, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13694Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136954u;
    // 0x136954: 0x0  nop
    ctx->pc = 0x136954u;
    // NOP
    ctx->pc = 0x136958u;
}
