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

// Function: FUN_00122b78
// Address: 0x122b78 - 0x122b79
void FUN_00122b78_0x122b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00122b78_0x122b78");
#endif

    ctx->pc = 0x122b78u;

    // 0x122b78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x122b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    ctx->pc = 0x122b79u;
}
