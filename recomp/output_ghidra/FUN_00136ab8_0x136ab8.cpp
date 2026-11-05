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

// Function: FUN_00136ab8
// Address: 0x136ab8 - 0x136ab9
void FUN_00136ab8_0x136ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00136ab8_0x136ab8");
#endif

    ctx->pc = 0x136ab8u;

    // 0x136ab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x136ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    ctx->pc = 0x136ab9u;
}
