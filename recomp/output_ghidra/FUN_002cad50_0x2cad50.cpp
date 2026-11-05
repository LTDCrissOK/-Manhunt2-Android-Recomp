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

// Function: FUN_002cad50
// Address: 0x2cad50 - 0x2cad52
void FUN_002cad50_0x2cad50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002cad50_0x2cad50");
#endif

    ctx->pc = 0x2cad50u;

    // 0x2cad50: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2cad50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    ctx->pc = 0x2cad52u;
}
