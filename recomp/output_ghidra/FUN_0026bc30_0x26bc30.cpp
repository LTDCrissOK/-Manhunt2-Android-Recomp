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

// Function: FUN_0026bc30
// Address: 0x26bc30 - 0x26bc31
void FUN_0026bc30_0x26bc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0026bc30_0x26bc30");
#endif

    ctx->pc = 0x26bc30u;

    // 0x26bc30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26bc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    ctx->pc = 0x26bc31u;
}
