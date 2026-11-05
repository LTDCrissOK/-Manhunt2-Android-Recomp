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

// Function: FUN_0035e978
// Address: 0x35e978 - 0x35e979
void FUN_0035e978_0x35e978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0035e978_0x35e978");
#endif

    ctx->pc = 0x35e978u;

    // 0x35e978: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x35e978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    ctx->pc = 0x35e979u;
}
