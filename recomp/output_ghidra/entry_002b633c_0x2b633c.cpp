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

// Function: entry_002b633c
// Address: 0x2b633c - 0x2b6344
void entry_002b633c_0x2b633c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b633c_0x2b633c");
#endif

    ctx->pc = 0x2b633cu;

    // 0x2b633c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2b633cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2b6340: 0xc0ad65a  jal         func_2B5968
    ctx->pc = 0x2B6340u;
    SET_GPR_U32(ctx, 31, 0x2B6348u);
    ctx->pc = 0x2B5968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5968u, 0x2B6340u, 0x2B6348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6348u;
}
