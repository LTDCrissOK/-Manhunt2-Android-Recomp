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

// Function: sub_001FEC78
// Address: 0x1fec78 - 0x1fecd0
void sub_001FEC78_0x1fec78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEC78_0x1fec78");
#endif

    ctx->pc = 0x1fec78u;

    // 0x1fec78: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1fec78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fec7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fec80: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FEC80u;
    {
        const bool branch_taken_0x1fec80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FEC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC80u;
        // 0x1fec84: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec80) {
            ctx->pc = 0x1FECC0u;
            goto label_1fecc0;
        }
    }
    ctx->pc = 0x1FEC88u;
    // 0x1fec88: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FEC88u;
    {
        const bool branch_taken_0x1fec88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fec88) {
            ctx->pc = 0x1FEC8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEC88u;
            // 0x1fec8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FECA0u;
            goto label_1feca0;
        }
    }
    ctx->pc = 0x1FEC90u;
    // 0x1fec90: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FEC90u;
    {
        const bool branch_taken_0x1fec90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fec90) {
            ctx->pc = 0x1FECB8u;
            goto label_1fecb8;
        }
    }
    ctx->pc = 0x1FEC98u;
    // 0x1fec98: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FECA0u;
label_1feca0:
    // 0x1feca0: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FECA0u;
    {
        const bool branch_taken_0x1feca0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECA0u;
        // 0x1feca4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feca0) {
            ctx->pc = 0x1FECC0u;
            goto label_1fecc0;
        }
    }
    ctx->pc = 0x1FECA8u;
    // 0x1feca8: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FECA8u;
    {
        const bool branch_taken_0x1feca8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECA8u;
        // 0x1fecac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feca8) {
            ctx->pc = 0x1FECC8u;
            goto label_1fecc8;
        }
    }
    ctx->pc = 0x1FECB0u;
    // 0x1fecb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FECB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FECB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FECB8u;
label_1fecb8:
    // 0x1fecb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FECB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECB8u;
        // 0x1fecbc: 0xa0800050  sb          $zero, 0x50($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FECB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FECC0u;
label_1fecc0:
    // 0x1fecc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FECC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECC0u;
        // 0x1fecc4: 0xa0850050  sb          $a1, 0x50($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FECC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FECC8u;
label_1fecc8:
    // 0x1fecc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FECC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECC8u;
        // 0x1feccc: 0xa0820050  sb          $v0, 0x50($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FECC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FECD0u;
}
