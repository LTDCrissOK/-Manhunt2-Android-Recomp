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

// Function: FUN_003cda60
// Address: 0x3cda60 - 0x3cda62
void FUN_003cda60_0x3cda60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_003cda60_0x3cda60");
#endif

    ctx->pc = 0x3cda60u;

    // 0x3cda60: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3cda60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    ctx->pc = 0x3cda62u;
}
