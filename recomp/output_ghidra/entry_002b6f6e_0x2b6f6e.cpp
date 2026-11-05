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

// Function: entry_002b6f6e
// Address: 0x2b6f6e - 0x2b6f70
void entry_002b6f6e_0x2b6f6e(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b6f6e_0x2b6f6e");
#endif

    ctx->pc = 0x2b6f6eu;

    // 0x2b6f6e: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x2b6f6eu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    ctx->pc = 0x2b6f70u;
}
