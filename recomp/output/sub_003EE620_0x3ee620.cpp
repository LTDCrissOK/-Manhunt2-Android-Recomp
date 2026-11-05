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

// Function: sub_003EE620
// Address: 0x3ee620 - 0x3ee658
void sub_003EE620_0x3ee620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE620_0x3ee620");
#endif

    switch (ctx->pc) {
        case 0x3ee630u: goto label_3ee630;
        default: break;
    }

    ctx->pc = 0x3ee620u;

    // 0x3ee620: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ee620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee624: 0x50640009  beql        $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3EE624u;
    {
        const bool branch_taken_0x3ee624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3ee624) {
            ctx->pc = 0x3EE628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE624u;
            // 0x3ee628: 0xac840000  sw          $a0, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE64Cu;
            goto label_3ee64c;
        }
    }
    ctx->pc = 0x3EE62Cu;
    // 0x3ee62c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ee62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ee630:
    // 0x3ee630: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3ee630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3ee634: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3ee634u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee638: 0x0  nop
    ctx->pc = 0x3ee638u;
    // NOP
    // 0x3ee63c: 0x0  nop
    ctx->pc = 0x3ee63cu;
    // NOP
    // 0x3ee640: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3EE640u;
    {
        const bool branch_taken_0x3ee640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3ee640) {
            ctx->pc = 0x3EE644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE640u;
            // 0x3ee644: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ee630;
        }
    }
    ctx->pc = 0x3EE648u;
    // 0x3ee648: 0xac840000  sw          $a0, 0x0($a0)
    ctx->pc = 0x3ee648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
label_3ee64c:
    // 0x3ee64c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE64Cu;
        // 0x3ee650: 0xac840004  sw          $a0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE654u;
    // 0x3ee654: 0x0  nop
    ctx->pc = 0x3ee654u;
    // NOP
    ctx->pc = 0x3ee658u;
}
