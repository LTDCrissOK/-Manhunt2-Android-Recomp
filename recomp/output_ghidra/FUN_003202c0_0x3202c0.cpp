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

// Function: FUN_003202c0
// Address: 0x3202c0 - 0x3202c1
void FUN_003202c0_0x3202c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_003202c0_0x3202c0");
#endif

    ctx->pc = 0x3202c0u;

    // 0x3202c0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3202c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    ctx->pc = 0x3202c1u;
}
