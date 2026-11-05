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

// Function: FUN_002b42f8
// Address: 0x2b42f8 - 0x2b42fa
void FUN_002b42f8_0x2b42f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002b42f8_0x2b42f8");
#endif

    ctx->pc = 0x2b42f8u;

    // 0x2b42f8: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2b42f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    ctx->pc = 0x2b42fau;
}
