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

// Function: sub_00226720
// Address: 0x226720 - 0x226750
void sub_00226720_0x226720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226720_0x226720");
#endif

    ctx->pc = 0x226720u;

    // 0x226720: 0x8c830228  lw          $v1, 0x228($a0)
    ctx->pc = 0x226720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
    // 0x226724: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x226724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x226728: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x226728u;
    {
        const bool branch_taken_0x226728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226728u;
        // 0x22672c: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226728) {
            ctx->pc = 0x226744u;
            goto label_226744;
        }
    }
    ctx->pc = 0x226730u;
    // 0x226730: 0x8c820224  lw          $v0, 0x224($a0)
    ctx->pc = 0x226730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x226734: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x226734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x226738: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x226738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22673c: 0x3e00008  jr          $ra
    ctx->pc = 0x22673Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22673Cu;
        // 0x226740: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22673Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226744u;
label_226744:
    // 0x226744: 0x3e00008  jr          $ra
    ctx->pc = 0x226744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226744u;
        // 0x226748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22674Cu;
    // 0x22674c: 0x0  nop
    ctx->pc = 0x22674cu;
    // NOP
    ctx->pc = 0x226750u;
}
