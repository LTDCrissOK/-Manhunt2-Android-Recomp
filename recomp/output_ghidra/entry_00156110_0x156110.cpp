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

// Function: entry_00156110
// Address: 0x156110 - 0x156120
void entry_00156110_0x156110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156110_0x156110");
#endif

    switch (ctx->pc) {
        case 0x15611cu: goto label_15611c;
        default: break;
    }

    ctx->pc = 0x156110u;

    // 0x156110: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x156110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156114: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x156114u;
    SET_GPR_U32(ctx, 31, 0x15611Cu);
    ctx->pc = 0x156118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156114u;
    // 0x156118: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x156114u, 0x15611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15611Cu;
label_15611c:
    // 0x15611c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15611Cu;
    {
        const bool branch_taken_0x15611c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15611c) {
            ctx->pc = 0x156144u;
            return;
        }
    }
    ctx->pc = 0x156124u;
}
