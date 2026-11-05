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

// Function: sub_00223670
// Address: 0x223670 - 0x223690
void sub_00223670_0x223670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223670_0x223670");
#endif

    switch (ctx->pc) {
        case 0x223680u: goto label_223680;
        default: break;
    }

    ctx->pc = 0x223670u;

    // 0x223670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x223674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223678: 0xc088bf2  jal         func_222FC8
    ctx->pc = 0x223678u;
    SET_GPR_U32(ctx, 31, 0x223680u);
    ctx->pc = 0x222FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222FC8u, 0x223678u, 0x223680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223680u;
label_223680:
    // 0x223680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223684: 0x3e00008  jr          $ra
    ctx->pc = 0x223684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223684u;
        // 0x223688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22368Cu;
    // 0x22368c: 0x0  nop
    ctx->pc = 0x22368cu;
    // NOP
    ctx->pc = 0x223690u;
}
