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

// Function: FUN_00339290
// Address: 0x339290 - 0x339292
void FUN_00339290_0x339290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00339290_0x339290");
#endif

    ctx->pc = 0x339290u;

    // 0x339290: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x339290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    ctx->pc = 0x339292u;
}
