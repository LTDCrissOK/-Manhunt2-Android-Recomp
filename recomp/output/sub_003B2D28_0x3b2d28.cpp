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

// Function: sub_003B2D28
// Address: 0x3b2d28 - 0x3b2d68
void sub_003B2D28_0x3b2d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2D28_0x3b2d28");
#endif

    switch (ctx->pc) {
        case 0x3b2d4cu: goto label_3b2d4c;
        default: break;
    }

    ctx->pc = 0x3b2d28u;

    // 0x3b2d28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b2d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b2d2c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3b2d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3b2d30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b2d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b2d34: 0x24504e4c  addiu       $s0, $v0, 0x4E4C
    ctx->pc = 0x3b2d34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 20044));
    // 0x3b2d38: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3b2d38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x424E4Cu));
    // 0x3b2d3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B2D3Cu;
    {
        const bool branch_taken_0x3b2d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2D3Cu;
        // 0x3b2d40: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2d3c) {
            ctx->pc = 0x3B2D50u;
            goto label_3b2d50;
        }
    }
    ctx->pc = 0x3B2D44u;
    // 0x3b2d44: 0xc0ecb5a  jal         func_3B2D68
    ctx->pc = 0x3B2D44u;
    SET_GPR_U32(ctx, 31, 0x3B2D4Cu);
    ctx->pc = 0x3B2D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2D68u, 0x3B2D44u, 0x3B2D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2D4Cu;
label_3b2d4c:
    // 0x3b2d4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3b2d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b2d50:
    // 0x3b2d50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b2d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b2d54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3b2d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b2d58: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3b2d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3b2d5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b2d5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2d60: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2D60u;
        // 0x3b2d64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2D68u;
}
