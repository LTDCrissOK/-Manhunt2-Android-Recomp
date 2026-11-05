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

// Function: sub_003AD128
// Address: 0x3ad128 - 0x3ad140
void sub_003AD128_0x3ad128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD128_0x3ad128");
#endif

    ctx->pc = 0x3ad128u;

    // 0x3ad128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ad128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ad12c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x3ad12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3ad130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ad130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ad134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ad134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ad138: 0x80eb3ec  j           func_3ACFB0
    ctx->pc = 0x3AD138u;
    ctx->pc = 0x3AD13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD138u;
    // 0x3ad13c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACFB0u, 0x3AD138u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AD140u;
}
