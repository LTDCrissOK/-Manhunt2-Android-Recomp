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

// Function: FUN_00245a90
// Address: 0x245a90 - 0x245a91
void FUN_00245a90_0x245a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00245a90_0x245a90");
#endif

    ctx->pc = 0x245a90u;

    // 0x245a90: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x245a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    ctx->pc = 0x245a91u;
}
