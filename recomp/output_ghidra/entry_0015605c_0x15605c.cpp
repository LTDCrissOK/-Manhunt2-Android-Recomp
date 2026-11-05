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

// Function: entry_0015605c
// Address: 0x15605c - 0x156064
void entry_0015605c_0x15605c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015605c_0x15605c");
#endif

    ctx->pc = 0x15605cu;

    // 0x15605c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15605cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156060: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x156060u;
    {
        const bool branch_taken_0x156060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156060) {
            ctx->pc = 0x156094u;
            return;
        }
    }
    ctx->pc = 0x156068u;
}
