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

// Function: sub_00397CF0
// Address: 0x397cf0 - 0x397d10
void sub_00397CF0_0x397cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397CF0_0x397cf0");
#endif

    ctx->pc = 0x397cf0u;

    // 0x397cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x397cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x397cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x397cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x397cf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x397cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397cfc: 0x80ea6f8  j           func_3A9BE0
    ctx->pc = 0x397CFCu;
    ctx->pc = 0x397D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397CFCu;
    // 0x397d00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9BE0u, 0x397CFCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x397D04u;
    // 0x397d04: 0x0  nop
    ctx->pc = 0x397d04u;
    // NOP
    // 0x397d08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x397d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x397d0c: 0x0  nop
    ctx->pc = 0x397d0cu;
    // NOP
    ctx->pc = 0x397d10u;
}
