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

// Function: FUN_00358ea0
// Address: 0x358ea0 - 0x358ea1
void FUN_00358ea0_0x358ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00358ea0_0x358ea0");
#endif

    ctx->pc = 0x358ea0u;

    // 0x358ea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    ctx->pc = 0x358ea1u;
}
