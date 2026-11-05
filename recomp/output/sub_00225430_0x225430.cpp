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

// Function: sub_00225430
// Address: 0x225430 - 0x225460
void sub_00225430_0x225430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225430_0x225430");
#endif

    switch (ctx->pc) {
        case 0x225454u: goto label_225454;
        default: break;
    }

    ctx->pc = 0x225430u;

    // 0x225430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225434: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x225434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x225438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22543c: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x22543cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x225440: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x225440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x225444: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x225444u;
    {
        const bool branch_taken_0x225444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x225448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225444u;
        // 0x225448: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225444) {
            ctx->pc = 0x225458u;
            goto label_225458;
        }
    }
    ctx->pc = 0x22544Cu;
    // 0x22544c: 0xc08394a  jal         func_20E528
    ctx->pc = 0x22544Cu;
    SET_GPR_U32(ctx, 31, 0x225454u);
    ctx->pc = 0x20E528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E528u, 0x22544Cu, 0x225454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225454u;
label_225454:
    // 0x225454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225458:
    // 0x225458: 0x3e00008  jr          $ra
    ctx->pc = 0x225458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225458u;
        // 0x22545c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225460u;
}
