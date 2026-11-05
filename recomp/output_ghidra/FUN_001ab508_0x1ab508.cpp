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

// Function: FUN_001ab508
// Address: 0x1ab508 - 0x1ab509
void FUN_001ab508_0x1ab508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ab508_0x1ab508");
#endif

    ctx->pc = 0x1ab508u;

    // 0x1ab508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    ctx->pc = 0x1ab509u;
}
