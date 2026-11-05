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

// Function: FUN_003a9df0
// Address: 0x3a9df0 - 0x3a9df2
void FUN_003a9df0_0x3a9df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_003a9df0_0x3a9df0");
#endif

    ctx->pc = 0x3a9df0u;

    // 0x3a9df0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    ctx->pc = 0x3a9df2u;
}
