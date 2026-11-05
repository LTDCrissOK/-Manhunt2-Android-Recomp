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

// Function: sub_002E37A8
// Address: 0x2e37a8 - 0x2e37e8
void sub_002E37A8_0x2e37a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E37A8_0x2e37a8");
#endif

    ctx->pc = 0x2e37a8u;

    // 0x2e37a8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e37a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e37ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E37ACu;
    {
        const bool branch_taken_0x2e37ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e37ac) {
            ctx->pc = 0x2E37DCu;
            goto label_2e37dc;
        }
    }
    ctx->pc = 0x2E37B4u;
    // 0x2e37b4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e37b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e37b8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2e37b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e37bc: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E37BCu;
    {
        const bool branch_taken_0x2e37bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e37bc) {
            ctx->pc = 0x2E37C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E37BCu;
            // 0x2e37c0: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E37C4u;
            goto label_2e37c4;
        }
    }
    ctx->pc = 0x2E37C4u;
label_2e37c4:
    // 0x2e37c4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2e37c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e37c8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E37C8u;
    {
        const bool branch_taken_0x2e37c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2e37c8) {
            ctx->pc = 0x2E37CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E37C8u;
            // 0x2e37cc: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E37DCu;
            goto label_2e37dc;
        }
    }
    ctx->pc = 0x2E37D0u;
    // 0x2e37d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e37d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e37d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E37D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E37D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E37D4u;
        // 0x2e37d8: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E37D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E37DCu;
label_2e37dc:
    // 0x2e37dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E37DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E37DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E37E4u;
    // 0x2e37e4: 0x0  nop
    ctx->pc = 0x2e37e4u;
    // NOP
    ctx->pc = 0x2e37e8u;
}
