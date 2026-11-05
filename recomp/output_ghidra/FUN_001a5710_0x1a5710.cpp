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

// Function: FUN_001a5710
// Address: 0x1a5710 - 0x1a5711
void FUN_001a5710_0x1a5710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5710_0x1a5710");
#endif

    ctx->pc = 0x1a5710u;

    // 0x1a5710: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a5710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    ctx->pc = 0x1a5711u;
}
