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

// Function: FUN_003b38a0
// Address: 0x3b38a0 - 0x3b38a2
void FUN_003b38a0_0x3b38a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_003b38a0_0x3b38a0");
#endif

    ctx->pc = 0x3b38a0u;

    // 0x3b38a0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3b38a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    ctx->pc = 0x3b38a2u;
}
