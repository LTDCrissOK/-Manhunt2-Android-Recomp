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

// Function: sub_00125240
// Address: 0x125240 - 0x125260
void sub_00125240_0x125240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125240_0x125240");
#endif

    switch (ctx->pc) {
        case 0x125250u: goto label_125250;
        default: break;
    }

    ctx->pc = 0x125240u;

    // 0x125240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x125240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x125244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x125244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x125248: 0xc049a6a  jal         func_1269A8
    ctx->pc = 0x125248u;
    SET_GPR_U32(ctx, 31, 0x125250u);
    ctx->pc = 0x1269A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1269A8u, 0x125248u, 0x125250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125250u;
label_125250:
    // 0x125250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x125250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125254: 0x3e00008  jr          $ra
    ctx->pc = 0x125254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125254u;
        // 0x125258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12525Cu;
    // 0x12525c: 0x0  nop
    ctx->pc = 0x12525cu;
    // NOP
    ctx->pc = 0x125260u;
}
