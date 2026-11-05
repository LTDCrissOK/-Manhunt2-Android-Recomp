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

// Function: FUN_002a2488
// Address: 0x2a2488 - 0x2a2489
void FUN_002a2488_0x2a2488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002a2488_0x2a2488");
#endif

    ctx->pc = 0x2a2488u;

    // 0x2a2488: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x2a2488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
    ctx->pc = 0x2a2489u;
}
