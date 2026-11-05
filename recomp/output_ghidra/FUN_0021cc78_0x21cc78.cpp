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

// Function: FUN_0021cc78
// Address: 0x21cc78 - 0x21cc79
void FUN_0021cc78_0x21cc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021cc78_0x21cc78");
#endif

    ctx->pc = 0x21cc78u;

    // 0x21cc78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21cc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    ctx->pc = 0x21cc79u;
}
