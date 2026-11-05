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

// Function: sub_00226698
// Address: 0x226698 - 0x2266d0
void sub_00226698_0x226698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226698_0x226698");
#endif

    switch (ctx->pc) {
        case 0x2266c0u: goto label_2266c0;
        default: break;
    }

    ctx->pc = 0x226698u;

    // 0x226698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22669c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22669cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2266a0: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x2266a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x2266a4: 0x8c820258  lw          $v0, 0x258($a0)
    ctx->pc = 0x2266a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 600)));
    // 0x2266a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2266A8u;
    {
        const bool branch_taken_0x2266a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2266ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2266A8u;
        // 0x2266ac: 0xac830258  sw          $v1, 0x258($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2266a8) {
            ctx->pc = 0x2266C0u;
            goto label_2266c0;
        }
    }
    ctx->pc = 0x2266B0u;
    // 0x2266b0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2266B0u;
    {
        const bool branch_taken_0x2266b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2266B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2266B0u;
        // 0x2266b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2266b0) {
            ctx->pc = 0x2266C4u;
            goto label_2266c4;
        }
    }
    ctx->pc = 0x2266B8u;
    // 0x2266b8: 0xc08961e  jal         func_225878
    ctx->pc = 0x2266B8u;
    SET_GPR_U32(ctx, 31, 0x2266C0u);
    ctx->pc = 0x2266BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2266B8u;
    // 0x2266bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225878u, 0x2266B8u, 0x2266C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2266C0u;
label_2266c0:
    // 0x2266c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2266c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2266c4:
    // 0x2266c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2266C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2266C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2266C4u;
        // 0x2266c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2266C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2266CCu;
    // 0x2266cc: 0x0  nop
    ctx->pc = 0x2266ccu;
    // NOP
    ctx->pc = 0x2266d0u;
}
