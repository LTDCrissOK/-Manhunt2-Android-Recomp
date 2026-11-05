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

// Function: FUN_00179ae8
// Address: 0x179ae8 - 0x179ae9
void FUN_00179ae8_0x179ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00179ae8_0x179ae8");
#endif

    ctx->pc = 0x179ae8u;

    // 0x179ae8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x179ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    ctx->pc = 0x179ae9u;
}
