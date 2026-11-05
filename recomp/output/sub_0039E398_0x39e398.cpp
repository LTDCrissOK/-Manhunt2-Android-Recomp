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

// Function: sub_0039E398
// Address: 0x39e398 - 0x39e3b0
void sub_0039E398_0x39e398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E398_0x39e398");
#endif

    ctx->pc = 0x39e398u;

    // 0x39e398: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39e398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39e39c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39e39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39e3a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39e3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39e3a4: 0x80e7aea  j           func_39EBA8
    ctx->pc = 0x39E3A4u;
    ctx->pc = 0x39E3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E3A4u;
    // 0x39e3a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EBA8u, 0x39E3A4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39E3ACu;
    // 0x39e3ac: 0x0  nop
    ctx->pc = 0x39e3acu;
    // NOP
    ctx->pc = 0x39e3b0u;
}
