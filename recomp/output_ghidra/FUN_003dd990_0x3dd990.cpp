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

// Function: FUN_003dd990
// Address: 0x3dd990 - 0x3dd992
void FUN_003dd990_0x3dd990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_003dd990_0x3dd990");
#endif

    ctx->pc = 0x3dd990u;

    // 0x3dd990: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3dd990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    ctx->pc = 0x3dd992u;
}
