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

// Function: sub_001777A0
// Address: 0x1777a0 - 0x1777d0
void sub_001777A0_0x1777a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001777A0_0x1777a0");
#endif

    switch (ctx->pc) {
        case 0x1777c0u: goto label_1777c0;
        default: break;
    }

    ctx->pc = 0x1777a0u;

    // 0x1777a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1777a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1777a4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1777a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1777a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1777a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1777ac: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1777acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1777b0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1777b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1777b4: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x1777b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1777b8: 0xc04ad96  jal         func_12B658
    ctx->pc = 0x1777B8u;
    SET_GPR_U32(ctx, 31, 0x1777C0u);
    ctx->pc = 0x1777BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1777B8u;
    // 0x1777bc: 0x2484b060  addiu       $a0, $a0, -0x4FA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B658u, 0x1777B8u, 0x1777C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1777C0u;
label_1777c0:
    // 0x1777c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1777c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1777c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1777C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1777C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777C4u;
        // 0x1777c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1777C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1777CCu;
    // 0x1777cc: 0x0  nop
    ctx->pc = 0x1777ccu;
    // NOP
    ctx->pc = 0x1777d0u;
}
