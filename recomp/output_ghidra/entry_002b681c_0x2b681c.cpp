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

// Function: entry_002b681c
// Address: 0x2b681c - 0x2b6826
void entry_002b681c_0x2b681c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b681c_0x2b681c");
#endif

    ctx->pc = 0x2b681cu;

    // 0x2b681c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b681cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6820: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b6820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b6824: 0xae0358fc  sw          $v1, 0x58FC($s0)
    ctx->pc = 0x2b6824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22780), GPR_U32(ctx, 3));
    ctx->pc = 0x2b6826u;
}
