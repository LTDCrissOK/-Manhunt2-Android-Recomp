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

// Function: sub_003ACA00
// Address: 0x3aca00 - 0x3aca18
void sub_003ACA00_0x3aca00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ACA00_0x3aca00");
#endif

    ctx->pc = 0x3aca00u;

    // 0x3aca00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aca00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3aca04: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3aca04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3aca08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3aca08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3aca0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aca0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aca10: 0x80eb232  j           func_3AC8C8
    ctx->pc = 0x3ACA10u;
    ctx->pc = 0x3ACA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACA10u;
    // 0x3aca14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC8C8u, 0x3ACA10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ACA18u;
}
