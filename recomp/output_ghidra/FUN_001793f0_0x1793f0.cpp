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

// Function: FUN_001793f0
// Address: 0x1793f0 - 0x1793f1
void FUN_001793f0_0x1793f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001793f0_0x1793f0");
#endif

    ctx->pc = 0x1793f0u;

    // 0x1793f0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1793f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    ctx->pc = 0x1793f1u;
}
