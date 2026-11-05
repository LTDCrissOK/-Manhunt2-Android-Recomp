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

// Function: FUN_00315e00
// Address: 0x315e00 - 0x315e02
void FUN_00315e00_0x315e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00315e00_0x315e00");
#endif

    ctx->pc = 0x315e00u;

    // 0x315e00: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x315e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    ctx->pc = 0x315e02u;
}
