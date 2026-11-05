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

// Function: sub_0039EB78
// Address: 0x39eb78 - 0x39eb90
void sub_0039EB78_0x39eb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039EB78_0x39eb78");
#endif

    ctx->pc = 0x39eb78u;

    // 0x39eb78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39eb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39eb7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39eb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39eb80: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x39eb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39eb84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39eb84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39eb88: 0x80ec834  j           func_3B20D0
    ctx->pc = 0x39EB88u;
    ctx->pc = 0x39EB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EB88u;
    // 0x39eb8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B20D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B20D0u, 0x39EB88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39EB90u;
}
