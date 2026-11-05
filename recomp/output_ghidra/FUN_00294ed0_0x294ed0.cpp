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

// Function: FUN_00294ed0
// Address: 0x294ed0 - 0x294ed2
void FUN_00294ed0_0x294ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00294ed0_0x294ed0");
#endif

    ctx->pc = 0x294ed0u;

    // 0x294ed0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x294ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    ctx->pc = 0x294ed2u;
}
