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

// Function: FUN_002bf728
// Address: 0x2bf728 - 0x2bf729
void FUN_002bf728_0x2bf728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002bf728_0x2bf728");
#endif

    ctx->pc = 0x2bf728u;

    // 0x2bf728: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2bf728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    ctx->pc = 0x2bf729u;
}
