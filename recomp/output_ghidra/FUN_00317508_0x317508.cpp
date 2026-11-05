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

// Function: FUN_00317508
// Address: 0x317508 - 0x317509
void FUN_00317508_0x317508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00317508_0x317508");
#endif

    ctx->pc = 0x317508u;

    // 0x317508: 0x27bdf7a0  addiu       $sp, $sp, -0x860
    ctx->pc = 0x317508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965152));
    ctx->pc = 0x317509u;
}
