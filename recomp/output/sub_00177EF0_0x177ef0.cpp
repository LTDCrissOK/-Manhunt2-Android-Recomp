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

// Function: sub_00177EF0
// Address: 0x177ef0 - 0x177f10
void sub_00177EF0_0x177ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177EF0_0x177ef0");
#endif

    switch (ctx->pc) {
        case 0x177f00u: goto label_177f00;
        default: break;
    }

    ctx->pc = 0x177ef0u;

    // 0x177ef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177ef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177ef8: 0xc05e17a  jal         func_1785E8
    ctx->pc = 0x177EF8u;
    SET_GPR_U32(ctx, 31, 0x177F00u);
    ctx->pc = 0x1785E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1785E8u, 0x177EF8u, 0x177F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F00u;
label_177f00:
    // 0x177f00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177f04: 0x3e00008  jr          $ra
    ctx->pc = 0x177F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F04u;
        // 0x177f08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177F0Cu;
    // 0x177f0c: 0x0  nop
    ctx->pc = 0x177f0cu;
    // NOP
    ctx->pc = 0x177f10u;
}
