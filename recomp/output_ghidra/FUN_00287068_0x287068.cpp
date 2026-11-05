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

// Function: FUN_00287068
// Address: 0x287068 - 0x287069
void FUN_00287068_0x287068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00287068_0x287068");
#endif

    ctx->pc = 0x287068u;

    // 0x287068: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x287068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    ctx->pc = 0x287069u;
}
