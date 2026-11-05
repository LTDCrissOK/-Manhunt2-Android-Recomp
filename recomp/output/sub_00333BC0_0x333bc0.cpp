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

// Function: sub_00333BC0
// Address: 0x333bc0 - 0x333bc4
void sub_00333BC0_0x333bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333BC0_0x333bc0");
#endif

    ctx->pc = 0x333bc0u;

    // 0x333bc0: 0xae200498  sw          $zero, 0x498($s1)
    ctx->pc = 0x333bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1176), GPR_U32(ctx, 0));
    ctx->pc = 0x333bc4u;
}
