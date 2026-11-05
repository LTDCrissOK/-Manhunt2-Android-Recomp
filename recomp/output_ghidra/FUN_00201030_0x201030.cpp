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

// Function: FUN_00201030
// Address: 0x201030 - 0x201031
void FUN_00201030_0x201030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00201030_0x201030");
#endif

    ctx->pc = 0x201030u;

    // 0x201030: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x201030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    ctx->pc = 0x201031u;
}
