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

// Function: sub_0014ABA8
// Address: 0x14aba8 - 0x14abc0
void sub_0014ABA8_0x14aba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014ABA8_0x14aba8");
#endif

    ctx->pc = 0x14aba8u;

    // 0x14aba8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14aba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14abac: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x14abacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x14abb0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14abb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14abb4: 0x3e00008  jr          $ra
    ctx->pc = 0x14ABB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ABB4u;
        // 0x14abb8: 0xac8604e4  sw          $a2, 0x4E4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1252), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14ABB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14ABBCu;
    // 0x14abbc: 0x0  nop
    ctx->pc = 0x14abbcu;
    // NOP
    ctx->pc = 0x14abc0u;
}
