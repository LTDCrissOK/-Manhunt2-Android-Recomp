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

// Function: FUN_0011cad8
// Address: 0x11cad8 - 0x11cad9
void FUN_0011cad8_0x11cad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011cad8_0x11cad8");
#endif

    ctx->pc = 0x11cad8u;

    // 0x11cad8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11cad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    ctx->pc = 0x11cad9u;
}
