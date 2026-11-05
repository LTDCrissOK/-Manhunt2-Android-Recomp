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

// Function: sub_00117A70
// Address: 0x117a70 - 0x117a88
void sub_00117A70_0x117a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117A70_0x117a70");
#endif

    ctx->pc = 0x117a70u;

    // 0x117a70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x117a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x117a74: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x117a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x117a78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x117a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x117a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x117A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A7Cu;
        // 0x117a80: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117A84u;
    // 0x117a84: 0x0  nop
    ctx->pc = 0x117a84u;
    // NOP
    ctx->pc = 0x117a88u;
}
