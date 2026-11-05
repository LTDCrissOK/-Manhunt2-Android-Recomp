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

// Function: FUN_003b7ed8
// Address: 0x3b7ed8 - 0x3b7eda
void FUN_003b7ed8_0x3b7ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_003b7ed8_0x3b7ed8");
#endif

    ctx->pc = 0x3b7ed8u;

    // 0x3b7ed8: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3b7ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    ctx->pc = 0x3b7edau;
}
