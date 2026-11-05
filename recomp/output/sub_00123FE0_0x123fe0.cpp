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

// Function: sub_00123FE0
// Address: 0x123fe0 - 0x124000
void sub_00123FE0_0x123fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123FE0_0x123fe0");
#endif

    switch (ctx->pc) {
        case 0x123ff4u: goto label_123ff4;
        default: break;
    }

    ctx->pc = 0x123fe0u;

    // 0x123fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123fe4: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x123fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    // 0x123fe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x123fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x123fec: 0xc049000  jal         func_124000
    ctx->pc = 0x123FECu;
    SET_GPR_U32(ctx, 31, 0x123FF4u);
    ctx->pc = 0x123FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123FECu;
    // 0x123ff0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124000u, 0x123FECu, 0x123FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123FF4u;
label_123ff4:
    // 0x123ff4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x123ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x123FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FF8u;
        // 0x123ffc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124000u;
}
