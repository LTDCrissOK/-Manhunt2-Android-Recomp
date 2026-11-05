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

// Function: entry_002b6f70
// Address: 0x2b6f70 - 0x2b6f76
void entry_002b6f70_0x2b6f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b6f70_0x2b6f70");
#endif

    ctx->pc = 0x2b6f70u;

    // 0x2b6f70: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b6f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b6f74: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2B6F74u;
    SET_GPR_U32(ctx, 31, 0x2B6F7Cu);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2B6F74u, 0x2B6F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6F7Cu;
}
