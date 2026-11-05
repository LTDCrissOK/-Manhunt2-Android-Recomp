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

// Function: sub_003A9FF8
// Address: 0x3a9ff8 - 0x3aa028
void sub_003A9FF8_0x3a9ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9FF8_0x3a9ff8");
#endif

    switch (ctx->pc) {
        case 0x3aa008u: goto label_3aa008;
        case 0x3aa010u: goto label_3aa010;
        case 0x3aa018u: goto label_3aa018;
        default: break;
    }

    ctx->pc = 0x3a9ff8u;

    // 0x3a9ff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a9ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a9ffc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a9ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3aa000: 0xc0ea7be  jal         func_3A9EF8
    ctx->pc = 0x3AA000u;
    SET_GPR_U32(ctx, 31, 0x3AA008u);
    ctx->pc = 0x3A9EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9EF8u, 0x3AA000u, 0x3AA008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA008u;
label_3aa008:
    // 0x3aa008: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3AA008u;
    SET_GPR_U32(ctx, 31, 0x3AA010u);
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3AA008u, 0x3AA010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA010u;
label_3aa010:
    // 0x3aa010: 0xc0ea80a  jal         func_3AA028
    ctx->pc = 0x3AA010u;
    SET_GPR_U32(ctx, 31, 0x3AA018u);
    ctx->pc = 0x3AA028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA028u, 0x3AA010u, 0x3AA018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA018u;
label_3aa018:
    // 0x3aa018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aa018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa01c: 0x80ea7de  j           func_3A9F78
    ctx->pc = 0x3AA01Cu;
    ctx->pc = 0x3AA020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA01Cu;
    // 0x3aa020: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    sub_003A9F78_0x3a9f78(rdram, ctx, runtime); return;
    ctx->pc = 0x3AA024u;
    // 0x3aa024: 0x0  nop
    ctx->pc = 0x3aa024u;
    // NOP
    ctx->pc = 0x3aa028u;
}
