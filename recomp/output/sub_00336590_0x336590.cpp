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

// Function: sub_00336590
// Address: 0x336590 - 0x3365b8
void sub_00336590_0x336590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336590_0x336590");
#endif

    switch (ctx->pc) {
        case 0x3365a8u: goto label_3365a8;
        default: break;
    }

    ctx->pc = 0x336590u;

    // 0x336590: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x336590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336594: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x336598: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x336598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x33659c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33659cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3365a0: 0xc0fbb00  jal         func_3EEC00
    ctx->pc = 0x3365A0u;
    SET_GPR_U32(ctx, 31, 0x3365A8u);
    ctx->pc = 0x3365A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3365A0u;
    // 0x3365a4: 0x24846ea0  addiu       $a0, $a0, 0x6EA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EEC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EEC00u, 0x3365A0u, 0x3365A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3365A8u;
label_3365a8:
    // 0x3365a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3365a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3365ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3365ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3365B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3365ACu;
        // 0x3365b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3365ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3365B4u;
    // 0x3365b4: 0x0  nop
    ctx->pc = 0x3365b4u;
    // NOP
    ctx->pc = 0x3365b8u;
}
