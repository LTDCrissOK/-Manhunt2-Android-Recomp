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

// Function: FUN_001bf010
// Address: 0x1bf010 - 0x1bf011
void FUN_001bf010_0x1bf010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bf010_0x1bf010");
#endif

    ctx->pc = 0x1bf010u;

    // 0x1bf010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bf010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    ctx->pc = 0x1bf011u;
}
