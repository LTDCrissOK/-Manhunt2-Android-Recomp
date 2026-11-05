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

// Function: FUN_0017cd20
// Address: 0x17cd20 - 0x17cd21
void FUN_0017cd20_0x17cd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017cd20_0x17cd20");
#endif

    ctx->pc = 0x17cd20u;

    // 0x17cd20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17cd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    ctx->pc = 0x17cd21u;
}
