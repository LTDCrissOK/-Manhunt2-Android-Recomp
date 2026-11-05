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

// Function: sub_00193830
// Address: 0x193830 - 0x193858
void sub_00193830_0x193830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193830_0x193830");
#endif

    switch (ctx->pc) {
        case 0x193840u: goto label_193840;
        default: break;
    }

    ctx->pc = 0x193830u;

    // 0x193830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193838: 0xc064df0  jal         func_1937C0
    ctx->pc = 0x193838u;
    SET_GPR_U32(ctx, 31, 0x193840u);
    ctx->pc = 0x1937C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937C0u, 0x193838u, 0x193840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193840u;
label_193840:
    // 0x193840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193844: 0x3e00008  jr          $ra
    ctx->pc = 0x193844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193844u;
        // 0x193848: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19384Cu;
    // 0x19384c: 0x0  nop
    ctx->pc = 0x19384cu;
    // NOP
    // 0x193850: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x193850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x193854: 0x0  nop
    ctx->pc = 0x193854u;
    // NOP
    ctx->pc = 0x193858u;
}
