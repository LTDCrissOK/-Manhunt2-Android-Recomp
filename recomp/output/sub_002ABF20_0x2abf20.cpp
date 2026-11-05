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

// Function: sub_002ABF20
// Address: 0x2abf20 - 0x2abf48
void sub_002ABF20_0x2abf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABF20_0x2abf20");
#endif

    switch (ctx->pc) {
        case 0x2abf30u: goto label_2abf30;
        default: break;
    }

    ctx->pc = 0x2abf20u;

    // 0x2abf20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2abf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2abf24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2abf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2abf28: 0xc0aafde  jal         func_2ABF78
    ctx->pc = 0x2ABF28u;
    SET_GPR_U32(ctx, 31, 0x2ABF30u);
    ctx->pc = 0x2ABF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF78u, 0x2ABF28u, 0x2ABF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABF30u;
label_2abf30:
    // 0x2abf30: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2abf30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2abf34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2abf34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2abf38: 0x8c642b00  lw          $a0, 0x2B00($v1)
    ctx->pc = 0x2abf38u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482B00u));
    // 0x2abf3c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2abf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2abf40: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF40u;
        // 0x2abf44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABF48u;
}
