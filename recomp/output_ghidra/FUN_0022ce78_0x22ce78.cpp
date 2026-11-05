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

// Function: FUN_0022ce78
// Address: 0x22ce78 - 0x22ce79
void FUN_0022ce78_0x22ce78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022ce78_0x22ce78");
#endif

    ctx->pc = 0x22ce78u;

    // 0x22ce78: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x22ce78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    ctx->pc = 0x22ce79u;
}
