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

// Function: sub_003EE5A8
// Address: 0x3ee5a8 - 0x3ee620
void sub_003EE5A8_0x3ee5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE5A8_0x3ee5a8");
#endif

    ctx->pc = 0x3ee5a8u;

    // 0x3ee5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE5B0u;
    // 0x3ee5b0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ee5b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ee5b4: 0x0  nop
    ctx->pc = 0x3ee5b4u;
    // NOP
    // 0x3ee5b8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ee5b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ee5bc: 0x0  nop
    ctx->pc = 0x3ee5bcu;
    // NOP
    // 0x3ee5c0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ee5c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ee5c4: 0x0  nop
    ctx->pc = 0x3ee5c4u;
    // NOP
    // 0x3ee5c8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ee5c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ee5cc: 0x0  nop
    ctx->pc = 0x3ee5ccu;
    // NOP
    // 0x3ee5d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ee5d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ee5d4: 0x0  nop
    ctx->pc = 0x3ee5d4u;
    // NOP
    // 0x3ee5d8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ee5d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ee5dc: 0x0  nop
    ctx->pc = 0x3ee5dcu;
    // NOP
    // 0x3ee5e0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ee5e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ee5e4: 0x0  nop
    ctx->pc = 0x3ee5e4u;
    // NOP
    // 0x3ee5e8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ee5e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ee5ec: 0x0  nop
    ctx->pc = 0x3ee5ecu;
    // NOP
    // 0x3ee5f0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ee5f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ee5f4: 0x0  nop
    ctx->pc = 0x3ee5f4u;
    // NOP
    // 0x3ee5f8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ee5f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ee5fc: 0x0  nop
    ctx->pc = 0x3ee5fcu;
    // NOP
    // 0x3ee600: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ee600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ee604: 0x0  nop
    ctx->pc = 0x3ee604u;
    // NOP
    // 0x3ee608: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ee608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ee60c: 0x0  nop
    ctx->pc = 0x3ee60cu;
    // NOP
    // 0x3ee610: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3ee610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ee614: 0x0  nop
    ctx->pc = 0x3ee614u;
    // NOP
    // 0x3ee618: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3ee618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3ee61c: 0x0  nop
    ctx->pc = 0x3ee61cu;
    // NOP
    ctx->pc = 0x3ee620u;
}
