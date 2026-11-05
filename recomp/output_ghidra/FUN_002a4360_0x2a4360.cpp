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

// Function: FUN_002a4360
// Address: 0x2a4360 - 0x2a4361
void FUN_002a4360_0x2a4360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002a4360_0x2a4360");
#endif

    ctx->pc = 0x2a4360u;

    // 0x2a4360: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a4360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    ctx->pc = 0x2a4361u;
}
