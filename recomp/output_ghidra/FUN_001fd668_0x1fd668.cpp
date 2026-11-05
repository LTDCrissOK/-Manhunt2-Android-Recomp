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

// Function: FUN_001fd668
// Address: 0x1fd668 - 0x1fd669
void FUN_001fd668_0x1fd668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fd668_0x1fd668");
#endif

    ctx->pc = 0x1fd668u;

    // 0x1fd668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    ctx->pc = 0x1fd669u;
}
