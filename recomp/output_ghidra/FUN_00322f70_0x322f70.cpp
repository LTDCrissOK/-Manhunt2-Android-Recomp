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

// Function: FUN_00322f70
// Address: 0x322f70 - 0x322f71
void FUN_00322f70_0x322f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00322f70_0x322f70");
#endif

    ctx->pc = 0x322f70u;

    // 0x322f70: 0x27bdfcd0  addiu       $sp, $sp, -0x330
    ctx->pc = 0x322f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966480));
    ctx->pc = 0x322f71u;
}
