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

// Function: sub_003B10C0
// Address: 0x3b10c0 - 0x3b1110
void sub_003B10C0_0x3b10c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B10C0_0x3b10c0");
#endif

    switch (ctx->pc) {
        case 0x3b10f0u: goto label_3b10f0;
        default: break;
    }

    ctx->pc = 0x3b10c0u;

    // 0x3b10c0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3b10c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3b10c4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B10C4u;
    {
        const bool branch_taken_0x3b10c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B10C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B10C4u;
        // 0x3b10c8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b10c4) {
            ctx->pc = 0x3B10E8u;
            goto label_3b10e8;
        }
    }
    ctx->pc = 0x3B10CCu;
    // 0x3b10cc: 0xac880024  sw          $t0, 0x24($a0)
    ctx->pc = 0x3b10ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 8));
    // 0x3b10d0: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x3b10d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x3b10d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b10d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b10d8: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x3b10d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x3b10dc: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x3b10dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x3b10e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B10E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B10E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B10E0u;
        // 0x3b10e4: 0xac870020  sw          $a3, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B10E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B10E8u;
label_3b10e8:
    // 0x3b10e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B10E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B10ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B10E8u;
        // 0x3b10ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B10E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B10F0u;
label_3b10f0:
    // 0x3b10f0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3b10f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3b10f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B10F4u;
    {
        const bool branch_taken_0x3b10f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B10F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B10F4u;
        // 0x3b10f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b10f4) {
            ctx->pc = 0x3B1104u;
            goto label_3b1104;
        }
    }
    ctx->pc = 0x3B10FCu;
    // 0x3b10fc: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x3b10fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x3b1100: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3b1100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3b1104:
    // 0x3b1104: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B110Cu;
    // 0x3b110c: 0x0  nop
    ctx->pc = 0x3b110cu;
    // NOP
    ctx->pc = 0x3b1110u;
}
