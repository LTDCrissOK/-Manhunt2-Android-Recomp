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

// Function: sub_002AF030
// Address: 0x2af030 - 0x2af068
void sub_002AF030_0x2af030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF030_0x2af030");
#endif

    switch (ctx->pc) {
        case 0x2af048u: goto label_2af048;
        case 0x2af058u: goto label_2af058;
        default: break;
    }

    ctx->pc = 0x2af030u;

    // 0x2af030: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2af030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2af034: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2af034u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2af038: 0x8c449160  lw          $a0, -0x6EA0($v0)
    ctx->pc = 0x2af038u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F9160u));
    // 0x2af03c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2af03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2af040: 0xc0ab1ac  jal         func_2AC6B0
    ctx->pc = 0x2AF040u;
    SET_GPR_U32(ctx, 31, 0x2AF048u);
    ctx->pc = 0x2AC6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC6B0u, 0x2AF040u, 0x2AF048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF048u;
label_2af048:
    // 0x2af048: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AF048u;
    {
        const bool branch_taken_0x2af048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF048u;
        // 0x2af04c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af048) {
            ctx->pc = 0x2AF05Cu;
            goto label_2af05c;
        }
    }
    ctx->pc = 0x2AF050u;
    // 0x2af050: 0xc0abb96  jal         func_2AEE58
    ctx->pc = 0x2AF050u;
    SET_GPR_U32(ctx, 31, 0x2AF058u);
    ctx->pc = 0x2AEE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEE58u, 0x2AF050u, 0x2AF058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF058u;
label_2af058:
    // 0x2af058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2af058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2af05c:
    // 0x2af05c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF05Cu;
        // 0x2af060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF064u;
    // 0x2af064: 0x0  nop
    ctx->pc = 0x2af064u;
    // NOP
    ctx->pc = 0x2af068u;
}
