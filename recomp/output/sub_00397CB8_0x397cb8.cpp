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

// Function: sub_00397CB8
// Address: 0x397cb8 - 0x397cd0
void sub_00397CB8_0x397cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397CB8_0x397cb8");
#endif

    ctx->pc = 0x397cb8u;

    // 0x397cb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x397cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x397cbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x397cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x397cc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x397cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397cc4: 0x80ea656  j           func_3A9958
    ctx->pc = 0x397CC4u;
    ctx->pc = 0x397CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397CC4u;
    // 0x397cc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9958u, 0x397CC4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x397CCCu;
    // 0x397ccc: 0x0  nop
    ctx->pc = 0x397cccu;
    // NOP
    ctx->pc = 0x397cd0u;
}
