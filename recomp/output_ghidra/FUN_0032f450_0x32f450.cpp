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

// Function: FUN_0032f450
// Address: 0x32f450 - 0x32f451
void FUN_0032f450_0x32f450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0032f450_0x32f450");
#endif

    ctx->pc = 0x32f450u;

    // 0x32f450: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x32f450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    ctx->pc = 0x32f451u;
}
