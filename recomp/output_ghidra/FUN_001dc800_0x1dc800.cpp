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

// Function: FUN_001dc800
// Address: 0x1dc800 - 0x1dc802
void FUN_001dc800_0x1dc800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dc800_0x1dc800");
#endif

    ctx->pc = 0x1dc800u;

    // 0x1dc800: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1dc800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    ctx->pc = 0x1dc802u;
}
