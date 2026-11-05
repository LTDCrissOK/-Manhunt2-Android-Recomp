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

// Function: FUN_001166d0
// Address: 0x1166d0 - 0x1166d4
void FUN_001166d0_0x1166d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001166d0_0x1166d0");
#endif

    ctx->pc = 0x1166d0u;

    // 0x1166d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1166d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->pc = 0x1166d4u;
}
