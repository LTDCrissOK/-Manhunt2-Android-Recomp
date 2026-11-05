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

// Function: FUN_001e5a18
// Address: 0x1e5a18 - 0x1e5a1a
void FUN_001e5a18_0x1e5a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e5a18_0x1e5a18");
#endif

    ctx->pc = 0x1e5a18u;

    // 0x1e5a18: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1e5a18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    ctx->pc = 0x1e5a1au;
}
