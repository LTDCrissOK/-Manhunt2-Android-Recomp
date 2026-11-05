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

// Function: sub_0038EC58
// Address: 0x38ec58 - 0x38ec68
void sub_0038EC58_0x38ec58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038EC58_0x38ec58");
#endif

    ctx->pc = 0x38ec58u;

    // 0x38ec58: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x38ec58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x38ec5c: 0x80e28f8  j           func_38A3E0
    ctx->pc = 0x38EC5Cu;
    ctx->pc = 0x38EC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EC5Cu;
    // 0x38ec60: 0x24a59740  addiu       $a1, $a1, -0x68C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3E0u;
    sub_0038A3E0_0x38a3e0(rdram, ctx, runtime); return;
    ctx->pc = 0x38EC64u;
    // 0x38ec64: 0x0  nop
    ctx->pc = 0x38ec64u;
    // NOP
    ctx->pc = 0x38ec68u;
}
