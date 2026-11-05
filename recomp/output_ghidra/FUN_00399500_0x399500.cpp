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

// Function: FUN_00399500
// Address: 0x399500 - 0x399502
void FUN_00399500_0x399500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00399500_0x399500");
#endif

    ctx->pc = 0x399500u;

    // 0x399500: 0x3c0d0041  lui         $t5, 0x41
    ctx->pc = 0x399500u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x399502u;
}
