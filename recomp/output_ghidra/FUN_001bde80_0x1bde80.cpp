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

// Function: FUN_001bde80
// Address: 0x1bde80 - 0x1bde81
void FUN_001bde80_0x1bde80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bde80_0x1bde80");
#endif

    ctx->pc = 0x1bde80u;

    // 0x1bde80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1bde80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    ctx->pc = 0x1bde81u;
}
