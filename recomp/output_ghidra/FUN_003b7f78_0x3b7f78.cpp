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

// Function: FUN_003b7f78
// Address: 0x3b7f78 - 0x3b7f7a
void FUN_003b7f78_0x3b7f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_003b7f78_0x3b7f78");
#endif

    ctx->pc = 0x3b7f78u;

    // 0x3b7f78: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3b7f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    ctx->pc = 0x3b7f7au;
}
