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

// Function: sub_001721A8
// Address: 0x1721a8 - 0x1721d0
void sub_001721A8_0x1721a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001721A8_0x1721a8");
#endif

    switch (ctx->pc) {
        case 0x1721c4u: goto label_1721c4;
        default: break;
    }

    ctx->pc = 0x1721a8u;

    // 0x1721a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1721a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1721ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1721acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1721b0: 0x8c8202b0  lw          $v0, 0x2B0($a0)
    ctx->pc = 0x1721b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 688)));
    // 0x1721b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1721B4u;
    {
        const bool branch_taken_0x1721b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1721B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1721B4u;
        // 0x1721b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1721b4) {
            ctx->pc = 0x1721C8u;
            goto label_1721c8;
        }
    }
    ctx->pc = 0x1721BCu;
    // 0x1721bc: 0xc05cef8  jal         func_173BE0
    ctx->pc = 0x1721BCu;
    SET_GPR_U32(ctx, 31, 0x1721C4u);
    ctx->pc = 0x173BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173BE0u, 0x1721BCu, 0x1721C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1721C4u;
label_1721c4:
    // 0x1721c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1721c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1721c8:
    // 0x1721c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1721C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1721CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1721C8u;
        // 0x1721cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1721C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1721D0u;
}
