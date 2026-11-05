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

// Function: FUN_00155b2c
// Address: 0x155b2c - 0x155b30
void FUN_00155b2c_0x155b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00155b2c_0x155b2c");
#endif

    ctx->pc = 0x155b2cu;

    // 0x155b2c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x155b2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x155b30u;
}
