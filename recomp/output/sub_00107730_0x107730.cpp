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

// Function: sub_00107730
// Address: 0x107730 - 0x107750
void sub_00107730_0x107730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107730_0x107730");
#endif

    switch (ctx->pc) {
        case 0x107740u: goto label_107740;
        default: break;
    }

    ctx->pc = 0x107730u;

    // 0x107730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107738: 0xc0f6c2e  jal         func_3DB0B8
    ctx->pc = 0x107738u;
    SET_GPR_U32(ctx, 31, 0x107740u);
    ctx->pc = 0x3DB0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB0B8u, 0x107738u, 0x107740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107740u;
label_107740:
    // 0x107740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107744: 0x3e00008  jr          $ra
    ctx->pc = 0x107744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107744u;
        // 0x107748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10774Cu;
    // 0x10774c: 0x0  nop
    ctx->pc = 0x10774cu;
    // NOP
    ctx->pc = 0x107750u;
}
