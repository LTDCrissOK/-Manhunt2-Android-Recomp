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

// Function: entry_002b6338
// Address: 0x2b6338 - 0x2b633c
void entry_002b6338_0x2b6338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b6338_0x2b6338");
#endif

    ctx->pc = 0x2b6338u;

    // 0x2b6338: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B6338u;
    {
        const bool branch_taken_0x2b6338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6338) {
            ctx->pc = 0x2B637Cu;
            return;
        }
    }
    ctx->pc = 0x2B6340u;
}
