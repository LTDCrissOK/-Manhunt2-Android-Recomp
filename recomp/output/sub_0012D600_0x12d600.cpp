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

// Function: sub_0012D600
// Address: 0x12d600 - 0x12d610
void sub_0012D600_0x12d600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D600_0x12d600");
#endif

    switch (ctx->pc) {
        case 0x12d608u: goto label_12d608;
        default: break;
    }

    ctx->pc = 0x12d600u;

    // 0x12d600: 0xc04b676  jal         func_12D9D8
    ctx->pc = 0x12D600u;
    SET_GPR_U32(ctx, 31, 0x12D608u);
    ctx->pc = 0x12D604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D600u;
    // 0x12d604: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D9D8u, 0x12D600u, 0x12D608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D608u;
label_12d608:
    // 0x12d608: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12D608u;
    {
        const bool branch_taken_0x12d608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D608u;
        // 0x12d60c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d608) {
            ctx->pc = 0x12D61Cu;
            return;
        }
    }
    ctx->pc = 0x12D610u;
}
