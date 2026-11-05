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

// Function: FUN_002bcbf0
// Address: 0x2bcbf0 - 0x2bcbf1
void FUN_002bcbf0_0x2bcbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002bcbf0_0x2bcbf0");
#endif

    ctx->pc = 0x2bcbf0u;

    // 0x2bcbf0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x2bcbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    ctx->pc = 0x2bcbf1u;
}
