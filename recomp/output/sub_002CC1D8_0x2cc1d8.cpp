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

// Function: sub_002CC1D8
// Address: 0x2cc1d8 - 0x2cc200
void sub_002CC1D8_0x2cc1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC1D8_0x2cc1d8");
#endif

    switch (ctx->pc) {
        case 0x2cc1f0u: goto label_2cc1f0;
        default: break;
    }

    ctx->pc = 0x2cc1d8u;

    // 0x2cc1d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cc1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cc1dc: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2cc1dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2cc1e0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC1E0u;
    {
        const bool branch_taken_0x2cc1e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC1E0u;
        // 0x2cc1e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc1e0) {
            ctx->pc = 0x2CC1F0u;
            goto label_2cc1f0;
        }
    }
    ctx->pc = 0x2CC1E8u;
    // 0x2cc1e8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2CC1E8u;
    SET_GPR_U32(ctx, 31, 0x2CC1F0u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2CC1E8u, 0x2CC1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC1F0u;
label_2cc1f0:
    // 0x2cc1f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC1F4u;
        // 0x2cc1f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC1FCu;
    // 0x2cc1fc: 0x0  nop
    ctx->pc = 0x2cc1fcu;
    // NOP
    ctx->pc = 0x2cc200u;
}
