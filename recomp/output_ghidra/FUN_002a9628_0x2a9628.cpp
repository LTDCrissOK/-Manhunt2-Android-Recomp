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

// Function: FUN_002a9628
// Address: 0x2a9628 - 0x2a962a
void FUN_002a9628_0x2a9628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002a9628_0x2a9628");
#endif

    ctx->pc = 0x2a9628u;

    // 0x2a9628: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2a9628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    ctx->pc = 0x2a962au;
}
