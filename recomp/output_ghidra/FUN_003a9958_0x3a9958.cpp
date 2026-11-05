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

// Function: FUN_003a9958
// Address: 0x3a9958 - 0x3a995a
void FUN_003a9958_0x3a9958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_003a9958_0x3a9958");
#endif

    ctx->pc = 0x3a9958u;

    // 0x3a9958: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    ctx->pc = 0x3a995au;
}
