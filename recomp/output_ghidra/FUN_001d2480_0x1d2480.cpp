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

// Function: FUN_001d2480
// Address: 0x1d2480 - 0x1d2482
void FUN_001d2480_0x1d2480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d2480_0x1d2480");
#endif

    ctx->pc = 0x1d2480u;

    // 0x1d2480: 0x27bdef80  addiu       $sp, $sp, -0x1080
    ctx->pc = 0x1d2480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963072));
    ctx->pc = 0x1d2482u;
}
