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

// Function: FUN_0020baf0
// Address: 0x20baf0 - 0x20baf2
void FUN_0020baf0_0x20baf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020baf0_0x20baf0");
#endif

    ctx->pc = 0x20baf0u;

    // 0x20baf0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x20baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    ctx->pc = 0x20baf2u;
}
