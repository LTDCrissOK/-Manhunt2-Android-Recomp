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

// Function: FUN_0030dce8
// Address: 0x30dce8 - 0x30dce9
void FUN_0030dce8_0x30dce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0030dce8_0x30dce8");
#endif

    ctx->pc = 0x30dce8u;

    // 0x30dce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30dce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    ctx->pc = 0x30dce9u;
}
