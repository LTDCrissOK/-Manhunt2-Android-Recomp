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

// Function: FUN_00207ff8
// Address: 0x207ff8 - 0x207ff9
void FUN_00207ff8_0x207ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00207ff8_0x207ff8");
#endif

    ctx->pc = 0x207ff8u;

    // 0x207ff8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x207ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    ctx->pc = 0x207ff9u;
}
