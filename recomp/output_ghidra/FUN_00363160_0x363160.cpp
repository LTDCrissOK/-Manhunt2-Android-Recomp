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

// Function: FUN_00363160
// Address: 0x363160 - 0x363161
void FUN_00363160_0x363160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00363160_0x363160");
#endif

    ctx->pc = 0x363160u;

    // 0x363160: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x363160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    ctx->pc = 0x363161u;
}
