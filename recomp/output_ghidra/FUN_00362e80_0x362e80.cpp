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

// Function: FUN_00362e80
// Address: 0x362e80 - 0x362e81
void FUN_00362e80_0x362e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00362e80_0x362e80");
#endif

    ctx->pc = 0x362e80u;

    // 0x362e80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x362e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    ctx->pc = 0x362e81u;
}
