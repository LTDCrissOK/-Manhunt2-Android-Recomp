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

// Function: FUN_00105a88
// Address: 0x105a88 - 0x105a89
void FUN_00105a88_0x105a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105a88_0x105a88");
#endif

    ctx->pc = 0x105a88u;

    // 0x105a88: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x105a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    ctx->pc = 0x105a89u;
}
