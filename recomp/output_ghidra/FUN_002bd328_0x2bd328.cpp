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

// Function: FUN_002bd328
// Address: 0x2bd328 - 0x2bd329
void FUN_002bd328_0x2bd328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002bd328_0x2bd328");
#endif

    ctx->pc = 0x2bd328u;

    // 0x2bd328: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2bd328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    ctx->pc = 0x2bd329u;
}
