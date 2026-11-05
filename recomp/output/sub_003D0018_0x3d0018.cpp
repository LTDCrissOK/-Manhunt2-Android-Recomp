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

// Function: sub_003D0018
// Address: 0x3d0018 - 0x3d0068
void sub_003D0018_0x3d0018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0018_0x3d0018");
#endif

    switch (ctx->pc) {
        case 0x3d0030u: goto label_3d0030;
        default: break;
    }

    ctx->pc = 0x3d0018u;

    // 0x3d0018: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x3d0018u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x3d001c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3d001cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3d0020: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3d0020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3d0024: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3D0024u;
    {
        const bool branch_taken_0x3d0024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0024u;
        // 0x3d0028: 0x3202b  sltu        $a0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0024) {
            ctx->pc = 0x3D005Cu;
            goto label_3d005c;
        }
    }
    ctx->pc = 0x3D002Cu;
    // 0x3d002c: 0x0  nop
    ctx->pc = 0x3d002cu;
    // NOP
label_3d0030:
    // 0x3d0030: 0x42000039  di
    ctx->pc = 0x3d0030u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3d0034: 0x40f  sync.p
    ctx->pc = 0x3d0034u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3d0038: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3d0038u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3d003c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3d003cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3d0040: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3d0040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3d0044: 0x0  nop
    ctx->pc = 0x3d0044u;
    // NOP
    // 0x3d0048: 0x0  nop
    ctx->pc = 0x3d0048u;
    // NOP
    // 0x3d004c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3D004Cu;
    {
        const bool branch_taken_0x3d004c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d004c) {
            ctx->pc = 0x3D0030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0030;
        }
    }
    ctx->pc = 0x3D0054u;
    // 0x3d0054: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D0058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0054u;
        // 0x3d0058: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D005Cu;
label_3d005c:
    // 0x3d005c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3d005cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0060: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D0064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0060u;
        // 0x3d0064: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0068u;
}
