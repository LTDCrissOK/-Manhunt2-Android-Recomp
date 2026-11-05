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

// Function: FUN_001c7ac0
// Address: 0x1c7ac0 - 0x1c7ac4
void FUN_001c7ac0_0x1c7ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c7ac0_0x1c7ac0");
#endif

    ctx->pc = 0x1c7ac0u;

    // 0x1c7ac0: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x1c7ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    ctx->pc = 0x1c7ac4u;
}
