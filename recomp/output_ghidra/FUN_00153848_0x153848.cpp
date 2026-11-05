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

// Function: FUN_00153848
// Address: 0x153848 - 0x153849
void FUN_00153848_0x153848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00153848_0x153848");
#endif

    ctx->pc = 0x153848u;

    // 0x153848: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x153848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    ctx->pc = 0x153849u;
}
