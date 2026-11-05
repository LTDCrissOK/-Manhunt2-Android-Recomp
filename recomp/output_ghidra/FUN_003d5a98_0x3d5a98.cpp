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

// Function: FUN_003d5a98
// Address: 0x3d5a98 - 0x3d5a9a
void FUN_003d5a98_0x3d5a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_003d5a98_0x3d5a98");
#endif

    ctx->pc = 0x3d5a98u;

    // 0x3d5a98: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3d5a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    ctx->pc = 0x3d5a9au;
}
