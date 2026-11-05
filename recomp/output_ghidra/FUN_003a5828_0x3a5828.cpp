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

// Function: FUN_003a5828
// Address: 0x3a5828 - 0x3a582a
void FUN_003a5828_0x3a5828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_003a5828_0x3a5828");
#endif

    ctx->pc = 0x3a5828u;

    // 0x3a5828: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a5828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x3a582au;
}
