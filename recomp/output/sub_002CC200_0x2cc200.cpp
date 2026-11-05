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

// Function: sub_002CC200
// Address: 0x2cc200 - 0x2cc230
void sub_002CC200_0x2cc200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC200_0x2cc200");
#endif

    switch (ctx->pc) {
        case 0x2cc210u: goto label_2cc210;
        default: break;
    }

    ctx->pc = 0x2cc200u;

    // 0x2cc200: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2cc200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2cc204: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CC204u;
    {
        const bool branch_taken_0x2cc204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC204u;
        // 0x2cc208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc204) {
            ctx->pc = 0x2CC228u;
            goto label_2cc228;
        }
    }
    ctx->pc = 0x2CC20Cu;
    // 0x2cc20c: 0x0  nop
    ctx->pc = 0x2cc20cu;
    // NOP
label_2cc210:
    // 0x2cc210: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x2cc210u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2cc214: 0x0  nop
    ctx->pc = 0x2cc214u;
    // NOP
    // 0x2cc218: 0x0  nop
    ctx->pc = 0x2cc218u;
    // NOP
    // 0x2cc21c: 0x0  nop
    ctx->pc = 0x2cc21cu;
    // NOP
    // 0x2cc220: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2CC220u;
    {
        const bool branch_taken_0x2cc220 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC220u;
        // 0x2cc224: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc220) {
            ctx->pc = 0x2CC210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cc210;
        }
    }
    ctx->pc = 0x2CC228u;
label_2cc228:
    // 0x2cc228: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC230u;
}
