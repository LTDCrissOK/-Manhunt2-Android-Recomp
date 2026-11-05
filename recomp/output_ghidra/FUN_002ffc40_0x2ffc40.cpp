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

// Function: FUN_002ffc40
// Address: 0x2ffc40 - 0x2ffc41
void FUN_002ffc40_0x2ffc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002ffc40_0x2ffc40");
#endif

    ctx->pc = 0x2ffc40u;

    // 0x2ffc40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ffc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    ctx->pc = 0x2ffc41u;
}
