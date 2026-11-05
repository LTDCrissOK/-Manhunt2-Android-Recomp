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

// Function: FUN_002a1980
// Address: 0x2a1980 - 0x2a1981
void FUN_002a1980_0x2a1980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002a1980_0x2a1980");
#endif

    ctx->pc = 0x2a1980u;

    // 0x2a1980: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2a1980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    ctx->pc = 0x2a1981u;
}
