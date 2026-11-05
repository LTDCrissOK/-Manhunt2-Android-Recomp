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

// Function: FUN_003ad140
// Address: 0x3ad140 - 0x3ad142
void FUN_003ad140_0x3ad140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_003ad140_0x3ad140");
#endif

    ctx->pc = 0x3ad140u;

    // 0x3ad140: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x3ad140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    ctx->pc = 0x3ad142u;
}
