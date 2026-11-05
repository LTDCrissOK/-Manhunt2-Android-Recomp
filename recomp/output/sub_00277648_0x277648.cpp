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

// Function: sub_00277648
// Address: 0x277648 - 0x277660
void sub_00277648_0x277648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277648_0x277648");
#endif

    ctx->pc = 0x277648u;

    // 0x277648: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x277648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27764c: 0xac800110  sw          $zero, 0x110($a0)
    ctx->pc = 0x27764cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 0));
    // 0x277650: 0xac820120  sw          $v0, 0x120($a0)
    ctx->pc = 0x277650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 288), GPR_U32(ctx, 2));
    // 0x277654: 0x3e00008  jr          $ra
    ctx->pc = 0x277654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277654u;
        // 0x277658: 0xac800114  sw          $zero, 0x114($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27765Cu;
    // 0x27765c: 0x0  nop
    ctx->pc = 0x27765cu;
    // NOP
    ctx->pc = 0x277660u;
}
