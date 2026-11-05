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

// Function: FUN_00386908
// Address: 0x386908 - 0x386909
void FUN_00386908_0x386908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00386908_0x386908");
#endif

    ctx->pc = 0x386908u;

    // 0x386908: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x386908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    ctx->pc = 0x386909u;
}
