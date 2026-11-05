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

// Function: FUN_0039b1b0
// Address: 0x39b1b0 - 0x39b1b2
void FUN_0039b1b0_0x39b1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0039b1b0_0x39b1b0");
#endif

    ctx->pc = 0x39b1b0u;

    // 0x39b1b0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x39b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x39b1b2u;
}
