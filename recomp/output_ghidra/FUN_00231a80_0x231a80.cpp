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

// Function: FUN_00231a80
// Address: 0x231a80 - 0x231a81
void FUN_00231a80_0x231a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00231a80_0x231a80");
#endif

    ctx->pc = 0x231a80u;

    // 0x231a80: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x231a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    ctx->pc = 0x231a81u;
}
