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

// Function: sub_00395E90
// Address: 0x395e90 - 0x395eb8
void sub_00395E90_0x395e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395E90_0x395e90");
#endif

    switch (ctx->pc) {
        case 0x395ea0u: goto label_395ea0;
        case 0x395ea8u: goto label_395ea8;
        default: break;
    }

    ctx->pc = 0x395e90u;

    // 0x395e90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x395e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x395e94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x395e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x395e98: 0xc0ebe5c  jal         func_3AF970
    ctx->pc = 0x395E98u;
    SET_GPR_U32(ctx, 31, 0x395EA0u);
    ctx->pc = 0x3AF970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF970u, 0x395E98u, 0x395EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395EA0u;
label_395ea0:
    // 0x395ea0: 0xc0e57ae  jal         func_395EB8
    ctx->pc = 0x395EA0u;
    SET_GPR_U32(ctx, 31, 0x395EA8u);
    ctx->pc = 0x395EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395EB8u, 0x395EA0u, 0x395EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395EA8u;
label_395ea8:
    // 0x395ea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x395ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395eac: 0x80ebe5e  j           func_3AF978
    ctx->pc = 0x395EACu;
    ctx->pc = 0x395EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395EACu;
    // 0x395eb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF978u;
    sub_003AF978_0x3af978(rdram, ctx, runtime); return;
    ctx->pc = 0x395EB4u;
    // 0x395eb4: 0x0  nop
    ctx->pc = 0x395eb4u;
    // NOP
    ctx->pc = 0x395eb8u;
}
