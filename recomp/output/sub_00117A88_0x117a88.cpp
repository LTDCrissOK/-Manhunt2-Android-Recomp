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

// Function: sub_00117A88
// Address: 0x117a88 - 0x117ac0
void sub_00117A88_0x117a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117A88_0x117a88");
#endif

    ctx->pc = 0x117a88u;

    // 0x117a88: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x117a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x117a8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x117a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x117a90: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x117A90u;
    {
        const bool branch_taken_0x117a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A90u;
        // 0x117a94: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a90) {
            ctx->pc = 0x117AB4u;
            goto label_117ab4;
        }
    }
    ctx->pc = 0x117A98u;
    // 0x117a98: 0xa080001c  sb          $zero, 0x1C($a0)
    ctx->pc = 0x117a98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x117a9c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x117a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x117aa0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x117aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x117aa4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x117aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x117aa8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x117aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x117aac: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x117aacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x117ab0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x117ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_117ab4:
    // 0x117ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x117AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117ABCu;
    // 0x117abc: 0x0  nop
    ctx->pc = 0x117abcu;
    // NOP
    ctx->pc = 0x117ac0u;
}
