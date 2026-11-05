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

// Function: FUN_001e3058
// Address: 0x1e3058 - 0x1e3059
void FUN_001e3058_0x1e3058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e3058_0x1e3058");
#endif

    ctx->pc = 0x1e3058u;

    // 0x1e3058: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1e3058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    ctx->pc = 0x1e3059u;
}
