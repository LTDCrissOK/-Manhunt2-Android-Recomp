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

// Function: FUN_002c4740
// Address: 0x2c4740 - 0x2c4742
void FUN_002c4740_0x2c4740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002c4740_0x2c4740");
#endif

    ctx->pc = 0x2c4740u;

    // 0x2c4740: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2c4740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    ctx->pc = 0x2c4742u;
}
