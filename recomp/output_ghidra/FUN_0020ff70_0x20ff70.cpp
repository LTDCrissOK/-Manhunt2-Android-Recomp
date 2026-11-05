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

// Function: FUN_0020ff70
// Address: 0x20ff70 - 0x20ff72
void FUN_0020ff70_0x20ff70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020ff70_0x20ff70");
#endif

    ctx->pc = 0x20ff70u;

    // 0x20ff70: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x20ff70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    ctx->pc = 0x20ff72u;
}
