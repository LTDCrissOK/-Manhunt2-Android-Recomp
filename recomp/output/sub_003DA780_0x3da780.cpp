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

// Function: sub_003DA780
// Address: 0x3da780 - 0x3da7b8
void sub_003DA780_0x3da780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA780_0x3da780");
#endif

    ctx->pc = 0x3da780u;

    // 0x3da780: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x3da780u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3da784: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DA784u;
    {
        const bool branch_taken_0x3da784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3da784) {
            ctx->pc = 0x3DA788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA784u;
            // 0x3da788: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA798u;
            goto label_3da798;
        }
    }
    ctx->pc = 0x3DA78Cu;
    // 0x3da78c: 0xa4800012  sh          $zero, 0x12($a0)
    ctx->pc = 0x3da78cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x3da790: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA790u;
        // 0x3da794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA798u;
label_3da798:
    // 0x3da798: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DA798u;
    {
        const bool branch_taken_0x3da798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA798u;
        // 0x3da79c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da798) {
            ctx->pc = 0x3DA7A8u;
            goto label_3da7a8;
        }
    }
    ctx->pc = 0x3DA7A0u;
    // 0x3da7a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3DA7A0u;
    {
        const bool branch_taken_0x3da7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA7A0u;
        // 0x3da7a4: 0xa4820012  sh          $v0, 0x12($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da7a0) {
            ctx->pc = 0x3DA7ACu;
            goto label_3da7ac;
        }
    }
    ctx->pc = 0x3DA7A8u;
label_3da7a8:
    // 0x3da7a8: 0xa4800012  sh          $zero, 0x12($a0)
    ctx->pc = 0x3da7a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 0));
label_3da7ac:
    // 0x3da7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA7ACu;
        // 0x3da7b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA7B4u;
    // 0x3da7b4: 0x0  nop
    ctx->pc = 0x3da7b4u;
    // NOP
    ctx->pc = 0x3da7b8u;
}
