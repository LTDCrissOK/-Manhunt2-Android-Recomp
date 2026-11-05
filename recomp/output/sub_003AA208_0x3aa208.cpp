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

// Function: sub_003AA208
// Address: 0x3aa208 - 0x3aa238
void sub_003AA208_0x3aa208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA208_0x3aa208");
#endif

    switch (ctx->pc) {
        case 0x3aa21cu: goto label_3aa21c;
        case 0x3aa224u: goto label_3aa224;
        default: break;
    }

    ctx->pc = 0x3aa208u;

    // 0x3aa208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aa208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3aa20c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3aa20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3aa210: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3aa210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3aa214: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3AA214u;
    SET_GPR_U32(ctx, 31, 0x3AA21Cu);
    ctx->pc = 0x3AA218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA214u;
    // 0x3aa218: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3AA214u, 0x3AA21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA21Cu;
label_3aa21c:
    // 0x3aa21c: 0xc0ea88e  jal         func_3AA238
    ctx->pc = 0x3AA21Cu;
    SET_GPR_U32(ctx, 31, 0x3AA224u);
    ctx->pc = 0x3AA220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA21Cu;
    // 0x3aa220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA238u, 0x3AA21Cu, 0x3AA224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA224u;
label_3aa224:
    // 0x3aa224: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aa224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa228: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3aa228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3aa22c: 0x80ea7de  j           func_3A9F78
    ctx->pc = 0x3AA22Cu;
    ctx->pc = 0x3AA230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA22Cu;
    // 0x3aa230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    sub_003A9F78_0x3a9f78(rdram, ctx, runtime); return;
    ctx->pc = 0x3AA234u;
    // 0x3aa234: 0x0  nop
    ctx->pc = 0x3aa234u;
    // NOP
    ctx->pc = 0x3aa238u;
}
