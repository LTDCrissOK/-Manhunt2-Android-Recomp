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

// Function: FUN_00101c20
// Address: 0x101c20 - 0x101c21
void FUN_00101c20_0x101c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00101c20_0x101c20");
#endif

    ctx->pc = 0x101c20u;

    // 0x101c20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x101c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    ctx->pc = 0x101c21u;
}
