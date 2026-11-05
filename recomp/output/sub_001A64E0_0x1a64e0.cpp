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

// Function: sub_001A64E0
// Address: 0x1a64e0 - 0x1a6508
void sub_001A64E0_0x1a64e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A64E0_0x1a64e0");
#endif

    switch (ctx->pc) {
        case 0x1a64f8u: goto label_1a64f8;
        default: break;
    }

    ctx->pc = 0x1a64e0u;

    // 0x1a64e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a64e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a64e4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1a64e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a64e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a64e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a64ec: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x1a64ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1a64f0: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A64F0u;
    SET_GPR_U32(ctx, 31, 0x1A64F8u);
    ctx->pc = 0x1A64F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A64F0u;
    // 0x1a64f4: 0x24c600e2  addiu       $a2, $a2, 0xE2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 226));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A64F0u, 0x1A64F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A64F8u;
label_1a64f8:
    // 0x1a64f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a64f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a64fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A64FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64FCu;
        // 0x1a6500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A64FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6504u;
    // 0x1a6504: 0x0  nop
    ctx->pc = 0x1a6504u;
    // NOP
    ctx->pc = 0x1a6508u;
}
