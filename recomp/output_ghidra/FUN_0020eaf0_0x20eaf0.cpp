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

// Function: FUN_0020eaf0
// Address: 0x20eaf0 - 0x20eaf1
void FUN_0020eaf0_0x20eaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020eaf0_0x20eaf0");
#endif

    ctx->pc = 0x20eaf0u;

    // 0x20eaf0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x20eaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    ctx->pc = 0x20eaf1u;
}
