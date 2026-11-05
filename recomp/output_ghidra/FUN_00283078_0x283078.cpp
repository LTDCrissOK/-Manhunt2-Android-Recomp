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

// Function: FUN_00283078
// Address: 0x283078 - 0x28307a
void FUN_00283078_0x283078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00283078_0x283078");
#endif

    ctx->pc = 0x283078u;

    // 0x283078: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x283078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    ctx->pc = 0x28307au;
}
