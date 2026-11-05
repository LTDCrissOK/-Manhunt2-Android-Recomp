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

// Function: entry_00156168
// Address: 0x156168 - 0x15617a
void entry_00156168_0x156168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156168_0x156168");
#endif

    switch (ctx->pc) {
        case 0x156170u: goto label_156170;
        default: break;
    }

    ctx->pc = 0x156168u;

    // 0x156168: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x156168u;
    SET_GPR_U32(ctx, 31, 0x156170u);
    ctx->pc = 0x15616Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156168u;
    // 0x15616c: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x156168u, 0x156170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156170u;
label_156170:
    // 0x156170: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x156170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x156174: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x156174u;
    {
        const bool branch_taken_0x156174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x156178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156174u;
        // 0x156178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156174) {
            ctx->pc = 0x1561D0u;
            return;
        }
    }
    ctx->pc = 0x15617Cu;
}
