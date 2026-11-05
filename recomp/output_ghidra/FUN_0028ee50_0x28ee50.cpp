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

// Function: FUN_0028ee50
// Address: 0x28ee50 - 0x28ee51
void FUN_0028ee50_0x28ee50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0028ee50_0x28ee50");
#endif

    ctx->pc = 0x28ee50u;

    // 0x28ee50: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x28ee50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    ctx->pc = 0x28ee51u;
}
