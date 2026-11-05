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

// Function: sub_0016C6A8
// Address: 0x16c6a8 - 0x16c6d0
void sub_0016C6A8_0x16c6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C6A8_0x16c6a8");
#endif

    switch (ctx->pc) {
        case 0x16c6c4u: goto label_16c6c4;
        default: break;
    }

    ctx->pc = 0x16c6a8u;

    // 0x16c6a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c6ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c6b0: 0x90820009  lbu         $v0, 0x9($a0)
    ctx->pc = 0x16c6b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x16c6b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16C6B4u;
    {
        const bool branch_taken_0x16c6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C6B4u;
        // 0x16c6b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c6b4) {
            ctx->pc = 0x16C6C8u;
            goto label_16c6c8;
        }
    }
    ctx->pc = 0x16C6BCu;
    // 0x16c6bc: 0xc05bcbc  jal         func_16F2F0
    ctx->pc = 0x16C6BCu;
    SET_GPR_U32(ctx, 31, 0x16C6C4u);
    ctx->pc = 0x16F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2F0u, 0x16C6BCu, 0x16C6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C6C4u;
label_16c6c4:
    // 0x16c6c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16c6c8:
    // 0x16c6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x16C6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C6C8u;
        // 0x16c6cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C6D0u;
}
