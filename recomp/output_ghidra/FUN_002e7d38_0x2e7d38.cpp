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

// Function: FUN_002e7d38
// Address: 0x2e7d38 - 0x2e7d39
void FUN_002e7d38_0x2e7d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002e7d38_0x2e7d38");
#endif

    ctx->pc = 0x2e7d38u;

    // 0x2e7d38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e7d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    ctx->pc = 0x2e7d39u;
}
