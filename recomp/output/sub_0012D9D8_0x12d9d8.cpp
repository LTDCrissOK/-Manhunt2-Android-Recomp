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

// Function: sub_0012D9D8
// Address: 0x12d9d8 - 0x12d9f8
void sub_0012D9D8_0x12d9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D9D8_0x12d9d8");
#endif

    switch (ctx->pc) {
        case 0x12d9e8u: goto label_12d9e8;
        default: break;
    }

    ctx->pc = 0x12d9d8u;

    // 0x12d9d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12d9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d9dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12d9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d9e0: 0xc04b80e  jal         func_12E038
    ctx->pc = 0x12D9E0u;
    SET_GPR_U32(ctx, 31, 0x12D9E8u);
    ctx->pc = 0x12E038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E038u, 0x12D9E0u, 0x12D9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D9E8u;
label_12d9e8:
    // 0x12d9e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12d9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x12D9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D9ECu;
        // 0x12d9f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D9ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D9F4u;
    // 0x12d9f4: 0x0  nop
    ctx->pc = 0x12d9f4u;
    // NOP
    ctx->pc = 0x12d9f8u;
}
