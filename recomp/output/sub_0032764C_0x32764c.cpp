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

// Function: sub_0032764C
// Address: 0x32764c - 0x327650
void sub_0032764C_0x32764c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032764C_0x32764c");
#endif

    ctx->pc = 0x32764cu;

    // 0x32764c: 0xae000498  sw          $zero, 0x498($s0)
    ctx->pc = 0x32764cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 0));
    ctx->pc = 0x327650u;
}
