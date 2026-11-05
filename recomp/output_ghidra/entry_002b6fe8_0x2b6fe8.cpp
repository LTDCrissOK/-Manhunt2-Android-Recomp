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

// Function: entry_002b6fe8
// Address: 0x2b6fe8 - 0x2b6fec
void entry_002b6fe8_0x2b6fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b6fe8_0x2b6fe8");
#endif

    ctx->pc = 0x2b6fe8u;

    // 0x2b6fe8: 0x14710005  bne         $v1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6FE8u;
    {
        const bool branch_taken_0x2b6fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x2b6fe8) {
            ctx->pc = 0x2B7000u;
            return;
        }
    }
    ctx->pc = 0x2B6FF0u;
}
