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

// Function: entry_0015604c
// Address: 0x15604c - 0x156054
void entry_0015604c_0x15604c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015604c_0x15604c");
#endif

    ctx->pc = 0x15604cu;

    // 0x15604c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15604cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156050: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x156050u;
    {
        const bool branch_taken_0x156050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156050) {
            ctx->pc = 0x156094u;
            return;
        }
    }
    ctx->pc = 0x156058u;
}
