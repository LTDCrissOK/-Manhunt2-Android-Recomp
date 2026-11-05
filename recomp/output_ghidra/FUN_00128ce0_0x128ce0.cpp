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

// Function: FUN_00128ce0
// Address: 0x128ce0 - 0x128ce1
void FUN_00128ce0_0x128ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00128ce0_0x128ce0");
#endif

    ctx->pc = 0x128ce0u;

    // 0x128ce0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x128ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    ctx->pc = 0x128ce1u;
}
