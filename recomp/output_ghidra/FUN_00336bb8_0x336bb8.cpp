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

// Function: FUN_00336bb8
// Address: 0x336bb8 - 0x336bb9
void FUN_00336bb8_0x336bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00336bb8_0x336bb8");
#endif

    ctx->pc = 0x336bb8u;

    // 0x336bb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x336bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    ctx->pc = 0x336bb9u;
}
