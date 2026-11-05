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

// Function: FUN_002ff478
// Address: 0x2ff478 - 0x2ff479
void FUN_002ff478_0x2ff478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002ff478_0x2ff478");
#endif

    ctx->pc = 0x2ff478u;

    // 0x2ff478: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ff478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    ctx->pc = 0x2ff479u;
}
