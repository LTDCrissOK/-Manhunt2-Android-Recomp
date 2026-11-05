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

// Function: sub_003EC118
// Address: 0x3ec118 - 0x3ec138
void sub_003EC118_0x3ec118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EC118_0x3ec118");
#endif

    switch (ctx->pc) {
        case 0x3ec128u: goto label_3ec128;
        default: break;
    }

    ctx->pc = 0x3ec118u;

    // 0x3ec118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ec118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ec11c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ec11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ec120: 0xc0fa442  jal         func_3E9108
    ctx->pc = 0x3EC120u;
    SET_GPR_U32(ctx, 31, 0x3EC128u);
    ctx->pc = 0x3E9108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9108u, 0x3EC120u, 0x3EC128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC128u;
label_3ec128:
    // 0x3ec128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ec128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ec12c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EC12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EC130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC12Cu;
        // 0x3ec130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EC134u;
    // 0x3ec134: 0x0  nop
    ctx->pc = 0x3ec134u;
    // NOP
    ctx->pc = 0x3ec138u;
}
