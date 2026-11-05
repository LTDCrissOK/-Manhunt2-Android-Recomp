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

// Function: FUN_0015624c
// Address: 0x15624c - 0x156250
void FUN_0015624c_0x15624c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015624c_0x15624c");
#endif

    ctx->pc = 0x15624cu;

    // 0x15624c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15624Cu;
    {
        const bool branch_taken_0x15624c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15624c) {
            ctx->pc = 0x156290u;
            return;
        }
    }
    ctx->pc = 0x156254u;
}
