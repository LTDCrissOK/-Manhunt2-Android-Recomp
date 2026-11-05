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

// Function: FUN_003dc500
// Address: 0x3dc500 - 0x3dc501
void FUN_003dc500_0x3dc500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_003dc500_0x3dc500");
#endif

    ctx->pc = 0x3dc500u;

    // 0x3dc500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dc500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    ctx->pc = 0x3dc501u;
}
