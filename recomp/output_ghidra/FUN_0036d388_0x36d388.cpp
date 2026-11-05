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

// Function: FUN_0036d388
// Address: 0x36d388 - 0x36d389
void FUN_0036d388_0x36d388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0036d388_0x36d388");
#endif

    ctx->pc = 0x36d388u;

    // 0x36d388: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x36d388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
    ctx->pc = 0x36d389u;
}
