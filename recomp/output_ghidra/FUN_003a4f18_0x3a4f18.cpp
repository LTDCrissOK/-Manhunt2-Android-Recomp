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

// Function: FUN_003a4f18
// Address: 0x3a4f18 - 0x3a4f19
void FUN_003a4f18_0x3a4f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_003a4f18_0x3a4f18");
#endif

    ctx->pc = 0x3a4f18u;

    // 0x3a4f18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3a4f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    ctx->pc = 0x3a4f19u;
}
