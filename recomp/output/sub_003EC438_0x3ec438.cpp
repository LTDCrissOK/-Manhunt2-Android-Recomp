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

// Function: sub_003EC438
// Address: 0x3ec438 - 0x3ec458
void sub_003EC438_0x3ec438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EC438_0x3ec438");
#endif

    switch (ctx->pc) {
        case 0x3ec448u: goto label_3ec448;
        default: break;
    }

    ctx->pc = 0x3ec438u;

    // 0x3ec438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ec438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ec43c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ec43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ec440: 0xc0fab48  jal         func_3EAD20
    ctx->pc = 0x3EC440u;
    SET_GPR_U32(ctx, 31, 0x3EC448u);
    ctx->pc = 0x3EAD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EAD20u, 0x3EC440u, 0x3EC448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC448u;
label_3ec448:
    // 0x3ec448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ec448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ec44c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EC44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EC450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC44Cu;
        // 0x3ec450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EC454u;
    // 0x3ec454: 0x0  nop
    ctx->pc = 0x3ec454u;
    // NOP
    ctx->pc = 0x3ec458u;
}
