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

// Function: FUN_0033ab80
// Address: 0x33ab80 - 0x33ab81
void FUN_0033ab80_0x33ab80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0033ab80_0x33ab80");
#endif

    ctx->pc = 0x33ab80u;

    // 0x33ab80: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x33ab80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    ctx->pc = 0x33ab81u;
}
