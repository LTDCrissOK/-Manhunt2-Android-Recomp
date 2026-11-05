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

// Function: FUN_00110230
// Address: 0x110230 - 0x110231
void FUN_00110230_0x110230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00110230_0x110230");
#endif

    ctx->pc = 0x110230u;

    // 0x110230: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x110230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    ctx->pc = 0x110231u;
}
