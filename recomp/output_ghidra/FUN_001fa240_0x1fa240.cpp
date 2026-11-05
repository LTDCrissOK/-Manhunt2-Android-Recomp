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

// Function: FUN_001fa240
// Address: 0x1fa240 - 0x1fa242
void FUN_001fa240_0x1fa240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fa240_0x1fa240");
#endif

    ctx->pc = 0x1fa240u;

    // 0x1fa240: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1fa240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    ctx->pc = 0x1fa242u;
}
