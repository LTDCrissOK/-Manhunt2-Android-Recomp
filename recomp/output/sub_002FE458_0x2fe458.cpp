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

// Function: sub_002FE458
// Address: 0x2fe458 - 0x2fe470
void sub_002FE458_0x2fe458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE458_0x2fe458");
#endif

    ctx->pc = 0x2fe458u;

    // 0x2fe458: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x2fe458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2fe45c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2fe45cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2fe460: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FE460u;
    {
        const bool branch_taken_0x2fe460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fe460) {
            ctx->pc = 0x2FE464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE460u;
            // 0x2fe464: 0xac8513f0  sw          $a1, 0x13F0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 5104), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE468u;
            goto label_2fe468;
        }
    }
    ctx->pc = 0x2FE468u;
label_2fe468:
    // 0x2fe468: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE470u;
}
