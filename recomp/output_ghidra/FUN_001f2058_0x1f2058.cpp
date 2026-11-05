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

// Function: FUN_001f2058
// Address: 0x1f2058 - 0x1f2059
void FUN_001f2058_0x1f2058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f2058_0x1f2058");
#endif

    ctx->pc = 0x1f2058u;

    // 0x1f2058: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1f2058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    ctx->pc = 0x1f2059u;
}
