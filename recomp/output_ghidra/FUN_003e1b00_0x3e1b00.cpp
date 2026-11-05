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

// Function: FUN_003e1b00
// Address: 0x3e1b00 - 0x3e1b01
void FUN_003e1b00_0x3e1b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_003e1b00_0x3e1b00");
#endif

    ctx->pc = 0x3e1b00u;

    // 0x3e1b00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e1b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    ctx->pc = 0x3e1b01u;
}
