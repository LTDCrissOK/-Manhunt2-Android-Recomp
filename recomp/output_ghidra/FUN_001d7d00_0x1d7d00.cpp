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

// Function: FUN_001d7d00
// Address: 0x1d7d00 - 0x1d7d01
void FUN_001d7d00_0x1d7d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d7d00_0x1d7d00");
#endif

    ctx->pc = 0x1d7d00u;

    // 0x1d7d00: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x1d7d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    ctx->pc = 0x1d7d01u;
}
