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

// Function: sub_003A02E0
// Address: 0x3a02e0 - 0x3a0308
void sub_003A02E0_0x3a02e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A02E0_0x3a02e0");
#endif

    switch (ctx->pc) {
        case 0x3a02f0u: goto label_3a02f0;
        case 0x3a02f8u: goto label_3a02f8;
        default: break;
    }

    ctx->pc = 0x3a02e0u;

    // 0x3a02e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a02e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a02e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a02e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a02e8: 0xc0ecbf0  jal         func_3B2FC0
    ctx->pc = 0x3A02E8u;
    SET_GPR_U32(ctx, 31, 0x3A02F0u);
    ctx->pc = 0x3B2FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FC0u, 0x3A02E8u, 0x3A02F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A02F0u;
label_3a02f0:
    // 0x3a02f0: 0xc0e80c2  jal         func_3A0308
    ctx->pc = 0x3A02F0u;
    SET_GPR_U32(ctx, 31, 0x3A02F8u);
    ctx->pc = 0x3A0308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0308u, 0x3A02F0u, 0x3A02F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A02F8u;
label_3a02f8:
    // 0x3a02f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a02f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a02fc: 0x80ecbf2  j           func_3B2FC8
    ctx->pc = 0x3A02FCu;
    ctx->pc = 0x3A0300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A02FCu;
    // 0x3a0300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FC8u;
    sub_003B2FC8_0x3b2fc8(rdram, ctx, runtime); return;
    ctx->pc = 0x3A0304u;
    // 0x3a0304: 0x0  nop
    ctx->pc = 0x3a0304u;
    // NOP
    ctx->pc = 0x3a0308u;
}
