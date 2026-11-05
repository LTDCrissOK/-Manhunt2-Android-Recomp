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

// Function: sub_00254BF8
// Address: 0x254bf8 - 0x254c18
void sub_00254BF8_0x254bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254BF8_0x254bf8");
#endif

    switch (ctx->pc) {
        case 0x254c08u: goto label_254c08;
        default: break;
    }

    ctx->pc = 0x254bf8u;

    // 0x254bf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254bfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254c00: 0xc09533e  jal         func_254CF8
    ctx->pc = 0x254C00u;
    SET_GPR_U32(ctx, 31, 0x254C08u);
    ctx->pc = 0x254CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254CF8u, 0x254C00u, 0x254C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254C08u;
label_254c08:
    // 0x254c08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x254C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254C0Cu;
        // 0x254c10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254C14u;
    // 0x254c14: 0x0  nop
    ctx->pc = 0x254c14u;
    // NOP
    ctx->pc = 0x254c18u;
}
