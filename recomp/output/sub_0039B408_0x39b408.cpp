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

// Function: sub_0039B408
// Address: 0x39b408 - 0x39b430
void sub_0039B408_0x39b408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B408_0x39b408");
#endif

    switch (ctx->pc) {
        case 0x39b418u: goto label_39b418;
        case 0x39b420u: goto label_39b420;
        default: break;
    }

    ctx->pc = 0x39b408u;

    // 0x39b408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39b408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39b40c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39b40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39b410: 0xc0ebe5c  jal         func_3AF970
    ctx->pc = 0x39B410u;
    SET_GPR_U32(ctx, 31, 0x39B418u);
    ctx->pc = 0x3AF970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF970u, 0x39B410u, 0x39B418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B418u;
label_39b418:
    // 0x39b418: 0xc0e6d0c  jal         func_39B430
    ctx->pc = 0x39B418u;
    SET_GPR_U32(ctx, 31, 0x39B420u);
    ctx->pc = 0x39B430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B430u, 0x39B418u, 0x39B420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B420u;
label_39b420:
    // 0x39b420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39b420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39b424: 0x80ebe5e  j           func_3AF978
    ctx->pc = 0x39B424u;
    ctx->pc = 0x39B428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B424u;
    // 0x39b428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF978u;
    sub_003AF978_0x3af978(rdram, ctx, runtime); return;
    ctx->pc = 0x39B42Cu;
    // 0x39b42c: 0x0  nop
    ctx->pc = 0x39b42cu;
    // NOP
    ctx->pc = 0x39b430u;
}
