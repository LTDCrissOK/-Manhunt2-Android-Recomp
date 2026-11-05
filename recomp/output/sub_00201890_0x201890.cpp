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

// Function: sub_00201890
// Address: 0x201890 - 0x2018b0
void sub_00201890_0x201890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201890_0x201890");
#endif

    switch (ctx->pc) {
        case 0x2018a0u: goto label_2018a0;
        default: break;
    }

    ctx->pc = 0x201890u;

    // 0x201890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201898: 0xc080636  jal         func_2018D8
    ctx->pc = 0x201898u;
    SET_GPR_U32(ctx, 31, 0x2018A0u);
    ctx->pc = 0x20189Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201898u;
    // 0x20189c: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2018D8u, 0x201898u, 0x2018A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2018A0u;
label_2018a0:
    // 0x2018a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2018a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2018a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2018A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2018A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018A4u;
        // 0x2018a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2018A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2018ACu;
    // 0x2018ac: 0x0  nop
    ctx->pc = 0x2018acu;
    // NOP
    ctx->pc = 0x2018b0u;
}
