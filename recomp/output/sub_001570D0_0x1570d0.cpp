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

// Function: sub_001570D0
// Address: 0x1570d0 - 0x157100
void sub_001570D0_0x1570d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001570D0_0x1570d0");
#endif

    switch (ctx->pc) {
        case 0x1570e4u: goto label_1570e4;
        case 0x1570ecu: goto label_1570ec;
        default: break;
    }

    ctx->pc = 0x1570d0u;

    // 0x1570d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1570d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1570d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1570d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1570d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1570d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1570dc: 0xc04ef94  jal         func_13BE50
    ctx->pc = 0x1570DCu;
    SET_GPR_U32(ctx, 31, 0x1570E4u);
    ctx->pc = 0x1570E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1570DCu;
    // 0x1570e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BE50u, 0x1570DCu, 0x1570E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1570E4u;
label_1570e4:
    // 0x1570e4: 0xc04f356  jal         func_13CD58
    ctx->pc = 0x1570E4u;
    SET_GPR_U32(ctx, 31, 0x1570ECu);
    ctx->pc = 0x1570E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1570E4u;
    // 0x1570e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CD58u, 0x1570E4u, 0x1570ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1570ECu;
label_1570ec:
    // 0x1570ec: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x1570ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x1570f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1570f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1570f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1570f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1570f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1570F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1570FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570F8u;
        // 0x1570fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1570F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157100u;
}
