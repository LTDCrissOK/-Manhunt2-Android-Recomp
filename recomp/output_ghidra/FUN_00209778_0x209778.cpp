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

// Function: FUN_00209778
// Address: 0x209778 - 0x20977a
void FUN_00209778_0x209778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00209778_0x209778");
#endif

    ctx->pc = 0x209778u;

    // 0x209778: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x209778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    ctx->pc = 0x20977au;
}
