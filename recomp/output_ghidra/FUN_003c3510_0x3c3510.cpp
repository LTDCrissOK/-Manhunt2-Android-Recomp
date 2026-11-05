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

// Function: FUN_003c3510
// Address: 0x3c3510 - 0x3c3511
void FUN_003c3510_0x3c3510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_003c3510_0x3c3510");
#endif

    ctx->pc = 0x3c3510u;

    // 0x3c3510: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x3c3510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
    ctx->pc = 0x3c3511u;
}
