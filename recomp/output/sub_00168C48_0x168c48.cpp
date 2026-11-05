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

// Function: sub_00168C48
// Address: 0x168c48 - 0x168c68
void sub_00168C48_0x168c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168C48_0x168c48");
#endif

    ctx->pc = 0x168c48u;

    // 0x168c48: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x168c48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x168c4c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x168c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x168c50: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x168c50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x168c54: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x168c54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x168c58: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x168c58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x168c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x168C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C5Cu;
        // 0x168c60: 0xaca00010  sw          $zero, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168C64u;
    // 0x168c64: 0x0  nop
    ctx->pc = 0x168c64u;
    // NOP
    ctx->pc = 0x168c68u;
}
