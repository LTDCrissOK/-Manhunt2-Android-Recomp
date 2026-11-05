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

// Function: sub_003B1090
// Address: 0x3b1090 - 0x3b10c0
void sub_003B1090_0x3b1090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1090_0x3b1090");
#endif

    ctx->pc = 0x3b1090u;

    // 0x3b1090: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3b1090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3b1094: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B1094u;
    {
        const bool branch_taken_0x3b1094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1094u;
        // 0x3b1098: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1094) {
            ctx->pc = 0x3B10B8u;
            goto label_3b10b8;
        }
    }
    ctx->pc = 0x3B109Cu;
    // 0x3b109c: 0xac880024  sw          $t0, 0x24($a0)
    ctx->pc = 0x3b109cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 8));
    // 0x3b10a0: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x3b10a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x3b10a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b10a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b10a8: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x3b10a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x3b10ac: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x3b10acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x3b10b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B10B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B10B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B10B0u;
        // 0x3b10b4: 0xac870020  sw          $a3, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B10B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B10B8u;
label_3b10b8:
    // 0x3b10b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B10B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B10BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B10B8u;
        // 0x3b10bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B10B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B10C0u;
}
