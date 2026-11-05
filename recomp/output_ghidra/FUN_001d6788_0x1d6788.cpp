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

// Function: FUN_001d6788
// Address: 0x1d6788 - 0x1d678a
void FUN_001d6788_0x1d6788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d6788_0x1d6788");
#endif

    ctx->pc = 0x1d6788u;

    // 0x1d6788: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d6788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    ctx->pc = 0x1d678au;
}
