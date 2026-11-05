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

// Function: FUN_002b0208
// Address: 0x2b0208 - 0x2b0209
void FUN_002b0208_0x2b0208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002b0208_0x2b0208");
#endif

    ctx->pc = 0x2b0208u;

    // 0x2b0208: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2b0208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    ctx->pc = 0x2b0209u;
}
