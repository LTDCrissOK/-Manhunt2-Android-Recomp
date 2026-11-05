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

// Function: sub_003AB5E8
// Address: 0x3ab5e8 - 0x3ab618
void sub_003AB5E8_0x3ab5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB5E8_0x3ab5e8");
#endif

    switch (ctx->pc) {
        case 0x3ab5f8u: goto label_3ab5f8;
        case 0x3ab600u: goto label_3ab600;
        case 0x3ab608u: goto label_3ab608;
        default: break;
    }

    ctx->pc = 0x3ab5e8u;

    // 0x3ab5e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ab5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ab5ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ab5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ab5f0: 0xc0ea7be  jal         func_3A9EF8
    ctx->pc = 0x3AB5F0u;
    SET_GPR_U32(ctx, 31, 0x3AB5F8u);
    ctx->pc = 0x3A9EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9EF8u, 0x3AB5F0u, 0x3AB5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB5F8u;
label_3ab5f8:
    // 0x3ab5f8: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3AB5F8u;
    SET_GPR_U32(ctx, 31, 0x3AB600u);
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3AB5F8u, 0x3AB600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB600u;
label_3ab600:
    // 0x3ab600: 0xc0ead86  jal         func_3AB618
    ctx->pc = 0x3AB600u;
    SET_GPR_U32(ctx, 31, 0x3AB608u);
    ctx->pc = 0x3AB618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB618u, 0x3AB600u, 0x3AB608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB608u;
label_3ab608:
    // 0x3ab608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ab608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ab60c: 0x80ea7de  j           func_3A9F78
    ctx->pc = 0x3AB60Cu;
    ctx->pc = 0x3AB610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB60Cu;
    // 0x3ab610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    sub_003A9F78_0x3a9f78(rdram, ctx, runtime); return;
    ctx->pc = 0x3AB614u;
    // 0x3ab614: 0x0  nop
    ctx->pc = 0x3ab614u;
    // NOP
    ctx->pc = 0x3ab618u;
}
