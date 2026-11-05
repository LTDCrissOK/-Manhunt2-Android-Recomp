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

// Function: sub_002592D8
// Address: 0x2592d8 - 0x2592f8
void sub_002592D8_0x2592d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002592D8_0x2592d8");
#endif

    ctx->pc = 0x2592d8u;

    // 0x2592d8: 0x8c820fe8  lw          $v0, 0xFE8($a0)
    ctx->pc = 0x2592d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4072)));
    // 0x2592dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2592DCu;
    {
        const bool branch_taken_0x2592dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2592dc) {
            ctx->pc = 0x2592ECu;
            goto label_2592ec;
        }
    }
    ctx->pc = 0x2592E4u;
    // 0x2592e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2592E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2592E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592E4u;
        // 0x2592e8: 0x90420392  lbu         $v0, 0x392($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 914)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2592E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2592ECu;
label_2592ec:
    // 0x2592ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2592ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2592F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592ECu;
        // 0x2592f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2592ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2592F4u;
    // 0x2592f4: 0x0  nop
    ctx->pc = 0x2592f4u;
    // NOP
    ctx->pc = 0x2592f8u;
}
