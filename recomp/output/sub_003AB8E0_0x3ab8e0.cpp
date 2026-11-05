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

// Function: sub_003AB8E0
// Address: 0x3ab8e0 - 0x3ab918
void sub_003AB8E0_0x3ab8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB8E0_0x3ab8e0");
#endif

    switch (ctx->pc) {
        case 0x3ab8f4u: goto label_3ab8f4;
        case 0x3ab8fcu: goto label_3ab8fc;
        case 0x3ab904u: goto label_3ab904;
        default: break;
    }

    ctx->pc = 0x3ab8e0u;

    // 0x3ab8e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ab8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ab8e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ab8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ab8e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3ab8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3ab8ec: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3AB8ECu;
    SET_GPR_U32(ctx, 31, 0x3AB8F4u);
    ctx->pc = 0x3AB8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB8ECu;
    // 0x3ab8f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3AB8ECu, 0x3AB8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB8F4u;
label_3ab8f4:
    // 0x3ab8f4: 0xc0eae46  jal         func_3AB918
    ctx->pc = 0x3AB8F4u;
    SET_GPR_U32(ctx, 31, 0x3AB8FCu);
    ctx->pc = 0x3AB8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB8F4u;
    // 0x3ab8f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB918u, 0x3AB8F4u, 0x3AB8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB8FCu;
label_3ab8fc:
    // 0x3ab8fc: 0xc0ea7de  jal         func_3A9F78
    ctx->pc = 0x3AB8FCu;
    SET_GPR_U32(ctx, 31, 0x3AB904u);
    ctx->pc = 0x3AB900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB8FCu;
    // 0x3ab900: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F78u, 0x3AB8FCu, 0x3AB904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB904u;
label_3ab904:
    // 0x3ab904: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ab904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ab908: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3ab908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab90c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ab90cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ab910: 0x3e00008  jr          $ra
    ctx->pc = 0x3AB910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB910u;
        // 0x3ab914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AB918u;
}
