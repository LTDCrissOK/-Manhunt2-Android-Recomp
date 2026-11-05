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

// Function: entry_00156088
// Address: 0x156088 - 0x15608c
void entry_00156088_0x156088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156088_0x156088");
#endif

    ctx->pc = 0x156088u;

    // 0x156088: 0xc055b88  jal         func_156E20
    ctx->pc = 0x156088u;
    SET_GPR_U32(ctx, 31, 0x156090u);
    ctx->pc = 0x156E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156E20u, 0x156088u, 0x156090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156090u;
}
