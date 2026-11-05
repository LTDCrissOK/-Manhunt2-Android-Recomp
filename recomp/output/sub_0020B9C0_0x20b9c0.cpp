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

// Function: sub_0020B9C0
// Address: 0x20b9c0 - 0x20b9c4
void sub_0020B9C0_0x20b9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B9C0_0x20b9c0");
#endif

    ctx->pc = 0x20b9c0u;

    // 0x20b9c0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x20b9c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x20b9c4u;
}
