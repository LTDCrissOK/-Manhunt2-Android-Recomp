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

// Function: FUN_00125520
// Address: 0x125520 - 0x125522
void FUN_00125520_0x125520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00125520_0x125520");
#endif

    ctx->pc = 0x125520u;

    // 0x125520: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x125520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    ctx->pc = 0x125522u;
}
