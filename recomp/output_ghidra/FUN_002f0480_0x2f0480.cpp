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

// Function: FUN_002f0480
// Address: 0x2f0480 - 0x2f0481
void FUN_002f0480_0x2f0480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002f0480_0x2f0480");
#endif

    ctx->pc = 0x2f0480u;

    // 0x2f0480: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x2f0480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    ctx->pc = 0x2f0481u;
}
