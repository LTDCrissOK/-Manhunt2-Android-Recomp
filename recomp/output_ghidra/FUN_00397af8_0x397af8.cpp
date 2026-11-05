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

// Function: FUN_00397af8
// Address: 0x397af8 - 0x397afa
void FUN_00397af8_0x397af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00397af8_0x397af8");
#endif

    ctx->pc = 0x397af8u;

    // 0x397af8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x397af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x397afau;
}
