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

// Function: FUN_0038a438
// Address: 0x38a438 - 0x38a439
void FUN_0038a438_0x38a438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0038a438_0x38a438");
#endif

    ctx->pc = 0x38a438u;

    // 0x38a438: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x38a438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    ctx->pc = 0x38a439u;
}
