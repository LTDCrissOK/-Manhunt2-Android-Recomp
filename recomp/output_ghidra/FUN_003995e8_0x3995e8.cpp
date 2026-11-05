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

// Function: FUN_003995e8
// Address: 0x3995e8 - 0x3995ea
void FUN_003995e8_0x3995e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_003995e8_0x3995e8");
#endif

    ctx->pc = 0x3995e8u;

    // 0x3995e8: 0x3c0d0041  lui         $t5, 0x41
    ctx->pc = 0x3995e8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x3995eau;
}
