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

// Function: entry_00156064
// Address: 0x156064 - 0x15606c
void entry_00156064_0x156064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156064_0x156064");
#endif

    ctx->pc = 0x156064u;

    // 0x156064: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x156064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156068: 0xc055ae2  jal         func_156B88
    ctx->pc = 0x156068u;
    SET_GPR_U32(ctx, 31, 0x156070u);
    ctx->pc = 0x156B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156B88u, 0x156068u, 0x156070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156070u;
}
