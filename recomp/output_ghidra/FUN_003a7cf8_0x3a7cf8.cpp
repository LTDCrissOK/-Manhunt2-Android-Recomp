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

// Function: FUN_003a7cf8
// Address: 0x3a7cf8 - 0x3a7cfa
void FUN_003a7cf8_0x3a7cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_003a7cf8_0x3a7cf8");
#endif

    ctx->pc = 0x3a7cf8u;

    // 0x3a7cf8: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x3a7cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
    ctx->pc = 0x3a7cfau;
}
