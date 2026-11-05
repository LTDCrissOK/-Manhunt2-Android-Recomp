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

// Function: FUN_00361990
// Address: 0x361990 - 0x361991
void FUN_00361990_0x361990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00361990_0x361990");
#endif

    ctx->pc = 0x361990u;

    // 0x361990: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x361990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    ctx->pc = 0x361991u;
}
