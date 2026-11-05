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

// Function: FUN_003daf00
// Address: 0x3daf00 - 0x3daf01
void FUN_003daf00_0x3daf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_003daf00_0x3daf00");
#endif

    ctx->pc = 0x3daf00u;

    // 0x3daf00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3daf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    ctx->pc = 0x3daf01u;
}
