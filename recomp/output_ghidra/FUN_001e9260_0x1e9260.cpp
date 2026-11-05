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

// Function: FUN_001e9260
// Address: 0x1e9260 - 0x1e9261
void FUN_001e9260_0x1e9260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e9260_0x1e9260");
#endif

    ctx->pc = 0x1e9260u;

    // 0x1e9260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e9260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    ctx->pc = 0x1e9261u;
}
