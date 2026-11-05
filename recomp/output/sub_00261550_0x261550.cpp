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

// Function: sub_00261550
// Address: 0x261550 - 0x261570
void sub_00261550_0x261550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261550_0x261550");
#endif

    switch (ctx->pc) {
        case 0x261560u: goto label_261560;
        default: break;
    }

    ctx->pc = 0x261550u;

    // 0x261550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x261550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x261554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x261554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x261558: 0xc0d6d96  jal         func_35B658
    ctx->pc = 0x261558u;
    SET_GPR_U32(ctx, 31, 0x261560u);
    ctx->pc = 0x35B658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B658u, 0x261558u, 0x261560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261560u;
label_261560:
    // 0x261560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x261560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261564: 0x3e00008  jr          $ra
    ctx->pc = 0x261564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261564u;
        // 0x261568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26156Cu;
    // 0x26156c: 0x0  nop
    ctx->pc = 0x26156cu;
    // NOP
    ctx->pc = 0x261570u;
}
