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

// Function: FUN_0029ca58
// Address: 0x29ca58 - 0x29ca59
void FUN_0029ca58_0x29ca58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0029ca58_0x29ca58");
#endif

    ctx->pc = 0x29ca58u;

    // 0x29ca58: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x29ca58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    ctx->pc = 0x29ca59u;
}
