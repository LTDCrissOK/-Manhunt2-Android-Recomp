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

// Function: FUN_00291380
// Address: 0x291380 - 0x291381
void FUN_00291380_0x291380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00291380_0x291380");
#endif

    ctx->pc = 0x291380u;

    // 0x291380: 0x27bdf230  addiu       $sp, $sp, -0xDD0
    ctx->pc = 0x291380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963760));
    ctx->pc = 0x291381u;
}
