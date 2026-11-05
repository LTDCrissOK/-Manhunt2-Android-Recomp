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

// Function: FUN_001d9600
// Address: 0x1d9600 - 0x1d9601
void FUN_001d9600_0x1d9600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d9600_0x1d9600");
#endif

    ctx->pc = 0x1d9600u;

    // 0x1d9600: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1d9600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    ctx->pc = 0x1d9601u;
}
