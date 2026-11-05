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

// Function: sub_00399220
// Address: 0x399220 - 0x399238
void sub_00399220_0x399220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399220_0x399220");
#endif

    ctx->pc = 0x399220u;

    // 0x399220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x399220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x399224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x399224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x399228: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x399228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x39922c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39922cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399230: 0x80eb89a  j           func_3AE268
    ctx->pc = 0x399230u;
    ctx->pc = 0x399234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399230u;
    // 0x399234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE268u, 0x399230u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x399238u;
}
