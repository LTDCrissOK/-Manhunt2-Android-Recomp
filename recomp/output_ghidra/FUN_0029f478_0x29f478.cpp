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

// Function: FUN_0029f478
// Address: 0x29f478 - 0x29f479
void FUN_0029f478_0x29f478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0029f478_0x29f478");
#endif

    ctx->pc = 0x29f478u;

    // 0x29f478: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x29f478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
    ctx->pc = 0x29f479u;
}
