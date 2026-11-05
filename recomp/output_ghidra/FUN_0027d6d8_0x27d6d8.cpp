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

// Function: FUN_0027d6d8
// Address: 0x27d6d8 - 0x27d6d9
void FUN_0027d6d8_0x27d6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0027d6d8_0x27d6d8");
#endif

    ctx->pc = 0x27d6d8u;

    // 0x27d6d8: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x27d6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
    ctx->pc = 0x27d6d9u;
}
