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

// Function: FUN_002dc210
// Address: 0x2dc210 - 0x2dc211
void FUN_002dc210_0x2dc210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002dc210_0x2dc210");
#endif

    ctx->pc = 0x2dc210u;

    // 0x2dc210: 0x27bdfbd0  addiu       $sp, $sp, -0x430
    ctx->pc = 0x2dc210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966224));
    ctx->pc = 0x2dc211u;
}
