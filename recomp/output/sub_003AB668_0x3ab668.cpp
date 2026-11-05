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

// Function: sub_003AB668
// Address: 0x3ab668 - 0x3ab698
void sub_003AB668_0x3ab668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB668_0x3ab668");
#endif

    switch (ctx->pc) {
        case 0x3ab678u: goto label_3ab678;
        case 0x3ab680u: goto label_3ab680;
        case 0x3ab688u: goto label_3ab688;
        default: break;
    }

    ctx->pc = 0x3ab668u;

    // 0x3ab668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ab668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ab66c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ab66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ab670: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3AB670u;
    SET_GPR_U32(ctx, 31, 0x3AB678u);
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3AB670u, 0x3AB678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB678u;
label_3ab678:
    // 0x3ab678: 0xc0eada6  jal         func_3AB698
    ctx->pc = 0x3AB678u;
    SET_GPR_U32(ctx, 31, 0x3AB680u);
    ctx->pc = 0x3AB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB698u, 0x3AB678u, 0x3AB680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB680u;
label_3ab680:
    // 0x3ab680: 0xc0ea7de  jal         func_3A9F78
    ctx->pc = 0x3AB680u;
    SET_GPR_U32(ctx, 31, 0x3AB688u);
    ctx->pc = 0x3A9F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F78u, 0x3AB680u, 0x3AB688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB688u;
label_3ab688:
    // 0x3ab688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ab688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ab68c: 0x80ea7cc  j           func_3A9F30
    ctx->pc = 0x3AB68Cu;
    ctx->pc = 0x3AB690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB68Cu;
    // 0x3ab690: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F30u, 0x3AB68Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AB694u;
    // 0x3ab694: 0x0  nop
    ctx->pc = 0x3ab694u;
    // NOP
    ctx->pc = 0x3ab698u;
}
