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

// Function: FUN_001f0420
// Address: 0x1f0420 - 0x1f0421
void FUN_001f0420_0x1f0420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f0420_0x1f0420");
#endif

    ctx->pc = 0x1f0420u;

    // 0x1f0420: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f0420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    ctx->pc = 0x1f0421u;
}
