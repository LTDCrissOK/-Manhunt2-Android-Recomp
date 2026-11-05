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

// Function: FUN_0010000c
// Address: 0x10000c - 0x100010
void FUN_0010000c_0x10000c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010000c_0x10000c");
#endif

    ctx->pc = 0x10000cu;

    // 0x10000c: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x10000cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x100010u;
}
