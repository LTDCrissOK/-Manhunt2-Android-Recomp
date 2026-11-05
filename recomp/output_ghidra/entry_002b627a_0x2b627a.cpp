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

// Function: entry_002b627a
// Address: 0x2b627a - 0x2b6280
void entry_002b627a_0x2b627a(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b627a_0x2b627a");
#endif

    ctx->pc = 0x2b627au;

    // 0x2b627a: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x2b627au;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x2b627e: 0x102d1062  beq         $at, $t5, . + 4 + (0x1062 << 2)
    ctx->pc = 0x2B627Eu;
    {
        const bool branch_taken_0x2b627e = (GPR_U64(ctx, 1) == GPR_U64(ctx, 13));
        if (branch_taken_0x2b627e) {
            ctx->pc = 0x2BA40Au;
            return;
        }
    }
    ctx->pc = 0x2B6286u;
}
