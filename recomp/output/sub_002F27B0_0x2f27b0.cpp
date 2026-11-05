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

// Function: sub_002F27B0
// Address: 0x2f27b0 - 0x2f27e0
void sub_002F27B0_0x2f27b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F27B0_0x2f27b0");
#endif

    switch (ctx->pc) {
        case 0x2f27d4u: goto label_2f27d4;
        default: break;
    }

    ctx->pc = 0x2f27b0u;

    // 0x2f27b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f27b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f27b4: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2f27b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x2f27b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f27b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f27bc: 0x8c8211c0  lw          $v0, 0x11C0($a0)
    ctx->pc = 0x2f27bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4544)));
    // 0x2f27c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f27c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f27c4: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F27C4u;
    {
        const bool branch_taken_0x2f27c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F27C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F27C4u;
        // 0x2f27c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f27c4) {
            ctx->pc = 0x2F27D8u;
            goto label_2f27d8;
        }
    }
    ctx->pc = 0x2F27CCu;
    // 0x2f27cc: 0xc08dbf6  jal         func_236FD8
    ctx->pc = 0x2F27CCu;
    SET_GPR_U32(ctx, 31, 0x2F27D4u);
    ctx->pc = 0x236FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FD8u, 0x2F27CCu, 0x2F27D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F27D4u;
label_2f27d4:
    // 0x2f27d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f27d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f27d8:
    // 0x2f27d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F27D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F27DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F27D8u;
        // 0x2f27dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F27D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F27E0u;
}
