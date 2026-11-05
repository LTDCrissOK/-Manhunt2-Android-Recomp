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

// Function: sub_0039C438
// Address: 0x39c438 - 0x39c460
void sub_0039C438_0x39c438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C438_0x39c438");
#endif

    switch (ctx->pc) {
        case 0x39c448u: goto label_39c448;
        case 0x39c450u: goto label_39c450;
        default: break;
    }

    ctx->pc = 0x39c438u;

    // 0x39c438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39c438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39c43c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39c43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39c440: 0xc0ebe5c  jal         func_3AF970
    ctx->pc = 0x39C440u;
    SET_GPR_U32(ctx, 31, 0x39C448u);
    ctx->pc = 0x3AF970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF970u, 0x39C440u, 0x39C448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C448u;
label_39c448:
    // 0x39c448: 0xc0e7118  jal         func_39C460
    ctx->pc = 0x39C448u;
    SET_GPR_U32(ctx, 31, 0x39C450u);
    ctx->pc = 0x39C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C460u, 0x39C448u, 0x39C450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C450u;
label_39c450:
    // 0x39c450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39c450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39c454: 0x80ebe5e  j           func_3AF978
    ctx->pc = 0x39C454u;
    ctx->pc = 0x39C458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C454u;
    // 0x39c458: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF978u;
    sub_003AF978_0x3af978(rdram, ctx, runtime); return;
    ctx->pc = 0x39C45Cu;
    // 0x39c45c: 0x0  nop
    ctx->pc = 0x39c45cu;
    // NOP
    ctx->pc = 0x39c460u;
}
