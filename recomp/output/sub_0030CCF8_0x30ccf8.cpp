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

// Function: sub_0030CCF8
// Address: 0x30ccf8 - 0x30cd18
void sub_0030CCF8_0x30ccf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CCF8_0x30ccf8");
#endif

    ctx->pc = 0x30ccf8u;

    // 0x30ccf8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x30ccf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ccfc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x30ccfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x30cd00: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x30cd00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x30cd04: 0x3e00008  jr          $ra
    ctx->pc = 0x30CD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CD04u;
        // 0x30cd08: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CD0Cu;
    // 0x30cd0c: 0x0  nop
    ctx->pc = 0x30cd0cu;
    // NOP
    // 0x30cd10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x30cd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30cd14: 0x0  nop
    ctx->pc = 0x30cd14u;
    // NOP
    ctx->pc = 0x30cd18u;
}
