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

// Function: sub_003B3700
// Address: 0x3b3700 - 0x3b3718
void sub_003B3700_0x3b3700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3700_0x3b3700");
#endif

    ctx->pc = 0x3b3700u;

    // 0x3b3700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b3700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b3704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b3704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b3708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b3708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b370c: 0x80eb274  j           func_3AC9D0
    ctx->pc = 0x3B370Cu;
    ctx->pc = 0x3B3710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B370Cu;
    // 0x3b3710: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC9D0u;
    sub_003AC9D0_0x3ac9d0(rdram, ctx, runtime); return;
    ctx->pc = 0x3B3714u;
    // 0x3b3714: 0x0  nop
    ctx->pc = 0x3b3714u;
    // NOP
    ctx->pc = 0x3b3718u;
}
