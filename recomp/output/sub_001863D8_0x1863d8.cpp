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

// Function: sub_001863D8
// Address: 0x1863d8 - 0x1863f8
void sub_001863D8_0x1863d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001863D8_0x1863d8");
#endif

    ctx->pc = 0x1863d8u;

    // 0x1863d8: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1863d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1863dc: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x1863dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x1863e0: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x1863e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    // 0x1863e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1863e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1863e8: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x1863e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x1863ec: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x1863ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x1863f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1863F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1863F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863F0u;
        // 0x1863f4: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1863F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1863F8u;
}
