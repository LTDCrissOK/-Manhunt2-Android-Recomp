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

// Function: FUN_0018aa38
// Address: 0x18aa38 - 0x18aa39
void FUN_0018aa38_0x18aa38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018aa38_0x18aa38");
#endif

    ctx->pc = 0x18aa38u;

    // 0x18aa38: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x18aa38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    ctx->pc = 0x18aa39u;
}
