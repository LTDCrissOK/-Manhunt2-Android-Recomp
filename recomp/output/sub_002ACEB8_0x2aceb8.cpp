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

// Function: sub_002ACEB8
// Address: 0x2aceb8 - 0x2acee8
void sub_002ACEB8_0x2aceb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACEB8_0x2aceb8");
#endif

    switch (ctx->pc) {
        case 0x2acec8u: goto label_2acec8;
        default: break;
    }

    ctx->pc = 0x2aceb8u;

    // 0x2aceb8: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x2aceb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2acebc: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ACEBCu;
    {
        const bool branch_taken_0x2acebc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACEBCu;
        // 0x2acec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acebc) {
            ctx->pc = 0x2ACEE0u;
            goto label_2acee0;
        }
    }
    ctx->pc = 0x2ACEC4u;
    // 0x2acec4: 0x0  nop
    ctx->pc = 0x2acec4u;
    // NOP
label_2acec8:
    // 0x2acec8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2acec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2acecc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2aceccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2aced0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2aced0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2aced4: 0xa6182b  sltu        $v1, $a1, $a2
    ctx->pc = 0x2aced4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2aced8: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2ACED8u;
    {
        const bool branch_taken_0x2aced8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACED8u;
        // 0x2acedc: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aced8) {
            ctx->pc = 0x2ACEC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2acec8;
        }
    }
    ctx->pc = 0x2ACEE0u;
label_2acee0:
    // 0x2acee0: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACEE8u;
}
