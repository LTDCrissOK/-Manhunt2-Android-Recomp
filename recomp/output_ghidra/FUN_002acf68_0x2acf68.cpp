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

// Function: FUN_002acf68
// Address: 0x2acf68 - 0x2acf6a
void FUN_002acf68_0x2acf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002acf68_0x2acf68");
#endif

    ctx->pc = 0x2acf68u;

    // 0x2acf68: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2acf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    ctx->pc = 0x2acf6au;
}
