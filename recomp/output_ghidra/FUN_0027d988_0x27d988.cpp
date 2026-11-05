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

// Function: FUN_0027d988
// Address: 0x27d988 - 0x27d989
void FUN_0027d988_0x27d988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0027d988_0x27d988");
#endif

    ctx->pc = 0x27d988u;

    // 0x27d988: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x27d988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    ctx->pc = 0x27d989u;
}
