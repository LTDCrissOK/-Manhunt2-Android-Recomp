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

// Function: sub_003A8590
// Address: 0x3a8590 - 0x3a85a8
void sub_003A8590_0x3a8590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8590_0x3a8590");
#endif

    ctx->pc = 0x3a8590u;

    // 0x3a8590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a8590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a8594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a8594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a8598: 0x8c8400e8  lw          $a0, 0xE8($a0)
    ctx->pc = 0x3a8598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x3a859c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a859cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a85a0: 0x80ece7c  j           func_3B39F0
    ctx->pc = 0x3A85A0u;
    ctx->pc = 0x3A85A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A85A0u;
    // 0x3a85a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B39F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B39F0u, 0x3A85A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3A85A8u;
}
