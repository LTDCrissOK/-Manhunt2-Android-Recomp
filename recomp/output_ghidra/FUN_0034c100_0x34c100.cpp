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

// Function: FUN_0034c100
// Address: 0x34c100 - 0x34c101
void FUN_0034c100_0x34c100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0034c100_0x34c100");
#endif

    ctx->pc = 0x34c100u;

    // 0x34c100: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x34c100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    ctx->pc = 0x34c101u;
}
