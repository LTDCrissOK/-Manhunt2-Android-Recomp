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

// Function: sub_00333EE0
// Address: 0x333ee0 - 0x333ee4
void sub_00333EE0_0x333ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333EE0_0x333ee0");
#endif

    ctx->pc = 0x333ee0u;

    // 0x333ee0: 0xae800498  sw          $zero, 0x498($s4)
    ctx->pc = 0x333ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1176), GPR_U32(ctx, 0));
    ctx->pc = 0x333ee4u;
}
