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

// Function: sub_003AA078
// Address: 0x3aa078 - 0x3aa0a8
void sub_003AA078_0x3aa078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA078_0x3aa078");
#endif

    switch (ctx->pc) {
        case 0x3aa088u: goto label_3aa088;
        case 0x3aa090u: goto label_3aa090;
        case 0x3aa098u: goto label_3aa098;
        default: break;
    }

    ctx->pc = 0x3aa078u;

    // 0x3aa078: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aa078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3aa07c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3aa07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3aa080: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3AA080u;
    SET_GPR_U32(ctx, 31, 0x3AA088u);
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3AA080u, 0x3AA088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA088u;
label_3aa088:
    // 0x3aa088: 0xc0ea82a  jal         func_3AA0A8
    ctx->pc = 0x3AA088u;
    SET_GPR_U32(ctx, 31, 0x3AA090u);
    ctx->pc = 0x3AA0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA0A8u, 0x3AA088u, 0x3AA090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA090u;
label_3aa090:
    // 0x3aa090: 0xc0ea7de  jal         func_3A9F78
    ctx->pc = 0x3AA090u;
    SET_GPR_U32(ctx, 31, 0x3AA098u);
    ctx->pc = 0x3A9F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F78u, 0x3AA090u, 0x3AA098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA098u;
label_3aa098:
    // 0x3aa098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aa098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa09c: 0x80ea7cc  j           func_3A9F30
    ctx->pc = 0x3AA09Cu;
    ctx->pc = 0x3AA0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA09Cu;
    // 0x3aa0a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F30u, 0x3AA09Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AA0A4u;
    // 0x3aa0a4: 0x0  nop
    ctx->pc = 0x3aa0a4u;
    // NOP
    ctx->pc = 0x3aa0a8u;
}
