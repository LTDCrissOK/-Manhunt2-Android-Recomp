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

// Function: FUN_00295238
// Address: 0x295238 - 0x29523a
void FUN_00295238_0x295238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00295238_0x295238");
#endif

    ctx->pc = 0x295238u;

    // 0x295238: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x295238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    ctx->pc = 0x29523au;
}
