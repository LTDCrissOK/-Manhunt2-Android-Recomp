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

// Function: FUN_003d4c40
// Address: 0x3d4c40 - 0x3d4c42
void FUN_003d4c40_0x3d4c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_003d4c40_0x3d4c40");
#endif

    ctx->pc = 0x3d4c40u;

    // 0x3d4c40: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3d4c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    ctx->pc = 0x3d4c42u;
}
