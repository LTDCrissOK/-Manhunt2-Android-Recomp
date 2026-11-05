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

// Function: FUN_002ad080
// Address: 0x2ad080 - 0x2ad082
void FUN_002ad080_0x2ad080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002ad080_0x2ad080");
#endif

    ctx->pc = 0x2ad080u;

    // 0x2ad080: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2ad080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    ctx->pc = 0x2ad082u;
}
