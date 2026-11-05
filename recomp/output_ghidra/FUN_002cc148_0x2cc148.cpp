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

// Function: FUN_002cc148
// Address: 0x2cc148 - 0x2cc149
void FUN_002cc148_0x2cc148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002cc148_0x2cc148");
#endif

    ctx->pc = 0x2cc148u;

    // 0x2cc148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cc148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    ctx->pc = 0x2cc149u;
}
