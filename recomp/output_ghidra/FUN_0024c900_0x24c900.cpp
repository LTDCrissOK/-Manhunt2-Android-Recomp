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

// Function: FUN_0024c900
// Address: 0x24c900 - 0x24c902
void FUN_0024c900_0x24c900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0024c900_0x24c900");
#endif

    ctx->pc = 0x24c900u;

    // 0x24c900: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x24c900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    ctx->pc = 0x24c902u;
}
