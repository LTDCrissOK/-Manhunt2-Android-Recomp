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

// Function: sub_0012D390
// Address: 0x12d390 - 0x12d3b8
void sub_0012D390_0x12d390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D390_0x12d390");
#endif

    ctx->pc = 0x12d390u;

    // 0x12d390: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12d390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12d394: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D394u;
    {
        const bool branch_taken_0x12d394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D394u;
        // 0x12d398: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d394) {
            ctx->pc = 0x12D3B0u;
            goto label_12d3b0;
        }
    }
    ctx->pc = 0x12D39Cu;
    // 0x12d39c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x12d39cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x12d3a0: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x12d3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x12d3a4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x12d3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x12d3a8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x12d3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x12d3ac: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x12d3acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_12d3b0:
    // 0x12d3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x12D3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D3B8u;
}
