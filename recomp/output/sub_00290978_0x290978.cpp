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

// Function: sub_00290978
// Address: 0x290978 - 0x2909b0
void sub_00290978_0x290978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290978_0x290978");
#endif

    switch (ctx->pc) {
        case 0x290994u: goto label_290994;
        case 0x2909a4u: goto label_2909a4;
        default: break;
    }

    ctx->pc = 0x290978u;

    // 0x290978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x290978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29097c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29097cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290980: 0x8c8202e0  lw          $v0, 0x2E0($a0)
    ctx->pc = 0x290980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 736)));
    // 0x290984: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x290984u;
    {
        const bool branch_taken_0x290984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290984) {
            ctx->pc = 0x29099Cu;
            goto label_29099c;
        }
    }
    ctx->pc = 0x29098Cu;
    // 0x29098c: 0xc0a9758  jal         func_2A5D60
    ctx->pc = 0x29098Cu;
    SET_GPR_U32(ctx, 31, 0x290994u);
    ctx->pc = 0x2A5D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5D60u, 0x29098Cu, 0x290994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290994u;
label_290994:
    // 0x290994: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x290994u;
    {
        const bool branch_taken_0x290994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290994u;
        // 0x290998: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290994) {
            ctx->pc = 0x2909A8u;
            goto label_2909a8;
        }
    }
    ctx->pc = 0x29099Cu;
label_29099c:
    // 0x29099c: 0xc0a7b60  jal         func_29ED80
    ctx->pc = 0x29099Cu;
    SET_GPR_U32(ctx, 31, 0x2909A4u);
    ctx->pc = 0x29ED80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29ED80u, 0x29099Cu, 0x2909A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2909A4u;
label_2909a4:
    // 0x2909a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2909a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2909a8:
    // 0x2909a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2909A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2909ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909A8u;
        // 0x2909ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2909A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2909B0u;
}
