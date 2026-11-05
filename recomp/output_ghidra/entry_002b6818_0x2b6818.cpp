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

// Function: entry_002b6818
// Address: 0x2b6818 - 0x2b681c
void entry_002b6818_0x2b6818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b6818_0x2b6818");
#endif

    ctx->pc = 0x2b6818u;

    // 0x2b6818: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b6818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x2b681cu;
}
