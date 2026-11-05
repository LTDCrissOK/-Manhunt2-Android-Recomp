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

// Function: FUN_002d4b38
// Address: 0x2d4b38 - 0x2d4b39
void FUN_002d4b38_0x2d4b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002d4b38_0x2d4b38");
#endif

    ctx->pc = 0x2d4b38u;

    // 0x2d4b38: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2d4b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    ctx->pc = 0x2d4b39u;
}
