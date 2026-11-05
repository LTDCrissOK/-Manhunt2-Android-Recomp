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

// Function: sub_00308420
// Address: 0x308420 - 0x308430
void sub_00308420_0x308420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308420_0x308420");
#endif

    ctx->pc = 0x308420u;

    // 0x308420: 0x8cc40060  lw          $a0, 0x60($a2)
    ctx->pc = 0x308420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x308424: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x308424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x308428: 0xc0c2286  jal         func_308A18
    ctx->pc = 0x308428u;
    SET_GPR_U32(ctx, 31, 0x308430u);
    ctx->pc = 0x30842Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308428u;
    // 0x30842c: 0xac8202e0  sw          $v0, 0x2E0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 736), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308A18u, 0x308428u, 0x308430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308430u;
}
