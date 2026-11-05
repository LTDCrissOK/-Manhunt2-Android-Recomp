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

// Function: FUN_003d4c68
// Address: 0x3d4c68 - 0x3d4c6a
void FUN_003d4c68_0x3d4c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_003d4c68_0x3d4c68");
#endif

    ctx->pc = 0x3d4c68u;

    // 0x3d4c68: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x3d4c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    ctx->pc = 0x3d4c6au;
}
