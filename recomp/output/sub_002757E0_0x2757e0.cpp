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

// Function: sub_002757E0
// Address: 0x2757e0 - 0x275808
void sub_002757E0_0x2757e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002757E0_0x2757e0");
#endif

    ctx->pc = 0x2757e0u;

    // 0x2757e0: 0x84821e84  lh          $v0, 0x1E84($a0)
    ctx->pc = 0x2757e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 7812)));
    // 0x2757e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2757E4u;
    {
        const bool branch_taken_0x2757e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2757e4) {
            ctx->pc = 0x275800u;
            goto label_275800;
        }
    }
    ctx->pc = 0x2757ECu;
    // 0x2757ec: 0x90820370  lbu         $v0, 0x370($a0)
    ctx->pc = 0x2757ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x2757f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2757F0u;
    {
        const bool branch_taken_0x2757f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2757f0) {
            ctx->pc = 0x275800u;
            goto label_275800;
        }
    }
    ctx->pc = 0x2757F8u;
    // 0x2757f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2757F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2757FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2757F8u;
        // 0x2757fc: 0x8c821e80  lw          $v0, 0x1E80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7808)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2757F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275800u;
label_275800:
    // 0x275800: 0x3e00008  jr          $ra
    ctx->pc = 0x275800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275800u;
        // 0x275804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275808u;
}
