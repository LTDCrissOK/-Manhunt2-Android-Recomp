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

// Function: FUN_002f1788
// Address: 0x2f1788 - 0x2f1789
void FUN_002f1788_0x2f1788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002f1788_0x2f1788");
#endif

    ctx->pc = 0x2f1788u;

    // 0x2f1788: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x2f1788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    ctx->pc = 0x2f1789u;
}
