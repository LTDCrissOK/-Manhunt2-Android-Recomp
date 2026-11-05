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

// Function: FUN_00384810
// Address: 0x384810 - 0x384812
void FUN_00384810_0x384810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00384810_0x384810");
#endif

    ctx->pc = 0x384810u;

    // 0x384810: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x384810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    ctx->pc = 0x384812u;
}
