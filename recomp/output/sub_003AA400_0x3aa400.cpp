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

// Function: sub_003AA400
// Address: 0x3aa400 - 0x3aa430
void sub_003AA400_0x3aa400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA400_0x3aa400");
#endif

    switch (ctx->pc) {
        case 0x3aa414u: goto label_3aa414;
        case 0x3aa41cu: goto label_3aa41c;
        default: break;
    }

    ctx->pc = 0x3aa400u;

    // 0x3aa400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aa400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3aa404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3aa404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3aa408: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3aa408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3aa40c: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3AA40Cu;
    SET_GPR_U32(ctx, 31, 0x3AA414u);
    ctx->pc = 0x3AA410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA40Cu;
    // 0x3aa410: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3AA40Cu, 0x3AA414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA414u;
label_3aa414:
    // 0x3aa414: 0xc0ea90c  jal         func_3AA430
    ctx->pc = 0x3AA414u;
    SET_GPR_U32(ctx, 31, 0x3AA41Cu);
    ctx->pc = 0x3AA418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA414u;
    // 0x3aa418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA430u, 0x3AA414u, 0x3AA41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA41Cu;
label_3aa41c:
    // 0x3aa41c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aa41cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa420: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3aa420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3aa424: 0x80ea7de  j           func_3A9F78
    ctx->pc = 0x3AA424u;
    ctx->pc = 0x3AA428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA424u;
    // 0x3aa428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    sub_003A9F78_0x3a9f78(rdram, ctx, runtime); return;
    ctx->pc = 0x3AA42Cu;
    // 0x3aa42c: 0x0  nop
    ctx->pc = 0x3aa42cu;
    // NOP
    ctx->pc = 0x3aa430u;
}
