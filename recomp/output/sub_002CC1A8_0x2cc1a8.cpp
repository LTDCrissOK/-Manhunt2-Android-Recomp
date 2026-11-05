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

// Function: sub_002CC1A8
// Address: 0x2cc1a8 - 0x2cc1d8
void sub_002CC1A8_0x2cc1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC1A8_0x2cc1a8");
#endif

    switch (ctx->pc) {
        case 0x2cc1c8u: goto label_2cc1c8;
        default: break;
    }

    ctx->pc = 0x2cc1a8u;

    // 0x2cc1a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cc1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cc1ac: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2cc1acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2cc1b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cc1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cc1b4: 0x2484a608  addiu       $a0, $a0, -0x59F8
    ctx->pc = 0x2cc1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944264));
    // 0x2cc1b8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2cc1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x2cc1bc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2cc1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x57A614u));
    // 0x2cc1c0: 0xc0e3d1e  jal         func_38F478
    ctx->pc = 0x2CC1C0u;
    SET_GPR_U32(ctx, 31, 0x2CC1C8u);
    ctx->pc = 0x2CC1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC1C0u;
    // 0x2cc1c4: 0xac62a618  sw          $v0, -0x59E8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294944280), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F478u, 0x2CC1C0u, 0x2CC1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC1C8u;
label_2cc1c8:
    // 0x2cc1c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC1CCu;
        // 0x2cc1d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC1D4u;
    // 0x2cc1d4: 0x0  nop
    ctx->pc = 0x2cc1d4u;
    // NOP
    ctx->pc = 0x2cc1d8u;
}
