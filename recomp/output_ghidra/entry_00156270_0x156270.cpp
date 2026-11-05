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

// Function: entry_00156270
// Address: 0x156270 - 0x15627c
void entry_00156270_0x156270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156270_0x156270");
#endif

    switch (ctx->pc) {
        case 0x156278u: goto label_156278;
        default: break;
    }

    ctx->pc = 0x156270u;

    // 0x156270: 0xc055bd8  jal         func_156F60
    ctx->pc = 0x156270u;
    SET_GPR_U32(ctx, 31, 0x156278u);
    ctx->pc = 0x156274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156270u;
    // 0x156274: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156F60u, 0x156270u, 0x156278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156278u;
label_156278:
    // 0x156278: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x156278u;
    {
        const bool branch_taken_0x156278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156278) {
            ctx->pc = 0x15628Cu;
            return;
        }
    }
    ctx->pc = 0x156280u;
}
