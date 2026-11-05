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

// Function: FUN_00358530
// Address: 0x358530 - 0x358532
void FUN_00358530_0x358530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00358530_0x358530");
#endif

    ctx->pc = 0x358530u;

    // 0x358530: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x358530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    ctx->pc = 0x358532u;
}
