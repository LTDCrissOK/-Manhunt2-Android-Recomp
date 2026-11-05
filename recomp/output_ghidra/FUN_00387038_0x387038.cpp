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

// Function: FUN_00387038
// Address: 0x387038 - 0x387039
void FUN_00387038_0x387038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00387038_0x387038");
#endif

    ctx->pc = 0x387038u;

    // 0x387038: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x387038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    ctx->pc = 0x387039u;
}
