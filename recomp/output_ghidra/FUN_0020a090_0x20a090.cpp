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

// Function: FUN_0020a090
// Address: 0x20a090 - 0x20a092
void FUN_0020a090_0x20a090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020a090_0x20a090");
#endif

    ctx->pc = 0x20a090u;

    // 0x20a090: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x20a090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    ctx->pc = 0x20a092u;
}
