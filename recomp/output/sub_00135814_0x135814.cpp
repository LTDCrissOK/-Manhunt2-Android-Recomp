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

// Function: sub_00135814
// Address: 0x135814 - 0x135824
void sub_00135814_0x135814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135814_0x135814");
#endif

    switch (ctx->pc) {
        case 0x13581cu: goto label_13581c;
        default: break;
    }

    ctx->pc = 0x135814u;

    // 0x135814: 0xc04d66c  jal         func_1359B0
    ctx->pc = 0x135814u;
    SET_GPR_U32(ctx, 31, 0x13581Cu);
    ctx->pc = 0x135818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135814u;
    // 0x135818: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1359B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1359B0u, 0x135814u, 0x13581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13581Cu;
label_13581c:
    // 0x13581c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13581Cu;
    {
        const bool branch_taken_0x13581c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13581Cu;
        // 0x135820: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13581c) {
            ctx->pc = 0x13582Cu;
            return;
        }
    }
    ctx->pc = 0x135824u;
}
