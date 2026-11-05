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

// Function: sub_00272858
// Address: 0x272858 - 0x272878
void sub_00272858_0x272858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272858_0x272858");
#endif

    switch (ctx->pc) {
        case 0x27286cu: goto label_27286c;
        default: break;
    }

    ctx->pc = 0x272858u;

    // 0x272858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x272858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27285c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27285cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x272860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x272864: 0xc09ca0a  jal         func_272828
    ctx->pc = 0x272864u;
    SET_GPR_U32(ctx, 31, 0x27286Cu);
    ctx->pc = 0x272868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272864u;
    // 0x272868: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x272828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272828u, 0x272864u, 0x27286Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27286Cu;
label_27286c:
    // 0x27286c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27286cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272870: 0x3e00008  jr          $ra
    ctx->pc = 0x272870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272870u;
        // 0x272874: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272878u;
}
