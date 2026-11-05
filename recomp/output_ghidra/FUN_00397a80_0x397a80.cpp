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

// Function: FUN_00397a80
// Address: 0x397a80 - 0x397a82
void FUN_00397a80_0x397a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00397a80_0x397a80");
#endif

    ctx->pc = 0x397a80u;

    // 0x397a80: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x397a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x397a82u;
}
