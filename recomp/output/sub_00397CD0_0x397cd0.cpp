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

// Function: sub_00397CD0
// Address: 0x397cd0 - 0x397cf0
void sub_00397CD0_0x397cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397CD0_0x397cd0");
#endif

    ctx->pc = 0x397cd0u;

    // 0x397cd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x397cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x397cd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x397cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x397cd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x397cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397cdc: 0x80ea670  j           func_3A99C0
    ctx->pc = 0x397CDCu;
    ctx->pc = 0x397CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397CDCu;
    // 0x397ce0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A99C0u, 0x397CDCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x397CE4u;
    // 0x397ce4: 0x0  nop
    ctx->pc = 0x397ce4u;
    // NOP
    // 0x397ce8: 0x0  nop
    ctx->pc = 0x397ce8u;
    // NOP
    // 0x397cec: 0x0  nop
    ctx->pc = 0x397cecu;
    // NOP
    ctx->pc = 0x397cf0u;
}
