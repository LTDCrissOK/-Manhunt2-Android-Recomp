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

// Function: FUN_003bb310
// Address: 0x3bb310 - 0x3bb311
void FUN_003bb310_0x3bb310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_003bb310_0x3bb310");
#endif

    ctx->pc = 0x3bb310u;

    // 0x3bb310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3bb310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    ctx->pc = 0x3bb311u;
}
