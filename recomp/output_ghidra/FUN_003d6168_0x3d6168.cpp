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

// Function: FUN_003d6168
// Address: 0x3d6168 - 0x3d616a
void FUN_003d6168_0x3d6168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_003d6168_0x3d6168");
#endif

    ctx->pc = 0x3d6168u;

    // 0x3d6168: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d6168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    ctx->pc = 0x3d616au;
}
