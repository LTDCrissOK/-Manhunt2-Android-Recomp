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

// Function: sub_00366730
// Address: 0x366730 - 0x366750
void sub_00366730_0x366730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366730_0x366730");
#endif

    switch (ctx->pc) {
        case 0x366740u: goto label_366740;
        default: break;
    }

    ctx->pc = 0x366730u;

    // 0x366730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x366730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x366734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x366734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x366738: 0xc0d9924  jal         func_366490
    ctx->pc = 0x366738u;
    SET_GPR_U32(ctx, 31, 0x366740u);
    ctx->pc = 0x366490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366490u, 0x366738u, 0x366740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366740u;
label_366740:
    // 0x366740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x366740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366744: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x366744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366748: 0x3e00008  jr          $ra
    ctx->pc = 0x366748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366748u;
        // 0x36674c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366750u;
}
