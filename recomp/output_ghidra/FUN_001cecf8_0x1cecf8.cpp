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

// Function: FUN_001cecf8
// Address: 0x1cecf8 - 0x1cecf9
void FUN_001cecf8_0x1cecf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cecf8_0x1cecf8");
#endif

    ctx->pc = 0x1cecf8u;

    // 0x1cecf8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1cecf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    ctx->pc = 0x1cecf9u;
}
