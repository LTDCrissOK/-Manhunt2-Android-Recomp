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

// Function: FUN_0013ffb8
// Address: 0x13ffb8 - 0x13ffb9
void FUN_0013ffb8_0x13ffb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013ffb8_0x13ffb8");
#endif

    ctx->pc = 0x13ffb8u;

    // 0x13ffb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13ffb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    ctx->pc = 0x13ffb9u;
}
