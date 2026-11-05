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

// Function: FUN_00272368
// Address: 0x272368 - 0x27236a
void FUN_00272368_0x272368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00272368_0x272368");
#endif

    ctx->pc = 0x272368u;

    // 0x272368: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x272368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    ctx->pc = 0x27236au;
}
