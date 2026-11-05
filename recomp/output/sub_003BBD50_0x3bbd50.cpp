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

// Function: sub_003BBD50
// Address: 0x3bbd50 - 0x3bbd68
void sub_003BBD50_0x3bbd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BBD50_0x3bbd50");
#endif

    ctx->pc = 0x3bbd50u;

    // 0x3bbd50: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3bbd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3bbd54: 0x80f2674  j           func_3C99D0
    ctx->pc = 0x3BBD54u;
    ctx->pc = 0x3BBD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBD54u;
    // 0x3bbd58: 0x8c44c930  lw          $a0, -0x36D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99D0u;
    sub_003C99D0_0x3c99d0(rdram, ctx, runtime); return;
    ctx->pc = 0x3BBD5Cu;
    // 0x3bbd5c: 0x0  nop
    ctx->pc = 0x3bbd5cu;
    // NOP
    // 0x3bbd60: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3bbd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3bbd64: 0x0  nop
    ctx->pc = 0x3bbd64u;
    // NOP
    ctx->pc = 0x3bbd68u;
}
