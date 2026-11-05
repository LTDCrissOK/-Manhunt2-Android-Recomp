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

// Function: sub_003CDEA0
// Address: 0x3cdea0 - 0x3cdeb0
void sub_003CDEA0_0x3cdea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CDEA0_0x3cdea0");
#endif

    ctx->pc = 0x3cdea0u;

    // 0x3cdea0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3cdea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3cdea4: 0x80f2670  j           func_3C99C0
    ctx->pc = 0x3CDEA4u;
    ctx->pc = 0x3CDEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDEA4u;
    // 0x3cdea8: 0x8c44d694  lw          $a0, -0x296C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956692)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    sub_003C99C0_0x3c99c0(rdram, ctx, runtime); return;
    ctx->pc = 0x3CDEACu;
    // 0x3cdeac: 0x0  nop
    ctx->pc = 0x3cdeacu;
    // NOP
    ctx->pc = 0x3cdeb0u;
}
