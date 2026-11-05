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

// Function: FUN_00360898
// Address: 0x360898 - 0x360899
void FUN_00360898_0x360898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00360898_0x360898");
#endif

    ctx->pc = 0x360898u;

    // 0x360898: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x360898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    ctx->pc = 0x360899u;
}
