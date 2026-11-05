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

// Function: FUN_002196f8
// Address: 0x2196f8 - 0x2196f9
void FUN_002196f8_0x2196f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002196f8_0x2196f8");
#endif

    ctx->pc = 0x2196f8u;

    // 0x2196f8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2196f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    ctx->pc = 0x2196f9u;
}
