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

// Function: FUN_00282b00
// Address: 0x282b00 - 0x282b01
void FUN_00282b00_0x282b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00282b00_0x282b00");
#endif

    ctx->pc = 0x282b00u;

    // 0x282b00: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x282b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
    ctx->pc = 0x282b01u;
}
