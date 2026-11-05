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

// Function: sub_00395FF8
// Address: 0x395ff8 - 0x396018
void sub_00395FF8_0x395ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395FF8_0x395ff8");
#endif

    switch (ctx->pc) {
        case 0x396008u: goto label_396008;
        default: break;
    }

    ctx->pc = 0x395ff8u;

    // 0x395ff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x395ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x395ffc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x395ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x396000: 0xc0e59d0  jal         func_396740
    ctx->pc = 0x396000u;
    SET_GPR_U32(ctx, 31, 0x396008u);
    ctx->pc = 0x396740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396740u, 0x396000u, 0x396008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396008u;
label_396008:
    // 0x396008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x396008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39600c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39600cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396010: 0x3e00008  jr          $ra
    ctx->pc = 0x396010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396010u;
        // 0x396014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396018u;
}
