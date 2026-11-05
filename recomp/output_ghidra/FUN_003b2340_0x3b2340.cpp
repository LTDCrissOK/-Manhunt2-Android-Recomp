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

// Function: FUN_003b2340
// Address: 0x3b2340 - 0x3b2341
void FUN_003b2340_0x3b2340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_003b2340_0x3b2340");
#endif

    ctx->pc = 0x3b2340u;

    // 0x3b2340: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b2340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    ctx->pc = 0x3b2341u;
}
