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

// Function: FUN_003c9540
// Address: 0x3c9540 - 0x3c9542
void FUN_003c9540_0x3c9540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_003c9540_0x3c9540");
#endif

    ctx->pc = 0x3c9540u;

    // 0x3c9540: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3c9540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    ctx->pc = 0x3c9542u;
}
