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

// Function: entry_0015607c
// Address: 0x15607c - 0x156084
void entry_0015607c_0x15607c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015607c_0x15607c");
#endif

    ctx->pc = 0x15607cu;

    // 0x15607c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15607cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156080: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x156080u;
    {
        const bool branch_taken_0x156080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156080) {
            ctx->pc = 0x156094u;
            return;
        }
    }
    ctx->pc = 0x156088u;
}
