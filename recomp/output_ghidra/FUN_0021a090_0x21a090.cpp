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

// Function: FUN_0021a090
// Address: 0x21a090 - 0x21a091
void FUN_0021a090_0x21a090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021a090_0x21a090");
#endif

    ctx->pc = 0x21a090u;

    // 0x21a090: 0x27bdfc80  addiu       $sp, $sp, -0x380
    ctx->pc = 0x21a090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966400));
    ctx->pc = 0x21a091u;
}
