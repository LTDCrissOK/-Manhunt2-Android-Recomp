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

// Function: sub_0020B028
// Address: 0x20b028 - 0x20b078
void sub_0020B028_0x20b028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B028_0x20b028");
#endif

    ctx->pc = 0x20b028u;

    // 0x20b028: 0x3e00008  jr          $ra
    ctx->pc = 0x20B028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B028u;
        // 0x20b02c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B030u;
    // 0x20b030: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x20b030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20b034: 0x0  nop
    ctx->pc = 0x20b034u;
    // NOP
    // 0x20b038: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x20b038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20b03c: 0x0  nop
    ctx->pc = 0x20b03cu;
    // NOP
    // 0x20b040: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x20b040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20b044: 0x0  nop
    ctx->pc = 0x20b044u;
    // NOP
    // 0x20b048: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x20b048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20b04c: 0x0  nop
    ctx->pc = 0x20b04cu;
    // NOP
    // 0x20b050: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x20b050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20b054: 0x0  nop
    ctx->pc = 0x20b054u;
    // NOP
    // 0x20b058: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x20b058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20b05c: 0x0  nop
    ctx->pc = 0x20b05cu;
    // NOP
    // 0x20b060: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x20b060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20b064: 0x0  nop
    ctx->pc = 0x20b064u;
    // NOP
    // 0x20b068: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x20b068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20b06c: 0x0  nop
    ctx->pc = 0x20b06cu;
    // NOP
    // 0x20b070: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x20b070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20b074: 0x0  nop
    ctx->pc = 0x20b074u;
    // NOP
    ctx->pc = 0x20b078u;
}
