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

// Function: FUN_0035baf8
// Address: 0x35baf8 - 0x35baf9
void FUN_0035baf8_0x35baf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0035baf8_0x35baf8");
#endif

    ctx->pc = 0x35baf8u;

    // 0x35baf8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x35baf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    ctx->pc = 0x35baf9u;
}
