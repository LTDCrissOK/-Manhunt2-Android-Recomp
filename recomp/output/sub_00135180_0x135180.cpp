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

// Function: sub_00135180
// Address: 0x135180 - 0x135190
void sub_00135180_0x135180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135180_0x135180");
#endif

    switch (ctx->pc) {
        case 0x135188u: goto label_135188;
        default: break;
    }

    ctx->pc = 0x135180u;

    // 0x135180: 0xc04d4be  jal         func_1352F8
    ctx->pc = 0x135180u;
    SET_GPR_U32(ctx, 31, 0x135188u);
    ctx->pc = 0x135184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135180u;
    // 0x135184: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1352F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1352F8u, 0x135180u, 0x135188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135188u;
label_135188:
    // 0x135188: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x135188u;
    {
        const bool branch_taken_0x135188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135188u;
        // 0x13518c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135188) {
            ctx->pc = 0x135198u;
            return;
        }
    }
    ctx->pc = 0x135190u;
}
