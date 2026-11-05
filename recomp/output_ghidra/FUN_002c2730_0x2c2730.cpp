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

// Function: FUN_002c2730
// Address: 0x2c2730 - 0x2c2731
void FUN_002c2730_0x2c2730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002c2730_0x2c2730");
#endif

    ctx->pc = 0x2c2730u;

    // 0x2c2730: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2c2730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    ctx->pc = 0x2c2731u;
}
