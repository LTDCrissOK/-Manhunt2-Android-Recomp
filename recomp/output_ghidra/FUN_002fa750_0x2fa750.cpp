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

// Function: FUN_002fa750
// Address: 0x2fa750 - 0x2fa751
void FUN_002fa750_0x2fa750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002fa750_0x2fa750");
#endif

    ctx->pc = 0x2fa750u;

    // 0x2fa750: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2fa750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    ctx->pc = 0x2fa751u;
}
