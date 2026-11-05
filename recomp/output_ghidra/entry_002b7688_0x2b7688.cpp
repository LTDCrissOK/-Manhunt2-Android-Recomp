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

// Function: entry_002b7688
// Address: 0x2b7688 - 0x2b7694
void entry_002b7688_0x2b7688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b7688_0x2b7688");
#endif

    ctx->pc = 0x2b7688u;

    // 0x2b7688: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b7688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b768c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b768cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b7690: 0xc0ad65a  jal         func_2B5968
    ctx->pc = 0x2B7690u;
    SET_GPR_U32(ctx, 31, 0x2B7698u);
    ctx->pc = 0x2B5968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5968u, 0x2B7690u, 0x2B7698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7698u;
}
