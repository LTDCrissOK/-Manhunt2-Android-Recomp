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

// Function: FUN_00344458
// Address: 0x344458 - 0x344459
void FUN_00344458_0x344458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00344458_0x344458");
#endif

    ctx->pc = 0x344458u;

    // 0x344458: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x344458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    ctx->pc = 0x344459u;
}
