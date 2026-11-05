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

// Function: sub_001777D0
// Address: 0x1777d0 - 0x177800
void sub_001777D0_0x1777d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001777D0_0x1777d0");
#endif

    switch (ctx->pc) {
        case 0x1777f0u: goto label_1777f0;
        default: break;
    }

    ctx->pc = 0x1777d0u;

    // 0x1777d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1777d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1777d4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1777d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1777d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1777d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1777dc: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1777dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1777e0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1777e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1777e4: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x1777e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1777e8: 0xc04adaa  jal         func_12B6A8
    ctx->pc = 0x1777E8u;
    SET_GPR_U32(ctx, 31, 0x1777F0u);
    ctx->pc = 0x1777ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1777E8u;
    // 0x1777ec: 0x2484b060  addiu       $a0, $a0, -0x4FA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B6A8u, 0x1777E8u, 0x1777F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1777F0u;
label_1777f0:
    // 0x1777f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1777f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1777f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1777F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1777F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777F4u;
        // 0x1777f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1777F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1777FCu;
    // 0x1777fc: 0x0  nop
    ctx->pc = 0x1777fcu;
    // NOP
    ctx->pc = 0x177800u;
}
