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

// Function: sub_00127DA8
// Address: 0x127da8 - 0x127dd0
void sub_00127DA8_0x127da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127DA8_0x127da8");
#endif

    ctx->pc = 0x127da8u;

    // 0x127da8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x127da8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x127dac: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x127dacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x127db0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x127db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x127db4: 0x8c820878  lw          $v0, 0x878($a0)
    ctx->pc = 0x127db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2168)));
    // 0x127db8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x127DB8u;
    {
        const bool branch_taken_0x127db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127DB8u;
        // 0x127dbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127db8) {
            ctx->pc = 0x127DC4u;
            goto label_127dc4;
        }
    }
    ctx->pc = 0x127DC0u;
    // 0x127dc0: 0xac820878  sw          $v0, 0x878($a0)
    ctx->pc = 0x127dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2168), GPR_U32(ctx, 2));
label_127dc4:
    // 0x127dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x127DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127DCCu;
    // 0x127dcc: 0x0  nop
    ctx->pc = 0x127dccu;
    // NOP
    ctx->pc = 0x127dd0u;
}
