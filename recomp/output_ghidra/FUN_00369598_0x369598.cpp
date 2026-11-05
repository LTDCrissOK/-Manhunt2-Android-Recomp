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

// Function: FUN_00369598
// Address: 0x369598 - 0x36959a
void FUN_00369598_0x369598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00369598_0x369598");
#endif

    ctx->pc = 0x369598u;

    // 0x369598: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x369598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    ctx->pc = 0x36959au;
}
