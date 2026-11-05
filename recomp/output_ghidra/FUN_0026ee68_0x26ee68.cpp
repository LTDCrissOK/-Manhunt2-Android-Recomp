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

// Function: FUN_0026ee68
// Address: 0x26ee68 - 0x26ee69
void FUN_0026ee68_0x26ee68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0026ee68_0x26ee68");
#endif

    ctx->pc = 0x26ee68u;

    // 0x26ee68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26ee68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    ctx->pc = 0x26ee69u;
}
