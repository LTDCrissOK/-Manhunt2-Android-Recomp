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

// Function: sub_001D0610
// Address: 0x1d0610 - 0x1d0638
void sub_001D0610_0x1d0610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0610_0x1d0610");
#endif

    ctx->pc = 0x1d0610u;

    // 0x1d0610: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d0610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0614: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x1d0614u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d0618: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x1d0618u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d061c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d061cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0620: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1d0620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1d0624: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1d0624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1d0628: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1d0628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1d062c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D062Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D062Cu;
        // 0x1d0630: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D062Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0634u;
    // 0x1d0634: 0x0  nop
    ctx->pc = 0x1d0634u;
    // NOP
    ctx->pc = 0x1d0638u;
}
