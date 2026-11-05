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

// Function: sub_0017D5C0
// Address: 0x17d5c0 - 0x17d608
void sub_0017D5C0_0x17d5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D5C0_0x17d5c0");
#endif

    switch (ctx->pc) {
        case 0x17d5d0u: goto label_17d5d0;
        default: break;
    }

    ctx->pc = 0x17d5c0u;

    // 0x17d5c0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x17d5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x17d5c4: 0x8c8200e8  lw          $v0, 0xE8($a0)
    ctx->pc = 0x17d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x17d5c8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D5C8u;
    {
        const bool branch_taken_0x17d5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d5c8) {
            ctx->pc = 0x17D5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D5C8u;
            // 0x17d5cc: 0x8c8200ec  lw          $v0, 0xEC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D5D8u;
            goto label_17d5d8;
        }
    }
    ctx->pc = 0x17D5D0u;
label_17d5d0:
    // 0x17d5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x17D5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D5D0u;
        // 0x17d5d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D5D8u;
label_17d5d8:
    // 0x17d5d8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17D5D8u;
    {
        const bool branch_taken_0x17d5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d5d8) {
            ctx->pc = 0x17D5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D5D8u;
            // 0x17d5dc: 0x8c8300e4  lw          $v1, 0xE4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D5F8u;
            goto label_17d5f8;
        }
    }
    ctx->pc = 0x17D5E0u;
    // 0x17d5e0: 0x8c8200f4  lw          $v0, 0xF4($a0)
    ctx->pc = 0x17d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x17d5e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17D5E4u;
    {
        const bool branch_taken_0x17d5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D5E4u;
        // 0x17d5e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d5e4) {
            ctx->pc = 0x17D5D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d5d0;
        }
    }
    ctx->pc = 0x17D5ECu;
    // 0x17d5ec: 0x8c8300e4  lw          $v1, 0xE4($a0)
    ctx->pc = 0x17d5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x17d5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x17D5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D5F0u;
        // 0x17d5f4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D5F8u;
label_17d5f8:
    // 0x17d5f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x17D5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D5FCu;
        // 0x17d600: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D604u;
    // 0x17d604: 0x0  nop
    ctx->pc = 0x17d604u;
    // NOP
    ctx->pc = 0x17d608u;
}
