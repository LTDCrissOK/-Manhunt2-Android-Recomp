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

// Function: FUN_0035cb58
// Address: 0x35cb58 - 0x35cb59
void FUN_0035cb58_0x35cb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0035cb58_0x35cb58");
#endif

    ctx->pc = 0x35cb58u;

    // 0x35cb58: 0x27bdfc40  addiu       $sp, $sp, -0x3C0
    ctx->pc = 0x35cb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966336));
    ctx->pc = 0x35cb59u;
}
