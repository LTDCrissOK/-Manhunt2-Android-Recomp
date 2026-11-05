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

// Function: FUN_00291220
// Address: 0x291220 - 0x291221
void FUN_00291220_0x291220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00291220_0x291220");
#endif

    ctx->pc = 0x291220u;

    // 0x291220: 0x27bdf700  addiu       $sp, $sp, -0x900
    ctx->pc = 0x291220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964992));
    ctx->pc = 0x291221u;
}
