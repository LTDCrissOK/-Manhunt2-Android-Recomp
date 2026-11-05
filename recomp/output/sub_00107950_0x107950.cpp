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

// Function: sub_00107950
// Address: 0x107950 - 0x107970
void sub_00107950_0x107950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107950_0x107950");
#endif

    switch (ctx->pc) {
        case 0x107960u: goto label_107960;
        default: break;
    }

    ctx->pc = 0x107950u;

    // 0x107950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107958: 0xc0f6cd8  jal         func_3DB360
    ctx->pc = 0x107958u;
    SET_GPR_U32(ctx, 31, 0x107960u);
    ctx->pc = 0x3DB360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB360u, 0x107958u, 0x107960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107960u;
label_107960:
    // 0x107960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107964: 0x3e00008  jr          $ra
    ctx->pc = 0x107964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107964u;
        // 0x107968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10796Cu;
    // 0x10796c: 0x0  nop
    ctx->pc = 0x10796cu;
    // NOP
    ctx->pc = 0x107970u;
}
