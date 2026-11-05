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

// Function: FUN_003d0af0
// Address: 0x3d0af0 - 0x3d0af1
void FUN_003d0af0_0x3d0af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_003d0af0_0x3d0af0");
#endif

    ctx->pc = 0x3d0af0u;

    // 0x3d0af0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3d0af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    ctx->pc = 0x3d0af1u;
}
