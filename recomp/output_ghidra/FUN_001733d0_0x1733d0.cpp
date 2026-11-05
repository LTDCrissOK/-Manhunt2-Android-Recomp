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

// Function: FUN_001733d0
// Address: 0x1733d0 - 0x1733d2
void FUN_001733d0_0x1733d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001733d0_0x1733d0");
#endif

    ctx->pc = 0x1733d0u;

    // 0x1733d0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1733d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    ctx->pc = 0x1733d2u;
}
