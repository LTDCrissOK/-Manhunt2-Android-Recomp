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

// Function: FUN_001bf890
// Address: 0x1bf890 - 0x1bf891
void FUN_001bf890_0x1bf890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bf890_0x1bf890");
#endif

    ctx->pc = 0x1bf890u;

    // 0x1bf890: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1bf890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    ctx->pc = 0x1bf891u;
}
