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

// Function: sub_002EF838
// Address: 0x2ef838 - 0x2ef870
void sub_002EF838_0x2ef838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF838_0x2ef838");
#endif

    ctx->pc = 0x2ef838u;

    // 0x2ef838: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ef838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef83c: 0x90a21440  lbu         $v0, 0x1440($a1)
    ctx->pc = 0x2ef83cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5184)));
    // 0x2ef840: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EF840u;
    {
        const bool branch_taken_0x2ef840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef840) {
            ctx->pc = 0x2EF868u;
            goto label_2ef868;
        }
    }
    ctx->pc = 0x2EF848u;
    // 0x2ef848: 0x8ca21444  lw          $v0, 0x1444($a1)
    ctx->pc = 0x2ef848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5188)));
    // 0x2ef84c: 0x8ca400b8  lw          $a0, 0xB8($a1)
    ctx->pc = 0x2ef84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
    // 0x2ef850: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ef850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ef854: 0xaca21444  sw          $v0, 0x1444($a1)
    ctx->pc = 0x2ef854u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 5188), GPR_U32(ctx, 2));
    // 0x2ef858: 0x8c8315a8  lw          $v1, 0x15A8($a0)
    ctx->pc = 0x2ef858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5544)));
    // 0x2ef85c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2ef85cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ef860: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EF860u;
    {
        const bool branch_taken_0x2ef860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef860) {
            ctx->pc = 0x2EF864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF860u;
            // 0x2ef864: 0xaca0037c  sw          $zero, 0x37C($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 892), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF868u;
            goto label_2ef868;
        }
    }
    ctx->pc = 0x2EF868u;
label_2ef868:
    // 0x2ef868: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF870u;
}
