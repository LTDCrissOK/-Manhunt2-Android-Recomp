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

// Function: FUN_00320670
// Address: 0x320670 - 0x320671
void FUN_00320670_0x320670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00320670_0x320670");
#endif

    ctx->pc = 0x320670u;

    // 0x320670: 0x27bdfb40  addiu       $sp, $sp, -0x4C0
    ctx->pc = 0x320670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966080));
    ctx->pc = 0x320671u;
}
