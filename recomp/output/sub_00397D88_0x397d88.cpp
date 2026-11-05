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

// Function: sub_00397D88
// Address: 0x397d88 - 0x397de0
void sub_00397D88_0x397d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397D88_0x397d88");
#endif

    ctx->pc = 0x397d88u;

    // 0x397d88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x397d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x397d8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x397d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x397d90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x397d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397d94: 0x80ea77c  j           func_3A9DF0
    ctx->pc = 0x397D94u;
    ctx->pc = 0x397D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397D94u;
    // 0x397d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9DF0u, 0x397D94u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x397D9Cu;
    // 0x397d9c: 0x0  nop
    ctx->pc = 0x397d9cu;
    // NOP
    // 0x397da0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x397da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x397da4: 0x0  nop
    ctx->pc = 0x397da4u;
    // NOP
    // 0x397da8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x397da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x397dac: 0x0  nop
    ctx->pc = 0x397dacu;
    // NOP
    // 0x397db0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x397db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x397db4: 0x0  nop
    ctx->pc = 0x397db4u;
    // NOP
    // 0x397db8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x397db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x397dbc: 0x0  nop
    ctx->pc = 0x397dbcu;
    // NOP
    // 0x397dc0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x397dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x397dc4: 0x0  nop
    ctx->pc = 0x397dc4u;
    // NOP
    // 0x397dc8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x397dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x397dcc: 0x0  nop
    ctx->pc = 0x397dccu;
    // NOP
    // 0x397dd0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x397dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x397dd4: 0x0  nop
    ctx->pc = 0x397dd4u;
    // NOP
    // 0x397dd8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x397dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x397ddc: 0x0  nop
    ctx->pc = 0x397ddcu;
    // NOP
    ctx->pc = 0x397de0u;
}
