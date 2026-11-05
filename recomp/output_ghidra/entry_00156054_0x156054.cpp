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

// Function: entry_00156054
// Address: 0x156054 - 0x15605c
void entry_00156054_0x156054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156054_0x156054");
#endif

    ctx->pc = 0x156054u;

    // 0x156054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x156054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156058: 0xc055a28  jal         func_1568A0
    ctx->pc = 0x156058u;
    SET_GPR_U32(ctx, 31, 0x156060u);
    ctx->pc = 0x1568A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1568A0u, 0x156058u, 0x156060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156060u;
}
