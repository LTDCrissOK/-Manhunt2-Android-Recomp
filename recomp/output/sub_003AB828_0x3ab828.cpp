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

// Function: sub_003AB828
// Address: 0x3ab828 - 0x3ab858
void sub_003AB828_0x3ab828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB828_0x3ab828");
#endif

    switch (ctx->pc) {
        case 0x3ab83cu: goto label_3ab83c;
        case 0x3ab844u: goto label_3ab844;
        default: break;
    }

    ctx->pc = 0x3ab828u;

    // 0x3ab828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ab828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ab82c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ab82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ab830: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3ab830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3ab834: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3AB834u;
    SET_GPR_U32(ctx, 31, 0x3AB83Cu);
    ctx->pc = 0x3AB838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB834u;
    // 0x3ab838: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3AB834u, 0x3AB83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB83Cu;
label_3ab83c:
    // 0x3ab83c: 0xc0eae16  jal         func_3AB858
    ctx->pc = 0x3AB83Cu;
    SET_GPR_U32(ctx, 31, 0x3AB844u);
    ctx->pc = 0x3AB840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB83Cu;
    // 0x3ab840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB858u, 0x3AB83Cu, 0x3AB844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB844u;
label_3ab844:
    // 0x3ab844: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ab844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ab848: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ab848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ab84c: 0x80ea7de  j           func_3A9F78
    ctx->pc = 0x3AB84Cu;
    ctx->pc = 0x3AB850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB84Cu;
    // 0x3ab850: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    sub_003A9F78_0x3a9f78(rdram, ctx, runtime); return;
    ctx->pc = 0x3AB854u;
    // 0x3ab854: 0x0  nop
    ctx->pc = 0x3ab854u;
    // NOP
    ctx->pc = 0x3ab858u;
}
