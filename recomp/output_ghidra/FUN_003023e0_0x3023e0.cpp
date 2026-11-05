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

// Function: FUN_003023e0
// Address: 0x3023e0 - 0x3023e2
void FUN_003023e0_0x3023e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_003023e0_0x3023e0");
#endif

    ctx->pc = 0x3023e0u;

    // 0x3023e0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3023e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    ctx->pc = 0x3023e2u;
}
