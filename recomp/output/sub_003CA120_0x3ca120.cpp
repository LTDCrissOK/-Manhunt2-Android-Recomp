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

// Function: sub_003CA120
// Address: 0x3ca120 - 0x3ca138
void sub_003CA120_0x3ca120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA120_0x3ca120");
#endif

    ctx->pc = 0x3ca120u;

    // 0x3ca120: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x3ca120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x3ca124: 0xfca00048  sd          $zero, 0x48($a1)
    ctx->pc = 0x3ca124u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 72), GPR_U64(ctx, 0));
    // 0x3ca128: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3ca128u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3ca12c: 0x3e00008  jr          $ra
    ctx->pc = 0x3CA12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA12Cu;
        // 0x3ca130: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CA134u;
    // 0x3ca134: 0x0  nop
    ctx->pc = 0x3ca134u;
    // NOP
    ctx->pc = 0x3ca138u;
}
